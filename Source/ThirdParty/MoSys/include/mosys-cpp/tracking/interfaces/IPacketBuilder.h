// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include <string>

#include "mosys-cpp/tracking/TrackingTypes.h"

namespace mosys::tracking
{
    /**
     * \class IPacketBuilder
     * \brief Interface for serializing tracking data into binary packets.
     *
     * This interface defines the contract for classes that convert tracking frames
     * into binary protocol formats for transmission or storage.
     */
    class IPacketBuilder
    {
    public:
        /**
         * \brief Virtual destructor.
         */
        virtual ~IPacketBuilder() = default;

        /**
         * \brief Builds tracking data into a binary buffer.
         *
         * \param trackingFrame The tracking data to be serialized
         * \param outBuffer The data buffer where the serialized data will be built
         * \param outError Error message if serialization fails
         * \return true if serialization was successful, false otherwise
         */
        [[nodiscard]] virtual bool build(const TrackingFrame& trackingFrame,
                                         std::vector<uint8_t>& outBuffer,
                                         std::string& outError) = 0;
    };
} // namespace mosys::tracking
