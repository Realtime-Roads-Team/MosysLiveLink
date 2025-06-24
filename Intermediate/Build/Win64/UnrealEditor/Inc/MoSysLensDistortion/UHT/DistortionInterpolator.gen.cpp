// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DistortionInterpolator.h"
#include "FLensSetup.h"
#include "MoSysLensModel.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDistortionInterpolator() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UDistortionInterpolator();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UDistortionInterpolator_NoRegister();
MOSYSLENSDISTORTION_API UEnum* Z_Construct_UEnum_MoSysLensDistortion_DistortionInterpolationType();
MOSYSLENSDISTORTION_API UFunction* Z_Construct_UDelegateFunction_MoSysLensDistortion_LensCalSaveFinished__DelegateSignature();
MOSYSLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FLensFileDescription();
MOSYSLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FLensSetup();
MOSYSLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FMoSysLensParameters();
UPackage* Z_Construct_UPackage__Script_MoSysLensDistortion();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FLensCalSaveFinished **************************************************
struct Z_Construct_UDelegateFunction_MoSysLensDistortion_LensCalSaveFinished__DelegateSignature_Statics
{
	struct _Script_MoSysLensDistortion_eventLensCalSaveFinished_Parms
	{
		bool Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_MoSysLensDistortion_LensCalSaveFinished__DelegateSignature_Statics::NewProp_Result_SetBit(void* Obj)
{
	((_Script_MoSysLensDistortion_eventLensCalSaveFinished_Parms*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MoSysLensDistortion_LensCalSaveFinished__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MoSysLensDistortion_eventLensCalSaveFinished_Parms), &Z_Construct_UDelegateFunction_MoSysLensDistortion_LensCalSaveFinished__DelegateSignature_Statics::NewProp_Result_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MoSysLensDistortion_LensCalSaveFinished__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MoSysLensDistortion_LensCalSaveFinished__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoSysLensDistortion_LensCalSaveFinished__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MoSysLensDistortion_LensCalSaveFinished__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MoSysLensDistortion, nullptr, "LensCalSaveFinished__DelegateSignature", Z_Construct_UDelegateFunction_MoSysLensDistortion_LensCalSaveFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoSysLensDistortion_LensCalSaveFinished__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MoSysLensDistortion_LensCalSaveFinished__DelegateSignature_Statics::_Script_MoSysLensDistortion_eventLensCalSaveFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoSysLensDistortion_LensCalSaveFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MoSysLensDistortion_LensCalSaveFinished__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_MoSysLensDistortion_LensCalSaveFinished__DelegateSignature_Statics::_Script_MoSysLensDistortion_eventLensCalSaveFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MoSysLensDistortion_LensCalSaveFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MoSysLensDistortion_LensCalSaveFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLensCalSaveFinished_DelegateWrapper(const FMulticastScriptDelegate& LensCalSaveFinished, bool Result)
{
	struct _Script_MoSysLensDistortion_eventLensCalSaveFinished_Parms
	{
		bool Result;
	};
	_Script_MoSysLensDistortion_eventLensCalSaveFinished_Parms Parms;
	Parms.Result=Result ? true : false;
	LensCalSaveFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FLensCalSaveFinished ****************************************************

// ********** Begin Enum DistortionInterpolationType ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_DistortionInterpolationType;
static UEnum* DistortionInterpolationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_DistortionInterpolationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_DistortionInterpolationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoSysLensDistortion_DistortionInterpolationType, (UObject*)Z_Construct_UPackage__Script_MoSysLensDistortion(), TEXT("DistortionInterpolationType"));
	}
	return Z_Registration_Info_UEnum_DistortionInterpolationType.OuterSingleton;
}
template<> MOSYSLENSDISTORTION_API UEnum* StaticEnum<DistortionInterpolationType::Type>()
{
	return DistortionInterpolationType_StaticEnum();
}
struct Z_Construct_UEnum_MoSysLensDistortion_DistortionInterpolationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Following this style for enum declaration:\n// https://gist.github.com/trentpolack/ad361a4d3d6e46d1a1ff82c03a997f28\n//\n" },
#endif
		{ "Linear.DisplayName", "linear" },
		{ "Linear.Name", "DistortionInterpolationType::Linear" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "DistortionInterpolationType::Max" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
		{ "None.DisplayName", "none" },
		{ "None.Name", "DistortionInterpolationType::None" },
		{ "Smoothed.DisplayName", "smoothed" },
		{ "Smoothed.Name", "DistortionInterpolationType::Smoothed" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Following this style for enum declaration:\nhttps:gist.github.com/trentpolack/ad361a4d3d6e46d1a1ff82c03a997f28" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "DistortionInterpolationType::Smoothed", (int64)DistortionInterpolationType::Smoothed },
		{ "DistortionInterpolationType::Linear", (int64)DistortionInterpolationType::Linear },
		{ "DistortionInterpolationType::None", (int64)DistortionInterpolationType::None },
		{ "DistortionInterpolationType::Max", (int64)DistortionInterpolationType::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoSysLensDistortion_DistortionInterpolationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MoSysLensDistortion,
	nullptr,
	"DistortionInterpolationType",
	"DistortionInterpolationType::Type",
	Z_Construct_UEnum_MoSysLensDistortion_DistortionInterpolationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MoSysLensDistortion_DistortionInterpolationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MoSysLensDistortion_DistortionInterpolationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MoSysLensDistortion_DistortionInterpolationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MoSysLensDistortion_DistortionInterpolationType()
{
	if (!Z_Registration_Info_UEnum_DistortionInterpolationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_DistortionInterpolationType.InnerSingleton, Z_Construct_UEnum_MoSysLensDistortion_DistortionInterpolationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_DistortionInterpolationType.InnerSingleton;
}
// ********** End Enum DistortionInterpolationType *************************************************

// ********** Begin Class UDistortionInterpolator Function AddCxTweakNearWide **********************
struct Z_Construct_UFunction_UDistortionInterpolator_AddCxTweakNearWide_Statics
{
	struct DistortionInterpolator_eventAddCxTweakNearWide_Parms
	{
		float ZoomValueTicks;
		float OrigCx;
		float NewCx;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomValueTicks;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrigCx;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewCx;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_AddCxTweakNearWide_Statics::NewProp_ZoomValueTicks = { "ZoomValueTicks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventAddCxTweakNearWide_Parms, ZoomValueTicks), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_AddCxTweakNearWide_Statics::NewProp_OrigCx = { "OrigCx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventAddCxTweakNearWide_Parms, OrigCx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_AddCxTweakNearWide_Statics::NewProp_NewCx = { "NewCx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventAddCxTweakNearWide_Parms, NewCx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_AddCxTweakNearWide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_AddCxTweakNearWide_Statics::NewProp_ZoomValueTicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_AddCxTweakNearWide_Statics::NewProp_OrigCx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_AddCxTweakNearWide_Statics::NewProp_NewCx,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_AddCxTweakNearWide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_AddCxTweakNearWide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "AddCxTweakNearWide", Z_Construct_UFunction_UDistortionInterpolator_AddCxTweakNearWide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_AddCxTweakNearWide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_AddCxTweakNearWide_Statics::DistortionInterpolator_eventAddCxTweakNearWide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_AddCxTweakNearWide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_AddCxTweakNearWide_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_AddCxTweakNearWide_Statics::DistortionInterpolator_eventAddCxTweakNearWide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_AddCxTweakNearWide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_AddCxTweakNearWide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execAddCxTweakNearWide)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomValueTicks);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OrigCx);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewCx);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCxTweakNearWide(Z_Param_ZoomValueTicks,Z_Param_OrigCx,Z_Param_NewCx);
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function AddCxTweakNearWide ************************

// ********** Begin Class UDistortionInterpolator Function AddCyTweakNearWide **********************
struct Z_Construct_UFunction_UDistortionInterpolator_AddCyTweakNearWide_Statics
{
	struct DistortionInterpolator_eventAddCyTweakNearWide_Parms
	{
		float ZoomValueTicks;
		float OrigCy;
		float NewCy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomValueTicks;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrigCy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewCy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_AddCyTweakNearWide_Statics::NewProp_ZoomValueTicks = { "ZoomValueTicks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventAddCyTweakNearWide_Parms, ZoomValueTicks), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_AddCyTweakNearWide_Statics::NewProp_OrigCy = { "OrigCy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventAddCyTweakNearWide_Parms, OrigCy), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_AddCyTweakNearWide_Statics::NewProp_NewCy = { "NewCy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventAddCyTweakNearWide_Parms, NewCy), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_AddCyTweakNearWide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_AddCyTweakNearWide_Statics::NewProp_ZoomValueTicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_AddCyTweakNearWide_Statics::NewProp_OrigCy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_AddCyTweakNearWide_Statics::NewProp_NewCy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_AddCyTweakNearWide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_AddCyTweakNearWide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "AddCyTweakNearWide", Z_Construct_UFunction_UDistortionInterpolator_AddCyTweakNearWide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_AddCyTweakNearWide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_AddCyTweakNearWide_Statics::DistortionInterpolator_eventAddCyTweakNearWide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_AddCyTweakNearWide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_AddCyTweakNearWide_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_AddCyTweakNearWide_Statics::DistortionInterpolator_eventAddCyTweakNearWide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_AddCyTweakNearWide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_AddCyTweakNearWide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execAddCyTweakNearWide)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomValueTicks);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OrigCy);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewCy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCyTweakNearWide(Z_Param_ZoomValueTicks,Z_Param_OrigCy,Z_Param_NewCy);
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function AddCyTweakNearWide ************************

// ********** Begin Class UDistortionInterpolator Function AddEPDTweakNearWide *********************
struct Z_Construct_UFunction_UDistortionInterpolator_AddEPDTweakNearWide_Statics
{
	struct DistortionInterpolator_eventAddEPDTweakNearWide_Parms
	{
		float ZoomValueTicks;
		float OrigEPD;
		float NewEPD;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomValueTicks;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrigEPD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewEPD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_AddEPDTweakNearWide_Statics::NewProp_ZoomValueTicks = { "ZoomValueTicks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventAddEPDTweakNearWide_Parms, ZoomValueTicks), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_AddEPDTweakNearWide_Statics::NewProp_OrigEPD = { "OrigEPD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventAddEPDTweakNearWide_Parms, OrigEPD), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_AddEPDTweakNearWide_Statics::NewProp_NewEPD = { "NewEPD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventAddEPDTweakNearWide_Parms, NewEPD), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_AddEPDTweakNearWide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_AddEPDTweakNearWide_Statics::NewProp_ZoomValueTicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_AddEPDTweakNearWide_Statics::NewProp_OrigEPD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_AddEPDTweakNearWide_Statics::NewProp_NewEPD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_AddEPDTweakNearWide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_AddEPDTweakNearWide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "AddEPDTweakNearWide", Z_Construct_UFunction_UDistortionInterpolator_AddEPDTweakNearWide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_AddEPDTweakNearWide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_AddEPDTweakNearWide_Statics::DistortionInterpolator_eventAddEPDTweakNearWide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_AddEPDTweakNearWide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_AddEPDTweakNearWide_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_AddEPDTweakNearWide_Statics::DistortionInterpolator_eventAddEPDTweakNearWide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_AddEPDTweakNearWide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_AddEPDTweakNearWide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execAddEPDTweakNearWide)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomValueTicks);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OrigEPD);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewEPD);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddEPDTweakNearWide(Z_Param_ZoomValueTicks,Z_Param_OrigEPD,Z_Param_NewEPD);
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function AddEPDTweakNearWide ***********************

// ********** Begin Class UDistortionInterpolator Function AddFocalDistancePoint *******************
struct Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint_Statics
{
	struct DistortionInterpolator_eventAddFocalDistancePoint_Parms
	{
		float FocusValue;
		float FocalDistance;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocalDistance;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint_Statics::NewProp_FocusValue = { "FocusValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventAddFocalDistancePoint_Parms, FocusValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint_Statics::NewProp_FocalDistance = { "FocalDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventAddFocalDistancePoint_Parms, FocalDistance), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DistortionInterpolator_eventAddFocalDistancePoint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DistortionInterpolator_eventAddFocalDistancePoint_Parms), &Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint_Statics::NewProp_FocusValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint_Statics::NewProp_FocalDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "AddFocalDistancePoint", Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint_Statics::DistortionInterpolator_eventAddFocalDistancePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint_Statics::DistortionInterpolator_eventAddFocalDistancePoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execAddFocalDistancePoint)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_FocusValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FocalDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddFocalDistancePoint(Z_Param_FocusValue,Z_Param_FocalDistance);
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function AddFocalDistancePoint *********************

// ********** Begin Class UDistortionInterpolator Function AddFxTweakNearWide **********************
struct Z_Construct_UFunction_UDistortionInterpolator_AddFxTweakNearWide_Statics
{
	struct DistortionInterpolator_eventAddFxTweakNearWide_Parms
	{
		float ZoomValueTicks;
		float OrigFx;
		float NewFx;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomValueTicks;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrigFx;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFx;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_AddFxTweakNearWide_Statics::NewProp_ZoomValueTicks = { "ZoomValueTicks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventAddFxTweakNearWide_Parms, ZoomValueTicks), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_AddFxTweakNearWide_Statics::NewProp_OrigFx = { "OrigFx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventAddFxTweakNearWide_Parms, OrigFx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_AddFxTweakNearWide_Statics::NewProp_NewFx = { "NewFx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventAddFxTweakNearWide_Parms, NewFx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_AddFxTweakNearWide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_AddFxTweakNearWide_Statics::NewProp_ZoomValueTicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_AddFxTweakNearWide_Statics::NewProp_OrigFx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_AddFxTweakNearWide_Statics::NewProp_NewFx,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_AddFxTweakNearWide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_AddFxTweakNearWide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "AddFxTweakNearWide", Z_Construct_UFunction_UDistortionInterpolator_AddFxTweakNearWide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_AddFxTweakNearWide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_AddFxTweakNearWide_Statics::DistortionInterpolator_eventAddFxTweakNearWide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_AddFxTweakNearWide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_AddFxTweakNearWide_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_AddFxTweakNearWide_Statics::DistortionInterpolator_eventAddFxTweakNearWide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_AddFxTweakNearWide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_AddFxTweakNearWide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execAddFxTweakNearWide)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomValueTicks);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OrigFx);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewFx);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFxTweakNearWide(Z_Param_ZoomValueTicks,Z_Param_OrigFx,Z_Param_NewFx);
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function AddFxTweakNearWide ************************

// ********** Begin Class UDistortionInterpolator Function AddNewSamplePoint ***********************
struct Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint_Statics
{
	struct DistortionInterpolator_eventAddNewSamplePoint_Parms
	{
		float FocusEncValue;
		float ZoomEncValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusEncValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomEncValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint_Statics::NewProp_FocusEncValue = { "FocusEncValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventAddNewSamplePoint_Parms, FocusEncValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint_Statics::NewProp_ZoomEncValue = { "ZoomEncValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventAddNewSamplePoint_Parms, ZoomEncValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DistortionInterpolator_eventAddNewSamplePoint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DistortionInterpolator_eventAddNewSamplePoint_Parms), &Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint_Statics::NewProp_FocusEncValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint_Statics::NewProp_ZoomEncValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "AddNewSamplePoint", Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint_Statics::DistortionInterpolator_eventAddNewSamplePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint_Statics::DistortionInterpolator_eventAddNewSamplePoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execAddNewSamplePoint)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_FocusEncValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomEncValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddNewSamplePoint(Z_Param_FocusEncValue,Z_Param_ZoomEncValue);
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function AddNewSamplePoint *************************

// ********** Begin Class UDistortionInterpolator Function ClearFocalDistance **********************
struct Z_Construct_UFunction_UDistortionInterpolator_ClearFocalDistance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_ClearFocalDistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "ClearFocalDistance", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_ClearFocalDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_ClearFocalDistance_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDistortionInterpolator_ClearFocalDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_ClearFocalDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execClearFocalDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearFocalDistance();
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function ClearFocalDistance ************************

// ********** Begin Class UDistortionInterpolator Function ClearNearWideSplines ********************
struct Z_Construct_UFunction_UDistortionInterpolator_ClearNearWideSplines_Statics
{
	struct DistortionInterpolator_eventClearNearWideSplines_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDistortionInterpolator_ClearNearWideSplines_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DistortionInterpolator_eventClearNearWideSplines_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDistortionInterpolator_ClearNearWideSplines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DistortionInterpolator_eventClearNearWideSplines_Parms), &Z_Construct_UFunction_UDistortionInterpolator_ClearNearWideSplines_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_ClearNearWideSplines_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_ClearNearWideSplines_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_ClearNearWideSplines_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_ClearNearWideSplines_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "ClearNearWideSplines", Z_Construct_UFunction_UDistortionInterpolator_ClearNearWideSplines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_ClearNearWideSplines_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_ClearNearWideSplines_Statics::DistortionInterpolator_eventClearNearWideSplines_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_ClearNearWideSplines_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_ClearNearWideSplines_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_ClearNearWideSplines_Statics::DistortionInterpolator_eventClearNearWideSplines_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_ClearNearWideSplines()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_ClearNearWideSplines_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execClearNearWideSplines)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ClearNearWideSplines();
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function ClearNearWideSplines **********************

// ********** Begin Class UDistortionInterpolator Function GenerateAllNearWideSplines **************
struct Z_Construct_UFunction_UDistortionInterpolator_GenerateAllNearWideSplines_Statics
{
	struct DistortionInterpolator_eventGenerateAllNearWideSplines_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDistortionInterpolator_GenerateAllNearWideSplines_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DistortionInterpolator_eventGenerateAllNearWideSplines_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GenerateAllNearWideSplines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DistortionInterpolator_eventGenerateAllNearWideSplines_Parms), &Z_Construct_UFunction_UDistortionInterpolator_GenerateAllNearWideSplines_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_GenerateAllNearWideSplines_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GenerateAllNearWideSplines_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GenerateAllNearWideSplines_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_GenerateAllNearWideSplines_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "GenerateAllNearWideSplines", Z_Construct_UFunction_UDistortionInterpolator_GenerateAllNearWideSplines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GenerateAllNearWideSplines_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_GenerateAllNearWideSplines_Statics::DistortionInterpolator_eventGenerateAllNearWideSplines_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GenerateAllNearWideSplines_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_GenerateAllNearWideSplines_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_GenerateAllNearWideSplines_Statics::DistortionInterpolator_eventGenerateAllNearWideSplines_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_GenerateAllNearWideSplines()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_GenerateAllNearWideSplines_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execGenerateAllNearWideSplines)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GenerateAllNearWideSplines();
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function GenerateAllNearWideSplines ****************

// ********** Begin Class UDistortionInterpolator Function GenerateCxSplineNearWide ****************
struct Z_Construct_UFunction_UDistortionInterpolator_GenerateCxSplineNearWide_Statics
{
	struct DistortionInterpolator_eventGenerateCxSplineNearWide_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDistortionInterpolator_GenerateCxSplineNearWide_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DistortionInterpolator_eventGenerateCxSplineNearWide_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GenerateCxSplineNearWide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DistortionInterpolator_eventGenerateCxSplineNearWide_Parms), &Z_Construct_UFunction_UDistortionInterpolator_GenerateCxSplineNearWide_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_GenerateCxSplineNearWide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GenerateCxSplineNearWide_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GenerateCxSplineNearWide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_GenerateCxSplineNearWide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "GenerateCxSplineNearWide", Z_Construct_UFunction_UDistortionInterpolator_GenerateCxSplineNearWide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GenerateCxSplineNearWide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_GenerateCxSplineNearWide_Statics::DistortionInterpolator_eventGenerateCxSplineNearWide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GenerateCxSplineNearWide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_GenerateCxSplineNearWide_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_GenerateCxSplineNearWide_Statics::DistortionInterpolator_eventGenerateCxSplineNearWide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_GenerateCxSplineNearWide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_GenerateCxSplineNearWide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execGenerateCxSplineNearWide)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GenerateCxSplineNearWide();
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function GenerateCxSplineNearWide ******************

// ********** Begin Class UDistortionInterpolator Function GenerateCySplineNearWide ****************
struct Z_Construct_UFunction_UDistortionInterpolator_GenerateCySplineNearWide_Statics
{
	struct DistortionInterpolator_eventGenerateCySplineNearWide_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDistortionInterpolator_GenerateCySplineNearWide_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DistortionInterpolator_eventGenerateCySplineNearWide_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GenerateCySplineNearWide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DistortionInterpolator_eventGenerateCySplineNearWide_Parms), &Z_Construct_UFunction_UDistortionInterpolator_GenerateCySplineNearWide_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_GenerateCySplineNearWide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GenerateCySplineNearWide_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GenerateCySplineNearWide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_GenerateCySplineNearWide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "GenerateCySplineNearWide", Z_Construct_UFunction_UDistortionInterpolator_GenerateCySplineNearWide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GenerateCySplineNearWide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_GenerateCySplineNearWide_Statics::DistortionInterpolator_eventGenerateCySplineNearWide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GenerateCySplineNearWide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_GenerateCySplineNearWide_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_GenerateCySplineNearWide_Statics::DistortionInterpolator_eventGenerateCySplineNearWide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_GenerateCySplineNearWide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_GenerateCySplineNearWide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execGenerateCySplineNearWide)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GenerateCySplineNearWide();
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function GenerateCySplineNearWide ******************

// ********** Begin Class UDistortionInterpolator Function GenerateEPDSplineNearWide ***************
struct Z_Construct_UFunction_UDistortionInterpolator_GenerateEPDSplineNearWide_Statics
{
	struct DistortionInterpolator_eventGenerateEPDSplineNearWide_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDistortionInterpolator_GenerateEPDSplineNearWide_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DistortionInterpolator_eventGenerateEPDSplineNearWide_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GenerateEPDSplineNearWide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DistortionInterpolator_eventGenerateEPDSplineNearWide_Parms), &Z_Construct_UFunction_UDistortionInterpolator_GenerateEPDSplineNearWide_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_GenerateEPDSplineNearWide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GenerateEPDSplineNearWide_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GenerateEPDSplineNearWide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_GenerateEPDSplineNearWide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "GenerateEPDSplineNearWide", Z_Construct_UFunction_UDistortionInterpolator_GenerateEPDSplineNearWide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GenerateEPDSplineNearWide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_GenerateEPDSplineNearWide_Statics::DistortionInterpolator_eventGenerateEPDSplineNearWide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GenerateEPDSplineNearWide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_GenerateEPDSplineNearWide_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_GenerateEPDSplineNearWide_Statics::DistortionInterpolator_eventGenerateEPDSplineNearWide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_GenerateEPDSplineNearWide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_GenerateEPDSplineNearWide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execGenerateEPDSplineNearWide)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GenerateEPDSplineNearWide();
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function GenerateEPDSplineNearWide *****************

// ********** Begin Class UDistortionInterpolator Function GenerateFxSplineNearWide ****************
struct Z_Construct_UFunction_UDistortionInterpolator_GenerateFxSplineNearWide_Statics
{
	struct DistortionInterpolator_eventGenerateFxSplineNearWide_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDistortionInterpolator_GenerateFxSplineNearWide_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DistortionInterpolator_eventGenerateFxSplineNearWide_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GenerateFxSplineNearWide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DistortionInterpolator_eventGenerateFxSplineNearWide_Parms), &Z_Construct_UFunction_UDistortionInterpolator_GenerateFxSplineNearWide_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_GenerateFxSplineNearWide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GenerateFxSplineNearWide_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GenerateFxSplineNearWide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_GenerateFxSplineNearWide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "GenerateFxSplineNearWide", Z_Construct_UFunction_UDistortionInterpolator_GenerateFxSplineNearWide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GenerateFxSplineNearWide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_GenerateFxSplineNearWide_Statics::DistortionInterpolator_eventGenerateFxSplineNearWide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GenerateFxSplineNearWide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_GenerateFxSplineNearWide_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_GenerateFxSplineNearWide_Statics::DistortionInterpolator_eventGenerateFxSplineNearWide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_GenerateFxSplineNearWide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_GenerateFxSplineNearWide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execGenerateFxSplineNearWide)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GenerateFxSplineNearWide();
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function GenerateFxSplineNearWide ******************

// ********** Begin Class UDistortionInterpolator Function GetCxSplineValue ************************
struct Z_Construct_UFunction_UDistortionInterpolator_GetCxSplineValue_Statics
{
	struct DistortionInterpolator_eventGetCxSplineValue_Parms
	{
		float ZoomValueTicks;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomValueTicks;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GetCxSplineValue_Statics::NewProp_ZoomValueTicks = { "ZoomValueTicks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventGetCxSplineValue_Parms, ZoomValueTicks), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GetCxSplineValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventGetCxSplineValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_GetCxSplineValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GetCxSplineValue_Statics::NewProp_ZoomValueTicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GetCxSplineValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetCxSplineValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_GetCxSplineValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "GetCxSplineValue", Z_Construct_UFunction_UDistortionInterpolator_GetCxSplineValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetCxSplineValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_GetCxSplineValue_Statics::DistortionInterpolator_eventGetCxSplineValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetCxSplineValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_GetCxSplineValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_GetCxSplineValue_Statics::DistortionInterpolator_eventGetCxSplineValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_GetCxSplineValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_GetCxSplineValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execGetCxSplineValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomValueTicks);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCxSplineValue(Z_Param_ZoomValueTicks);
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function GetCxSplineValue **************************

// ********** Begin Class UDistortionInterpolator Function GetCySplineValue ************************
struct Z_Construct_UFunction_UDistortionInterpolator_GetCySplineValue_Statics
{
	struct DistortionInterpolator_eventGetCySplineValue_Parms
	{
		float ZoomValueTicks;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomValueTicks;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GetCySplineValue_Statics::NewProp_ZoomValueTicks = { "ZoomValueTicks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventGetCySplineValue_Parms, ZoomValueTicks), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GetCySplineValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventGetCySplineValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_GetCySplineValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GetCySplineValue_Statics::NewProp_ZoomValueTicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GetCySplineValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetCySplineValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_GetCySplineValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "GetCySplineValue", Z_Construct_UFunction_UDistortionInterpolator_GetCySplineValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetCySplineValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_GetCySplineValue_Statics::DistortionInterpolator_eventGetCySplineValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetCySplineValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_GetCySplineValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_GetCySplineValue_Statics::DistortionInterpolator_eventGetCySplineValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_GetCySplineValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_GetCySplineValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execGetCySplineValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomValueTicks);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCySplineValue(Z_Param_ZoomValueTicks);
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function GetCySplineValue **************************

// ********** Begin Class UDistortionInterpolator Function GetDistortionCoefficientsForLensData ****
struct Z_Construct_UFunction_UDistortionInterpolator_GetDistortionCoefficientsForLensData_Statics
{
	struct DistortionInterpolator_eventGetDistortionCoefficientsForLensData_Parms
	{
		float focus;
		float zoom;
		FMoSysLensParameters OutCoefficients;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_focus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_zoom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCoefficients;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GetDistortionCoefficientsForLensData_Statics::NewProp_focus = { "focus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventGetDistortionCoefficientsForLensData_Parms, focus), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GetDistortionCoefficientsForLensData_Statics::NewProp_zoom = { "zoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventGetDistortionCoefficientsForLensData_Parms, zoom), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GetDistortionCoefficientsForLensData_Statics::NewProp_OutCoefficients = { "OutCoefficients", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventGetDistortionCoefficientsForLensData_Parms, OutCoefficients), Z_Construct_UScriptStruct_FMoSysLensParameters, METADATA_PARAMS(0, nullptr) }; // 1788929806
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_GetDistortionCoefficientsForLensData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GetDistortionCoefficientsForLensData_Statics::NewProp_focus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GetDistortionCoefficientsForLensData_Statics::NewProp_zoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GetDistortionCoefficientsForLensData_Statics::NewProp_OutCoefficients,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetDistortionCoefficientsForLensData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_GetDistortionCoefficientsForLensData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "GetDistortionCoefficientsForLensData", Z_Construct_UFunction_UDistortionInterpolator_GetDistortionCoefficientsForLensData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetDistortionCoefficientsForLensData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_GetDistortionCoefficientsForLensData_Statics::DistortionInterpolator_eventGetDistortionCoefficientsForLensData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetDistortionCoefficientsForLensData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_GetDistortionCoefficientsForLensData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_GetDistortionCoefficientsForLensData_Statics::DistortionInterpolator_eventGetDistortionCoefficientsForLensData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_GetDistortionCoefficientsForLensData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_GetDistortionCoefficientsForLensData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execGetDistortionCoefficientsForLensData)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_focus);
	P_GET_PROPERTY(FFloatProperty,Z_Param_zoom);
	P_GET_STRUCT_REF(FMoSysLensParameters,Z_Param_Out_OutCoefficients);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetDistortionCoefficientsForLensData(Z_Param_focus,Z_Param_zoom,Z_Param_Out_OutCoefficients);
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function GetDistortionCoefficientsForLensData ******

// ********** Begin Class UDistortionInterpolator Function GetEPDSplineValue ***********************
struct Z_Construct_UFunction_UDistortionInterpolator_GetEPDSplineValue_Statics
{
	struct DistortionInterpolator_eventGetEPDSplineValue_Parms
	{
		float ZoomValueTicks;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomValueTicks;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GetEPDSplineValue_Statics::NewProp_ZoomValueTicks = { "ZoomValueTicks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventGetEPDSplineValue_Parms, ZoomValueTicks), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GetEPDSplineValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventGetEPDSplineValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_GetEPDSplineValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GetEPDSplineValue_Statics::NewProp_ZoomValueTicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GetEPDSplineValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetEPDSplineValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_GetEPDSplineValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "GetEPDSplineValue", Z_Construct_UFunction_UDistortionInterpolator_GetEPDSplineValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetEPDSplineValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_GetEPDSplineValue_Statics::DistortionInterpolator_eventGetEPDSplineValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetEPDSplineValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_GetEPDSplineValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_GetEPDSplineValue_Statics::DistortionInterpolator_eventGetEPDSplineValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_GetEPDSplineValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_GetEPDSplineValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execGetEPDSplineValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomValueTicks);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEPDSplineValue(Z_Param_ZoomValueTicks);
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function GetEPDSplineValue *************************

// ********** Begin Class UDistortionInterpolator Function GetFocalDistanceTable *******************
struct Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable_Statics
{
	struct DistortionInterpolator_eventGetFocalDistanceTable_Parms
	{
		TArray<float> FocusPoints;
		TArray<float> FocalDistances;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FocusPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocalDistances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FocalDistances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable_Statics::NewProp_FocusPoints_Inner = { "FocusPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable_Statics::NewProp_FocusPoints = { "FocusPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventGetFocalDistanceTable_Parms, FocusPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable_Statics::NewProp_FocalDistances_Inner = { "FocalDistances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable_Statics::NewProp_FocalDistances = { "FocalDistances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventGetFocalDistanceTable_Parms, FocalDistances), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable_Statics::NewProp_FocusPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable_Statics::NewProp_FocusPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable_Statics::NewProp_FocalDistances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable_Statics::NewProp_FocalDistances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "GetFocalDistanceTable", Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable_Statics::DistortionInterpolator_eventGetFocalDistanceTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable_Statics::DistortionInterpolator_eventGetFocalDistanceTable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execGetFocalDistanceTable)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_FocusPoints);
	P_GET_TARRAY_REF(float,Z_Param_Out_FocalDistances);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFocalDistanceTable(Z_Param_Out_FocusPoints,Z_Param_Out_FocalDistances);
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function GetFocalDistanceTable *********************

// ********** Begin Class UDistortionInterpolator Function GetFxSplineValue ************************
struct Z_Construct_UFunction_UDistortionInterpolator_GetFxSplineValue_Statics
{
	struct DistortionInterpolator_eventGetFxSplineValue_Parms
	{
		float ZoomValueTicks;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomValueTicks;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GetFxSplineValue_Statics::NewProp_ZoomValueTicks = { "ZoomValueTicks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventGetFxSplineValue_Parms, ZoomValueTicks), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GetFxSplineValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventGetFxSplineValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_GetFxSplineValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GetFxSplineValue_Statics::NewProp_ZoomValueTicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GetFxSplineValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetFxSplineValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_GetFxSplineValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "GetFxSplineValue", Z_Construct_UFunction_UDistortionInterpolator_GetFxSplineValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetFxSplineValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_GetFxSplineValue_Statics::DistortionInterpolator_eventGetFxSplineValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetFxSplineValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_GetFxSplineValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_GetFxSplineValue_Statics::DistortionInterpolator_eventGetFxSplineValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_GetFxSplineValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_GetFxSplineValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execGetFxSplineValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomValueTicks);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFxSplineValue(Z_Param_ZoomValueTicks);
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function GetFxSplineValue **************************

// ********** Begin Class UDistortionInterpolator Function GetSamplePoints *************************
struct Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints_Statics
{
	struct DistortionInterpolator_eventGetSamplePoints_Parms
	{
		TArray<float> ZoomPoints;
		TArray<float> FocusPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ZoomPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FocusPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints_Statics::NewProp_ZoomPoints_Inner = { "ZoomPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints_Statics::NewProp_ZoomPoints = { "ZoomPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventGetSamplePoints_Parms, ZoomPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints_Statics::NewProp_FocusPoints_Inner = { "FocusPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints_Statics::NewProp_FocusPoints = { "FocusPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventGetSamplePoints_Parms, FocusPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints_Statics::NewProp_ZoomPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints_Statics::NewProp_ZoomPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints_Statics::NewProp_FocusPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints_Statics::NewProp_FocusPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "GetSamplePoints", Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints_Statics::DistortionInterpolator_eventGetSamplePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints_Statics::DistortionInterpolator_eventGetSamplePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execGetSamplePoints)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_ZoomPoints);
	P_GET_TARRAY_REF(float,Z_Param_Out_FocusPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSamplePoints(Z_Param_Out_ZoomPoints,Z_Param_Out_FocusPoints);
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function GetSamplePoints ***************************

// ********** Begin Class UDistortionInterpolator Function GetShouldRecomputeDistortionFromFxUndist 
struct Z_Construct_UFunction_UDistortionInterpolator_GetShouldRecomputeDistortionFromFxUndist_Statics
{
	struct DistortionInterpolator_eventGetShouldRecomputeDistortionFromFxUndist_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDistortionInterpolator_GetShouldRecomputeDistortionFromFxUndist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DistortionInterpolator_eventGetShouldRecomputeDistortionFromFxUndist_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDistortionInterpolator_GetShouldRecomputeDistortionFromFxUndist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DistortionInterpolator_eventGetShouldRecomputeDistortionFromFxUndist_Parms), &Z_Construct_UFunction_UDistortionInterpolator_GetShouldRecomputeDistortionFromFxUndist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_GetShouldRecomputeDistortionFromFxUndist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_GetShouldRecomputeDistortionFromFxUndist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetShouldRecomputeDistortionFromFxUndist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_GetShouldRecomputeDistortionFromFxUndist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "GetShouldRecomputeDistortionFromFxUndist", Z_Construct_UFunction_UDistortionInterpolator_GetShouldRecomputeDistortionFromFxUndist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetShouldRecomputeDistortionFromFxUndist_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_GetShouldRecomputeDistortionFromFxUndist_Statics::DistortionInterpolator_eventGetShouldRecomputeDistortionFromFxUndist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_GetShouldRecomputeDistortionFromFxUndist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_GetShouldRecomputeDistortionFromFxUndist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_GetShouldRecomputeDistortionFromFxUndist_Statics::DistortionInterpolator_eventGetShouldRecomputeDistortionFromFxUndist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_GetShouldRecomputeDistortionFromFxUndist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_GetShouldRecomputeDistortionFromFxUndist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execGetShouldRecomputeDistortionFromFxUndist)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetShouldRecomputeDistortionFromFxUndist();
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function GetShouldRecomputeDistortionFromFxUndist **

// ********** Begin Class UDistortionInterpolator Function HasFocalDistance ************************
struct Z_Construct_UFunction_UDistortionInterpolator_HasFocalDistance_Statics
{
	struct DistortionInterpolator_eventHasFocalDistance_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDistortionInterpolator_HasFocalDistance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DistortionInterpolator_eventHasFocalDistance_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDistortionInterpolator_HasFocalDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DistortionInterpolator_eventHasFocalDistance_Parms), &Z_Construct_UFunction_UDistortionInterpolator_HasFocalDistance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_HasFocalDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_HasFocalDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_HasFocalDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_HasFocalDistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "HasFocalDistance", Z_Construct_UFunction_UDistortionInterpolator_HasFocalDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_HasFocalDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_HasFocalDistance_Statics::DistortionInterpolator_eventHasFocalDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_HasFocalDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_HasFocalDistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_HasFocalDistance_Statics::DistortionInterpolator_eventHasFocalDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_HasFocalDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_HasFocalDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execHasFocalDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasFocalDistance();
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function HasFocalDistance **************************

// ********** Begin Class UDistortionInterpolator Function IsDesriptionComplete ********************
struct Z_Construct_UFunction_UDistortionInterpolator_IsDesriptionComplete_Statics
{
	struct DistortionInterpolator_eventIsDesriptionComplete_Parms
	{
		FLensFileDescription descr;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Mo-Sys|LensDistortion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is description complete enough to meaningfully describe lens?\n" },
#endif
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is description complete enough to meaningfully describe lens?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_descr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_descr;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDistortionInterpolator_IsDesriptionComplete_Statics::NewProp_descr = { "descr", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventIsDesriptionComplete_Parms, descr), Z_Construct_UScriptStruct_FLensFileDescription, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_descr_MetaData), NewProp_descr_MetaData) }; // 793297245
void Z_Construct_UFunction_UDistortionInterpolator_IsDesriptionComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DistortionInterpolator_eventIsDesriptionComplete_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDistortionInterpolator_IsDesriptionComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DistortionInterpolator_eventIsDesriptionComplete_Parms), &Z_Construct_UFunction_UDistortionInterpolator_IsDesriptionComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_IsDesriptionComplete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_IsDesriptionComplete_Statics::NewProp_descr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_IsDesriptionComplete_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_IsDesriptionComplete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_IsDesriptionComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "IsDesriptionComplete", Z_Construct_UFunction_UDistortionInterpolator_IsDesriptionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_IsDesriptionComplete_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_IsDesriptionComplete_Statics::DistortionInterpolator_eventIsDesriptionComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_IsDesriptionComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_IsDesriptionComplete_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_IsDesriptionComplete_Statics::DistortionInterpolator_eventIsDesriptionComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_IsDesriptionComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_IsDesriptionComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execIsDesriptionComplete)
{
	P_GET_STRUCT_REF(FLensFileDescription,Z_Param_Out_descr);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDistortionInterpolator::IsDesriptionComplete(Z_Param_Out_descr);
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function IsDesriptionComplete **********************

// ********** Begin Class UDistortionInterpolator Function RefreshLensDistortion *******************
struct Z_Construct_UFunction_UDistortionInterpolator_RefreshLensDistortion_Statics
{
	struct DistortionInterpolator_eventRefreshLensDistortion_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Mo-Sys|LensDistortion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Update the lens distortion, from lensCalPath\n" },
#endif
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the lens distortion, from lensCalPath" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDistortionInterpolator_RefreshLensDistortion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DistortionInterpolator_eventRefreshLensDistortion_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDistortionInterpolator_RefreshLensDistortion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DistortionInterpolator_eventRefreshLensDistortion_Parms), &Z_Construct_UFunction_UDistortionInterpolator_RefreshLensDistortion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_RefreshLensDistortion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_RefreshLensDistortion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_RefreshLensDistortion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_RefreshLensDistortion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "RefreshLensDistortion", Z_Construct_UFunction_UDistortionInterpolator_RefreshLensDistortion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_RefreshLensDistortion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_RefreshLensDistortion_Statics::DistortionInterpolator_eventRefreshLensDistortion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_RefreshLensDistortion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_RefreshLensDistortion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_RefreshLensDistortion_Statics::DistortionInterpolator_eventRefreshLensDistortion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_RefreshLensDistortion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_RefreshLensDistortion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execRefreshLensDistortion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RefreshLensDistortion();
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function RefreshLensDistortion *********************

// ********** Begin Class UDistortionInterpolator Function RemoveCxTweakNearWide *******************
struct Z_Construct_UFunction_UDistortionInterpolator_RemoveCxTweakNearWide_Statics
{
	struct DistortionInterpolator_eventRemoveCxTweakNearWide_Parms
	{
		float ZoomValueTicks;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomValueTicks;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_RemoveCxTweakNearWide_Statics::NewProp_ZoomValueTicks = { "ZoomValueTicks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventRemoveCxTweakNearWide_Parms, ZoomValueTicks), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDistortionInterpolator_RemoveCxTweakNearWide_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DistortionInterpolator_eventRemoveCxTweakNearWide_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDistortionInterpolator_RemoveCxTweakNearWide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DistortionInterpolator_eventRemoveCxTweakNearWide_Parms), &Z_Construct_UFunction_UDistortionInterpolator_RemoveCxTweakNearWide_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_RemoveCxTweakNearWide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_RemoveCxTweakNearWide_Statics::NewProp_ZoomValueTicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_RemoveCxTweakNearWide_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_RemoveCxTweakNearWide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_RemoveCxTweakNearWide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "RemoveCxTweakNearWide", Z_Construct_UFunction_UDistortionInterpolator_RemoveCxTweakNearWide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_RemoveCxTweakNearWide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_RemoveCxTweakNearWide_Statics::DistortionInterpolator_eventRemoveCxTweakNearWide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_RemoveCxTweakNearWide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_RemoveCxTweakNearWide_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_RemoveCxTweakNearWide_Statics::DistortionInterpolator_eventRemoveCxTweakNearWide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_RemoveCxTweakNearWide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_RemoveCxTweakNearWide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execRemoveCxTweakNearWide)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomValueTicks);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveCxTweakNearWide(Z_Param_ZoomValueTicks);
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function RemoveCxTweakNearWide *********************

// ********** Begin Class UDistortionInterpolator Function RemoveCyTweakNearWide *******************
struct Z_Construct_UFunction_UDistortionInterpolator_RemoveCyTweakNearWide_Statics
{
	struct DistortionInterpolator_eventRemoveCyTweakNearWide_Parms
	{
		float ZoomValueTicks;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomValueTicks;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_RemoveCyTweakNearWide_Statics::NewProp_ZoomValueTicks = { "ZoomValueTicks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventRemoveCyTweakNearWide_Parms, ZoomValueTicks), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDistortionInterpolator_RemoveCyTweakNearWide_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DistortionInterpolator_eventRemoveCyTweakNearWide_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDistortionInterpolator_RemoveCyTweakNearWide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DistortionInterpolator_eventRemoveCyTweakNearWide_Parms), &Z_Construct_UFunction_UDistortionInterpolator_RemoveCyTweakNearWide_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_RemoveCyTweakNearWide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_RemoveCyTweakNearWide_Statics::NewProp_ZoomValueTicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_RemoveCyTweakNearWide_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_RemoveCyTweakNearWide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_RemoveCyTweakNearWide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "RemoveCyTweakNearWide", Z_Construct_UFunction_UDistortionInterpolator_RemoveCyTweakNearWide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_RemoveCyTweakNearWide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_RemoveCyTweakNearWide_Statics::DistortionInterpolator_eventRemoveCyTweakNearWide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_RemoveCyTweakNearWide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_RemoveCyTweakNearWide_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_RemoveCyTweakNearWide_Statics::DistortionInterpolator_eventRemoveCyTweakNearWide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_RemoveCyTweakNearWide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_RemoveCyTweakNearWide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execRemoveCyTweakNearWide)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomValueTicks);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveCyTweakNearWide(Z_Param_ZoomValueTicks);
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function RemoveCyTweakNearWide *********************

// ********** Begin Class UDistortionInterpolator Function RemoveEPDTweakNearWide ******************
struct Z_Construct_UFunction_UDistortionInterpolator_RemoveEPDTweakNearWide_Statics
{
	struct DistortionInterpolator_eventRemoveEPDTweakNearWide_Parms
	{
		float ZoomValueTicks;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomValueTicks;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_RemoveEPDTweakNearWide_Statics::NewProp_ZoomValueTicks = { "ZoomValueTicks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventRemoveEPDTweakNearWide_Parms, ZoomValueTicks), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDistortionInterpolator_RemoveEPDTweakNearWide_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DistortionInterpolator_eventRemoveEPDTweakNearWide_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDistortionInterpolator_RemoveEPDTweakNearWide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DistortionInterpolator_eventRemoveEPDTweakNearWide_Parms), &Z_Construct_UFunction_UDistortionInterpolator_RemoveEPDTweakNearWide_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_RemoveEPDTweakNearWide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_RemoveEPDTweakNearWide_Statics::NewProp_ZoomValueTicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_RemoveEPDTweakNearWide_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_RemoveEPDTweakNearWide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_RemoveEPDTweakNearWide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "RemoveEPDTweakNearWide", Z_Construct_UFunction_UDistortionInterpolator_RemoveEPDTweakNearWide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_RemoveEPDTweakNearWide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_RemoveEPDTweakNearWide_Statics::DistortionInterpolator_eventRemoveEPDTweakNearWide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_RemoveEPDTweakNearWide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_RemoveEPDTweakNearWide_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_RemoveEPDTweakNearWide_Statics::DistortionInterpolator_eventRemoveEPDTweakNearWide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_RemoveEPDTweakNearWide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_RemoveEPDTweakNearWide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execRemoveEPDTweakNearWide)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomValueTicks);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveEPDTweakNearWide(Z_Param_ZoomValueTicks);
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function RemoveEPDTweakNearWide ********************

// ********** Begin Class UDistortionInterpolator Function RemoveFxTweakNearWide *******************
struct Z_Construct_UFunction_UDistortionInterpolator_RemoveFxTweakNearWide_Statics
{
	struct DistortionInterpolator_eventRemoveFxTweakNearWide_Parms
	{
		float ZoomValueTicks;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomValueTicks;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_RemoveFxTweakNearWide_Statics::NewProp_ZoomValueTicks = { "ZoomValueTicks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventRemoveFxTweakNearWide_Parms, ZoomValueTicks), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDistortionInterpolator_RemoveFxTweakNearWide_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DistortionInterpolator_eventRemoveFxTweakNearWide_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDistortionInterpolator_RemoveFxTweakNearWide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DistortionInterpolator_eventRemoveFxTweakNearWide_Parms), &Z_Construct_UFunction_UDistortionInterpolator_RemoveFxTweakNearWide_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_RemoveFxTweakNearWide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_RemoveFxTweakNearWide_Statics::NewProp_ZoomValueTicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_RemoveFxTweakNearWide_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_RemoveFxTweakNearWide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_RemoveFxTweakNearWide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "RemoveFxTweakNearWide", Z_Construct_UFunction_UDistortionInterpolator_RemoveFxTweakNearWide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_RemoveFxTweakNearWide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_RemoveFxTweakNearWide_Statics::DistortionInterpolator_eventRemoveFxTweakNearWide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_RemoveFxTweakNearWide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_RemoveFxTweakNearWide_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_RemoveFxTweakNearWide_Statics::DistortionInterpolator_eventRemoveFxTweakNearWide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_RemoveFxTweakNearWide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_RemoveFxTweakNearWide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execRemoveFxTweakNearWide)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomValueTicks);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveFxTweakNearWide(Z_Param_ZoomValueTicks);
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function RemoveFxTweakNearWide *********************

// ********** Begin Class UDistortionInterpolator Function ResetGlobalTweaks ***********************
struct Z_Construct_UFunction_UDistortionInterpolator_ResetGlobalTweaks_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_ResetGlobalTweaks_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "ResetGlobalTweaks", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_ResetGlobalTweaks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_ResetGlobalTweaks_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDistortionInterpolator_ResetGlobalTweaks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_ResetGlobalTweaks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execResetGlobalTweaks)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetGlobalTweaks();
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function ResetGlobalTweaks *************************

// ********** Begin Class UDistortionInterpolator Function SaveLensCal *****************************
struct Z_Construct_UFunction_UDistortionInterpolator_SaveLensCal_Statics
{
	struct DistortionInterpolator_eventSaveLensCal_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDistortionInterpolator_SaveLensCal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DistortionInterpolator_eventSaveLensCal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDistortionInterpolator_SaveLensCal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DistortionInterpolator_eventSaveLensCal_Parms), &Z_Construct_UFunction_UDistortionInterpolator_SaveLensCal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_SaveLensCal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_SaveLensCal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_SaveLensCal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_SaveLensCal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "SaveLensCal", Z_Construct_UFunction_UDistortionInterpolator_SaveLensCal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_SaveLensCal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_SaveLensCal_Statics::DistortionInterpolator_eventSaveLensCal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_SaveLensCal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_SaveLensCal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_SaveLensCal_Statics::DistortionInterpolator_eventSaveLensCal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_SaveLensCal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_SaveLensCal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execSaveLensCal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SaveLensCal();
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function SaveLensCal *******************************

// ********** Begin Class UDistortionInterpolator Function SaveLensCalAsync ************************
struct Z_Construct_UFunction_UDistortionInterpolator_SaveLensCalAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Mo-Sys|LensDistortion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Saves calibration asyncronously and executes OnLensCalSaveFinished once done\n" },
#endif
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saves calibration asyncronously and executes OnLensCalSaveFinished once done" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_SaveLensCalAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "SaveLensCalAsync", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_SaveLensCalAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_SaveLensCalAsync_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDistortionInterpolator_SaveLensCalAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_SaveLensCalAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execSaveLensCalAsync)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveLensCalAsync();
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function SaveLensCalAsync **************************

// ********** Begin Class UDistortionInterpolator Function SetDistortionCoefficientsForLensData ****
struct Z_Construct_UFunction_UDistortionInterpolator_SetDistortionCoefficientsForLensData_Statics
{
	struct DistortionInterpolator_eventSetDistortionCoefficientsForLensData_Parms
	{
		float Focus;
		float Zoom;
		FMoSysLensParameters InCoefficients;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCoefficients_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Focus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Zoom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCoefficients;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_SetDistortionCoefficientsForLensData_Statics::NewProp_Focus = { "Focus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventSetDistortionCoefficientsForLensData_Parms, Focus), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionInterpolator_SetDistortionCoefficientsForLensData_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventSetDistortionCoefficientsForLensData_Parms, Zoom), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDistortionInterpolator_SetDistortionCoefficientsForLensData_Statics::NewProp_InCoefficients = { "InCoefficients", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventSetDistortionCoefficientsForLensData_Parms, InCoefficients), Z_Construct_UScriptStruct_FMoSysLensParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCoefficients_MetaData), NewProp_InCoefficients_MetaData) }; // 1788929806
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_SetDistortionCoefficientsForLensData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_SetDistortionCoefficientsForLensData_Statics::NewProp_Focus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_SetDistortionCoefficientsForLensData_Statics::NewProp_Zoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_SetDistortionCoefficientsForLensData_Statics::NewProp_InCoefficients,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_SetDistortionCoefficientsForLensData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_SetDistortionCoefficientsForLensData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "SetDistortionCoefficientsForLensData", Z_Construct_UFunction_UDistortionInterpolator_SetDistortionCoefficientsForLensData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_SetDistortionCoefficientsForLensData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_SetDistortionCoefficientsForLensData_Statics::DistortionInterpolator_eventSetDistortionCoefficientsForLensData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_SetDistortionCoefficientsForLensData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_SetDistortionCoefficientsForLensData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_SetDistortionCoefficientsForLensData_Statics::DistortionInterpolator_eventSetDistortionCoefficientsForLensData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_SetDistortionCoefficientsForLensData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_SetDistortionCoefficientsForLensData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execSetDistortionCoefficientsForLensData)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Focus);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Zoom);
	P_GET_STRUCT_REF(FMoSysLensParameters,Z_Param_Out_InCoefficients);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDistortionCoefficientsForLensData(Z_Param_Focus,Z_Param_Zoom,Z_Param_Out_InCoefficients);
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function SetDistortionCoefficientsForLensData ******

// ********** Begin Class UDistortionInterpolator Function SetShouldRecomputeDistortionFromFxUndist 
struct Z_Construct_UFunction_UDistortionInterpolator_SetShouldRecomputeDistortionFromFxUndist_Statics
{
	struct DistortionInterpolator_eventSetShouldRecomputeDistortionFromFxUndist_Parms
	{
		bool bShouldRecompute;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldRecompute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRecompute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDistortionInterpolator_SetShouldRecomputeDistortionFromFxUndist_Statics::NewProp_bShouldRecompute_SetBit(void* Obj)
{
	((DistortionInterpolator_eventSetShouldRecomputeDistortionFromFxUndist_Parms*)Obj)->bShouldRecompute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDistortionInterpolator_SetShouldRecomputeDistortionFromFxUndist_Statics::NewProp_bShouldRecompute = { "bShouldRecompute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DistortionInterpolator_eventSetShouldRecomputeDistortionFromFxUndist_Parms), &Z_Construct_UFunction_UDistortionInterpolator_SetShouldRecomputeDistortionFromFxUndist_Statics::NewProp_bShouldRecompute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_SetShouldRecomputeDistortionFromFxUndist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_SetShouldRecomputeDistortionFromFxUndist_Statics::NewProp_bShouldRecompute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_SetShouldRecomputeDistortionFromFxUndist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_SetShouldRecomputeDistortionFromFxUndist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "SetShouldRecomputeDistortionFromFxUndist", Z_Construct_UFunction_UDistortionInterpolator_SetShouldRecomputeDistortionFromFxUndist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_SetShouldRecomputeDistortionFromFxUndist_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_SetShouldRecomputeDistortionFromFxUndist_Statics::DistortionInterpolator_eventSetShouldRecomputeDistortionFromFxUndist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_SetShouldRecomputeDistortionFromFxUndist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_SetShouldRecomputeDistortionFromFxUndist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_SetShouldRecomputeDistortionFromFxUndist_Statics::DistortionInterpolator_eventSetShouldRecomputeDistortionFromFxUndist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_SetShouldRecomputeDistortionFromFxUndist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_SetShouldRecomputeDistortionFromFxUndist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execSetShouldRecomputeDistortionFromFxUndist)
{
	P_GET_UBOOL(Z_Param_bShouldRecompute);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShouldRecomputeDistortionFromFxUndist(Z_Param_bShouldRecompute);
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function SetShouldRecomputeDistortionFromFxUndist **

// ********** Begin Class UDistortionInterpolator Function Setter_interpolationType ****************
struct Z_Construct_UFunction_UDistortionInterpolator_Setter_interpolationType_Statics
{
	struct DistortionInterpolator_eventSetter_interpolationType_Parms
	{
		TEnumAsByte<DistortionInterpolationType::Type> Val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDistortionInterpolator_Setter_interpolationType_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionInterpolator_eventSetter_interpolationType_Parms, Val), Z_Construct_UEnum_MoSysLensDistortion_DistortionInterpolationType, METADATA_PARAMS(0, nullptr) }; // 3898961006
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionInterpolator_Setter_interpolationType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionInterpolator_Setter_interpolationType_Statics::NewProp_Val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_Setter_interpolationType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_Setter_interpolationType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "Setter_interpolationType", Z_Construct_UFunction_UDistortionInterpolator_Setter_interpolationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_Setter_interpolationType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionInterpolator_Setter_interpolationType_Statics::DistortionInterpolator_eventSetter_interpolationType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_Setter_interpolationType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_Setter_interpolationType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionInterpolator_Setter_interpolationType_Statics::DistortionInterpolator_eventSetter_interpolationType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionInterpolator_Setter_interpolationType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_Setter_interpolationType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execSetter_interpolationType)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Setter_interpolationType(DistortionInterpolationType::Type(Z_Param_Val));
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function Setter_interpolationType ******************

// ********** Begin Class UDistortionInterpolator Function UpdateLensSetup *************************
struct Z_Construct_UFunction_UDistortionInterpolator_UpdateLensSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionInterpolator_UpdateLensSetup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionInterpolator, nullptr, "UpdateLensSetup", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionInterpolator_UpdateLensSetup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionInterpolator_UpdateLensSetup_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDistortionInterpolator_UpdateLensSetup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionInterpolator_UpdateLensSetup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionInterpolator::execUpdateLensSetup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateLensSetup();
	P_NATIVE_END;
}
// ********** End Class UDistortionInterpolator Function UpdateLensSetup ***************************

// ********** Begin Class UDistortionInterpolator **************************************************
void UDistortionInterpolator::StaticRegisterNativesUDistortionInterpolator()
{
	UClass* Class = UDistortionInterpolator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCxTweakNearWide", &UDistortionInterpolator::execAddCxTweakNearWide },
		{ "AddCyTweakNearWide", &UDistortionInterpolator::execAddCyTweakNearWide },
		{ "AddEPDTweakNearWide", &UDistortionInterpolator::execAddEPDTweakNearWide },
		{ "AddFocalDistancePoint", &UDistortionInterpolator::execAddFocalDistancePoint },
		{ "AddFxTweakNearWide", &UDistortionInterpolator::execAddFxTweakNearWide },
		{ "AddNewSamplePoint", &UDistortionInterpolator::execAddNewSamplePoint },
		{ "ClearFocalDistance", &UDistortionInterpolator::execClearFocalDistance },
		{ "ClearNearWideSplines", &UDistortionInterpolator::execClearNearWideSplines },
		{ "GenerateAllNearWideSplines", &UDistortionInterpolator::execGenerateAllNearWideSplines },
		{ "GenerateCxSplineNearWide", &UDistortionInterpolator::execGenerateCxSplineNearWide },
		{ "GenerateCySplineNearWide", &UDistortionInterpolator::execGenerateCySplineNearWide },
		{ "GenerateEPDSplineNearWide", &UDistortionInterpolator::execGenerateEPDSplineNearWide },
		{ "GenerateFxSplineNearWide", &UDistortionInterpolator::execGenerateFxSplineNearWide },
		{ "GetCxSplineValue", &UDistortionInterpolator::execGetCxSplineValue },
		{ "GetCySplineValue", &UDistortionInterpolator::execGetCySplineValue },
		{ "GetDistortionCoefficientsForLensData", &UDistortionInterpolator::execGetDistortionCoefficientsForLensData },
		{ "GetEPDSplineValue", &UDistortionInterpolator::execGetEPDSplineValue },
		{ "GetFocalDistanceTable", &UDistortionInterpolator::execGetFocalDistanceTable },
		{ "GetFxSplineValue", &UDistortionInterpolator::execGetFxSplineValue },
		{ "GetSamplePoints", &UDistortionInterpolator::execGetSamplePoints },
		{ "GetShouldRecomputeDistortionFromFxUndist", &UDistortionInterpolator::execGetShouldRecomputeDistortionFromFxUndist },
		{ "HasFocalDistance", &UDistortionInterpolator::execHasFocalDistance },
		{ "IsDesriptionComplete", &UDistortionInterpolator::execIsDesriptionComplete },
		{ "RefreshLensDistortion", &UDistortionInterpolator::execRefreshLensDistortion },
		{ "RemoveCxTweakNearWide", &UDistortionInterpolator::execRemoveCxTweakNearWide },
		{ "RemoveCyTweakNearWide", &UDistortionInterpolator::execRemoveCyTweakNearWide },
		{ "RemoveEPDTweakNearWide", &UDistortionInterpolator::execRemoveEPDTweakNearWide },
		{ "RemoveFxTweakNearWide", &UDistortionInterpolator::execRemoveFxTweakNearWide },
		{ "ResetGlobalTweaks", &UDistortionInterpolator::execResetGlobalTweaks },
		{ "SaveLensCal", &UDistortionInterpolator::execSaveLensCal },
		{ "SaveLensCalAsync", &UDistortionInterpolator::execSaveLensCalAsync },
		{ "SetDistortionCoefficientsForLensData", &UDistortionInterpolator::execSetDistortionCoefficientsForLensData },
		{ "SetShouldRecomputeDistortionFromFxUndist", &UDistortionInterpolator::execSetShouldRecomputeDistortionFromFxUndist },
		{ "Setter_interpolationType", &UDistortionInterpolator::execSetter_interpolationType },
		{ "UpdateLensSetup", &UDistortionInterpolator::execUpdateLensSetup },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDistortionInterpolator;
UClass* UDistortionInterpolator::GetPrivateStaticClass()
{
	using TClass = UDistortionInterpolator;
	if (!Z_Registration_Info_UClass_UDistortionInterpolator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DistortionInterpolator"),
			Z_Registration_Info_UClass_UDistortionInterpolator.InnerSingleton,
			StaticRegisterNativesUDistortionInterpolator,
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
	return Z_Registration_Info_UClass_UDistortionInterpolator.InnerSingleton;
}
UClass* Z_Construct_UClass_UDistortionInterpolator_NoRegister()
{
	return UDistortionInterpolator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDistortionInterpolator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Category", "Distortion|DataSource" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Tags Cooking AssetUserData Collision Activation" },
		{ "IncludePath", "DistortionInterpolator.h" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverseZoom_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverseFocus_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableFocalDistance_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLensSetup_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LensData_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationType_MetaData[] = {
		{ "BlueprintSetter", "Setter_interpolationType" },
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumOfBasisSplinesNearWide_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaNearWide_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLensCalSaveFinished_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/DistortionInterpolator.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReverseZoom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReverseZoom;
	static void NewProp_ReverseFocus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReverseFocus;
	static void NewProp_EnableFocalDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableFocalDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLensSetup;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LensData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NumOfBasisSplinesNearWide;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaNearWide;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLensCalSaveFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDistortionInterpolator_AddCxTweakNearWide, "AddCxTweakNearWide" }, // 2758912641
		{ &Z_Construct_UFunction_UDistortionInterpolator_AddCyTweakNearWide, "AddCyTweakNearWide" }, // 2677688838
		{ &Z_Construct_UFunction_UDistortionInterpolator_AddEPDTweakNearWide, "AddEPDTweakNearWide" }, // 1306849971
		{ &Z_Construct_UFunction_UDistortionInterpolator_AddFocalDistancePoint, "AddFocalDistancePoint" }, // 3896349098
		{ &Z_Construct_UFunction_UDistortionInterpolator_AddFxTweakNearWide, "AddFxTweakNearWide" }, // 33515265
		{ &Z_Construct_UFunction_UDistortionInterpolator_AddNewSamplePoint, "AddNewSamplePoint" }, // 526279034
		{ &Z_Construct_UFunction_UDistortionInterpolator_ClearFocalDistance, "ClearFocalDistance" }, // 3581573611
		{ &Z_Construct_UFunction_UDistortionInterpolator_ClearNearWideSplines, "ClearNearWideSplines" }, // 4076296379
		{ &Z_Construct_UFunction_UDistortionInterpolator_GenerateAllNearWideSplines, "GenerateAllNearWideSplines" }, // 305319648
		{ &Z_Construct_UFunction_UDistortionInterpolator_GenerateCxSplineNearWide, "GenerateCxSplineNearWide" }, // 1219447615
		{ &Z_Construct_UFunction_UDistortionInterpolator_GenerateCySplineNearWide, "GenerateCySplineNearWide" }, // 1771584371
		{ &Z_Construct_UFunction_UDistortionInterpolator_GenerateEPDSplineNearWide, "GenerateEPDSplineNearWide" }, // 2544113344
		{ &Z_Construct_UFunction_UDistortionInterpolator_GenerateFxSplineNearWide, "GenerateFxSplineNearWide" }, // 3234961063
		{ &Z_Construct_UFunction_UDistortionInterpolator_GetCxSplineValue, "GetCxSplineValue" }, // 562028179
		{ &Z_Construct_UFunction_UDistortionInterpolator_GetCySplineValue, "GetCySplineValue" }, // 4087948040
		{ &Z_Construct_UFunction_UDistortionInterpolator_GetDistortionCoefficientsForLensData, "GetDistortionCoefficientsForLensData" }, // 2514926884
		{ &Z_Construct_UFunction_UDistortionInterpolator_GetEPDSplineValue, "GetEPDSplineValue" }, // 1932115632
		{ &Z_Construct_UFunction_UDistortionInterpolator_GetFocalDistanceTable, "GetFocalDistanceTable" }, // 2669244558
		{ &Z_Construct_UFunction_UDistortionInterpolator_GetFxSplineValue, "GetFxSplineValue" }, // 2063358925
		{ &Z_Construct_UFunction_UDistortionInterpolator_GetSamplePoints, "GetSamplePoints" }, // 2174717846
		{ &Z_Construct_UFunction_UDistortionInterpolator_GetShouldRecomputeDistortionFromFxUndist, "GetShouldRecomputeDistortionFromFxUndist" }, // 472620445
		{ &Z_Construct_UFunction_UDistortionInterpolator_HasFocalDistance, "HasFocalDistance" }, // 2541719610
		{ &Z_Construct_UFunction_UDistortionInterpolator_IsDesriptionComplete, "IsDesriptionComplete" }, // 3601557548
		{ &Z_Construct_UFunction_UDistortionInterpolator_RefreshLensDistortion, "RefreshLensDistortion" }, // 2984900696
		{ &Z_Construct_UFunction_UDistortionInterpolator_RemoveCxTweakNearWide, "RemoveCxTweakNearWide" }, // 2618316954
		{ &Z_Construct_UFunction_UDistortionInterpolator_RemoveCyTweakNearWide, "RemoveCyTweakNearWide" }, // 643247477
		{ &Z_Construct_UFunction_UDistortionInterpolator_RemoveEPDTweakNearWide, "RemoveEPDTweakNearWide" }, // 3661648253
		{ &Z_Construct_UFunction_UDistortionInterpolator_RemoveFxTweakNearWide, "RemoveFxTweakNearWide" }, // 1598238727
		{ &Z_Construct_UFunction_UDistortionInterpolator_ResetGlobalTweaks, "ResetGlobalTweaks" }, // 1313729911
		{ &Z_Construct_UFunction_UDistortionInterpolator_SaveLensCal, "SaveLensCal" }, // 2657101864
		{ &Z_Construct_UFunction_UDistortionInterpolator_SaveLensCalAsync, "SaveLensCalAsync" }, // 3176218774
		{ &Z_Construct_UFunction_UDistortionInterpolator_SetDistortionCoefficientsForLensData, "SetDistortionCoefficientsForLensData" }, // 629535786
		{ &Z_Construct_UFunction_UDistortionInterpolator_SetShouldRecomputeDistortionFromFxUndist, "SetShouldRecomputeDistortionFromFxUndist" }, // 2070192152
		{ &Z_Construct_UFunction_UDistortionInterpolator_Setter_interpolationType, "Setter_interpolationType" }, // 3193576058
		{ &Z_Construct_UFunction_UDistortionInterpolator_UpdateLensSetup, "UpdateLensSetup" }, // 1807401282
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistortionInterpolator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_ReverseZoom_SetBit(void* Obj)
{
	((UDistortionInterpolator*)Obj)->ReverseZoom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_ReverseZoom = { "ReverseZoom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDistortionInterpolator), &Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_ReverseZoom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverseZoom_MetaData), NewProp_ReverseZoom_MetaData) };
void Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_ReverseFocus_SetBit(void* Obj)
{
	((UDistortionInterpolator*)Obj)->ReverseFocus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_ReverseFocus = { "ReverseFocus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDistortionInterpolator), &Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_ReverseFocus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverseFocus_MetaData), NewProp_ReverseFocus_MetaData) };
void Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_EnableFocalDistance_SetBit(void* Obj)
{
	((UDistortionInterpolator*)Obj)->EnableFocalDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_EnableFocalDistance = { "EnableFocalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDistortionInterpolator), &Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_EnableFocalDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableFocalDistance_MetaData), NewProp_EnableFocalDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_CurrentLensSetup = { "CurrentLensSetup", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistortionInterpolator, CurrentLensSetup), Z_Construct_UScriptStruct_FLensSetup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLensSetup_MetaData), NewProp_CurrentLensSetup_MetaData) }; // 3922929210
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_LensData = { "LensData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistortionInterpolator, LensData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LensData_MetaData), NewProp_LensData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistortionInterpolator, InterpolationType), Z_Construct_UEnum_MoSysLensDistortion_DistortionInterpolationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationType_MetaData), NewProp_InterpolationType_MetaData) }; // 3898961006
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_NumOfBasisSplinesNearWide = { "NumOfBasisSplinesNearWide", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistortionInterpolator, NumOfBasisSplinesNearWide), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumOfBasisSplinesNearWide_MetaData), NewProp_NumOfBasisSplinesNearWide_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_AlphaNearWide = { "AlphaNearWide", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistortionInterpolator, AlphaNearWide), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaNearWide_MetaData), NewProp_AlphaNearWide_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_OnLensCalSaveFinished = { "OnLensCalSaveFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistortionInterpolator, OnLensCalSaveFinished), Z_Construct_UDelegateFunction_MoSysLensDistortion_LensCalSaveFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLensCalSaveFinished_MetaData), NewProp_OnLensCalSaveFinished_MetaData) }; // 2266092526
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistortionInterpolator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_ReverseZoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_ReverseFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_EnableFocalDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_CurrentLensSetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_LensData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_InterpolationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_NumOfBasisSplinesNearWide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_AlphaNearWide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistortionInterpolator_Statics::NewProp_OnLensCalSaveFinished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistortionInterpolator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDistortionInterpolator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysLensDistortion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistortionInterpolator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistortionInterpolator_Statics::ClassParams = {
	&UDistortionInterpolator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDistortionInterpolator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDistortionInterpolator_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDistortionInterpolator_Statics::Class_MetaDataParams), Z_Construct_UClass_UDistortionInterpolator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDistortionInterpolator()
{
	if (!Z_Registration_Info_UClass_UDistortionInterpolator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistortionInterpolator.OuterSingleton, Z_Construct_UClass_UDistortionInterpolator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDistortionInterpolator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDistortionInterpolator);
UDistortionInterpolator::~UDistortionInterpolator() {}
// ********** End Class UDistortionInterpolator ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_DistortionInterpolator_h__Script_MoSysLensDistortion_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ DistortionInterpolationType_StaticEnum, TEXT("DistortionInterpolationType"), &Z_Registration_Info_UEnum_DistortionInterpolationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3898961006U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDistortionInterpolator, UDistortionInterpolator::StaticClass, TEXT("UDistortionInterpolator"), &Z_Registration_Info_UClass_UDistortionInterpolator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistortionInterpolator), 2741476401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_DistortionInterpolator_h__Script_MoSysLensDistortion_3452850226(TEXT("/Script/MoSysLensDistortion"),
	Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_DistortionInterpolator_h__Script_MoSysLensDistortion_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_DistortionInterpolator_h__Script_MoSysLensDistortion_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_DistortionInterpolator_h__Script_MoSysLensDistortion_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_DistortionInterpolator_h__Script_MoSysLensDistortion_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
