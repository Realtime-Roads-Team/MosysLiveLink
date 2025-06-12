// Copyright 2023 Mo-Sys Engineering. All Rights Reserved.

#include "DistortionInterpolator.h"
#include "lens/DistortionCoefficientsBuilder.h"
#include "LensTweakerFunctionLibrary.h"
#include "GameFramework/Actor.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "Internationalization/Regex.h"
#include "Async/Async.h"
#include <iostream>


DEFINE_LOG_CATEGORY(LogMoSysDistortionInterpolator);

#define SHOW_DEBUG_MESSAGES 0

// Sets default values for this component's properties
UDistortionInterpolator::UDistortionInterpolator()
{
    // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
    // off to improve performance if you don't need them.
    PrimaryComponentTick.bCanEverTick = true;


    // Because lens distortion isn't initialised from lensCalPath
    // Need to update it somehere.
    // DO NOT update here, as if file is missing, may crash Unreal!!
    //RefreshLensDistortion();

    // ROB:Not Present in Json versions.
    //coefficientBuilder.SetDistortionTables(MyDistortionTables_g);
    // ...
}




// Called when the game starts
void UDistortionInterpolator::BeginPlay()
{
    Super::BeginPlay();
    
    // ROB:
    // UNSAFE HACK
    // Because actor is recreated every time it is edited in details, the actor and all it's children are re-created.
    // Because this class is re-created, the changes made to the json structure are lost, and the whole thing is re-loaded from disk!!
    // to protect against this, we use bActorSeamlessTraveled after looking at code, the unreal editor uses to propagate changes from details panel to actor,
    // this seems to be the only way to protect against this.
    /**
     * \file DistortionInterpolator.h
     * \todo the best way to ensure external classes persist in-game, despite the containing actor being edited by PIE.
     * \todo When this state is disabled.
     */
    GetOwner()->bActorSeamlessTraveled = true;

    // Because lens distortion isn't initialised from lensCalPath
    // Need to update it here.
#if SHOW_DEBUG_MESSAGES
    UE_LOG(LogMoSysDistortionInterpolator, Log, TEXT("File load reason: BeginPlay()"));
#endif
    RefreshLensDistortion();
    RefreshInterpolationType();


    // ...
    
}

#if WITH_EDITOR
void UDistortionInterpolator::PostEditChangeProperty(struct FPropertyChangedEvent& e)
{
    Super::PostEditChangeProperty(e);


    FName name = (e.MemberProperty != nullptr) ? e.MemberProperty->GetFName() : NAME_None;
    if (name == GET_MEMBER_NAME_CHECKED(UDistortionInterpolator, InterpolationType))
    {
        RefreshInterpolationType();

    }
    else if (name == GET_MEMBER_NAME_CHECKED(UDistortionInterpolator, NumOfBasisSplinesNearWide))
    {
        if (CoefficientBuilder.IsValid())
        {
            CoefficientBuilder->SetNumOfBasisSplinesForNearWide(NumOfBasisSplinesNearWide);
            GenerateAllNearWideSplines();
        }
    }
    else if (name == GET_MEMBER_NAME_CHECKED(UDistortionInterpolator, AlphaNearWide))
    {
        if (CoefficientBuilder.IsValid())
        {
            CoefficientBuilder->SetAlphaForNearWide(AlphaNearWide);
            GenerateAllNearWideSplines();
        }
    }
}
#endif

// Called every frame
void UDistortionInterpolator::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (ShouldRunOnFirstTick)
    {
        // When "Play in editor"(Pie) is active, the object will be re-created.
        // thr correct value is supposed to be present on begin play.
        // BUT.... we gind that the property isn't set by the time begin play is called, but is set by the time first tick is called.
        ShouldRunOnFirstTick = false;
#if SHOW_DEBUG_MESSAGES       
        UE_LOG(LogMoSysDistortionInterpolator, Log, TEXT("File load reason: First tick"));
#endif
        RefreshLensDistortion();
        RefreshInterpolationType();
    }

    // ...
}

