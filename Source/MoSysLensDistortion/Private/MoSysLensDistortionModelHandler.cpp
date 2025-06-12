// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysLensDistortionModelHandler.h"

#include "IMoSysLensDistortion.h"

#include "Engine/TextureRenderTarget2D.h"
#include "RenderingThread.h"
#include "TextureResource.h"
#include "CameraCalibrationSettings.h"
#include "CameraCalibrationSubsystem.h"
#include "CineCameraComponent.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Math/NumericLimits.h"
#include "Engine/Engine.h"
#include "CoreMinimal.h"

#if WITH_EDITOR
#include "Editor.h"
#include "Subsystems/UnrealEditorSubsystem.h"
#endif

#define ASPECT_RATIO (16.f/9)
#define MOSYS_SCREEN_WIDTH 1920.0f
#define MOSYS_SCREEN_HEIGHT 1080.0f
// Mostly copied from USphericalLensDistortionModelHandler

float UMoSysLensDistortionModelHandler::GetEPD()
{
	return LensParameters.EntrancePupilDistance;
}

FLensDistortionState UMoSysLensDistortionModelHandler::GetDistortionState()
{
	return CurrentState;
}

FMoSysLensParameters UMoSysLensDistortionModelHandler::GetCurrentLensParameters()
{
	return LensParameters;
}

void UMoSysLensDistortionModelHandler::SetCurrentLensParameters(const FMoSysLensParameters& InParameters)
{
	LensParameters = InParameters;
}

void UMoSysLensDistortionModelHandler::UpdateWorldContextObject(TWeakObjectPtr<UObject> InWorldContextObject)
{
	WorldContextObject = InWorldContextObject;
}

void UMoSysLensDistortionModelHandler::SetOverrideOverscanFactor(float InOverscanFactorOverride)
{
	OverscanFactorOverride = InOverscanFactorOverride;
}

void UMoSysLensDistortionModelHandler::SetApplyOverscanToFOV(bool bInApplyOverscanToFOV)
{
	bApplyOverscanToFOV = bInApplyOverscanToFOV;
}

void UMoSysLensDistortionModelHandler::SetApplyEPDToFocalDistance(bool bInApplyEPDToFocalDistance)
{
	bApplyEPDToFocalDistance = bInApplyEPDToFocalDistance;
}

void UMoSysLensDistortionModelHandler::SetHomographyOverscanFactor(float InHomographyOverscanFactor)
{
    HomographyOverscanFactor = InHomographyOverscanFactor;
}

void UMoSysLensDistortionModelHandler::InitializeHandler()
{
	LensModelClass = UMoSysLensModel::StaticClass();
	MoSysCalibrationLayerRT = Cast<UTextureRenderTarget2D>(FSoftObjectPath(TEXT("/MoSysVPPro/LensDistortion/RT_MoSysCalibrationLayer.RT_MoSysCalibrationLayer")).TryLoad());
	MoSysDisplacementMapRT = Cast<UTextureRenderTarget2D>(FSoftObjectPath(TEXT("/MoSysVPPro/LensDistortion/RT_MoSysDisplacementMap.RT_MoSysDisplacementMap")).TryLoad());
	MoSysUndisplacementMapRT = Cast<UTextureRenderTarget2D>(FSoftObjectPath(TEXT("/MoSysVPPro/LensDistortion/RT_MoSysUndisplacementMap.RT_MoSysUndisplacementMap")).TryLoad());
}

void UMoSysLensDistortionModelHandler::PostInitProperties()
{
	Super::PostInitProperties();

	if (!HasAnyFlags(RF_ArchetypeObject | RF_ClassDefaultObject))
	{
		/**
		 * \file MoSysLensDistortionModelHandler.h
		 * \todo the project setting for CameraCalibration used in Super::PostInitProperties() is not saved properly,
		 */
		// so hard-code it here and review in later releases. (We can't access VP Settings -> FrameSize from here.
		const FIntPoint DisplacementMapResolution = FIntPoint(1920, 1080);
		CreateDisplacementMaps(DisplacementMapResolution);
	}
}

void UMoSysLensDistortionModelHandler::SetIsRendering(bool IsRendering)
{
	bIsRendering = IsRendering;
}

