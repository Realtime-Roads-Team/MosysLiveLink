// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MoSysLensDistortUpdater.h"

#include "MoSysLensDistortionUpdaterComponent.generated.h"

UCLASS(meta = (BlueprintSpawnableComponent))
class MOSYSLENSDISTORTION_API UMoSysLensDistortionUpdaterComponent : public UActorComponent, public IMoSysLensDistortUpdater
{
    GENERATED_BODY()

public:
    UMoSysLensDistortionUpdaterComponent();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    bool bUseLiveDistortion;

    //~ Begin IMoSysLensDistortUpdater interface
    FMoSysLensParameters UpdateLensDistort_Implementation(const FMoSysLensParameters& Distort, float FocusRaw, float ZoomRaw);
    //~ End IMoSysLensDistortUpdater interface

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    FMoSysLensParameters LensParameters;

};
