// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "CoreMinimal.h"

#include "IMoSysLensDistortion.h"
#include "MoSysLensModel.h"

#include "CameraCalibrationSubsystem.h"
#include "Engine/Engine.h"
#include "Interfaces/IPluginManager.h"
#include "Materials/MaterialInterface.h"
#include "Misc/CoreDelegates.h"
#include "Modules/ModuleManager.h"
#include "UObject/SoftObjectPtr.h"

class FMoSysLensDistortion : public IMoSysLensDistortion
{
    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;


	virtual TObjectPtr<UMaterialInterface> GetUndistortionDisplacementMaterial() override;
	virtual TObjectPtr<UMaterialInterface> GetDistortionDisplacementMaterial() override;
	virtual TObjectPtr<UMaterialInterface> GetDistortionMaterial() override;

private:
	void RegisterDistortionModels();
	void UnregisterDistortionModels();

	FDelegateHandle PostEngineInitHandle;

	TObjectPtr<UMaterialInterface> UndistortionDisplacementMaterial;
	TObjectPtr<UMaterialInterface> DistortionDisplacementMaterial;
	TObjectPtr<UMaterialInterface> DistortionMaterial;
};

void FMoSysLensDistortion::StartupModule()
{
	RegisterDistortionModels();
}

void FMoSysLensDistortion::ShutdownModule()
{
	UnregisterDistortionModels();
	if (PostEngineInitHandle.IsValid())
	{
		FCoreDelegates::OnPostEngineInit.Remove(PostEngineInitHandle);
	}
}

TObjectPtr<UMaterialInterface> FMoSysLensDistortion::GetUndistortionDisplacementMaterial()
{
	if (!UndistortionDisplacementMaterial)
	{
		const TSoftObjectPtr<UMaterialInterface> SoftUndistortionDisplacementMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath(TEXT("/MoSysVPPro/LensDistortion/M_MoSysUndistortionDisplacementMap.M_MoSysUndistortionDisplacementMap")));
		UndistortionDisplacementMaterial = TObjectPtr<UMaterialInterface>(SoftUndistortionDisplacementMaterial.LoadSynchronous());
	}
	return UndistortionDisplacementMaterial;
}

TObjectPtr<UMaterialInterface> FMoSysLensDistortion::GetDistortionDisplacementMaterial()
{
	if (!DistortionDisplacementMaterial)
	{
		const TSoftObjectPtr<UMaterialInterface> SoftDistortionDisplacementMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath(TEXT("/MoSysVPPro/LensDistortion/M_MoSysDistortionDisplacementMap.M_MoSysDistortionDisplacementMap")));
		DistortionDisplacementMaterial = TObjectPtr<UMaterialInterface>(SoftDistortionDisplacementMaterial.LoadSynchronous());
	}
	return DistortionDisplacementMaterial;
}

TObjectPtr<UMaterialInterface> FMoSysLensDistortion::GetDistortionMaterial()
{
	if (!DistortionMaterial)
	{
		const TSoftObjectPtr<UMaterialInterface> SoftDistortionMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath(TEXT("/MoSysVPPro/LensDistortion/M_MoSysDistortionPostProcess.M_MoSysDistortionPostProcess")));
		DistortionMaterial = TObjectPtr<UMaterialInterface>(SoftDistortionMaterial.LoadSynchronous());
	}
	return DistortionMaterial;
}

void FMoSysLensDistortion::RegisterDistortionModels()
{
	auto RegisterModels = [this]()
	{
		// Register all lens models defined in this module
		UCameraCalibrationSubsystem* SubSystem = GEngine->GetEngineSubsystem<UCameraCalibrationSubsystem>();
		SubSystem->RegisterDistortionModel(UMoSysLensModel::StaticClass());
	};

	if (FApp::CanEverRender())
	{
		if (GEngine && GEngine->IsInitialized())
		{
			RegisterModels();
		}
		else
		{
			PostEngineInitHandle = FCoreDelegates::OnPostEngineInit.AddLambda(RegisterModels);
		}
	}
}

void FMoSysLensDistortion::UnregisterDistortionModels()
{
	if (GEngine)
	{
		// Unregister all lens models defined in this module
		if (UCameraCalibrationSubsystem* SubSystem = GEngine->GetEngineSubsystem<UCameraCalibrationSubsystem>())
		{
			SubSystem->UnregisterDistortionModel(UMoSysLensModel::StaticClass());
		}
	}
}

IMPLEMENT_MODULE(FMoSysLensDistortion, MoSysLensDistortion)
