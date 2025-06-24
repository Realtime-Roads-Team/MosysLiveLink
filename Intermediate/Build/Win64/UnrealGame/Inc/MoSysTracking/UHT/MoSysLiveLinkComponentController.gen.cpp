// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysTracking/Public/MoSysLiveLinkComponentController.h"
#include "MoSysTracking/Public/MoSysTrackingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoSysLiveLinkComponentController() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkComponentController();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortUpdatable_NoRegister();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkComponentController();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkComponentController_NoRegister();
MOSYSTRACKING_API UEnum* Z_Construct_UEnum_MoSysTracking_EMoSysTrackingStatus();
MOSYSTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData();
UPackage* Z_Construct_UPackage__Script_MoSysTracking();
// End Cross Module References

// Begin Class UMoSysLiveLinkComponentController Function GetLatestTrackingData
struct Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetLatestTrackingData_Statics
{
	struct MoSysLiveLinkComponentController_eventGetLatestTrackingData_Parms
	{
		FLiveLinkMoSysFrameData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkComponentController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetLatestTrackingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoSysLiveLinkComponentController_eventGetLatestTrackingData_Parms, ReturnValue), Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData, METADATA_PARAMS(0, nullptr) }; // 295527650
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetLatestTrackingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetLatestTrackingData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetLatestTrackingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetLatestTrackingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoSysLiveLinkComponentController, nullptr, "GetLatestTrackingData", nullptr, nullptr, Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetLatestTrackingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetLatestTrackingData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetLatestTrackingData_Statics::MoSysLiveLinkComponentController_eventGetLatestTrackingData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetLatestTrackingData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetLatestTrackingData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetLatestTrackingData_Statics::MoSysLiveLinkComponentController_eventGetLatestTrackingData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetLatestTrackingData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetLatestTrackingData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoSysLiveLinkComponentController::execGetLatestTrackingData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLiveLinkMoSysFrameData*)Z_Param__Result=P_THIS->GetLatestTrackingData();
	P_NATIVE_END;
}
// End Class UMoSysLiveLinkComponentController Function GetLatestTrackingData

// Begin Class UMoSysLiveLinkComponentController Function GetMoSysLensDistortUpdatable
struct Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics
{
	struct MoSysLiveLinkComponentController_eventGetMoSysLensDistortUpdatable_Parms
	{
		TScriptInterface<IMoSysLensDistortUpdatable> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkComponentController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoSysLiveLinkComponentController_eventGetMoSysLensDistortUpdatable_Parms, ReturnValue), Z_Construct_UClass_UMoSysLensDistortUpdatable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoSysLiveLinkComponentController, nullptr, "GetMoSysLensDistortUpdatable", nullptr, nullptr, Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::MoSysLiveLinkComponentController_eventGetMoSysLensDistortUpdatable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::MoSysLiveLinkComponentController_eventGetMoSysLensDistortUpdatable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetMoSysLensDistortUpdatable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoSysLiveLinkComponentController::execGetMoSysLensDistortUpdatable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IMoSysLensDistortUpdatable>*)Z_Param__Result=P_THIS->GetMoSysLensDistortUpdatable();
	P_NATIVE_END;
}
// End Class UMoSysLiveLinkComponentController Function GetMoSysLensDistortUpdatable

// Begin Class UMoSysLiveLinkComponentController Function GetTimecode
struct Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTimecode_Statics
{
	struct FTimecode
	{
		int32 Hours;
		int32 Minutes;
		int32 Seconds;
		int32 Frames;
		float Subframe;
		bool bDropFrameFormat;
	};

	struct MoSysLiveLinkComponentController_eventGetTimecode_Parms
	{
		FTimecode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkComponentController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoSysLiveLinkComponentController_eventGetTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTimecode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTimecode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTimecode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoSysLiveLinkComponentController, nullptr, "GetTimecode", nullptr, nullptr, Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTimecode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTimecode_Statics::MoSysLiveLinkComponentController_eventGetTimecode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTimecode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTimecode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTimecode_Statics::MoSysLiveLinkComponentController_eventGetTimecode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTimecode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTimecode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoSysLiveLinkComponentController::execGetTimecode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimecode*)Z_Param__Result=P_THIS->GetTimecode();
	P_NATIVE_END;
}
// End Class UMoSysLiveLinkComponentController Function GetTimecode

