// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysLensDistortion/Public/MoSysLensDistortUpdatable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoSysLensDistortUpdatable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortUpdatable();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortUpdatable_NoRegister();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortUpdater_NoRegister();
UPackage* Z_Construct_UPackage__Script_MoSysLensDistortion();
// End Cross Module References

// Begin Interface UMoSysLensDistortUpdatable Function RegisterLensDistortUpdater
struct MoSysLensDistortUpdatable_eventRegisterLensDistortUpdater_Parms
{
	TScriptInterface<IMoSysLensDistortUpdater> InUpdater;
};
void IMoSysLensDistortUpdatable::RegisterLensDistortUpdater(TScriptInterface<IMoSysLensDistortUpdater> const& InUpdater)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RegisterLensDistortUpdater instead.");
}
static FName NAME_UMoSysLensDistortUpdatable_RegisterLensDistortUpdater = FName(TEXT("RegisterLensDistortUpdater"));
void IMoSysLensDistortUpdatable::Execute_RegisterLensDistortUpdater(UObject* O, TScriptInterface<IMoSysLensDistortUpdater> const& InUpdater)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMoSysLensDistortUpdatable::StaticClass()));
	MoSysLensDistortUpdatable_eventRegisterLensDistortUpdater_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMoSysLensDistortUpdatable_RegisterLensDistortUpdater);
	if (Func)
	{
		Parms.InUpdater=InUpdater;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMoSysLensDistortUpdatable*)(O->GetNativeInterfaceAddress(UMoSysLensDistortUpdatable::StaticClass())))
	{
		I->RegisterLensDistortUpdater_Implementation(InUpdater);
	}
}
struct Z_Construct_UFunction_UMoSysLensDistortUpdatable_RegisterLensDistortUpdater_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortUpdatable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InUpdater_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InUpdater;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMoSysLensDistortUpdatable_RegisterLensDistortUpdater_Statics::NewProp_InUpdater = { "InUpdater", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoSysLensDistortUpdatable_eventRegisterLensDistortUpdater_Parms, InUpdater), Z_Construct_UClass_UMoSysLensDistortUpdater_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InUpdater_MetaData), NewProp_InUpdater_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoSysLensDistortUpdatable_RegisterLensDistortUpdater_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysLensDistortUpdatable_RegisterLensDistortUpdater_Statics::NewProp_InUpdater,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLensDistortUpdatable_RegisterLensDistortUpdater_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoSysLensDistortUpdatable_RegisterLensDistortUpdater_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoSysLensDistortUpdatable, nullptr, "RegisterLensDistortUpdater", nullptr, nullptr, Z_Construct_UFunction_UMoSysLensDistortUpdatable_RegisterLensDistortUpdater_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLensDistortUpdatable_RegisterLensDistortUpdater_Statics::PropPointers), sizeof(MoSysLensDistortUpdatable_eventRegisterLensDistortUpdater_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLensDistortUpdatable_RegisterLensDistortUpdater_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoSysLensDistortUpdatable_RegisterLensDistortUpdater_Statics::Function_MetaDataParams) };
static_assert(sizeof(MoSysLensDistortUpdatable_eventRegisterLensDistortUpdater_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoSysLensDistortUpdatable_RegisterLensDistortUpdater()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoSysLensDistortUpdatable_RegisterLensDistortUpdater_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMoSysLensDistortUpdatable::execRegisterLensDistortUpdater)
{
	P_GET_TINTERFACE_REF(IMoSysLensDistortUpdater,Z_Param_Out_InUpdater);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterLensDistortUpdater_Implementation(Z_Param_Out_InUpdater);
	P_NATIVE_END;
}
// End Interface UMoSysLensDistortUpdatable Function RegisterLensDistortUpdater

// Begin Interface UMoSysLensDistortUpdatable
void UMoSysLensDistortUpdatable::StaticRegisterNativesUMoSysLensDistortUpdatable()
{
	UClass* Class = UMoSysLensDistortUpdatable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterLensDistortUpdater", &IMoSysLensDistortUpdatable::execRegisterLensDistortUpdater },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoSysLensDistortUpdatable);
UClass* Z_Construct_UClass_UMoSysLensDistortUpdatable_NoRegister()
{
	return UMoSysLensDistortUpdatable::StaticClass();
}
struct Z_Construct_UClass_UMoSysLensDistortUpdatable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortUpdatable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoSysLensDistortUpdatable_RegisterLensDistortUpdater, "RegisterLensDistortUpdater" }, // 3727894360
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMoSysLensDistortUpdatable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoSysLensDistortUpdatable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysLensDistortion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensDistortUpdatable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysLensDistortUpdatable_Statics::ClassParams = {
	&UMoSysLensDistortUpdatable::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensDistortUpdatable_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysLensDistortUpdatable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysLensDistortUpdatable()
{
	if (!Z_Registration_Info_UClass_UMoSysLensDistortUpdatable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysLensDistortUpdatable.OuterSingleton, Z_Construct_UClass_UMoSysLensDistortUpdatable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysLensDistortUpdatable.OuterSingleton;
}
template<> MOSYSLENSDISTORTION_API UClass* StaticClass<UMoSysLensDistortUpdatable>()
{
	return UMoSysLensDistortUpdatable::StaticClass();
}
UMoSysLensDistortUpdatable::UMoSysLensDistortUpdatable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLensDistortUpdatable);
UMoSysLensDistortUpdatable::~UMoSysLensDistortUpdatable() {}
// End Interface UMoSysLensDistortUpdatable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoSysLensDistortUpdatable, UMoSysLensDistortUpdatable::StaticClass, TEXT("UMoSysLensDistortUpdatable"), &Z_Registration_Info_UClass_UMoSysLensDistortUpdatable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLensDistortUpdatable), 427540980U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_2792253744(TEXT("/Script/MoSysLensDistortion"),
	Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