void  UDistortionInterpolator::GetDistortionCoefficientsForLensData(float Focus, float Zoom, FMoSysLensParameters &OutCoefficients)
{
    if (!CoefficientBuilder.IsValid())
    {
        UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Get distortion coefficients failed: coefficientsBuilder invalid, instance %s"), *this->GetReadableName());
        return;
    }
    float zoomActual =  (!ReverseZoom ) ? Zoom  : 65535 - Zoom ;
    float focusActual = (!ReverseFocus) ? Focus : 65535 - Focus;
    LensParameters lensParam;
    if (CoefficientBuilder->GetDistortionCoefficientsForLensData(focusActual, zoomActual, lensParam))
    {
        if (!EnableFocalDistance)
        {
            lensParam.recipFocalDistance = 0;
        }
        OutCoefficients = FMoSysLensParameters(lensParam);
    }
    else
    {
        // coeffs is invalid, so use an empty FMoSysLensParameters struct, which is inherantly invalid.
        OutCoefficients = FMoSysLensParameters();
    }
}


bool UDistortionInterpolator::RefreshLensDistortion()
{
    if (!CoefficientBuilder.IsValid())
    {
        CoefficientBuilder = TSharedPtr<mosys::DistortionCoefficientsBuilder>(mosys::DistortionCoefficientsBuilder::CreateDistortionCoefficientsBuilder(), [](mosys::DistortionCoefficientsBuilder* Obj) {mosys::DistortionCoefficientsBuilder::DestroyDistortionCoefficientsBuilder(Obj); });

        CoefficientBuilder->SetInterpolationType(Interpolation::linear);
    }

    if (LensData.IsEmpty())
    {
        return false;
    }
    std::string Data = TCHAR_TO_UTF8(*LensData);

    bool Result = CoefficientBuilder->LoadLensCalJson(Data);
#if SHOW_DEBUG_MESSAGES
    UE_LOG(LogMoSysDistortionInterpolator, Log, TEXT("File load result: %d"), Result);
#endif
    RefreshLensSetup();
    return Result;
}

void UDistortionInterpolator::RefreshLensSetup()
{
    if (!CoefficientBuilder.IsValid())
    {
        UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Refresh lens setup failed: coefficientsBuilder invalid"));
        return;
    }
    CurrentLensSetup = FLensSetup();

    CurrentLensSetup.Description = CoefficientBuilder->GetLensFileDescription();
}

void UDistortionInterpolator::RefreshInterpolationType()
{
    if (!CoefficientBuilder.IsValid())
    {
        UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Refresh interpolation failed: coefficientsBuilder invalid"));
        return;
    }
    CoefficientBuilder->SetInterpolationType(static_cast<Interpolation>(InterpolationType.GetValue()));
    //RefreshLensDistortion();
}

void UDistortionInterpolator::SetDistortionCoefficientsForLensData(float Focus, float Zoom, const FMoSysLensParameters &InCoefficients)
{
    if (!CoefficientBuilder.IsValid())
    {
        UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Save data failed: coefficientsBuilder invalid"));
        return;
    }
    float zoomActual = (!ReverseZoom) ? Zoom : 65535 - Zoom;
    float focusActual = (!ReverseFocus) ? Focus : 65535 - Focus;
    LensParameters dummy;
    if (CoefficientBuilder->GetDistortionCoefficientsForLensData(focusActual, zoomActual, dummy))
    {
        CoefficientBuilder->InsertCoefficients(InCoefficients);
    }
}


bool  UDistortionInterpolator::SaveLensCal()
{
    if (!CoefficientBuilder.IsValid())
    {
        UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("File save failed: coefficientsBuilder invalid"));
        return false;
    }

    bool Result = true;

    std::string Data(TCHAR_TO_UTF8(*LensData));
    if (ReverseZoom)
    {
        CoefficientBuilder->ReverseZoomInLensFile();
    }
    if (ReverseFocus)
    {
        CoefficientBuilder->ReverseFocusInLensFile();
    }
    CoefficientBuilder->UpdateSmoothedTables();
    Result = CoefficientBuilder->SaveLensCalJson(Data);
    LensData = Data.c_str();

    //clear reverse flags on success
    if (Result)
    { 
        if (ReverseZoom)
        {
            ReverseZoom = false;
        }
        if (ReverseFocus)
        {
            ReverseFocus = false;
        }
    }
#if SHOW_DEBUG_MESSAGES
    UE_LOG(LogMoSysDistortionInterpolator, Log, TEXT("File save result: %d"), Result);
