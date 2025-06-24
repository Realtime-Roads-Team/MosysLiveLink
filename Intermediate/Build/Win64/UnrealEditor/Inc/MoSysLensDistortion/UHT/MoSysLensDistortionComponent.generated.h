// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoSysLensDistortionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDistortionSource : uint8;
struct FMoSysLensParameters;
#ifdef MOSYSLENSDISTORTION_MoSysLensDistortionComponent_generated_h
#error "MoSysLensDistortionComponent.generated.h already included, missing '#pragma once' in MoSysLensDistortionComponent.h"
#endif
#define MOSYSLENSDISTORTION_MoSysLensDistortionComponent_generated_h

#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDistortionStateSource); \
	DECLARE_FUNCTION(execGetUndistortOverscanFactor); \
	DECLARE_FUNCTION(execGetCurrentLensParameters);


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoSysLensDistortionComponent(); \
	friend struct Z_Construct_UClass_UMoSysLensDistortionComponent_Statics; \
public: \
	DECLARE_CLASS(UMoSysLensDistortionComponent, ULensComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoSysLensDistortion"), NO_API) \
	DECLARE_SERIALIZER(UMoSysLensDistortionComponent)


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMoSysLensDistortionComponent(UMoSysLensDistortionComponent&&); \
	UMoSysLensDistortionComponent(const UMoSysLensDistortionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoSysLensDistortionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoSysLensDistortionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoSysLensDistortionComponent) \
	NO_API virtual ~UMoSysLensDistortionComponent();


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h_30_PROLOG
#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h_33_INCLASS_NO_PURE_DECLS \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOSYSLENSDISTORTION_API UClass* StaticClass<class UMoSysLensDistortionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
