// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoSysLensModel.h"

#ifdef MOSYSLENSDISTORTION_MoSysLensModel_generated_h
#error "MoSysLensModel.generated.h already included, missing '#pragma once' in MoSysLensModel.h"
#endif
#define MOSYSLENSDISTORTION_MoSysLensModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMoSysLensParameters **********************************************
#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_MoSysLensModel_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoSysLensParameters_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMoSysLensParameters;
// ********** End ScriptStruct FMoSysLensParameters ************************************************

// ********** Begin Class UMoSysLensModel **********************************************************
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensModel_NoRegister();

#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_MoSysLensModel_h_138_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoSysLensModel(); \
	friend struct Z_Construct_UClass_UMoSysLensModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoSysLensModel, ULensModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoSysLensDistortion"), Z_Construct_UClass_UMoSysLensModel_NoRegister) \
	DECLARE_SERIALIZER(UMoSysLensModel)


#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_MoSysLensModel_h_138_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoSysLensModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoSysLensModel(UMoSysLensModel&&) = delete; \
	UMoSysLensModel(const UMoSysLensModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoSysLensModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoSysLensModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoSysLensModel) \
	NO_API virtual ~UMoSysLensModel();


#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_MoSysLensModel_h_135_PROLOG
#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_MoSysLensModel_h_138_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_MoSysLensModel_h_138_INCLASS_NO_PURE_DECLS \
	FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_MoSysLensModel_h_138_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoSysLensModel;

// ********** End Class UMoSysLensModel ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_MoSysLensModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
