// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <cassert>
#include <memory>
#include <vector>

#include "mosys-cpp/networking/interfaces/ITransport.h"

namespace mosys::tracking
{
    /**
     * \class IReceiveStrategy
     * \brief Interface for protocol-specific data reception strategies.
     *
     * Defines the contract for classes that handle protocol-specific reception
     * of tracking data from various transport mechanisms.
     */
    class IReceiveStrategy
    {
    public:
        IReceiveStrategy() = delete;

        /**
         * \brief Constructor that takes a transport implementation.
         *
         * \param transport Reference to the transport mechanism used to receive data.
         *                  A valid pointer is expected, lifetime is managed by the caller.
         */
        explicit IReceiveStrategy(std::unique_ptr<networking::ITransport>& transport) : m_transport(transport)
        {
            assert(m_transport != nullptr && "Transport must be valid.");
        }

        /**
         * \brief Virtual destructor.
         */
        virtual ~IReceiveStrategy() = default;

        /**
         * \brief Performs initial setup required for the receiving strategy.
         * 
         * \param outData Buffer to store any initial data received during setup
         * \param outErrorMessage Error description if setup fails
         * \return true if setup succeeds, false otherwise
         */
        [[nodiscard]] virtual bool setup(std::vector<uint8_t>& outData,
                                         std::string& outErrorMessage) = 0;

        /**
         * \brief Receives protocol-specific data from the transport.
         * 
         * \param outData Buffer to store received binary data
         * \param outErrorMessage Error description if reception fails
         * \return true if data reception succeeds, false otherwise
         */
        [[nodiscard]] virtual bool receive(std::vector<uint8_t>& outData,
                                           std::string& outErrorMessage) = 0;

    protected:
        /**
         * \brief Reference to the underlying transport mechanism.
         *        Ownership is not managed here, but the transport must remain valid.
         */
        std::unique_ptr<networking::ITransport>& m_transport;
    };
} // namespace mosys::tracking
