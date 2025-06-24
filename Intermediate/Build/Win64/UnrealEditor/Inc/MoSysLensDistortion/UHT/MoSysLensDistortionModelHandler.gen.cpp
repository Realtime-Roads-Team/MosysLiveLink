// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysLensDistortionModelHandler.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoSysLensDistortionModelHandler() {}

// ********** Begin Cross Module References ********************************************************
CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensDistortionModelHandlerBase();
CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortionModelHandler();
MOSYSLENSDISTORTION_API UClass* Z_Construct_UClass_UMoSysLensDistortionModelHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_MoSysLensDistortion();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoSysLensDistortionModelHandler *****************************************
void UMoSysLensDistortionModelHandler::StaticRegisterNativesUMoSysLensDistortionModelHandler()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoSysLensDistortionModelHandler;
UClass* UMoSysLensDistortionModelHandler::GetPrivateStaticClass()
{
	using TClass = UMoSysLensDistortionModelHandler;
	if (!Z_Registration_Info_UClass_UMoSysLensDistortionModelHandler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoSysLensDistortionModelHandler"),
			Z_Registration_Info_UClass_UMoSysLensDistortionModelHandler.InnerSingleton,
			StaticRegisterNativesUMoSysLensDistortionModelHandler,
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
	return Z_Registration_Info_UClass_UMoSysLensDistortionModelHandler.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoSysLensDistortionModelHandler_NoRegister()
{
	return UMoSysLensDistortionModelHandler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lens distortion handler for the Mo-Sys lens model */" },
#endif
		{ "IncludePath", "MoSysLensDistortionModelHandler.h" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionModelHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lens distortion handler for the Mo-Sys lens model" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CineCameraComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoSysLensDistortionModelHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoSysLensDistortionModelHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoSysCalibrationLayerRT_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoSysLensDistortionModelHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoSysDisplacementMapRT_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoSysLensDistortionModelHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoSysUndisplacementMapRT_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoSysLensDistortionModelHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositorMaterialParameterCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoSysLensDistortionModelHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CineCameraComponent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoSysCalibrationLayerRT;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoSysDisplacementMapRT;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoSysUndisplacementMapRT;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompositorMaterialParameterCollection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoSysLensDistortionModelHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::NewProp_CineCameraComponent = { "CineCameraComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLensDistortionModelHandler, CineCameraComponent), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CineCameraComponent_MetaData), NewProp_CineCameraComponent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLensDistortionModelHandler, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::NewProp_MoSysCalibrationLayerRT = { "MoSysCalibrationLayerRT", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLensDistortionModelHandler, MoSysCalibrationLayerRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoSysCalibrationLayerRT_MetaData), NewProp_MoSysCalibrationLayerRT_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::NewProp_MoSysDisplacementMapRT = { "MoSysDisplacementMapRT", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLensDistortionModelHandler, MoSysDisplacementMapRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoSysDisplacementMapRT_MetaData), NewProp_MoSysDisplacementMapRT_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::NewProp_MoSysUndisplacementMapRT = { "MoSysUndisplacementMapRT", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLensDistortionModelHandler, MoSysUndisplacementMapRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoSysUndisplacementMapRT_MetaData), NewProp_MoSysUndisplacementMapRT_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::NewProp_CompositorMaterialParameterCollection = { "CompositorMaterialParameterCollection", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoSysLensDistortionModelHandler, CompositorMaterialParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositorMaterialParameterCollection_MetaData), NewProp_CompositorMaterialParameterCollection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::NewProp_CineCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::NewProp_MoSysCalibrationLayerRT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::NewProp_MoSysDisplacementMapRT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::NewProp_MoSysUndisplacementMapRT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::NewProp_CompositorMaterialParameterCollection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULensDistortionModelHandlerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysLensDistortion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::ClassParams = {
	&UMoSysLensDistortionModelHandler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoSysLensDistortionModelHandler()
{
	if (!Z_Registration_Info_UClass_UMoSysLensDistortionModelHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoSysLensDistortionModelHandler.OuterSingleton, Z_Construct_UClass_UMoSysLensDistortionModelHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoSysLensDistortionModelHandler.OuterSingleton;
}
UMoSysLensDistortionModelHandler::UMoSysLensDistortionModelHandler() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoSysLensDistortionModelHandler);
UMoSysLensDistortionModelHandler::~UMoSysLensDistortionModelHandler() {}
// ********** End Class UMoSysLensDistortionModelHandler *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_MoSysLensDistortionModelHandler_h__Script_MoSysLensDistortion_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoSysLensDistortionModelHandler, UMoSysLensDistortionModelHandler::StaticClass, TEXT("UMoSysLensDistortionModelHandler"), &Z_Registration_Info_UClass_UMoSysLensDistortionModelHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoSysLensDistortionModelHandler), 3012339576U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_MoSysLensDistortionModelHandler_h__Script_MoSysLensDistortion_3866749011(TEXT("/Script/MoSysLensDistortion"),
	Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_MoSysLensDistortionModelHandler_h__Script_MoSysLensDistortion_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysLensDistortion_Public_MoSysLensDistortionModelHandler_h__Script_MoSysLensDistortion_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
