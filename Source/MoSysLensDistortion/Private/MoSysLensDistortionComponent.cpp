// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.
#include "MoSysLensDistortionComponent.h"

#include "MoSysLensDistortionModelHandler.h"

#include "Engine/World.h"
#include "CameraCalibrationSubsystem.h"
#include "CineCameraActor.h"
#include "CineCameraComponent.h"
#include "Components/SceneComponent.h"

#include "Engine/TextureRenderTarget2D.h"

UMoSysLensDistortionComponent::UMoSysLensDistortionComponent()
{
	bApplyDistortion = true;

	//Hook up to PostActorTick to handle nodal offset
	FWorldDelegates::OnWorldPostActorTick.AddUObject(this, &UMoSysLensDistortionComponent::OnPostActorTick);

	OverscanFactorOverride = 0.f;
}

void UMoSysLensDistortionComponent::BeginPlay()
{
	Super::BeginPlay();

	// Workaround to distortion not working when using Level Sequence. Blendable not properly added and we need to ProcessCurrentDistortion once after play to update displacement maps.


	if (!ShouldApplyDistortion())
	{
		// no need to do anything if not applying distortion
		return;
	}

	const auto LensDistortionHandler = GetMoSysLensDistortionHandler();
	ACineCameraActor* CineCameraActor = Cast<ACineCameraActor>(GetOwner());
	if (!LensDistortionHandler || !CineCameraActor)
	{
		// no need to do anything if no handler or not on a cine camera actor
		return;
	}
	UCineCameraComponent* CineCameraComponent = CineCameraActor->GetCineCameraComponent();
	if (!CineCameraComponent)
	{
		// no need to do anything if not a cine camera component
		return;
	}

	// reset to defaults (will be changed only on active camera)
	SetIsRendering(false);
	FMoSysRenderSettings DefaultRenderSettings;
	HandleRenderSettings(DefaultRenderSettings);


	// update the world context object on the handler so it can correctly draw the displacement map materials
	LensDistortionHandler->UpdateWorldContextObject(CineCameraActor);

	// this will dirty the distortion state to force a redraw after entering play
	LensDistortionHandler->SetDistortionState(FLensDistortionState());

	// trigger creation of MIDs and DisplacementMaps (+ Update and Draw)
	LensDistortionHandler->ProcessCurrentDistortion();

	// get the DistortionMID and set on camera
	UMaterialInstanceDynamic* DistortionMID = LensDistortionHandler->GetDistortionMID();
	if (DistortionMID)
	{
		CineCameraComponent->RemoveBlendable(DistortionMID);
		CineCameraComponent->AddOrUpdateBlendable(DistortionMID);
	}
}

void UMoSysLensDistortionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	float BeforeFOV = -1.f;
	UCineCameraComponent* const CineCameraComponent = Cast<UCineCameraComponent>(TargetCameraComponent.GetComponent(GetOwner()));

	if (CineCameraComponent)
	{
		BeforeFOV = CineCameraComponent->GetHorizontalFieldOfView();	
	}
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (bIsSpawned && CineCameraComponent)
	{
		CineCameraComponent->SetFieldOfView(BeforeFOV);
	}
	if (bFirstTick)
	{
		bIsSpawned = GetOwner()->ActorHasTag(TEXT("SequencerActor"));
		bFirstTick = false;
	}
	auto LensDistortionHandler = GetMoSysLensDistortionHandler();
	if (LensDistortionHandler)
	{
		LensDistortionHandler->SetOverrideOverscanFactor(OverscanFactorOverride);
		LensDistortionHandler->SetApplyOverscanToFOV(bApplyOverscanToFOV);
		LensDistortionHandler->UpdateCameraLensOnTick(ShouldUpdateFilmback);
		LensDistortionHandler->SetIsSpawned(bIsSpawned);
		if (!bIsSpawned)
		{
			Parameters = LensDistortionHandler->GetCurrentLensParameters();
		}
		CurrentOverscanFactor = LensDistortionHandler->GetOverscanFactor();
	}
	// HasData is held in index 10
	if (DistortionState.DistortionInfo.Parameters.Num() >= 10)
	{
		bool LensStatus = DistortionState.DistortionInfo.Parameters[10] > 0.5f;
		if (LensStatus != LastLensStatus)
		{
			LensStatusChanged.Broadcast(LensStatus);
			LastLensStatus = LensStatus;
		}
	}
}

void UMoSysLensDistortionComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	// null out the world context object to prevent attempts to draw displacement maps when world is no longer valid (exiting play)
	if (const auto LensDistortionHandler = GetMoSysLensDistortionHandler())
	{
		LensDistortionHandler->UpdateWorldContextObject(nullptr);
	}
}

#if WITH_EDITOR
void UMoSysLensDistortionComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	const FName PropertyName = (PropertyChangedEvent.Property != nullptr) ? PropertyChangedEvent.Property->GetFName() : NAME_None;

	if (PropertyName == GET_MEMBER_NAME_CHECKED(UMoSysLensDistortionComponent, OverscanFactorOverride))
	{
		if (const auto LensDistortionHandler = GetMoSysLensDistortionHandler())
		{
			LensDistortionHandler->SetOverrideOverscanFactor(OverscanFactorOverride);
			LensDistortionHandler->UpdateCameraLensOnTick(ShouldUpdateFilmback);
		}
	}
	if (PropertyName == GET_MEMBER_NAME_CHECKED(UMoSysLensDistortionComponent, bApplyOverscanToFOV))
	{
		if (const auto LensDistortionHandler = GetMoSysLensDistortionHandler())
		{
			LensDistortionHandler->SetApplyOverscanToFOV(bApplyOverscanToFOV);
		}
	}
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif //WITH_EDITOR


