// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysTrackingReceiverManager.h"
#include "MoSysTrackingReceiver.h"

IMoSysTrackingReceiver *FMoSysTrackingReceiverManager::CreateReceiver(FName SubjectName, 
    FString InPort, 
    mosys::tracking::CommunicationMode InMode, 
    mosys::tracking::Protocol InProtocol, 
    ReceiverHandleFrameCallback InHandleFrameCallback,
    ReceiverReadFrameFailedCallback InHandleFailedFrameCallback,
    FString InIpAddress)
{
    IMoSysTrackingReceiver *Receiver = new FMoSysTrackingReceiver(SubjectName, InPort, InMode, InProtocol, 
        Receivers.Num() + 1, InHandleFrameCallback, InHandleFailedFrameCallback, InIpAddress);
    if (Receiver)
    {
        Receivers.Add(SubjectName, Receiver);
    }
    return Receiver;
}

bool FMoSysTrackingReceiverManager::DeleteReceiver(FName SubjectName)
{
    if (Receivers.Contains(SubjectName))
    {
        Receivers[SubjectName]->Stop();
        delete Receivers[SubjectName];
        Receivers[SubjectName] = nullptr;
        Receivers.Remove(SubjectName);
        return true;
    }
    return false;
}
