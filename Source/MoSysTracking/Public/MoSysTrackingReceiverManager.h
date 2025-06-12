// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <functional>
#include "Containers/CircularQueue.h"
#include "HAL/Runnable.h"
#include "HAL/RunnableThread.h"
#include "Misc/Timecode.h"

#include "MoSysTrackingTypes.h"
#include "tracking/communication/Workers.h"
#include "tracking/TrackingTypes.h"

class IMoSysTrackingReceiver : public FRunnable
{
public:
    /** Thread-safe access to the status for the LiveLink UI */
    virtual void GetStatus(FText &OutStatus) = 0;

    /** Thread-safe access to the last error message. */
    virtual void GetLastErrorMessage(FString &OutMessage) = 0;

    /** Message key for logging on screen messages for this receiver. */
    virtual uint64 GetMessageKey() = 0;

    /** True if the thread has initialised */
    virtual bool IsRunning() = 0;

    /** True if receiving data */
    virtual bool IsReceiving() = 0;

    virtual ~IMoSysTrackingReceiver() {};

    EMoSysTrackingStatus TrackingStatus = EMoSysTrackingStatus::Undefined;
};

// Singleton to keep track of all receivers
typedef std::function<void(FName, FLiveLinkMoSysFrameData)> ReceiverHandleFrameCallback;
typedef std::function<void(FName)> ReceiverReadFrameFailedCallback;
class FMoSysTrackingReceiverManager
{
public:

    static FMoSysTrackingReceiverManager& GetInstance()
    {
        static FMoSysTrackingReceiverManager Instance;
        return Instance;
    }

    // Create a MoSysTracking Receiver - it is user's responsibility to delete it!
    IMoSysTrackingReceiver *CreateReceiver(FName SubjectName, FString InPort, mosys::tracking::CommunicationMode InMode, 
        mosys::tracking::Protocol InProtocol, ReceiverHandleFrameCallback InCallback, ReceiverReadFrameFailedCallback InReadFrameFailedCallback, FString InIpAddress);

    // Create a MoSysTracking Audio Demod Receiver - it is user's responsibility to delete it!
    IMoSysTrackingReceiver *CreateReceiver(FName SubjectName, ReceiverHandleFrameCallback InHandleFrameCallback, ReceiverReadFrameFailedCallback InHandleFailedFrameCallback, FString MediaPlayerName);

    // Delete the receiver
    bool DeleteReceiver(FName SubjectName);

private:
    FMoSysTrackingReceiverManager() {}
    TMap<FName, IMoSysTrackingReceiver*> Receivers;

public:
    // Delete copy methods to ensure there can be only one
    FMoSysTrackingReceiverManager(FMoSysTrackingReceiverManager const&) = delete;
    void operator=(FMoSysTrackingReceiverManager const&) = delete;
};
