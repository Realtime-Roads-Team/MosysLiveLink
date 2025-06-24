// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DistortionEditor.h"
#include "MoSysLensModel.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDistortionEditor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UDistortionEditor();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UDistortionEditor_NoRegister();
MOSYSLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FMoSysLensParameters();
UPackage* Z_Construct_UPackage__Script_MoSysLensDistortion();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDistortionEditor Function UndistortRadius *******************************
struct Z_Construct_UFunction_UDistortionEditor_UndistortRadius_Statics
{
	struct DistortionEditor_eventUndistortRadius_Parms
	{
		float InDistortedRadius;
		float OutUndistortedRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UndistortMaths" },
		{ "Comment", "/**\n    * Undistort a radial length in mo-sys coordinates.\n    */" },
		{ "ModuleRelativePath", "Public/DistortionEditor.h" },
		{ "ToolTip", "Undistort a radial length in mo-sys coordinates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDistortedRadius_MetaData[] = {
		{ "DisplayName", "DistortedRadius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutUndistortedRadius_MetaData[] = {
		{ "DisplayName", "Undistorted Radius" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDistortedRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutUndistortedRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionEditor_UndistortRadius_Statics::NewProp_InDistortedRadius = { "InDistortedRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionEditor_eventUndistortRadius_Parms, InDistortedRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDistortedRadius_MetaData), NewProp_InDistortedRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDistortionEditor_UndistortRadius_Statics::NewProp_OutUndistortedRadius = { "OutUndistortedRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DistortionEditor_eventUndistortRadius_Parms, OutUndistortedRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutUndistortedRadius_MetaData), NewProp_OutUndistortedRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortionEditor_UndistortRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionEditor_UndistortRadius_Statics::NewProp_InDistortedRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortionEditor_UndistortRadius_Statics::NewProp_OutUndistortedRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionEditor_UndistortRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortionEditor_UndistortRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDistortionEditor, nullptr, "UndistortRadius", Z_Construct_UFunction_UDistortionEditor_UndistortRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionEditor_UndistortRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDistortionEditor_UndistortRadius_Statics::DistortionEditor_eventUndistortRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortionEditor_UndistortRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDistortionEditor_UndistortRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDistortionEditor_UndistortRadius_Statics::DistortionEditor_eventUndistortRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDistortionEditor_UndistortRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDistortionEditor_UndistortRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDistortionEditor::execUndistortRadius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDistortedRadius);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutUndistortedRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UndistortRadius(Z_Param_InDistortedRadius,Z_Param_Out_OutUndistortedRadius);
	P_NATIVE_END;
}
// ********** End Class UDistortionEditor Function UndistortRadius *********************************

// ********** Begin Class UDistortionEditor ********************************************************
void UDistortionEditor::StaticRegisterNativesUDistortionEditor()
{
	UClass* Class = UDistortionEditor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UndistortRadius", &UDistortionEditor::execUndistortRadius },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDistortionEditor;
UClass* UDistortionEditor::GetPrivateStaticClass()
{
	using TClass = UDistortionEditor;
	if (!Z_Registration_Info_UClass_UDistortionEditor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DistortionEditor"),
			Z_Registration_Info_UClass_UDistortionEditor.InnerSingleton,
			StaticRegisterNativesUDistortionEditor,
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
	return Z_Registration_Info_UClass_UDistortionEditor.InnerSingleton;
}
UClass* Z_Construct_UClass_UDistortionEditor_NoRegister()
{
	return UDistortionEditor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDistortionEditor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DistortionEditor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DistortionEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistortionCoefficients_MetaData[] = {
		{ "Category", "Lens Parameters" },
		{ "ModuleRelativePath", "Public/DistortionEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UndistortedFX_MetaData[] = {
		{ "Category", "Lens Parameters" },
		{ "ModuleRelativePath", "Public/DistortionEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedComputedFXInDistortion_MetaData[] = {
		{ "Category", "Lens Parameters" },
		{ "ModuleRelativePath", "Public/DistortionEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionCoefficients;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UndistortedFX;
	static void NewProp_bUsedComputedFXInDistortion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedComputedFXInDistortion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDistortionEditor_UndistortRadius, "UndistortRadius" }, // 1730280026
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistortionEditor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistortionEditor_Statics::NewProp_DistortionCoefficients = { "DistortionCoefficients", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistortionEditor, DistortionCoefficients), Z_Construct_UScriptStruct_FMoSysLensParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistortionCoefficients_MetaData), NewProp_DistortionCoefficients_MetaData) }; // 3354643491
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistortionEditor_Statics::NewProp_UndistortedFX = { "UndistortedFX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistortionEditor, UndistortedFX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UndistortedFX_MetaData), NewProp_UndistortedFX_MetaData) };
void Z_Construct_UClass_UDistortionEditor_Statics::NewProp_bUsedComputedFXInDistortion_SetBit(void* Obj)
{
	((UDistortionEditor*)Obj)->bUsedComputedFXInDistortion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistortionEditor_Statics::NewProp_bUsedComputedFXInDistortion = { "bUsedComputedFXInDistortion", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDistortionEditor), &Z_Construct_UClass_UDistortionEditor_Statics::NewProp_bUsedComputedFXInDistortion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedComputedFXInDistortion_MetaData), NewProp_bUsedComputedFXInDistortion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistortionEditor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistortionEditor_Statics::NewProp_DistortionCoefficients,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistortionEditor_Statics::NewProp_UndistortedFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistortionEditor_Statics::NewProp_bUsedComputedFXInDistortion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistortionEditor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDistortionEditor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysLensDistortion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistortionEditor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistortionEditor_Statics::ClassParams = {
	&UDistortionEditor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDistortionEditor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDistortionEditor_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDistortionEditor_Statics::Class_MetaDataParams), Z_Construct_UClass_UDistortionEditor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDistortionEditor()
{
	if (!Z_Registration_Info_UClass_UDistortionEditor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistortionEditor.OuterSingleton, Z_Construct_UClass_UDistortionEditor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDistortionEditor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDistortionEditor);
UDistortionEditor::~UDistortionEditor() {}
// ********** End Class UDistortionEditor **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionEditor_h__Script_MoSysLensDistortion_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDistortionEditor, UDistortionEditor::StaticClass, TEXT("UDistortionEditor"), &Z_Registration_Info_UClass_UDistortionEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistortionEditor), 2638511623U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionEditor_h__Script_MoSysLensDistortion_3529627164(TEXT("/Script/MoSysLensDistortion"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionEditor_h__Script_MoSysLensDistortion_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionEditor_h__Script_MoSysLensDistortion_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
