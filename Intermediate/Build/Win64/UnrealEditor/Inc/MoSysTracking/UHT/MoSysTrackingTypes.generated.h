// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoSysTrackingTypes.h"

#ifdef MOSYSTRACKING_MoSysTrackingTypes_generated_h
#error "MoSysTrackingTypes.generated.h already included, missing '#pragma once' in MoSysTrackingTypes.h"
#endif
#define MOSYSTRACKING_MoSysTrackingTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLiveLinkMoSysStaticData ******************************************
#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysTrackingTypes_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkMoSysStaticData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLiveLinkTransformStaticData Super;


struct FLiveLinkMoSysStaticData;
// ********** End ScriptStruct FLiveLinkMoSysStaticData ********************************************

// ********** Begin ScriptStruct FLiveLinkMoSysFrameData *******************************************
#define FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysTrackingTypes_h_149_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLiveLinkTransformFrameData Super;


struct FLiveLinkMoSysFrameData;
// ********** End ScriptStruct FLiveLinkMoSysFrameData *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysTrackingTypes_h

// ********** Begin Enum EMosysTrackingProtocol ****************************************************
#define FOREACH_ENUM_EMOSYSTRACKINGPROTOCOL(op) \
	op(EMosysTrackingProtocol::F4) \
	op(EMosysTrackingProtocol::OpenTrackIO) 

enum class EMosysTrackingProtocol : uint8;
template<> struct TIsUEnumClass<EMosysTrackingProtocol> { enum { Value = true }; };
template<> MOSYSTRACKING_API UEnum* StaticEnum<EMosysTrackingProtocol>();
// ********** End Enum EMosysTrackingProtocol ******************************************************

// ********** Begin Enum EMoSysTrackingStatus ******************************************************
#define FOREACH_ENUM_EMOSYSTRACKINGSTATUS(op) \
	op(EMoSysTrackingStatus::Undefined) \
	op(EMoSysTrackingStatus::Tracking) \
	op(EMoSysTrackingStatus::OpticalGood) \
	op(EMoSysTrackingStatus::OpticalAcceptable) \
	op(EMoSysTrackingStatus::OpticalUnreliable) \
	op(EMoSysTrackingStatus::OpticalUnstable) \
	op(EMoSysTrackingStatus::OpticalLost) \
	op(EMoSysTrackingStatus::LostTooFewStars) \
	op(EMoSysTrackingStatus::Searching) \
	op(EMoSysTrackingStatus::BusyOrWaiting) \
	op(EMoSysTrackingStatus::BusyLoadingMap) \
	op(EMoSysTrackingStatus::NoMapLoaded) \
	op(EMoSysTrackingStatus::TestSignal) \
	op(EMoSysTrackingStatus::MechEncOnly) \
	op(EMoSysTrackingStatus::IOError) \
	op(EMoSysTrackingStatus::Waiting) \
	op(EMoSysTrackingStatus::LoadingSystem) \
	op(EMoSysTrackingStatus::InternalError) 

enum class EMoSysTrackingStatus : uint8;
template<> struct TIsUEnumClass<EMoSysTrackingStatus> { enum { Value = true }; };
template<> MOSYSTRACKING_API UEnum* StaticEnum<EMoSysTrackingStatus>();
// ********** End Enum EMoSysTrackingStatus ********************************************************

// ********** Begin Enum EMoSysExtenderSettings ****************************************************
#define FOREACH_ENUM_EMOSYSEXTENDERSETTINGS(op) \
	op(EMoSysExtenderSettings::notAvailable) \
	op(EMoSysExtenderSettings::unknown) \
	op(EMoSysExtenderSettings::x0_8) \
	op(EMoSysExtenderSettings::x1_2) \
	op(EMoSysExtenderSettings::x1_4) \
	op(EMoSysExtenderSettings::x1_5) \
	op(EMoSysExtenderSettings::x1_6) \
	op(EMoSysExtenderSettings::x2_0) 

enum class EMoSysExtenderSettings : uint8;
template<> struct TIsUEnumClass<EMoSysExtenderSettings> { enum { Value = true }; };
template<> MOSYSTRACKING_API UEnum* StaticEnum<EMoSysExtenderSettings>();
// ********** End Enum EMoSysExtenderSettings ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