void UMoSysLensDistortionModelHandler::HandleRenderSettings(const FMoSysRenderSettings& RenderSettings)
{
	bEnableDistortion = RenderSettings.bEnableDistortion;
	MRQCameraOverscanPercentage = RenderSettings.CameraSettingOverscanPercentage;
	bDrawDistortSTMapMaterial = RenderSettings.bHasDistortSTMapLayer;
	bDrawUndistortSTMapMaterial = RenderSettings.bHasUndistortSTMapLayer;
	bDrawCalibrationLayerMaterial = RenderSettings.bHasCalibrationLayer;
}

FVector2D UMoSysLensDistortionModelHandler::ComputeDistortedUVWithoutCxCy(const FVector2D& InUndistortedUV) const
{
	// These distances cannot be zero in real-life. If they are, the current distortion state must be bad
	if ((CurrentState.FocalLengthInfo.FxFy.X == 0.0f) || (CurrentState.FocalLengthInfo.FxFy.Y == 0.0f))
	{
		return InUndistortedUV;
	}

	// Adjust the equivalent of the shader inputs
	float MoSysDistortionScaleX = LensParameters.FxDistorted / MOSYS_SCREEN_WIDTH;
	float MoSysDistortionScaleY = LensParameters.FyDistorted / MOSYS_SCREEN_HEIGHT;
	// Was: FVector2D MoSysDistortionScaling(MoSysDistortionScale, MoSysDistortionScale * CurrentState.FocalLengthInfo.FxFy.Y / CurrentState.FocalLengthInfo.FxFy.X);
	FVector2D MoSysDistortionScaling(MoSysDistortionScaleX, MoSysDistortionScaleY);

	// Now duplicate the shader alg
	FVector2D NormalizedDistanceFromImageCenter = (InUndistortedUV - FVector2D(0.5f, 0.5f)) / MoSysDistortionScaling;

	const FVector2D DistanceSquared = NormalizedDistanceFromImageCenter * NormalizedDistanceFromImageCenter;
	const float RSquared = DistanceSquared.X + DistanceSquared.Y;

	const float RadialDistortion = 1.0f + (LensParameters.K1 * RSquared) + (LensParameters.K2 * RSquared * RSquared) + (LensParameters.K3 * RSquared * RSquared * RSquared);

	const FVector2D DoublePrime = NormalizedDistanceFromImageCenter * RadialDistortion;
	return  MoSysDistortionScaling * DoublePrime;
}

FVector2D UMoSysLensDistortionModelHandler::ComputeDistortedUV(const FVector2D& InUndistortedUV) const
{
	return ComputeDistortedUVWithoutCxCy(InUndistortedUV) + CurrentState.ImageCenter.PrincipalPoint;
}

void UMoSysLensDistortionModelHandler::UpdateLensCache(class UCineCameraComponent* InCameraComponent, FVector2D InF, float InRecipFocalDistance, float InAperture)
{
	CineCameraComponent = InCameraComponent;
	LastFocalLength = { InCameraComponent->Filmback.SensorWidth * InF.X,
						InCameraComponent->Filmback.SensorHeight * InF.Y };
	LastAspectRatio = InF.X / InF.Y;
	LastRecipFocalDistance = InRecipFocalDistance;
	LastAperture = InAperture;
}

