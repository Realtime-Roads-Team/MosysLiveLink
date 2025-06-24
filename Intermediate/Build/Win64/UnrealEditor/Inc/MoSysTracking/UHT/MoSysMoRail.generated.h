// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoSysMoRail.h"

#ifdef MOSYSTRACKING_MoSysMoRail_generated_h
#error "MoSysMoRail.generated.h already included, missing '#pragma once' in MoSysMoRail.h"
#endif
#define MOSYSTRACKING_MoSysMoRail_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnConnect ************************************************************
#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysMoRail_h_10_DELEGATE \
MOSYSTRACKING_API void FOnConnect_DelegateWrapper(const FMulticastScriptDelegate& OnConnect, bool Success);


// ********** End Delegate FOnConnect **************************************************************

// ********** Begin Delegate FOnGet ****************************************************************
#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysMoRail_h_11_DELEGATE \
MOSYSTRACKING_API void FOnGet_DelegateWrapper(const FMulticastScriptDelegate& OnGet, bool Success, int32 Result);


// ********** End Delegate FOnGet ******************************************************************

// ********** Begin Delegate FOnSet ****************************************************************
#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysMoRail_h_12_DELEGATE \
MOSYSTRACKING_API void FOnSet_DelegateWrapper(const FMulticastScriptDelegate& OnSet, bool Success);


// ********** End Delegate FOnSet ******************************************************************

// ********** Begin Class UMoRail ******************************************************************
#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysMoRail_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPtzPort); \
	DECLARE_FUNCTION(execSetMoRailPort); \
	DECLARE_FUNCTION(execGetRequiredTimeMs); \
	DECLARE_FUNCTION(execSetGotoMinTimeMs); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execGotoPosition); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execSetPTZAddress); \
	DECLARE_FUNCTION(execSetMoRailAddress);


MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoRail_NoRegister();

#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysMoRail_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoRail(); \
	friend struct Z_Construct_UClass_UMoRail_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoRail_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoRail, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoSysTracking"), Z_Construct_UClass_UMoRail_NoRegister) \
	DECLARE_SERIALIZER(UMoRail)


#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysMoRail_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoRail(UMoRail&&) = delete; \
	UMoRail(const UMoRail&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoRail); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoRail); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoRail)


#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysMoRail_h_17_PROLOG
#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysMoRail_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysMoRail_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysMoRail_h_20_INCLASS_NO_PURE_DECLS \
	FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysMoRail_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoRail;

// ********** End Class UMoRail ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysMoRail_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
