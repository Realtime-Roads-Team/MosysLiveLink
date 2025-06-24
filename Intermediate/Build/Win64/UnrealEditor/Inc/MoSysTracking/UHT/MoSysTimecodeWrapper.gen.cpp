// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysTimecodeWrapper.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoSysTimecodeWrapper() {}

// ********** Begin Cross Module References ********************************************************
MOSYSTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FMoSysTimecodeWrapper();
UPackage* Z_Construct_UPackage__Script_MoSysTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMoSysTimecodeWrapper *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoSysTimecodeWrapper;
class UScriptStruct* FMoSysTimecodeWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoSysTimecodeWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoSysTimecodeWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoSysTimecodeWrapper, (UObject*)Z_Construct_UPackage__Script_MoSysTracking(), TEXT("MoSysTimecodeWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_FMoSysTimecodeWrapper.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Slate widget friendly wrapper of native Unreal FTimecode.\n * This is required as FTimecode is not a UStruct, nor are its\n * member properties UPROPERTY, which causes a crash when attempting\n * to render the native FTimecode struct in a slate details view like is done\n * with the FLiveLinkMoSysFrameData.\n */" },
#endif
		{ "ModuleRelativePath", "Public/MoSysTimecodeWrapper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Slate widget friendly wrapper of native Unreal FTimecode.\nThis is required as FTimecode is not a UStruct, nor are its\nmember properties UPROPERTY, which causes a crash when attempting\nto render the native FTimecode struct in a slate details view like is done\nwith the FLiveLinkMoSysFrameData." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hours_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysTimecodeWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minutes_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysTimecodeWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysTimecodeWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysTimecodeWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subframe_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysTimecodeWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDropFrameFormat_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysTimecodeWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Hours;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Minutes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Frames;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Subframe;
	static void NewProp_bDropFrameFormat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDropFrameFormat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoSysTimecodeWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::NewProp_Hours = { "Hours", nullptr, (EPropertyFlags)0x0010000200020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysTimecodeWrapper, Hours), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hours_MetaData), NewProp_Hours_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0010000200020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysTimecodeWrapper, Minutes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minutes_MetaData), NewProp_Minutes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000200020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysTimecodeWrapper, Seconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seconds_MetaData), NewProp_Seconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000200020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysTimecodeWrapper, Frames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frames_MetaData), NewProp_Frames_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::NewProp_Subframe = { "Subframe", nullptr, (EPropertyFlags)0x0010000200020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysTimecodeWrapper, Subframe), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subframe_MetaData), NewProp_Subframe_MetaData) };
void Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::NewProp_bDropFrameFormat_SetBit(void* Obj)
{
	((FMoSysTimecodeWrapper*)Obj)->bDropFrameFormat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::NewProp_bDropFrameFormat = { "bDropFrameFormat", nullptr, (EPropertyFlags)0x0010000200020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMoSysTimecodeWrapper), &Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::NewProp_bDropFrameFormat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDropFrameFormat_MetaData), NewProp_bDropFrameFormat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::NewProp_Hours,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::NewProp_Minutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::NewProp_Seconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::NewProp_Frames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::NewProp_Subframe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::NewProp_bDropFrameFormat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysTracking,
	nullptr,
	&NewStructOps,
	"MoSysTimecodeWrapper",
	Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::PropPointers),
	sizeof(FMoSysTimecodeWrapper),
	alignof(FMoSysTimecodeWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoSysTimecodeWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_FMoSysTimecodeWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoSysTimecodeWrapper.InnerSingleton, Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoSysTimecodeWrapper.InnerSingleton;
}
// ********** End ScriptStruct FMoSysTimecodeWrapper ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysTimecodeWrapper_h__Script_MoSysTracking_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMoSysTimecodeWrapper::StaticStruct, Z_Construct_UScriptStruct_FMoSysTimecodeWrapper_Statics::NewStructOps, TEXT("MoSysTimecodeWrapper"), &Z_Registration_Info_UScriptStruct_FMoSysTimecodeWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoSysTimecodeWrapper), 2514525124U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysTimecodeWrapper_h__Script_MoSysTracking_3398063320(TEXT("/Script/MoSysTracking"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysTimecodeWrapper_h__Script_MoSysTracking_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysTimecodeWrapper_h__Script_MoSysTracking_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
