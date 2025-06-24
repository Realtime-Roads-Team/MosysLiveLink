// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysLiveLinkSerialSource.h"

#include "MoSysLiveLinkRole.h"
#include "MoSysLiveLinkSourceSettings.h"
#include "MoSysLiveLinkSubjectSettings.h"
#include "MoSysTrackingConversions.h"
#include "MoSysTrackingReceiverManager.h"

#include "mosys-cpp/networking/transports/endpoint-info/SerialEndpointInfo.h"

#include "LiveLinkClient.h"

FText FMoSysLiveLinkSerialSource::GetSourceType() const
{
    return FText::FromString("Mo-Sys Serial Source");
}

TSubclassOf<ULiveLinkSourceSettings> FMoSysLiveLinkSerialSource::GetSettingsClass() const
{
    return UMoSysLiveLinkSerialSourceSettings::StaticClass();
}

TSharedPtr<IMoSysTrackingReceiver> FMoSysLiveLinkSerialSource::CreateReceiver(
    const FName& SubjectName,
    const mosys::networking::IEndpointInfo& EndpointInfo,
    mosys::tracking::Protocol Protocol,
    FReceiverHandleFrameCallback HandleFrameCallback,
    FReceiverReadFrameFailedCallback SetStatusCallback)
{
    return FMoSysTrackingReceiverManager::GetInstance().CreateReceiver(
        SubjectName,
        EndpointInfo,
        Protocol,
        HandleFrameCallback,
        SetStatusCallback);
}

void FMoSysLiveLinkSerialSource::OnSubjectCreated(FLiveLinkSubjectKey SubjectKey)
{
    auto LiveLinkSubjectSettings = LiveLinkClient->GetSubjectSettings({Guid, SubjectKey.SubjectName});
    UMoSysSerialSubjectSettings* SubjectSettings = Cast<UMoSysSerialSubjectSettings>(LiveLinkSubjectSettings);

    if (SubjectSettings)
    {
        /* This is really just a check to see if this subject was created from a preset.
         * If so, add it to the array of occupied ports.
         * Todo: rearchitecture this so there's a difference between a subject created manually
         * or through a preset.
         */
        if (!OccupiedPorts.Contains(SubjectSettings->ComPortNum))
        {
            OccupiedPorts.Add(SubjectSettings->ComPortNum);
        }
        StartWorker(SubjectKey.SubjectName, FString::FromInt(SubjectSettings->ComPortNum));
        SubjectSettings->TrackingStatus = MoSysTrackingConversions::UEnum2TrackingStatusString(
            EMoSysTrackingStatus::Waiting);
    }
}

bool FMoSysLiveLinkSerialSource::StartWorker(const FName& SubjectName, const FString& Parameter)
{
    if (!FMoSysLiveLinkSource::StartWorker(SubjectName, Parameter))
    {
        return false;
    }

    auto HandleSubjectFrameCallback = std::bind(&FMoSysLiveLinkSource::HandleSubjectFrame, this, std::placeholders::_1,
                                                std::placeholders::_2);
    auto WaitingTrackingStatusCallback = std::bind(&FMoSysLiveLinkSource::SetWaitingTrackingStatus, this,
                                                   std::placeholders::_1);

    const mosys::networking::SerialEndpointInfo EndpointInfo{TCHAR_TO_UTF8(*("COM" + Parameter))};
    TSharedPtr<IMoSysTrackingReceiver> Receiver = CreateReceiver(SubjectName,
                                                                 EndpointInfo,
                                                                 mosys::tracking::Protocol::F4,
                                                                 HandleSubjectFrameCallback,
                                                                 WaitingTrackingStatusCallback);

    if (Receiver && Receiver->IsInitialized())
    {
        FLiveLinkStaticDataStruct StaticDataStruct =
            FLiveLinkStaticDataStruct(FLiveLinkMoSysStaticData::StaticStruct());
        if (LiveLinkClient)
        {
            LiveLinkClient->PushSubjectStaticData_AnyThread({Guid, SubjectName}, UMoSysLiveLinkRole::StaticClass(),
                                                            MoveTemp(StaticDataStruct));
        }
        EncounteredReceivers.Add(SubjectName, Receiver);
        return true;
    }
    
    return false;
}

void FMoSysLiveLinkSerialSource::CreateSubject(FName SubjectName)
{
    if (!SubjectName.IsNone() && LiveLinkClient)
    {
        FLiveLinkSubjectKey SubjectKey = FLiveLinkSubjectKey(Guid, SubjectName);
        FLiveLinkSubjectPreset SubjectPreset;
        SubjectPreset.Key = SubjectKey;
        SubjectPreset.Role = UMoSysLiveLinkRole::StaticClass();

        UMoSysSerialSubjectSettings* SubjectSettings = NewObject<UMoSysSerialSubjectSettings>();
        if (SubjectSettings)
        {
            AddPort(SubjectSettings->ComPortNum);
            SubjectSettings->OldComPortNum = SubjectSettings->ComPortNum;
            SubjectSettings->ComPort = "COM" + FString::FromInt(SubjectSettings->ComPortNum);
            SubjectSettings->SubjectName = SubjectName;

            SubjectPreset.Settings = SubjectSettings;
            SubjectPreset.bEnabled = true;
            LiveLinkClient->CreateSubject(SubjectPreset);
        }
    }
}

void FMoSysLiveLinkSerialSource::RemoveSubject(const FName& SubjectName)
{
    FMoSysLiveLinkSource::RemoveSubject(SubjectName);
    auto LiveLinkSubjectSettings = LiveLinkClient->GetSubjectSettings({Guid, SubjectName});
    UMoSysSerialSubjectSettings* SubjectSettings = Cast<UMoSysSerialSubjectSettings>(LiveLinkSubjectSettings);
    if (SubjectSettings)
    {
        RemovePort(SubjectSettings->ComPortNum);
    }
}
