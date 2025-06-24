// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysLiveLinkController.h"
#include "MoSysLiveLinkRole.h"

#include "CameraCalibrationSubsystem.h"
#include "CineCameraComponent.h"
#include "Components/SceneComponent.h"
#include "Engine/Engine.h"
#include "Features/IModularFeatures.h"
#include "GameFramework/Actor.h"
#include "ILiveLinkClient.h"
#include "LensComponent.h"
#include "LiveLinkComponentController.h"
#include "Roles/LiveLinkCameraRole.h"

#include "MoSysLensDistortionComponent.h"
#include "MoSysLensDistortUpdater.h"
#include "MoSysLensDistortionModelHandler.h"
#include "MoSysLensModel.h"
#include "MoSysTrackingConversions.h"
#include "MoSysTrackingPrivate.h"
#include "MoSysTrackingTypes.h"


#if WITH_EDITOR
#include "Kismet2/ComponentEditorUtils.h"
#endif

// The number of frames to wait before we are sure data transmission has stalled
#define STALLED_FRAME_COUNT_MAX	10

UMoSysLiveLinkController::UMoSysLiveLinkController()
	: ULiveLinkTransformController()
	, StalledFrameCounter(0)
{
    // We default to this off because if we are root it will be world anyway, and normal operation is inside a Stage actor.
    TransformData.bWorldTransform = false;

	// From LiveLinkLensController
	if (!HasAnyFlags(RF_ArchetypeObject | RF_ClassDefaultObject))
	{
		DistortionProducerID = FGuid::NewGuid();
	}
}

bool UMoSysLiveLinkController::HasValidData()
{
	FLiveLinkSubjectFrameData SubjectData;
	ILiveLinkClient& LiveLinkClient = IModularFeatures::Get().GetModularFeature<ILiveLinkClient>(ILiveLinkClient::ModularFeatureName);
	return LiveLinkClient.EvaluateFrame_AnyThread(SelectedSubject.Subject, SelectedSubject.Role, SubjectData);
}

