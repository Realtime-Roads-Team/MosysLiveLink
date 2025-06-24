// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "mosys-cpp/networking/interfaces/ITransport.h"
#include "mosys-cpp/networking/transports/endpoint-info/SerialEndpointInfo.h"
#include <memory>

namespace mosys::networking
{
    /**
     * \class SerialTransport
     * \brief Implementation of ITransport for serial port communication.
     *
     * Provides methods for communicating over serial connections using the Boost.Asio library.
     */
    class SerialTransport final : public ITransport
    {
    public:
        SerialTransport() = delete;

        SerialTransport(const SerialEndpointInfo& endpointInfo);

        /**
         * \brief Destructor. Ensures proper cleanup of serial resources.
         */
        ~SerialTransport() override;

        // Disable copy operations
        SerialTransport(const SerialTransport&) = delete;

        SerialTransport& operator=(const SerialTransport&) = delete;

        // Enable move operations
        SerialTransport(SerialTransport&& other) noexcept;

        SerialTransport& operator=(SerialTransport&& other) noexcept;

        // ~Begin ITransport interface~
        /**
         * \brief Initialize the serial port connection.
         *
         * \param isClient Determines the communication role.
         * \param outErrorMessage Output parameter for error messages.
         * \return True if initialization succeeded, false otherwise.
         */
        [[nodiscard]] bool initialize(bool isClient,
                                      std::string& outErrorMessage) override;

        /**
         * \brief Check if the serial port is valid and initialized.
         *
         * \return True if the port is open and initialized, false otherwise.
         */
        [[nodiscard]] bool isValid() const override;

        /**
         * \brief Get the current serial endpoint information.
         *
         * \return Reference to the serial endpoint configuration.
         */
        [[nodiscard]] const SerialEndpointInfo& endpointInfo() const override { return m_endpointInfo; };

        /**
         * \brief Check if this transport is operating as a client.
         *
         * \return True if operating as client, false otherwise.
         */
        [[nodiscard]] bool isClient() const override { return m_isClient; };

        /**
         * \brief Peeking buffer via Serial Transport is not available.
         *
         * \return Returns 0.
         */
        [[nodiscard]] size_t peek() const override;

        /**
         * \brief Close the serial port connection.
         *
         * \param outErrorMessage Output parameter for error messages.
         * \return True if the port was closed successfully, false otherwise.
         */
        bool close(std::string& outErrorMessage) override;

        /**
         * \brief Send data through the serial port.
         *
         * \param data Byte data to be sent.
         * \param outErrorMessage Output parameter for error messages.
         * \return The number of bytes successfully sent.
         */
        size_t send(std::span<const uint8_t> data, std::string& outErrorMessage) override;

        /**
         * \brief Receive data from the serial port.
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
            return "SerialTransport";
        }

        /**
         * \brief Get the type of the transport.
         *
         * \return The transport type as an enum value.
         */
        [[nodiscard]] TransportType type() const override
        {
            return TransportType::Serial;
        }

        // ~End ITransport interface~

    private:
        // Forward declaration of implementation class.
        class Impl;

        // Pointer to implementation. This is used to avoid exposing boost in this header.
        std::unique_ptr<Impl> m_impl;

        SerialEndpointInfo m_endpointInfo{};
        bool m_isClient{false};
        bool m_initialized{false};
    };
} // mosys::networking
