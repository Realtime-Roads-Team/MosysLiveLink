// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoSysLensDistortUpdater.h"

#ifdef MOSYSLENSDISTORTION_MoSysLensDistortUpdater_generated_h
#error "MoSysLensDistortUpdater.generated.h already included, missing '#pragma once' in MoSysLensDistortUpdater.h"
#endif
#define MOSYSLENSDISTORTION_MoSysLensDistortUpdater_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FMoSysLensParameters;

// ********** Begin Interface UMoSysLensDistortUpdater *********************************************
#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdater_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FMoSysLensParameters UpdateLensDistort_Implementation(FMoSysLensParameters const& Distort, float FocusRaw, float ZoomRaw) { return FMoSysLensParameters(); }; \
	DECLARE_FUNCTION(execUpdateLensDistort);


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdater_h_15_CALLBACK_WRAPPERS
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortUpdater_NoRegister();

#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdater_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOSYSLENSDISTORTION_API UMoSysLensDistortUpdater(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoSysLensDistortUpdater(UMoSysLensDistortUpdater&&) = delete; \
	UMoSysLensDistortUpdater(const UMoSysLensDistortUpdater&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOSYSLENSDISTORTION_API, UMoSysLensDistortUpdater); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoSysLensDistortUpdater); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoSysLensDistortUpdater) \
	virtual ~UMoSysLensDistortUpdater() = default;


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdater_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMoSysLensDistortUpdater(); \
	friend struct Z_Construct_UClass_UMoSysLensDistortUpdater_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortUpdater_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoSysLensDistortUpdater, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MoSysLensDistortion"), Z_Construct_UClass_UMoSysLensDistortUpdater_NoRegister) \
	DECLARE_SERIALIZER(UMoSysLensDistortUpdater)


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdater_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdater_h_15_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdater_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdater_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMoSysLensDistortUpdater() {} \
public: \
	typedef UMoSysLensDistortUpdater UClassType; \
	typedef IMoSysLensDistortUpdater ThisClass; \
	static FMoSysLensParameters Execute_UpdateLensDistort(UObject* O, FMoSysLensParameters const& Distort, float FocusRaw, float ZoomRaw); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdater_h_12_PROLOG
#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdater_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdater_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdater_h_15_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdater_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoSysLensDistortUpdater;

// ********** End Interface UMoSysLensDistortUpdater ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdater_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
