// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoSysLensDistortUpdatable.h"

#ifdef MOSYSLENSDISTORTION_MoSysLensDistortUpdatable_generated_h
#error "MoSysLensDistortUpdatable.generated.h already included, missing '#pragma once' in MoSysLensDistortUpdatable.h"
#endif
#define MOSYSLENSDISTORTION_MoSysLensDistortUpdatable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class IMoSysLensDistortUpdater;

// ********** Begin Interface UMoSysLensDistortUpdatable *******************************************
#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RegisterLensDistortUpdater_Implementation(TScriptInterface<IMoSysLensDistortUpdater> const& InUpdater) {}; \
	DECLARE_FUNCTION(execRegisterLensDistortUpdater);


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_CALLBACK_WRAPPERS
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortUpdatable_NoRegister();

#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOSYSLENSDISTORTION_API UMoSysLensDistortUpdatable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoSysLensDistortUpdatable(UMoSysLensDistortUpdatable&&) = delete; \
	UMoSysLensDistortUpdatable(const UMoSysLensDistortUpdatable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOSYSLENSDISTORTION_API, UMoSysLensDistortUpdatable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoSysLensDistortUpdatable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoSysLensDistortUpdatable) \
	virtual ~UMoSysLensDistortUpdatable() = default;


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMoSysLensDistortUpdatable(); \
	friend struct Z_Construct_UClass_UMoSysLensDistortUpdatable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortUpdatable_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoSysLensDistortUpdatable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MoSysLensDistortion"), Z_Construct_UClass_UMoSysLensDistortUpdatable_NoRegister) \
	DECLARE_SERIALIZER(UMoSysLensDistortUpdatable)


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMoSysLensDistortUpdatable() {} \
public: \
	typedef UMoSysLensDistortUpdatable UClassType; \
	typedef IMoSysLensDistortUpdatable ThisClass; \
	static void Execute_RegisterLensDistortUpdater(UObject* O, TScriptInterface<IMoSysLensDistortUpdater> const& InUpdater); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_11_PROLOG
#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoSysLensDistortUpdatable;

// ********** End Interface UMoSysLensDistortUpdatable *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
