// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysLiveLinkSubjectSettings.h"

#include "IMoSysTracking.h"
#include "MoSysLiveLinkUDPSource.h"
#include "MoSysTrackingConversions.h"
#include "MoSysTrackingReceiverManager.h"
#include "tracking/TrackingTypes.h"

#include "SocketSubsystem.h"
#include "IPAddress.h"
#include "MoSysLiveLinkRole.h"

#include "MoSysTrackingPrivate.h"

#define MAXIMUM_UDP_PORT 65535
#define MINIMUM_UDP_PORT 1024

#define MAXIMUM_COM_PORT 255
#define MINIMUM_COM_PORT 1

UMoSysLiveLinkSubjectSettings::UMoSysLiveLinkSubjectSettings() : ULiveLinkSubjectSettings()
{
    TrackingStatus = MoSysTrackingConversions::UEnum2TrackingStatusString(EMoSysTrackingStatus::Waiting);
    Role = UMoSysLiveLinkRole::StaticClass();
    HardwareID = "Unknown";
}

#if WITH_EDITOR
void UMoSysUDPSubjectSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    if (PropertyChangedEvent.ChangeType != EPropertyChangeType::ValueSet)
    {
        return;
    }

    if (PropertyChangedEvent.MemberProperty->GetFName() == "Port")
    {
        if (IMoSysTracking::Get().GetOrAddSource(GetMoSysSourceType()).IsValid())
        {
            TSharedPtr<FMoSysLiveLinkUDPSource> Source = StaticCastSharedPtr<FMoSysLiveLinkUDPSource>(IMoSysTracking::Get().GetOrAddSource(GetMoSysSourceType()));
            if (Source != nullptr)
            {
                if (Port > MINIMUM_UDP_PORT && Port < MAXIMUM_UDP_PORT && Source->ChangePort(SubjectName, OldPort, Port))
                {
                    OldPort = Port;
                    TrackingStatus = MoSysTrackingConversions::UEnum2TrackingStatusString(EMoSysTrackingStatus::Waiting);
                }
                else
                {
                    UE_LOG(LogMoSysTracking, Warning, TEXT("Port already exists (%d)"), Port);
                    Port = OldPort;
                }
            }
        }
    }
    Super::PostEditChangeProperty(PropertyChangedEvent);
}

void UMoSysSerialSubjectSettings::PostEditChangeProperty(FPropertyChangedEvent & PropertyChangedEvent)
{
    if (PropertyChangedEvent.ChangeType != EPropertyChangeType::ValueSet)
    {
        return;
    }

    if (PropertyChangedEvent.MemberProperty->GetFName() == "ComPort")
    {
        if (IMoSysTracking::Get().GetOrAddSource(GetMoSysSourceType()).IsValid())
        {
            TSharedPtr<FMoSysLiveLinkSerialSource> Source = StaticCastSharedPtr<FMoSysLiveLinkSerialSource>(IMoSysTracking::Get().GetOrAddSource(GetMoSysSourceType()));

            if (Source != nullptr)
            {
                FString TempStr = ComPort;
                if (TempStr.IsEmpty() || !TempStr.StartsWith("COM") || 
                    TempStr.RemoveFromStart("COM") && !TempStr.IsNumeric())
                {
                    UE_LOG(LogMoSysTracking, Error, TEXT("A serial port must begin with the COM prefix."));
                    ComPort = "COM" + FString::FromInt(OldComPortNum);
                    UE_LOG(LogMoSysTracking, Error, TEXT("Com port is now: %s"), *ComPort);
                    return;
                }

                ComPortNum = FCString::Atoi(*TempStr);
                if (ComPortNum >= MINIMUM_COM_PORT && ComPortNum <= MAXIMUM_COM_PORT && Source->ChangePort(SubjectName, OldComPortNum, ComPortNum))
                {
                    OldComPortNum = ComPortNum;
                    TrackingStatus = MoSysTrackingConversions::UEnum2TrackingStatusString(EMoSysTrackingStatus::Waiting);
                }
                else
                {
                    UE_LOG(LogMoSysTracking, Warning, TEXT("Port already exists (COM %d)"), OldComPortNum);
                    ComPort = "COM" + FString::FromInt(OldComPortNum);
                }
            }
        }
    }
    Super::PostEditChangeProperty(PropertyChangedEvent);
}

#endif