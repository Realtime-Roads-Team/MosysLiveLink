// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "HAL/Runnable.h"
#include "HAL/RunnableThread.h"
#include "Misc/Timecode.h"
#include "MoSysTrackingReceiverManager.h"

#include <functional>

#include "tracking/TrackingTypes.h"
#include "networking/interfaces/IEndpointInfo.h"

namespace mosys::tracking
{
    class TrackingReceiverWorker;
} // namespace mosys::tracking

class FMoSysTrackingFrame;

class FMoSysTrackingReceiver final : public IMoSysTrackingReceiver, public TSharedFromThis<IMoSysTrackingReceiver>
{
public:
    friend FMoSysTrackingReceiverManager;

    virtual ~FMoSysTrackingReceiver() override;

    [[nodiscard]] virtual bool IsInitialized() const override { return Initialized; }

    /** Thread-safe access to the status for the LiveLink UI */
    virtual void GetStatus(FText& OutStatus) override;

    /** Message key for logging on screen messages for this worker. */
    virtual uint64 GetMessageKey() override;

    /** True if the thread has initialised */
    virtual bool IsRunning() override;

    /** True if receiving data */
    virtual bool IsReceiving() override;

    void OnPreExit();

private:
    FMoSysTrackingReceiver(FName InSubjectName,
                           const mosys::networking::IEndpointInfo& EndpointInfo,
                           mosys::tracking::Protocol Protocol,
                           uint64 MessageKey,
                           FReceiverHandleFrameCallback HandleFrameCallback,
                           FReceiverReadFrameFailedCallback HandleFailedFrameCallback);

    bool InitializeTrackingWorker(const mosys::networking::IEndpointInfo& EndpointInfo,
                                 mosys::tracking::Protocol Protocol,
                                 std::string& OutErrorMessage);

    bool Initialized = false;

    /** Thread to run the worker FRunnable on */
    TUniquePtr<FRunnableThread> Thread;

    /** Name of background thread running. */
    FString ThreadName;

    /** Critical section for status text lock */
    FCriticalSection StatusSection;

    /** Thread-safe running counter */
    FThreadSafeCounter RunningCounter = 0;

    /** Used to exit early from running background thread. */
    std::atomic_bool bRequestedThreadExit = false;

    /** Thread-safe engine shutdown status */
    std::atomic_bool bEnginePreExit = false;

    FReceiverHandleFrameCallback HandleFrameCallback;

    FReceiverReadFrameFailedCallback WaitingStatusCallback;

    /** Thread-safe receiving data counter */
    FThreadSafeCounter ReceivingCounter = 0;

    /* Name of the subject the receiver is attached to */
    FName SubjectName;

    /** UDP or COM port */
    FString Port;

    /** IP Address */
    FString IpAddress;

    /** The Mo-Sys Tracking API read worker */
    TUniquePtr<mosys::tracking::TrackingReceiverWorker> Worker;

    /** The last frame number received */
    int LastFrameNumber;

    /** The last status detail string received */
    FString LastStatus;

    /** Formatted logging with thread name and timestamp. */
    void LogError(const std::string& Message) const;

    /** Key for message logging */
    unsigned int MessageKey;

    /** Gets rid of the noisy error message log */
    std::atomic_bool bLogOnce = true;

protected:
    // Begin FRunnable interface.
    virtual bool Init() override;
    virtual uint32 Run() override;
    virtual void Stop() override;
    // End FRunnable interface
};
