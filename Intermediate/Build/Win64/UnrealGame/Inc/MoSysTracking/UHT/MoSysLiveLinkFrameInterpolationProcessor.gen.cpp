// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysLiveLinkFrameInterpolationProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoSysLiveLinkFrameInterpolationProcessor() {}

// ********** Begin Cross Module References ********************************************************
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkFrameInterpolationProcessor();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkFrameInterpolationProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MoSysTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoSysLiveLinkFrameInterpolationProcessor ********************************
void UMoSysLiveLinkFrameInterpolationProcessor::StaticRegisterNativesUMoSysLiveLinkFrameInterpolationProcessor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoSysLiveLinkFrameInterpolationProcessor;
UClass* UMoSysLiveLinkFrameInterpolationProcessor::GetPrivateStaticClass()
{
	using TClass = UMoSysLiveLinkFrameInterpolationProcessor;
	if (!Z_Registration_Info_UClass_UMoSysLiveLinkFrameInterpolationProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoSysLiveLinkFrameInterpolationProcessor"),
			Z_Registration_Info_UClass_UMoSysLiveLinkFrameInterpolationProcessor.InnerSingleton,
			StaticRegisterNativesUMoSysLiveLinkFrameInterpolationProcessor,
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
	return Z_Registration_Info_UClass_UMoSysLiveLinkFrameInterpolationProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoSysLiveLinkFrameInterpolationProcessor_NoRegister()
{
	return UMoSysLiveLinkFrameInterpolationProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoSysLiveLinkFrameInterpolationProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mo Sys interpolation.\n */" },
		{ "DisplayName", "Mo Sys Interpolation" },
		{ "IncludePath", "MoSysLiveLinkFrameInterpolationProcessor.h" },
		{ "ModuleRelativePath", "Public/MoSysLiveLinkFrameInterpolationProcessor.h" },
		{ "ToolTip", "Mo Sys interpolation." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoSysLiveLinkFrameInterpolationProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoSysLiveLinkFrameInterpolationProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkFrameInterpolationProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysLiveLinkFrameInterpolationProcessor_Statics::ClassParams = {
	&UMoSysLiveLinkFrameInterpolationProcessor::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkFrameInterpolationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysLiveLinkFrameInterpolationProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysLiveLinkFrameInterpolationProcessor()
{
	if (!Z_Registration_Info_UClass_UMoSysLiveLinkFrameInterpolationProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysLiveLinkFrameInterpolationProcessor.OuterSingleton, Z_Construct_UClass_UMoSysLiveLinkFrameInterpolationProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysLiveLinkFrameInterpolationProcessor.OuterSingleton;
}
UMoSysLiveLinkFrameInterpolationProcessor::UMoSysLiveLinkFrameInterpolationProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLiveLinkFrameInterpolationProcessor);
UMoSysLiveLinkFrameInterpolationProcessor::~UMoSysLiveLinkFrameInterpolationProcessor() {}
// ********** End Class UMoSysLiveLinkFrameInterpolationProcessor **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkFrameInterpolationProcessor_h__Script_MoSysTracking_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoSysLiveLinkFrameInterpolationProcessor, UMoSysLiveLinkFrameInterpolationProcessor::StaticClass, TEXT("UMoSysLiveLinkFrameInterpolationProcessor"), &Z_Registration_Info_UClass_UMoSysLiveLinkFrameInterpolationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLiveLinkFrameInterpolationProcessor), 2101495690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkFrameInterpolationProcessor_h__Script_MoSysTracking_4214685755(TEXT("/Script/MoSysTracking"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkFrameInterpolationProcessor_h__Script_MoSysTracking_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkFrameInterpolationProcessor_h__Script_MoSysTracking_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
