// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysLiveLinkSourceSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoSysLiveLinkSourceSettings() {}

// ********** Begin Cross Module References ********************************************************
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
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoSysLiveLinkSourceSettings *********************************************
void UMoSysLiveLinkSourceSettings::StaticRegisterNativesUMoSysLiveLinkSourceSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoSysLiveLinkSourceSettings;
UClass* UMoSysLiveLinkSourceSettings::GetPrivateStaticClass()
{
	using TClass = UMoSysLiveLinkSourceSettings;
	if (!Z_Registration_Info_UClass_UMoSysLiveLinkSourceSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoSysLiveLinkSourceSettings"),
			Z_Registration_Info_UClass_UMoSysLiveLinkSourceSettings.InnerSingleton,
			StaticRegisterNativesUMoSysLiveLinkSourceSettings,
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
	return Z_Registration_Info_UClass_UMoSysLiveLinkSourceSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoSysLiveLinkSourceSettings_NoRegister()
{
	return UMoSysLiveLinkSourceSettings::GetPrivateStaticClass();
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
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLiveLinkSourceSettings);
UMoSysLiveLinkSourceSettings::~UMoSysLiveLinkSourceSettings() {}
// ********** End Class UMoSysLiveLinkSourceSettings ***********************************************

// ********** Begin Class UMoSysLiveLinkUDPSourceSettings ******************************************
void UMoSysLiveLinkUDPSourceSettings::StaticRegisterNativesUMoSysLiveLinkUDPSourceSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoSysLiveLinkUDPSourceSettings;
UClass* UMoSysLiveLinkUDPSourceSettings::GetPrivateStaticClass()
{
	using TClass = UMoSysLiveLinkUDPSourceSettings;
	if (!Z_Registration_Info_UClass_UMoSysLiveLinkUDPSourceSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoSysLiveLinkUDPSourceSettings"),
			Z_Registration_Info_UClass_UMoSysLiveLinkUDPSourceSettings.InnerSingleton,
			StaticRegisterNativesUMoSysLiveLinkUDPSourceSettings,
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
	return Z_Registration_Info_UClass_UMoSysLiveLinkUDPSourceSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoSysLiveLinkUDPSourceSettings_NoRegister()
{
	return UMoSysLiveLinkUDPSourceSettings::GetPrivateStaticClass();
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
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLiveLinkUDPSourceSettings);
UMoSysLiveLinkUDPSourceSettings::~UMoSysLiveLinkUDPSourceSettings() {}
// ********** End Class UMoSysLiveLinkUDPSourceSettings ********************************************

// ********** Begin Class UMoSysLiveLinkSerialSourceSettings ***************************************
void UMoSysLiveLinkSerialSourceSettings::StaticRegisterNativesUMoSysLiveLinkSerialSourceSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoSysLiveLinkSerialSourceSettings;
UClass* UMoSysLiveLinkSerialSourceSettings::GetPrivateStaticClass()
{
	using TClass = UMoSysLiveLinkSerialSourceSettings;
	if (!Z_Registration_Info_UClass_UMoSysLiveLinkSerialSourceSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoSysLiveLinkSerialSourceSettings"),
			Z_Registration_Info_UClass_UMoSysLiveLinkSerialSourceSettings.InnerSingleton,
			StaticRegisterNativesUMoSysLiveLinkSerialSourceSettings,
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
	return Z_Registration_Info_UClass_UMoSysLiveLinkSerialSourceSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoSysLiveLinkSerialSourceSettings_NoRegister()
{
	return UMoSysLiveLinkSerialSourceSettings::GetPrivateStaticClass();
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
UMoSysLiveLinkSerialSourceSettings::UMoSysLiveLinkSerialSourceSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLiveLinkSerialSourceSettings);
UMoSysLiveLinkSerialSourceSettings::~UMoSysLiveLinkSerialSourceSettings() {}
// ********** End Class UMoSysLiveLinkSerialSourceSettings *****************************************

// ********** Begin Class UMoSysLiveLinkAudioDemodSourceSettings ***********************************
void UMoSysLiveLinkAudioDemodSourceSettings::StaticRegisterNativesUMoSysLiveLinkAudioDemodSourceSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoSysLiveLinkAudioDemodSourceSettings;
UClass* UMoSysLiveLinkAudioDemodSourceSettings::GetPrivateStaticClass()
{
	using TClass = UMoSysLiveLinkAudioDemodSourceSettings;
	if (!Z_Registration_Info_UClass_UMoSysLiveLinkAudioDemodSourceSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoSysLiveLinkAudioDemodSourceSettings"),
			Z_Registration_Info_UClass_UMoSysLiveLinkAudioDemodSourceSettings.InnerSingleton,
			StaticRegisterNativesUMoSysLiveLinkAudioDemodSourceSettings,
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
	return Z_Registration_Info_UClass_UMoSysLiveLinkAudioDemodSourceSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoSysLiveLinkAudioDemodSourceSettings_NoRegister()
{
	return UMoSysLiveLinkAudioDemodSourceSettings::GetPrivateStaticClass();
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
UMoSysLiveLinkAudioDemodSourceSettings::UMoSysLiveLinkAudioDemodSourceSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLiveLinkAudioDemodSourceSettings);
UMoSysLiveLinkAudioDemodSourceSettings::~UMoSysLiveLinkAudioDemodSourceSettings() {}
// ********** End Class UMoSysLiveLinkAudioDemodSourceSettings *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkSourceSettings_h__Script_MoSysTracking_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoSysLiveLinkSourceSettings, UMoSysLiveLinkSourceSettings::StaticClass, TEXT("UMoSysLiveLinkSourceSettings"), &Z_Registration_Info_UClass_UMoSysLiveLinkSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLiveLinkSourceSettings), 4194371339U) },
		{ Z_Construct_UClass_UMoSysLiveLinkUDPSourceSettings, UMoSysLiveLinkUDPSourceSettings::StaticClass, TEXT("UMoSysLiveLinkUDPSourceSettings"), &Z_Registration_Info_UClass_UMoSysLiveLinkUDPSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLiveLinkUDPSourceSettings), 537717987U) },
		{ Z_Construct_UClass_UMoSysLiveLinkSerialSourceSettings, UMoSysLiveLinkSerialSourceSettings::StaticClass, TEXT("UMoSysLiveLinkSerialSourceSettings"), &Z_Registration_Info_UClass_UMoSysLiveLinkSerialSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLiveLinkSerialSourceSettings), 428066770U) },
		{ Z_Construct_UClass_UMoSysLiveLinkAudioDemodSourceSettings, UMoSysLiveLinkAudioDemodSourceSettings::StaticClass, TEXT("UMoSysLiveLinkAudioDemodSourceSettings"), &Z_Registration_Info_UClass_UMoSysLiveLinkAudioDemodSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLiveLinkAudioDemodSourceSettings), 65730221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkSourceSettings_h__Script_MoSysTracking_2142764582(TEXT("/Script/MoSysTracking"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkSourceSettings_h__Script_MoSysTracking_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkSourceSettings_h__Script_MoSysTracking_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
