// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysLiveLinkSource.h"

#include "IMoSysTracking.h"
#include "MoSysLiveLinkRole.h"
#include "MoSysLiveLinkSubjectSettings.h"
#include "MoSysTrackingConversions.h"
#include "MoSysTrackingPrivate.h"

#define LOCTEXT_NAMESPACE "MoSysTrackingSource"

void FMoSysLiveLinkSource::ReceiveClient(ILiveLinkClient* InClient, FGuid InSourceGuid)
{
    LiveLinkClient = static_cast<FLiveLinkClient*>(InClient);
    Guid = InSourceGuid;

    if (!OnMoSysSubjectAdded.IsValid())
    {
        OnMoSysSubjectAdded = LiveLinkClient->OnLiveLinkSubjectAdded().AddRaw(this,
                                                                              &FMoSysLiveLinkSource::OnSubjectCreated);

        TObjectPtr<ULiveLinkSourceSettings> Settings = Cast<ULiveLinkSourceSettings>(
            LiveLinkClient->GetSourceSettings(Guid));

        if (Settings && Settings->Mode == ELiveLinkSourceMode::Timecode)
        {
            Settings->BufferSettings.DetectedFrameRate = IMoSysTracking::Get().GetMoSysVPFrameRate();
        }
    }

    if (!OnMoSysSubjectRemoved.IsValid())
    {
        OnMoSysSubjectRemoved = LiveLinkClient->OnLiveLinkSubjectRemoved().AddRaw(
            this,
            &FMoSysLiveLinkSource::OnSubjectRemoved);
    }
}

bool FMoSysLiveLinkSource::IsSourceStillValid() const
{
    return LiveLinkClient != nullptr;
}

bool FMoSysLiveLinkSource::RequestSourceShutdown()
{
    if (OnMoSysSubjectAdded.IsValid())
    {
        if (LiveLinkClient)
        {
            LiveLinkClient->OnLiveLinkSubjectAdded().Remove(OnMoSysSubjectAdded);
            LiveLinkClient->OnLiveLinkSubjectRemoved().Remove(OnMoSysSubjectRemoved);
        }

        OnMoSysSubjectAdded.Reset();
        OnMoSysSubjectRemoved.Reset();
    }

    LiveLinkClient = nullptr;
    Guid.Invalidate();
    Clean();

    return true;
}

FText FMoSysLiveLinkSource::GetSourceMachineName() const
{
    return FText().FromString(FPlatformProcess::ComputerName());
}

FText FMoSysLiveLinkSource::GetSourceStatus() const
{
    return LOCTEXT("MoSysHardwareLiveLinkStatus", "Active");
}

void FMoSysLiveLinkSource::RemoveSubject(const FName& SubjectName)
{
    if (EncounteredReceivers.Contains(SubjectName))
    {
        if (EncounteredReceivers[SubjectName].IsValid())
        {
            EncounteredReceivers[SubjectName]->Stop();
        }

        EncounteredReceivers.Remove(SubjectName);
    }
}

void FMoSysLiveLinkSource::RemoveSubjectClicked(FName SubjectName)
{
    if (!SubjectName.IsNone())
    {
        LiveLinkClient->RemoveSubject_AnyThread({Guid, SubjectName});
    }
}

bool FMoSysLiveLinkSource::StartWorker(const FName& SubjectName, const FString& Parameter)
{
    return true;
}

void FMoSysLiveLinkSource::OnSubjectRemoved(FLiveLinkSubjectKey SubjectKey)
{
    RemoveSubject(SubjectKey.SubjectName);
}

void FMoSysLiveLinkSource::Clean()
{
    for (const auto&  Pair: EncounteredReceivers)
    {
        if (Pair.Value.IsValid())
        {
            Pair.Value->Stop();
        }
    }

    OccupiedPorts.Empty();
    EncounteredReceivers.Empty();
}

bool FMoSysLiveLinkSource::ChangePort(const FName& SubjectName, int32& OutCurrentPort, int32 TargetPort)
{
    if (!OccupiedPorts.Contains(TargetPort))
    {
        RemovePort(OutCurrentPort);
        AddPort(OutCurrentPort, TargetPort);

        if (EncounteredReceivers.Contains(SubjectName) || EncounteredReceivers.Num() != 0)
        {
            if (EncounteredReceivers[SubjectName].IsValid())
            {
                EncounteredReceivers[SubjectName]->Stop();
                EncounteredReceivers.Remove(SubjectName);
                return StartWorker(SubjectName, FString::FromInt(TargetPort));
            }
        }
    }

    return false;
}

void FMoSysLiveLinkSource::HandleSubjectFrame(const FName& SubjectName, const FLiveLinkMoSysFrameData& Frame)
{
    if (EncounteredReceivers.Contains(SubjectName) && EncounteredReceivers[SubjectName] != nullptr)
    {
        FLiveLinkFrameDataStruct FrameDataStruct = FLiveLinkFrameDataStruct(FLiveLinkMoSysFrameData::StaticStruct());
        FrameDataStruct.InitializeWith(&Frame);

        EncounteredReceivers[SubjectName]->TrackingStatus = Frame.TrackingStatus;
        if (LiveLinkClient)
        {
            TObjectPtr<UObject> LiveLinkSubjectSettings = LiveLinkClient->GetSubjectSettings({Guid, SubjectName});
            UMoSysLiveLinkSubjectSettings* SubjectSettings = Cast<UMoSysLiveLinkSubjectSettings>(
                LiveLinkSubjectSettings);

            if (SubjectSettings)
            {
                SubjectSettings->TrackingStatus = MoSysTrackingConversions::UEnum2TrackingStatusString(
                    Frame.TrackingStatus);
            }

            LiveLinkClient->PushSubjectFrameData_AnyThread({Guid, SubjectName}, MoveTemp(FrameDataStruct));
        }
    }
}

void FMoSysLiveLinkSource::SetWaitingTrackingStatus(FName SubjectName)
{
    if (LiveLinkClient)
    {
        TObjectPtr<UObject> LiveLinkSubjectSettings = LiveLinkClient->GetSubjectSettings({Guid, SubjectName});

        if (const auto SubjectSettings = Cast<UMoSysLiveLinkSubjectSettings>(LiveLinkSubjectSettings))
        {
            SubjectSettings->TrackingStatus = MoSysTrackingConversions::UEnum2TrackingStatusString(
                EMoSysTrackingStatus::Waiting);
        }
    }
}

bool FMoSysLiveLinkSource::AddPort(int32& OutAvailablePort, int32 TargetPort)
{
    int32 AvailablePort = DefaultAvailablePort;
    if (TargetPort != -1)
    {
        if (OccupiedPorts.Contains(TargetPort))
        {
            // Port already exists
            return false;
        }
        AvailablePort = TargetPort;
    }
    else
    {
        for (auto Port : OccupiedPorts)
        {
            if (Port != AvailablePort)
            {
                break;
            }
            AvailablePort++;
        }
    }
    OccupiedPorts.Add(AvailablePort);
    OutAvailablePort = AvailablePort;
    OccupiedPorts.Sort();
    return true;
}

bool FMoSysLiveLinkSource::RemovePort(int32 Port)
{
    if (OccupiedPorts.Contains(Port))
    {
        OccupiedPorts.Remove(Port);
        return true;
    }
    return false;
}

#undef LOCTEXT_NAMESPACE
