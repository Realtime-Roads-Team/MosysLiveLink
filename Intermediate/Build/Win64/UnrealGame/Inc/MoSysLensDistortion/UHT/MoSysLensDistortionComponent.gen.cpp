// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysLensDistortionComponent.h"
#include "MoSysLensModel.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoSysLensDistortionComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
LENSCOMPONENT_API UClass* Z_Construct_UClass_ULensComponent();
LENSCOMPONENT_API UEnum* Z_Construct_UEnum_LensComponent_EDistortionSource();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortionComponent();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortionComponent_NoRegister();
MOSYSLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FMoSysLensParameters();
UPackage* Z_Construct_UPackage__Script_MoSysLensDistortion();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoSysLensDistortionComponent Function GetCurrentLensParameters **********
struct Z_Construct_UFunction_UMoSysLensDistortionComponent_GetCurrentLensParameters_Statics
{
	struct MoSysLensDistortionComponent_eventGetCurrentLensParameters_Parms
	{
		FMoSysLensParameters LensParameters;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|Lens Distortion" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LensParameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoSysLensDistortionComponent_GetCurrentLensParameters_Statics::NewProp_LensParameters = { "LensParameters", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoSysLensDistortionComponent_eventGetCurrentLensParameters_Parms, LensParameters), Z_Construct_UScriptStruct_FMoSysLensParameters, METADATA_PARAMS(0, nullptr) }; // 3354643491
void Z_Construct_UFunction_UMoSysLensDistortionComponent_GetCurrentLensParameters_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoSysLensDistortionComponent_eventGetCurrentLensParameters_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoSysLensDistortionComponent_GetCurrentLensParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoSysLensDistortionComponent_eventGetCurrentLensParameters_Parms), &Z_Construct_UFunction_UMoSysLensDistortionComponent_GetCurrentLensParameters_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoSysLensDistortionComponent_GetCurrentLensParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysLensDistortionComponent_GetCurrentLensParameters_Statics::NewProp_LensParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysLensDistortionComponent_GetCurrentLensParameters_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLensDistortionComponent_GetCurrentLensParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoSysLensDistortionComponent_GetCurrentLensParameters_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoSysLensDistortionComponent, nullptr, "GetCurrentLensParameters", Z_Construct_UFunction_UMoSysLensDistortionComponent_GetCurrentLensParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLensDistortionComponent_GetCurrentLensParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoSysLensDistortionComponent_GetCurrentLensParameters_Statics::MoSysLensDistortionComponent_eventGetCurrentLensParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLensDistortionComponent_GetCurrentLensParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoSysLensDistortionComponent_GetCurrentLensParameters_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoSysLensDistortionComponent_GetCurrentLensParameters_Statics::MoSysLensDistortionComponent_eventGetCurrentLensParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoSysLensDistortionComponent_GetCurrentLensParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoSysLensDistortionComponent_GetCurrentLensParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoSysLensDistortionComponent::execGetCurrentLensParameters)
{
	P_GET_STRUCT_REF(FMoSysLensParameters,Z_Param_Out_LensParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCurrentLensParameters(Z_Param_Out_LensParameters);
	P_NATIVE_END;
}
// ********** End Class UMoSysLensDistortionComponent Function GetCurrentLensParameters ************

// ********** Begin Class UMoSysLensDistortionComponent Function GetUndistortOverscanFactor ********
struct Z_Construct_UFunction_UMoSysLensDistortionComponent_GetUndistortOverscanFactor_Statics
{
	struct MoSysLensDistortionComponent_eventGetUndistortOverscanFactor_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|Lens Distortion" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoSysLensDistortionComponent_GetUndistortOverscanFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoSysLensDistortionComponent_eventGetUndistortOverscanFactor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoSysLensDistortionComponent_GetUndistortOverscanFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysLensDistortionComponent_GetUndistortOverscanFactor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLensDistortionComponent_GetUndistortOverscanFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoSysLensDistortionComponent_GetUndistortOverscanFactor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoSysLensDistortionComponent, nullptr, "GetUndistortOverscanFactor", Z_Construct_UFunction_UMoSysLensDistortionComponent_GetUndistortOverscanFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLensDistortionComponent_GetUndistortOverscanFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoSysLensDistortionComponent_GetUndistortOverscanFactor_Statics::MoSysLensDistortionComponent_eventGetUndistortOverscanFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLensDistortionComponent_GetUndistortOverscanFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoSysLensDistortionComponent_GetUndistortOverscanFactor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoSysLensDistortionComponent_GetUndistortOverscanFactor_Statics::MoSysLensDistortionComponent_eventGetUndistortOverscanFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoSysLensDistortionComponent_GetUndistortOverscanFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoSysLensDistortionComponent_GetUndistortOverscanFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoSysLensDistortionComponent::execGetUndistortOverscanFactor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetUndistortOverscanFactor();
	P_NATIVE_END;
}
// ********** End Class UMoSysLensDistortionComponent Function GetUndistortOverscanFactor **********

// ********** Begin Class UMoSysLensDistortionComponent Function SetDistortionStateSource **********
struct Z_Construct_UFunction_UMoSysLensDistortionComponent_SetDistortionStateSource_Statics
{
	struct MoSysLensDistortionComponent_eventSetDistortionStateSource_Parms
	{
		EDistortionSource Source;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|Lens Distortion" },
		{ "Comment", "/** Set the distortion source setting */" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionComponent.h" },
		{ "ToolTip", "Set the distortion source setting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMoSysLensDistortionComponent_SetDistortionStateSource_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMoSysLensDistortionComponent_SetDistortionStateSource_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoSysLensDistortionComponent_eventSetDistortionStateSource_Parms, Source), Z_Construct_UEnum_LensComponent_EDistortionSource, METADATA_PARAMS(0, nullptr) }; // 217355485
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoSysLensDistortionComponent_SetDistortionStateSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysLensDistortionComponent_SetDistortionStateSource_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysLensDistortionComponent_SetDistortionStateSource_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLensDistortionComponent_SetDistortionStateSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoSysLensDistortionComponent_SetDistortionStateSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoSysLensDistortionComponent, nullptr, "SetDistortionStateSource", Z_Construct_UFunction_UMoSysLensDistortionComponent_SetDistortionStateSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLensDistortionComponent_SetDistortionStateSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoSysLensDistortionComponent_SetDistortionStateSource_Statics::MoSysLensDistortionComponent_eventSetDistortionStateSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLensDistortionComponent_SetDistortionStateSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoSysLensDistortionComponent_SetDistortionStateSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoSysLensDistortionComponent_SetDistortionStateSource_Statics::MoSysLensDistortionComponent_eventSetDistortionStateSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoSysLensDistortionComponent_SetDistortionStateSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoSysLensDistortionComponent_SetDistortionStateSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoSysLensDistortionComponent::execSetDistortionStateSource)
{
	P_GET_ENUM(EDistortionSource,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDistortionStateSource(EDistortionSource(Z_Param_Source));
	P_NATIVE_END;
}
// ********** End Class UMoSysLensDistortionComponent Function SetDistortionStateSource ************

// ********** Begin Class UMoSysLensDistortionComponent ********************************************
void UMoSysLensDistortionComponent::StaticRegisterNativesUMoSysLensDistortionComponent()
{
	UClass* Class = UMoSysLensDistortionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentLensParameters", &UMoSysLensDistortionComponent::execGetCurrentLensParameters },
		{ "GetUndistortOverscanFactor", &UMoSysLensDistortionComponent::execGetUndistortOverscanFactor },
		{ "SetDistortionStateSource", &UMoSysLensDistortionComponent::execSetDistortionStateSource },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoSysLensDistortionComponent;
UClass* UMoSysLensDistortionComponent::GetPrivateStaticClass()
{
	using TClass = UMoSysLensDistortionComponent;
	if (!Z_Registration_Info_UClass_UMoSysLensDistortionComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoSysLensDistortionComponent"),
			Z_Registration_Info_UClass_UMoSysLensDistortionComponent.InnerSingleton,
			StaticRegisterNativesUMoSysLensDistortionComponent,
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
	return Z_Registration_Info_UClass_UMoSysLensDistortionComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoSysLensDistortionComponent_NoRegister()
{
	return UMoSysLensDistortionComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoSysLensDistortionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Tags Activation Cooking AssetUserData Collision" },
		{ "IncludePath", "MoSysLensDistortionComponent.h" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldUpdateFilmback_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideRawFocus_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawFocus_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawZoom_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timecode_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyOverscanToFOV_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyEPDToFocalDistance_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "DisplayName", "Apply EPD to Focal Distance" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverscanFactorOverride_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentOverscanFactor_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TStopScalingFactor_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FxScale_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CxOffset_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CyOffset_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EPDOffset_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ShouldUpdateFilmback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldUpdateFilmback;
	static void NewProp_OverrideRawFocus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverrideRawFocus;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RawFocus;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RawZoom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Timecode;
	static void NewProp_bApplyOverscanToFOV_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyOverscanToFOV;
	static void NewProp_bApplyEPDToFocalDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyEPDToFocalDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverscanFactorOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentOverscanFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TStopScalingFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FxScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CxOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CyOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EPDOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoSysLensDistortionComponent_GetCurrentLensParameters, "GetCurrentLensParameters" }, // 3999995443
		{ &Z_Construct_UFunction_UMoSysLensDistortionComponent_GetUndistortOverscanFactor, "GetUndistortOverscanFactor" }, // 2842460185
		{ &Z_Construct_UFunction_UMoSysLensDistortionComponent_SetDistortionStateSource, "SetDistortionStateSource" }, // 4246985655
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoSysLensDistortionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_ShouldUpdateFilmback_SetBit(void* Obj)
{
	((UMoSysLensDistortionComponent*)Obj)->ShouldUpdateFilmback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_ShouldUpdateFilmback = { "ShouldUpdateFilmback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysLensDistortionComponent), &Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_ShouldUpdateFilmback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldUpdateFilmback_MetaData), NewProp_ShouldUpdateFilmback_MetaData) };
void Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_OverrideRawFocus_SetBit(void* Obj)
{
	((UMoSysLensDistortionComponent*)Obj)->OverrideRawFocus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_OverrideRawFocus = { "OverrideRawFocus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysLensDistortionComponent), &Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_OverrideRawFocus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideRawFocus_MetaData), NewProp_OverrideRawFocus_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_RawFocus = { "RawFocus", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLensDistortionComponent, RawFocus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawFocus_MetaData), NewProp_RawFocus_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_RawZoom = { "RawZoom", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLensDistortionComponent, RawZoom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawZoom_MetaData), NewProp_RawZoom_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_Timecode = { "Timecode", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLensDistortionComponent, Timecode), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timecode_MetaData), NewProp_Timecode_MetaData) };
void Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_bApplyOverscanToFOV_SetBit(void* Obj)
{
	((UMoSysLensDistortionComponent*)Obj)->bApplyOverscanToFOV = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_bApplyOverscanToFOV = { "bApplyOverscanToFOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysLensDistortionComponent), &Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_bApplyOverscanToFOV_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyOverscanToFOV_MetaData), NewProp_bApplyOverscanToFOV_MetaData) };
void Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_bApplyEPDToFocalDistance_SetBit(void* Obj)
{
	((UMoSysLensDistortionComponent*)Obj)->bApplyEPDToFocalDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_bApplyEPDToFocalDistance = { "bApplyEPDToFocalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysLensDistortionComponent), &Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_bApplyEPDToFocalDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyEPDToFocalDistance_MetaData), NewProp_bApplyEPDToFocalDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_OverscanFactorOverride = { "OverscanFactorOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLensDistortionComponent, OverscanFactorOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverscanFactorOverride_MetaData), NewProp_OverscanFactorOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_CurrentOverscanFactor = { "CurrentOverscanFactor", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLensDistortionComponent, CurrentOverscanFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentOverscanFactor_MetaData), NewProp_CurrentOverscanFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_TStopScalingFactor = { "TStopScalingFactor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLensDistortionComponent, TStopScalingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TStopScalingFactor_MetaData), NewProp_TStopScalingFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_FxScale = { "FxScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLensDistortionComponent, FxScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FxScale_MetaData), NewProp_FxScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_CxOffset = { "CxOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLensDistortionComponent, CxOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CxOffset_MetaData), NewProp_CxOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_CyOffset = { "CyOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLensDistortionComponent, CyOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CyOffset_MetaData), NewProp_CyOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_EPDOffset = { "EPDOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLensDistortionComponent, EPDOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EPDOffset_MetaData), NewProp_EPDOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0020080200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLensDistortionComponent, Parameters), Z_Construct_UScriptStruct_FMoSysLensParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 3354643491
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_ShouldUpdateFilmback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_OverrideRawFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_RawFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_RawZoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_Timecode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_bApplyOverscanToFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_bApplyEPDToFocalDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_OverscanFactorOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_CurrentOverscanFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_TStopScalingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_FxScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_CxOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_CyOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_EPDOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULensComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysLensDistortion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::ClassParams = {
	&UMoSysLensDistortionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysLensDistortionComponent()
{
	if (!Z_Registration_Info_UClass_UMoSysLensDistortionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysLensDistortionComponent.OuterSingleton, Z_Construct_UClass_UMoSysLensDistortionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysLensDistortionComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLensDistortionComponent);
UMoSysLensDistortionComponent::~UMoSysLensDistortionComponent() {}
// ********** End Class UMoSysLensDistortionComponent **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h__Script_MoSysLensDistortion_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoSysLensDistortionComponent, UMoSysLensDistortionComponent::StaticClass, TEXT("UMoSysLensDistortionComponent"), &Z_Registration_Info_UClass_UMoSysLensDistortionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLensDistortionComponent), 293230652U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h__Script_MoSysLensDistortion_2290190212(TEXT("/Script/MoSysLensDistortion"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h__Script_MoSysLensDistortion_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h__Script_MoSysLensDistortion_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
