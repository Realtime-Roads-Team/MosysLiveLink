// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "mosys-cpp/tracking/F4Packet/F4PacketBuilder.h"
#include "mosys-cpp/tracking/F4Packet/F4PacketParser.h"
#include "mosys-cpp/tracking/interfaces/ITrackingCodec.h"

namespace mosys::tracking
{
    /**
     * \class F4TrackingCodec
     * \brief Codec implementation for the F4 tracking protocol.
     *
     * Provides serialization to and deserialization from the F4 binary protocol
     * used for tracking data.
     */
    class F4TrackingCodec final : public ITrackingCodec
    {
    public:
        /**
         * \brief Default constructor.
         */
        F4TrackingCodec() = default;

        /**
         * \brief Virtual destructor.
         */
        ~F4TrackingCodec() override = default;

        /**
         * \brief Serializes tracking data to F4 binary format.
         * 
         * \param trackingFrame The tracking data to serialize
         * \param outData Buffer to store the serialized binary data
         * \param outError Error message if serialization fails
         * \return true on success, false on error
         */
        [[nodiscard]] bool serialize(const TrackingFrame& trackingFrame,
                                     std::vector<uint8_t>& outData,
                                     std::string& outError) override
        {
            return m_serializer.build(trackingFrame, outData, outError);
        }

        /**
         * \brief Deserializes F4 binary data to tracking frame.
         * 
         * \param data The F4 binary data to parse
         * \param outTrackingFrame The resulting tracking data
         * \param outErrorMessage Error message if deserialization fails
         * \return true on success, false on error
         */
        [[nodiscard]] bool deserialize(const std::span<const uint8_t>& data,
                                       TrackingFrame& outTrackingFrame,
                                       std::string& outErrorMessage) override
        {
            return m_deserializer.parse(data, outTrackingFrame, outErrorMessage);
        }

    private:
        F4PacketBuilder m_serializer;
        F4PacketParser m_deserializer;
    };
} // namespace mosys::tracking
