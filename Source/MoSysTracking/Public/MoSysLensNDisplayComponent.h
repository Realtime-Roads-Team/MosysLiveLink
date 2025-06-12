// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MoSysLensNDisplayComponent.generated.h"

class UCineCameraComponent;
class UMoSysLiveLinkComponentController;

/**
 * Mo-Sys Lens NDisplay Component, only applies FOV, FD and EPD
 */
UCLASS(ClassGroup = (Custom), meta = (DisplayName = "Mo Sys Lens NDisplay Component", BlueprintSpawnableComponent))
class MOSYSTRACKING_API UMoSysLensNDisplayComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UMoSysLensNDisplayComponent();

    virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
    /** Verify base transform and apply nodal offset on top of everything else done in tick */
    void OnPostActorTick(UWorld* World, ELevelTick TickType, float DeltaSeconds);

    /** Whether or not to apply focus distance */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys")
        bool bManualFocus = false;

    /** Whether or not to apply field of view - only setable if distortion is not applied */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys")
        bool bManualZoom = false;

private:

    void SetFieldOfView(float FxVirtualCamera);
    void SetFocalDistance(float RecipFocalDistance);
    void SetEPD(float EPD);

    UCineCameraComponent* CameraComponent;
    UMoSysLiveLinkComponentController* MoSysLiveLink;
};
