// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "LensDistortionModelHandlerBase.h"
#include "MoSysLensDistortionComponent.h"
#include "MoSysLensModel.h"

#include "MoSysLensDistortionModelHandler.generated.h"

/** Lens distortion handler for the Mo-Sys lens model */
UCLASS(BlueprintType)
class MOSYSLENSDISTORTION_API UMoSysLensDistortionModelHandler : public ULensDistortionModelHandlerBase
{
	GENERATED_BODY()

public:
	float GetEPD();
	FLensDistortionState GetDistortionState();
	FMoSysLensParameters GetCurrentLensParameters();
	void SetCurrentLensParameters(const FMoSysLensParameters& InParameters);
	// compute our own overscan factor to stay consistent with UE5 workflow
	float ComputeMoSysOverscanFactor() const;
	void UpdateWorldContextObject(TWeakObjectPtr<UObject> InWorldContextObject);
	void SetOverrideOverscanFactor(float OverscanFactorOverride);
	void SetApplyOverscanToFOV(bool bInApplyOverscanToFOV);
	void SetApplyEPDToFocalDistance(bool bInApplyEPDToFocalDistance);
	void SetIsRendering(bool IsRendering);
	void SetApplyOverscanToPostProcess(bool ApplyOverscanToPostProcess) { bApplyOverscanToPostProcess = ApplyOverscanToPostProcess; }
	void HandleRenderSettings(const FMoSysRenderSettings& RenderSettings);
	void SetHomographyOverscanFactor(float InHomographyOverscanFactor);
	FVector2D GetLastFocalLength() const;
public:
	//~ Begin UObject Interface
	virtual void PostInitProperties() override;
	void SetIsSpawned(bool InIsSpawned) { bIsSpawned = InIsSpawned; }
	//~ End UObject Interface

protected:
	//~ Begin ULensDistortionModelHandlerBase interface
	virtual void InitializeHandler() override;
	virtual FVector2D ComputeDistortedUV(const FVector2D& InScreenUV) const override;
	virtual void InitDistortionMaterials() override;
	virtual void UpdateMaterialParameters() override;
	virtual void InterpretDistortionParameters() override;
	//~ End ULensDistortionModelHandlerBase interface

public:
	void UpdateLensCache(UCineCameraComponent* CameraComponent, FVector2D InF, float InRecipFocalDistance, float InAperture);
	void UpdateCameraLensOnTick(bool ShouldUpdateFilmback);
	/** Undistorts top left originated viewport UV into the view space (x', y', z'=2.f) */
	FVector2D LensUndistortViewportUVIntoViewSpace(float TanHalfDistortedHorizontalFOV, FVector2D DistortedViewportUV) const;
	/** Undistorts 3d vector (x, y, z=1.f) in the view space and returns (x', y', z'=1.f). */
	FVector2D UndistortNormalizedViewPosition(FVector2D V) const;

private:
	FVector2D ComputeDistortedUVWithoutCxCy(const FVector2D& InUndistortedUV) const;

	/* Fx and Fy getters from MoSysLensDistortion_BP in UE4.27*/
	float GetFx(bool UseComputedFx) const;
	float GetUndistortedFx() const;
	float GetFy(bool UseComputedFy) const;
	float GetUndistortedFy() const;

	bool bIsSpawned = false;

	/** Mo-Sys lens distortion parameters */
	FMoSysLensParameters LensParameters;
	UPROPERTY()
	TObjectPtr<UCineCameraComponent> CineCameraComponent = nullptr;
	FVector2D LastFocalLength = FVector2D::ZeroVector;

	// This is a 17:9 aspect ratio 
	float LastAspectRatio = 2.77778f;
	float LastRecipFocalDistance = 1.f;
	float LastAperture = 0.f;
	bool IsFilmbackModified = false;

	UPROPERTY(Transient)
	TWeakObjectPtr<UObject> WorldContextObject = nullptr;
	float OverscanFactorOverride;
	float HomographyOverscanFactor = 1.f; // this overscan factor accounts for the homography applied to the image for XR geometry correction

	bool bApplyOverscanToFOV = true;
	bool bApplyOverscanToPostProcess = false;
	bool bApplyEPDToFocalDistance = true;

	UPROPERTY(Transient)
	TObjectPtr<UTextureRenderTarget2D> MoSysCalibrationLayerRT = nullptr;

	UPROPERTY(Transient)
	TObjectPtr<UTextureRenderTarget2D> MoSysDisplacementMapRT = nullptr;

	UPROPERTY(Transient)
	TObjectPtr<UTextureRenderTarget2D> MoSysUndisplacementMapRT = nullptr;

	bool bIsRendering = false;
	float bEnableDistortion = true;
	float MRQCameraOverscanPercentage = 0.f;
	bool bDrawDistortSTMapMaterial = false;
	bool bDrawUndistortSTMapMaterial = false;
	bool bDrawCalibrationLayerMaterial = false;

};