void UMoSysLensDistortionModelHandler::UpdateCameraLensOnTick(bool ShouldUpdateFilmback)
{
	if (!CineCameraComponent)
	{
		return;
	}
	UCameraCalibrationSubsystem* const SubSystem = GEngine->GetEngineSubsystem<UCameraCalibrationSubsystem>();
	if (SubSystem)
	{
		float CurrentOverscanFactor = ComputeMoSysOverscanFactor();
		SetOverscanFactor(CurrentOverscanFactor);
		ProcessCurrentDistortion();

		if (bApplyOverscanToFOV)
		{
			const float OverscanSensorWidth = CineCameraComponent->Filmback.SensorWidth * CurrentOverscanFactor * HomographyOverscanFactor;
			const float OverscanFOV = FMath::RadiansToDegrees(2.0f * FMath::Atan(OverscanSensorWidth / (2.0f * LastFocalLength.X)));
			CineCameraComponent->SetFieldOfView(OverscanFOV);
		}

		// Update the minimum and maximum focal length of the camera (if needed)
		CineCameraComponent->LensSettings.MinFocalLength = FMath::Min(CineCameraComponent->LensSettings.MinFocalLength, CineCameraComponent->CurrentFocalLength);
		CineCameraComponent->LensSettings.MaxFocalLength = FMath::Max(CineCameraComponent->LensSettings.MaxFocalLength, CineCameraComponent->CurrentFocalLength);
	}
	FCameraFocusSettings FocusSettings;
	FocusSettings.ManualFocusDistance = 100.f / LastRecipFocalDistance; // m >> cm
	if (bApplyEPDToFocalDistance)
	{
		FocusSettings.ManualFocusDistance -= GetEPD() * 100.f;
	}
	CineCameraComponent->FocusSettings = FocusSettings;

	/* Temporarily disable setting aperture until fully implemented
	if (LastAperture > 0.f)
	{
		CineCameraComponent->CurrentAperture = LastAperture;
	}
	*/

	if (ShouldUpdateFilmback)
	{
		FCameraFilmbackSettings Filmback;
		Filmback.SensorWidth = CineCameraComponent->Filmback.SensorWidth;
		Filmback.SensorHeight = Filmback.SensorWidth / (LastAspectRatio * ASPECT_RATIO * ASPECT_RATIO); //preserve the aspect ratio
		CineCameraComponent->Filmback = Filmback;
		IsFilmbackModified = true;
	}
	else if (IsFilmbackModified) // reset to default filmback
	{
		TArray<FNamedFilmbackPreset> const& Presets = UCineCameraSettings::GetFilmbackPresets();
		for (FNamedFilmbackPreset const& P : Presets)
		{
			if (P.Name.Equals(TEXT("16:9 Digital Film")))
			{
				CineCameraComponent->Filmback = P.FilmbackSettings;
				IsFilmbackModified = false;
			}
		}
	}
}

void UMoSysLensDistortionModelHandler::InitDistortionMaterials()
{
	IMoSysLensDistortion& LensModule = IMoSysLensDistortion::Get();
	if (DistortionPostProcessMID == nullptr)
	{
		UMaterialInterface* DistortionMaterialParent = LensModule.GetDistortionMaterial();
		DistortionPostProcessMID = UMaterialInstanceDynamic::Create(DistortionMaterialParent, this);
	}

	if (UndistortionDisplacementMapMID == nullptr)
	{
		UMaterialInterface* MaterialParent = LensModule.GetUndistortionDisplacementMaterial();
		UndistortionDisplacementMapMID = UMaterialInstanceDynamic::Create(MaterialParent, this);
		// local on disk version of displacement map used by MRQ post process material
		/**
		 * \file MoSysLensDistortionModelHandler.h
		 * \todo refactor with below
		 */
		if (MoSysUndisplacementMapRT != nullptr)
		{
			MoSysUndisplacementMapRT->RenderTargetFormat = RTF_RG32f;
			MoSysUndisplacementMapRT->ClearColor = FLinearColor::Black;
			MoSysUndisplacementMapRT->AddressX = TA_Clamp;
			MoSysUndisplacementMapRT->AddressY = TA_Clamp;
			MoSysUndisplacementMapRT->bAutoGenerateMips = false;
			/**
			 * \file MoSysLensDistortionModelHandler.h
			 * \todo Don't wan't to hardcode this - make it 8K square?
			 */
			//const FIntPoint UndisplacementMapResolution = FIntPoint((int)(4320.f * 1.2f), (int)(1716.f * 1.2f));
			const FIntPoint UndisplacementMapResolution = FIntPoint(7680, 4320);
			MoSysUndisplacementMapRT->InitAutoFormat(UndisplacementMapResolution.X, UndisplacementMapResolution.Y);
			MoSysUndisplacementMapRT->UpdateResourceImmediate(true);
		}
	}

	if (DistortionDisplacementMapMID == nullptr)
	{
		UMaterialInterface* MaterialParent = LensModule.GetDistortionDisplacementMaterial();
		DistortionDisplacementMapMID = UMaterialInstanceDynamic::Create(MaterialParent, this);
		// local on disk version of displacement map used by MRQ post process material
		if (MoSysDisplacementMapRT != nullptr)
		{
			MoSysDisplacementMapRT->RenderTargetFormat = RTF_RG32f;
			MoSysDisplacementMapRT->ClearColor = FLinearColor::Black;
			MoSysDisplacementMapRT->AddressX = TA_Clamp;
			MoSysDisplacementMapRT->AddressY = TA_Clamp;
			MoSysDisplacementMapRT->bAutoGenerateMips = false;
			/**
			 * \file MoSysLensDistortionModelHandler.h
			 * \todo Don't wan't to hardcode this - make it 8K square?
			 */
			const FIntPoint DisplacementMapResolution = FIntPoint(7680, 4320);
			MoSysDisplacementMapRT->InitAutoFormat(DisplacementMapResolution.X, DisplacementMapResolution.Y);
			MoSysDisplacementMapRT->UpdateResourceImmediate(true);
		}
		
		if (MoSysCalibrationLayerRT != nullptr)
		{
			const FIntPoint DisplacementMapResolution = FIntPoint(7680, 4320);
			// const FIntPoint DisplacementMapResolution = GetDefault<UCameraCalibrationSettings>()->GetDisplacementMapResolution();
			MoSysCalibrationLayerRT->RenderTargetFormat = ETextureRenderTargetFormat::RTF_RG16f;
			MoSysCalibrationLayerRT->ClearColor = FLinearColor::Black;
			MoSysCalibrationLayerRT->Filter = TF_Bilinear;
			MoSysCalibrationLayerRT->AddressX = TA_Clamp;
			MoSysCalibrationLayerRT->AddressY = TA_Clamp;
			MoSysCalibrationLayerRT->bAutoGenerateMips = false;
			MoSysCalibrationLayerRT->InitAutoFormat(DisplacementMapResolution.X, DisplacementMapResolution.Y);
			MoSysCalibrationLayerRT->UpdateResourceImmediate(true);
		}
	}
	DistortionPostProcessMID->SetTextureParameterValue("UndistortionDisplacementMap", UndistortionDisplacementMapRT);
	DistortionPostProcessMID->SetTextureParameterValue("DistortionDisplacementMap", DistortionDisplacementMapRT);

	SetDistortionState(CurrentState);

}

