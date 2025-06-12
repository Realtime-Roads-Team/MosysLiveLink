// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "DistortionEditor.h"

UDistortionEditor::UDistortionEditor()
{
    // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
    // off to improve performance if you don't need them.
    PrimaryComponentTick.bCanEverTick = true;
}

void UDistortionEditor::BeginPlay()
{
    Super::BeginPlay();
}

void UDistortionEditor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UDistortionEditor::UndistortRadius(UPARAM(DisplayName = "DistortedRadius")float InDistortedRadius, UPARAM(DisplayName = "Undistorted Radius")float &OutUndistortedRadius)
{
    float x = InDistortedRadius / DistortionCoefficients.FxDistorted;
    //move to separate function (inline, )
    float K1 = DistortionCoefficients.K1;
    float K2 = DistortionCoefficients.K2;
    float K3 = (DistortionCoefficients.IsK3Valid ? DistortionCoefficients.K3 : 0.0f);

    float x2 = x * x;
    OutUndistortedRadius = (x * (1 + (x2 * (K1 + (x2 * (K2 + (x2 * K3)))))));
    //~end
    OutUndistortedRadius = (bUsedComputedFXInDistortion ? OutUndistortedRadius * UndistortedFX : OutUndistortedRadius * DistortionCoefficients.FxVirtualCamera);
}
