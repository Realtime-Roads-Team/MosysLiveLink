// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysPassiveLiveLinkComponentController.h"
#include "MoSysTrackingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoSysPassiveLiveLinkComponentController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkComponentController();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortUpdatable_NoRegister();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_NoRegister();
MOSYSTRACKING_API UEnum* Z_Construct_UEnum_MoSysTracking_EMoSysTrackingStatus();
MOSYSTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData();
UPackage* Z_Construct_UPackage__Script_MoSysTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoSysPassiveLiveLinkComponentController Function GetLatestTrackingData **
struct Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetLatestTrackingData_Statics
{
	struct MoSysPassiveLiveLinkComponentController_eventGetLatestTrackingData_Parms
	{
		FLiveLinkMoSysFrameData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysPassiveLiveLinkComponentController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetLatestTrackingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoSysPassiveLiveLinkComponentController_eventGetLatestTrackingData_Parms, ReturnValue), Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData, METADATA_PARAMS(0, nullptr) }; // 1188048775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetLatestTrackingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetLatestTrackingData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetLatestTrackingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetLatestTrackingData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController, nullptr, "GetLatestTrackingData", Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetLatestTrackingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetLatestTrackingData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetLatestTrackingData_Statics::MoSysPassiveLiveLinkComponentController_eventGetLatestTrackingData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetLatestTrackingData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetLatestTrackingData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetLatestTrackingData_Statics::MoSysPassiveLiveLinkComponentController_eventGetLatestTrackingData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetLatestTrackingData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetLatestTrackingData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoSysPassiveLiveLinkComponentController::execGetLatestTrackingData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLiveLinkMoSysFrameData*)Z_Param__Result=P_THIS->GetLatestTrackingData();
	P_NATIVE_END;
}
// ********** End Class UMoSysPassiveLiveLinkComponentController Function GetLatestTrackingData ****

// ********** Begin Class UMoSysPassiveLiveLinkComponentController Function GetMoSysLensDistortUpdatable 
struct Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics
{
	struct MoSysPassiveLiveLinkComponentController_eventGetMoSysLensDistortUpdatable_Parms
	{
		TScriptInterface<IMoSysLensDistortUpdatable> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysPassiveLiveLinkComponentController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoSysPassiveLiveLinkComponentController_eventGetMoSysLensDistortUpdatable_Parms, ReturnValue), Z_Construct_UClass_UMoSysLensDistortUpdatable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController, nullptr, "GetMoSysLensDistortUpdatable", Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::MoSysPassiveLiveLinkComponentController_eventGetMoSysLensDistortUpdatable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::MoSysPassiveLiveLinkComponentController_eventGetMoSysLensDistortUpdatable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetMoSysLensDistortUpdatable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetMoSysLensDistortUpdatable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoSysPassiveLiveLinkComponentController::execGetMoSysLensDistortUpdatable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IMoSysLensDistortUpdatable>*)Z_Param__Result=P_THIS->GetMoSysLensDistortUpdatable();
	P_NATIVE_END;
}
// ********** End Class UMoSysPassiveLiveLinkComponentController Function GetMoSysLensDistortUpdatable 

// ********** Begin Class UMoSysPassiveLiveLinkComponentController Function GetTimecode ************
struct Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTimecode_Statics
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

	struct MoSysPassiveLiveLinkComponentController_eventGetTimecode_Parms
	{
		FTimecode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysPassiveLiveLinkComponentController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoSysPassiveLiveLinkComponentController_eventGetTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTimecode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTimecode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTimecode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTimecode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController, nullptr, "GetTimecode", Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTimecode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTimecode_Statics::MoSysPassiveLiveLinkComponentController_eventGetTimecode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTimecode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTimecode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTimecode_Statics::MoSysPassiveLiveLinkComponentController_eventGetTimecode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTimecode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTimecode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoSysPassiveLiveLinkComponentController::execGetTimecode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimecode*)Z_Param__Result=P_THIS->GetTimecode();
	P_NATIVE_END;
}
// ********** End Class UMoSysPassiveLiveLinkComponentController Function GetTimecode **************

// ********** Begin Class UMoSysPassiveLiveLinkComponentController Function GetTrackingData ********
struct Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingData_Statics
{
	struct MoSysPassiveLiveLinkComponentController_eventGetTrackingData_Parms
	{
		FLiveLinkMoSysFrameData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysPassiveLiveLinkComponentController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoSysPassiveLiveLinkComponentController_eventGetTrackingData_Parms, ReturnValue), Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData, METADATA_PARAMS(0, nullptr) }; // 1188048775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController, nullptr, "GetTrackingData", Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingData_Statics::MoSysPassiveLiveLinkComponentController_eventGetTrackingData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingData_Statics::MoSysPassiveLiveLinkComponentController_eventGetTrackingData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoSysPassiveLiveLinkComponentController::execGetTrackingData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLiveLinkMoSysFrameData*)Z_Param__Result=P_THIS->GetTrackingData();
	P_NATIVE_END;
}
// ********** End Class UMoSysPassiveLiveLinkComponentController Function GetTrackingData **********

