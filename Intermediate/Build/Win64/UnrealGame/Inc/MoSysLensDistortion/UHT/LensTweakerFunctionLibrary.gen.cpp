// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LensTweakerFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLensTweakerFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_ULensTweakerFunctionLibrary();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_ULensTweakerFunctionLibrary_NoRegister();
MOSYSLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FMoSysTrackingStatusDetail();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MoSysLensDistortion();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMoSysTrackingStatusDetail ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoSysTrackingStatusDetail;
class UScriptStruct* FMoSysTrackingStatusDetail::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoSysTrackingStatusDetail.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoSysTrackingStatusDetail.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoSysTrackingStatusDetail, (UObject*)Z_Construct_UPackage__Script_MoSysLensDistortion(), TEXT("MoSysTrackingStatusDetail"));
	}
	return Z_Registration_Info_UScriptStruct_FMoSysTrackingStatusDetail.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoSysTrackingStatusDetail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LensTweakerFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Detail_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/LensTweakerFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/LensTweakerFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Detail;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoSysTrackingStatusDetail>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoSysTrackingStatusDetail_Statics::NewProp_Detail = { "Detail", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysTrackingStatusDetail, Detail), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Detail_MetaData), NewProp_Detail_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoSysTrackingStatusDetail_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysTrackingStatusDetail, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoSysTrackingStatusDetail_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysTrackingStatusDetail_Statics::NewProp_Detail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysTrackingStatusDetail_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoSysTrackingStatusDetail_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoSysTrackingStatusDetail_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysLensDistortion,
	nullptr,
	&NewStructOps,
	"MoSysTrackingStatusDetail",
	Z_Construct_UScriptStruct_FMoSysTrackingStatusDetail_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoSysTrackingStatusDetail_Statics::PropPointers),
	sizeof(FMoSysTrackingStatusDetail),
	alignof(FMoSysTrackingStatusDetail),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoSysTrackingStatusDetail_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoSysTrackingStatusDetail_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoSysTrackingStatusDetail()
{
	if (!Z_Registration_Info_UScriptStruct_FMoSysTrackingStatusDetail.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoSysTrackingStatusDetail.InnerSingleton, Z_Construct_UScriptStruct_FMoSysTrackingStatusDetail_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoSysTrackingStatusDetail.InnerSingleton;
}
// ********** End ScriptStruct FMoSysTrackingStatusDetail ******************************************

// ********** Begin Class ULensTweakerFunctionLibrary Function DecryptLensFile *********************
struct Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics
{
	struct LensTweakerFunctionLibrary_eventDecryptLensFile_Parms
	{
		FString SelectedLensFileName;
		TArray<uint8> EncryptedData;
		FString HardwareID;
		FString UserPin;
		FString DecryptedLensFileData;
		bool Success;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "Comment", "/**\n    * Decrypt Lens File\n    */" },
		{ "DisplayName", "Decrypt Lens File" },
		{ "Keywords", "Decrypt File" },
		{ "ModuleRelativePath", "Public/LensTweakerFunctionLibrary.h" },
		{ "ToolTip", "Decrypt Lens File" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedLensFileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncryptedData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EncryptedData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HardwareID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserPin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DecryptedLensFileData;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::NewProp_SelectedLensFileName = { "SelectedLensFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensTweakerFunctionLibrary_eventDecryptLensFile_Parms, SelectedLensFileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::NewProp_EncryptedData_Inner = { "EncryptedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::NewProp_EncryptedData = { "EncryptedData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensTweakerFunctionLibrary_eventDecryptLensFile_Parms, EncryptedData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::NewProp_HardwareID = { "HardwareID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensTweakerFunctionLibrary_eventDecryptLensFile_Parms, HardwareID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::NewProp_UserPin = { "UserPin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensTweakerFunctionLibrary_eventDecryptLensFile_Parms, UserPin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::NewProp_DecryptedLensFileData = { "DecryptedLensFileData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensTweakerFunctionLibrary_eventDecryptLensFile_Parms, DecryptedLensFileData), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::NewProp_Success_SetBit(void* Obj)
{
	((LensTweakerFunctionLibrary_eventDecryptLensFile_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LensTweakerFunctionLibrary_eventDecryptLensFile_Parms), &Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::NewProp_SelectedLensFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::NewProp_EncryptedData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::NewProp_EncryptedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::NewProp_HardwareID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::NewProp_UserPin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::NewProp_DecryptedLensFileData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::NewProp_Success,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULensTweakerFunctionLibrary, nullptr, "DecryptLensFile", Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::LensTweakerFunctionLibrary_eventDecryptLensFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::LensTweakerFunctionLibrary_eventDecryptLensFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULensTweakerFunctionLibrary::execDecryptLensFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedLensFileName);
	P_GET_TARRAY(uint8,Z_Param_EncryptedData);
	P_GET_PROPERTY(FStrProperty,Z_Param_HardwareID);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserPin);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_DecryptedLensFileData);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULensTweakerFunctionLibrary::DecryptLensFile(Z_Param_SelectedLensFileName,Z_Param_EncryptedData,Z_Param_HardwareID,Z_Param_UserPin,Z_Param_Out_DecryptedLensFileData,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class ULensTweakerFunctionLibrary Function DecryptLensFile ***********************

// ********** Begin Class ULensTweakerFunctionLibrary Function FloatToDPString *********************
struct Z_Construct_UFunction_ULensTweakerFunctionLibrary_FloatToDPString_Statics
{
	struct LensTweakerFunctionLibrary_eventFloatToDPString_Parms
	{
		float F;
		int32 DecimalPlaces;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "DisplayName", "Float to string with decimal places" },
		{ "ModuleRelativePath", "Public/LensTweakerFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_F;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DecimalPlaces;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_FloatToDPString_Statics::NewProp_F = { "F", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensTweakerFunctionLibrary_eventFloatToDPString_Parms, F), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_FloatToDPString_Statics::NewProp_DecimalPlaces = { "DecimalPlaces", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensTweakerFunctionLibrary_eventFloatToDPString_Parms, DecimalPlaces), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_FloatToDPString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensTweakerFunctionLibrary_eventFloatToDPString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensTweakerFunctionLibrary_FloatToDPString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensTweakerFunctionLibrary_FloatToDPString_Statics::NewProp_F,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensTweakerFunctionLibrary_FloatToDPString_Statics::NewProp_DecimalPlaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensTweakerFunctionLibrary_FloatToDPString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensTweakerFunctionLibrary_FloatToDPString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_FloatToDPString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULensTweakerFunctionLibrary, nullptr, "FloatToDPString", Z_Construct_UFunction_ULensTweakerFunctionLibrary_FloatToDPString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensTweakerFunctionLibrary_FloatToDPString_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensTweakerFunctionLibrary_FloatToDPString_Statics::LensTweakerFunctionLibrary_eventFloatToDPString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensTweakerFunctionLibrary_FloatToDPString_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensTweakerFunctionLibrary_FloatToDPString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULensTweakerFunctionLibrary_FloatToDPString_Statics::LensTweakerFunctionLibrary_eventFloatToDPString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULensTweakerFunctionLibrary_FloatToDPString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensTweakerFunctionLibrary_FloatToDPString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULensTweakerFunctionLibrary::execFloatToDPString)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_F);
	P_GET_PROPERTY(FIntProperty,Z_Param_DecimalPlaces);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=ULensTweakerFunctionLibrary::FloatToDPString(Z_Param_F,Z_Param_DecimalPlaces);
	P_NATIVE_END;
}
// ********** End Class ULensTweakerFunctionLibrary Function FloatToDPString ***********************

// ********** Begin Class ULensTweakerFunctionLibrary Function GetWidgetCentreLocation *************
struct Z_Construct_UFunction_ULensTweakerFunctionLibrary_GetWidgetCentreLocation_Statics
{
	struct LensTweakerFunctionLibrary_eventGetWidgetCentreLocation_Parms
	{
		const UWidget* ParentWidget;
		const UWidget* Widget;
		FVector2D OutCentrePosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/LensTweakerFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCentrePosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_GetWidgetCentreLocation_Statics::NewProp_ParentWidget = { "ParentWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensTweakerFunctionLibrary_eventGetWidgetCentreLocation_Parms, ParentWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentWidget_MetaData), NewProp_ParentWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_GetWidgetCentreLocation_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensTweakerFunctionLibrary_eventGetWidgetCentreLocation_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_GetWidgetCentreLocation_Statics::NewProp_OutCentrePosition = { "OutCentrePosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensTweakerFunctionLibrary_eventGetWidgetCentreLocation_Parms, OutCentrePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensTweakerFunctionLibrary_GetWidgetCentreLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensTweakerFunctionLibrary_GetWidgetCentreLocation_Statics::NewProp_ParentWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensTweakerFunctionLibrary_GetWidgetCentreLocation_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensTweakerFunctionLibrary_GetWidgetCentreLocation_Statics::NewProp_OutCentrePosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensTweakerFunctionLibrary_GetWidgetCentreLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_GetWidgetCentreLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULensTweakerFunctionLibrary, nullptr, "GetWidgetCentreLocation", Z_Construct_UFunction_ULensTweakerFunctionLibrary_GetWidgetCentreLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensTweakerFunctionLibrary_GetWidgetCentreLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensTweakerFunctionLibrary_GetWidgetCentreLocation_Statics::LensTweakerFunctionLibrary_eventGetWidgetCentreLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensTweakerFunctionLibrary_GetWidgetCentreLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensTweakerFunctionLibrary_GetWidgetCentreLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULensTweakerFunctionLibrary_GetWidgetCentreLocation_Statics::LensTweakerFunctionLibrary_eventGetWidgetCentreLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULensTweakerFunctionLibrary_GetWidgetCentreLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensTweakerFunctionLibrary_GetWidgetCentreLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULensTweakerFunctionLibrary::execGetWidgetCentreLocation)
{
	P_GET_OBJECT(UWidget,Z_Param_ParentWidget);
	P_GET_OBJECT(UWidget,Z_Param_Widget);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutCentrePosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULensTweakerFunctionLibrary::GetWidgetCentreLocation(Z_Param_ParentWidget,Z_Param_Widget,Z_Param_Out_OutCentrePosition);
	P_NATIVE_END;
}
// ********** End Class ULensTweakerFunctionLibrary Function GetWidgetCentreLocation ***************

// ********** Begin Class ULensTweakerFunctionLibrary Function SaveTweakerState ********************
struct Z_Construct_UFunction_ULensTweakerFunctionLibrary_SaveTweakerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/LensTweakerFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_SaveTweakerState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULensTweakerFunctionLibrary, nullptr, "SaveTweakerState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensTweakerFunctionLibrary_SaveTweakerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensTweakerFunctionLibrary_SaveTweakerState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ULensTweakerFunctionLibrary_SaveTweakerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensTweakerFunctionLibrary_SaveTweakerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULensTweakerFunctionLibrary::execSaveTweakerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	ULensTweakerFunctionLibrary::SaveTweakerState();
	P_NATIVE_END;
}
// ********** End Class ULensTweakerFunctionLibrary Function SaveTweakerState **********************

// ********** Begin Class ULensTweakerFunctionLibrary Function UnsignedIntToPercentString **********
struct Z_Construct_UFunction_ULensTweakerFunctionLibrary_UnsignedIntToPercentString_Statics
{
	struct LensTweakerFunctionLibrary_eventUnsignedIntToPercentString_Parms
	{
		int32 I;
		int32 DecimalPlaces;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "DisplayName", "Unsigned int16 to percent string" },
		{ "ModuleRelativePath", "Public/LensTweakerFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_I;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DecimalPlaces;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_UnsignedIntToPercentString_Statics::NewProp_I = { "I", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensTweakerFunctionLibrary_eventUnsignedIntToPercentString_Parms, I), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_UnsignedIntToPercentString_Statics::NewProp_DecimalPlaces = { "DecimalPlaces", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensTweakerFunctionLibrary_eventUnsignedIntToPercentString_Parms, DecimalPlaces), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_UnsignedIntToPercentString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensTweakerFunctionLibrary_eventUnsignedIntToPercentString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensTweakerFunctionLibrary_UnsignedIntToPercentString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensTweakerFunctionLibrary_UnsignedIntToPercentString_Statics::NewProp_I,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensTweakerFunctionLibrary_UnsignedIntToPercentString_Statics::NewProp_DecimalPlaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensTweakerFunctionLibrary_UnsignedIntToPercentString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensTweakerFunctionLibrary_UnsignedIntToPercentString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensTweakerFunctionLibrary_UnsignedIntToPercentString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULensTweakerFunctionLibrary, nullptr, "UnsignedIntToPercentString", Z_Construct_UFunction_ULensTweakerFunctionLibrary_UnsignedIntToPercentString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensTweakerFunctionLibrary_UnsignedIntToPercentString_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensTweakerFunctionLibrary_UnsignedIntToPercentString_Statics::LensTweakerFunctionLibrary_eventUnsignedIntToPercentString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensTweakerFunctionLibrary_UnsignedIntToPercentString_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensTweakerFunctionLibrary_UnsignedIntToPercentString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULensTweakerFunctionLibrary_UnsignedIntToPercentString_Statics::LensTweakerFunctionLibrary_eventUnsignedIntToPercentString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULensTweakerFunctionLibrary_UnsignedIntToPercentString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensTweakerFunctionLibrary_UnsignedIntToPercentString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULensTweakerFunctionLibrary::execUnsignedIntToPercentString)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_I);
	P_GET_PROPERTY(FIntProperty,Z_Param_DecimalPlaces);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=ULensTweakerFunctionLibrary::UnsignedIntToPercentString(Z_Param_I,Z_Param_DecimalPlaces);
	P_NATIVE_END;
}
// ********** End Class ULensTweakerFunctionLibrary Function UnsignedIntToPercentString ************

// ********** Begin Class ULensTweakerFunctionLibrary **********************************************
void ULensTweakerFunctionLibrary::StaticRegisterNativesULensTweakerFunctionLibrary()
{
	UClass* Class = ULensTweakerFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DecryptLensFile", &ULensTweakerFunctionLibrary::execDecryptLensFile },
		{ "FloatToDPString", &ULensTweakerFunctionLibrary::execFloatToDPString },
		{ "GetWidgetCentreLocation", &ULensTweakerFunctionLibrary::execGetWidgetCentreLocation },
		{ "SaveTweakerState", &ULensTweakerFunctionLibrary::execSaveTweakerState },
		{ "UnsignedIntToPercentString", &ULensTweakerFunctionLibrary::execUnsignedIntToPercentString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULensTweakerFunctionLibrary;
UClass* ULensTweakerFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = ULensTweakerFunctionLibrary;
	if (!Z_Registration_Info_UClass_ULensTweakerFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LensTweakerFunctionLibrary"),
			Z_Registration_Info_UClass_ULensTweakerFunctionLibrary.InnerSingleton,
			StaticRegisterNativesULensTweakerFunctionLibrary,
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
	return Z_Registration_Info_UClass_ULensTweakerFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_ULensTweakerFunctionLibrary_NoRegister()
{
	return ULensTweakerFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULensTweakerFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LensTweakerFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/LensTweakerFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULensTweakerFunctionLibrary_DecryptLensFile, "DecryptLensFile" }, // 1249340872
		{ &Z_Construct_UFunction_ULensTweakerFunctionLibrary_FloatToDPString, "FloatToDPString" }, // 1419261981
		{ &Z_Construct_UFunction_ULensTweakerFunctionLibrary_GetWidgetCentreLocation, "GetWidgetCentreLocation" }, // 1831078663
		{ &Z_Construct_UFunction_ULensTweakerFunctionLibrary_SaveTweakerState, "SaveTweakerState" }, // 78866344
		{ &Z_Construct_UFunction_ULensTweakerFunctionLibrary_UnsignedIntToPercentString, "UnsignedIntToPercentString" }, // 1535460842
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULensTweakerFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULensTweakerFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysLensDistortion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULensTweakerFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULensTweakerFunctionLibrary_Statics::ClassParams = {
	&ULensTweakerFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensTweakerFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULensTweakerFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULensTweakerFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_ULensTweakerFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULensTweakerFunctionLibrary.OuterSingleton, Z_Construct_UClass_ULensTweakerFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULensTweakerFunctionLibrary.OuterSingleton;
}
ULensTweakerFunctionLibrary::ULensTweakerFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULensTweakerFunctionLibrary);
ULensTweakerFunctionLibrary::~ULensTweakerFunctionLibrary() {}
// ********** End Class ULensTweakerFunctionLibrary ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h__Script_MoSysLensDistortion_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMoSysTrackingStatusDetail::StaticStruct, Z_Construct_UScriptStruct_FMoSysTrackingStatusDetail_Statics::NewStructOps, TEXT("MoSysTrackingStatusDetail"), &Z_Registration_Info_UScriptStruct_FMoSysTrackingStatusDetail, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoSysTrackingStatusDetail), 1247737456U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULensTweakerFunctionLibrary, ULensTweakerFunctionLibrary::StaticClass, TEXT("ULensTweakerFunctionLibrary"), &Z_Registration_Info_UClass_ULensTweakerFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULensTweakerFunctionLibrary), 1764023652U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h__Script_MoSysLensDistortion_64566804(TEXT("/Script/MoSysLensDistortion"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h__Script_MoSysLensDistortion_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h__Script_MoSysLensDistortion_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h__Script_MoSysLensDistortion_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h__Script_MoSysLensDistortion_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
