// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysLiveLinkComponentController.h"

#include "MoSysLensDistortUpdatable.h"
#include "MoSysLiveLinkController.h"
#include "MoSysLiveLinkRole.h"
#include "MoSysTrackingConversions.h"

#include "GameFramework/Actor.h"
#include "LensFile.h"
#include "LiveLinkCameraController.h"
#include "LiveLinkClient.h"
#include "Roles/LiveLinkCameraRole.h"
#include "Roles/LiveLinkCameraTypes.h"

UMoSysLiveLinkComponentController::UMoSysLiveLinkComponentController()
    : ULiveLinkComponentController()
    , bUseLiveTracking(true)
    , bIsSpawned(false)
    , bIsFirstTick(true)
{
}

void UMoSysLiveLinkComponentController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (bIsFirstTick)
    {
        if (GetOwner())
        {
            bIsSpawned = GetOwner()->ActorHasTag(TEXT("SequencerActor"));
        }
        if (bIsSpawned)
        {
            // make sure to create a livelink controller even if no subject was set
            ControllerMap.Add(UMoSysLiveLinkRole::StaticClass(), nullptr);
            SetControllerClassForRole(UMoSysLiveLinkRole::StaticClass(), UMoSysLiveLinkController::StaticClass());
        }
        bIsFirstTick = false;
    }

    if (bIsSpawned)
    {
        if (UMoSysLiveLinkController* MoSysController = GetMoSysLiveLinkController())
        {
            MoSysController->TickSpawned(DeltaTime);
        }
        return;
    }
    if (bForceLensUpdate)
    {
        if (UMoSysLiveLinkController* MoSysController = GetMoSysLiveLinkController())
        {
            MoSysController->TickForceLensUpdate(DeltaTime);
        }
        return;
    }

    EMoSysTrackingStatus TrackingStatus = GetTrackingStatus();
    if (TrackingStatus != LastTrackingStatus)
    {
        TrackingStatusChanged.Broadcast(TrackingStatus == EMoSysTrackingStatus::OpticalGood);
        LastTrackingStatus = TrackingStatus;
    }
}

void UMoSysLiveLinkComponentController::OnComponentDestroyed(bool bDestroyingHierarchy)
{
    if (bIsSpawned)
    {
        TObjectPtr<ULiveLinkControllerBase>* LiveLinkController = ControllerMap.Find(UMoSysLiveLinkRole::StaticClass());
        if (LiveLinkController && *LiveLinkController)
        {
            (*LiveLinkController)->Cleanup();
        }
        ControllerMap.Empty();
    }
    Super::OnComponentDestroyed(bDestroyingHierarchy);
}

EMoSysTrackingStatus UMoSysLiveLinkComponentController::GetTrackingStatus()
{
    UMoSysLiveLinkController* MoSysController = GetMoSysLiveLinkController();
    if (MoSysController != nullptr)
    {
        return MoSysController->TrackingStatus;
    }
    return EMoSysTrackingStatus::Undefined;
}

FTimecode UMoSysLiveLinkComponentController::GetTimecode()
{
    UMoSysLiveLinkController* MoSysController = GetMoSysLiveLinkController();
    if (MoSysController != nullptr)
    {
        return MoSysController->Timecode;
    }
    return FTimecode();
}

FText UMoSysLiveLinkComponentController::GetTrackingStatusText()
{
    UMoSysLiveLinkController* MoSysController = GetMoSysLiveLinkController();
    if (MoSysController != nullptr)
    {
        return FText::FromString(MoSysController->TrackingStatusString);
    }
    return FText::FromString(MoSysTrackingConversions::UEnum2TrackingStatusString(EMoSysTrackingStatus::Undefined));
}

FLiveLinkMoSysFrameData UMoSysLiveLinkComponentController::GetTrackingData()
{
    UMoSysLiveLinkController* MoSysController = GetMoSysLiveLinkController();
    if (MoSysController != nullptr)
    {
        return MoSysController->TrackingFrame;
    }
    return FLiveLinkMoSysFrameData();
}

FLiveLinkMoSysFrameData UMoSysLiveLinkComponentController::GetLatestTrackingData()
{
    UMoSysLiveLinkController* MoSysController = GetMoSysLiveLinkController();
    if (MoSysController != nullptr)
    {
        return MoSysController->GetCurrentFrame();
    }
    return FLiveLinkMoSysFrameData();
}

FLensFileEvalData UMoSysLiveLinkComponentController::GetFreeDLensData()
{
    if (auto Controller = ControllerMap.Find(ULiveLinkCameraRole::StaticClass()))
    {
        if (ULiveLinkCameraController* CameraController = Cast<ULiveLinkCameraController>(*Controller))
        {
            return CameraController->GetLensFileEvalDataRef();
        }
        else
        {
            SetControllerClassForRole(ULiveLinkCameraRole::StaticClass(), ULiveLinkCameraController::StaticClass());
        }
    }
    return FLensFileEvalData();
}

TScriptInterface<IMoSysLensDistortUpdatable> UMoSysLiveLinkComponentController::GetMoSysLensDistortUpdatable()
{
    return GetMoSysLiveLinkController();
}

UMoSysLiveLinkController *UMoSysLiveLinkComponentController::GetMoSysLiveLinkController()
{
    if (MoSysControllerCache)
    {
        return MoSysControllerCache;
    }
    if (ControllerMap.IsEmpty())
    {
        return nullptr;
    }
    if (auto LiveLinkController = ControllerMap.Find(UMoSysLiveLinkRole::StaticClass()))
    {
        MoSysControllerCache = Cast<UMoSysLiveLinkController>(LiveLinkController->Get());
        return MoSysControllerCache;
    }
    return nullptr;
}

#if WITH_EDITOR
void UMoSysLiveLinkComponentController::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);
    if (PropertyChangedEvent.MemberProperty && PropertyChangedEvent.MemberProperty->GetFName() == "bUseLiveTracking")
    {
        SetComponentTickEnabled(bUseLiveTracking);
    }
}
#endif //WITH_EDITOR
bool UMoSysLiveLinkComponentController::HasValidData()
{
    UMoSysLiveLinkController* MoSysController = GetMoSysLiveLinkController();
    if (MoSysController != nullptr)
    {
        return MoSysController->HasValidData();
    }
    return false;
}
