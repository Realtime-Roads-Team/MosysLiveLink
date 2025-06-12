// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "LensComponent.h"

#include "MoSysLensModel.h"

#include "MoSysLensDistortionComponent.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FOnLensStatusChanged, bool bLensGood);

/**
 * Helper struct for render settings that is passed between modules
 */
struct FMoSysRenderSettings
{
    bool bEnableDistortion = true;
    bool bAnimateOverscan = true;
    bool bOverrideOverscan = false;
    float OverrideOverscanFactor = 1.f;
    float CameraSettingOverscanPercentage = 0.f;
    bool bFitResolutionAspectRatio = true;
    float ResolutionAspectRatio = 16.f / 9.f;
    bool bHasDistortSTMapLayer = true;
    bool bHasUndistortSTMapLayer = true;
    bool bHasCalibrationLayer = false;
};

UCLASS(meta = (BlueprintSpawnableComponent))
class MOSYSLENSDISTORTION_API UMoSysLensDistortionComponent : public ULensComponent
{
    GENERATED_BODY()

public:
    UMoSysLensDistortionComponent();

    virtual void BeginPlay() override;
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    //~ Begin UObject Interface
#if WITH_EDITOR
    virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif //WITH_EDITOR
    //~ End UObject Interface

    FOnLensStatusChanged& OnLensStatusChanged() { return LensStatusChanged; }
    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|Lens Distortion")
        bool GetCurrentLensParameters(struct FMoSysLensParameters& LensParameters);

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|Lens Distortion")
        float GetUndistortOverscanFactor();
    void SetIsRendering(bool IsRendering);
    void SetApplyOverscanToPostProcess(bool ShouldApplyOverscan);
    void HandleRenderSettings(const FMoSysRenderSettings& RenderSettings);

    /** Set the distortion source setting */
    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|Lens Distortion")
    void SetDistortionStateSource(EDistortionSource Source);

    // Override the parameters, for example when spawned (used internally)
    void OverrideHandlerLensParameters(const FMoSysLensParameters InLensParameters);
    void SetOverrideOverscanFactor(float InOverrideOverscanFactor);
    float GetCameraFOV();
    void SetHomographyOverscanFactor(float OverscanFactor);

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Mo-Sys|LensDistortion")
    bool ShouldUpdateFilmback = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    bool OverrideRawFocus = false;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    int32 RawFocus = 0;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    int32 RawZoom = 0;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    FTimecode Timecode;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Mo-Sys|LensDistortion")
    bool bApplyOverscanToFOV = true;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Mo-Sys|LensDistortion", meta= (DisplayName = "Apply EPD to Focal Distance"))
    bool bApplyEPDToFocalDistance = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float OverscanFactorOverride;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Mo-Sys|LensDistortion")
    float CurrentOverscanFactor;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Mo-Sys|LensDistortion")
    float TStopScalingFactor = 1.0f;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float FxScale = 1.0f;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float CxOffset = 0.0f;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float CyOffset = 0.0f;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float EPDOffset = 0.0f;

    /** Helper to access our handler */
    class UMoSysLensDistortionModelHandler* GetMoSysLensDistortionHandler();

protected:
    /** Verify base transform and apply nodal offset on top of everything else done in tick */
    void OnPostActorTick(UWorld* World, ELevelTick TickType, float DeltaSeconds);

    UPROPERTY(Interp, EditAnywhere, BlueprintReadOnly, Category = "Mo-Sys|LensDistortion")
    FMoSysLensParameters Parameters;

private:
    /** Apply the nodal offset to the input camera's transform */
    void ApplyNodalOffset(class UCineCameraComponent* CineCameraComponent);

private:

    FOnLensStatusChanged LensStatusChanged;
    bool LastLensStatus = false;
    bool bIsSpawned = false;
    bool bFirstTick = true;
};
