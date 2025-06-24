// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysTracking/Public/MoSysLiveLinkSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoSysLiveLinkSourceSettings() {}

// Begin Cross Module References
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkAudioDemodSourceSettings();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkAudioDemodSourceSettings_NoRegister();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkSerialSourceSettings();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkSerialSourceSettings_NoRegister();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkSourceSettings();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkSourceSettings_NoRegister();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkUDPSourceSettings();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkUDPSourceSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_MoSysTracking();
// End Cross Module References

// Begin Class UMoSysLiveLinkSourceSettings
void UMoSysLiveLinkSourceSettings::StaticRegisterNativesUMoSysLiveLinkSourceSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoSysLiveLinkSourceSettings);
UClass* Z_Construct_UClass_UMoSysLiveLinkSourceSettings_NoRegister()
{
	return UMoSysLiveLinkSourceSettings::StaticClass();
}
struct Z_Construct_UClass_UMoSysLiveLinkSourceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MoSysLiveLinkSourceSettings.h" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkSourceSettings.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoSysLiveLinkSourceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoSysLiveLinkSourceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkSourceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysLiveLinkSourceSettings_Statics::ClassParams = {
	&UMoSysLiveLinkSourceSettings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkSourceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysLiveLinkSourceSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysLiveLinkSourceSettings()
{
	if (!Z_Registration_Info_UClass_UMoSysLiveLinkSourceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysLiveLinkSourceSettings.OuterSingleton, Z_Construct_UClass_UMoSysLiveLinkSourceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysLiveLinkSourceSettings.OuterSingleton;
}
template<> MOSYSTRACKING_API UClass* StaticClass<UMoSysLiveLinkSourceSettings>()
{
	return UMoSysLiveLinkSourceSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLiveLinkSourceSettings);
UMoSysLiveLinkSourceSettings::~UMoSysLiveLinkSourceSettings() {}
// End Class UMoSysLiveLinkSourceSettings

// Begin Class UMoSysLiveLinkUDPSourceSettings
void UMoSysLiveLinkUDPSourceSettings::StaticRegisterNativesUMoSysLiveLinkUDPSourceSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoSysLiveLinkUDPSourceSettings);
UClass* Z_Construct_UClass_UMoSysLiveLinkUDPSourceSettings_NoRegister()
{
	return UMoSysLiveLinkUDPSourceSettings::StaticClass();
}
struct Z_Construct_UClass_UMoSysLiveLinkUDPSourceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MoSysLiveLinkSourceSettings.h" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkSourceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "DisplayName", "Network Interface IP Address" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkSourceSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoSysLiveLinkUDPSourceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoSysLiveLinkUDPSourceSettings_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLiveLinkUDPSourceSettings, IPAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IPAddress_MetaData), NewProp_IPAddress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoSysLiveLinkUDPSourceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkUDPSourceSettings_Statics::NewProp_IPAddress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkUDPSourceSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoSysLiveLinkUDPSourceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMoSysLiveLinkSourceSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkUDPSourceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysLiveLinkUDPSourceSettings_Statics::ClassParams = {
	&UMoSysLiveLinkUDPSourceSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMoSysLiveLinkUDPSourceSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkUDPSourceSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkUDPSourceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysLiveLinkUDPSourceSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysLiveLinkUDPSourceSettings()
{
	if (!Z_Registration_Info_UClass_UMoSysLiveLinkUDPSourceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysLiveLinkUDPSourceSettings.OuterSingleton, Z_Construct_UClass_UMoSysLiveLinkUDPSourceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysLiveLinkUDPSourceSettings.OuterSingleton;
}
template<> MOSYSTRACKING_API UClass* StaticClass<UMoSysLiveLinkUDPSourceSettings>()
{
	return UMoSysLiveLinkUDPSourceSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLiveLinkUDPSourceSettings);
UMoSysLiveLinkUDPSourceSettings::~UMoSysLiveLinkUDPSourceSettings() {}
// End Class UMoSysLiveLinkUDPSourceSettings

// Begin Class UMoSysLiveLinkSerialSourceSettings
void UMoSysLiveLinkSerialSourceSettings::StaticRegisterNativesUMoSysLiveLinkSerialSourceSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoSysLiveLinkSerialSourceSettings);
UClass* Z_Construct_UClass_UMoSysLiveLinkSerialSourceSettings_NoRegister()
{
	return UMoSysLiveLinkSerialSourceSettings::StaticClass();
}
struct Z_Construct_UClass_UMoSysLiveLinkSerialSourceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MoSysLiveLinkSourceSettings.h" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkSourceSettings.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoSysLiveLinkSerialSourceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoSysLiveLinkSerialSourceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMoSysLiveLinkSourceSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkSerialSourceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysLiveLinkSerialSourceSettings_Statics::ClassParams = {
	&UMoSysLiveLinkSerialSourceSettings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkSerialSourceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysLiveLinkSerialSourceSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysLiveLinkSerialSourceSettings()
{
	if (!Z_Registration_Info_UClass_UMoSysLiveLinkSerialSourceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysLiveLinkSerialSourceSettings.OuterSingleton, Z_Construct_UClass_UMoSysLiveLinkSerialSourceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysLiveLinkSerialSourceSettings.OuterSingleton;
}
template<> MOSYSTRACKING_API UClass* StaticClass<UMoSysLiveLinkSerialSourceSettings>()
{
	return UMoSysLiveLinkSerialSourceSettings::StaticClass();
}
UMoSysLiveLinkSerialSourceSettings::UMoSysLiveLinkSerialSourceSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLiveLinkSerialSourceSettings);
UMoSysLiveLinkSerialSourceSettings::~UMoSysLiveLinkSerialSourceSettings() {}
// End Class UMoSysLiveLinkSerialSourceSettings

