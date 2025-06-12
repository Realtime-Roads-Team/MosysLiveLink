// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysLiveLinkSerialSource.h"

#include "MoSysLiveLinkRole.h"
#include "MoSysLiveLinkSourceSettings.h"
#include "MoSysLiveLinkSubjectSettings.h"
#include "MoSysTrackingConversions.h"
#include "MoSysTrackingPrivate.h"
#include "MoSysTrackingReceiverManager.h"

#include "LiveLinkClient.h"


FText FMoSysLiveLinkSerialSource::GetSourceType() const
{
    return FText::FromString("Mo-Sys Serial Source");
}

TSubclassOf<ULiveLinkSourceSettings> FMoSysLiveLinkSerialSource::GetSettingsClass() const
{
    return UMoSysLiveLinkSerialSourceSettings::StaticClass();
}

IMoSysTrackingReceiver * FMoSysLiveLinkSerialSource::CreateReceiver(FName SubjectName, int32 Port, mosys::tracking::Protocol Protocol, ReceiverHandleFrameCallback HandleFrameCallback, ReceiverReadFrameFailedCallback SetStatusCallback)
{
    using namespace mosys::tracking;
    return FMoSysTrackingReceiverManager::GetInstance().CreateReceiver(
        SubjectName,
        "COM" + FString::FromInt(Port),
        Protocol == Protocol::F4 ? CommunicationMode::SerialBlocking : CommunicationMode::TrackerLiteSerial,
        Protocol,
        HandleFrameCallback,
        SetStatusCallback,
        CurrentIPAddress);
}

void FMoSysLiveLinkSerialSource::OnSubjectCreated(FLiveLinkSubjectKey SubjectKey)
{
    auto LiveLinkSubjectSettings = LiveLinkClient->GetSubjectSettings({ Guid, SubjectKey.SubjectName });
    UMoSysSerialSubjectSettings *SubjectSettings = Cast<UMoSysSerialSubjectSettings>(LiveLinkSubjectSettings);

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
        SubjectSettings->TrackingStatus = MoSysTrackingConversions::UEnum2TrackingStatusString(EMoSysTrackingStatus::Waiting);
    }
}

void FMoSysLiveLinkSerialSource::CreateSubject(FName SubjectName)
{
    if (!SubjectName.IsNone() && LiveLinkClient)
    {
        FLiveLinkSubjectKey SubjectKey = FLiveLinkSubjectKey(Guid, SubjectName);
        FLiveLinkSubjectPreset SubjectPreset;
        SubjectPreset.Key = SubjectKey;
        SubjectPreset.Role = UMoSysLiveLinkRole::StaticClass();

        UMoSysSerialSubjectSettings *SubjectSettings = NewObject<UMoSysSerialSubjectSettings>();
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

void FMoSysLiveLinkSerialSource::RemoveSubject(FName SubjectName)
{
    FMoSysLiveLinkSource::RemoveSubject(SubjectName);
    auto LiveLinkSubjectSettings = LiveLinkClient->GetSubjectSettings({ Guid, SubjectName });
    UMoSysSerialSubjectSettings *SubjectSettings = Cast<UMoSysSerialSubjectSettings>(LiveLinkSubjectSettings);
    if (SubjectSettings)
    {
        RemovePort(SubjectSettings->ComPortNum);
    }
}
