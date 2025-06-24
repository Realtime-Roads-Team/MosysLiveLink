// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoSysLiveLinkComponentController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMoSysLensDistortUpdatable;
enum class EMoSysTrackingStatus : uint8;
struct FLiveLinkMoSysFrameData;
struct FTimecode;
#ifdef MOSYSTRACKING_MoSysLiveLinkComponentController_generated_h
#error "MoSysLiveLinkComponentController.generated.h already included, missing '#pragma once' in MoSysLiveLinkComponentController.h"
#endif
#define MOSYSTRACKING_MoSysLiveLinkComponentController_generated_h

#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasValidData); \
	DECLARE_FUNCTION(execGetMoSysLensDistortUpdatable); \
	DECLARE_FUNCTION(execGetLatestTrackingData); \
	DECLARE_FUNCTION(execGetTrackingData); \
	DECLARE_FUNCTION(execGetTimecode); \
	DECLARE_FUNCTION(execGetTrackingStatusText); \
	DECLARE_FUNCTION(execGetTrackingStatus);


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoSysLiveLinkComponentController(); \
	friend struct Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics; \
public: \
	DECLARE_CLASS(UMoSysLiveLinkComponentController, ULiveLinkComponentController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoSysTracking"), NO_API) \
	DECLARE_SERIALIZER(UMoSysLiveLinkComponentController)


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMoSysLiveLinkComponentController(UMoSysLiveLinkComponentController&&); \
	UMoSysLiveLinkComponentController(const UMoSysLiveLinkComponentController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoSysLiveLinkComponentController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoSysLiveLinkComponentController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoSysLiveLinkComponentController) \
	NO_API virtual ~UMoSysLiveLinkComponentController();


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h_20_PROLOG
#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOSYSTRACKING_API UClass* StaticClass<class UMoSysLiveLinkComponentController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
