// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "LiveLinkTypes.h"
#include "Roles/LiveLinkBasicRole.h"
#include "MoSysTrackingTypes.h"
#include "MoSysLiveLinkRole.generated.h"

/**
 * Facility structure to handle Mo-Sys data in blueprint. Copied from LiveLinkBasicTypes.h
 */
USTRUCT(BlueprintType)
struct MOSYSTRACKING_API FLiveLinkMoSysBlueprintData : public FLiveLinkBaseBlueprintData
{
    GENERATED_BODY()

    // Static data that should not change every frame
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys")
    FLiveLinkMoSysStaticData StaticData;

    // Dynamic data that can change every frame
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys")
    FLiveLinkMoSysFrameData FrameData;
};


/**
 * Role for Mo-Sys subjects that defines the frame data types
 */
UCLASS()
class MOSYSTRACKING_API UMoSysLiveLinkRole : public ULiveLinkBasicRole
{
    GENERATED_BODY()
    
public:
    virtual UScriptStruct* GetStaticDataStruct() const override;
    virtual UScriptStruct* GetFrameDataStruct() const override;
    virtual UScriptStruct* GetBlueprintDataStruct() const override;

    virtual bool InitializeBlueprintData(const FLiveLinkSubjectFrameData& InSourceData, FLiveLinkBlueprintDataStruct& OutBlueprintData) const override;

    virtual FText GetDisplayName() const override;
};
