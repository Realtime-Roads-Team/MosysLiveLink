// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysTrackingReceiver.h"

#include "MoSysTrackingConversions.h"
#include "MoSysTrackingPrivate.h"

#include "Misc/CoreDelegates.h"

#include "mosys-cpp/tracking/workers/TrackingReceiverWorker.h"
#include "mosys-cpp/tracking/workers/TrackingWorkerFactory.h"

using mosys::tracking::TrackingWorkerFactory;
using mosys::tracking::TrackingReceiverWorker;

namespace
{
    constexpr int INVALID_FRAME_NUMBER = -1;
} // namespace

FMoSysTrackingReceiver::FMoSysTrackingReceiver(FName InSubjectName,
                                               const mosys::networking::IEndpointInfo& EndpointInfo,
                                               const mosys::tracking::Protocol Protocol,
                                               const uint64 MessageKey,
                                               FReceiverHandleFrameCallback HandleFrameCallback,
                                               FReceiverReadFrameFailedCallback HandleFailedFrameCallback) :
    HandleFrameCallback(HandleFrameCallback),
    WaitingStatusCallback(HandleFailedFrameCallback),
    SubjectName(InSubjectName),
    LastFrameNumber(INVALID_FRAME_NUMBER),
    MessageKey(MessageKey)
{
    if (std::string OutErrorMessage;
        !InitializeTrackingWorker(EndpointInfo, Protocol, OutErrorMessage))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create TrackingReceiverWorker, %s"),
               UTF8_TO_TCHAR(OutErrorMessage.c_str()));

        return;
    }

    if (FPlatformProcess::SupportsMultithreading())
    {
        // Ensure a unique name
        const FString Timestamp = FString::FromInt(FDateTime::UtcNow().ToUnixTimestamp());
        ThreadName = "MoSysTrackingReceiver:" + Port + ":" + Timestamp;

        // Windows default = 8MB stack for thread
        Thread.Reset(FRunnableThread::Create(this, *ThreadName, 0, TPri_TimeCritical));
    }

    FCoreDelegates::OnPreExit.AddRaw(this, &FMoSysTrackingReceiver::OnPreExit);
    Initialized = true;
}

bool FMoSysTrackingReceiver::InitializeTrackingWorker(const mosys::networking::IEndpointInfo& EndpointInfo,
                                                     mosys::tracking::Protocol Protocol,
                                                     std::string& OutErrorMessage)
{
    switch (Protocol)
    {
    case mosys::tracking::Protocol::F4:
        {
            switch (EndpointInfo.type())
            {
            case mosys::networking::EndpointInfoType::UDPEndpointInfo:
                {
                    const auto UdpEndpointInfo = static_cast<const mosys::networking::UDPEndpointInfo&>(EndpointInfo);
                    Worker = TUniquePtr<TrackingReceiverWorker>(
                        TrackingWorkerFactory::create<TrackingReceiverWorker, mosys::tracking::Protocol::F4>
                        (UdpEndpointInfo, OutErrorMessage).release());
                }
                break;
            case mosys::networking::EndpointInfoType::SerialEndpointInfo:
                {
                    const auto SerialEndpointInfo = static_cast<const mosys::networking::SerialEndpointInfo&>(EndpointInfo);
                    Worker = TUniquePtr<TrackingReceiverWorker>(
                        TrackingWorkerFactory::create<TrackingReceiverWorker, mosys::tracking::Protocol::F4>
                        (SerialEndpointInfo, OutErrorMessage).release());
                }
                break;
            default:
                OutErrorMessage = "Unsupported endpoint type for F4 tracking protocol."; 
                check(false && "Unsupported endpoint type for F4 tracking protocol.");
            }
        }
        break;
    case mosys::tracking::Protocol::OpenTrackIO:
        {
            switch (EndpointInfo.type())
            {
            case mosys::networking::EndpointInfoType::UDPEndpointInfo:
                {
                    const auto UdpEndpointInfo = static_cast<const mosys::networking::UDPEndpointInfo&>(EndpointInfo);
                    Worker = TUniquePtr<TrackingReceiverWorker>(
                        TrackingWorkerFactory::create<TrackingReceiverWorker, mosys::tracking::Protocol::OpenTrackIO>
                        (UdpEndpointInfo, OutErrorMessage).release());
                }
                break;
            default:
                OutErrorMessage = "Unsupported endpoint type for OpenTrackIO tracking protocol.";
                check(false && "Unsupported endpoint type for OpenTrackIO tracking protocol.");
            }
        }
        break;
    default:
        OutErrorMessage = "Unknown tracking protocol";
        check(false && "Unknown tracking protocol");
    }

    return Worker.IsValid();
}

