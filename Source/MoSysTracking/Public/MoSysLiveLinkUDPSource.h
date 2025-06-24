// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "MoSysLiveLinkSource.h"

class FMoSysTrackingFrame;
class IMoSysTrackingReceiver;

#define DEFAULT_UDP_PORT 8001

/**
 * UDP Source for Mo-Sys Live Link
 */
class FMoSysLiveLinkUDPSource final : public FMoSysLiveLinkSource
{
public:
    FMoSysLiveLinkUDPSource();

    virtual ~FMoSysLiveLinkUDPSource() override = default;

    void ChangeIPAddress(FString IPAddress);
    FString GetIPAddress() const { return CurrentIPAddress; }

    //~ Begin ILiveLinkSource Interface
    virtual FText GetSourceType() const override;
    virtual void InitializeSettings(ULiveLinkSourceSettings* Settings) override;

    virtual bool StartWorker(const FName& SubjectName, const FString& Parameter) override;

protected:
    virtual TSubclassOf<ULiveLinkSourceSettings> GetSettingsClass() const override;
    //~ End ILiveLinkSource Interface

public:
    //~ Begin FMoSysLiveLinkSource Interface
    virtual void CreateSubject(FName SubjectName) override;
    virtual void RemoveSubject(const FName& SubjectName) override;
    virtual void OnSubjectCreated(FLiveLinkSubjectKey SubjectKey) override;

protected:
    virtual TSharedPtr<IMoSysTrackingReceiver> CreateReceiver(
        const FName& SubjectName,
        const mosys::networking::IEndpointInfo& EndpointInfo,
        mosys::tracking::Protocol Protocol,
        FReceiverHandleFrameCallback HandleFrameCallback,
        FReceiverReadFrameFailedCallback SetStatusCallback) override;
    //~ End FMoSysLiveLinkSource Interface
private:
    void SetEngineTimeOffset(ULiveLinkSourceSettings* Settings);
};