void UMoSysLensDistortionModelHandler::UpdateMaterialParameters()
{
	//Helper function to set material parameters of an MID
	const auto SetDistortionMaterialParameters = [this](UMaterialInstanceDynamic* const MID)
	{
		if (MID == nullptr)
		{
			return;
		}

		float ComputedOverscanFactor = ComputeMoSysOverscanFactor();
		SetOverscanFactor(ComputedOverscanFactor);

		MID->SetScalarParameterValue("k1", LensParameters.K1);
		MID->SetScalarParameterValue("k2", LensParameters.K2);
		MID->SetScalarParameterValue("k3", LensParameters.K3);

		//// We don't (yet) support tangential distortion
		////MID->SetScalarParameterValue("p1", LensParameters.P1);
		////MID->SetScalarParameterValue("p2", LensParameters.P2);

		float OverscannedCx = ((CurrentState.ImageCenter.PrincipalPoint.X - 0.5f) / OverscanFactor) + 0.5f;
		float OverscannedCy = ((CurrentState.ImageCenter.PrincipalPoint.Y - 0.5f) / OverscanFactor) + 0.5f;

		MID->SetScalarParameterValue("cx", OverscannedCx);
		MID->SetScalarParameterValue("cy", OverscannedCy);

		// MVP-2726
		float IsP1P2ValidValue = LensParameters.IsP1P2Valid;
		float MoSysFx;
		float MoSysFy;
		if (OverscanFactor > 0)
		{
			MoSysFx = GetFx(true) / OverscanFactor;
			MoSysFy = IsP1P2ValidValue > 0 ? GetFy(true) / OverscanFactor : MoSysFx;
		}
		else
		{
			MoSysFx = GetFx(true);
			MoSysFy = IsP1P2ValidValue > 0 ? GetFy(true) : MoSysFx;
		}

		float FxDistorted = LensParameters.FxDistorted > 0 ? LensParameters.FxDistorted : MOSYS_SCREEN_WIDTH;
		float FyDistorted = IsP1P2ValidValue > 0 ? LensParameters.FyDistorted : FxDistorted;

		float DistortedFOVRadHorizontal = 2.f * FMath::Atan(MOSYS_SCREEN_WIDTH / (2.f * FxDistorted));
		float TanHalfUndistortedHorizontalFOV = FMath::Tan(DistortedFOVRadHorizontal * 0.5f) * 2.f;

		float DistortedFOVRadVertical = 2.f * FMath::Atan(MOSYS_SCREEN_HEIGHT / (2.f * FyDistorted));
		float TanHalfUndistortedVerticalFOV = FMath::Tan(DistortedFOVRadVertical * 0.5f) * 2.f;


		float FxParameter = 1.f / TanHalfUndistortedHorizontalFOV;
		float FyParameter = 1.f / TanHalfUndistortedVerticalFOV;

		float FxUndistortParameter = MoSysFx / MOSYS_SCREEN_WIDTH;
		float FyUndistortParameter = MoSysFy / MOSYS_SCREEN_HEIGHT;

		// pixel units to shader units
		MID->SetScalarParameterValue("fx", FxParameter);
		MID->SetScalarParameterValue("fy", FyParameter);

		MID->SetScalarParameterValue("fx_undistort", FxUndistortParameter);
		MID->SetScalarParameterValue("fy_undistort", FyUndistortParameter);

		MID->SetScalarParameterValue("MRQCameraOverscanPercentage", MRQCameraOverscanPercentage);
		MID->SetScalarParameterValue("MRQRendering", bIsRendering ? 1.f : 0.f);
		MID->SetScalarParameterValue("MRQIsSTMap", 0.f);

		MID->SetScalarParameterValue("overscan_factor", OverscanFactor);
		MID->SetScalarParameterValue("apply_overscan", bApplyOverscanToPostProcess);
	};

	SetDistortionMaterialParameters(UndistortionDisplacementMapMID);
	SetDistortionMaterialParameters(DistortionDisplacementMapMID);


	// Workaround. The base class ProcessCurrentDistortion does do a draw after this update but cannot retrieve a valid World from its context object.
	// We explicitly manage a valid world context object and do the draw here as well to workaround this issue and ensure displacement maps are written to.
	// (Possibly an issue with registration order due to being spawned and therefore never getting a valid world)
	if (bIsSpawned)
	{
#if WITH_EDITOR
		if (!WorldContextObject.IsValid())
		{
			if (UUnrealEditorSubsystem* UnrealEditorSubsystem = GEditor->GetEditorSubsystem<UUnrealEditorSubsystem>())
			{
				WorldContextObject = UnrealEditorSubsystem->GetGameWorld();
				if (!WorldContextObject.IsValid())
				{
					WorldContextObject = UnrealEditorSubsystem->GetEditorWorld();
				}
			}
		}
#endif
		if (WorldContextObject.IsValid())
		{
			UKismetRenderingLibrary::DrawMaterialToRenderTarget(WorldContextObject.Get(), UndistortionDisplacementMapRT, UndistortionDisplacementMapMID);
			UKismetRenderingLibrary::DrawMaterialToRenderTarget(WorldContextObject.Get(), DistortionDisplacementMapRT, DistortionDisplacementMapMID);
		}
	}

	if (IsValid(DistortionPostProcessMID))
	{
		DistortionPostProcessMID->SetScalarParameterValue("use_distorted_uvs", bEnableDistortion);
		DistortionPostProcessMID->SetScalarParameterValue("overscan_factor", OverscanFactor);
		DistortionPostProcessMID->SetScalarParameterValue("apply_overscan", bApplyOverscanToPostProcess);
	}

	// if we are rendering this camera
	if (bIsRendering)
	{
		if (bDrawCalibrationLayerMaterial && IsValid(DistortionDisplacementMapMID))
		{
			// make sure we do this first as we want MRQIsSTMap to be 0.f and match what is used for actual distortion
			UKismetRenderingLibrary::DrawMaterialToRenderTarget(WorldContextObject.Get(), MoSysCalibrationLayerRT, DistortionDisplacementMapMID);
		}

		// update our copy of the distort/undistort render targets
		if (bDrawDistortSTMapMaterial &&  IsValid(DistortionDisplacementMapMID))
		{
			// set to one as we about draw it to the RT used for the STMap layer
			DistortionDisplacementMapMID->SetScalarParameterValue("MRQIsSTMap", 1.f);
			UKismetRenderingLibrary::DrawMaterialToRenderTarget(WorldContextObject.Get(), MoSysDisplacementMapRT, DistortionDisplacementMapMID);
		}

		if (bDrawUndistortSTMapMaterial && IsValid(UndistortionDisplacementMapMID))
		{
			UKismetRenderingLibrary::DrawMaterialToRenderTarget(WorldContextObject.Get(), MoSysUndisplacementMapRT, UndistortionDisplacementMapMID);
		}
	}
}

