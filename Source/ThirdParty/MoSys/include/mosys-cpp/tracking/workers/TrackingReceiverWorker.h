// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <memory>

#include "mosys-cpp/tracking/interfaces/IReceiveStrategy.h"
#include "mosys-cpp/tracking/workers/TrackingWorkerBase.h"

namespace mosys::tracking
{
    /**
     * \brief Worker that receives and decodes tracking data from various sources.
     *
     * This class implements functionality to acquire tracking data from different
     * transport mechanisms and protocols, then decode it into TrackingFrame objects.
     *
     * \note Instances should be created exclusively through mosys::tracking::TrackingWorkerFactory,
     * never directly instantiated.
     */
    class TrackingReceiverWorker final : public TrackingWorkerBase
    {
        friend class TrackingWorkerFactory;

    public:
        /**
         * \brief Virtual destructor.
         */
        ~TrackingReceiverWorker() override = default;

        /**
         * \brief Establishes connection to the tracking data source.
         *
         * Sets up the receive strategy and performs initial protocol synchronization.
         *
         * \param outErrorMessage Error description if connection fails
         * \return true if connection succeeds, false otherwise
         */
        [[nodiscard]] bool connect(std::string& outErrorMessage) override;

        /**
         * \brief Acquires the next tracking frame from the data source.
         *
         * Receives binary data using the configured strategy and decodes it
         * into a tracking frame using the appropriate codec.
         *
         * \param outTrackingFrame Structure to populate with the received tracking data
         * \param outErrorMessage Error description if execution fails
         * \return true if execution succeeds, false otherwise
         */
        [[nodiscard]] bool execute(TrackingFrame& outTrackingFrame, std::string& outErrorMessage) override;

        /**
         * \brief Checks if the worker is in a valid operational state.
         *
         * \return true if the worker has valid transport, codec, and receive strategy, false otherwise
         */
        [[nodiscard]] bool isValid() const override
        {
            return TrackingWorkerBase::isValid() && m_receiveStrategy;
        };

    private:
        /**
         * \brief Default constructor (private).
         *
         * Private to enforce creation through TrackingWorkerFactory.
         */
        TrackingReceiverWorker() = default;

        /**
         * \brief Initializes the receiver worker with protocol and endpoint information.
         *
         * Creates appropriate transport, codec, and receive strategy based on the protocol.
         * 
         * \param protocol The tracking protocol to use
         * \param isClient Whether to operate in client mode
         * \param outErrorMessage Error description if initialization fails
         * \return true if initialization succeeds, false otherwise
         */
        bool initializeImpl(Protocol protocol,
                            bool isClient,
                            std::string& outErrorMessage) override;

        std::unique_ptr<IReceiveStrategy> m_receiveStrategy{};

        std::vector<uint8_t> m_buffer{};
    };
} // mosys::tracking
