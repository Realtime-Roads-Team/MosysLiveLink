// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once
#include <memory>
#include <functional>
#include <stdint.h>


namespace mosys
{

/**
 * \brief API for controlling a MoRail device.
 * 
 * \details Member functions taking callbacks are asynchronous. If you call a second asynchronous function
 * \details before recieving the callback from the first, the call will block the calling thread until the
 * \details first. You can call one asynchronous functiopn from the callback of another.
 */

class MoRail
{
public:

    /**
     * Callback types.
     */
    using ConnectCallback = std::function<void(bool success)>;
    using GetCallback = std::function<void(bool success, int32_t result)>;
    using SetCallback = std::function<void(bool success)>;

    /**
     * \brief Constructor.
     */
    MoRail();

    /**
     * \brief Destructor.
     */
    ~MoRail();

    /**
     * \brief Set the ip address for MoRail.
     * 
     * \details Changing the address Will cause disconnection of both devices.
     * 
     * \param ip_address Address as string. E.g. "192.168.134.17".
     */
    bool setMoRailAddress(const char* ipAddress);

    /**
     * \brief Set the ip address for PTZ.
     *
     * \details Changing the address Will cause disconnection of both devices.
     *
     * \param ip_address Address as string. E.g. "192.168.134.17".
     */
    bool setPTZAddress(const char* ipAddress);

    /**
     * \brief Connect both devices.
     * 
     * \param callback Function will be called when both devices are
     *                 successfully connected or either failed.
     */
    void connect(ConnectCallback callback);

    /**
     * \brief Disconnect both devices.
     * 
     */
    void disconnect();

    /**
     * \brief Determine if MoRail and PTZ devices are connected.
     * 
     * \return true if both devices are connected.
     */
    bool isConnected() const;

    /**
     * \brief Command the devices to move to a pre-stored position.
     * 
     * \param index      Index of a pre-stored position.
     * \param callback   Called when the command has been processed.
     * 
     * \return           true if devices are connected, false otherwise.
     */
    bool gotoPosition(int32_t index, SetCallback callback);

    /**
     * \brief Cancel a previously issued goto command.
     * 
     * \param callback   Called when the command has been processed.
     * \return           true if devices are connected, false otherwise.
     */
    bool stop(SetCallback callback);

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
    bool setGotoMinTimeMs(int32_t timeMs, SetCallback callback);

    /**
     * \brief Calculate the minimum time to reach the given position.
     * 
     * \param positionIndex  Index of the destination position
     * \param callback       Called with the calculated time or -1 if device is not stopped.
     * \return               true if devices are connected, false otherwise.
     */
    bool getRequiredTimeMs(int32_t positionIndex, GetCallback callback);

    /**
     * \brief Set port to be used for MoRail communication.
     *
     * \details This is only for use testing with the DummyMoRailServer, so that
     * \details they can share the same (localhost) address.
     *
     * \param port Port to use for MoRail communication
     */
    void setMoRailPort(int port);

    /**
     * \brief Set port to be used for PTZ communication.
     *
     * \details This is only for use testing with the DummyMoRailServer, so that
     * \details they can share the same (localhost) address.
     *
     * \param port Port to use for PTZ communication
     */
    void setPtzPort(int port);

    /**
     * \brief Finish any pending operations on the comms thread.
     */
    bool flushCommands();

private:
    class Pimpl;
    std::unique_ptr<Pimpl> m_pimpl;
};

} //namespace mosys
