// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysLensDistortion/Public/MoSysLensDistortionUpdaterComponent.h"
#include "MoSysLensDistortion/Public/MoSysLensModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoSysLensDistortionUpdaterComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent_NoRegister();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortUpdater_NoRegister();
MOSYSLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FMoSysLensParameters();
UPackage* Z_Construct_UPackage__Script_MoSysLensDistortion();
// End Cross Module References

// Begin Class UMoSysLensDistortionUpdaterComponent
void UMoSysLensDistortionUpdaterComponent::StaticRegisterNativesUMoSysLensDistortionUpdaterComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoSysLensDistortionUpdaterComponent);
UClass* Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent_NoRegister()
{
	return UMoSysLensDistortionUpdaterComponent::StaticClass();
}
struct Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "IncludePath", "MoSysLensDistortionUpdaterComponent.h" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionUpdaterComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLiveDistortion_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionUpdaterComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LensParameters_MetaData[] = {
		{ "Category", "Mo-Sys|LensDistortion" },
		{ "Comment", "//~ End IMoSysLensDistortUpdater interface\n" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionUpdaterComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseLiveDistortion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLiveDistortion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LensParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoSysLensDistortionUpdaterComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent_Statics::NewProp_bUseLiveDistortion_SetBit(void* Obj)
{
	((UMoSysLensDistortionUpdaterComponent*)Obj)->bUseLiveDistortion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent_Statics::NewProp_bUseLiveDistortion = { "bUseLiveDistortion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysLensDistortionUpdaterComponent), &Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent_Statics::NewProp_bUseLiveDistortion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLiveDistortion_MetaData), NewProp_bUseLiveDistortion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent_Statics::NewProp_LensParameters = { "LensParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLensDistortionUpdaterComponent, LensParameters), Z_Construct_UScriptStruct_FMoSysLensParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LensParameters_MetaData), NewProp_LensParameters_MetaData) }; // 4190614050
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent_Statics::NewProp_bUseLiveDistortion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent_Statics::NewProp_LensParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysLensDistortion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMoSysLensDistortUpdater_NoRegister, (int32)VTABLE_OFFSET(UMoSysLensDistortionUpdaterComponent, IMoSysLensDistortUpdater), false },  // 806991005
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent_Statics::ClassParams = {
	&UMoSysLensDistortionUpdaterComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent()
{
	if (!Z_Registration_Info_UClass_UMoSysLensDistortionUpdaterComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysLensDistortionUpdaterComponent.OuterSingleton, Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysLensDistortionUpdaterComponent.OuterSingleton;
}
template<> MOSYSLENSDISTORTION_API UClass* StaticClass<UMoSysLensDistortionUpdaterComponent>()
{
	return UMoSysLensDistortionUpdaterComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLensDistortionUpdaterComponent);
UMoSysLensDistortionUpdaterComponent::~UMoSysLensDistortionUpdaterComponent() {}
// End Class UMoSysLensDistortionUpdaterComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionUpdaterComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoSysLensDistortionUpdaterComponent, UMoSysLensDistortionUpdaterComponent::StaticClass, TEXT("UMoSysLensDistortionUpdaterComponent"), &Z_Registration_Info_UClass_UMoSysLensDistortionUpdaterComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLensDistortionUpdaterComponent), 2432309797U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionUpdaterComponent_h_781660756(TEXT("/Script/MoSysLensDistortion"),
	Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionUpdaterComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionUpdaterComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
