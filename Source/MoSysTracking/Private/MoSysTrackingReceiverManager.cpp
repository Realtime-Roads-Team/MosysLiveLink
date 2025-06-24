// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysTrackingReceiverManager.h"

#include "MoSysTrackingReceiver.h"

TSharedPtr<IMoSysTrackingReceiver> FMoSysTrackingReceiverManager::CreateReceiver(
    const FName& SubjectName,
    const mosys::networking::IEndpointInfo& EndpointInfo,
    mosys::tracking::Protocol InProtocol,
    FReceiverHandleFrameCallback InHandleFrameCallback,
    FReceiverReadFrameFailedCallback InHandleFailedFrameCallback)
{
    auto Receiver = TSharedPtr<FMoSysTrackingReceiver>(
        new FMoSysTrackingReceiver(SubjectName,
                                   EndpointInfo,
                                   InProtocol,
                                   Receivers.Num() + 1,
                                   InHandleFrameCallback,
                                   InHandleFailedFrameCallback));

    if (Receiver)
    {
        Receivers.Add(SubjectName, Receiver);
    }

    return Receiver;
}

bool FMoSysTrackingReceiverManager::DeleteReceiver(const FName& SubjectName)
{
    if (Receivers.Contains(SubjectName))
    {
        Receivers[SubjectName]->Stop();
        Receivers[SubjectName].Reset();
        Receivers.Remove(SubjectName);
        return true;
    }

    return false;
}
