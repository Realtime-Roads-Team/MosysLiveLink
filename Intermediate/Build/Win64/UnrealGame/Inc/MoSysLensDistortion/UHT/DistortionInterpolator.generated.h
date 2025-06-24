// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DistortionInterpolator.h"

#ifdef MOSYSLENSDISTORTION_DistortionInterpolator_generated_h
#error "DistortionInterpolator.generated.h already included, missing '#pragma once' in DistortionInterpolator.h"
#endif
#define MOSYSLENSDISTORTION_DistortionInterpolator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FLensFileDescription;
struct FMoSysLensParameters;

// ********** Begin Delegate FLensCalSaveFinished **************************************************
#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionInterpolator_h_19_DELEGATE \
MOSYSLENSDISTORTION_API void FLensCalSaveFinished_DelegateWrapper(const FMulticastScriptDelegate& LensCalSaveFinished, bool Result);


// ********** End Delegate FLensCalSaveFinished ****************************************************

// ********** Begin Class UDistortionInterpolator **************************************************
#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionInterpolator_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
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


MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UDistortionInterpolator_NoRegister();

#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionInterpolator_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDistortionInterpolator(); \
	friend struct Z_Construct_UClass_UDistortionInterpolator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UDistortionInterpolator_NoRegister(); \
public: \
	DECLARE_CLASS2(UDistortionInterpolator, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoSysLensDistortion"), Z_Construct_UClass_UDistortionInterpolator_NoRegister) \
	DECLARE_SERIALIZER(UDistortionInterpolator)


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionInterpolator_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDistortionInterpolator(UDistortionInterpolator&&) = delete; \
	UDistortionInterpolator(const UDistortionInterpolator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDistortionInterpolator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistortionInterpolator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDistortionInterpolator) \
	NO_API virtual ~UDistortionInterpolator();


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionInterpolator_h_38_PROLOG
#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionInterpolator_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionInterpolator_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionInterpolator_h_41_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionInterpolator_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDistortionInterpolator;

// ********** End Class UDistortionInterpolator ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_DistortionInterpolator_h

// ********** Begin Enum DistortionInterpolationType ***********************************************
#define FOREACH_ENUM_DISTORTIONINTERPOLATIONTYPE(op) \
	op(DistortionInterpolationType::Smoothed) \
	op(DistortionInterpolationType::Linear) \
	op(DistortionInterpolationType::None) \
	op(DistortionInterpolationType::Max) 
// ********** End Enum DistortionInterpolationType *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
