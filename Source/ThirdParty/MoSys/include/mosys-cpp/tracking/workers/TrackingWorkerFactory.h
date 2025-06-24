// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <concepts>
#include <string>
#include <memory>

#include "mosys-cpp/networking/transports/UDPTransport.h"
#include "mosys-cpp/networking/transports/SerialTransport.h"
#include "mosys-cpp/tracking/workers/TrackingWorkerBase.h"
#include "mosys-cpp/tracking/TrackingTypes.h"

namespace mosys::tracking
{
    class TrackingReceiverWorker;

    /**
     * \class TrackingWorkerFactory
     * \brief Factory class for creating tracking workers.
     *
     * This factory provides a centralized way to construct and initialize different types
     * of tracking workers. All tracking workers should be created exclusively through
     * this factory to ensure proper initialization.
     */
    class TrackingWorkerFactory
    {
    public:
        /**
         * \brief Creates and initializes a tracking worker of the specified type.
         *
         * \tparam TTrackingWorker The type of tracking worker to create, must derive from TrackingWorkerBase
         * \tparam TrackingProtocol The tracking protocol to be used by the worker.
         *
         * \param endpointInfo Information about the transport mechanism endpoint to connect to
         * \param outErrorMessage Error description if creation fails
         * \return A unique pointer to the created worker, or nullptr if creation fails
         * 
         * \note Workers should only be created through this factory method, never directly instantiated.
         */
        template<std::derived_from<TrackingWorkerBase> TTrackingWorker,
                 Protocol TrackingProtocol = Protocol::OpenTrackIO,
                 std::derived_from<networking::IEndpointInfo> TEndpointInfo>
        requires std::derived_from<TEndpointInfo, networking::IEndpointInfo>
        [[nodiscard]] static constexpr std::unique_ptr<TTrackingWorker> create(const TEndpointInfo& endpointInfo,
                                                                               std::string& outErrorMessage)
        {
            constexpr bool isClient = std::is_same_v<TTrackingWorker, TrackingReceiverWorker>;
            auto worker = std::unique_ptr<TTrackingWorker>(new TTrackingWorker);

            if constexpr (std::is_same_v<TEndpointInfo, networking::UDPEndpointInfo>)
            {
                auto transport = std::make_unique<networking::UDPTransport>(endpointInfo);
                if (!transport->initialize(isClient, outErrorMessage))
                {
                    return nullptr;
                }

                if (!worker->template initialize<TrackingProtocol>(std::move(transport), isClient, outErrorMessage))
                {
                    return nullptr;
                }
            }
            else if constexpr (std::is_same_v<TEndpointInfo, networking::SerialEndpointInfo>)
            {
                auto transport = std::make_unique<networking::SerialTransport>(endpointInfo);
                if (!transport->initialize(isClient, outErrorMessage))
                {
                    return nullptr;
                }

                if (!worker->template initialize<TrackingProtocol>(std::move(transport), isClient, outErrorMessage))
                {
                    return nullptr;
                }
            }
            else
            {
                static_assert(TStaticFalse<TEndpointInfo>,
                              "No supported transport for the given endpoint type");

                return nullptr;
            }

            return worker;
        }

    private:
        /**
         * \brief Helper template to assert false at compile time.
         */
        template<typename T>
        static constexpr bool TStaticFalse = false;
    };
} // mosys::tracking
