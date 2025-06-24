// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysLiveLinkSourceFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoSysLiveLinkSourceFactory() {}

// ********** Begin Cross Module References ********************************************************
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkSourceFactory();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkSourceFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_MoSysTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoSysLiveLinkSourceFactory **********************************************
void UMoSysLiveLinkSourceFactory::StaticRegisterNativesUMoSysLiveLinkSourceFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoSysLiveLinkSourceFactory;
UClass* UMoSysLiveLinkSourceFactory::GetPrivateStaticClass()
{
	using TClass = UMoSysLiveLinkSourceFactory;
	if (!Z_Registration_Info_UClass_UMoSysLiveLinkSourceFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoSysLiveLinkSourceFactory"),
			Z_Registration_Info_UClass_UMoSysLiveLinkSourceFactory.InnerSingleton,
			StaticRegisterNativesUMoSysLiveLinkSourceFactory,
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
	return Z_Registration_Info_UClass_UMoSysLiveLinkSourceFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoSysLiveLinkSourceFactory_NoRegister()
{
	return UMoSysLiveLinkSourceFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoSysLiveLinkSourceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MoSysLiveLinkSourceFactory.h" },
		{ "ModuleRelativePath", "Private/MoSysLiveLinkSourceFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoSysLiveLinkSourceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoSysLiveLinkSourceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkSourceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysLiveLinkSourceFactory_Statics::ClassParams = {
	&UMoSysLiveLinkSourceFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkSourceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysLiveLinkSourceFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysLiveLinkSourceFactory()
{
	if (!Z_Registration_Info_UClass_UMoSysLiveLinkSourceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysLiveLinkSourceFactory.OuterSingleton, Z_Construct_UClass_UMoSysLiveLinkSourceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysLiveLinkSourceFactory.OuterSingleton;
}
UMoSysLiveLinkSourceFactory::UMoSysLiveLinkSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLiveLinkSourceFactory);
UMoSysLiveLinkSourceFactory::~UMoSysLiveLinkSourceFactory() {}
// ********** End Class UMoSysLiveLinkSourceFactory ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Private_MoSysLiveLinkSourceFactory_h__Script_MoSysTracking_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoSysLiveLinkSourceFactory, UMoSysLiveLinkSourceFactory::StaticClass, TEXT("UMoSysLiveLinkSourceFactory"), &Z_Registration_Info_UClass_UMoSysLiveLinkSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLiveLinkSourceFactory), 1860677911U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Private_MoSysLiveLinkSourceFactory_h__Script_MoSysTracking_1596777967(TEXT("/Script/MoSysTracking"),
	Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Private_MoSysLiveLinkSourceFactory_h__Script_MoSysTracking_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Private_MoSysLiveLinkSourceFactory_h__Script_MoSysTracking_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
