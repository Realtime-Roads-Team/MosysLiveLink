// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "mosys-cpp/networking/interfaces/ITransport.h"
#include "mosys-cpp/networking/transports/endpoint-info/UDPEndpointInfo.h"

#include <memory>

namespace mosys::networking
{
    /**
     * \class UDPTransport
     * \brief Implementation of ITransport for UDP socket communications.
     *
     * Uses Boost.Asio for cross-platform UDP socket operations.
     * Handles connection initialization, address/port management, and connection status.
     */
    class UDPTransport final : public ITransport
    {
    public:
        UDPTransport() = delete;

        /**
         * \brief UDPTransport constructor.
         *
         * \param endpointInfo Endpoint info to connect/bind to for sending or receiving bytes.
         */
        explicit UDPTransport(const UDPEndpointInfo& endpointInfo);

        ~UDPTransport() override;

        // Delete copy and move operations
        UDPTransport(const UDPTransport&) = delete;

        UDPTransport& operator=(const UDPTransport&) = delete;

        UDPTransport(UDPTransport&&) = delete;

        UDPTransport& operator=(UDPTransport&&) = delete;

        // ~Begin ITransport interface~

        /**
         * \brief Initialize the UDP socket connection.
         *
         * \param isClient True if the socket is a client (receiver), false if it's a server (sender).
         * \param outErrorMessage Output parameter for error messages.
         * \return True if initialization succeeded, false otherwise.
         */
        [[nodiscard]] bool initialize(bool isClient,
                                      std::string& outErrorMessage) override;

        /**
         * \brief Get the current endpoint information.
         *
         * \return Reference to the endpoint information.
         */
        [[nodiscard]] const UDPEndpointInfo& endpointInfo() const override;

        /**
         * \brief Check if this transport is operating as a client.
         *
         * \return True if operating as client, false if operating as server.
         */
        [[nodiscard]] bool isClient() const override;

        /**
         * \brief Check if the socket is valid.
         *
         * Verifies that the socket is open and has been correctly initialized.
         *
         * \return True if the socket is open and correctly initialized, false otherwise.
         */
        [[nodiscard]] bool isValid() const override;

        /**
         * \brief Close the socket connection.
         *
         * Shuts down and closes the socket connection, cleaning up resources.
         *
         * \param outErrorMessage Output parameter for error messages.
         * \return True if the socket was closed successfully, false otherwise.
         *
         * \note This function will close the socket and stop the io_service even if false is returned.
         */
        bool close(std::string& outErrorMessage) override;

        /**
         * \brief Check how many bytes are available to read.
         *
         * \return The number of bytes available for reading.
         */
        [[nodiscard]] size_t peek() const override;

        /**
         * \brief Send data through the UDP socket.
         *
         * \param data Byte data to be sent.
         * \param outErrorMessage Output parameter for error messages.
         * \return The number of bytes successfully sent.
         */
        size_t send(std::span<const uint8_t> data, std::string& outErrorMessage) override;

        /**
         * \brief Receive data from the UDP socket.
         *
         * \param outData Byte buffer where received data will be stored.
         * \param outErrorMessage Output parameter for error messages.
         * \return The number of bytes successfully received.
         */
        size_t receive(std::span<uint8_t> outData, std::string& outErrorMessage) override;

        /**
         * \brief Get the name of the transport.
         *
         * \return The name of the transport as a string.
         */
        [[nodiscard]] const char* name() const override
        {
            return "UDPTransport";
        }

        /**
         * \brief Get the type of the transport.
         *
         * \return The transport type as an enum value.
         */
        [[nodiscard]] TransportType type() const override
        {
            return TransportType::UDP;
        }

        // ~End ITransport interface~

    private:
        // Forward declaration of implementation class.
        class Impl;

        // Pointer to implementation (pimpl). This is done to avoid exposing boost.
        std::unique_ptr<Impl> m_impl;
    };
} // mosys::networking