#endif
    RefreshLensDistortion();
    return Result;
}

void UDistortionInterpolator::SaveLensCalAsync()
{
    Async(EAsyncExecution::Thread, [&]()
        {
            bool bResult = SaveLensCal();
            AsyncTask(ENamedThreads::GameThread, [&, bResult]()
                {
                    OnLensCalSaveFinished.Broadcast(bResult);
                });
        });
}

// Is description complete enough to meaningfully describe lens?
// Note, we don't consider camera definition to be necessary to make complete.
bool UDistortionInterpolator::IsDesriptionComplete(const FLensFileDescription& descr)
{
    return
           !descr.LensManufacturer.IsEmpty()
        && !descr.LensModel.IsEmpty()
        && !descr.LensSerialNumber.IsEmpty();
}


void UDistortionInterpolator::PostDuplicate(bool bDuplicateForPIE)
{
#if SHOW_DEBUG_MESSAGES
    UE_LOG(LogMoSysDistortionInterpolator, Log, TEXT("Post duplicate for object %u"), (uintptr_t)this);
#endif
}

bool UDistortionInterpolator::AddFocalDistancePoint(float FocusValue, float FocalDistance)
{
    bool result = false;
    if (CoefficientBuilder.IsValid())
    {
        result = CoefficientBuilder->AddFocalDistancePoint(FocusValue, FocalDistance);
    }
#if SHOW_DEBUG_MESSAGES
    UE_LOG(LogMoSysDistortionInterpolator, Log, TEXT("Add focal distance point result: %d"), result);
#endif
    return result;
}

bool UDistortionInterpolator::HasFocalDistance()
{
    if (CoefficientBuilder.IsValid())
    {
        return CoefficientBuilder->HasFocalDistance();
    }
    else
    {
        return false;
    }
}


void UDistortionInterpolator::ClearFocalDistance()
{
    if (CoefficientBuilder.IsValid())
    {
        return CoefficientBuilder->ClearFocalDistance();
    }
}

void UDistortionInterpolator::UpdateLensSetup()
{
    if (CoefficientBuilder.IsValid())
    {
        LensSetup SetupToApply = LensSetup(CurrentLensSetup);
        CoefficientBuilder->SetLensSetup(SetupToApply);
    }
}

void UDistortionInterpolator::GetSamplePoints(TArray<float>& ZoomPoints, TArray<float>& FocusPoints)
{
    if (CoefficientBuilder.IsValid())
    {
        std::vector<float> ZoomList;
        std::vector<float> FocusList;
        CoefficientBuilder->GetSamplePoints(ZoomList, FocusList);
        ZoomPoints.Empty();
        if (ZoomList.size() > 0)
        {
            for (auto ZoomValue : ZoomList)
            {
                ZoomPoints.Add(ZoomValue);
            }
        }

        FocusPoints.Empty();
        if (FocusList.size() > 0)
        {
            for (auto FocusValue : FocusList)
            {
                FocusPoints.Add(FocusValue);
            }
        }
    }
}

void UDistortionInterpolator::GetFocalDistanceTable(TArray<float>& FocusPoints, TArray<float>& FocalDistances)
{
    if (CoefficientBuilder.IsValid())
    {
        std::vector<float> FocusList;
        std::vector<float> FocalDistanceList;
        CoefficientBuilder->GetFocalDistanceTable(FocusList, FocalDistanceList);

        FocusPoints.Empty();
        if (FocusList.size() > 0)
        {
            for (auto FocusValue : FocusList)
            {
                FocusPoints.Add(FocusValue);
            }
        }

        FocalDistances.Empty();
        if (FocalDistanceList.size() > 0)
        {
            for (auto FocalDistance : FocalDistanceList)
            {
                FocalDistances.Add(FocalDistance);
            }
        }
    }
}

bool UDistortionInterpolator::AddNewSamplePoint(float FocusEncValue, float ZoomEncValue)
{
    if (!CoefficientBuilder.IsValid())
    {
        UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Add new sample point failed: coefficientsBuilder invalid"));
        return false;
    }
    float ZoomActual = (!ReverseZoom) ? ZoomEncValue : 65535 - ZoomEncValue;
    float FocusActual = (!ReverseFocus) ? FocusEncValue : 65535 - FocusEncValue;
    LensParameters Dummy;
    if (CoefficientBuilder->GetDistortionCoefficientsForLensData(FocusActual, ZoomActual, Dummy))
    {
        return CoefficientBuilder->InsertNewSample();
    }
    return false;
}