bool UMoSysLiveLinkController::InterpolateLiveLinkData(const FLiveLinkMoSysFrameData* LiveLinkData1, const FLiveLinkMoSysFrameData* LiveLinkData2, FLiveLinkMoSysFrameData& OutInterpolatedData, float InterpWeight)
{
	if (!LiveLinkData1 || !LiveLinkData2)
	{
		return false;
	}

	//Interpolate Transform and other applicable members
	OutInterpolatedData.Transform.Blend(LiveLinkData1->Transform, LiveLinkData2->Transform, InterpWeight);
	OutInterpolatedData.RawZoom = LiveLinkData1->RawZoom + LiveLinkData2->RawZoom;
	OutInterpolatedData.RawFocus = LiveLinkData1->RawFocus + LiveLinkData2->RawFocus;
	OutInterpolatedData.RawIris = LiveLinkData1->RawIris + LiveLinkData2->RawIris;
	OutInterpolatedData.RawEncoder = LiveLinkData1->RawEncoder + LiveLinkData2->RawEncoder;

	OutInterpolatedData.TrackingStatus = LiveLinkData2->TrackingStatus;
	OutInterpolatedData.Timecode = LiveLinkData2->Timecode;
	OutInterpolatedData.CameraID = LiveLinkData2->CameraID;
	OutInterpolatedData.FrameProgressiveCounter = LiveLinkData2->FrameProgressiveCounter;
	OutInterpolatedData.LensExtender = LiveLinkData2->LensExtender;

	//Lens parameters
	// Interpolate where applicable
	OutInterpolatedData.Lens.FxVirtualCamera = FMath::Lerp(LiveLinkData1->Lens.FxVirtualCamera, LiveLinkData2->Lens.FxVirtualCamera, InterpWeight);
	OutInterpolatedData.Lens.FyVirtualCamera = FMath::Lerp(LiveLinkData1->Lens.FyVirtualCamera, LiveLinkData2->Lens.FyVirtualCamera, InterpWeight);
	OutInterpolatedData.Lens.FxDistorted = FMath::Lerp(LiveLinkData1->Lens.FxDistorted, LiveLinkData2->Lens.FxDistorted, InterpWeight);
	OutInterpolatedData.Lens.FyDistorted = FMath::Lerp(LiveLinkData1->Lens.FyDistorted, LiveLinkData2->Lens.FyDistorted, InterpWeight);
	OutInterpolatedData.Lens.K1 = FMath::Lerp(LiveLinkData1->Lens.K1, LiveLinkData2->Lens.K1, InterpWeight);
	OutInterpolatedData.Lens.K2 = FMath::Lerp(LiveLinkData1->Lens.K2, LiveLinkData2->Lens.K2, InterpWeight);
	OutInterpolatedData.Lens.K3 = FMath::Lerp(LiveLinkData1->Lens.K3, LiveLinkData2->Lens.K3, InterpWeight);
	OutInterpolatedData.Lens.PrincipalPoint_cx = FMath::Lerp(LiveLinkData1->Lens.PrincipalPoint_cx, LiveLinkData2->Lens.PrincipalPoint_cx, InterpWeight);
	OutInterpolatedData.Lens.PrincipalPoint_cy = FMath::Lerp(LiveLinkData1->Lens.PrincipalPoint_cy, LiveLinkData2->Lens.PrincipalPoint_cy, InterpWeight);
	OutInterpolatedData.Lens.EntrancePupilDistance = FMath::Lerp(LiveLinkData1->Lens.EntrancePupilDistance, LiveLinkData2->Lens.EntrancePupilDistance, InterpWeight);
	OutInterpolatedData.Lens.RecipFocalDistance = FMath::Lerp(LiveLinkData1->Lens.RecipFocalDistance, LiveLinkData2->Lens.RecipFocalDistance, InterpWeight);
	OutInterpolatedData.Lens.Aperture = FMath::Lerp(LiveLinkData1->Lens.Aperture, LiveLinkData2->Lens.Aperture, InterpWeight);

	// Assign directly from LiveLinkData2 for non-interpolatable members
	OutInterpolatedData.Lens.IsK3Valid = LiveLinkData2->Lens.IsK3Valid;
	OutInterpolatedData.Lens.IsTStops = LiveLinkData2->Lens.IsTStops;
	OutInterpolatedData.Lens.HasData = LiveLinkData2->Lens.HasData;
	OutInterpolatedData.Lens.ZoomOffset = LiveLinkData2->Lens.ZoomOffset;
	OutInterpolatedData.Lens.FocusOffset = LiveLinkData2->Lens.FocusOffset;
	OutInterpolatedData.Lens.IsP1P2Valid = LiveLinkData2->Lens.IsP1P2Valid;

	return true;
}