FMoSysTrackingReceiver::~FMoSysTrackingReceiver()
{
    this->Stop();
}

bool FMoSysTrackingReceiver::Init()
{
    RunningCounter.Increment();
    LastFrameNumber = INVALID_FRAME_NUMBER;
    return true;
}

void FMoSysTrackingReceiver::GetStatus(FText& OutStatus)
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

uint64 FMoSysTrackingReceiver::GetMessageKey()
{
    return MessageKey;
}

uint32 FMoSysTrackingReceiver::Run()
{
    if (!Worker.IsValid())
    {
        LogError("Failed to initialise tracking receiver worker. Underlying worker is nullptr.");
        return 1;
    }

    std::string OutErrorMessage;
    uint8 TriesCount = 0;
    while (IsRunning() && !Worker->connect(OutErrorMessage))
    {
        if (bRequestedThreadExit)
        {
            return 0;
        }

        if (bLogOnce && TriesCount > 0)
        {
            LogError(OutErrorMessage);
            bLogOnce = false;
        }

        ++TriesCount;
        FPlatformProcess::Sleep(0.2);
    }

    bLogOnce = true;

    // While thread is running.
    std::string DetailString;
    FString Status = "Receiving";
    while (Worker && IsRunning())
    {
        if (Worker->isValid())
        {
            // Read and parse.
            if (mosys::tracking::TrackingFrame OutTrackingFrame;
                Worker->execute(OutTrackingFrame, OutErrorMessage))
            {
                Status = "Receiving";
                if (OutTrackingFrame.status.detail > 0)
                {
                    OutTrackingFrame.status.detailString(DetailString);
                    Status = ANSI_TO_TCHAR(DetailString.c_str());
                }

                {
                    StatusSection.Lock();
                    LastStatus = Status;
                    StatusSection.Unlock();
                }

                ReceivingCounter.Increment();
                if (HandleFrameCallback != nullptr)
                {
                    // if engine is exiting then LiveLinkClient crit section already locked by FLiveLinkClient::Shutdown so HandleFrameCallback's call of
                    // LiveLinkClient::PushSubjectFrameData_AnyThread will deadlock (preventing the Receiver from ever shutting down)
                    if (!bEnginePreExit)
                    {
                        FLiveLinkMoSysFrameData LiveLinkFrame = MoSysTrackingConversions::MoSys2UnrealFrameData(
                            OutTrackingFrame);
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
                    LogError(OutErrorMessage);
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

            if (bLogOnce)
            {
                LogError("Receiver worker is not ready.");
            }

            if (!Worker->connect(OutErrorMessage))
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
        std::string OutErrorMessage;
        Worker->close(OutErrorMessage);
    }

    if (Thread)
    {
        Thread->WaitForCompletion();
    }

    Worker.Reset();
}

bool FMoSysTrackingReceiver::IsRunning()
{
    return RunningCounter.GetValue() > 0;
}

bool FMoSysTrackingReceiver::IsReceiving()
{
    return ReceivingCounter.GetValue() > 0;
}

void FMoSysTrackingReceiver::OnPreExit()
{
    bEnginePreExit = true;
}

void FMoSysTrackingReceiver::LogError(const std::string& Message) const
{
    UE_LOG(LogMoSysTracking,
           Error,
           TEXT("Mo-Sys Tracking receiver thread (%s) Error: %s"),
           *ThreadName,
           UTF8_TO_TCHAR(Message.c_str()));
}
