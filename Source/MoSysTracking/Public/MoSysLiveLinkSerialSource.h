// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MoSysLiveLinkSource.h"

class FMoSysTrackingFrame;
class IMoSysTrackingReceiver;

#define DEFAULT_SERIAL_PORT 1

/**
 * Serial Source for Mo-Sys Live Link
 */
class FMoSysLiveLinkSerialSource : public FMoSysLiveLinkSource
{
public:
    FMoSysLiveLinkSerialSource() { DefaultAvailablePort = DEFAULT_SERIAL_PORT; }
    ~FMoSysLiveLinkSerialSource() {}

    //~ Begin ILiveLinkSource Interface
    virtual FText GetSourceType() const override;
    //~ End ILiveLinkSource Interface

    //~ Begin FMoSysLiveLinkSource Interface
    virtual void CreateSubject(FName SubjectName) override;
    virtual void RemoveSubject(FName SubjectName) override;
    virtual void OnSubjectCreated(FLiveLinkSubjectKey SubjectKey) override;
    //~ End FMoSysLiveLinkSource Interface

protected:
    //~ Begin ILiveLinkSource Interface
    virtual TSubclassOf<ULiveLinkSourceSettings> GetSettingsClass() const override;
    //~ End ILiveLinkSource Interface

    //~ Begin FMoSysLiveLinkSource Interface
    virtual IMoSysTrackingReceiver *CreateReceiver(FName SubjectName, int32 Port, mosys::tracking::Protocol Protocol, ReceiverHandleFrameCallback HandleFrameCallback, ReceiverReadFrameFailedCallback SetStatusCallback) override;
    //~ End FMoSysLiveLinkSource Interface
};
