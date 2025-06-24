// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DistortionInterpolator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLensFileDescription;
struct FMoSysLensParameters;
#ifdef MOSYSLENSDISTORTION_DistortionInterpolator_generated_h
#error "DistortionInterpolator.generated.h already included, missing '#pragma once' in DistortionInterpolator.h"
#endif
#define MOSYSLENSDISTORTION_DistortionInterpolator_generated_h

#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionInterpolator_h_19_DELEGATE \
MOSYSLENSDISTORTION_API void FLensCalSaveFinished_DelegateWrapper(const FMulticastScriptDelegate& LensCalSaveFinished, bool Result);


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionInterpolator_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEPDSplineValue); \
	DECLARE_FUNCTION(execGetCySplineValue); \
	DECLARE_FUNCTION(execGetCxSplineValue); \
	DECLARE_FUNCTION(execGetFxSplineValue); \
	DECLARE_FUNCTION(execGenerateEPDSplineNearWide); \
	DECLARE_FUNCTION(execGenerateCySplineNearWide); \
	DECLARE_FUNCTION(execGenerateCxSplineNearWide); \
	DECLARE_FUNCTION(execGenerateFxSplineNearWide); \
	DECLARE_FUNCTION(execGenerateAllNearWideSplines); \
	DECLARE_FUNCTION(execClearNearWideSplines); \
	DECLARE_FUNCTION(execRemoveEPDTweakNearWide); \
	DECLARE_FUNCTION(execRemoveCyTweakNearWide); \
	DECLARE_FUNCTION(execRemoveCxTweakNearWide); \
	DECLARE_FUNCTION(execRemoveFxTweakNearWide); \
	DECLARE_FUNCTION(execAddEPDTweakNearWide); \
	DECLARE_FUNCTION(execAddCyTweakNearWide); \
	DECLARE_FUNCTION(execAddCxTweakNearWide); \
	DECLARE_FUNCTION(execAddFxTweakNearWide); \
	DECLARE_FUNCTION(execGetShouldRecomputeDistortionFromFxUndist); \
	DECLARE_FUNCTION(execSetShouldRecomputeDistortionFromFxUndist); \
	DECLARE_FUNCTION(execResetGlobalTweaks); \
	DECLARE_FUNCTION(execAddNewSamplePoint); \
	DECLARE_FUNCTION(execGetFocalDistanceTable); \
	DECLARE_FUNCTION(execGetSamplePoints); \
	DECLARE_FUNCTION(execUpdateLensSetup); \
	DECLARE_FUNCTION(execClearFocalDistance); \
	DECLARE_FUNCTION(execHasFocalDistance); \
	DECLARE_FUNCTION(execAddFocalDistancePoint); \
	DECLARE_FUNCTION(execRefreshLensDistortion); \
	DECLARE_FUNCTION(execIsDesriptionComplete); \
	DECLARE_FUNCTION(execSaveLensCalAsync); \
	DECLARE_FUNCTION(execSaveLensCal); \
	DECLARE_FUNCTION(execSetDistortionCoefficientsForLensData); \
	DECLARE_FUNCTION(execSetter_interpolationType); \
	DECLARE_FUNCTION(execGetDistortionCoefficientsForLensData);


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionInterpolator_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDistortionInterpolator(); \
	friend struct Z_Construct_UClass_UDistortionInterpolator_Statics; \
public: \
	DECLARE_CLASS(UDistortionInterpolator, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoSysLensDistortion"), NO_API) \
	DECLARE_SERIALIZER(UDistortionInterpolator)


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionInterpolator_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDistortionInterpolator(UDistortionInterpolator&&); \
	UDistortionInterpolator(const UDistortionInterpolator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDistortionInterpolator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistortionInterpolator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDistortionInterpolator) \
	NO_API virtual ~UDistortionInterpolator();


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionInterpolator_h_38_PROLOG
#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionInterpolator_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionInterpolator_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionInterpolator_h_41_INCLASS_NO_PURE_DECLS \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionInterpolator_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOSYSLENSDISTORTION_API UClass* StaticClass<class UDistortionInterpolator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionInterpolator_h


#define FOREACH_ENUM_DISTORTIONINTERPOLATIONTYPE(op) \
	op(DistortionInterpolationType::Smoothed) \
	op(DistortionInterpolationType::Linear) \
	op(DistortionInterpolationType::None) \
	op(DistortionInterpolationType::Max) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
