// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "Controllers/LiveLinkTransformController.h"

#include "CameraCalibrationTypes.h"
#include "MoSysLensDistortUpdatable.h"
#include "MoSysTrackingTypes.h"

#include "MoSysLiveLinkController.generated.h"

class UMoSysLensDistortionComponent;
/**
 * Custom Live Link Controller for Mo-Sys Tracking Data.
 */
UCLASS()
class UMoSysLiveLinkController : public ULiveLinkTransformController, public IMoSysLensDistortUpdatable
{
    GENERATED_BODY()

public:
    UMoSysLiveLinkController();

    UPROPERTY(VisibleAnywhere, DisplayName = "Tracking Status", Category = "Mo-Sys|Tracking")
    FString TrackingStatusString;

    UPROPERTY()
    EMoSysTrackingStatus TrackingStatus;

    UPROPERTY(VisibleAnywhere, DisplayName = "Timecode", Category = "Mo-Sys|Tracking")
    FTimecode Timecode;

    UPROPERTY(VisibleAnywhere, DisplayName = "Tracking Data", Category = "Mo-Sys|Tracking")
    FLiveLinkMoSysFrameData TrackingFrame;

    UPROPERTY(EditAnywhere, DisplayName = "Scale Live Link Data", Category = "Mo-Sys|Tracking")
    float LiveLinkScaleFactor = 1.0f;

    UPROPERTY(EditAnywhere, DisplayName = "Log Drop Frame", Category = "Mo-Sys|Tracking")
    bool LogDropFrame = false;
    
    UPROPERTY(EditAnywhere, DisplayName = "Should Pan", Category = "Mo-Sys|Tracking")
    bool bShouldPan = true;

    UPROPERTY(EditAnywhere, DisplayName = "Should Tilt", Category = "Mo-Sys|Tracking")
    bool bShouldTilt = true;

    /**  Invert the pan encoder values */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Mo-Sys|Tracking")
    bool bInvertPan = false;

    /**  Invert the tilt encoder values */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Mo-Sys|Tracking")
    bool bInvertTilt = false;

    UPROPERTY(EditAnywhere, DisplayName = "Frame Delay", Category = "Mo-Sys|Tracking|Delay", meta = (ClampMin = "0", ClampMax = "50", UIMin = "0", UIMax = "50"))
    int32 FrameDelay = 0;

    UPROPERTY(EditAnywhere, DisplayName = "Use current zoom", Category = "Mo-Sys|Tracking|Delay")
    bool bUseCurrentZoom = true;

    UPROPERTY(EditAnywhere, DisplayName = "Use current rotation", Category = "Mo-Sys|Tracking|Delay")
    bool bUseCurrentRotation = true;

    UFUNCTION()
    bool HasValidData();
    
private:
    UPROPERTY()
    int32 StalledFrameCounter;

    void HandleLens(const FLiveLinkMoSysFrameData* FrameData, bool bIsSpawned = false);
    bool GetDistortionState(const struct FLiveLinkMoSysFrameData* FrameData, struct FLensDistortionState& DistortionState, float& RecipFocalDistance, float& Aperture, bool bIsSpawned = false);

public:
    // Everything that follows is a duplicate of the LiveLinkLensController, but it is appropriate to
    // do the lens work here as it arrives in the same data packets as our tracking information.

    //~ Begin ULiveLinkControllerBase interface
    virtual void Tick(float DeltaTime, const FLiveLinkSubjectFrameData& SubjectData) override;
    virtual bool IsRoleSupported(const TSubclassOf<ULiveLinkRole>& RoleToSupport) override;
    virtual TSubclassOf<UActorComponent> GetDesiredComponentClass() const override;
    virtual void Cleanup() override;
    //~ End ULiveLinkControllerBase interface

    //~ Begin UObject Interface
    virtual void PostDuplicate(bool bDuplicateForPIE) override;
    virtual void PostEditImport() override;
    //~ End UObject Interface
    
    //~ Begin IMoSysLensDistortUpdatable interface
    virtual void RegisterLensDistortUpdater_Implementation(const TScriptInterface<IMoSysLensDistortUpdater>& InUpdater) override;
    //~ End IMoSysLensDistortUpdatable interface

    // called when we are spawned by sequencer so we can still play back lens distortion data correctly
    void TickSpawned(float DeltaTime);

    // called when using lens file loader component to update lens if no live link data
    void TickForceLensUpdate(float DeltaTime);
    
    FLiveLinkMoSysFrameData GetCurrentFrame();

protected:
    /** Cached distortion handler associated with attached camera component */
    UPROPERTY(Transient)
    ULensDistortionModelHandlerBase* LensDistortionHandler = nullptr;

    /** Unique identifier representing the source of distortion data */
    UPROPERTY(DuplicateTransient)
    FGuid DistortionProducerID;

    /** Whether to scale the computed overscan by the overscan percentage */
    UPROPERTY(BlueprintReadWrite, Category = "Mo-Sys|Tracking")
    bool bScaleOverscan = false;

    /** The percentage of the computed overscan that should be applied to the target camera */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|Tracking", meta = (EditCondition = "bScaleOverscan", ClampMin = "0.0", ClampMax = "2.0"))
    float OverscanMultiplier = 1.0f;

private:
    TScriptInterface<IMoSysLensDistortUpdater> LensDistortUpdater;
    TArray<FLiveLinkMoSysFrameData> FrameBuffer;
    FLiveLinkMoSysFrameData CurrentFrame;
};

