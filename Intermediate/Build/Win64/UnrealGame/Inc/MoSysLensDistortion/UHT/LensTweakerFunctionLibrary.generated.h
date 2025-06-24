// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LensTweakerFunctionLibrary.h"

#ifdef MOSYSLENSDISTORTION_LensTweakerFunctionLibrary_generated_h
#error "LensTweakerFunctionLibrary.generated.h already included, missing '#pragma once' in LensTweakerFunctionLibrary.h"
#endif
#define MOSYSLENSDISTORTION_LensTweakerFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UWidget;

// ********** Begin ScriptStruct FMoSysTrackingStatusDetail ****************************************
#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoSysTrackingStatusDetail_Statics; \
	MOSYSLENSDISTORTION_API static class UScriptStruct* StaticStruct();


struct FMoSysTrackingStatusDetail;
// ********** End ScriptStruct FMoSysTrackingStatusDetail ******************************************

// ********** Begin Class ULensTweakerFunctionLibrary **********************************************
#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSaveTweakerState); \
	DECLARE_FUNCTION(execDecryptLensFile); \
	DECLARE_FUNCTION(execGetWidgetCentreLocation); \
	DECLARE_FUNCTION(execUnsignedIntToPercentString); \
	DECLARE_FUNCTION(execFloatToDPString);


MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_ULensTweakerFunctionLibrary_NoRegister();

#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULensTweakerFunctionLibrary(); \
	friend struct Z_Construct_UClass_ULensTweakerFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_ULensTweakerFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(ULensTweakerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoSysLensDistortion"), Z_Construct_UClass_ULensTweakerFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(ULensTweakerFunctionLibrary)


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULensTweakerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULensTweakerFunctionLibrary(ULensTweakerFunctionLibrary&&) = delete; \
	ULensTweakerFunctionLibrary(const ULensTweakerFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULensTweakerFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensTweakerFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensTweakerFunctionLibrary) \
	NO_API virtual ~ULensTweakerFunctionLibrary();


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h_24_PROLOG
#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULensTweakerFunctionLibrary;

// ********** End Class ULensTweakerFunctionLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MoSysVPFree_Source_MoSysLensDistortion_Public_LensTweakerFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
