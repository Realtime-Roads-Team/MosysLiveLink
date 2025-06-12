// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "robotics/MoRail.h"

#include "MoSysMoRail.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConnect, bool, Success);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGet, bool, Success, int, Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSet, bool, Success);

/**
 * 
 */
UCLASS(BlueprintType)
class MOSYSTRACKING_API UMoRail : public UObject
{
	GENERATED_BODY()

public:
   
    UMoRail();
	~UMoRail();

    /**
     * \brief Set the ip address for MoRail.
     *
     * \details Changing the address Will cause disconnection of both devices.
     *
     * \param ip_address Address as string. E.g. "192.168.134.17".
     */
    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|VP")
    bool SetMoRailAddress(FString IpAddress);

    /**
     * \brief Set the ip address for PTZ.
     *
     * \details Changing the address Will cause disconnection of both devices.
     *
     * \param ip_address Address as string. E.g. "192.168.134.17".
     */
    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|VP")
    bool SetPTZAddress(FString IpAddress);

    /**
     * \brief Connect both devices.
     *
     * \param callback Function will be called when both devices are
     *                 successfully connected or either failed.
     */
    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|VP")
    void Connect();

    /**
     * \brief Disconnect both devices.
     *
     */
    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|VP")
    void Disconnect();

    /**
     * \brief Determine if MoRail and PTZ devices are connected.
     *
     * \return true if both devices are connected.
     */
    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|VP")
    bool IsConnected() const;

    /**
     * \brief Command the devices to move to a pre-stored position.
     *
     * \param index      Index of a pre-stored position.
     * \param callback   Called when the command has been processed.
     *
     * \return           true if devices are connected, false otherwise.
     */
    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|VP")
    bool GotoPosition(int Index);

    /**
     * \brief Cancel a previously issued goto command.
     *
     * \param callback   Called when the command has been processed.
     * \return           true if devices are connected, false otherwise.
     */
    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|VP")
    bool Stop();

    /**
     * \brief Set the duration of the move to the next goto position.
     *
     * \details This must not be less than the time returned by getRequiredTimeMs()
     * \details for that position.
     *
     * \param timeMs     Time (in milliseconds) to goto next position
     * \param callback   Called when the command has been processed.
     * \return           true if devices are connected, false otherwise.
     */
    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|VP")
    bool SetGotoMinTimeMs(int TimeMs);

    /**
     * \brief Calculate the minimum time to reach the given position.
     *
     * \param positionIndex  Index of the destination position
     * \param callback       Called with the calculated time or -1 if device is not stopped.
     * \return               true if devices are connected, false otherwise.
     */
    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|VP")
    bool GetRequiredTimeMs(int PositionIndex);

    /**
     * \brief Set port to be used for MoRail communication.
     *
     * \details This is only for use testing with the DummyMoRailServer, so that
     * \details they can share the same (localhost) address.
     *
     * \param port Port to use for MoRail communication
     */
    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|VP")
    void SetMoRailPort(int Port);

    /**
     * \brief Set port to be used for PTZ communication.
     *
     * \details This is only for use testing with the DummyMoRailServer, so that
     * \details they can share the same (localhost) address.
     *
     * \param port Port to use for PTZ communication
     */
    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|VP")
    void SetPtzPort(int Port);

    /**
     * \brief Finish any pending operations on the comms thread.
     */
    bool FlushCommands();

    UPROPERTY(BlueprintAssignable, Category = "Mo-Sys|VP")
    FOnConnect ConnectEvent;
    UPROPERTY(BlueprintAssignable, Category = "Mo-Sys|VP")
    FOnSet GotoPositionEvent;
    UPROPERTY(BlueprintAssignable, Category = "Mo-Sys|VP")
    FOnSet StopEvent;
    UPROPERTY(BlueprintAssignable, Category = "Mo-Sys|VP")
    FOnSet SetGotoMinTimeEvent;
    UPROPERTY(BlueprintAssignable, Category = "Mo-Sys|VP")
    FOnGet GetRequiredTimeEvent;

private:
	mosys::MoRail m_moRail;
};