void UMoSysLiveLinkController::Tick(float DeltaTime, const FLiveLinkSubjectFrameData& SubjectData)
{
	TrackingStatus = EMoSysTrackingStatus::Undefined;

	const FLiveLinkMoSysStaticData* StaticData = SubjectData.StaticData.Cast<FLiveLinkMoSysStaticData>();
	const FLiveLinkMoSysFrameData* FrameDataIn = SubjectData.FrameData.Cast<FLiveLinkMoSysFrameData>();
	if (!StaticData || !FrameDataIn)
	{
		return;
	}
	auto Attached = GetAttachedComponent();
    if (USceneComponent* SceneComponent = Cast<USceneComponent>(Attached))
    {

    	if(FMath::Floor(FrameDelay) + 1 < FrameBuffer.Num())
    	{
    		FrameBuffer.Empty();
    	}
    	FrameBuffer.Add(*FrameDataIn);
    	CurrentFrame = *FrameDataIn;
		FLiveLinkMoSysFrameData FrameData;
		bool FrameDataValid = false;
		if (FrameBuffer.Num() > 1)
		{
			FrameDataValid = InterpolateLiveLinkData(&FrameBuffer[1], &FrameBuffer[0], FrameData, FrameDelay - FMath::Floor(FrameDelay));
		}
		else
		{
			if (FrameBuffer.Num() > 0)
			{
				if (&FrameBuffer[0])
				{
					FrameData = *&FrameBuffer[0];
					FrameDataValid = true;
				}
				else
				{
					FrameDataValid = false;
				}
			}
		}
    	if(FrameBuffer.Num() > FMath::Floor(FrameDelay) + 1)
    	{
    		FrameBuffer.RemoveAt(0);
    	}
		if (FrameDataValid && bUseCurrentZoom)
		{
			FrameData.RawZoom = CurrentFrame.RawZoom;
			FrameData.RawFocus = CurrentFrame.RawFocus;
			FrameData.RawIris = CurrentFrame.RawIris;
			FrameData.Lens = CurrentFrame.Lens;
		}
		if (FrameDataValid && bUseCurrentRotation)
		{
			FrameData.Transform.SetRotation(CurrentFrame.Transform.GetRotation());
		}
    	
		AActor* Actor = GetOuterActor();
        if (FrameDataValid && Actor)
        {
            // Set scale to attached actor's scale
            FTransform Transform = FrameData.Transform;
            Transform.SetTranslation(Transform.GetTranslation() * LiveLinkScaleFactor);
            Transform.SetScale3D(Actor->GetActorScale());
            FQuat FrameQuat = FrameData.Transform.GetRotation() * LiveLinkScaleFactor;
            FRotator FrameRotator = FrameQuat.Rotator();
			if (bInvertPan)
			{
				FrameRotator.Yaw = -FrameRotator.Yaw;
			}
			if (bInvertTilt)
			{
				FrameRotator.Pitch = -FrameRotator.Pitch;
			}
			if (!bShouldPan) //Z Axis / Yaw
            {
                FrameRotator.Yaw = Actor->GetActorRotation().Yaw;
            }
            if (!bShouldTilt) //Y Axis
            {
                FrameRotator.Pitch = Actor->GetActorRotation().Pitch;
            }
            Transform.SetRotation(FQuat(FrameRotator));

            TransformData.ApplyTransform(SceneComponent, Transform, *StaticData);

            TrackingStatus = FrameData.TrackingStatus;
            Timecode = FrameData.Timecode;
            // If the frame progressive counter is wrong then most likely we dropped a frame due to this function
            // tick rate not matching the data rate.
			int32 ExpectedFrameCount = (TrackingFrame.FrameProgressiveCounter + 1) % 16;
			if (FrameData.FrameProgressiveCounter != ExpectedFrameCount)
			{
				const FString WaitingStatusString = MoSysTrackingConversions::UEnum2TrackingStatusString(EMoSysTrackingStatus::Waiting);
				// Log drop frames, but only when we are up and running
				if (LogDropFrame &&	(TrackingStatusString != WaitingStatusString))
				{
					UE_LOG(LogMoSysTracking, Warning, TEXT("%s dropped tracking frame - received frame number %d expected %d (0-15)"),
						*Actor->GetName(), FrameData.FrameProgressiveCounter, ExpectedFrameCount);
				}
				// If the frame progressive counter hasn't progressed for a while, we most likely lost tracking data.
				// We should still store everything (so it holds last position etc), but update the status accordingly
				if (FrameData.FrameProgressiveCounter == TrackingFrame.FrameProgressiveCounter)
				{
					StalledFrameCounter++;
					if (StalledFrameCounter > STALLED_FRAME_COUNT_MAX)
					{
						TrackingStatusString = WaitingStatusString;
						StalledFrameCounter = 0;
					}
				}
			}
			else
			{
				if (!GIsSavingPackage) // Needed in order to successfully package the plugin
				{
					TrackingStatusString = MoSysTrackingConversions::UEnum2TrackingStatusString(TrackingStatus);
				}
				StalledFrameCounter = 0;
			}
			// Handle lens, from LiveLinkLensController
        	HandleLens(&FrameData);
            TrackingFrame = FrameData;
        }
    }
}

bool UMoSysLiveLinkController::IsRoleSupported(const TSubclassOf<ULiveLinkRole>& RoleToSupport)
{
    return (RoleToSupport == UMoSysLiveLinkRole::StaticClass()) || (RoleToSupport == ULiveLinkCameraRole::StaticClass());
}

