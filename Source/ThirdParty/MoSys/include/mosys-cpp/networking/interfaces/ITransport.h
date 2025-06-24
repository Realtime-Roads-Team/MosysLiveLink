// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <cstdint>
#include <span>
#include <string>

#include "mosys-cpp/networking/interfaces/IEndpointInfo.h"

namespace mosys::networking
{
    enum class TransportType : uint8_t
    {
        UDP,
        TCP,
        Serial
    };

    /**
     * \class ITransport
     * \brief Base interface for network/serial communication operations.
     */
    class ITransport
    {
    public:
        /**
         * \brief Virtual destructor.
         */
        virtual ~ITransport() = default;

        /**
         * \brief Initialize the socket connection.
         *
         * \param isClient True if the socket is a client (receiver), false if it's a server (sender).
         * \param outErrorMessage Output parameter for error messages.
         * \return True if initialization succeeded, false otherwise.
         */
        [[nodiscard]] virtual bool initialize(bool isClient,
                                              std::string& outErrorMessage) = 0;

        /**
         * \brief Get the current endpoint information.
         *
         * \return Reference to the endpoint information.
         */
        [[nodiscard]] virtual const IEndpointInfo& endpointInfo() const = 0;

        /**
         * \brief Check if this transport is operating as a client.
         *
         * \return True if operating as client, false if operating as server.
         */
        [[nodiscard]] virtual bool isClient() const = 0;

        /**
         * \brief Check if the socket is valid.
         *
         * \return True if the socket is open and correctly initialized, false otherwise.
         */
        [[nodiscard]] virtual bool isValid() const = 0;

        /**
         * \brief Close the socket connection.
         *
         * \param outErrorMessage Output parameter for error messages.
         * \return True if the socket was closed successfully, false otherwise.
         */
        virtual bool close(std::string& outErrorMessage) = 0;

        /**
         * \brief Check how many bytes are available to read without removing them from the input queue.
         *
         * \return The number of bytes available for reading.
         */
        [[nodiscard]] virtual size_t peek() const = 0;

        /**
         * \brief Send data through a connected socket.
         *
         * \param data Byte data to be sent.
         * \param outErrorMessage Output parameter for error messages.
         * \return The number of bytes successfully sent.
         */
        virtual size_t send(std::span<const uint8_t> data, std::string& outErrorMessage) = 0;

        /**
         * \brief Receive data from a connected socket.
         *
         * \param outData Byte buffer where received data will be stored.
         * \param outErrorMessage Output parameter for error messages.
         * \return The number of bytes successfully received.
         */
        virtual size_t receive(std::span<uint8_t> outData, std::string& outErrorMessage) = 0;

        /**
         * \brief Get the name of the transport.
         *
         * \return The name of the transport as a string.
         */
        [[nodiscard]] virtual const char* name() const = 0;

        /**
         * \brief Get the type of the transport.
         *
         * \return The type of the transport as a TransportType enum value.
         */
        [[nodiscard]] virtual TransportType type() const = 0;
    };
} // namespace mosys::networking