// ********** Begin Class UMoSysPassiveLiveLinkComponentController Function GetTrackingStatus ******
struct Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatus_Statics
{
	struct MoSysPassiveLiveLinkComponentController_eventGetTrackingStatus_Parms
	{
		EMoSysTrackingStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysPassiveLiveLinkComponentController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoSysPassiveLiveLinkComponentController_eventGetTrackingStatus_Parms, ReturnValue), Z_Construct_UEnum_MoSysTracking_EMoSysTrackingStatus, METADATA_PARAMS(0, nullptr) }; // 267727503
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController, nullptr, "GetTrackingStatus", Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatus_Statics::MoSysPassiveLiveLinkComponentController_eventGetTrackingStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatus_Statics::MoSysPassiveLiveLinkComponentController_eventGetTrackingStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoSysPassiveLiveLinkComponentController::execGetTrackingStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMoSysTrackingStatus*)Z_Param__Result=P_THIS->GetTrackingStatus();
	P_NATIVE_END;
}
// ********** End Class UMoSysPassiveLiveLinkComponentController Function GetTrackingStatus ********

// ********** Begin Class UMoSysPassiveLiveLinkComponentController Function GetTrackingStatusText **
struct Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatusText_Statics
{
	struct MoSysPassiveLiveLinkComponentController_eventGetTrackingStatusText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysPassiveLiveLinkComponentController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatusText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoSysPassiveLiveLinkComponentController_eventGetTrackingStatusText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatusText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatusText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatusText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatusText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController, nullptr, "GetTrackingStatusText", Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatusText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatusText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatusText_Statics::MoSysPassiveLiveLinkComponentController_eventGetTrackingStatusText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatusText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatusText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatusText_Statics::MoSysPassiveLiveLinkComponentController_eventGetTrackingStatusText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatusText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatusText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoSysPassiveLiveLinkComponentController::execGetTrackingStatusText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetTrackingStatusText();
	P_NATIVE_END;
}
// ********** End Class UMoSysPassiveLiveLinkComponentController Function GetTrackingStatusText ****

// ********** Begin Class UMoSysPassiveLiveLinkComponentController Function HasValidData ***********
struct Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_HasValidData_Statics
{
	struct MoSysPassiveLiveLinkComponentController_eventHasValidData_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysPassiveLiveLinkComponentController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_HasValidData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoSysPassiveLiveLinkComponentController_eventHasValidData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_HasValidData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoSysPassiveLiveLinkComponentController_eventHasValidData_Parms), &Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_HasValidData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_HasValidData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_HasValidData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_HasValidData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_HasValidData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController, nullptr, "HasValidData", Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_HasValidData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_HasValidData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_HasValidData_Statics::MoSysPassiveLiveLinkComponentController_eventHasValidData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_HasValidData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_HasValidData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_HasValidData_Statics::MoSysPassiveLiveLinkComponentController_eventHasValidData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_HasValidData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_HasValidData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoSysPassiveLiveLinkComponentController::execHasValidData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasValidData();
	P_NATIVE_END;
}
// ********** End Class UMoSysPassiveLiveLinkComponentController Function HasValidData *************

