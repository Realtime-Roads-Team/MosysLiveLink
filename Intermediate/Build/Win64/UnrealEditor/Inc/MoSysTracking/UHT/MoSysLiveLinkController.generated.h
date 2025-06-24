// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoSysLiveLinkController.h"

#ifdef MOSYSTRACKING_MoSysLiveLinkController_generated_h
#error "MoSysLiveLinkController.generated.h already included, missing '#pragma once' in MoSysLiveLinkController.h"
#endif
#define MOSYSTRACKING_MoSysLiveLinkController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoSysLiveLinkController *************************************************
#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Private_MoSysLiveLinkController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasValidData);


MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkController_NoRegister();

#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Private_MoSysLiveLinkController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoSysLiveLinkController(); \
	friend struct Z_Construct_UClass_UMoSysLiveLinkController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkController_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoSysLiveLinkController, ULiveLinkTransformController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoSysTracking"), Z_Construct_UClass_UMoSysLiveLinkController_NoRegister) \
	DECLARE_SERIALIZER(UMoSysLiveLinkController) \
	virtual UObject* _getUObject() const override { return const_cast<UMoSysLiveLinkController*>(this); }


#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Private_MoSysLiveLinkController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoSysLiveLinkController(UMoSysLiveLinkController&&) = delete; \
	UMoSysLiveLinkController(const UMoSysLiveLinkController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoSysLiveLinkController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoSysLiveLinkController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoSysLiveLinkController) \
	NO_API virtual ~UMoSysLiveLinkController();


#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Private_MoSysLiveLinkController_h_17_PROLOG
#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Private_MoSysLiveLinkController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Private_MoSysLiveLinkController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Private_MoSysLiveLinkController_h_20_INCLASS_NO_PURE_DECLS \
	FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Private_MoSysLiveLinkController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoSysLiveLinkController;

// ********** End Class UMoSysLiveLinkController ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Private_MoSysLiveLinkController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
