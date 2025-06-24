// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoSysPassiveLiveLinkComponentController.h"

#ifdef MOSYSTRACKING_MoSysPassiveLiveLinkComponentController_generated_h
#error "MoSysPassiveLiveLinkComponentController.generated.h already included, missing '#pragma once' in MoSysPassiveLiveLinkComponentController.h"
#endif
#define MOSYSTRACKING_MoSysPassiveLiveLinkComponentController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class IMoSysLensDistortUpdatable;
enum class EMoSysTrackingStatus : uint8;
struct FLiveLinkMoSysFrameData;
struct FTimecode;

// ********** Begin Class UMoSysPassiveLiveLinkComponentController *********************************
#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysPassiveLiveLinkComponentController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasValidData); \
	DECLARE_FUNCTION(execGetMoSysLensDistortUpdatable); \
	DECLARE_FUNCTION(execGetLatestTrackingData); \
	DECLARE_FUNCTION(execGetTrackingData); \
	DECLARE_FUNCTION(execGetTimecode); \
	DECLARE_FUNCTION(execGetTrackingStatusText); \
	DECLARE_FUNCTION(execGetTrackingStatus);


MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_NoRegister();

#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysPassiveLiveLinkComponentController_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoSysPassiveLiveLinkComponentController(); \
	friend struct Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoSysPassiveLiveLinkComponentController, ULiveLinkComponentController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoSysTracking"), Z_Construct_UClass_UMoSysPassiveLiveLinkComponentController_NoRegister) \
	DECLARE_SERIALIZER(UMoSysPassiveLiveLinkComponentController)


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysPassiveLiveLinkComponentController_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoSysPassiveLiveLinkComponentController(UMoSysPassiveLiveLinkComponentController&&) = delete; \
	UMoSysPassiveLiveLinkComponentController(const UMoSysPassiveLiveLinkComponentController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoSysPassiveLiveLinkComponentController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoSysPassiveLiveLinkComponentController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoSysPassiveLiveLinkComponentController) \
	NO_API virtual ~UMoSysPassiveLiveLinkComponentController();


#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysPassiveLiveLinkComponentController_h_20_PROLOG
#define FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysPassiveLiveLinkComponentController_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysPassiveLiveLinkComponentController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysPassiveLiveLinkComponentController_h_23_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysPassiveLiveLinkComponentController_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoSysPassiveLiveLinkComponentController;

// ********** End Class UMoSysPassiveLiveLinkComponentController ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysPassiveLiveLinkComponentController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
