// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MoSysLensModel.h"
#include "MoSysLensDistortUpdater.generated.h"


// This class does not need to be modified.
UINTERFACE(MinimalAPI, BlueprintType, Blueprintable)
class UMoSysLensDistortUpdater : public UInterface
{
    GENERATED_BODY()
};

/**
 * 
 * This interface provides the UpdateLensDistort method, which takes a FLensParameters structure, and returns the same structure, modified as necessary. Raw focus and zoom are provided as context
 * to allow lens files to be use to modify the lens prameters: Note it is acceptable to modify all values in the structure or none.
 * See also:  Mosys_LensDistortUpdatable, for how an instance of this interface may be registered with a class that permits it's distortion thruct to be updated.
 */
class MOSYSLENSDISTORTION_API IMoSysLensDistortUpdater
{
    GENERATED_BODY()

    // Add interface functions to this class. This is the class that will be inherited to implement this interface.

public:

    /// \todo Consider moving focus, zoom into distortion class.
    // Not necessarily right thing to do, as may want raw f,z without distortion.
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Mo-Sys")
    FMoSysLensParameters UpdateLensDistort(const FMoSysLensParameters& Distort, float FocusRaw, float ZoomRaw);
};
