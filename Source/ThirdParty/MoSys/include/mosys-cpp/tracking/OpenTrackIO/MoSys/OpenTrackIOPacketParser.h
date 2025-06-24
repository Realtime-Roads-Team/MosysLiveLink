// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "mosys-cpp/tracking/interfaces/IPacketParser.h"
#include "mosys-cpp/tracking/OpenTrackIO/MoSys/OpenTrackIOPacket.h"

namespace mosys::tracking
{
    struct TrackingFrame;

    /**
     * \class OpenTrackIOPacketParser
     * \brief Deserializes OpenTrackIO formatted byte data packets into TrackingFrame objects.
     *
     * This class implements the IPacketDeserializer interface to convert OpenTrackIO
     * protocol byte packets into a TrackingFrame representation.
     */
    class OpenTrackIOPacketParser final : public IPacketParser
    {
    public:
        /**
         * \brief Default constructor.
         */
        OpenTrackIOPacketParser();

        /**
         * \brief Virtual destructor.
         */
        ~OpenTrackIOPacketParser() override = default;

        // ~Begin IPacketParser interface~

        /**
         * \brief Processes raw packet data from a buffer, handling segmentation.
         *
         * \note For multi-segment packets, this function should be called multiple times
         * (once per received segment) until the last segment is processed.
         *
         * \note Assumes big-endian byte ordering.
         *
         * \param data The raw byte buffer containing the packet data.
         * \param outTrackingFrame Reference to a TrackingFrame object where the deserialized data will be stored.
         * \param outErrorMessage Will contain error details if parsing fails.
         *
         * \return True if successfully read, false otherwise.
         */
        [[nodiscard]] bool parse(std::span<const uint8_t> data,
                                 TrackingFrame& outTrackingFrame,
                                 std::string& outErrorMessage) override;

        // ~End IPacketParser interface~

        const OpenTrackIOPacket& packet() const { return m_packet; }

    private:
        /**
         * \brief Implementation of deserialize function.
         *
         * \param data The byte data buffer containing the packet data.
         * \param outErrorMessage Will contain error details if deserialization fails.
         * \return True if successfully deserialized, false otherwise.
         */
        [[nodiscard]] bool parseImpl(std::span<const uint8_t> data, std::string& outErrorMessage);

        /**
         * \brief Reads the payload byte data into the OpenTrackIO sample.
         *
         * \param outErrorMessage The error message if the payload could not be read.
         * \return true if the payload was successfully read, false otherwise.
         */
        [[nodiscard]] bool parsePayload(std::string& outErrorMessage);

        /**
         * \brief Populates a TrackingFrame with data from the deserialized packet.
         */
        void populateTrackingFrame(TrackingFrame& outFrame);

        /**
         * lastSegmentFlag (bit 0) and payloadLength (bits 1-15).
         *
         * lastSegmentFlag = 1 if this is the last or only segment of the payload.
         *                   0 if there are more segments to come.
         *
         * payloadLength = The total length of the payload in bytes.
         */
        uint16_t m_lastSegmentFlagAndPayloadLength{};

        /** Cache for storing multi-segment payloads. */
        std::vector<uint8_t> m_payloadSegmentsCache{};

        /** Cache for storing data required to compute the checksum. */
        std::vector<uint8_t> m_checksumData{};

        /** The previous sequence number to check for packet loss. */
        uint16_t m_previousSequenceNumber = 0;

        /** Underlying OpenTrackIO packet structure. */
        OpenTrackIOPacket m_packet{};
    };
} // namespace mosys::tracking
