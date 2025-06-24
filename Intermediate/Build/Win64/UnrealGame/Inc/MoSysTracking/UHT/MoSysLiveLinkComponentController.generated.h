// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoSysLiveLinkComponentController.h"

#ifdef MOSYSTRACKING_MoSysLiveLinkComponentController_generated_h
#error "MoSysLiveLinkComponentController.generated.h already included, missing '#pragma once' in MoSysLiveLinkComponentController.h"
#endif
#define MOSYSTRACKING_MoSysLiveLinkComponentController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class IMoSysLensDistortUpdatable;
enum class EMoSysTrackingStatus : uint8;
struct FLiveLinkMoSysFrameData;
struct FTimecode;

// ********** Begin Class UMoSysLiveLinkComponentController ****************************************
#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasValidData); \
	DECLARE_FUNCTION(execGetMoSysLensDistortUpdatable); \
	DECLARE_FUNCTION(execGetLatestTrackingData); \
	DECLARE_FUNCTION(execGetTrackingData); \
	DECLARE_FUNCTION(execGetTimecode); \
	DECLARE_FUNCTION(execGetTrackingStatusText); \
	DECLARE_FUNCTION(execGetTrackingStatus);


MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkComponentController_NoRegister();

#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoSysLiveLinkComponentController(); \
	friend struct Z_Construct_UClass_UMoSysLiveLinkComponentController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkComponentController_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoSysLiveLinkComponentController, ULiveLinkComponentController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoSysTracking"), Z_Construct_UClass_UMoSysLiveLinkComponentController_NoRegister) \
	DECLARE_SERIALIZER(UMoSysLiveLinkComponentController)


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoSysLiveLinkComponentController(UMoSysLiveLinkComponentController&&) = delete; \
	UMoSysLiveLinkComponentController(const UMoSysLiveLinkComponentController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoSysLiveLinkComponentController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoSysLiveLinkComponentController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoSysLiveLinkComponentController) \
	NO_API virtual ~UMoSysLiveLinkComponentController();


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h_20_PROLOG
#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h_23_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoSysLiveLinkComponentController;

// ********** End Class UMoSysLiveLinkComponentController ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysLiveLinkComponentController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
