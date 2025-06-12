// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysLiveLinkRole.h"

#include "MoSysTrackingTypes.h"

#define LOCTEXT_NAMESPACE "MoSysRole"

UScriptStruct* UMoSysLiveLinkRole::GetStaticDataStruct() const 
{
    return FLiveLinkMoSysStaticData::StaticStruct();
}

UScriptStruct* UMoSysLiveLinkRole::GetFrameDataStruct() const
{
    return FLiveLinkMoSysFrameData::StaticStruct();
}

UScriptStruct* UMoSysLiveLinkRole::GetBlueprintDataStruct() const
{
    return FLiveLinkMoSysBlueprintData::StaticStruct();
}

// Copied from LiveLinkCameraRole
bool UMoSysLiveLinkRole::InitializeBlueprintData(const FLiveLinkSubjectFrameData& InSourceData, FLiveLinkBlueprintDataStruct& OutBlueprintData) const
{
	bool bSuccess = false;

	FLiveLinkMoSysBlueprintData* BlueprintData = OutBlueprintData.Cast<FLiveLinkMoSysBlueprintData>();
	const FLiveLinkMoSysStaticData* StaticData = InSourceData.StaticData.Cast<FLiveLinkMoSysStaticData>();
	const FLiveLinkMoSysFrameData* FrameData = InSourceData.FrameData.Cast<FLiveLinkMoSysFrameData>();
	if (BlueprintData && StaticData && FrameData)
	{
		GetStaticDataStruct()->CopyScriptStruct(&BlueprintData->StaticData, StaticData);
		GetFrameDataStruct()->CopyScriptStruct(&BlueprintData->FrameData, FrameData);
		bSuccess = true;
	}

	return bSuccess;
}

FText UMoSysLiveLinkRole::GetDisplayName() const 
{
    return LOCTEXT("MoSysRole", "Mo-Sys");
}

#undef LOCTEXT_NAMESPACE
