// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysLiveLinkController.h"
#include "MoSysTrackingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoSysLiveLinkController() {}

// ********** Begin Cross Module References ********************************************************
CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkTransformController();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortUpdatable_NoRegister();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkController();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysLiveLinkController_NoRegister();
MOSYSTRACKING_API UEnum* Z_Construct_UEnum_MoSysTracking_EMoSysTrackingStatus();
MOSYSTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData();
UPackage* Z_Construct_UPackage__Script_MoSysTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoSysLiveLinkController Function HasValidData ***************************
struct Z_Construct_UFunction_UMoSysLiveLinkController_HasValidData_Statics
{
	struct MoSysLiveLinkController_eventHasValidData_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MoSysLiveLinkController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMoSysLiveLinkController_HasValidData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoSysLiveLinkController_eventHasValidData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoSysLiveLinkController_HasValidData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoSysLiveLinkController_eventHasValidData_Parms), &Z_Construct_UFunction_UMoSysLiveLinkController_HasValidData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoSysLiveLinkController_HasValidData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoSysLiveLinkController_HasValidData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkController_HasValidData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoSysLiveLinkController_HasValidData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoSysLiveLinkController, nullptr, "HasValidData", Z_Construct_UFunction_UMoSysLiveLinkController_HasValidData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkController_HasValidData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoSysLiveLinkController_HasValidData_Statics::MoSysLiveLinkController_eventHasValidData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoSysLiveLinkController_HasValidData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoSysLiveLinkController_HasValidData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoSysLiveLinkController_HasValidData_Statics::MoSysLiveLinkController_eventHasValidData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoSysLiveLinkController_HasValidData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoSysLiveLinkController_HasValidData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoSysLiveLinkController::execHasValidData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasValidData();
	P_NATIVE_END;
}
// ********** End Class UMoSysLiveLinkController Function HasValidData *****************************

