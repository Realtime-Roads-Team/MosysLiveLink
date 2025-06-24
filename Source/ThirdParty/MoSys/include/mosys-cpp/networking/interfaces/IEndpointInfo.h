// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <string>

namespace mosys::networking
{
    enum class EndpointInfoType : uint8_t
    {
        UDPEndpointInfo,
        TCPEndpointInfo,
        SerialEndpointInfo,
    };

    /**
     * \struct IEndpointInfo
     * \brief Interface representing network endpoint information.
     */
    struct IEndpointInfo
    {
        /**
         * \brief Constant representing an invalid endpoint.
         */
        constexpr static auto INVALID_ENDPOINT = "INVALID ENDPOINT";

        /**
         * \brief Virtual destructor.
         */
        virtual ~IEndpointInfo() = default;

        /**
         * \brief Check if the endpoint information is valid.
         *
         * \return True if the endpoint is valid, false otherwise.
         */
        [[nodiscard]] virtual bool isValid() const = 0;

        /**
         * \brief Convert the endpoint information to a string representation.
         *
         * \return String representation of the endpoint.
         */
        [[nodiscard]] virtual std::string toString() const = 0;

        /**
         * \brief Get the type of the endpoint information.
         *
         * \return The type of the endpoint information.
         */
        [[nodiscard]] virtual EndpointInfoType type() const = 0;
    };
} // namespace mosys::networking
