// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.
#include "MoSysLensDistortionUpdaterComponent.h"


UMoSysLensDistortionUpdaterComponent::UMoSysLensDistortionUpdaterComponent()
{
    bUseLiveDistortion = true;
}

FMoSysLensParameters UMoSysLensDistortionUpdaterComponent::UpdateLensDistort_Implementation(const FMoSysLensParameters& Distort, float FocusRaw, float ZoomRaw)
{
    if (bUseLiveDistortion)
    {
        LensParameters = Distort;
    }
    return LensParameters;
}
