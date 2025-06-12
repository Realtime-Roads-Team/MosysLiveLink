// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "MoSysLiveLinkSource.h"

class FMoSysTrackingFrame;
class IMoSysTrackingReceiver;

#define DEFAULT_UDP_PORT 8001

/**
 * UDP Source for Mo-Sys Live Link
 */
class FMoSysLiveLinkUDPSource : public FMoSysLiveLinkSource
{
public:
    FMoSysLiveLinkUDPSource();
    ~FMoSysLiveLinkUDPSource() {}

public:
    void ChangeIPAddress(FString IPAddress);
    FString GetIPAddress() const { return CurrentIPAddress; }

    //~ Begin ILiveLinkSource Interface
    virtual FText GetSourceType() const override;
    virtual void InitializeSettings(ULiveLinkSourceSettings* Settings) override;
protected:
    virtual TSubclassOf<ULiveLinkSourceSettings> GetSettingsClass() const override;
    //~ End ILiveLinkSource Interface

public:
    //~ Begin FMoSysLiveLinkSource Interface
    virtual void CreateSubject(FName SubjectName) override;
    virtual void RemoveSubject(FName SubjectName) override;
    virtual void OnSubjectCreated(FLiveLinkSubjectKey SubjectKey) override;
protected:
    virtual IMoSysTrackingReceiver *CreateReceiver(FName SubjectName, int32 Port, mosys::tracking::Protocol Protocol, ReceiverHandleFrameCallback HandleFrameCallback, ReceiverReadFrameFailedCallback SetStatusCallback) override;
    //~ End FMoSysLiveLinkSource Interface
private:
    void SetEngineTimeOffset(ULiveLinkSourceSettings* Settings);
};
