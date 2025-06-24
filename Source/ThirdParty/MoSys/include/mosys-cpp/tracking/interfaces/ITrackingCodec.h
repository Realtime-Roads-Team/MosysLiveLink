// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "mosys-cpp/tracking/TrackingTypes.h"

#include <span>

namespace mosys::tracking
{
    class ITrackingCodec
    {
    public:
        virtual ~ITrackingCodec() = default;

        /**
         * \brief Serializes a tracking frame into a binary packet.
         *
         * \param trackingFrame The tracking frame data to serialize.
         * \param outData Buffer that will receive the serialized packet data.
         * \param outError String that will contain error information if serialization fails, empty otherwise.
         *
         * \return true if serialization succeeded, false if an error occurred.
         */
        [[nodiscard]] virtual bool serialize(const TrackingFrame& trackingFrame,
                                             std::vector<uint8_t>& outData,
                                             std::string& outError) = 0;

        /**
         * \brief Deserializes binary data into a TrackingFrame.
         *
         * \param data The binary data to deserialize.
         * \param outTrackingFrame Reference to a TrackingFrame object where the deserialized data will be stored.
         * \param outErrorMessage Reference to a string that will contain error details if deserialization fails.
         * \return true if deserialization was successful, false otherwise.
         */
        [[nodiscard]] virtual bool deserialize(const std::span<const uint8_t>& data,
                                               TrackingFrame& outTrackingFrame,
                                               std::string& outErrorMessage) = 0;
    };
} // namespace mosys::tracking
