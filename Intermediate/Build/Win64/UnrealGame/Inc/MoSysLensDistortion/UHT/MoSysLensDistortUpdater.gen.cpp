// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysLensDistortion/Public/MoSysLensDistortUpdater.h"
#include "MoSysLensDistortion/Public/MoSysLensModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoSysLensDistortUpdater() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortUpdater();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortUpdater_NoRegister();
MOSYSLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FMoSysLensParameters();
UPackage* Z_Construct_UPackage__Script_MoSysLensDistortion();
// End Cross Module References

// Begin Interface UMoSysLensDistortUpdater Function UpdateLensDistort
struct MoSysLensDistortUpdater_eventUpdateLensDistort_Parms
{
	FMoSysLensParameters Distort;
	float FocusRaw;
	float ZoomRaw;
	FMoSysLensParameters ReturnValue;
};
FMoSysLensParameters IMoSysLensDistortUpdater::UpdateLensDistort(FMoSysLensParameters const& Distort, float FocusRaw, float ZoomRaw)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateLensDistort instead.");
	MoSysLensDistortUpdater_eventUpdateLensDistort_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMoSysLensDistortUpdater_UpdateLensDistort = FName(TEXT("UpdateLensDistort"));
FMoSysLensParameters IMoSysLensDistortUpdater::Execute_UpdateLensDistort(UObject* O, FMoSysLensParameters const& Distort, float FocusRaw, float ZoomRaw)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMoSysLensDistortUpdater::StaticClass()));
	MoSysLensDistortUpdater_eventUpdateLensDistort_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMoSysLensDistortUpdater_UpdateLensDistort);
	if (Func)
	{
		Parms.Distort=Distort;
		Parms.FocusRaw=FocusRaw;
		Parms.ZoomRaw=ZoomRaw;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMoSysLensDistortUpdater*)(O->GetNativeInterfaceAddress(UMoSysLensDistortUpdater::StaticClass())))
	{
		Parms.ReturnValue = I->UpdateLensDistort_Implementation(Distort,FocusRaw,ZoomRaw);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMoSysLensDistortUpdater_UpdateLensDistort_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys" },
		{ "Comment", "/// \\todo Consider moving focus, zoom into distortion class.\n// Not necessarily right thing to do, as may want raw f,z without distortion.\n" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortUpdater.h" },
		{ "ToolTip", "\\todo Consider moving focus, zoom into distortion class.\nNot necessarily right thing to do, as may want raw f,z without distortion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Distort;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusRaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomRaw;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoSysLensDistortUpdater_UpdateLensDistort_Statics::NewProp_Distort = { "Distort", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoSysLensDistortUpdater_eventUpdateLensDistort_Parms, Distort), Z_Construct_UScriptStruct_FMoSysLensParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distort_MetaData), NewProp_Distort_MetaData) }; // 4190614050
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoSysLensDistortUpdater_UpdateLensDistort_Statics::NewProp_FocusRaw = { "FocusRaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoSysLensDistortUpdater_eventUpdateLensDistort_Parms, FocusRaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoSysLensDistortUpdater_UpdateLensDistort_Statics::NewProp_ZoomRaw = { "ZoomRaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoSysLensDistortUpdater_eventUpdateLensDistort_Parms, ZoomRaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoSysLensDistortUpdater_UpdateLensDistort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoSysLensDistortUpdater_eventUpdateLensDistort_Parms, ReturnValue), Z_Construct_UScriptStruct_FMoSysLensParameters, METADATA_PARAMS(0, nullptr) }; // 4190614050
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoSysLensDistortUpdater_UpdateLensDistort_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysLensDistortUpdater_UpdateLensDistort_Statics::NewProp_Distort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysLensDistortUpdater_UpdateLensDistort_Statics::NewProp_FocusRaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysLensDistortUpdater_UpdateLensDistort_Statics::NewProp_ZoomRaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysLensDistortUpdater_UpdateLensDistort_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLensDistortUpdater_UpdateLensDistort_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoSysLensDistortUpdater_UpdateLensDistort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoSysLensDistortUpdater, nullptr, "UpdateLensDistort", nullptr, nullptr, Z_Construct_UFunction_UMoSysLensDistortUpdater_UpdateLensDistort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLensDistortUpdater_UpdateLensDistort_Statics::PropPointers), sizeof(MoSysLensDistortUpdater_eventUpdateLensDistort_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLensDistortUpdater_UpdateLensDistort_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoSysLensDistortUpdater_UpdateLensDistort_Statics::Function_MetaDataParams) };
static_assert(sizeof(MoSysLensDistortUpdater_eventUpdateLensDistort_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoSysLensDistortUpdater_UpdateLensDistort()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoSysLensDistortUpdater_UpdateLensDistort_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMoSysLensDistortUpdater::execUpdateLensDistort)
{
	P_GET_STRUCT_REF(FMoSysLensParameters,Z_Param_Out_Distort);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FocusRaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomRaw);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMoSysLensParameters*)Z_Param__Result=P_THIS->UpdateLensDistort_Implementation(Z_Param_Out_Distort,Z_Param_FocusRaw,Z_Param_ZoomRaw);
	P_NATIVE_END;
}
// End Interface UMoSysLensDistortUpdater Function UpdateLensDistort

// Begin Interface UMoSysLensDistortUpdater
void UMoSysLensDistortUpdater::StaticRegisterNativesUMoSysLensDistortUpdater()
{
	UClass* Class = UMoSysLensDistortUpdater::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateLensDistort", &IMoSysLensDistortUpdater::execUpdateLensDistort },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoSysLensDistortUpdater);
UClass* Z_Construct_UClass_UMoSysLensDistortUpdater_NoRegister()
{
	return UMoSysLensDistortUpdater::StaticClass();
}
struct Z_Construct_UClass_UMoSysLensDistortUpdater_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortUpdater.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoSysLensDistortUpdater_UpdateLensDistort, "UpdateLensDistort" }, // 3452776615
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMoSysLensDistortUpdater>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoSysLensDistortUpdater_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysLensDistortion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensDistortUpdater_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysLensDistortUpdater_Statics::ClassParams = {
	&UMoSysLensDistortUpdater::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensDistortUpdater_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysLensDistortUpdater_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysLensDistortUpdater()
{
	if (!Z_Registration_Info_UClass_UMoSysLensDistortUpdater.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysLensDistortUpdater.OuterSingleton, Z_Construct_UClass_UMoSysLensDistortUpdater_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysLensDistortUpdater.OuterSingleton;
}
template<> MOSYSLENSDISTORTION_API UClass* StaticClass<UMoSysLensDistortUpdater>()
{
	return UMoSysLensDistortUpdater::StaticClass();
}
UMoSysLensDistortUpdater::UMoSysLensDistortUpdater(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLensDistortUpdater);
UMoSysLensDistortUpdater::~UMoSysLensDistortUpdater() {}
// End Interface UMoSysLensDistortUpdater

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdater_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoSysLensDistortUpdater, UMoSysLensDistortUpdater::StaticClass, TEXT("UMoSysLensDistortUpdater"), &Z_Registration_Info_UClass_UMoSysLensDistortUpdater, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLensDistortUpdater), 806991005U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdater_h_2044128447(TEXT("/Script/MoSysLensDistortion"),
	Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdater_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdater_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
