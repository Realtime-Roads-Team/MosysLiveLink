// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "mosys-cpp/tracking/workers/TrackingWorkerBase.h"

namespace mosys::tracking
{
    /**
     * \class TrackingSenderWorker
     * \brief Worker that encodes and transmits tracking data.
     *
     * This class implements functionality to serialize TrackingFrame objects 
     * into binary data and transmit them using various transport protocols.
     *
     * \note Instances should be created exclusively through TrackingWorkerFactory,
     * never directly instantiated.
     */
    class TrackingSenderWorker final : public TrackingWorkerBase
    {
        friend class TrackingWorkerFactory;

    public:
        /**
         * \brief Virtual destructor.
         */
        ~TrackingSenderWorker() override = default;

        /**
         * \brief Serializes and transmits a tracking frame.
         *
         * Encodes the tracking frame into binary data using the configured codec
         * and sends it through the underlying transport mechanism.
         * 
         * \param trackingFrame The tracking data to be transmitted
         * \param outErrorMessage Error description if execution fails
         * \return true if execution succeeds, false otherwise
         */
        [[nodiscard]] bool execute(TrackingFrame& trackingFrame, std::string& outErrorMessage) override;

    private:
        /**
         * \brief Default constructor.
         * 
         * Private to enforce creation through factory pattern.
         */
        TrackingSenderWorker();

        std::vector<uint8_t> m_buffer{};
    };
} // mosys::tracking
