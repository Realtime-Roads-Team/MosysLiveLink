// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysLensDistortion/Public/MoSysLensModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoSysLensModel() {}

// Begin Cross Module References
CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensModel();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensModel();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensModel_NoRegister();
MOSYSLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FMoSysLensParameters();
UPackage* Z_Construct_UPackage__Script_MoSysLensDistortion();
// End Cross Module References

// Begin ScriptStruct FMoSysLensParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MoSysLensParameters;
class UScriptStruct* FMoSysLensParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MoSysLensParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MoSysLensParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoSysLensParameters, (UObject*)Z_Construct_UPackage__Script_MoSysLensDistortion(), TEXT("MoSysLensParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MoSysLensParameters.OuterSingleton;
}
template<> MOSYSLENSDISTORTION_API UScriptStruct* StaticStruct<FMoSysLensParameters>()
{
	return FMoSysLensParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMoSysLensParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Mo-Sys lens distortion parameters\n * Full documentation is found in the F4 protocol documentation\n */" },
		{ "ModuleRelativePath", "Public/MoSysLensModel.h" },
		{ "ToolTip", "Mo-Sys lens distortion parameters\nFull documentation is found in the F4 protocol documentation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FxVirtualCamera_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "Comment", "// Is in units of pixels in x, assuming 1920x1080 video.\n" },
		{ "ModuleRelativePath", "Public/MoSysLensModel.h" },
		{ "ToolTip", "Is in units of pixels in x, assuming 1920x1080 video." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FyVirtualCamera_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "Comment", "// Is in units of pixels in y, assuming 1920x1080 video.\n" },
		{ "ModuleRelativePath", "Public/MoSysLensModel.h" },
		{ "ToolTip", "Is in units of pixels in y, assuming 1920x1080 video." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FxDistorted_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "Comment", "// Is in units of pixels in x, assuming 1920x1080 video.\n" },
		{ "ModuleRelativePath", "Public/MoSysLensModel.h" },
		{ "ToolTip", "Is in units of pixels in x, assuming 1920x1080 video." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FyDistorted_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "Comment", "// Is in units of pixels in y, assuming 1920x1080 video.\n" },
		{ "ModuleRelativePath", "Public/MoSysLensModel.h" },
		{ "ToolTip", "Is in units of pixels in y, assuming 1920x1080 video." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_K1_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_K2_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_K3_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsK3Valid_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrincipalPoint_cx_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "Comment", "// Is in units of pixels, assuming 1920x1080 video.\n" },
		{ "ModuleRelativePath", "Public/MoSysLensModel.h" },
		{ "ToolTip", "Is in units of pixels, assuming 1920x1080 video." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrincipalPoint_cy_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "Comment", "// Is in units of pixels, assuming 1920x1080 video.\n" },
		{ "ModuleRelativePath", "Public/MoSysLensModel.h" },
		{ "ToolTip", "Is in units of pixels, assuming 1920x1080 video." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntrancePupilDistance_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "Comment", "// \"Entrance Pupil Distance\" Is synonym for \"Point of no parallax\" and is commonly but incorrectly referred to as \"nodal point\"\n" },
		{ "ModuleRelativePath", "Public/MoSysLensModel.h" },
		{ "ToolTip", "\"Entrance Pupil Distance\" Is synonym for \"Point of no parallax\" and is commonly but incorrectly referred to as \"nodal point\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecipFocalDistance_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "Comment", "// Reciprocal of the focal distance in metres (to handle infinity).\n" },
		{ "ModuleRelativePath", "Public/MoSysLensModel.h" },
		{ "ToolTip", "Reciprocal of the focal distance in metres (to handle infinity)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Aperture_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "Comment", "// Aperture measured in F- or T-stops (defined in IsTStops).\n" },
		{ "ModuleRelativePath", "Public/MoSysLensModel.h" },
		{ "ToolTip", "Aperture measured in F- or T-stops (defined in IsTStops)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTStops_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "Comment", "// Is Aperture measured in T-stops (default is F-Stops).\n" },
		{ "ModuleRelativePath", "Public/MoSysLensModel.h" },
		{ "ToolTip", "Is Aperture measured in T-stops (default is F-Stops)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasData_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "Comment", "// True if this structure contains valid data.\n// Otherwise, this structure will default to values least likely to crash program.\n// Note: for K1,K2,,K3 cx,cy, EntracePupilDistance sensible defaults are provided.\n" },
		{ "ModuleRelativePath", "Public/MoSysLensModel.h" },
		{ "ToolTip", "True if this structure contains valid data.\nOtherwise, this structure will default to values least likely to crash program.\nNote: for K1,K2,,K3 cx,cy, EntracePupilDistance sensible defaults are provided." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomOffset_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "Comment", "// bools must be floats for LensModel\n" },
		{ "ModuleRelativePath", "Public/MoSysLensModel.h" },
		{ "ToolTip", "bools must be floats for LensModel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusOffset_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsP1P2Valid_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FxVirtualCamera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FyVirtualCamera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FxDistorted;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FyDistorted;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_K1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_K2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_K3;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IsK3Valid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrincipalPoint_cx;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrincipalPoint_cy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EntrancePupilDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecipFocalDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Aperture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IsTStops;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HasData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IsP1P2Valid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoSysLensParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_FxVirtualCamera = { "FxVirtualCamera", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysLensParameters, FxVirtualCamera), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FxVirtualCamera_MetaData), NewProp_FxVirtualCamera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_FyVirtualCamera = { "FyVirtualCamera", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysLensParameters, FyVirtualCamera), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FyVirtualCamera_MetaData), NewProp_FyVirtualCamera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_FxDistorted = { "FxDistorted", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysLensParameters, FxDistorted), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FxDistorted_MetaData), NewProp_FxDistorted_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_FyDistorted = { "FyDistorted", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysLensParameters, FyDistorted), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FyDistorted_MetaData), NewProp_FyDistorted_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_K1 = { "K1", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysLensParameters, K1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_K1_MetaData), NewProp_K1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_K2 = { "K2", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysLensParameters, K2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_K2_MetaData), NewProp_K2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_K3 = { "K3", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysLensParameters, K3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_K3_MetaData), NewProp_K3_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_IsK3Valid = { "IsK3Valid", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysLensParameters, IsK3Valid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsK3Valid_MetaData), NewProp_IsK3Valid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_PrincipalPoint_cx = { "PrincipalPoint_cx", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysLensParameters, PrincipalPoint_cx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrincipalPoint_cx_MetaData), NewProp_PrincipalPoint_cx_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_PrincipalPoint_cy = { "PrincipalPoint_cy", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysLensParameters, PrincipalPoint_cy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrincipalPoint_cy_MetaData), NewProp_PrincipalPoint_cy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_EntrancePupilDistance = { "EntrancePupilDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysLensParameters, EntrancePupilDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntrancePupilDistance_MetaData), NewProp_EntrancePupilDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_RecipFocalDistance = { "RecipFocalDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysLensParameters, RecipFocalDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecipFocalDistance_MetaData), NewProp_RecipFocalDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_Aperture = { "Aperture", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysLensParameters, Aperture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Aperture_MetaData), NewProp_Aperture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_IsTStops = { "IsTStops", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysLensParameters, IsTStops), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTStops_MetaData), NewProp_IsTStops_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_HasData = { "HasData", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysLensParameters, HasData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasData_MetaData), NewProp_HasData_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_ZoomOffset = { "ZoomOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysLensParameters, ZoomOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomOffset_MetaData), NewProp_ZoomOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_FocusOffset = { "FocusOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysLensParameters, FocusOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusOffset_MetaData), NewProp_FocusOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_IsP1P2Valid = { "IsP1P2Valid", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoSysLensParameters, IsP1P2Valid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsP1P2Valid_MetaData), NewProp_IsP1P2Valid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_FxVirtualCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_FyVirtualCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_FxDistorted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_FyDistorted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_K1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_K2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_K3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_IsK3Valid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_PrincipalPoint_cx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_PrincipalPoint_cy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_EntrancePupilDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_RecipFocalDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_Aperture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_IsTStops,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_HasData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_ZoomOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_FocusOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewProp_IsP1P2Valid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysLensDistortion,
	nullptr,
	&NewStructOps,
	"MoSysLensParameters",
	Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::PropPointers),
	sizeof(FMoSysLensParameters),
	alignof(FMoSysLensParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoSysLensParameters()
{
	if (!Z_Registration_Info_UScriptStruct_MoSysLensParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MoSysLensParameters.InnerSingleton, Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MoSysLensParameters.InnerSingleton;
}
// End ScriptStruct FMoSysLensParameters

// Begin Class UMoSysLensModel
void UMoSysLensModel::StaticRegisterNativesUMoSysLensModel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoSysLensModel);
UClass* Z_Construct_UClass_UMoSysLensModel_NoRegister()
{
	return UMoSysLensModel::StaticClass();
}
struct Z_Construct_UClass_UMoSysLensModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Mo-Sys lens model, using Mo-Sys lens distortion parameters\n */" },
		{ "DisplayName", "Mo-Sys Lens Model" },
		{ "IncludePath", "MoSysLensModel.h" },
		{ "ModuleRelativePath", "Public/MoSysLensModel.h" },
		{ "ToolTip", "Mo-Sys lens model, using Mo-Sys lens distortion parameters" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoSysLensModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoSysLensModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULensModel,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysLensDistortion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysLensModel_Statics::ClassParams = {
	&UMoSysLensModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysLensModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysLensModel()
{
	if (!Z_Registration_Info_UClass_UMoSysLensModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysLensModel.OuterSingleton, Z_Construct_UClass_UMoSysLensModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysLensModel.OuterSingleton;
}
template<> MOSYSLENSDISTORTION_API UClass* StaticClass<UMoSysLensModel>()
{
	return UMoSysLensModel::StaticClass();
}
UMoSysLensModel::UMoSysLensModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLensModel);
UMoSysLensModel::~UMoSysLensModel() {}
// End Class UMoSysLensModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensModel_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMoSysLensParameters::StaticStruct, Z_Construct_UScriptStruct_FMoSysLensParameters_Statics::NewStructOps, TEXT("MoSysLensParameters"), &Z_Registration_Info_UScriptStruct_MoSysLensParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoSysLensParameters), 4190614050U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoSysLensModel, UMoSysLensModel::StaticClass, TEXT("UMoSysLensModel"), &Z_Registration_Info_UClass_UMoSysLensModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLensModel), 2644896154U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensModel_h_3873247800(TEXT("/Script/MoSysLensDistortion"),
	Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensModel_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensModel_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