void UMoSysLensDistortionModelHandler::InterpretDistortionParameters()
{
	LensModelClass->GetDefaultObject<ULensModel>()->FromArray<FMoSysLensParameters>(CurrentState.DistortionInfo.Parameters, LensParameters);
}

FVector2D UMoSysLensDistortionModelHandler::UndistortNormalizedViewPosition(FVector2D EngineV) const
{
	// Engine view space -> standard view space.
	FVector2D V = FVector2D(1, -1) * EngineV;

	FVector2D V2 = V * V;
	float R2 = V2.X + V2.Y;

	// Radial distortion (extra parenthesis to match MF_Undistortion.uasset).
	FVector2D UndistortedV = V * (1.0 + (R2 * LensParameters.K1 + (R2 * R2) * LensParameters.K2 + (R2 * R2 * R2) * LensParameters.K3));

	// Tangential distortion. (not supported yet)
	//UndistortedV.X += P2 * (R2 + 2 * V2.X) + 2 * P1 * V.X * V.Y;
	//UndistortedV.Y += P1 * (R2 + 2 * V2.Y) + 2 * P2 * V.X * V.Y;

	// Returns engine V.
	return UndistortedV * FVector2D(1, -1);
}

FVector2D UMoSysLensDistortionModelHandler::LensUndistortViewportUVIntoViewSpace(float TanHalfDistortedHorizontalFOV, FVector2D DistortedViewportUV) const
{
	FVector2D AspectRatioAwareF = TanHalfDistortedHorizontalFOV * FVector2D(1, -1 / ASPECT_RATIO);
	return UndistortNormalizedViewPosition((DistortedViewportUV - FVector2D(0.5f, 0.5f)) * AspectRatioAwareF);
}