// ********** Begin Class UMoSysPassiveLiveLinkComponentController *********************************
void UMoSysPassiveLiveLinkComponentController::StaticRegisterNativesUMoSysPassiveLiveLinkComponentController()
{
	UClass* Class = UMoSysPassiveLiveLinkComponentController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLatestTrackingData", &UMoSysPassiveLiveLinkComponentController::execGetLatestTrackingData },
		{ "GetMoSysLensDistortUpdatable", &UMoSysPassiveLiveLinkComponentController::execGetMoSysLensDistortUpdatable },
		{ "GetTimecode", &UMoSysPassiveLiveLinkComponentController::execGetTimecode },
		{ "GetTrackingData", &UMoSysPassiveLiveLinkComponentController::execGetTrackingData },
		{ "GetTrackingStatus", &UMoSysPassiveLiveLinkComponentController::execGetTrackingStatus },
		{ "GetTrackingStatusText", &UMoSysPassiveLiveLinkComponentController::execGetTrackingStatusText },
		{ "HasValidData", &UMoSysPassiveLiveLinkComponentController::execHasValidData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoSysPassiveLiveLinkComponentController;
UClass* UMoSysPassiveLiveLinkComponentController::GetPrivateStaticClass()
{
	using TClass = UMoSysPassiveLiveLinkComponentController;
	if (!Z_Registration_Info_UClass_UMoSysPassiveLiveLinkComponentController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoSysPassiveLiveLinkComponentController"),
			Z_Registration_Info_UClass_UMoSysPassiveLiveLinkComponentController.InnerSingleton,
			StaticRegisterNativesUMoSysPassiveLiveLinkComponentController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMoSysPassiveLiveLinkComponentController.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_NoRegister()
{
	return UMoSysPassiveLiveLinkComponentController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Mo-Sys LiveLink Component Controller\n */" },
		{ "DisplayName", "Mo Sys Passive LiveLink Controller" },
		{ "IncludePath", "MoSysPassiveLiveLinkComponentController.h" },
		{ "ModuleRelativePath", "Public/MoSysPassiveLiveLinkComponentController.h" },
		{ "ToolTip", "Mo-Sys LiveLink Component Controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLiveTracking_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "DisplayName", "Use Live Tracking" },
		{ "ModuleRelativePath", "Public/MoSysPassiveLiveLinkComponentController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceLensUpdate_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "Comment", "// Update the lens using values from a registered MoSysLensDistortUpdater. Only needed if no live link data\n" },
		{ "ModuleRelativePath", "Public/MoSysPassiveLiveLinkComponentController.h" },
		{ "ToolTip", "Update the lens using values from a registered MoSysLensDistortUpdater. Only needed if no live link data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVerboseLogging_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysPassiveLiveLinkComponentController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseLiveTracking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLiveTracking;
	static void NewProp_bForceLensUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceLensUpdate;
	static void NewProp_bVerboseLogging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerboseLogging;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetLatestTrackingData, "GetLatestTrackingData" }, // 956454678
		{ &Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetMoSysLensDistortUpdatable, "GetMoSysLensDistortUpdatable" }, // 1836842120
		{ &Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTimecode, "GetTimecode" }, // 2909323204
		{ &Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingData, "GetTrackingData" }, // 413071346
		{ &Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatus, "GetTrackingStatus" }, // 787959975
		{ &Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_GetTrackingStatusText, "GetTrackingStatusText" }, // 4154443288
		{ &Z_Construct_UFunction_UMoSysPassiveLiveLinkComponentController_HasValidData, "HasValidData" }, // 521879541
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoSysPassiveLiveLinkComponentController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::NewProp_bUseLiveTracking_SetBit(void* Obj)
{
	((UMoSysPassiveLiveLinkComponentController*)Obj)->bUseLiveTracking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::NewProp_bUseLiveTracking = { "bUseLiveTracking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysPassiveLiveLinkComponentController), &Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::NewProp_bUseLiveTracking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLiveTracking_MetaData), NewProp_bUseLiveTracking_MetaData) };
void Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::NewProp_bForceLensUpdate_SetBit(void* Obj)
{
	((UMoSysPassiveLiveLinkComponentController*)Obj)->bForceLensUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::NewProp_bForceLensUpdate = { "bForceLensUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysPassiveLiveLinkComponentController), &Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::NewProp_bForceLensUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceLensUpdate_MetaData), NewProp_bForceLensUpdate_MetaData) };
void Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::NewProp_bVerboseLogging_SetBit(void* Obj)
{
	((UMoSysPassiveLiveLinkComponentController*)Obj)->bVerboseLogging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::NewProp_bVerboseLogging = { "bVerboseLogging", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysPassiveLiveLinkComponentController), &Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::NewProp_bVerboseLogging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVerboseLogging_MetaData), NewProp_bVerboseLogging_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::NewProp_bUseLiveTracking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::NewProp_bForceLensUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::NewProp_bVerboseLogging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkComponentController,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::ClassParams = {
	&UMoSysPassiveLiveLinkComponentController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController()
{
	if (!Z_Registration_Info_UClass_UMoSysPassiveLiveLinkComponentController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysPassiveLiveLinkComponentController.OuterSingleton, Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysPassiveLiveLinkComponentController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysPassiveLiveLinkComponentController);
UMoSysPassiveLiveLinkComponentController::~UMoSysPassiveLiveLinkComponentController() {}
// ********** End Class UMoSysPassiveLiveLinkComponentController ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysPassiveLiveLinkComponentController_h__Script_MoSysTracking_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController, UMoSysPassiveLiveLinkComponentController::StaticClass, TEXT("UMoSysPassiveLiveLinkComponentController"), &Z_Registration_Info_UClass_UMoSysPassiveLiveLinkComponentController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysPassiveLiveLinkComponentController), 1366254861U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysPassiveLiveLinkComponentController_h__Script_MoSysTracking_3732725558(TEXT("/Script/MoSysTracking"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysPassiveLiveLinkComponentController_h__Script_MoSysTracking_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysPassiveLiveLinkComponentController_h__Script_MoSysTracking_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
