// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysTracking/Public/MoSysLiveLinkRole.h"
#include "MoSysTracking/Public/MoSysTrackingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoSysLiveLinkRole() {}

// Begin Cross Module References
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkBasicRole();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkRole();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkRole_NoRegister();
MOSYSTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMoSysBlueprintData();
MOSYSTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData();
MOSYSTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMoSysStaticData();
UPackage* Z_Construct_UPackage__Script_MoSysTracking();
// End Cross Module References

// Begin ScriptStruct FLiveLinkMoSysBlueprintData
static_assert(std::is_polymorphic<FLiveLinkMoSysBlueprintData>() == std::is_polymorphic<FLiveLinkBaseBlueprintData>(), "USTRUCT FLiveLinkMoSysBlueprintData cannot be polymorphic unless super FLiveLinkBaseBlueprintData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkMoSysBlueprintData;
class UScriptStruct* FLiveLinkMoSysBlueprintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkMoSysBlueprintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkMoSysBlueprintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkMoSysBlueprintData, (UObject*)Z_Construct_UPackage__Script_MoSysTracking(), TEXT("LiveLinkMoSysBlueprintData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkMoSysBlueprintData.OuterSingleton;
}
template<> MOSYSTRACKING_API UScriptStruct* StaticStruct<FLiveLinkMoSysBlueprintData>()
{
	return FLiveLinkMoSysBlueprintData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkMoSysBlueprintData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Facility structure to handle Mo-Sys data in blueprint. Copied from LiveLinkBasicTypes.h\n */" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkRole.h" },
		{ "ToolTip", "Facility structure to handle Mo-Sys data in blueprint. Copied from LiveLinkBasicTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticData_MetaData[] = {
		{ "Category", "Mo-Sys" },
		{ "Comment", "// Static data that should not change every frame\n" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkRole.h" },
		{ "ToolTip", "Static data that should not change every frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[] = {
		{ "Category", "Mo-Sys" },
		{ "Comment", "// Dynamic data that can change every frame\n" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkRole.h" },
		{ "ToolTip", "Dynamic data that can change every frame" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkMoSysBlueprintData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkMoSysBlueprintData_Statics::NewProp_StaticData = { "StaticData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkMoSysBlueprintData, StaticData), Z_Construct_UScriptStruct_FLiveLinkMoSysStaticData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticData_MetaData), NewProp_StaticData_MetaData) }; // 3547351935
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkMoSysBlueprintData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkMoSysBlueprintData, FrameData), Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameData_MetaData), NewProp_FrameData_MetaData) }; // 295527650
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkMoSysBlueprintData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMoSysBlueprintData_Statics::NewProp_StaticData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMoSysBlueprintData_Statics::NewProp_FrameData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkMoSysBlueprintData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkMoSysBlueprintData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysTracking,
	Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
	&NewStructOps,
	"LiveLinkMoSysBlueprintData",
	Z_Construct_UScriptStruct_FLiveLinkMoSysBlueprintData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkMoSysBlueprintData_Statics::PropPointers),
	sizeof(FLiveLinkMoSysBlueprintData),
	alignof(FLiveLinkMoSysBlueprintData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkMoSysBlueprintData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkMoSysBlueprintData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMoSysBlueprintData()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkMoSysBlueprintData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkMoSysBlueprintData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkMoSysBlueprintData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkMoSysBlueprintData.InnerSingleton;
}
// End ScriptStruct FLiveLinkMoSysBlueprintData

// Begin Class UMoSysLiveLinkRole
void UMoSysLiveLinkRole::StaticRegisterNativesUMoSysLiveLinkRole()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoSysLiveLinkRole);
UClass* Z_Construct_UClass_UMoSysLiveLinkRole_NoRegister()
{
	return UMoSysLiveLinkRole::StaticClass();
}
struct Z_Construct_UClass_UMoSysLiveLinkRole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Role for Mo-Sys subjects that defines the frame data types\n */" },
		{ "IncludePath", "MoSysLiveLinkRole.h" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkRole.h" },
		{ "ToolTip", "Role for Mo-Sys subjects that defines the frame data types" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoSysLiveLinkRole>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoSysLiveLinkRole_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkBasicRole,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkRole_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysLiveLinkRole_Statics::ClassParams = {
	&UMoSysLiveLinkRole::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkRole_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysLiveLinkRole_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysLiveLinkRole()
{
	if (!Z_Registration_Info_UClass_UMoSysLiveLinkRole.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysLiveLinkRole.OuterSingleton, Z_Construct_UClass_UMoSysLiveLinkRole_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysLiveLinkRole.OuterSingleton;
}
template<> MOSYSTRACKING_API UClass* StaticClass<UMoSysLiveLinkRole>()
{
	return UMoSysLiveLinkRole::StaticClass();
}
UMoSysLiveLinkRole::UMoSysLiveLinkRole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLiveLinkRole);
UMoSysLiveLinkRole::~UMoSysLiveLinkRole() {}
// End Class UMoSysLiveLinkRole

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkRole_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveLinkMoSysBlueprintData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkMoSysBlueprintData_Statics::NewStructOps, TEXT("LiveLinkMoSysBlueprintData"), &Z_Registration_Info_UScriptStruct_LiveLinkMoSysBlueprintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkMoSysBlueprintData), 3109404741U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoSysLiveLinkRole, UMoSysLiveLinkRole::StaticClass, TEXT("UMoSysLiveLinkRole"), &Z_Registration_Info_UClass_UMoSysLiveLinkRole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLiveLinkRole), 1915106146U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkRole_h_655735638(TEXT("/Script/MoSysTracking"),
	Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkRole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkRole_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkRole_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkRole_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