float UMoSysLensDistortionModelHandler::GetFx(bool UseComputedFx) const
{
	if (UseComputedFx)
	{
		return GetUndistortedFx();
	}
	return LensParameters.FxVirtualCamera;
}


float UMoSysLensDistortionModelHandler::GetUndistortedFx() const
{
	if (LensParameters.FxDistorted != 0)
	{
		float X = (MOSYS_SCREEN_WIDTH / 2) / LensParameters.FxDistorted;

		return (MOSYS_SCREEN_WIDTH / 2) / (X * (1 + ((X * X) * (LensParameters.K1 + ((X * X) * LensParameters.K2)))));
	}
	return MOSYS_SCREEN_WIDTH / 2;
}

float UMoSysLensDistortionModelHandler::GetFy(bool UseComputedFy) const
{
	if (UseComputedFy)
	{
		return GetUndistortedFy();
	}
	return LensParameters.FyVirtualCamera;
}


float UMoSysLensDistortionModelHandler::GetUndistortedFy() const
{
	if (LensParameters.FyDistorted != 0)
	{
		float X = (MOSYS_SCREEN_WIDTH / 2) / LensParameters.FyDistorted;

		return (MOSYS_SCREEN_WIDTH / 2) / (X * (1 + ((X * X) * (LensParameters.K1 + ((X * X) * LensParameters.K2)))));
	}
	return MOSYS_SCREEN_WIDTH / 2;
}

