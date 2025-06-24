// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysLiveLinkSubjectSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoSysLiveLinkSubjectSettings() {}

// ********** Begin Cross Module References ********************************************************
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSubjectSettings();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkSubjectSettings();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkSubjectSettings_NoRegister();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysSerialSubjectSettings();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysSerialSubjectSettings_NoRegister();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysUDPSubjectSettings();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysUDPSubjectSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_MoSysTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoSysLiveLinkSubjectSettings ********************************************
void UMoSysLiveLinkSubjectSettings::StaticRegisterNativesUMoSysLiveLinkSubjectSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoSysLiveLinkSubjectSettings;
UClass* UMoSysLiveLinkSubjectSettings::GetPrivateStaticClass()
{
	using TClass = UMoSysLiveLinkSubjectSettings;
	if (!Z_Registration_Info_UClass_UMoSysLiveLinkSubjectSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoSysLiveLinkSubjectSettings"),
			Z_Registration_Info_UClass_UMoSysLiveLinkSubjectSettings.InnerSingleton,
			StaticRegisterNativesUMoSysLiveLinkSubjectSettings,
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
	return Z_Registration_Info_UClass_UMoSysLiveLinkSubjectSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoSysLiveLinkSubjectSettings_NoRegister()
{
	return UMoSysLiveLinkSubjectSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoSysLiveLinkSubjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MoSysLiveLinkSubjectSettings.h" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkSubjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingStatus_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current Status. */" },
#endif
		{ "ModuleRelativePath", "Public/MoSysLiveLinkSubjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current Status." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoSysLiveLinkSubjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardwareID_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkSubjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TrackingStatus;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HardwareID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoSysLiveLinkSubjectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoSysLiveLinkSubjectSettings_Statics::NewProp_TrackingStatus = { "TrackingStatus", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLiveLinkSubjectSettings, TrackingStatus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingStatus_MetaData), NewProp_TrackingStatus_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMoSysLiveLinkSubjectSettings_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLiveLinkSubjectSettings, SubjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubjectName_MetaData), NewProp_SubjectName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoSysLiveLinkSubjectSettings_Statics::NewProp_HardwareID = { "HardwareID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLiveLinkSubjectSettings, HardwareID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardwareID_MetaData), NewProp_HardwareID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoSysLiveLinkSubjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkSubjectSettings_Statics::NewProp_TrackingStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkSubjectSettings_Statics::NewProp_SubjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkSubjectSettings_Statics::NewProp_HardwareID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkSubjectSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoSysLiveLinkSubjectSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSubjectSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkSubjectSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysLiveLinkSubjectSettings_Statics::ClassParams = {
	&UMoSysLiveLinkSubjectSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMoSysLiveLinkSubjectSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkSubjectSettings_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkSubjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysLiveLinkSubjectSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysLiveLinkSubjectSettings()
{
	if (!Z_Registration_Info_UClass_UMoSysLiveLinkSubjectSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysLiveLinkSubjectSettings.OuterSingleton, Z_Construct_UClass_UMoSysLiveLinkSubjectSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysLiveLinkSubjectSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLiveLinkSubjectSettings);
UMoSysLiveLinkSubjectSettings::~UMoSysLiveLinkSubjectSettings() {}
// ********** End Class UMoSysLiveLinkSubjectSettings **********************************************

// ********** Begin Class UMoSysUDPSubjectSettings *************************************************
void UMoSysUDPSubjectSettings::StaticRegisterNativesUMoSysUDPSubjectSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoSysUDPSubjectSettings;
UClass* UMoSysUDPSubjectSettings::GetPrivateStaticClass()
{
	using TClass = UMoSysUDPSubjectSettings;
	if (!Z_Registration_Info_UClass_UMoSysUDPSubjectSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoSysUDPSubjectSettings"),
			Z_Registration_Info_UClass_UMoSysUDPSubjectSettings.InnerSingleton,
			StaticRegisterNativesUMoSysUDPSubjectSettings,
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
	return Z_Registration_Info_UClass_UMoSysUDPSubjectSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoSysUDPSubjectSettings_NoRegister()
{
	return UMoSysUDPSubjectSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoSysUDPSubjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Subject Settings for UDP Mode\n */" },
#endif
		{ "IncludePath", "MoSysLiveLinkSubjectSettings.h" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkSubjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subject Settings for UDP Mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*The UDP port for udp communications */" },
#endif
		{ "ModuleRelativePath", "Public/MoSysLiveLinkSubjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The UDP port for udp communications" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldPort_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoSysLiveLinkSubjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldPort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoSysUDPSubjectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoSysUDPSubjectSettings_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysUDPSubjectSettings, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoSysUDPSubjectSettings_Statics::NewProp_OldPort = { "OldPort", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysUDPSubjectSettings, OldPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldPort_MetaData), NewProp_OldPort_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoSysUDPSubjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysUDPSubjectSettings_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysUDPSubjectSettings_Statics::NewProp_OldPort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysUDPSubjectSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoSysUDPSubjectSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMoSysLiveLinkSubjectSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysUDPSubjectSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysUDPSubjectSettings_Statics::ClassParams = {
	&UMoSysUDPSubjectSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMoSysUDPSubjectSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysUDPSubjectSettings_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysUDPSubjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysUDPSubjectSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysUDPSubjectSettings()
{
	if (!Z_Registration_Info_UClass_UMoSysUDPSubjectSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysUDPSubjectSettings.OuterSingleton, Z_Construct_UClass_UMoSysUDPSubjectSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysUDPSubjectSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysUDPSubjectSettings);
UMoSysUDPSubjectSettings::~UMoSysUDPSubjectSettings() {}
// ********** End Class UMoSysUDPSubjectSettings ***************************************************

// ********** Begin Class UMoSysSerialSubjectSettings **********************************************
void UMoSysSerialSubjectSettings::StaticRegisterNativesUMoSysSerialSubjectSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoSysSerialSubjectSettings;
UClass* UMoSysSerialSubjectSettings::GetPrivateStaticClass()
{
	using TClass = UMoSysSerialSubjectSettings;
	if (!Z_Registration_Info_UClass_UMoSysSerialSubjectSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoSysSerialSubjectSettings"),
			Z_Registration_Info_UClass_UMoSysSerialSubjectSettings.InnerSingleton,
			StaticRegisterNativesUMoSysSerialSubjectSettings,
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
	return Z_Registration_Info_UClass_UMoSysSerialSubjectSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoSysSerialSubjectSettings_NoRegister()
{
	return UMoSysSerialSubjectSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoSysSerialSubjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Subject Settings for Serial Mode\n */" },
#endif
		{ "IncludePath", "MoSysLiveLinkSubjectSettings.h" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkSubjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subject Settings for Serial Mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComPort_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Serial port for serial communications. */" },
#endif
		{ "ModuleRelativePath", "Public/MoSysLiveLinkSubjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Serial port for serial communications." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComPortNum_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoSysLiveLinkSubjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldComPortNum_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoSysLiveLinkSubjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ComPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComPortNum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldComPortNum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoSysSerialSubjectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoSysSerialSubjectSettings_Statics::NewProp_ComPort = { "ComPort", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysSerialSubjectSettings, ComPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComPort_MetaData), NewProp_ComPort_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoSysSerialSubjectSettings_Statics::NewProp_ComPortNum = { "ComPortNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysSerialSubjectSettings, ComPortNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComPortNum_MetaData), NewProp_ComPortNum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoSysSerialSubjectSettings_Statics::NewProp_OldComPortNum = { "OldComPortNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysSerialSubjectSettings, OldComPortNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldComPortNum_MetaData), NewProp_OldComPortNum_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoSysSerialSubjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysSerialSubjectSettings_Statics::NewProp_ComPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysSerialSubjectSettings_Statics::NewProp_ComPortNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysSerialSubjectSettings_Statics::NewProp_OldComPortNum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysSerialSubjectSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoSysSerialSubjectSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMoSysLiveLinkSubjectSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysSerialSubjectSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysSerialSubjectSettings_Statics::ClassParams = {
	&UMoSysSerialSubjectSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMoSysSerialSubjectSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysSerialSubjectSettings_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysSerialSubjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysSerialSubjectSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysSerialSubjectSettings()
{
	if (!Z_Registration_Info_UClass_UMoSysSerialSubjectSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysSerialSubjectSettings.OuterSingleton, Z_Construct_UClass_UMoSysSerialSubjectSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysSerialSubjectSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysSerialSubjectSettings);
UMoSysSerialSubjectSettings::~UMoSysSerialSubjectSettings() {}
// ********** End Class UMoSysSerialSubjectSettings ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysLiveLinkSubjectSettings_h__Script_MoSysTracking_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoSysLiveLinkSubjectSettings, UMoSysLiveLinkSubjectSettings::StaticClass, TEXT("UMoSysLiveLinkSubjectSettings"), &Z_Registration_Info_UClass_UMoSysLiveLinkSubjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLiveLinkSubjectSettings), 2353091907U) },
		{ Z_Construct_UClass_UMoSysUDPSubjectSettings, UMoSysUDPSubjectSettings::StaticClass, TEXT("UMoSysUDPSubjectSettings"), &Z_Registration_Info_UClass_UMoSysUDPSubjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysUDPSubjectSettings), 313606058U) },
		{ Z_Construct_UClass_UMoSysSerialSubjectSettings, UMoSysSerialSubjectSettings::StaticClass, TEXT("UMoSysSerialSubjectSettings"), &Z_Registration_Info_UClass_UMoSysSerialSubjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysSerialSubjectSettings), 1385235874U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysLiveLinkSubjectSettings_h__Script_MoSysTracking_2316128324(TEXT("/Script/MoSysTracking"),
	Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysLiveLinkSubjectSettings_h__Script_MoSysTracking_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysLiveLinkSubjectSettings_h__Script_MoSysTracking_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
