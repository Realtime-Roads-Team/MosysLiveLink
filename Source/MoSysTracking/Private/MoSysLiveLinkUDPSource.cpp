// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysLiveLinkUDPSource.h"

#include "MoSysLiveLinkRole.h"
#include "MoSysLiveLinkSourceSettings.h"
#include "MoSysLiveLinkSubjectSettings.h"
#include "MoSysTrackingConversions.h"
#include "MoSysTrackingPrivate.h"
#include "MoSysTrackingReceiverManager.h"

#include "Interfaces/IPv4/IPv4Address.h"
#include "IPAddress.h"
#include "LiveLinkClient.h"
#include "SocketSubsystem.h"


FMoSysLiveLinkUDPSource::FMoSysLiveLinkUDPSource()
{
    DefaultAvailablePort = DEFAULT_UDP_PORT;
    bool bCanBind = false;
    ISocketSubsystem* ISocketInstance = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
    if (ISocketInstance != nullptr)
    {
        TArray<TSharedPtr<FInternetAddr>> AdapterAddresses;
        if (ISocketInstance->GetLocalAdapterAddresses(AdapterAddresses))
        { 
            if (AdapterAddresses.Num() != 0)
            {
                TSharedRef<FInternetAddr> LocalIP = ISocketInstance->GetLocalHostAddr(*GLog, bCanBind);
                if (LocalIP->IsValid())
                {
                    CurrentIPAddress = LocalIP->ToString(false);
                }
            }
        }
    }
}

FText FMoSysLiveLinkUDPSource::GetSourceType() const
{
    return FText::FromString("Mo-Sys UDP Source");
}

void FMoSysLiveLinkUDPSource::InitializeSettings(ULiveLinkSourceSettings * Settings)
{
    if (Settings == nullptr)
    {
        return;
    }

    // empty connection string means this is a new source and not a preset so we dont override
    if (Settings->ConnectionString.IsEmpty())
    {
        SetEngineTimeOffset(Settings);
    }
    UMoSysLiveLinkUDPSourceSettings* UDPSettings = static_cast<UMoSysLiveLinkUDPSourceSettings*>(Settings);
    CurrentIPAddress = UDPSettings->IPAddress;
}

void FMoSysLiveLinkUDPSource::SetEngineTimeOffset(ULiveLinkSourceSettings* Settings)
{
    if (Settings == nullptr)
    {
        return;
    }

    float FPS = FApp::GetTimecodeFrameRate().AsDecimal();
    float TimeOffset = 0.0f;
    if (FPS != 0)
    {
        TimeOffset = (1 / FPS) + (1 / FPS) * 0.1f;
    }
    Settings->BufferSettings.EngineTimeOffset = TimeOffset;
}

TSubclassOf<ULiveLinkSourceSettings> FMoSysLiveLinkUDPSource::GetSettingsClass() const
{
    return UMoSysLiveLinkUDPSourceSettings::StaticClass();
}

IMoSysTrackingReceiver *FMoSysLiveLinkUDPSource::CreateReceiver(FName SubjectName, int32 Port, mosys::tracking::Protocol Protocol, ReceiverHandleFrameCallback HandleFrameCallback, ReceiverReadFrameFailedCallback SetStatusCallback)
{
    return FMoSysTrackingReceiverManager::GetInstance().CreateReceiver(
        SubjectName,
        FString::FromInt(Port),
        mosys::tracking::CommunicationMode::UDPBlocking,
        Protocol,
        HandleFrameCallback,
        SetStatusCallback,
        CurrentIPAddress);
}

void FMoSysLiveLinkUDPSource::OnSubjectCreated(FLiveLinkSubjectKey SubjectKey)
{
    auto LiveLinkSubjectSettings = LiveLinkClient->GetSubjectSettings(SubjectKey);
    UMoSysUDPSubjectSettings *SubjectSettings = Cast<UMoSysUDPSubjectSettings>(LiveLinkSubjectSettings);

    if (SubjectSettings)
    {
        /* This is really just a check to see if this subject was created from a preset.
         * If so, add it to the array of occupied ports.
         * Todo: rearchitecture this so there's a difference between a subject created manually
         * or through a preset.
         */
        if (!OccupiedPorts.Contains(SubjectSettings->Port))
        {
            OccupiedPorts.Add(SubjectSettings->Port);
        }
        StartWorker(SubjectKey.SubjectName, FString::FromInt(SubjectSettings->Port));
        SubjectSettings->TrackingStatus = MoSysTrackingConversions::UEnum2TrackingStatusString(EMoSysTrackingStatus::Waiting);
    }
}

void FMoSysLiveLinkUDPSource::ChangeIPAddress(FString IPAddress)
{
    FString OldIPAddress = CurrentIPAddress;
    CurrentIPAddress = IPAddress;
    TArray<FName> ReceiverNames;
    UMoSysUDPSubjectSettings *SubjectSettings = nullptr;
    for (auto Elem : EncounteredReceivers)
    {
        IMoSysTrackingReceiver *Receiver = Elem.Value;
        if (Receiver)
        {
            Receiver->Stop();
            delete Receiver;
            Receiver = nullptr;
        }
        ReceiverNames.Add(Elem.Key);
    }
    EncounteredReceivers.Empty();
    
    for (auto Name : ReceiverNames)
    {
        if (LiveLinkClient)
        {
            TObjectPtr<UObject>Settings = LiveLinkClient->GetSubjectSettings({Guid, Name});
            SubjectSettings = Cast<UMoSysUDPSubjectSettings>(Settings);
        }
        if (SubjectSettings)
        {
            if (StartWorker(Name, FString::FromInt(SubjectSettings->Port)))
            {
                SubjectSettings->TrackingStatus = MoSysTrackingConversions::UEnum2TrackingStatusString(EMoSysTrackingStatus::Waiting);
            }
            else
            {
                CurrentIPAddress = OldIPAddress;
            }
        }
    }
}

void FMoSysLiveLinkUDPSource::CreateSubject(FName SubjectName)
{
    if (!SubjectName.IsNone() && LiveLinkClient)
    {
        FLiveLinkSubjectKey SubjectKey = FLiveLinkSubjectKey(Guid, SubjectName);
        FLiveLinkSubjectPreset SubjectPreset;
        SubjectPreset.Key = SubjectKey;
        SubjectPreset.Role = UMoSysLiveLinkRole::StaticClass();

        UMoSysUDPSubjectSettings *SubjectSettings = NewObject<UMoSysUDPSubjectSettings>();

        if (SubjectSettings)
        {
            AddPort(SubjectSettings->Port);
            SubjectSettings->OldPort = SubjectSettings->Port;
            SubjectSettings->SubjectName = SubjectKey.SubjectName;

            SubjectPreset.Settings = SubjectSettings;
            SubjectPreset.bEnabled = true;
            LiveLinkClient->CreateSubject(SubjectPreset);
        }
    }
}

void FMoSysLiveLinkUDPSource::RemoveSubject(FName SubjectName)
{
    FMoSysLiveLinkSource::RemoveSubject(SubjectName);
    auto LiveLinkSubjectSettings = LiveLinkClient->GetSubjectSettings({ Guid, SubjectName });
    UMoSysUDPSubjectSettings *SubjectSettings = Cast<UMoSysUDPSubjectSettings>(LiveLinkSubjectSettings);
    if (SubjectSettings)
    {
        RemovePort(SubjectSettings->Port);
    }
}
