// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysTrackingReceiver.h"

#include "MoSysTrackingConversions.h"
#include "MoSysTrackingPrivate.h"

#include "Misc/CoreDelegates.h"

#define BUFFER_CAPACITY            64
#define INVALID_FRAME_NUMBER    -1

FMoSysTrackingReceiver::FMoSysTrackingReceiver(FName InSubjectName, FString InPort, mosys::tracking::CommunicationMode InMode, mosys::tracking::Protocol InProtocol, uint64 InMessageKey, ReceiverHandleFrameCallback InHandleFrameCallback, ReceiverReadFrameFailedCallback InReadFrameFailedCallback, FString InIpAddress)
    : Thread(nullptr)
    , RunningCounter(0)
    , HandleFrameCallback(InHandleFrameCallback)
    , WaitingStatusCallback(InReadFrameFailedCallback)
    , ReceivingCounter(0)
    , SubjectName(InSubjectName)
    , Port(InPort)
    , IpAddress(InIpAddress)
    , Worker(mosys::tracking::Worker::createWorker(InMode, InProtocol))
    , LastFrameNumber(INVALID_FRAME_NUMBER)
    , MessageKey(InMessageKey)
{
    if (FPlatformProcess::SupportsMultithreading())
    {
        // Ensure a unique name
        FString Timestamp = FString::FromInt(FDateTime::UtcNow().ToUnixTimestamp());
        ThreadName = "MoSysTrackingReceiver:" + Port + ":" + Timestamp;

        // Windows default = 8MB stack for thread
        Thread.Reset(FRunnableThread::Create(this, *ThreadName, 0, TPri_TimeCritical));
    }

    FCoreDelegates::OnPreExit.AddRaw(this, &FMoSysTrackingReceiver::OnPreExit);
}

FMoSysTrackingReceiver::~FMoSysTrackingReceiver()
{
    Stop();
}

bool FMoSysTrackingReceiver::Init()
{
    if (!Worker)
    {
        SetLastErrorMessage("Cannot initialise, receiver worker not available.");
        return false;
    }
    if (!Worker->init(TCHAR_TO_ANSI(*Port), TCHAR_TO_ANSI(*IpAddress)))
    {
        SetPortErrorMessage();
        return false;
    }
    RunningCounter.Increment();
    LastFrameNumber = INVALID_FRAME_NUMBER;
    return true;
}

void FMoSysTrackingReceiver::GetStatus(FText &OutStatus)
{
    // Thread safe access
    FString Status = MoSysTrackingConversions::UEnum2TrackingStatusString(EMoSysTrackingStatus::Waiting);
    if (IsReceiving())
    {
        StatusSection.Lock();
        {
            Status = LastStatus;
        }
        StatusSection.Unlock();
    }
    OutStatus = FText::FromString(Status);
}

void FMoSysTrackingReceiver::GetLastErrorMessage(FString &OutMessage)
{
    // Thread safe access
    MessageSection.Lock();
    {
        OutMessage = LastErrorMessage;
    }
    MessageSection.Unlock();
}

uint64 FMoSysTrackingReceiver::GetMessageKey()
{
    return MessageKey;
}

uint32 FMoSysTrackingReceiver::Run()
{
    if (!Worker)
    {
        SetLastErrorMessage("Cannot run, receiver worker not available.");
        return 1;
    }

    // Wait for a connection - retry every second
    while (IsRunning() && !Worker->connect())
    {
        FPlatformProcess::Sleep(1); // 1s 
        if (bLogOnce)
        {
            SetPortErrorMessage(false); 
            bLogOnce = false;
        }
    }

    // While thread is running
    std::string detailString;
    while (Worker && IsRunning())
    {
        if (Worker->isReady())
        {
            // Read and parse
            mosys::tracking::TrackingFrame frame;
            if (Worker->read(frame))
            {
                FString Status = "Receiving";
                if (frame.status.detail > 0)
                {
                    frame.status.detailString(detailString);
                    Status = ANSI_TO_TCHAR(detailString.c_str());
                }
                StatusSection.Lock();
                {
                    LastStatus = Status;
                }
                StatusSection.Unlock();
                ReceivingCounter.Increment();
                if (HandleFrameCallback != nullptr) 
                {
                    // if engine is exiting then LiveLinkClient crit section already locked by FLiveLinkClient::Shutdown so HandleFrameCallback's call of
                    // LiveLinkClient::PushSubjectFrameData_AnyThread will deadlock (preventing the Receiver from ever shutting down)
                    if (!bEnginePreExit)
                    {
                        FLiveLinkMoSysFrameData LiveLinkFrame = MoSysTrackingConversions::MoSys2UnrealFrameData(frame);
                        HandleFrameCallback(SubjectName, LiveLinkFrame);
                    }
                }
                bLogOnce = true;
            }
            else
            {
                if (bRequestedThreadExit)
                {
                    break;
                }
                
                if (WaitingStatusCallback != nullptr)
                {
                    WaitingStatusCallback(SubjectName);
                }
                ReceivingCounter.Reset();

                if (bLogOnce)
                {
                    SetPortErrorMessage();
                    bLogOnce = false;
                }
                // Could not read - try again in 1s
                FPlatformProcess::Sleep(1);
            }
        }
        else
        {
            if (bRequestedThreadExit)
            {
                break;
            }
            
            ReceivingCounter.Reset();
            SetLastErrorMessage("Mo-Sys background receiver worker is not ready");
            if (!Worker->connect())
            {
                // Could not connect - try again in 1s
                FPlatformProcess::Sleep(1);
            }
        }
        // Prevent thread from using too many resources by yielding for 10ms
        FPlatformProcess::Sleep(0.01);
    }
    ReceivingCounter.Reset();
    return 0;
}

void FMoSysTrackingReceiver::Stop()
{
    RunningCounter.Reset();
    ReceivingCounter.Reset();
    bRequestedThreadExit = true;

    if (Worker)
    {
        Worker->stop();
    }

    if (Thread)
    {
        Thread->WaitForCompletion();
    }

    Worker.Reset();
}

bool FMoSysTrackingReceiver::IsRunning()
{
    return (RunningCounter.GetValue() > 0);
}

bool FMoSysTrackingReceiver::IsReceiving()
{
    return (ReceivingCounter.GetValue() > 0);
}

void FMoSysTrackingReceiver::OnPreExit()
{
    bEnginePreExit = true;
}

/** Private methods */

void FMoSysTrackingReceiver::SetLastErrorMessage(FString message, bool Log)
{
    if (Log)
    {
        UE_LOG(LogMoSysTracking, Error, TEXT("Mo-Sys background thread (%s) error: %s"), *ThreadName, *message);
    }

    MessageSection.Lock();
    {
        if (message.Len() > 0)
        {
            LastErrorMessage = message;
        }
        else
        {
            LastErrorMessage = "Unknown error. Check connections and port.";
        }
    }
    MessageSection.Unlock();
}

void FMoSysTrackingReceiver::SetPortErrorMessage(bool Log)
{
    std::string message;
    if (Worker->getLastErrorMessage(message))
    {
        SetLastErrorMessage(ANSI_TO_TCHAR(message.c_str()), Log);
    }
    else
    {
        SetLastErrorMessage("Unknown error. Check connections and port.");
    }
    ReceivingCounter.Reset();
}