TSubclassOf<UActorComponent> UMoSysLiveLinkController::GetDesiredComponentClass() const
{
	return USceneComponent::StaticClass();
}

void UMoSysLiveLinkController::Cleanup()
{
}

void UMoSysLiveLinkController::PostDuplicate(bool bDuplicateForPIE)
{
	Super::PostDuplicate(bDuplicateForPIE);

	// When this controller is duplicated (e.g. for PIE), the duplicated controller needs a new unique ID
	if (!DistortionProducerID.IsValid())
	{
		DistortionProducerID = FGuid::NewGuid();
	}
}

void UMoSysLiveLinkController::PostEditImport()
{
	Super::PostEditImport();

	// PostDuplicate is not called on components during actor duplication, such as alt-drag and copy-paste, so PostEditImport covers those duplication cases
	// When this controller is duplicated in those cases, the duplicated controller needs a new unique ID
	if (!DistortionProducerID.IsValid())
	{
		DistortionProducerID = FGuid::NewGuid();
	}
}

void UMoSysLiveLinkController::RegisterLensDistortUpdater_Implementation(const TScriptInterface<IMoSysLensDistortUpdater>& InUpdater)
{
	LensDistortUpdater = InUpdater;
}

void UMoSysLiveLinkController::TickSpawned(float DeltaTime)
{
	HandleLens(nullptr, true);
}
void UMoSysLiveLinkController::TickForceLensUpdate(float DeltaTime)
{
	HandleLens(nullptr, false);
}

FLiveLinkMoSysFrameData UMoSysLiveLinkController::GetCurrentFrame()
{
	return CurrentFrame;
}

void UMoSysLiveLinkController::HandleLens(const FLiveLinkMoSysFrameData* FrameData, bool bIsSpawned)
{
	auto Attached = GetAttachedComponent();
	if (!Attached)
	{
		return;
	}
	const AActor* Owner = Attached->GetOwner();
	if (!Owner)
	{
		return;
	}

	UCineCameraComponent* CineCameraComponent = Cast<UCineCameraComponent>(Owner->GetComponentByClass(UCineCameraComponent::StaticClass()));
	if (!CineCameraComponent)
	{
		return;
	}

	UCameraCalibrationSubsystem*  CameraCalibrationSub = GEngine->GetEngineSubsystem<UCameraCalibrationSubsystem>();
	if (!CameraCalibrationSub)
	{
		return;
	}

	if (ULensComponent* LensDistortionComponent = Cast<ULensComponent>(Owner->GetComponentByClass(UMoSysLensDistortionComponent::StaticClass())))
	{
		// LiveLinkLensController does this on tick too...
		const TSubclassOf<ULensModel> LensModel = CameraCalibrationSub->GetRegisteredLensModel(FName("Mo-Sys Lens Model"));
		LensDistortionComponent->SetLensModel(LensModel);
		

		FLensDistortionState DistortionState;
		float RecipFocalDistance = 0;
		float Aperture = 0;
		if (GetDistortionState(FrameData, DistortionState, RecipFocalDistance, Aperture, bIsSpawned))
		{
			LensDistortionComponent->SetDistortionState(DistortionState);

			// Update the FoV of the camera
			auto MoSysHandler = Cast<UMoSysLensDistortionModelHandler>(LensDistortionComponent->GetLensDistortionHandler());
			if (MoSysHandler)
			{
				MoSysHandler->UpdateLensCache(CineCameraComponent, DistortionState.FocalLengthInfo.FxFy, RecipFocalDistance, Aperture);
			}
		}
	}
}

