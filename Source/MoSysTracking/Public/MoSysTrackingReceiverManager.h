// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <functional>

#include "HAL/Runnable.h"
#include "HAL/RunnableThread.h"
#include "Misc/Timecode.h"

#include "MoSysTrackingTypes.h"
#include "networking/interfaces/ITransport.h"
#include "tracking/TrackingTypes.h"

class IMoSysTrackingReceiver : public FRunnable
{
public:
    virtual ~IMoSysTrackingReceiver() override = default;

    virtual bool IsInitialized() const = 0;

    /** Thread-safe access to the status for the LiveLink UI */
    virtual void GetStatus(FText& OutStatus) = 0;

    /** Message key for logging on screen messages for this receiver. */
    virtual uint64 GetMessageKey() = 0;

    /** True if the thread has initialised */
    virtual bool IsRunning() = 0;

    /** True if receiving data */
    virtual bool IsReceiving() = 0;

    EMoSysTrackingStatus TrackingStatus = EMoSysTrackingStatus::Undefined;
};

// Singleton to keep track of all receivers
using FReceiverHandleFrameCallback = std::function<void(const FName&, const FLiveLinkMoSysFrameData&)>;
using FReceiverReadFrameFailedCallback = std::function<void(const FName&)>;

class FMoSysTrackingReceiverManager
{
public:
    static FMoSysTrackingReceiverManager& GetInstance()
    {
        static FMoSysTrackingReceiverManager Instance;
        return Instance;
    }

    // Create a MoSysTracking Receiver.
    TSharedPtr<IMoSysTrackingReceiver> CreateReceiver(const FName& SubjectName,
                                                      const mosys::networking::IEndpointInfo& EndpointInfo,
                                                      mosys::tracking::Protocol InProtocol,
                                                      FReceiverHandleFrameCallback InHandleFrameCallback,
                                                      FReceiverReadFrameFailedCallback InHandleFailedFrameCallback);

    // Delete the receiver
    bool DeleteReceiver(const FName& SubjectName);

private:
    FMoSysTrackingReceiverManager() = default;
    TMap<FName, TSharedPtr<IMoSysTrackingReceiver>> Receivers;

public:
    // Delete copy methods to ensure there can be only one
    FMoSysTrackingReceiverManager(const FMoSysTrackingReceiverManager&) = delete;
    void operator=(const FMoSysTrackingReceiverManager&) = delete;
};
