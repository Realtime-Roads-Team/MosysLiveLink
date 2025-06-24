// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoSysLiveLinkSourceFactory.h"

#ifdef MOSYSTRACKING_MoSysLiveLinkSourceFactory_generated_h
#error "MoSysLiveLinkSourceFactory.generated.h already included, missing '#pragma once' in MoSysLiveLinkSourceFactory.h"
#endif
#define MOSYSTRACKING_MoSysLiveLinkSourceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoSysLiveLinkSourceFactory **********************************************
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkSourceFactory_NoRegister();

#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Private_MoSysLiveLinkSourceFactory_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoSysLiveLinkSourceFactory(); \
	friend struct Z_Construct_UClass_UMoSysLiveLinkSourceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkSourceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoSysLiveLinkSourceFactory, ULiveLinkSourceFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoSysTracking"), Z_Construct_UClass_UMoSysLiveLinkSourceFactory_NoRegister) \
	DECLARE_SERIALIZER(UMoSysLiveLinkSourceFactory)


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Private_MoSysLiveLinkSourceFactory_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoSysLiveLinkSourceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoSysLiveLinkSourceFactory(UMoSysLiveLinkSourceFactory&&) = delete; \
	UMoSysLiveLinkSourceFactory(const UMoSysLiveLinkSourceFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoSysLiveLinkSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoSysLiveLinkSourceFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoSysLiveLinkSourceFactory) \
	NO_API virtual ~UMoSysLiveLinkSourceFactory();


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Private_MoSysLiveLinkSourceFactory_h_12_PROLOG
#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Private_MoSysLiveLinkSourceFactory_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Private_MoSysLiveLinkSourceFactory_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Private_MoSysLiveLinkSourceFactory_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoSysLiveLinkSourceFactory;

// ********** End Class UMoSysLiveLinkSourceFactory ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Private_MoSysLiveLinkSourceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
