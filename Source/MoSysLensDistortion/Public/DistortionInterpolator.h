// Copyright 2023 Mo-Sys Engineering. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MoSysLensModel.h"
#include "FLensSetup.h"
#include "DistortionInterpolator.generated.h"

namespace mosys
{
    class DistortionCoefficientsBuilder;
    struct DistortionCoefficients;
}

DECLARE_LOG_CATEGORY_EXTERN(LogMoSysDistortionInterpolator, Log, All);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLensCalSaveFinished, bool, Result);

// Following this style for enum declaration:
// https://gist.github.com/trentpolack/ad361a4d3d6e46d1a1ff82c03a997f28
//
UENUM(BlueprintType)		
namespace DistortionInterpolationType
{
    enum Type
    {
        Smoothed    UMETA(DisplayName = "smoothed"),
        Linear      UMETA(DisplayName = "linear"),
        None        UMETA(DisplayName = "none"),
        Max         UMETA(Hidden)
    };
}

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) , 
        Category = "Distortion|DataSource",
        HideCategories=("Tags","Cooking","AssetUserData","Collision","Activation"))
class UDistortionInterpolator : public UActorComponent
{
    GENERATED_BODY()

public:
    // Sets default values for this component's properties
    UDistortionInterpolator();


protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    UFUNCTION(BlueprintPure, CallInEditor, Category = "Mo-Sys|LensDistortion")
    void GetDistortionCoefficientsForLensData(float focus, float zoom, FMoSysLensParameters &OutCoefficients);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    bool ReverseZoom = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    bool ReverseFocus = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    bool EnableFocalDistance = false;

    UPROPERTY(BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    FLensSetup CurrentLensSetup;

    UPROPERTY(BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    FString LensData;

    UPROPERTY(BlueprintReadWrite, SaveGame, BlueprintSetter = Setter_interpolationType, Category = "Mo-Sys|LensDistortion")
    TEnumAsByte< DistortionInterpolationType::Type> InterpolationType = DistortionInterpolationType::Smoothed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category = "Mo-Sys|LensDistortion")
    float NumOfBasisSplinesNearWide = 35;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category = "Mo-Sys|LensDistortion")
    float AlphaNearWide = 0.01;

    UFUNCTION(BlueprintSetter, Category = "Mo-Sys|LensDistortion")
    void Setter_interpolationType(TEnumAsByte< DistortionInterpolationType::Type> Val)
    {
        InterpolationType = Val;
        RefreshInterpolationType();
    }

    UFUNCTION(BlueprintCallable,CallInEditor, Category = "Mo-Sys|LensDistortion")
    void SetDistortionCoefficientsForLensData(float Focus, float Zoom, const FMoSysLensParameters &InCoefficients);

    UFUNCTION(BlueprintCallable, CallInEditor, Category = "Mo-Sys|LensDistortion")
    bool SaveLensCal();
    
    // Saves calibration asyncronously and executes OnLensCalSaveFinished once done
    UFUNCTION(BlueprintCallable, CallInEditor, Category = "Mo-Sys|LensDistortion")
    void SaveLensCalAsync();
    
    // Is description complete enough to meaningfully describe lens?
    UFUNCTION(BlueprintCallable, CallInEditor, Category = "Mo-Sys|LensDistortion")
    static bool IsDesriptionComplete(const FLensFileDescription& descr);

    // Update the lens distortion, from lensCalPath
    UFUNCTION(BlueprintCallable, CallInEditor, Category = "Mo-Sys|LensDistortion")
    bool RefreshLensDistortion();

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    bool AddFocalDistancePoint(float FocusValue, float FocalDistance);

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    bool HasFocalDistance();

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    void ClearFocalDistance();

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    void UpdateLensSetup();

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    void GetSamplePoints(TArray<float>& ZoomPoints, TArray<float>& FocusPoints);

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    void GetFocalDistanceTable(TArray<float>& FocusPoints, TArray<float>& FocalDistances);

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    bool AddNewSamplePoint(float FocusEncValue, float ZoomEncValue);

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    void ResetGlobalTweaks();

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    void SetShouldRecomputeDistortionFromFxUndist(bool bShouldRecompute);

    UFUNCTION(BlueprintPure, Category = "Mo-Sys|LensDistortion")
    bool GetShouldRecomputeDistortionFromFxUndist();

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    void AddFxTweakNearWide(float ZoomValueTicks, float OrigFx, float NewFx);

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    void AddCxTweakNearWide(float ZoomValueTicks, float OrigCx, float NewCx);

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    void AddCyTweakNearWide(float ZoomValueTicks, float OrigCy, float NewCy);

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    void AddEPDTweakNearWide(float ZoomValueTicks, float OrigEPD, float NewEPD);

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    bool RemoveFxTweakNearWide(float ZoomValueTicks);

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    bool RemoveCxTweakNearWide(float ZoomValueTicks);

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    bool RemoveCyTweakNearWide(float ZoomValueTicks);

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    bool RemoveEPDTweakNearWide(float ZoomValueTicks);

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    bool ClearNearWideSplines();

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    bool GenerateAllNearWideSplines();

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    bool GenerateFxSplineNearWide();

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    bool GenerateCxSplineNearWide();

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    bool GenerateCySplineNearWide();

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    bool GenerateEPDSplineNearWide();

    UFUNCTION(BlueprintPure, Category = "Mo-Sys|LensDistortion")
    float GetFxSplineValue(float ZoomValueTicks);

    UFUNCTION(BlueprintPure, Category = "Mo-Sys|LensDistortion")
    float GetCxSplineValue(float ZoomValueTicks);

    UFUNCTION(BlueprintPure, Category = "Mo-Sys|LensDistortion")
    float GetCySplineValue(float ZoomValueTicks);

    UFUNCTION(BlueprintPure, Category = "Mo-Sys|LensDistortion")
    float GetEPDSplineValue(float ZoomValueTicks);

    UPROPERTY(BlueprintAssignable, Category = "Mo-Sys|LensDistortion")
    FLensCalSaveFinished OnLensCalSaveFinished;

#if WITH_EDITOR
    void PostEditChangeProperty(struct FPropertyChangedEvent& e) override;
#endif

    void PostDuplicate(bool bDuplicateForPIE);
        
private: 
    
    TSharedPtr< mosys::DistortionCoefficientsBuilder > CoefficientBuilder;

    void RefreshLensSetup();

    void RefreshInterpolationType();

    bool ShouldRunOnFirstTick = true;
    
};

