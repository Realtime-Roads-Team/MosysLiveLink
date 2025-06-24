// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.
/** \file UDPEndpointInfo.h
 *  \brief Defines endpoint information for UDP network connections. */

#pragma once

#include <cstdint>
#include <optional>

#include "mosys-cpp/networking/interfaces/IEndpointInfo.h"

namespace mosys::networking
{
    /**
     * \struct UDPEndpointInfo
     * \brief Endpoint information for UDP network connections.
     *
     * Contains IP address and port information required for UDP communications.
     */
    struct UDPEndpointInfo final : IEndpointInfo
    {
        /**
         * \brief Hostname for local machine.
         */
        static constexpr auto LOCAL_HOST = "localhost";

        /**
         * \brief IP address for localhost loopback.
         */
        static constexpr auto LOCAL_HOST_IP = "127.0.0.1";

        /**
         * \brief IP address representing any interface.
         */
        static constexpr auto UNSPECIFIED_IP = "0.0.0.0";

        /**
         * \brief IPv4 address of the endpoint.
         */
        std::optional<std::string> address;

        /**
         * \brief Port number of the endpoint.
         */
        std::optional<uint16_t> port{};

        /**
         * \brief Default constructor.
         */
        UDPEndpointInfo() = default;

        /**
         * \brief Constructs a UDP endpoint with specified address and port.
         *
         * \param address The IPv4 address.
         * \param port The port number.
         */
        UDPEndpointInfo(const std::string& address, uint16_t port);

        /**
         * \brief Virtual destructor.
         */
        ~UDPEndpointInfo() override = default;

        /**
         * \brief Check if the endpoint information is valid.
         *
         * \return True if both address and port are specified, false otherwise.
         */
        [[nodiscard]] bool isValid() const override { return address.has_value() && port.has_value(); }

        /**
         * \brief Convert the endpoint information to a string representation.
         *
         * \return String representation of the endpoint with address and port.
         */
        [[nodiscard]] std::string toString() const override;

        /**
         * \brief Get the type of the endpoint information.
         *
         * \return The type of the endpoint information.
         */
        [[nodiscard]] EndpointInfoType type() const override { return EndpointInfoType::UDPEndpointInfo; }
    };
} // namespace mosys::networking