void UDistortionInterpolator::ResetGlobalTweaks()
{
    if (!CoefficientBuilder.IsValid())
    {
        UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Reset global tweaks failed: coefficientsBuilder invalid"));
        return;
    }
    CoefficientBuilder->ResetGlobalTweaks();

    CurrentLensSetup.UndistFxScale = 1;
    CurrentLensSetup.UndistFxOffset = 0;
    CurrentLensSetup.DistFxScale = 1;
    CurrentLensSetup.DistFxOffset = 0;
    CurrentLensSetup.CxScale = 1;
    CurrentLensSetup.CyScale = 1;
    CurrentLensSetup.CxOffset = 0;
    CurrentLensSetup.CyOffset = 0;
    CurrentLensSetup.CxSlope = 0;
    CurrentLensSetup.CySlope = 0;
    CurrentLensSetup.EPDOffset = 0;
    CurrentLensSetup.EPDScale = 1;
}

void UDistortionInterpolator::SetShouldRecomputeDistortionFromFxUndist(bool bShouldRecompute)
{
    if (CoefficientBuilder.IsValid())
    {
        CoefficientBuilder->SetShouldComputeDistortionFromFxUndist(bShouldRecompute);
    }
}

bool UDistortionInterpolator::GetShouldRecomputeDistortionFromFxUndist()
{
    if (CoefficientBuilder.IsValid())
    {
        return CoefficientBuilder->GetShouldComputeDistortionFromFxUndist();
    }
    return false;
}

void UDistortionInterpolator::AddFxTweakNearWide(float ZoomValueTicks, float OrigFx, float NewFx)
{
    if (CoefficientBuilder.IsValid())
    {
        CoefficientBuilder->AddFxTweakNearWide(ZoomValueTicks, OrigFx, NewFx);
    }
    else
    {
        UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Add Fx Tweak failed: coefficientsBuilder invalid"));
    }
}

void UDistortionInterpolator::AddCxTweakNearWide(float ZoomValueTicks, float OrigCx, float NewCx)
{
    if (CoefficientBuilder.IsValid())
    {
        CoefficientBuilder->AddCxTweakNearWide(ZoomValueTicks, OrigCx, NewCx);
    }
    else
    {
        UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Add Cx Tweak failed: coefficientsBuilder invalid"));
    }
}

void UDistortionInterpolator::AddCyTweakNearWide(float ZoomValueTicks, float OrigCy, float NewCy)
{
    if (CoefficientBuilder.IsValid())
    {
        CoefficientBuilder->AddCyTweakNearWide(ZoomValueTicks, OrigCy, NewCy);
    }
    else
    {
        UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Add Cy Tweak failed: coefficientsBuilder invalid"));
    }
}

void UDistortionInterpolator::AddEPDTweakNearWide(float ZoomValueTicks, float OrigEPD, float NewEPD)
{
    if (CoefficientBuilder.IsValid())
    {
        CoefficientBuilder->AddEPDTweakNearWide(ZoomValueTicks, OrigEPD, NewEPD);
    }
    else
    {
        UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Add EPD Tweak failed: coefficientsBuilder invalid"));
    }
}

bool UDistortionInterpolator::RemoveFxTweakNearWide(float ZoomValueTicks)
{
    if (CoefficientBuilder.IsValid())
    {
        return CoefficientBuilder->RemoveFxTweakNearWide(ZoomValueTicks);
    }
    else
    {
        UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Remove Fx Tweak failed: coefficientsBuilder invalid"));
        return false;
    }
}

bool UDistortionInterpolator::RemoveCxTweakNearWide(float ZoomValueTicks)
{
    if (CoefficientBuilder.IsValid())
    {
        return CoefficientBuilder->RemoveCxTweakNearWide(ZoomValueTicks);
    }
    else
    {
        UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Remove Cx Tweak failed: coefficientsBuilder invalid"));
        return false;
    }
}