// ********** Begin Class UMoSysLiveLinkController *************************************************
void UMoSysLiveLinkController::StaticRegisterNativesUMoSysLiveLinkController()
{
	UClass* Class = UMoSysLiveLinkController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HasValidData", &UMoSysLiveLinkController::execHasValidData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoSysLiveLinkController;
UClass* UMoSysLiveLinkController::GetPrivateStaticClass()
{
	using TClass = UMoSysLiveLinkController;
	if (!Z_Registration_Info_UClass_UMoSysLiveLinkController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoSysLiveLinkController"),
			Z_Registration_Info_UClass_UMoSysLiveLinkController.InnerSingleton,
			StaticRegisterNativesUMoSysLiveLinkController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMoSysLiveLinkController.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoSysLiveLinkController_NoRegister()
{
	return UMoSysLiveLinkController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoSysLiveLinkController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom Live Link Controller for Mo-Sys Tracking Data.\n */" },
		{ "IncludePath", "MoSysLiveLinkController.h" },
		{ "ModuleRelativePath", "Private/MoSysLiveLinkController.h" },
		{ "ToolTip", "Custom Live Link Controller for Mo-Sys Tracking Data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingStatusString_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "DisplayName", "Tracking Status" },
		{ "ModuleRelativePath", "Private/MoSysLiveLinkController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingStatus_MetaData[] = {
		{ "ModuleRelativePath", "Private/MoSysLiveLinkController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timecode_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "DisplayName", "Timecode" },
		{ "ModuleRelativePath", "Private/MoSysLiveLinkController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingFrame_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "DisplayName", "Tracking Data" },
		{ "ModuleRelativePath", "Private/MoSysLiveLinkController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LiveLinkScaleFactor_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "DisplayName", "Scale Live Link Data" },
		{ "ModuleRelativePath", "Private/MoSysLiveLinkController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogDropFrame_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "DisplayName", "Log Drop Frame" },
		{ "ModuleRelativePath", "Private/MoSysLiveLinkController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldPan_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "DisplayName", "Should Pan" },
		{ "ModuleRelativePath", "Private/MoSysLiveLinkController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldTilt_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "DisplayName", "Should Tilt" },
		{ "ModuleRelativePath", "Private/MoSysLiveLinkController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertPan_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "Comment", "/**  Invert the pan encoder values */" },
		{ "ModuleRelativePath", "Private/MoSysLiveLinkController.h" },
		{ "ToolTip", "Invert the pan encoder values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertTilt_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "Comment", "/**  Invert the tilt encoder values */" },
		{ "ModuleRelativePath", "Private/MoSysLiveLinkController.h" },
		{ "ToolTip", "Invert the tilt encoder values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameDelay_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking|Delay" },
		{ "ClampMax", "50" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Frame Delay" },
		{ "ModuleRelativePath", "Private/MoSysLiveLinkController.h" },
		{ "UIMax", "50" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCurrentZoom_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking|Delay" },
		{ "DisplayName", "Use current zoom" },
		{ "ModuleRelativePath", "Private/MoSysLiveLinkController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCurrentRotation_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking|Delay" },
		{ "DisplayName", "Use current rotation" },
		{ "ModuleRelativePath", "Private/MoSysLiveLinkController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StalledFrameCounter_MetaData[] = {
		{ "ModuleRelativePath", "Private/MoSysLiveLinkController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LensDistortionHandler_MetaData[] = {
		{ "Comment", "/** Cached distortion handler associated with attached camera component */" },
		{ "ModuleRelativePath", "Private/MoSysLiveLinkController.h" },
		{ "ToolTip", "Cached distortion handler associated with attached camera component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistortionProducerID_MetaData[] = {
		{ "Comment", "/** Unique identifier representing the source of distortion data */" },
		{ "ModuleRelativePath", "Private/MoSysLiveLinkController.h" },
		{ "ToolTip", "Unique identifier representing the source of distortion data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScaleOverscan_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "Comment", "/** Whether to scale the computed overscan by the overscan percentage */" },
		{ "ModuleRelativePath", "Private/MoSysLiveLinkController.h" },
		{ "ToolTip", "Whether to scale the computed overscan by the overscan percentage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverscanMultiplier_MetaData[] = {
		{ "Category", "Mo-Sys|Tracking" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The percentage of the computed overscan that should be applied to the target camera */" },
		{ "EditCondition", "bScaleOverscan" },
		{ "ModuleRelativePath", "Private/MoSysLiveLinkController.h" },
		{ "ToolTip", "The percentage of the computed overscan that should be applied to the target camera" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TrackingStatusString;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackingStatus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Timecode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackingFrame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LiveLinkScaleFactor;
	static void NewProp_LogDropFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LogDropFrame;
	static void NewProp_bShouldPan_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldPan;
	static void NewProp_bShouldTilt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTilt;
	static void NewProp_bInvertPan_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertPan;
	static void NewProp_bInvertTilt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertTilt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameDelay;
	static void NewProp_bUseCurrentZoom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCurrentZoom;
	static void NewProp_bUseCurrentRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCurrentRotation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StalledFrameCounter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LensDistortionHandler;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionProducerID;
	static void NewProp_bScaleOverscan_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleOverscan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverscanMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoSysLiveLinkController_HasValidData, "HasValidData" }, // 3455097379
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoSysLiveLinkController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_TrackingStatusString = { "TrackingStatusString", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLiveLinkController, TrackingStatusString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingStatusString_MetaData), NewProp_TrackingStatusString_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_TrackingStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_TrackingStatus = { "TrackingStatus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLiveLinkController, TrackingStatus), Z_Construct_UEnum_MoSysTracking_EMoSysTrackingStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingStatus_MetaData), NewProp_TrackingStatus_MetaData) }; // 267727503
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_Timecode = { "Timecode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLiveLinkController, Timecode), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timecode_MetaData), NewProp_Timecode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_TrackingFrame = { "TrackingFrame", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLiveLinkController, TrackingFrame), Z_Construct_UScriptStruct_FLiveLinkMoSysFrameData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingFrame_MetaData), NewProp_TrackingFrame_MetaData) }; // 1188048775
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_LiveLinkScaleFactor = { "LiveLinkScaleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLiveLinkController, LiveLinkScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LiveLinkScaleFactor_MetaData), NewProp_LiveLinkScaleFactor_MetaData) };
void Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_LogDropFrame_SetBit(void* Obj)
{
	((UMoSysLiveLinkController*)Obj)->LogDropFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_LogDropFrame = { "LogDropFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysLiveLinkController), &Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_LogDropFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogDropFrame_MetaData), NewProp_LogDropFrame_MetaData) };
void Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bShouldPan_SetBit(void* Obj)
{
	((UMoSysLiveLinkController*)Obj)->bShouldPan = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bShouldPan = { "bShouldPan", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysLiveLinkController), &Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bShouldPan_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldPan_MetaData), NewProp_bShouldPan_MetaData) };
void Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bShouldTilt_SetBit(void* Obj)
{
	((UMoSysLiveLinkController*)Obj)->bShouldTilt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bShouldTilt = { "bShouldTilt", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysLiveLinkController), &Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bShouldTilt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldTilt_MetaData), NewProp_bShouldTilt_MetaData) };
void Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bInvertPan_SetBit(void* Obj)
{
	((UMoSysLiveLinkController*)Obj)->bInvertPan = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bInvertPan = { "bInvertPan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysLiveLinkController), &Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bInvertPan_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertPan_MetaData), NewProp_bInvertPan_MetaData) };
void Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bInvertTilt_SetBit(void* Obj)
{
	((UMoSysLiveLinkController*)Obj)->bInvertTilt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bInvertTilt = { "bInvertTilt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysLiveLinkController), &Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bInvertTilt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertTilt_MetaData), NewProp_bInvertTilt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_FrameDelay = { "FrameDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLiveLinkController, FrameDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameDelay_MetaData), NewProp_FrameDelay_MetaData) };
void Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bUseCurrentZoom_SetBit(void* Obj)
{
	((UMoSysLiveLinkController*)Obj)->bUseCurrentZoom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bUseCurrentZoom = { "bUseCurrentZoom", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysLiveLinkController), &Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bUseCurrentZoom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCurrentZoom_MetaData), NewProp_bUseCurrentZoom_MetaData) };
void Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bUseCurrentRotation_SetBit(void* Obj)
{
	((UMoSysLiveLinkController*)Obj)->bUseCurrentRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bUseCurrentRotation = { "bUseCurrentRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysLiveLinkController), &Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bUseCurrentRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCurrentRotation_MetaData), NewProp_bUseCurrentRotation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_StalledFrameCounter = { "StalledFrameCounter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLiveLinkController, StalledFrameCounter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StalledFrameCounter_MetaData), NewProp_StalledFrameCounter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_LensDistortionHandler = { "LensDistortionHandler", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLiveLinkController, LensDistortionHandler), Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LensDistortionHandler_MetaData), NewProp_LensDistortionHandler_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_DistortionProducerID = { "DistortionProducerID", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLiveLinkController, DistortionProducerID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistortionProducerID_MetaData), NewProp_DistortionProducerID_MetaData) };
void Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bScaleOverscan_SetBit(void* Obj)
{
	((UMoSysLiveLinkController*)Obj)->bScaleOverscan = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bScaleOverscan = { "bScaleOverscan", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysLiveLinkController), &Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bScaleOverscan_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScaleOverscan_MetaData), NewProp_bScaleOverscan_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_OverscanMultiplier = { "OverscanMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLiveLinkController, OverscanMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverscanMultiplier_MetaData), NewProp_OverscanMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoSysLiveLinkController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_TrackingStatusString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_TrackingStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_TrackingStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_Timecode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_TrackingFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_LiveLinkScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_LogDropFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bShouldPan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bShouldTilt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bInvertPan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bInvertTilt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_FrameDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bUseCurrentZoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bUseCurrentRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_StalledFrameCounter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_LensDistortionHandler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_DistortionProducerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_bScaleOverscan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLiveLinkController_Statics::NewProp_OverscanMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoSysLiveLinkController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkTransformController,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMoSysLensDistortUpdatable_NoRegister, (int32)VTABLE_OFFSET(UMoSysLiveLinkController, IMoSysLensDistortUpdatable), false },  // 1675094303
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysLiveLinkController_Statics::ClassParams = {
	&UMoSysLiveLinkController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMoSysLiveLinkController_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkController_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLiveLinkController_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysLiveLinkController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysLiveLinkController()
{
	if (!Z_Registration_Info_UClass_UMoSysLiveLinkController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysLiveLinkController.OuterSingleton, Z_Construct_UClass_UMoSysLiveLinkController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysLiveLinkController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLiveLinkController);
UMoSysLiveLinkController::~UMoSysLiveLinkController() {}
// ********** End Class UMoSysLiveLinkController ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Private_MoSysLiveLinkController_h__Script_MoSysTracking_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoSysLiveLinkController, UMoSysLiveLinkController::StaticClass, TEXT("UMoSysLiveLinkController"), &Z_Registration_Info_UClass_UMoSysLiveLinkController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLiveLinkController), 2286492031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Private_MoSysLiveLinkController_h__Script_MoSysTracking_926420485(TEXT("/Script/MoSysTracking"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Private_MoSysLiveLinkController_h__Script_MoSysTracking_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Private_MoSysLiveLinkController_h__Script_MoSysTracking_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
