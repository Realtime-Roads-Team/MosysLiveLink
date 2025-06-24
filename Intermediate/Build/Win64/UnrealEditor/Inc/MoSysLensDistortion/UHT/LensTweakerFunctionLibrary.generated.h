// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LensTweakerFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef MOSYSLENSDISTORTION_LensTweakerFunctionLibrary_generated_h
#error "LensTweakerFunctionLibrary.generated.h already included, missing '#pragma once' in LensTweakerFunctionLibrary.h"
#endif
#define MOSYSLENSDISTORTION_LensTweakerFunctionLibrary_generated_h

#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoSysTrackingStatusDetail_Statics; \
	MOSYSLENSDISTORTION_API static class UScriptStruct* StaticStruct();


template<> MOSYSLENSDISTORTION_API UScriptStruct* StaticStruct<struct FMoSysTrackingStatusDetail>();

#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSaveTweakerState); \
	DECLARE_FUNCTION(execDecryptLensFile); \
	DECLARE_FUNCTION(execGetWidgetCentreLocation); \
	DECLARE_FUNCTION(execUnsignedIntToPercentString); \
	DECLARE_FUNCTION(execFloatToDPString);


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULensTweakerFunctionLibrary(); \
	friend struct Z_Construct_UClass_ULensTweakerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(ULensTweakerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoSysLensDistortion"), NO_API) \
	DECLARE_SERIALIZER(ULensTweakerFunctionLibrary)


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULensTweakerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULensTweakerFunctionLibrary(ULensTweakerFunctionLibrary&&); \
	ULensTweakerFunctionLibrary(const ULensTweakerFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULensTweakerFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensTweakerFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensTweakerFunctionLibrary) \
	NO_API virtual ~ULensTweakerFunctionLibrary();


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h_24_PROLOG
#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOSYSLENSDISTORTION_API UClass* StaticClass<class ULensTweakerFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
