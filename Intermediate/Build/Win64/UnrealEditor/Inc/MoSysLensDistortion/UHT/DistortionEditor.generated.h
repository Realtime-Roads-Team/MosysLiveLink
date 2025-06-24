// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DistortionEditor.h"

#ifdef MOSYSLENSDISTORTION_DistortionEditor_generated_h
#error "DistortionEditor.generated.h already included, missing '#pragma once' in DistortionEditor.h"
#endif
#define MOSYSLENSDISTORTION_DistortionEditor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDistortionEditor ********************************************************
#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_DistortionEditor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUndistortRadius);


MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UDistortionEditor_NoRegister();

#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_DistortionEditor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDistortionEditor(); \
	friend struct Z_Construct_UClass_UDistortionEditor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UDistortionEditor_NoRegister(); \
public: \
	DECLARE_CLASS2(UDistortionEditor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoSysLensDistortion"), Z_Construct_UClass_UDistortionEditor_NoRegister) \
	DECLARE_SERIALIZER(UDistortionEditor)


#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_DistortionEditor_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDistortionEditor(UDistortionEditor&&) = delete; \
	UDistortionEditor(const UDistortionEditor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDistortionEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistortionEditor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDistortionEditor) \
	NO_API virtual ~UDistortionEditor();


#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_DistortionEditor_h_11_PROLOG
#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_DistortionEditor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_DistortionEditor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_DistortionEditor_h_14_INCLASS_NO_PURE_DECLS \
	FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_DistortionEditor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDistortionEditor;

// ********** End Class UDistortionEditor **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_DistortionEditor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
