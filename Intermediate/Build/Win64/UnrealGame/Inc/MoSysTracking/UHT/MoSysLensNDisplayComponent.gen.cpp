// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysTracking/Public/MoSysLensNDisplayComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoSysLensNDisplayComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLensNDisplayComponent();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLensNDisplayComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MoSysTracking();
// End Cross Module References

// Begin Class UMoSysLensNDisplayComponent
void UMoSysLensNDisplayComponent::StaticRegisterNativesUMoSysLensNDisplayComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoSysLensNDisplayComponent);
UClass* Z_Construct_UClass_UMoSysLensNDisplayComponent_NoRegister()
{
	return UMoSysLensNDisplayComponent::StaticClass();
}
struct Z_Construct_UClass_UMoSysLensNDisplayComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Mo-Sys Lens NDisplay Component, only applies FOV, FD and EPD\n */" },
		{ "DisplayName", "Mo Sys Lens NDisplay Component" },
		{ "IncludePath", "MoSysLensNDisplayComponent.h" },
		{ "ModuleRelativePath", "Public/MoSysLensNDisplayComponent.h" },
		{ "ToolTip", "Mo-Sys Lens NDisplay Component, only applies FOV, FD and EPD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bManualFocus_MetaData[] = {
		{ "Category", "Mo-Sys" },
		{ "Comment", "/** Whether or not to apply focus distance */" },
		{ "ModuleRelativePath", "Public/MoSysLensNDisplayComponent.h" },
		{ "ToolTip", "Whether or not to apply focus distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bManualZoom_MetaData[] = {
		{ "Category", "Mo-Sys" },
		{ "Comment", "/** Whether or not to apply field of view - only setable if distortion is not applied */" },
		{ "ModuleRelativePath", "Public/MoSysLensNDisplayComponent.h" },
		{ "ToolTip", "Whether or not to apply field of view - only setable if distortion is not applied" },
	};
#endif // WITH_METADATA
	static void NewProp_bManualFocus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bManualFocus;
	static void NewProp_bManualZoom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bManualZoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoSysLensNDisplayComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMoSysLensNDisplayComponent_Statics::NewProp_bManualFocus_SetBit(void* Obj)
{
	((UMoSysLensNDisplayComponent*)Obj)->bManualFocus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysLensNDisplayComponent_Statics::NewProp_bManualFocus = { "bManualFocus", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysLensNDisplayComponent), &Z_Construct_UClass_UMoSysLensNDisplayComponent_Statics::NewProp_bManualFocus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bManualFocus_MetaData), NewProp_bManualFocus_MetaData) };
void Z_Construct_UClass_UMoSysLensNDisplayComponent_Statics::NewProp_bManualZoom_SetBit(void* Obj)
{
	((UMoSysLensNDisplayComponent*)Obj)->bManualZoom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysLensNDisplayComponent_Statics::NewProp_bManualZoom = { "bManualZoom", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysLensNDisplayComponent), &Z_Construct_UClass_UMoSysLensNDisplayComponent_Statics::NewProp_bManualZoom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bManualZoom_MetaData), NewProp_bManualZoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoSysLensNDisplayComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensNDisplayComponent_Statics::NewProp_bManualFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensNDisplayComponent_Statics::NewProp_bManualZoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensNDisplayComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoSysLensNDisplayComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensNDisplayComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysLensNDisplayComponent_Statics::ClassParams = {
	&UMoSysLensNDisplayComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMoSysLensNDisplayComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensNDisplayComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensNDisplayComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysLensNDisplayComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysLensNDisplayComponent()
{
	if (!Z_Registration_Info_UClass_UMoSysLensNDisplayComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysLensNDisplayComponent.OuterSingleton, Z_Construct_UClass_UMoSysLensNDisplayComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysLensNDisplayComponent.OuterSingleton;
}
template<> MOSYSTRACKING_API UClass* StaticClass<UMoSysLensNDisplayComponent>()
{
	return UMoSysLensNDisplayComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLensNDisplayComponent);
UMoSysLensNDisplayComponent::~UMoSysLensNDisplayComponent() {}
// End Class UMoSysLensNDisplayComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLensNDisplayComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoSysLensNDisplayComponent, UMoSysLensNDisplayComponent::StaticClass, TEXT("UMoSysLensNDisplayComponent"), &Z_Registration_Info_UClass_UMoSysLensNDisplayComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLensNDisplayComponent), 1955605828U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLensNDisplayComponent_h_796860584(TEXT("/Script/MoSysTracking"),
	Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLensNDisplayComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLensNDisplayComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