// Begin Class UMoSysLiveLinkComponentController Function GetTrackingData
struct Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingData_Statics
{
	struct MoSysLiveLinkComponentController_eventGetTrackingData_Parms
	{
		FLiveLinkMoSysFrameData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkComponentController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoSysLiveLinkComponentController_eventGetTrackingData_Parms, ReturnValue), Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData, METADATA_PARAMS(0, nullptr) }; // 295527650
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoSysLiveLinkComponentController, nullptr, "GetTrackingData", nullptr, nullptr, Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingData_Statics::MoSysLiveLinkComponentController_eventGetTrackingData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingData_Statics::MoSysLiveLinkComponentController_eventGetTrackingData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoSysLiveLinkComponentController::execGetTrackingData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLiveLinkMoSysFrameData*)Z_Param__Result=P_THIS->GetTrackingData();
	P_NATIVE_END;
}
// End Class UMoSysLiveLinkComponentController Function GetTrackingData

// Begin Class UMoSysLiveLinkComponentController Function GetTrackingStatus
struct Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatus_Statics
{
	struct MoSysLiveLinkComponentController_eventGetTrackingStatus_Parms
	{
		EMoSysTrackingStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkComponentController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoSysLiveLinkComponentController_eventGetTrackingStatus_Parms, ReturnValue), Z_Construct_UEnum_MoSysTracking_EMoSysTrackingStatus, METADATA_PARAMS(0, nullptr) }; // 267727503
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoSysLiveLinkComponentController, nullptr, "GetTrackingStatus", nullptr, nullptr, Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatus_Statics::MoSysLiveLinkComponentController_eventGetTrackingStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatus_Statics::MoSysLiveLinkComponentController_eventGetTrackingStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoSysLiveLinkComponentController::execGetTrackingStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMoSysTrackingStatus*)Z_Param__Result=P_THIS->GetTrackingStatus();
	P_NATIVE_END;
}
// End Class UMoSysLiveLinkComponentController Function GetTrackingStatus

// Begin Class UMoSysLiveLinkComponentController Function GetTrackingStatusText
struct Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatusText_Statics
{
	struct MoSysLiveLinkComponentController_eventGetTrackingStatusText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkComponentController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatusText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoSysLiveLinkComponentController_eventGetTrackingStatusText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatusText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatusText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatusText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatusText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoSysLiveLinkComponentController, nullptr, "GetTrackingStatusText", nullptr, nullptr, Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatusText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatusText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatusText_Statics::MoSysLiveLinkComponentController_eventGetTrackingStatusText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatusText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatusText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatusText_Statics::MoSysLiveLinkComponentController_eventGetTrackingStatusText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatusText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatusText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoSysLiveLinkComponentController::execGetTrackingStatusText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetTrackingStatusText();
	P_NATIVE_END;
}
// End Class UMoSysLiveLinkComponentController Function GetTrackingStatusText

// Begin Class UMoSysLiveLinkComponentController Function HasValidData
struct Z_Construct_UFunction_UMoSysLiveLinkComponentController_HasValidData_Statics
{
	struct MoSysLiveLinkComponentController_eventHasValidData_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkComponentController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMoSysLiveLinkComponentController_HasValidData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoSysLiveLinkComponentController_eventHasValidData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoSysLiveLinkComponentController_HasValidData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoSysLiveLinkComponentController_eventHasValidData_Parms), &Z_Construct_UFunction_UMoSysLiveLinkComponentController_HasValidData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoSysLiveLinkComponentController_HasValidData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysLiveLinkComponentController_HasValidData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_HasValidData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoSysLiveLinkComponentController_HasValidData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoSysLiveLinkComponentController, nullptr, "HasValidData", nullptr, nullptr, Z_Construct_UFunction_UMoSysLiveLinkComponentController_HasValidData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_HasValidData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoSysLiveLinkComponentController_HasValidData_Statics::MoSysLiveLinkComponentController_eventHasValidData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkComponentController_HasValidData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoSysLiveLinkComponentController_HasValidData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMoSysLiveLinkComponentController_HasValidData_Statics::MoSysLiveLinkComponentController_eventHasValidData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoSysLiveLinkComponentController_HasValidData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoSysLiveLinkComponentController_HasValidData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoSysLiveLinkComponentController::execHasValidData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasValidData();
	P_NATIVE_END;
}
// End Class UMoSysLiveLinkComponentController Function HasValidData

