// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MoSysLiveLinkSource.h"

class FMoSysTrackingFrame;
class IMoSysTrackingReceiver;

#define DEFAULT_SERIAL_PORT 1

/**
 * Serial Source for Mo-Sys Live Link
 */
class FMoSysLiveLinkSerialSource final : public FMoSysLiveLinkSource
{
public:
    FMoSysLiveLinkSerialSource() { DefaultAvailablePort = DEFAULT_SERIAL_PORT; }

    virtual ~FMoSysLiveLinkSerialSource() override = default;

    //~ Begin ILiveLinkSource Interface
    virtual FText GetSourceType() const override;
    //~ End ILiveLinkSource Interface

    //~ Begin FMoSysLiveLinkSource Interface
    virtual void CreateSubject(FName SubjectName) override;
    virtual void RemoveSubject(const FName& SubjectName) override;
    virtual void OnSubjectCreated(FLiveLinkSubjectKey SubjectKey) override;
    virtual bool StartWorker(const FName& SubjectName, const FString& Parameter) override;
    //~ End FMoSysLiveLinkSource Interface

protected:
    //~ Begin ILiveLinkSource Interface
    virtual TSubclassOf<ULiveLinkSourceSettings> GetSettingsClass() const override;
    //~ End ILiveLinkSource Interface

    //~ Begin FMoSysLiveLinkSource Interface
    virtual TSharedPtr<IMoSysTrackingReceiver> CreateReceiver(
        const FName& SubjectName,
        const mosys::networking::IEndpointInfo& EndpointInfo,
        mosys::tracking::Protocol Protocol,
        FReceiverHandleFrameCallback HandleFrameCallback,
        FReceiverReadFrameFailedCallback SetStatusCallback) override;
    //~ End FMoSysLiveLinkSource Interface
};
