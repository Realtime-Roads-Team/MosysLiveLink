// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysLensDistortion/Public/FLensSetup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFLensSetup() {}

// Begin Cross Module References
MOSYSLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FLensFileDescription();
MOSYSLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FLensSetup();
UPackage* Z_Construct_UPackage__Script_MoSysLensDistortion();
// End Cross Module References

// Begin ScriptStruct FLensFileDescription
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensFileDescription;
class UScriptStruct* FLensFileDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensFileDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensFileDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensFileDescription, (UObject*)Z_Construct_UPackage__Script_MoSysLensDistortion(), TEXT("LensFileDescription"));
	}
	return Z_Registration_Info_UScriptStruct_LensFileDescription.OuterSingleton;
}
template<> MOSYSLENSDISTORTION_API UScriptStruct* StaticStruct<FLensFileDescription>()
{
	return FLensFileDescription::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLensFileDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LensModel_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "Comment", "/**\n    *   Standard unreal properties follow.\n    */" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
		{ "ToolTip", "Standard unreal properties follow." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LensManufacturer_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LensSerialNumber_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LensType_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraManufacturer_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModel_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMode_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraSerialNumber_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortDescription_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comments_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extender_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LensModel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LensManufacturer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LensSerialNumber;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LensType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CameraManufacturer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CameraModel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CameraMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AspectRatio;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CameraSerialNumber;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShortDescription;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Comments;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Extender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensFileDescription>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_LensModel = { "LensModel", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensFileDescription, LensModel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LensModel_MetaData), NewProp_LensModel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_LensManufacturer = { "LensManufacturer", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensFileDescription, LensManufacturer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LensManufacturer_MetaData), NewProp_LensManufacturer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_LensSerialNumber = { "LensSerialNumber", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensFileDescription, LensSerialNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LensSerialNumber_MetaData), NewProp_LensSerialNumber_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_LensType = { "LensType", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensFileDescription, LensType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LensType_MetaData), NewProp_LensType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_CameraManufacturer = { "CameraManufacturer", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensFileDescription, CameraManufacturer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraManufacturer_MetaData), NewProp_CameraManufacturer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_CameraModel = { "CameraModel", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensFileDescription, CameraModel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModel_MetaData), NewProp_CameraModel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensFileDescription, CameraMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMode_MetaData), NewProp_CameraMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensFileDescription, AspectRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AspectRatio_MetaData), NewProp_AspectRatio_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_CameraSerialNumber = { "CameraSerialNumber", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensFileDescription, CameraSerialNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraSerialNumber_MetaData), NewProp_CameraSerialNumber_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_ShortDescription = { "ShortDescription", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensFileDescription, ShortDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortDescription_MetaData), NewProp_ShortDescription_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_Comments = { "Comments", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensFileDescription, Comments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comments_MetaData), NewProp_Comments_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_Extender = { "Extender", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensFileDescription, Extender), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extender_MetaData), NewProp_Extender_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensFileDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_LensModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_LensManufacturer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_LensSerialNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_LensType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_CameraManufacturer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_CameraModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_CameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_AspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_CameraSerialNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_ShortDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_Comments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewProp_Extender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensFileDescription_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysLensDistortion,
	nullptr,
	&NewStructOps,
	"LensFileDescription",
	Z_Construct_UScriptStruct_FLensFileDescription_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileDescription_Statics::PropPointers),
	sizeof(FLensFileDescription),
	alignof(FLensFileDescription),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileDescription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLensFileDescription_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLensFileDescription()
{
	if (!Z_Registration_Info_UScriptStruct_LensFileDescription.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensFileDescription.InnerSingleton, Z_Construct_UScriptStruct_FLensFileDescription_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LensFileDescription.InnerSingleton;
}
// End ScriptStruct FLensFileDescription

// Begin ScriptStruct FLensSetup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensSetup;
class UScriptStruct* FLensSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensSetup, (UObject*)Z_Construct_UPackage__Script_MoSysLensDistortion(), TEXT("LensSetup"));
	}
	return Z_Registration_Info_UScriptStruct_LensSetup.OuterSingleton;
}
template<> MOSYSLENSDISTORTION_API UScriptStruct* StaticStruct<FLensSetup>()
{
	return FLensSetup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLensSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UndistFxScale_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "Comment", "/**\n    *   Standard unreal properties follow.\n    */" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
		{ "ToolTip", "Standard unreal properties follow." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UndistFxOffset_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistFxScale_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistFxOffset_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CxScale_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CyScale_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CxOffset_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CyOffset_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CxSlope_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CySlope_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EPDOffset_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EPDScale_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Lens Calibration" },
		{ "ModuleRelativePath", "Public/FLensSetup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UndistFxScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UndistFxOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistFxScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistFxOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CxScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CyScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CxOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CyOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CxSlope;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CySlope;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EPDOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EPDScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensSetup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_UndistFxScale = { "UndistFxScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensSetup, UndistFxScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UndistFxScale_MetaData), NewProp_UndistFxScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_UndistFxOffset = { "UndistFxOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensSetup, UndistFxOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UndistFxOffset_MetaData), NewProp_UndistFxOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_DistFxScale = { "DistFxScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensSetup, DistFxScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistFxScale_MetaData), NewProp_DistFxScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_DistFxOffset = { "DistFxOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensSetup, DistFxOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistFxOffset_MetaData), NewProp_DistFxOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_CxScale = { "CxScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensSetup, CxScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CxScale_MetaData), NewProp_CxScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_CyScale = { "CyScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensSetup, CyScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CyScale_MetaData), NewProp_CyScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_CxOffset = { "CxOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensSetup, CxOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CxOffset_MetaData), NewProp_CxOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_CyOffset = { "CyOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensSetup, CyOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CyOffset_MetaData), NewProp_CyOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_CxSlope = { "CxSlope", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensSetup, CxSlope), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CxSlope_MetaData), NewProp_CxSlope_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_CySlope = { "CySlope", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensSetup, CySlope), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CySlope_MetaData), NewProp_CySlope_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_EPDOffset = { "EPDOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensSetup, EPDOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EPDOffset_MetaData), NewProp_EPDOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_EPDScale = { "EPDScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensSetup, EPDScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EPDScale_MetaData), NewProp_EPDScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLensSetup, Description), Z_Construct_UScriptStruct_FLensFileDescription, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) }; // 201863445
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensSetup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_UndistFxScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_UndistFxOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_DistFxScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_DistFxOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_CxScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_CyScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_CxOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_CyOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_CxSlope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_CySlope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_EPDOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_EPDScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSetup_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensSetup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensSetup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysLensDistortion,
	nullptr,
	&NewStructOps,
	"LensSetup",
	Z_Construct_UScriptStruct_FLensSetup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensSetup_Statics::PropPointers),
	sizeof(FLensSetup),
	alignof(FLensSetup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensSetup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLensSetup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLensSetup()
{
	if (!Z_Registration_Info_UScriptStruct_LensSetup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensSetup.InnerSingleton, Z_Construct_UScriptStruct_FLensSetup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LensSetup.InnerSingleton;
}
// End ScriptStruct FLensSetup

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_FLensSetup_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLensFileDescription::StaticStruct, Z_Construct_UScriptStruct_FLensFileDescription_Statics::NewStructOps, TEXT("LensFileDescription"), &Z_Registration_Info_UScriptStruct_LensFileDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensFileDescription), 201863445U) },
		{ FLensSetup::StaticStruct, Z_Construct_UScriptStruct_FLensSetup_Statics::NewStructOps, TEXT("LensSetup"), &Z_Registration_Info_UScriptStruct_LensSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensSetup), 2275000826U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_FLensSetup_h_3924275322(TEXT("/Script/MoSysLensDistortion"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_FLensSetup_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_FLensSetup_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
