// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysTrackingTypes.h"
#include "MoSysLensModel.h"
#include "MoSysTimecodeWrapper.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoSysTrackingTypes() {}

// ********** Begin Cross Module References ********************************************************
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformFrameData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformStaticData();
MOSYSLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FMoSysLensParameters();
MOSYSTRACKING_API UEnum* Z_Construct_UEnum_MoSysTracking_EMoSysExtenderSettings();
MOSYSTRACKING_API UEnum* Z_Construct_UEnum_MoSysTracking_EMosysTrackingProtocol();
MOSYSTRACKING_API UEnum* Z_Construct_UEnum_MoSysTracking_EMoSysTrackingStatus();
MOSYSTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData();
MOSYSTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMoSysStaticData();
MOSYSTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FMoSysTimecodeWrapper();
UPackage* Z_Construct_UPackage__Script_MoSysTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMosysTrackingProtocol ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMosysTrackingProtocol;
static UEnum* EMosysTrackingProtocol_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMosysTrackingProtocol.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMosysTrackingProtocol.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoSysTracking_EMosysTrackingProtocol, (UObject*)Z_Construct_UPackage__Script_MoSysTracking(), TEXT("EMosysTrackingProtocol"));
	}
	return Z_Registration_Info_UEnum_EMosysTrackingProtocol.OuterSingleton;
}
template<> MOSYSTRACKING_API UEnum* StaticEnum<EMosysTrackingProtocol>()
{
	return EMosysTrackingProtocol_StaticEnum();
}
struct Z_Construct_UEnum_MoSysTracking_EMosysTrackingProtocol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "F4.Name", "EMosysTrackingProtocol::F4" },
		{ "ModuleRelativePath", "Public/MoSysTrackingTypes.h" },
		{ "OpenTrackIO.Name", "EMosysTrackingProtocol::OpenTrackIO" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMosysTrackingProtocol::F4", (int64)EMosysTrackingProtocol::F4 },
		{ "EMosysTrackingProtocol::OpenTrackIO", (int64)EMosysTrackingProtocol::OpenTrackIO },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoSysTracking_EMosysTrackingProtocol_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MoSysTracking,
	nullptr,
	"EMosysTrackingProtocol",
	"EMosysTrackingProtocol",
	Z_Construct_UEnum_MoSysTracking_EMosysTrackingProtocol_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MoSysTracking_EMosysTrackingProtocol_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MoSysTracking_EMosysTrackingProtocol_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MoSysTracking_EMosysTrackingProtocol_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MoSysTracking_EMosysTrackingProtocol()
{
	if (!Z_Registration_Info_UEnum_EMosysTrackingProtocol.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMosysTrackingProtocol.InnerSingleton, Z_Construct_UEnum_MoSysTracking_EMosysTrackingProtocol_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMosysTrackingProtocol.InnerSingleton;
}
// ********** End Enum EMosysTrackingProtocol ******************************************************

// ********** Begin Enum EMoSysTrackingStatus ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoSysTrackingStatus;
static UEnum* EMoSysTrackingStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMoSysTrackingStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMoSysTrackingStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoSysTracking_EMoSysTrackingStatus, (UObject*)Z_Construct_UPackage__Script_MoSysTracking(), TEXT("EMoSysTrackingStatus"));
	}
	return Z_Registration_Info_UEnum_EMoSysTrackingStatus.OuterSingleton;
}
template<> MOSYSTRACKING_API UEnum* StaticEnum<EMoSysTrackingStatus>()
{
	return EMoSysTrackingStatus_StaticEnum();
}
struct Z_Construct_UEnum_MoSysTracking_EMoSysTrackingStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BusyLoadingMap.DisplayName", "Busy Loading Map" },
		{ "BusyLoadingMap.Name", "EMoSysTrackingStatus::BusyLoadingMap" },
		{ "BusyOrWaiting.DisplayName", "Busy Or Waiting" },
		{ "BusyOrWaiting.Name", "EMoSysTrackingStatus::BusyOrWaiting" },
		{ "InternalError.DisplayName", "Internal Error" },
		{ "InternalError.Name", "EMoSysTrackingStatus::InternalError" },
		{ "IOError.DisplayName", "IO Error" },
		{ "IOError.Name", "EMoSysTrackingStatus::IOError" },
		{ "LoadingSystem.Comment", "/* \n    *Currently, a StrarTracker device advertises the service when the host OS is initialising\n    * therefore before the actual StrarTracker system is running. So this state is represented\n    * by the LoadingSystem\n    */" },
		{ "LoadingSystem.DisplayName", "Loading System" },
		{ "LoadingSystem.Name", "EMoSysTrackingStatus::LoadingSystem" },
		{ "LoadingSystem.ToolTip", "*Currently, a StrarTracker device advertises the service when the host OS is initialising\n* therefore before the actual StrarTracker system is running. So this state is represented\n* by the LoadingSystem" },
		{ "LostTooFewStars.DisplayName", "Lost Too Few Stars" },
		{ "LostTooFewStars.Name", "EMoSysTrackingStatus::LostTooFewStars" },
		{ "MechEncOnly.DisplayName", "Mech Enc Only" },
		{ "MechEncOnly.Name", "EMoSysTrackingStatus::MechEncOnly" },
		{ "ModuleRelativePath", "Public/MoSysTrackingTypes.h" },
		{ "NoMapLoaded.DisplayName", "No Map Loaded" },
		{ "NoMapLoaded.Name", "EMoSysTrackingStatus::NoMapLoaded" },
		{ "OpticalAcceptable.DisplayName", "Optical Acceptable" },
		{ "OpticalAcceptable.Name", "EMoSysTrackingStatus::OpticalAcceptable" },
		{ "OpticalGood.DisplayName", "Optical Good" },
		{ "OpticalGood.Name", "EMoSysTrackingStatus::OpticalGood" },
		{ "OpticalLost.DisplayName", "Optical Lost" },
		{ "OpticalLost.Name", "EMoSysTrackingStatus::OpticalLost" },
		{ "OpticalUnreliable.DisplayName", "Optical Unreliable" },
		{ "OpticalUnreliable.Name", "EMoSysTrackingStatus::OpticalUnreliable" },
		{ "OpticalUnstable.DisplayName", "Optical Unstable" },
		{ "OpticalUnstable.Name", "EMoSysTrackingStatus::OpticalUnstable" },
		{ "Searching.DisplayName", "Searching" },
		{ "Searching.Name", "EMoSysTrackingStatus::Searching" },
		{ "TestSignal.DisplayName", "Test Signal" },
		{ "TestSignal.Name", "EMoSysTrackingStatus::TestSignal" },
		{ "Tracking.DisplayName", "Tracking" },
		{ "Tracking.Name", "EMoSysTrackingStatus::Tracking" },
		{ "Undefined.DisplayName", "Undefined" },
		{ "Undefined.Name", "EMoSysTrackingStatus::Undefined" },
		{ "Waiting.DisplayName", "Waiting" },
		{ "Waiting.Name", "EMoSysTrackingStatus::Waiting" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMoSysTrackingStatus::Undefined", (int64)EMoSysTrackingStatus::Undefined },
		{ "EMoSysTrackingStatus::Tracking", (int64)EMoSysTrackingStatus::Tracking },
		{ "EMoSysTrackingStatus::OpticalGood", (int64)EMoSysTrackingStatus::OpticalGood },
		{ "EMoSysTrackingStatus::OpticalAcceptable", (int64)EMoSysTrackingStatus::OpticalAcceptable },
		{ "EMoSysTrackingStatus::OpticalUnreliable", (int64)EMoSysTrackingStatus::OpticalUnreliable },
		{ "EMoSysTrackingStatus::OpticalUnstable", (int64)EMoSysTrackingStatus::OpticalUnstable },
		{ "EMoSysTrackingStatus::OpticalLost", (int64)EMoSysTrackingStatus::OpticalLost },
		{ "EMoSysTrackingStatus::LostTooFewStars", (int64)EMoSysTrackingStatus::LostTooFewStars },
		{ "EMoSysTrackingStatus::Searching", (int64)EMoSysTrackingStatus::Searching },
		{ "EMoSysTrackingStatus::BusyOrWaiting", (int64)EMoSysTrackingStatus::BusyOrWaiting },
		{ "EMoSysTrackingStatus::BusyLoadingMap", (int64)EMoSysTrackingStatus::BusyLoadingMap },
		{ "EMoSysTrackingStatus::NoMapLoaded", (int64)EMoSysTrackingStatus::NoMapLoaded },
		{ "EMoSysTrackingStatus::TestSignal", (int64)EMoSysTrackingStatus::TestSignal },
		{ "EMoSysTrackingStatus::MechEncOnly", (int64)EMoSysTrackingStatus::MechEncOnly },
		{ "EMoSysTrackingStatus::IOError", (int64)EMoSysTrackingStatus::IOError },
		{ "EMoSysTrackingStatus::Waiting", (int64)EMoSysTrackingStatus::Waiting },
		{ "EMoSysTrackingStatus::LoadingSystem", (int64)EMoSysTrackingStatus::LoadingSystem },
		{ "EMoSysTrackingStatus::InternalError", (int64)EMoSysTrackingStatus::InternalError },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoSysTracking_EMoSysTrackingStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MoSysTracking,
	nullptr,
	"EMoSysTrackingStatus",
	"EMoSysTrackingStatus",
	Z_Construct_UEnum_MoSysTracking_EMoSysTrackingStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MoSysTracking_EMoSysTrackingStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MoSysTracking_EMoSysTrackingStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MoSysTracking_EMoSysTrackingStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MoSysTracking_EMoSysTrackingStatus()
{
	if (!Z_Registration_Info_UEnum_EMoSysTrackingStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoSysTrackingStatus.InnerSingleton, Z_Construct_UEnum_MoSysTracking_EMoSysTrackingStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMoSysTrackingStatus.InnerSingleton;
}
// ********** End Enum EMoSysTrackingStatus ********************************************************

// ********** Begin Enum EMoSysExtenderSettings ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoSysExtenderSettings;
static UEnum* EMoSysExtenderSettings_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMoSysExtenderSettings.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMoSysExtenderSettings.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoSysTracking_EMoSysExtenderSettings, (UObject*)Z_Construct_UPackage__Script_MoSysTracking(), TEXT("EMoSysExtenderSettings"));
	}
	return Z_Registration_Info_UEnum_EMoSysExtenderSettings.OuterSingleton;
}
template<> MOSYSTRACKING_API UEnum* StaticEnum<EMoSysExtenderSettings>()
{
	return EMoSysExtenderSettings_StaticEnum();
}
struct Z_Construct_UEnum_MoSysTracking_EMoSysExtenderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MoSysTrackingTypes.h" },
		{ "notAvailable.DisplayName", "Not Available" },
		{ "notAvailable.Name", "EMoSysExtenderSettings::notAvailable" },
		{ "unknown.Comment", "//Extender not available.\n" },
		{ "unknown.DisplayName", "Unknown" },
		{ "unknown.Name", "EMoSysExtenderSettings::unknown" },
		{ "unknown.ToolTip", "Extender not available." },
		{ "x0_8.Comment", "// Extender valid, but if not 1x, exact multiplier unknown.\n" },
		{ "x0_8.DisplayName", "x0.8" },
		{ "x0_8.Name", "EMoSysExtenderSettings::x0_8" },
		{ "x0_8.ToolTip", "Extender valid, but if not 1x, exact multiplier unknown." },
		{ "x1_2.DisplayName", "x1.2" },
		{ "x1_2.Name", "EMoSysExtenderSettings::x1_2" },
		{ "x1_4.DisplayName", "x1.4" },
		{ "x1_4.Name", "EMoSysExtenderSettings::x1_4" },
		{ "x1_5.DisplayName", "x1.5" },
		{ "x1_5.Name", "EMoSysExtenderSettings::x1_5" },
		{ "x1_6.DisplayName", "x1.6" },
		{ "x1_6.Name", "EMoSysExtenderSettings::x1_6" },
		{ "x2_0.DisplayName", "x2.0" },
		{ "x2_0.Name", "EMoSysExtenderSettings::x2_0" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMoSysExtenderSettings::notAvailable", (int64)EMoSysExtenderSettings::notAvailable },
		{ "EMoSysExtenderSettings::unknown", (int64)EMoSysExtenderSettings::unknown },
		{ "EMoSysExtenderSettings::x0_8", (int64)EMoSysExtenderSettings::x0_8 },
		{ "EMoSysExtenderSettings::x1_2", (int64)EMoSysExtenderSettings::x1_2 },
		{ "EMoSysExtenderSettings::x1_4", (int64)EMoSysExtenderSettings::x1_4 },
		{ "EMoSysExtenderSettings::x1_5", (int64)EMoSysExtenderSettings::x1_5 },
		{ "EMoSysExtenderSettings::x1_6", (int64)EMoSysExtenderSettings::x1_6 },
		{ "EMoSysExtenderSettings::x2_0", (int64)EMoSysExtenderSettings::x2_0 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoSysTracking_EMoSysExtenderSettings_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MoSysTracking,
	nullptr,
	"EMoSysExtenderSettings",
	"EMoSysExtenderSettings",
	Z_Construct_UEnum_MoSysTracking_EMoSysExtenderSettings_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MoSysTracking_EMoSysExtenderSettings_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MoSysTracking_EMoSysExtenderSettings_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MoSysTracking_EMoSysExtenderSettings_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MoSysTracking_EMoSysExtenderSettings()
{
	if (!Z_Registration_Info_UEnum_EMoSysExtenderSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoSysExtenderSettings.InnerSingleton, Z_Construct_UEnum_MoSysTracking_EMoSysExtenderSettings_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMoSysExtenderSettings.InnerSingleton;
}
// ********** End Enum EMoSysExtenderSettings ******************************************************

// ********** Begin ScriptStruct FLiveLinkMoSysStaticData ******************************************
static_assert(std::is_polymorphic<FLiveLinkMoSysStaticData>() == std::is_polymorphic<FLiveLinkTransformStaticData>(), "USTRUCT FLiveLinkMoSysStaticData cannot be polymorphic unless super FLiveLinkTransformStaticData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLiveLinkMoSysStaticData;
class UScriptStruct* FLiveLinkMoSysStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLiveLinkMoSysStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLiveLinkMoSysStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkMoSysStaticData, (UObject*)Z_Construct_UPackage__Script_MoSysTracking(), TEXT("LiveLinkMoSysStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_FLiveLinkMoSysStaticData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLiveLinkMoSysStaticData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MoSysTrackingTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkMoSysStaticData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkMoSysStaticData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysTracking,
	Z_Construct_UScriptStruct_FLiveLinkTransformStaticData,
	&NewStructOps,
	"LiveLinkMoSysStaticData",
	nullptr,
	0,
	sizeof(FLiveLinkMoSysStaticData),
	alignof(FLiveLinkMoSysStaticData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkMoSysStaticData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkMoSysStaticData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMoSysStaticData()
{
	if (!Z_Registration_Info_UScriptStruct_FLiveLinkMoSysStaticData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLiveLinkMoSysStaticData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkMoSysStaticData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLiveLinkMoSysStaticData.InnerSingleton;
}
// ********** End ScriptStruct FLiveLinkMoSysStaticData ********************************************

// ********** Begin ScriptStruct FLiveLinkMoSysFrameData *******************************************
static_assert(std::is_polymorphic<FLiveLinkMoSysFrameData>() == std::is_polymorphic<FLiveLinkTransformFrameData>(), "USTRUCT FLiveLinkMoSysFrameData cannot be polymorphic unless super FLiveLinkTransformFrameData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLiveLinkMoSysFrameData;
class UScriptStruct* FLiveLinkMoSysFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLiveLinkMoSysFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLiveLinkMoSysFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData, (UObject*)Z_Construct_UPackage__Script_MoSysTracking(), TEXT("LiveLinkMoSysFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_FLiveLinkMoSysFrameData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MoSysTrackingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lens_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysTrackingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingStatus_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysTrackingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawFocus_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysTrackingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawZoom_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysTrackingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawIris_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysTrackingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timecode_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysTrackingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraID_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysTrackingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameProgressiveCounter_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysTrackingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LensExtender_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysTrackingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawEncoder_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ModuleRelativePath", "Public/MoSysTrackingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Lens;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackingStatus;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RawFocus;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RawZoom;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RawIris;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Timecode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CameraID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameProgressiveCounter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LensExtender_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LensExtender;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RawEncoder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkMoSysFrameData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_Lens = { "Lens", nullptr, (EPropertyFlags)0x0010000200020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkMoSysFrameData, Lens), Z_Construct_UScriptStruct_FMoSysLensParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lens_MetaData), NewProp_Lens_MetaData) }; // 1788929806
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_TrackingStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_TrackingStatus = { "TrackingStatus", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkMoSysFrameData, TrackingStatus), Z_Construct_UEnum_MoSysTracking_EMoSysTrackingStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingStatus_MetaData), NewProp_TrackingStatus_MetaData) }; // 267727503
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_RawFocus = { "RawFocus", nullptr, (EPropertyFlags)0x0010000200020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkMoSysFrameData, RawFocus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawFocus_MetaData), NewProp_RawFocus_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_RawZoom = { "RawZoom", nullptr, (EPropertyFlags)0x0010000200020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkMoSysFrameData, RawZoom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawZoom_MetaData), NewProp_RawZoom_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_RawIris = { "RawIris", nullptr, (EPropertyFlags)0x0010000200020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkMoSysFrameData, RawIris), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawIris_MetaData), NewProp_RawIris_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_Timecode = { "Timecode", nullptr, (EPropertyFlags)0x0010000200020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkMoSysFrameData, Timecode), Z_Construct_UScriptStruct_FMoSysTimecodeWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timecode_MetaData), NewProp_Timecode_MetaData) }; // 2514525124
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_CameraID = { "CameraID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkMoSysFrameData, CameraID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraID_MetaData), NewProp_CameraID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_FrameProgressiveCounter = { "FrameProgressiveCounter", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkMoSysFrameData, FrameProgressiveCounter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameProgressiveCounter_MetaData), NewProp_FrameProgressiveCounter_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_LensExtender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_LensExtender = { "LensExtender", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkMoSysFrameData, LensExtender), Z_Construct_UEnum_MoSysTracking_EMoSysExtenderSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LensExtender_MetaData), NewProp_LensExtender_MetaData) }; // 2123048626
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_RawEncoder = { "RawEncoder", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkMoSysFrameData, RawEncoder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawEncoder_MetaData), NewProp_RawEncoder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_Lens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_TrackingStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_TrackingStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_RawFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_RawZoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_RawIris,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_Timecode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_CameraID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_FrameProgressiveCounter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_LensExtender_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_LensExtender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewProp_RawEncoder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysTracking,
	Z_Construct_UScriptStruct_FLiveLinkTransformFrameData,
	&NewStructOps,
	"LiveLinkMoSysFrameData",
	Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::PropPointers),
	sizeof(FLiveLinkMoSysFrameData),
	alignof(FLiveLinkMoSysFrameData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData()
{
	if (!Z_Registration_Info_UScriptStruct_FLiveLinkMoSysFrameData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLiveLinkMoSysFrameData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLiveLinkMoSysFrameData.InnerSingleton;
}
// ********** End ScriptStruct FLiveLinkMoSysFrameData *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysTrackingTypes_h__Script_MoSysTracking_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMosysTrackingProtocol_StaticEnum, TEXT("EMosysTrackingProtocol"), &Z_Registration_Info_UEnum_EMosysTrackingProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 66493765U) },
		{ EMoSysTrackingStatus_StaticEnum, TEXT("EMoSysTrackingStatus"), &Z_Registration_Info_UEnum_EMoSysTrackingStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 267727503U) },
		{ EMoSysExtenderSettings_StaticEnum, TEXT("EMoSysExtenderSettings"), &Z_Registration_Info_UEnum_EMoSysExtenderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2123048626U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveLinkMoSysStaticData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkMoSysStaticData_Statics::NewStructOps, TEXT("LiveLinkMoSysStaticData"), &Z_Registration_Info_UScriptStruct_FLiveLinkMoSysStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkMoSysStaticData), 1689976498U) },
		{ FLiveLinkMoSysFrameData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData_Statics::NewStructOps, TEXT("LiveLinkMoSysFrameData"), &Z_Registration_Info_UScriptStruct_FLiveLinkMoSysFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkMoSysFrameData), 2222219908U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysTrackingTypes_h__Script_MoSysTracking_2323620082(TEXT("/Script/MoSysTracking"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysTrackingTypes_h__Script_MoSysTracking_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysTrackingTypes_h__Script_MoSysTracking_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysTrackingTypes_h__Script_MoSysTracking_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysTrackingTypes_h__Script_MoSysTracking_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