bool UDistortionInterpolator::RemoveCyTweakNearWide(float ZoomValueTicks)
{
    if (CoefficientBuilder.IsValid())
    {
        return CoefficientBuilder->RemoveCyTweakNearWide(ZoomValueTicks);
    }
    else
    {
        UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Remove Cy Tweak failed: coefficientsBuilder invalid"));
        return false;
    }
}

bool UDistortionInterpolator::RemoveEPDTweakNearWide(float ZoomValueTicks)
{
    if (CoefficientBuilder.IsValid())
    {
        return CoefficientBuilder->RemoveEPDTweakNearWide(ZoomValueTicks);
    }
    else
    {
        UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Remove EPD Tweak failed: coefficientsBuilder invalid"));
        return false;
    }
}

bool UDistortionInterpolator::ClearNearWideSplines()
{
    if (CoefficientBuilder.IsValid())
    {
        CoefficientBuilder->ClearNearWideSplines();
        return true;
    }
    UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Clear near wide tables failed: coefficientsBuilder invalid"));
    return false;

}

bool UDistortionInterpolator::GenerateAllNearWideSplines()
{
    if (CoefficientBuilder.IsValid())
    {
        bool bFxSplineGenerated = CoefficientBuilder->GenerateFxSplineNearWide();
        bool bCxSplineGenerated = CoefficientBuilder->GenerateCxSplineNearWide();
        bool bCySplineGenerated = CoefficientBuilder->GenerateCySplineNearWide();
        bool bEPDSplineGenerated = CoefficientBuilder->GenerateEPDSplineNearWide();

        return bFxSplineGenerated && bCxSplineGenerated && bCySplineGenerated && bEPDSplineGenerated;
    }
    UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Generate Near Wide BSplines failed: coefficientsBuilder invalid"));
    return false;
}

bool UDistortionInterpolator::GenerateFxSplineNearWide()
{
    if (CoefficientBuilder.IsValid())
    {
        return CoefficientBuilder->GenerateFxSplineNearWide();
    }
    UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Generate Fx BSpline failed: coefficientsBuilder invalid"));
    return false;
}

bool UDistortionInterpolator::GenerateCxSplineNearWide()
{
    if (CoefficientBuilder.IsValid())
    {
        return CoefficientBuilder->GenerateCxSplineNearWide();
    }
    UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Generate Cx BSpline failed: coefficientsBuilder invalid"));
    return false;
}

bool UDistortionInterpolator::GenerateCySplineNearWide()
{
    if (CoefficientBuilder.IsValid())
    {
        return CoefficientBuilder->GenerateCySplineNearWide();
    }
    UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Generate Cy BSpline failed: coefficientsBuilder invalid"));
    return false;
}

bool UDistortionInterpolator::GenerateEPDSplineNearWide()
{
    if (CoefficientBuilder.IsValid())
    {
        return CoefficientBuilder->GenerateEPDSplineNearWide();
    }
    UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Generate EPD BSpline failed: coefficientsBuilder invalid"));
    return false;
}

float UDistortionInterpolator::GetFxSplineValue(float ZoomValueTicks)
{
    if (CoefficientBuilder.IsValid())
    {
        return CoefficientBuilder->GetFxSplineValue(ZoomValueTicks);
    }
    UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Get Fx Spline Value failed: coefficientsBuilder invalid"));
    return 0;
}

float UDistortionInterpolator::GetCxSplineValue(float ZoomValueTicks)
{
    if (CoefficientBuilder.IsValid())
    {
        return CoefficientBuilder->GetCxSplineValue(ZoomValueTicks);
    }
    UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Get Cx Spline Value failed: coefficientsBuilder invalid"));
    return 0;
}

float UDistortionInterpolator::GetCySplineValue(float ZoomValueTicks)
{
    if (CoefficientBuilder.IsValid())
    {
        return CoefficientBuilder->GetCySplineValue(ZoomValueTicks);
    }
    UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Get Cy Spline Value failed: coefficientsBuilder invalid"));
    return 0;
}

float UDistortionInterpolator::GetEPDSplineValue(float ZoomValueTicks)
{
    if (CoefficientBuilder.IsValid())
    {
        return CoefficientBuilder->GetEPDSplineValue(ZoomValueTicks);
    }
    UE_LOG(LogMoSysDistortionInterpolator, Error, TEXT("Get EPD Spline Value failed: coefficientsBuilder invalid"));
    return 0;
}