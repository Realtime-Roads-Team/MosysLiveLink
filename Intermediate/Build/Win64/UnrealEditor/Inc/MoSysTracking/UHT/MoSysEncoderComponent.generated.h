// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoSysEncoderComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOSYSTRACKING_MoSysEncoderComponent_generated_h
#error "MoSysEncoderComponent.generated.h already included, missing '#pragma once' in MoSysEncoderComponent.h"
#endif
#define MOSYSTRACKING_MoSysEncoderComponent_generated_h

#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysEncoderComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoSysEncoderComponent(); \
	friend struct Z_Construct_UClass_UMoSysEncoderComponent_Statics; \
public: \
	DECLARE_CLASS(UMoSysEncoderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoSysTracking"), NO_API) \
	DECLARE_SERIALIZER(UMoSysEncoderComponent)


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysEncoderComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMoSysEncoderComponent(UMoSysEncoderComponent&&); \
	UMoSysEncoderComponent(const UMoSysEncoderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoSysEncoderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoSysEncoderComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoSysEncoderComponent) \
	NO_API virtual ~UMoSysEncoderComponent();


#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysEncoderComponent_h_30_PROLOG
#define FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysEncoderComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysEncoderComponent_h_33_INCLASS_NO_PURE_DECLS \
	FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysEncoderComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOSYSTRACKING_API UClass* StaticClass<class UMoSysEncoderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mo_sys_Documents_git_MoSysTracking_unreal_PackagePlugin_output_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysEncoderComponent_h


#define FOREACH_ENUM_EMOSYSENCODERMODE(op) \
	op(EMoSysEncoderMode::MEM_Linear) \
	op(EMoSysEncoderMode::MEM_Angular) 

enum class EMoSysEncoderMode : uint8;
template<> struct TIsUEnumClass<EMoSysEncoderMode> { enum { Value = true }; };
template<> MOSYSTRACKING_API UEnum* StaticEnum<EMoSysEncoderMode>();

#define FOREACH_ENUM_EMOSYSENCODERAXIS(op) \
	op(EMoSysEncoderAxis::MEA_X) \
	op(EMoSysEncoderAxis::MEA_Y) \
	op(EMoSysEncoderAxis::MEA_Z) 

enum class EMoSysEncoderAxis : uint8;
template<> struct TIsUEnumClass<EMoSysEncoderAxis> { enum { Value = true }; };
template<> MOSYSTRACKING_API UEnum* StaticEnum<EMoSysEncoderAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
