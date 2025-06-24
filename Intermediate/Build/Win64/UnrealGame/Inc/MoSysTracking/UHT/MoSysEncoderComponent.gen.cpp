// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysEncoderComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoSysEncoderComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysEncoderComponent();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoSysEncoderComponent_NoRegister();
MOSYSTRACKING_API UEnum* Z_Construct_UEnum_MoSysTracking_EMoSysEncoderAxis();
MOSYSTRACKING_API UEnum* Z_Construct_UEnum_MoSysTracking_EMoSysEncoderMode();
UPackage* Z_Construct_UPackage__Script_MoSysTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMoSysEncoderMode *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoSysEncoderMode;
static UEnum* EMoSysEncoderMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMoSysEncoderMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMoSysEncoderMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoSysTracking_EMoSysEncoderMode, (UObject*)Z_Construct_UPackage__Script_MoSysTracking(), TEXT("EMoSysEncoderMode"));
	}
	return Z_Registration_Info_UEnum_EMoSysEncoderMode.OuterSingleton;
}
template<> MOSYSTRACKING_API UEnum* StaticEnum<EMoSysEncoderMode>()
{
	return EMoSysEncoderMode_StaticEnum();
}
struct Z_Construct_UEnum_MoSysTracking_EMoSysEncoderMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "MEM_Angular.Comment", "/** The encoder is positioned on a rotating object. */" },
		{ "MEM_Angular.DisplayName", "Angular" },
		{ "MEM_Angular.Name", "EMoSysEncoderMode::MEM_Angular" },
		{ "MEM_Angular.ToolTip", "The encoder is positioned on a rotating object." },
		{ "MEM_Linear.Comment", "/** The encoder is travelling on a continuous line. */" },
		{ "MEM_Linear.DisplayName", "Linear" },
		{ "MEM_Linear.Name", "EMoSysEncoderMode::MEM_Linear" },
		{ "MEM_Linear.ToolTip", "The encoder is travelling on a continuous line." },
		{ "ModuleRelativePath", "Public/MoSysEncoderComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMoSysEncoderMode::MEM_Linear", (int64)EMoSysEncoderMode::MEM_Linear },
		{ "EMoSysEncoderMode::MEM_Angular", (int64)EMoSysEncoderMode::MEM_Angular },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoSysTracking_EMoSysEncoderMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MoSysTracking,
	nullptr,
	"EMoSysEncoderMode",
	"EMoSysEncoderMode",
	Z_Construct_UEnum_MoSysTracking_EMoSysEncoderMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MoSysTracking_EMoSysEncoderMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MoSysTracking_EMoSysEncoderMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MoSysTracking_EMoSysEncoderMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MoSysTracking_EMoSysEncoderMode()
{
	if (!Z_Registration_Info_UEnum_EMoSysEncoderMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoSysEncoderMode.InnerSingleton, Z_Construct_UEnum_MoSysTracking_EMoSysEncoderMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMoSysEncoderMode.InnerSingleton;
}
// ********** End Enum EMoSysEncoderMode ***********************************************************

// ********** Begin Enum EMoSysEncoderAxis *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoSysEncoderAxis;
static UEnum* EMoSysEncoderAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMoSysEncoderAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMoSysEncoderAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoSysTracking_EMoSysEncoderAxis, (UObject*)Z_Construct_UPackage__Script_MoSysTracking(), TEXT("EMoSysEncoderAxis"));
	}
	return Z_Registration_Info_UEnum_EMoSysEncoderAxis.OuterSingleton;
}
template<> MOSYSTRACKING_API UEnum* StaticEnum<EMoSysEncoderAxis>()
{
	return EMoSysEncoderAxis_StaticEnum();
}
struct Z_Construct_UEnum_MoSysTracking_EMoSysEncoderAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "MEA_X.DisplayName", "X" },
		{ "MEA_X.Name", "EMoSysEncoderAxis::MEA_X" },
		{ "MEA_Y.DisplayName", "Y" },
		{ "MEA_Y.Name", "EMoSysEncoderAxis::MEA_Y" },
		{ "MEA_Z.DisplayName", "Z" },
		{ "MEA_Z.Name", "EMoSysEncoderAxis::MEA_Z" },
		{ "ModuleRelativePath", "Public/MoSysEncoderComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMoSysEncoderAxis::MEA_X", (int64)EMoSysEncoderAxis::MEA_X },
		{ "EMoSysEncoderAxis::MEA_Y", (int64)EMoSysEncoderAxis::MEA_Y },
		{ "EMoSysEncoderAxis::MEA_Z", (int64)EMoSysEncoderAxis::MEA_Z },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoSysTracking_EMoSysEncoderAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MoSysTracking,
	nullptr,
	"EMoSysEncoderAxis",
	"EMoSysEncoderAxis",
	Z_Construct_UEnum_MoSysTracking_EMoSysEncoderAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MoSysTracking_EMoSysEncoderAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MoSysTracking_EMoSysEncoderAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MoSysTracking_EMoSysEncoderAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MoSysTracking_EMoSysEncoderAxis()
{
	if (!Z_Registration_Info_UEnum_EMoSysEncoderAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoSysEncoderAxis.InnerSingleton, Z_Construct_UEnum_MoSysTracking_EMoSysEncoderAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMoSysEncoderAxis.InnerSingleton;
}
// ********** End Enum EMoSysEncoderAxis ***********************************************************

// ********** Begin Class UMoSysEncoderComponent ***************************************************
void UMoSysEncoderComponent::StaticRegisterNativesUMoSysEncoderComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoSysEncoderComponent;
UClass* UMoSysEncoderComponent::GetPrivateStaticClass()
{
	using TClass = UMoSysEncoderComponent;
	if (!Z_Registration_Info_UClass_UMoSysEncoderComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoSysEncoderComponent"),
			Z_Registration_Info_UClass_UMoSysEncoderComponent.InnerSingleton,
			StaticRegisterNativesUMoSysEncoderComponent,
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
	return Z_Registration_Info_UClass_UMoSysEncoderComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoSysEncoderComponent_NoRegister()
{
	return UMoSysEncoderComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoSysEncoderComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Mo-Sys Encoder Component, needs a Mo-Sys Live Link to read data from a Mo-Sys Encoder and apply it to an actor in a level.\n */" },
		{ "DisplayName", "Mo Sys Encoder Component" },
		{ "IncludePath", "MoSysEncoderComponent.h" },
		{ "ModuleRelativePath", "Public/MoSysEncoderComponent.h" },
		{ "ToolTip", "Mo-Sys Encoder Component, needs a Mo-Sys Live Link to read data from a Mo-Sys Encoder and apply it to an actor in a level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEditorLiveTracking_MetaData[] = {
		{ "Category", "Mo-Sys" },
		{ "Comment", "/** Editor Live Tracking - Have this component tick in Editor as well, no just in Play Mode. */" },
		{ "DisplayName", "Editor Live Tracking" },
		{ "ModuleRelativePath", "Public/MoSysEncoderComponent.h" },
		{ "ToolTip", "Editor Live Tracking - Have this component tick in Editor as well, no just in Play Mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EncoderMode_MetaData[] = {
		{ "Category", "Mo-Sys" },
		{ "Comment", "/** Encoder Mode - Linear applies to transform, Angular applies to rotation. */" },
		{ "ModuleRelativePath", "Public/MoSysEncoderComponent.h" },
		{ "ToolTip", "Encoder Mode - Linear applies to transform, Angular applies to rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EncoderAxis_MetaData[] = {
		{ "Category", "Mo-Sys" },
		{ "Comment", "/** Encoder Axis - Axis to apply the scaling factor to. */" },
		{ "ModuleRelativePath", "Public/MoSysEncoderComponent.h" },
		{ "ToolTip", "Encoder Axis - Axis to apply the scaling factor to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Mo-Sys" },
		{ "Comment", "/** Scaling factor - Use this value to calibrate how far the encoder travels. E.g. Full turn (360 degrees) in 1800 ticks => Scale = 0.2. */" },
		{ "ModuleRelativePath", "Public/MoSysEncoderComponent.h" },
		{ "ToolTip", "Scaling factor - Use this value to calibrate how far the encoder travels. E.g. Full turn (360 degrees) in 1800 ticks => Scale = 0.2." },
	};
#endif // WITH_METADATA
	static void NewProp_bEditorLiveTracking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditorLiveTracking;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncoderMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EncoderMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncoderAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EncoderAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoSysEncoderComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMoSysEncoderComponent_Statics::NewProp_bEditorLiveTracking_SetBit(void* Obj)
{
	((UMoSysEncoderComponent*)Obj)->bEditorLiveTracking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoSysEncoderComponent_Statics::NewProp_bEditorLiveTracking = { "bEditorLiveTracking", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoSysEncoderComponent), &Z_Construct_UClass_UMoSysEncoderComponent_Statics::NewProp_bEditorLiveTracking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEditorLiveTracking_MetaData), NewProp_bEditorLiveTracking_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMoSysEncoderComponent_Statics::NewProp_EncoderMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMoSysEncoderComponent_Statics::NewProp_EncoderMode = { "EncoderMode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysEncoderComponent, EncoderMode), Z_Construct_UEnum_MoSysTracking_EMoSysEncoderMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EncoderMode_MetaData), NewProp_EncoderMode_MetaData) }; // 3460520077
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMoSysEncoderComponent_Statics::NewProp_EncoderAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMoSysEncoderComponent_Statics::NewProp_EncoderAxis = { "EncoderAxis", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysEncoderComponent, EncoderAxis), Z_Construct_UEnum_MoSysTracking_EMoSysEncoderAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EncoderAxis_MetaData), NewProp_EncoderAxis_MetaData) }; // 1667484228
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoSysEncoderComponent_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysEncoderComponent, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoSysEncoderComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysEncoderComponent_Statics::NewProp_bEditorLiveTracking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysEncoderComponent_Statics::NewProp_EncoderMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysEncoderComponent_Statics::NewProp_EncoderMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysEncoderComponent_Statics::NewProp_EncoderAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysEncoderComponent_Statics::NewProp_EncoderAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysEncoderComponent_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysEncoderComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoSysEncoderComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysEncoderComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysEncoderComponent_Statics::ClassParams = {
	&UMoSysEncoderComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMoSysEncoderComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysEncoderComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysEncoderComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysEncoderComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysEncoderComponent()
{
	if (!Z_Registration_Info_UClass_UMoSysEncoderComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysEncoderComponent.OuterSingleton, Z_Construct_UClass_UMoSysEncoderComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysEncoderComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysEncoderComponent);
UMoSysEncoderComponent::~UMoSysEncoderComponent() {}
// ********** End Class UMoSysEncoderComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysEncoderComponent_h__Script_MoSysTracking_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMoSysEncoderMode_StaticEnum, TEXT("EMoSysEncoderMode"), &Z_Registration_Info_UEnum_EMoSysEncoderMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3460520077U) },
		{ EMoSysEncoderAxis_StaticEnum, TEXT("EMoSysEncoderAxis"), &Z_Registration_Info_UEnum_EMoSysEncoderAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1667484228U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoSysEncoderComponent, UMoSysEncoderComponent::StaticClass, TEXT("UMoSysEncoderComponent"), &Z_Registration_Info_UClass_UMoSysEncoderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysEncoderComponent), 1911409642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysEncoderComponent_h__Script_MoSysTracking_263518616(TEXT("/Script/MoSysTracking"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysEncoderComponent_h__Script_MoSysTracking_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysEncoderComponent_h__Script_MoSysTracking_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysEncoderComponent_h__Script_MoSysTracking_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MoSysVPFree_Source_MoSysTracking_Public_MoSysEncoderComponent_h__Script_MoSysTracking_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
