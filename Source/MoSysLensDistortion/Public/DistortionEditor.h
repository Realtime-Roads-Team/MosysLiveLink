// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MoSysLensModel.h"

#include "DistortionEditor.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), Blueprintable)
class UDistortionEditor : public UActorComponent
{
    GENERATED_BODY()

    public:
    UDistortionEditor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
    /**
    * Undistort a radial length in mo-sys coordinates.
    */
    UFUNCTION(Category = "UndistortMaths", BlueprintCallable, BlueprintPure = true)
    void UndistortRadius(UPARAM(DisplayName = "DistortedRadius")float InDistortedRadius, UPARAM(DisplayName = "Undistorted Radius")float &OutUndistortedRadius);

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lens Parameters")
    FMoSysLensParameters DistortionCoefficients;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lens Parameters")
    float UndistortedFX = 1920.0f;

protected:
    UPROPERTY(EditAnywhere, Category = "Lens Parameters")
    bool bUsedComputedFXInDistortion = true;
};