// Begin Class UMoSysLiveLinkAudioDemodSourceSettings
void UMoSysLiveLinkAudioDemodSourceSettings::StaticRegisterNativesUMoSysLiveLinkAudioDemodSourceSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoSysLiveLinkAudioDemodSourceSettings);
UClass* Z_Construct_UClass_UMoSysLiveLinkAudioDemodSourceSettings_NoRegister()
{
	return UMoSysLiveLinkAudioDemodSourceSettings::StaticClass();
}
struct Z_Construct_UClass_UMoSysLiveLinkAudioDemodSourceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MoSysLiveLinkSourceSettings.h" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkSourceSettings.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoSysLiveLinkAudioDemodSourceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoSysLiveLinkAudioDemodSourceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMoSysLiveLinkSourceSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkAudioDemodSourceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysLiveLinkAudioDemodSourceSettings_Statics::ClassParams = {
	&UMoSysLiveLinkAudioDemodSourceSettings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkAudioDemodSourceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysLiveLinkAudioDemodSourceSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysLiveLinkAudioDemodSourceSettings()
{
	if (!Z_Registration_Info_UClass_UMoSysLiveLinkAudioDemodSourceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysLiveLinkAudioDemodSourceSettings.OuterSingleton, Z_Construct_UClass_UMoSysLiveLinkAudioDemodSourceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysLiveLinkAudioDemodSourceSettings.OuterSingleton;
}
template<> MOSYSTRACKING_API UClass* StaticClass<UMoSysLiveLinkAudioDemodSourceSettings>()
{
	return UMoSysLiveLinkAudioDemodSourceSettings::StaticClass();
}
UMoSysLiveLinkAudioDemodSourceSettings::UMoSysLiveLinkAudioDemodSourceSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLiveLinkAudioDemodSourceSettings);
UMoSysLiveLinkAudioDemodSourceSettings::~UMoSysLiveLinkAudioDemodSourceSettings() {}
// End Class UMoSysLiveLinkAudioDemodSourceSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkSourceSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoSysLiveLinkSourceSettings, UMoSysLiveLinkSourceSettings::StaticClass, TEXT("UMoSysLiveLinkSourceSettings"), &Z_Registration_Info_UClass_UMoSysLiveLinkSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLiveLinkSourceSettings), 854378239U) },
		{ Z_Construct_UClass_UMoSysLiveLinkUDPSourceSettings, UMoSysLiveLinkUDPSourceSettings::StaticClass, TEXT("UMoSysLiveLinkUDPSourceSettings"), &Z_Registration_Info_UClass_UMoSysLiveLinkUDPSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLiveLinkUDPSourceSettings), 3026234315U) },
		{ Z_Construct_UClass_UMoSysLiveLinkSerialSourceSettings, UMoSysLiveLinkSerialSourceSettings::StaticClass, TEXT("UMoSysLiveLinkSerialSourceSettings"), &Z_Registration_Info_UClass_UMoSysLiveLinkSerialSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLiveLinkSerialSourceSettings), 40408980U) },
		{ Z_Construct_UClass_UMoSysLiveLinkAudioDemodSourceSettings, UMoSysLiveLinkAudioDemodSourceSettings::StaticClass, TEXT("UMoSysLiveLinkAudioDemodSourceSettings"), &Z_Registration_Info_UClass_UMoSysLiveLinkAudioDemodSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLiveLinkAudioDemodSourceSettings), 2131976256U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkSourceSettings_h_1319136612(TEXT("/Script/MoSysTracking"),
	Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkSourceSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
