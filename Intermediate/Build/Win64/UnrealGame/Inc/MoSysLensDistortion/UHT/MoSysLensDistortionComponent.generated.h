// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoSysLensDistortionComponent.h"

#ifdef MOSYSLENSDISTORTION_MoSysLensDistortionComponent_generated_h
#error "MoSysLensDistortionComponent.generated.h already included, missing '#pragma once' in MoSysLensDistortionComponent.h"
#endif
#define MOSYSLENSDISTORTION_MoSysLensDistortionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EDistortionSource : uint8;
struct FMoSysLensParameters;

// ********** Begin Class UMoSysLensDistortionComponent ********************************************
#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDistortionStateSource); \
	DECLARE_FUNCTION(execGetUndistortOverscanFactor); \
	DECLARE_FUNCTION(execGetCurrentLensParameters);


MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortionComponent_NoRegister();

#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoSysLensDistortionComponent(); \
	friend struct Z_Construct_UClass_UMoSysLensDistortionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoSysLensDistortionComponent, ULensComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoSysLensDistortion"), Z_Construct_UClass_UMoSysLensDistortionComponent_NoRegister) \
	DECLARE_SERIALIZER(UMoSysLensDistortionComponent)


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoSysLensDistortionComponent(UMoSysLensDistortionComponent&&) = delete; \
	UMoSysLensDistortionComponent(const UMoSysLensDistortionComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoSysLensDistortionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoSysLensDistortionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoSysLensDistortionComponent) \
	NO_API virtual ~UMoSysLensDistortionComponent();


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h_30_PROLOG
#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h_33_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoSysLensDistortionComponent;

// ********** End Class UMoSysLensDistortionComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortionComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