// Begin Class UMoSysLiveLinkComponentController
void UMoSysLiveLinkComponentController::StaticRegisterNativesUMoSysLiveLinkComponentController()
{
	UClass* Class = UMoSysLiveLinkComponentController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLatestTrackingData", &UMoSysLiveLinkComponentController::execGetLatestTrackingData },
		{ "GetMoSysLensDistortUpdatable", &UMoSysLiveLinkComponentController::execGetMoSysLensDistortUpdatable },
		{ "GetTimecode", &UMoSysLiveLinkComponentController::execGetTimecode },
		{ "GetTrackingData", &UMoSysLiveLinkComponentController::execGetTrackingData },
		{ "GetTrackingStatus", &UMoSysLiveLinkComponentController::execGetTrackingStatus },
		{ "GetTrackingStatusText", &UMoSysLiveLinkComponentController::execGetTrackingStatusText },
		{ "HasValidData", &UMoSysLiveLinkComponentController::execHasValidData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoSysLiveLinkComponentController);
UClass* Z_Construct_UClass_UMoSysLiveLinkComponentController_NoRegister()
{
	return UMoSysLiveLinkComponentController::StaticClass();
}
struct Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Mo-Sys LiveLink Component Controller\n */" },
		{ "DisplayName", "Mo Sys LiveLink Controller" },
		{ "IncludePath", "MoSysLiveLinkComponentController.h" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkComponentController.h" },
		{ "ToolTip", "Mo-Sys LiveLink Component Controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLiveTracking_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "DisplayName", "Use Live Tracking" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkComponentController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceLensUpdate_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "Comment", "// Update the lens using values from a registered MoSysLensDistortUpdater. Only needed if no live link data\n" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkComponentController.h" },
		{ "ToolTip", "Update the lens using values from a registered MoSysLensDistortUpdater. Only needed if no live link data" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseLiveTracking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLiveTracking;
	static void NewProp_bForceLensUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceLensUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetLatestTrackingData, "GetLatestTrackingData" }, // 3460067577
		{ &Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetMoSysLensDistortUpdatable, "GetMoSysLensDistortUpdatable" }, // 129355294
		{ &Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTimecode, "GetTimecode" }, // 1993908091
		{ &Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingData, "GetTrackingData" }, // 3685776581
		{ &Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatus, "GetTrackingStatus" }, // 382159813
		{ &Z_Construct_UFunction_UMoSysLiveLinkComponentController_GetTrackingStatusText, "GetTrackingStatusText" }, // 2699809670
		{ &Z_Construct_UFunction_UMoSysLiveLinkComponentController_HasValidData, "HasValidData" }, // 1156743988
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoSysLiveLinkComponentController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics::NewProp_bUseLiveTracking_SetBit(void* Obj)
{
	((UMoSysLiveLinkComponentController*)Obj)->bUseLiveTracking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics::NewProp_bUseLiveTracking = { "bUseLiveTracking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysLiveLinkComponentController), &Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics::NewProp_bUseLiveTracking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLiveTracking_MetaData), NewProp_bUseLiveTracking_MetaData) };
void Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics::NewProp_bForceLensUpdate_SetBit(void* Obj)
{
	((UMoSysLiveLinkComponentController*)Obj)->bForceLensUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics::NewProp_bForceLensUpdate = { "bForceLensUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysLiveLinkComponentController), &Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics::NewProp_bForceLensUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceLensUpdate_MetaData), NewProp_bForceLensUpdate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics::NewProp_bUseLiveTracking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics::NewProp_bForceLensUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkComponentController,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics::ClassParams = {
	&UMoSysLiveLinkComponentController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysLiveLinkComponentController()
{
	if (!Z_Registration_Info_UClass_UMoSysLiveLinkComponentController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysLiveLinkComponentController.OuterSingleton, Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysLiveLinkComponentController.OuterSingleton;
}
template<> MOSYSTRACKING_API UClass* StaticClass<UMoSysLiveLinkComponentController>()
{
	return UMoSysLiveLinkComponentController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLiveLinkComponentController);
UMoSysLiveLinkComponentController::~UMoSysLiveLinkComponentController() {}
// End Class UMoSysLiveLinkComponentController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoSysLiveLinkComponentController, UMoSysLiveLinkComponentController::StaticClass, TEXT("UMoSysLiveLinkComponentController"), &Z_Registration_Info_UClass_UMoSysLiveLinkComponentController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLiveLinkComponentController), 2330074947U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h_1393230823(TEXT("/Script/MoSysTracking"),
	Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
