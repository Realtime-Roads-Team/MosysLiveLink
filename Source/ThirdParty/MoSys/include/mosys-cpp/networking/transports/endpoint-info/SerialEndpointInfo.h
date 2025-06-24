// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <optional>
#include <format>

#include "mosys-cpp/networking/interfaces/IEndpointInfo.h"

namespace mosys::networking
{
    /**
     * \struct SerialEndpointInfo
     * \brief Endpoint information for serial port connections.
     *
     * Contains device name and baud rate information required for serial communications.
     */
    struct SerialEndpointInfo final : IEndpointInfo
    {
        static constexpr uint32_t DEFAULT_BAUD_RATE = 57'600;

        /**
         * \brief Default constructor.
         */
        SerialEndpointInfo() = default;

        /**
         * \brief Virtual destructor.
         */
        ~SerialEndpointInfo() override = default;

        /**
         * \brief Constructs a serial endpoint with specified device name and baud rate.
         *
         * \param deviceName The serial device name or path (e.g., "COM1", "/dev/ttyS0").
         * \param baudRate The communication speed in bits per second.
         */
        explicit SerialEndpointInfo(const std::string& deviceName,
                                    const uint32_t baudRate = DEFAULT_BAUD_RATE) : deviceName(deviceName),
            baudRate(baudRate)
        {
        }

        /**
         * \brief The serial device name or path.
         */
        std::optional<std::string> deviceName;

        /**
         * \brief The communication speed in bits per second.
         */
        uint32_t baudRate{DEFAULT_BAUD_RATE};

        /**
         * \brief Check if the endpoint information is valiId.
         *
         * \return True if the device name is specified, false otherwise.
         */
        [[nodiscard]] bool isValid() const override { return deviceName.has_value(); }

        /**
         * \brief Convert the endpoint information to a string representation.
         *
         * \return String representation of the endpoint with device name and baud rate.
         */
        [[nodiscard]] std::string toString() const override
        {
            if (!deviceName.has_value())
            {
                return INVALID_ENDPOINT;
            }

            return std::format("Device: {} Baud Rate: {}", *deviceName, baudRate);
        }

        /**
         * \brief Get the type of the endpoint information.
         *
         * \return The type of the endpoint information.
         */
        [[nodiscard]] EndpointInfoType type() const override { return EndpointInfoType::SerialEndpointInfo; }
    };
} // namespace mosys::networking
