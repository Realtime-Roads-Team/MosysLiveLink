// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoSysMoRail.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOSYSTRACKING_MoSysMoRail_generated_h
#error "MoSysMoRail.generated.h already included, missing '#pragma once' in MoSysMoRail.h"
#endif
#define MOSYSTRACKING_MoSysMoRail_generated_h

#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysMoRail_h_10_DELEGATE \
MOSYSTRACKING_API void FOnConnect_DelegateWrapper(const FMulticastScriptDelegate& OnConnect, bool Success);


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysMoRail_h_11_DELEGATE \
MOSYSTRACKING_API void FOnGet_DelegateWrapper(const FMulticastScriptDelegate& OnGet, bool Success, int32 Result);


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysMoRail_h_12_DELEGATE \
MOSYSTRACKING_API void FOnSet_DelegateWrapper(const FMulticastScriptDelegate& OnSet, bool Success);


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysMoRail_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysMoRail_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoRail(); \
	friend struct Z_Construct_UClass_UMoRail_Statics; \
public: \
	DECLARE_CLASS(UMoRail, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoSysTracking"), NO_API) \
	DECLARE_SERIALIZER(UMoRail)


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysMoRail_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMoRail(UMoRail&&); \
	UMoRail(const UMoRail&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoRail); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoRail); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoRail)


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysMoRail_h_17_PROLOG
#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysMoRail_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysMoRail_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysMoRail_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysMoRail_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOSYSTRACKING_API UClass* StaticClass<class UMoRail>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysMoRail_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
