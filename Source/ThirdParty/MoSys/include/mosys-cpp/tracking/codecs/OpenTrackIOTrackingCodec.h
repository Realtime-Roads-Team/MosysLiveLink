// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "mosys-cpp/tracking/interfaces/ITrackingCodec.h"
#include "mosys-cpp/tracking/OpenTrackIO/MoSys/OpenTrackIOPacketBuilder.h"
#include "mosys-cpp/tracking/OpenTrackIO/MoSys/OpenTrackIOPacketParser.h"

namespace mosys::tracking
{
    /**
     * \class OpenTrackIOTrackingCodec
     * \brief Codec implementation for the OpenTrackIO tracking data format.
     *
     * Provides serialization to and deserialization from the OpenTrackIO 
     * binary protocol for camera tracking data.
     */
    class OpenTrackIOTrackingCodec final : public ITrackingCodec
    {
    public:
        /**
         * \brief Default constructor.
         */
        OpenTrackIOTrackingCodec() = default;

        /**
         * \brief Virtual destructor.
         */
        ~OpenTrackIOTrackingCodec() override = default;

        /**
         * \brief Serializes tracking data to OpenTrackIO binary format.
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
         * \brief Deserializes OpenTrackIO binary data to tracking frame.
         * 
         * \param data The OpenTrackIO binary data to parse
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
        OpenTrackIOPacketBuilder m_serializer;
        OpenTrackIOPacketParser m_deserializer;
    };
} // namespace mosys::tracking
