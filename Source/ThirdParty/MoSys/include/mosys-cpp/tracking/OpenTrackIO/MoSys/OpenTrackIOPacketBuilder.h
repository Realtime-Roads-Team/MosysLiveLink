// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "mosys-cpp/tracking/OpenTrackIO/MoSys/OpenTrackIOPacket.h"
#include "mosys-cpp/tracking/interfaces/IPacketBuilder.h"

namespace mosys::tracking
{
    /**
     * \class OpenTrackIOPacketBuilder
     * \brief Serializes tracking data into OpenTrackIO packet format
     *
     * This class converts tracking frames into OpenTrackIO compatible binary packets
     * for network transmission.
     */
    class OpenTrackIOPacketBuilder final : public IPacketBuilder
    {
    public:
        /**
         * \brief Constructs an OpenTrackIO packet serializer.
         */
        OpenTrackIOPacketBuilder();

        /**
         * \brief Default destructor.
         */
        ~OpenTrackIOPacketBuilder() override = default;

        // ~Begin IPacketBuilder interface~

        [[nodiscard]] bool build(const TrackingFrame& trackingFrame,
                                 std::vector<uint8_t>& outBuffer,
                                 std::string& outError) override;

        // ~End IPacketBuilder interface~
    private:
        /**
         * \brief Converts tracking frame data into OpenTrackIO sample format
         */
        void serializeSampleFromFrame(const TrackingFrame& frame);

        /**
         * \brief Assembles the complete packet with header, checksum, and payload
         */
        void createCompletePacket();

        /**
         * \brief Creates lens distortion data structure if needed
         */
        void createDistortionIfRequired();

        /** \brief Buffer for CBOR-encoded payload. */
        std::vector<uint8_t> m_payloadCbor{};

        /** \brief Buffer for calculating checksum. */
        std::vector<uint8_t> m_checksumCbor{};

        /** \brief Buffer for complete packet data. */
        std::vector<uint8_t> m_completePacketCbor{};

        /** \brief Packet structure being serialized. */
        OpenTrackIOPacket m_packet{};

        /** \brief Sequence number counter for packets. */
        uint16_t m_sequenceNumber{1};
    };
} // namespace mosys::tracking
