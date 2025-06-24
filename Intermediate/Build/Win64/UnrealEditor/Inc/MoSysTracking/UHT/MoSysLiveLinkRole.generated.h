// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoSysLiveLinkRole.h"

#ifdef MOSYSTRACKING_MoSysLiveLinkRole_generated_h
#error "MoSysLiveLinkRole.generated.h already included, missing '#pragma once' in MoSysLiveLinkRole.h"
#endif
#define MOSYSTRACKING_MoSysLiveLinkRole_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLiveLinkMoSysBlueprintData ***************************************
#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysLiveLinkRole_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkMoSysBlueprintData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLiveLinkBaseBlueprintData Super;


struct FLiveLinkMoSysBlueprintData;
// ********** End ScriptStruct FLiveLinkMoSysBlueprintData *****************************************

// ********** Begin Class UMoSysLiveLinkRole *******************************************************
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkRole_NoRegister();

#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysLiveLinkRole_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoSysLiveLinkRole(); \
	friend struct Z_Construct_UClass_UMoSysLiveLinkRole_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkRole_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoSysLiveLinkRole, ULiveLinkBasicRole, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoSysTracking"), Z_Construct_UClass_UMoSysLiveLinkRole_NoRegister) \
	DECLARE_SERIALIZER(UMoSysLiveLinkRole)


#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysLiveLinkRole_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoSysLiveLinkRole(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoSysLiveLinkRole(UMoSysLiveLinkRole&&) = delete; \
	UMoSysLiveLinkRole(const UMoSysLiveLinkRole&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoSysLiveLinkRole); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoSysLiveLinkRole); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoSysLiveLinkRole) \
	NO_API virtual ~UMoSysLiveLinkRole();


#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysLiveLinkRole_h_33_PROLOG
#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysLiveLinkRole_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysLiveLinkRole_h_36_INCLASS_NO_PURE_DECLS \
	FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysLiveLinkRole_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoSysLiveLinkRole;

// ********** End Class UMoSysLiveLinkRole *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysLiveLinkRole_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
