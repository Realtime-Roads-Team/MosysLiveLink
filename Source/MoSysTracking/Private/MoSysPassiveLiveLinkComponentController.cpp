// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysPassiveLiveLinkComponentController.h"

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

UMoSysPassiveLiveLinkComponentController::UMoSysPassiveLiveLinkComponentController()
    : ULiveLinkComponentController()
    , bUseLiveTracking(true)
    , bIsSpawned(false)
    , bIsFirstTick(true)
{
}

void UMoSysPassiveLiveLinkComponentController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
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

    if (bVerboseLogging)
    {
        FTransform Transform = GetTrackingData().Transform;

        FVector Location = Transform.GetLocation();
        FRotator Rotation = Transform.Rotator();
        FVector Scale = Transform.GetScale3D();

        // Log the transform details using UE_LOG
        UE_LOG(LogTemp, Warning, TEXT("Transform Location: X=%f, Y=%f, Z=%f"), Location.X, Location.Y, Location.Z);
        UE_LOG(LogTemp, Warning, TEXT("Transform Rotation: Pitch=%f, Yaw=%f, Roll=%f"), Rotation.Pitch, Rotation.Yaw, Rotation.Roll);
        UE_LOG(LogTemp, Warning, TEXT("Transform Scale: X=%f, Y=%f, Z=%f"), Scale.X, Scale.Y, Scale.Z);
    }
}

void UMoSysPassiveLiveLinkComponentController::OnComponentDestroyed(bool bDestroyingHierarchy)
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

EMoSysTrackingStatus UMoSysPassiveLiveLinkComponentController::GetTrackingStatus()
{
    UMoSysLiveLinkController* MoSysController = GetMoSysLiveLinkController();
    if (MoSysController != nullptr)
    {
        return MoSysController->TrackingStatus;
    }
    return EMoSysTrackingStatus::Undefined;
}

FTimecode UMoSysPassiveLiveLinkComponentController::GetTimecode()
{
    UMoSysLiveLinkController* MoSysController = GetMoSysLiveLinkController();
    if (MoSysController != nullptr)
    {
        return MoSysController->Timecode;
    }
    return FTimecode();
}

FText UMoSysPassiveLiveLinkComponentController::GetTrackingStatusText()
{
    UMoSysLiveLinkController* MoSysController = GetMoSysLiveLinkController();
    if (MoSysController != nullptr)
    {
        return FText::FromString(MoSysController->TrackingStatusString);
    }
    return FText::FromString(MoSysTrackingConversions::UEnum2TrackingStatusString(EMoSysTrackingStatus::Undefined));
}

FLiveLinkMoSysFrameData UMoSysPassiveLiveLinkComponentController::GetTrackingData()
{
    UMoSysLiveLinkController* MoSysController = GetMoSysLiveLinkController();
    if (MoSysController != nullptr)
    {
        return MoSysController->TrackingFrame;
    }
    return FLiveLinkMoSysFrameData();
}

FLiveLinkMoSysFrameData UMoSysPassiveLiveLinkComponentController::GetLatestTrackingData()
{
    UMoSysLiveLinkController* MoSysController = GetMoSysLiveLinkController();
    if (MoSysController != nullptr)
    {
        return MoSysController->GetCurrentFrame();
    }
    return FLiveLinkMoSysFrameData();
}

FLensFileEvalData UMoSysPassiveLiveLinkComponentController::GetFreeDLensData()
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

TScriptInterface<IMoSysLensDistortUpdatable> UMoSysPassiveLiveLinkComponentController::GetMoSysLensDistortUpdatable()
{
    return GetMoSysLiveLinkController();
}

UMoSysLiveLinkController *UMoSysPassiveLiveLinkComponentController::GetMoSysLiveLinkController()
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
void UMoSysPassiveLiveLinkComponentController::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);
    if (PropertyChangedEvent.MemberProperty && PropertyChangedEvent.MemberProperty->GetFName() == "bUseLiveTracking")
    {
        SetComponentTickEnabled(bUseLiveTracking);
    }
}
#endif //WITH_EDITOR
bool UMoSysPassiveLiveLinkComponentController::HasValidData()
{
    UMoSysLiveLinkController* MoSysController = GetMoSysLiveLinkController();
    if (MoSysController != nullptr)
    {
        return MoSysController->HasValidData();
    }
    return false;
}
