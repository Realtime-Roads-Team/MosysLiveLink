// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "HAL/Runnable.h"
#include "HAL/RunnableThread.h"
#include "Misc/Timecode.h"
#include "MoSysTrackingReceiverManager.h"

#include <functional>

#include "tracking/TrackingTypes.h"

class FMoSysTrackingFrame;

class FMoSysTrackingReceiver : public IMoSysTrackingReceiver, public TSharedFromThis<IMoSysTrackingReceiver>
{
public:
    friend FMoSysTrackingReceiverManager;

    virtual ~FMoSysTrackingReceiver() override;

    /** Thread-safe access to the status for the LiveLink UI */
    void GetStatus(FText &OutStatus) override;

    /** Thread-safe access to the last error message. */
    void GetLastErrorMessage(FString &OutMessage) override;

    /** Message key for logging on screen messages for this worker. */
    uint64 GetMessageKey() override;

    /** True if the thread has initialised */
    bool IsRunning() override;

    /** True if receiving data */
    bool IsReceiving() override;

    void OnPreExit();
private:

    FMoSysTrackingReceiver(FName InSubjectName, FString InPort, mosys::tracking::CommunicationMode InMode, mosys::tracking::Protocol InProtocol, uint64 InMessageKey, ReceiverHandleFrameCallback InHandleFrameCallback, ReceiverReadFrameFailedCallback InHandleFailedFrameCallback, FString InIpAddress);

    /** Thread to run the worker FRunnable on */
    TUniquePtr<FRunnableThread> Thread;

    /** Name of background thread running. */
    FString ThreadName;

    /** Critical section for status text lock */
    FCriticalSection StatusSection;

    /** Critical section for error message lock */
    FCriticalSection MessageSection;

    /** Thread-safe running counter */
    FThreadSafeCounter RunningCounter;

    /** Used to exit early from running background thread. */
    std::atomic_bool bRequestedThreadExit = false;

    /** Thread-safe engine shutdown status */
    std::atomic_bool bEnginePreExit = false;

    ReceiverHandleFrameCallback HandleFrameCallback;

    ReceiverReadFrameFailedCallback WaitingStatusCallback;

    /** Thread-safe receiving data counter */
    FThreadSafeCounter ReceivingCounter;

    /* Name of the subject the receiver is attached to */
    FName SubjectName;

    /** UDP or COM port */
    FString Port;

    /** IP Address */
    FString IpAddress;

    /** The Mo-Sys Tracking API read worker */
    TUniquePtr<mosys::tracking::Worker> Worker;

    /** The last frame number received */
    int LastFrameNumber;

    /** The last status detail string received */
    FString LastStatus;

    // Port error message and thread-safe setters
    FString LastErrorMessage;
    void SetLastErrorMessage(FString message, bool Log = true);
    void SetPortErrorMessage(bool Log = true);

    /** Key for message logging */
    unsigned int MessageKey;

    /** Gets rid of the noisy error message log */
    // FThreadSafeBool deprecated
    std::atomic_bool bLogOnce = true;

protected:
    // Begin FRunnable interface.
    virtual bool Init() override;
    virtual uint32 Run() override;
    virtual void Stop() override;
    // End FRunnable interface
};
