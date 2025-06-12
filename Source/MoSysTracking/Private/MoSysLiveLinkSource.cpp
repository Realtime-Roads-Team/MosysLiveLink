// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysLiveLinkSource.h"

#include "IMoSysTracking.h"
#include "MoSysLiveLinkRole.h"
#include "MoSysLiveLinkSubjectSettings.h"
#include "MoSysTrackingConversions.h"
#include "MoSysTrackingPrivate.h"

#define LOCTEXT_NAMESPACE "MoSysTrackingSource"

void FMoSysLiveLinkSource::ReceiveClient(ILiveLinkClient * InClient, FGuid InSourceGuid)
{
    LiveLinkClient = static_cast<FLiveLinkClient*>(InClient);
    Guid = InSourceGuid;
    
    if (!OnMoSysSubjectAdded.IsValid())
    {
        OnMoSysSubjectAdded = LiveLinkClient->OnLiveLinkSubjectAdded().AddRaw(this, &FMoSysLiveLinkSource::OnSubjectCreated);
        ULiveLinkSourceSettings* Settings = Cast<ULiveLinkSourceSettings>(LiveLinkClient->GetSourceSettings(Guid));
        if (Settings && Settings->Mode == ELiveLinkSourceMode::Timecode)
        {
            Settings->BufferSettings.DetectedFrameRate = IMoSysTracking::Get().GetMoSysVPFrameRate();
        }
    }
    if (!OnMoSysSubjectRemoved.IsValid())
    {
        OnMoSysSubjectRemoved = LiveLinkClient->OnLiveLinkSubjectRemoved().AddRaw(this, &FMoSysLiveLinkSource::OnSubjectRemoved);
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

void FMoSysLiveLinkSource::RemoveSubject(FName SubjectName)
{
    if (EncounteredReceivers.Contains(SubjectName))
    {
        IMoSysTrackingReceiver *Receiver = EncounteredReceivers[SubjectName];
        if (Receiver)
        {
            Receiver->Stop();
            delete Receiver;
            Receiver = nullptr;
        }
        EncounteredReceivers.Remove(SubjectName);
    }
}

void FMoSysLiveLinkSource::RemoveSubjectClicked(FName SubjectName)
{
    if (!SubjectName.IsNone())
    {
        LiveLinkClient->RemoveSubject_AnyThread({ Guid, SubjectName });
    }
}

bool FMoSysLiveLinkSource::StartWorker(FName SubjectName, FString Parameter)
{
    auto HandleSubjectFrameCallback = std::bind(&FMoSysLiveLinkSource::HandleSubjectFrame, this, std::placeholders::_1, std::placeholders::_2);
    auto WaitingTrackingStatusCallback = std::bind(&FMoSysLiveLinkSource::SetWaitingTrackingStatus, this, std::placeholders::_1);
    int32 Port = FCString::Atoi(*Parameter);
    IMoSysTrackingReceiver *Receiver = nullptr;
    if (SubjectName == "Radio")
    {
        Receiver = CreateReceiver(SubjectName, Port, mosys::tracking::Protocol::TrackerLite, HandleSubjectFrameCallback, WaitingTrackingStatusCallback);
    }
    else
    {
        Receiver = CreateReceiver(SubjectName, Port, mosys::tracking::Protocol::F4, HandleSubjectFrameCallback, WaitingTrackingStatusCallback);
    }
    if (Receiver)
    {
        FLiveLinkStaticDataStruct StaticDataStruct = FLiveLinkStaticDataStruct(FLiveLinkMoSysStaticData::StaticStruct());
        if (LiveLinkClient)
        {
            LiveLinkClient->PushSubjectStaticData_AnyThread({ Guid, SubjectName }, UMoSysLiveLinkRole::StaticClass(), MoveTemp(StaticDataStruct));
        }
        EncounteredReceivers.Add(SubjectName, Receiver);
        return true;
    }

    UE_LOG(LogMoSysTracking, Warning, TEXT("Receiver not initialised!"));
    return false;
}

void FMoSysLiveLinkSource::OnSubjectRemoved(FLiveLinkSubjectKey SubjectKey)
{
    RemoveSubject(SubjectKey.SubjectName);
}

void FMoSysLiveLinkSource::Clean()
{
    for (auto Receiver : EncounteredReceivers)
    {
        IMoSysTrackingReceiver *TrackingReceiver = Receiver.Value;
        if (TrackingReceiver)
        {
            TrackingReceiver->Stop();
            delete TrackingReceiver;
            TrackingReceiver = nullptr;
        }
    }
    OccupiedPorts.Empty();
    EncounteredReceivers.Empty();
}

bool FMoSysLiveLinkSource::ChangePort(FName SubjectName, int32 & OutCurrentPort, int32 TargetPort)
{
    if (!OccupiedPorts.Contains(TargetPort))
    {
        RemovePort(OutCurrentPort);
        AddPort(OutCurrentPort, TargetPort);

        if (EncounteredReceivers.Contains(SubjectName) || EncounteredReceivers.Num() != 0)
        {
            IMoSysTrackingReceiver *TrackingReceiver = EncounteredReceivers[SubjectName];
            if (TrackingReceiver != nullptr)
            {
                TrackingReceiver->Stop();
                delete TrackingReceiver;
                TrackingReceiver = nullptr;
                EncounteredReceivers.Remove(SubjectName);
                return StartWorker(SubjectName, FString::FromInt(TargetPort));
            }
        }
    }
    return false;
}

void FMoSysLiveLinkSource::HandleSubjectFrame(FName SubjectName, FLiveLinkMoSysFrameData Frame)
{
    if (EncounteredReceivers.Contains(SubjectName) && EncounteredReceivers[SubjectName] != nullptr)
    {
        FLiveLinkFrameDataStruct FrameDataStruct = FLiveLinkFrameDataStruct(FLiveLinkMoSysFrameData::StaticStruct());
        FrameDataStruct.InitializeWith(&Frame);
        
        EncounteredReceivers[SubjectName]->TrackingStatus = Frame.TrackingStatus;
        if (LiveLinkClient)
        {
            TObjectPtr<UObject>LiveLinkSubjectSettings = LiveLinkClient->GetSubjectSettings({ Guid, SubjectName });
            UMoSysLiveLinkSubjectSettings *SubjectSettings = Cast<UMoSysLiveLinkSubjectSettings>(LiveLinkSubjectSettings);

            if (SubjectSettings)
            {
                SubjectSettings->TrackingStatus = MoSysTrackingConversions::UEnum2TrackingStatusString(Frame.TrackingStatus);
            }

            LiveLinkClient->PushSubjectFrameData_AnyThread({ Guid, SubjectName }, MoveTemp(FrameDataStruct));
        }
    }
}

void FMoSysLiveLinkSource::SetWaitingTrackingStatus(FName SubjectName)
{
    if (LiveLinkClient)
    {
        TObjectPtr<UObject>LiveLinkSubjectSettings = LiveLinkClient->GetSubjectSettings({ Guid, SubjectName });
        UMoSysLiveLinkSubjectSettings *SubjectSettings = Cast<UMoSysLiveLinkSubjectSettings>(LiveLinkSubjectSettings);

        if (SubjectSettings)
        {
            SubjectSettings->TrackingStatus = MoSysTrackingConversions::UEnum2TrackingStatusString(EMoSysTrackingStatus::Waiting);
        }
    }
}

bool FMoSysLiveLinkSource::AddPort(int32 & OutAvailablePort, int32 TargetPort)
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