bool UMoSysLiveLinkController::GetDistortionState(const FLiveLinkMoSysFrameData* FrameData, FLensDistortionState & DistortionState, float& RecipFocalDistance, float& Aperture, bool bIsSpawned)
{
	// if spawned and no distortion component or couldn't get lens params from it then error
	auto Attached = GetAttachedComponent();
	if (!Attached)
	{
		return false;
	}
	const AActor* Owner = Attached->GetOwner();
	if (!Owner)
	{
		return false;
	}
	UMoSysLensDistortionComponent* LensDistortionComponent = Cast<UMoSysLensDistortionComponent>(Owner->GetComponentByClass(UMoSysLensDistortionComponent::StaticClass()));
	if (!LensDistortionComponent)
	{
		return false;
	}

	FMoSysLensParameters LensParameters;
	float FocusValue = 0.0f;
	float ZoomValue = 0.0f;
	if (bIsSpawned)
	{
		if (!LensDistortionComponent->GetCurrentLensParameters(LensParameters))
		{
			return false;
		}
	}
	else
	{
		if (FrameData)
		{
			LensParameters = FrameData->Lens;
			LensDistortionComponent->RawZoom = FrameData->RawZoom;
			if(LensDistortionComponent->OverrideRawFocus == false)
			{
				LensDistortionComponent->RawFocus = FrameData->RawFocus;
				FocusValue = FrameData->RawFocus;
			}
			else // Override FocusValue to current LensDistortion RawFocus
			{
				FocusValue = LensDistortionComponent->RawFocus;
			}
			LensDistortionComponent->Timecode = FrameData->Timecode;
			ZoomValue = FrameData->RawZoom;
		}

		if (LensDistortUpdater.GetObject())
		{
			LensParameters = IMoSysLensDistortUpdater::Execute_UpdateLensDistort(LensDistortUpdater.GetObject(), LensParameters, FocusValue, ZoomValue);
			LensDistortionComponent->OverrideHandlerLensParameters(LensParameters);
		}
		else if (!FrameData)
		{
			// if no data and no lens updater return false
			return false;
		}
	}

	RecipFocalDistance = LensParameters.RecipFocalDistance;
	Aperture = LensParameters.Aperture;
	if (LensParameters.IsTStops > 0.f)
	{
		Aperture *= LensDistortionComponent->TStopScalingFactor;
	}

	DistortionState.FocalLengthInfo.FxFy = {
		LensParameters.FxVirtualCamera * LensDistortionComponent->FxScale / 1920.f,
		LensParameters.FyVirtualCamera * LensDistortionComponent->FxScale / 1080.f
	};

	/**
	 * \file MoSysLiveLinkController.h
	 * \todo if (LensParameters.HasData) ? How to handle no data?
	 * \todo required?
	 */
	//float Mul = 960.0f / (LensParameters.FxDistorted * DistortionState.FocalLengthInfo.FxFy.X);
	//float Mul2 = Mul * Mul;
	//float Mul4 = Mul2 * Mul2;
	//float Mul6 = Mul4 * Mul2;
	DistortionState.DistortionInfo.Parameters = {
		LensParameters.FxVirtualCamera * LensDistortionComponent->FxScale,
		LensParameters.FyVirtualCamera * LensDistortionComponent->FxScale,
		LensParameters.FxDistorted * LensDistortionComponent->FxScale,
		LensParameters.FyDistorted * LensDistortionComponent->FxScale,
		LensParameters.K1,
		LensParameters.K2,
		LensParameters.K3,
		LensParameters.IsK3Valid,
		LensParameters.PrincipalPoint_cx + LensDistortionComponent->CxOffset,
		LensParameters.PrincipalPoint_cy + LensDistortionComponent->CyOffset,
		LensParameters.EntrancePupilDistance + LensDistortionComponent->EPDOffset,
		LensParameters.RecipFocalDistance,
		LensParameters.HasData,
		LensParameters.ZoomOffset,
		LensParameters.FocusOffset,
		LensParameters.IsP1P2Valid,
		LensParameters.Aperture,
		LensParameters.IsTStops
	};

	DistortionState.ImageCenter.PrincipalPoint = {
		(LensParameters.PrincipalPoint_cx + LensDistortionComponent->CxOffset + 960.f) / 1920.f,
		(LensParameters.PrincipalPoint_cy + LensDistortionComponent->CyOffset + 540.f) / 1080.f
	};
	return true;
}

