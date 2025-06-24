// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "ILiveLinkSource.h"
#include "LiveLinkClient.h"
#include "MoSysTrackingReceiverManager.h"

/**
 * Abstract base class for Mo-Sys Live Link Sources
 */
class FMoSysLiveLinkSource : public ILiveLinkSource
{
public:
    FMoSysLiveLinkSource() = default;
    ~FMoSysLiveLinkSource() = default;

    /* ~Begin ILiveLinkSource Interface*/
    virtual void ReceiveClient(ILiveLinkClient* InClient, FGuid InSourceGuid) override;

    virtual bool IsSourceStillValid() const override;
    virtual bool RequestSourceShutdown() override;

    virtual FText GetSourceType() const override = 0;
    virtual FText GetSourceMachineName() const override;
    virtual FText GetSourceStatus() const override;
    
    virtual TSubclassOf<ULiveLinkSourceSettings> GetSettingsClass() const override = 0;
    /* ~End ILiveLinkSource Interface*/

    /**
     * Called from MoSysLiveLinkSourceDetails when add/delete button is triggered.
     * Derived classes need to inherit this to handle how each type would handle adding/removing a subject. 
     */
    virtual void CreateSubject(FName SubjectName) = 0;
    virtual void RemoveSubject(FName SubjectName);

    /**
     * This method is bound to OnMoSysSubjectAdded delegate. This must be overidden and implemented in
     * derived classes using their own subject settings to correctly start the worker for their source type.
     */
    virtual void OnSubjectCreated(FLiveLinkSubjectKey SubjectKey) = 0;
    virtual bool StartWorker(FName SubjectName, FString Parameter);

    /**
     * Called on RequestSourceShutdown. Iterates through map of receivers and safely deletes their values.
     * Also empties array of ports and map of receivers.
     */
    virtual void Clean();

    /**
     * Called to change the port from a given subject name using functions delete and add from the array of ports.
     * @param SubjectName - Name of the subject in the list of this source.
     * @param OutCurrentPort - Returns the available port, either the value of TargetPort or the current port as it is.
     * @param TargetPort - The port the user wishes to change to.
     * @return true if succesfully changed to TargetPort, false otherwise and return unchanged OutCurrentPort.
     */
    bool ChangePort(FName SubjectName, int32 &OutCurrentPort, int32 TargetPort);

protected:
    /**
     * Called when a Subject gets added to the client, when a port gets changed in ChangePort via SourceSettingsChanged
     * from a source. Attempts to add a port to the container of ports.
     * @param OutAvailablePort - on return will contain the available port that doesn't exist in the container of ports
     * @param TargetPort - if not set then function has been called when the subject has been added, will attempt to
     * give the next available port.
     * @return true if a port has been added, false if a port already exists.
     */
    bool AddPort(int32 &OutAvailablePort, int32 TargetPort = -1);
    bool RemovePort(int32 Port);

    /**
     * Derived classes need to override and implement this to create each source type's receiver.
     * @param SubjectName - Name of the subject to pass to the ReceiverManager.
     * @param Port - Port number to pass..
     * @param Callback - The callback to bind the receiver to to apply frame data to Live Link.
     */
    virtual IMoSysTrackingReceiver *CreateReceiver(FName SubjectName, int32 Port, mosys::tracking::Protocol Protocol, ReceiverHandleFrameCallback HandleFrameCallback, ReceiverReadFrameFailedCallback SetStatusCallback) = 0;

public:
    /**
     * Callback bound to the receiver on its own separate thread. Applies Mo-Sys frame data to Unreal and pushes
     * it to Live Link.
     * @param SubjectName - Name of the subject needed to push to the client.
     * @param Frame - This frame's data that needs to be applied.
     */
    void HandleSubjectFrame(FName SubjectName, FLiveLinkMoSysFrameData Frame);

    void SetWaitingTrackingStatus(FName SubjectName);

protected:
    /** This source's unique ID. Needed for all sources, but we also use this to find this source from the Live Link client. */
    FGuid Guid;

    /** Cast to this client in ReceiveClient. Used to push subject frame data to. */
    FLiveLinkClient *LiveLinkClient;

    TMap<FName, IMoSysTrackingReceiver*> EncounteredReceivers;

    /** Variables to connect to the receiver. */
    FString CurrentIPAddress;
    int32 DefaultAvailablePort;
    TArray<int32> OccupiedPorts;

private:
    /** Bind on ReceiveClient and RequestSourceShutdown. */
    FDelegateHandle OnMoSysSubjectAdded;
    FDelegateHandle OnMoSysSubjectDeleted;
};