float UMoSysLensDistortionModelHandler::ComputeMoSysOverscanFactor() const
{
	if (OverscanFactorOverride > 0.f)
	{
		return OverscanFactorOverride;
	}

	float FxDistorted = LensParameters.FxDistorted == 0 ? MOSYS_SCREEN_WIDTH : LensParameters.FxDistorted;
	float DistortedHorizontalFOV = 2 * FMath::Atan(MOSYS_SCREEN_WIDTH / (2 * FxDistorted));

	FVector2D F = FVector2D(GetFx(true) / MOSYS_SCREEN_WIDTH);
	FVector2D C = FVector2D(LensParameters.PrincipalPoint_cx / MOSYS_SCREEN_WIDTH,
		LensParameters.PrincipalPoint_cy / MOSYS_SCREEN_HEIGHT) + FVector2D(0.5f, 0.5f);

	float TanHalfDistortedHorizontalFOV = FMath::Tan(DistortedHorizontalFOV * 0.5f) * 2.0; /*2.0 to match overscan we use in blueprint (UE4.27).*/

	// Get the position in the view space at z'=1 of different key point in the distorted Viewport UV coordinate system.
	// This very approximative to know the required overscan scale factor of the undistorted viewport, but works really well in practice.
	//
	//  Undistorted UV position in the view space:
	//                 ^ View space's Y
	//                 |
	//        0        1        2
	//     
	//        7        0        3 --> View space's X
	//     
	//        6        5        4
	FVector2D UndistortCornerPos0 = LensUndistortViewportUVIntoViewSpace(TanHalfDistortedHorizontalFOV, FVector2D(0.0f, 0.0f));
	FVector2D UndistortCornerPos1 = LensUndistortViewportUVIntoViewSpace(TanHalfDistortedHorizontalFOV, FVector2D(0.5f, 0.0f));
	FVector2D UndistortCornerPos2 = LensUndistortViewportUVIntoViewSpace(TanHalfDistortedHorizontalFOV, FVector2D(1.0f, 0.0f));
	FVector2D UndistortCornerPos3 = LensUndistortViewportUVIntoViewSpace(TanHalfDistortedHorizontalFOV, FVector2D(1.0f, 0.5f));
	FVector2D UndistortCornerPos4 = LensUndistortViewportUVIntoViewSpace(TanHalfDistortedHorizontalFOV, FVector2D(1.0f, 1.0f));
	FVector2D UndistortCornerPos5 = LensUndistortViewportUVIntoViewSpace(TanHalfDistortedHorizontalFOV, FVector2D(0.5f, 1.0f));
	FVector2D UndistortCornerPos6 = LensUndistortViewportUVIntoViewSpace(TanHalfDistortedHorizontalFOV, FVector2D(0.0f, 1.0f));
	FVector2D UndistortCornerPos7 = LensUndistortViewportUVIntoViewSpace(TanHalfDistortedHorizontalFOV, FVector2D(0.0f, 0.5f));

	// Find min and max of the inner square of undistorted Viewport in the view space at z'=1.
	FVector2D MinInnerViewportRect;
	FVector2D MaxInnerViewportRect;
	MinInnerViewportRect.X = FMath::Min3(UndistortCornerPos0.X, UndistortCornerPos6.X, UndistortCornerPos7.X);
	MinInnerViewportRect.Y = FMath::Min3(UndistortCornerPos4.Y, UndistortCornerPos5.Y, UndistortCornerPos6.Y);
	MaxInnerViewportRect.X = FMath::Max3(UndistortCornerPos2.X, UndistortCornerPos3.X, UndistortCornerPos4.X);
	MaxInnerViewportRect.Y = FMath::Max3(UndistortCornerPos0.Y, UndistortCornerPos1.Y, UndistortCornerPos2.Y);

	bool isValid = (MinInnerViewportRect.X < 0.f)
		&& (MinInnerViewportRect.Y < 0.f)
		&& (MaxInnerViewportRect.X > 0.f)
		&& (MaxInnerViewportRect.Y > 0.f);

	if (isValid)
	{
		FVector2D AspectRatioAwareF = F * FVector2D(1, ASPECT_RATIO);

		FVector2D MinInnerViewportRect_Scaled = C + AspectRatioAwareF * MinInnerViewportRect - FVector2D(0.5, 0.5);
		FVector2D MaxInnerViewportRect_Scaled = C + AspectRatioAwareF * MaxInnerViewportRect - FVector2D(0.5, 0.5);
		// Compute the required undistorted viewport scale on each axes.
		FVector2D ViewportScaleUpFactorPerViewAxis = FVector2D(2, 2)/* 1/(0.5,0.5) vector*/
			* FVector2D(FMath::Max(-MinInnerViewportRect_Scaled.X, MaxInnerViewportRect_Scaled.X),
				FMath::Max(-MinInnerViewportRect_Scaled.Y, MaxInnerViewportRect_Scaled.Y));

		// Scale up by 2% more the undistorted viewport size in the view space to work
		// around the fact that odd undistorted positions might not exactly be at the minimal
		// in case of a tangential distorted barrel lens distortion.
		const float ViewportScaleUpConstMultiplier = 1.02f;
		return FMath::Max(ViewportScaleUpFactorPerViewAxis.X, ViewportScaleUpFactorPerViewAxis.Y) * ViewportScaleUpConstMultiplier;
	}
	else
	{
		return 1;
	}
}

//This is meant to allow the homography component to retrieve the focal length from before the overscan changes
FVector2D UMoSysLensDistortionModelHandler::GetLastFocalLength() const
{
	return LastFocalLength;
}