bool UMoSysLensDistortionComponent::GetCurrentLensParameters(FMoSysLensParameters& OutLensParameters)
{
	// if spawned return our recorded parameters instead
	if (bIsSpawned)
	{
		OutLensParameters = Parameters;
		return true;
	}

	auto LensDistortionHandler = GetMoSysLensDistortionHandler();
	if (LensDistortionHandler)
	{
		OutLensParameters = LensDistortionHandler->GetCurrentLensParameters();
		return true;
	}
	return false;
}

float UMoSysLensDistortionComponent::GetUndistortOverscanFactor()
{
	auto LensDistortionHandler = GetMoSysLensDistortionHandler();
	if (LensDistortionHandler)
	{
		return LensDistortionHandler->ComputeMoSysOverscanFactor();
	}
	return 1.f;
}

void UMoSysLensDistortionComponent::SetIsRendering(bool IsRendering)
{
	if (auto LensDistortionHandler = GetMoSysLensDistortionHandler())
	{
		LensDistortionHandler->SetIsRendering(IsRendering);
	}
}

void UMoSysLensDistortionComponent::SetApplyOverscanToPostProcess(bool ShouldApplyOverscan)
{
	if (auto LensDistortionHandler = GetMoSysLensDistortionHandler())
	{
		LensDistortionHandler->SetApplyOverscanToPostProcess(ShouldApplyOverscan);
	}
}

void UMoSysLensDistortionComponent::SetHomographyOverscanFactor(float OverscanFactor)
{
	if (const auto LensDistortionHandler = GetMoSysLensDistortionHandler())
	{
        LensDistortionHandler->SetHomographyOverscanFactor(OverscanFactor);
	}
}

void UMoSysLensDistortionComponent::OnPostActorTick(UWorld* World, ELevelTick TickType, float DeltaSeconds)
{
	// Modelled on super class
	if (World == GetWorld())
	{
		if (UCineCameraComponent* const CineCameraComponent = Cast<UCineCameraComponent>(TargetCameraComponent.GetComponent(GetOwner())))
		{
			ApplyNodalOffset(CineCameraComponent);
		}
	}
}

void UMoSysLensDistortionComponent::ApplyNodalOffset(UCineCameraComponent* CineCameraComponent)
{
	if (CineCameraComponent)
	{
		auto LensDistortionHandler = GetMoSysLensDistortionHandler();
		if (LensDistortionHandler)
		{

			if (bApplyNodalOffsetOnTick)
			{
				float EPD = LensDistortionHandler->GetEPD() * 100.f; // m -> cm
				CineCameraComponent->SetRelativeLocation(FVector(EPD, 0.f, 0.f));
			}
			else
			{
				CineCameraComponent->SetRelativeLocation(FVector::ZeroVector);
			}
			CineCameraComponent->SetRelativeRotation(FRotator::ZeroRotator);
			// Take the opportunity to display the raw parameters too
			DistortionState = LensDistortionHandler->GetDistortionState();
		}
	}
}

UMoSysLensDistortionModelHandler* UMoSysLensDistortionComponent::GetMoSysLensDistortionHandler()
{
	return Cast<UMoSysLensDistortionModelHandler>(GetLensDistortionHandler());
}

void UMoSysLensDistortionComponent::HandleRenderSettings(const FMoSysRenderSettings& RenderSettings)
{
	if (const auto LensDistortionHandler = GetMoSysLensDistortionHandler())
	{
		LensDistortionHandler->HandleRenderSettings(RenderSettings);
	}
	if (RenderSettings.bOverrideOverscan)
	{
		OverscanFactorOverride = RenderSettings.OverrideOverscanFactor;
	}
	bApplyOverscanToFOV = true; // should be true if we are rendering
}

void UMoSysLensDistortionComponent::SetDistortionStateSource(EDistortionSource Source)
{
	DistortionStateSource = Source;
}

void UMoSysLensDistortionComponent::OverrideHandlerLensParameters(const FMoSysLensParameters InLensParameters)
{
	Parameters = InLensParameters;
	if (const auto LensDistortionHandler = GetMoSysLensDistortionHandler())
	{
		LensDistortionHandler->SetCurrentLensParameters(Parameters);
	}
}

void UMoSysLensDistortionComponent::SetOverrideOverscanFactor(float InOverrideOverscanFactor)
{
	OverscanFactorOverride = InOverrideOverscanFactor;
	if (const auto LensDistortionHandler = GetMoSysLensDistortionHandler())
	{
		LensDistortionHandler->SetOverrideOverscanFactor(OverscanFactorOverride);
	}
}

float UMoSysLensDistortionComponent::GetCameraFOV()
{
	ACineCameraActor* CineCameraActor = Cast<ACineCameraActor>(GetOwner());
	auto LensDistortionHandler = GetMoSysLensDistortionHandler();
	if (!LensDistortionHandler || !CineCameraActor)
	{
		return -1.f;
	}
	UCineCameraComponent* CineCameraComponent = CineCameraActor->GetCineCameraComponent();
	if (!CineCameraComponent)
	{
		return -1.f;
	}

	LensDistortionHandler->UpdateCameraLensOnTick(false);
	return CineCameraComponent->GetHorizontalFieldOfView();
}
