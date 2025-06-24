// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoSysLensDistortUpdatable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMoSysLensDistortUpdater;
#ifdef MOSYSLENSDISTORTION_MoSysLensDistortUpdatable_generated_h
#error "MoSysLensDistortUpdatable.generated.h already included, missing '#pragma once' in MoSysLensDistortUpdatable.h"
#endif
#define MOSYSLENSDISTORTION_MoSysLensDistortUpdatable_generated_h

#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RegisterLensDistortUpdater_Implementation(TScriptInterface<IMoSysLensDistortUpdater> const& InUpdater) {}; \
	DECLARE_FUNCTION(execRegisterLensDistortUpdater);


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_CALLBACK_WRAPPERS
#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOSYSLENSDISTORTION_API UMoSysLensDistortUpdatable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMoSysLensDistortUpdatable(UMoSysLensDistortUpdatable&&); \
	UMoSysLensDistortUpdatable(const UMoSysLensDistortUpdatable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOSYSLENSDISTORTION_API, UMoSysLensDistortUpdatable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoSysLensDistortUpdatable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoSysLensDistortUpdatable) \
	MOSYSLENSDISTORTION_API virtual ~UMoSysLensDistortUpdatable();


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMoSysLensDistortUpdatable(); \
	friend struct Z_Construct_UClass_UMoSysLensDistortUpdatable_Statics; \
public: \
	DECLARE_CLASS(UMoSysLensDistortUpdatable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MoSysLensDistortion"), MOSYSLENSDISTORTION_API) \
	DECLARE_SERIALIZER(UMoSysLensDistortUpdatable)


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMoSysLensDistortUpdatable() {} \
public: \
	typedef UMoSysLensDistortUpdatable UClassType; \
	typedef IMoSysLensDistortUpdatable ThisClass; \
	static void Execute_RegisterLensDistortUpdater(UObject* O, TScriptInterface<IMoSysLensDistortUpdater> const& InUpdater); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_11_PROLOG
#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_CALLBACK_WRAPPERS \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOSYSLENSDISTORTION_API UClass* StaticClass<class UMoSysLensDistortUpdatable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_MoSysLensDistortUpdatable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
