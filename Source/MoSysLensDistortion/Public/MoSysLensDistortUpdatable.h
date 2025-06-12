// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "MoSysLensDistortUpdatable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, BlueprintType, Blueprintable)
class UMoSysLensDistortUpdatable : public UInterface
{
    GENERATED_BODY()
};

class IMoSysLensDistortUpdater;

/**
 * 
 *  Classes that have a lens distortion structure that can be updated should implement this class.
 *  The implementing Class is provided a lens Mosys_LensDistortUpdater interface from whose methods it should use to update it's lens distortion object.
 *  An implementing class is not required to accept an instance of Mosys_LensDistortUpdater.
 *  \todo Consider returning bool from RegisterLensDistortUpdater, so caller can determine if the callee accepted the LensDistortUpdater or not.
 */
class MOSYSLENSDISTORTION_API IMoSysLensDistortUpdatable
{
    GENERATED_BODY()

    // Add interface functions to this class. This is the class that will be inherited to implement this interface.

public:
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    void RegisterLensDistortUpdater(const TScriptInterface<IMoSysLensDistortUpdater> &InUpdater);

};
