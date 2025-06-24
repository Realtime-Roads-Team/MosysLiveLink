// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include "CameraCalibrationTypes.h"
#include "CoreMinimal.h"
#include "LensFile.h"
#include "LiveLinkComponentController.h"
#include "UObject/WeakInterfacePtr.h"

#include "MoSysTrackingTypes.h"

#include "MoSysPassiveLiveLinkComponentController.generated.h"

class IMoSysLensDistortUpdatable;
DECLARE_MULTICAST_DELEGATE_OneParam(FOnTrackingStatusChanged, bool bTrackingGood);

/**
 * Mo-Sys LiveLink Component Controller
 */
UCLASS(ClassGroup = (Custom), meta = (DisplayName = "Mo Sys Passive LiveLink Controller", BlueprintSpawnableComponent))
class MOSYSTRACKING_API UMoSysPassiveLiveLinkComponentController : public ULiveLinkComponentController
{
    GENERATED_BODY()
    
public:
    UMoSysPassiveLiveLinkComponentController();

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|Tracking")
    EMoSysTrackingStatus GetTrackingStatus();

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|Tracking")
    FText GetTrackingStatusText();

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|Tracking")
    FTimecode GetTimecode();

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|Tracking")
    FLiveLinkMoSysFrameData GetTrackingData();

    FLensFileEvalData GetFreeDLensData();

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|Tracking")
    FLiveLinkMoSysFrameData GetLatestTrackingData();

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|Tracking")
    TScriptInterface<IMoSysLensDistortUpdatable> GetMoSysLensDistortUpdatable();

    UPROPERTY(BlueprintReadWrite, EditAnywhere, DisplayName = "Use Live Tracking", Category = "Mo-Sys|Tracking")
    bool bUseLiveTracking;

    // Update the lens using values from a registered MoSysLensDistortUpdater. Only needed if no live link data
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Mo-Sys|Tracking")
    bool bForceLensUpdate = false;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Mo-Sys|Tracking")
    bool bVerboseLogging = false;

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|Tracking")
    bool HasValidData();

    FOnTrackingStatusChanged& OnTrackingStatusChanged() { return TrackingStatusChanged; }

#if WITH_EDITOR
    virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif //WITH_EDITOR

protected:
    virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;

    class UMoSysLiveLinkController* GetMoSysLiveLinkController();

private:
    FOnTrackingStatusChanged TrackingStatusChanged;
    EMoSysTrackingStatus LastTrackingStatus = EMoSysTrackingStatus::Undefined;
    bool bIsSpawned;
    bool bIsFirstTick;
    class UMoSysLiveLinkController* MoSysControllerCache = nullptr;
};
