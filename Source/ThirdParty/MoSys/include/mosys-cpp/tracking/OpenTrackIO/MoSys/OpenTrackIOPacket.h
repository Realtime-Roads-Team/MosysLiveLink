// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "mosys-cpp/tracking/OpenTrackIO/OpenTrackIO/opentrackio-cpp/include/opentrackio-cpp/OpenTrackIOSample.h"

namespace mosys::tracking
{
    using namespace opentrackio;

    /**
     * \struct OpenTrackIOPacket
     * \brief Represents a complete OpenTrackIO network packet.
     *
     * OpenTrackIOPacket encapsulates the binary format used for transmitting OpenTrackIO data
     * over network connections. The packet consists of a standard header followed by a payload
     * containing an OpenTrackIO sample.
     *
     * The header includes:
     * - A 4-byte identifier "OTrk" (0x4F54726B).
     * - Format and sequence information.
     * - Segmentation control for large payloads.
     * - Checksum for integrity verification.
     *
     * The packet format supports different payload encodings (JSON, CBOR) and
     * includes mechanisms for packet sequencing and segmentation of large payloads
     * across multiple packets.
     *
     * \see https://www.opentrackio.org/ for more information about the OpenTrackIO specification.
     */
    struct OpenTrackIOPacket final
    {
        using ChecksumT = uint16_t;

        /** The size of the packet header in bytes. */
        static constexpr uint8_t HEADER_LENGTH_BYTES = 16;

        /** The size of the header in bytes, excluding the checksum field. */
        static constexpr uint8_t HEADER_LENGTH_EXCLUDING_CHECKSUM_BYTES = HEADER_LENGTH_BYTES - sizeof(ChecksumT);

        /** The expected identifier for OpenTrackIO packets, this would be the first 4 byes of a packet ("OTrk"). */
        static constexpr uint32_t EXPECTED_IDENTIFIER = 0x4F54726B;

        /** The maximum size of a single packet in bytes that can be transmitted across a network at a given time. */
        static constexpr uint16_t MAXIMUM_PACKET_TRANSMISSION_UNIT_BYTES = 1'500;

        /**
         * \enum Encoding
         * \brief The OpenTrackIO payload format.
         */
        enum class Encoding : uint8_t
        {
            JSON = 0x01,
            CBOR = 0x02
        };

        // ------------- UDP Header -------------

        /**
         * Static value to indicate OpenTrackIO packet, should be set to ASCII "OTrk" (0x4F54726B).
         */
        uint32_t identifier{};

        /** Reserved for future use. */
        uint8_t reserved{0};

        /** Indicates the payload format. */
        Encoding encoding{};

        /**
         * The packet's unique sequence number (0x01 to max(UINT16)).
         */
        uint16_t sequenceNumber{};

        /**
         * The byte offset of this payload segment when the overall payload length necessitates segmentation.
         * Must be set to 0x00 for single-segment payloads.
         */
        int32_t segmentOffset{};

        /** Indicates if this is the last segment of the payload. */
        bool lastSegment{true};

        /** The length of the payload in bytes. */
        uint16_t payloadLength{};

        /**
         *  A 16-bit checksum computed using the Fletcher-16 algorithm,
         *  covering the header (excluding checksum bytes) and payload.
         */
        ChecksumT checksum{}; // Fletcher-16 checksum.

        // ------------- UDP Payload -------------

        /** The actual OpenTrackIO sample data (payload). */
        OpenTrackIOSample sample{};

        // ------------- Helper Functions -------------

        /**
         * \brief The current size of the packet. This does NOT include a total of all segments.
         *
         * \note Size is only properly calculated after the packet header has been read.
         *
         * \return The size of the packet in bytes.
         */
        [[nodiscard]] size_t size() const { return HEADER_LENGTH_BYTES + payloadLength; }

        /**
         * \brief Calculates the total size of an OpenTrackIO packet from the header.
         *
         * \note Assumes big-endian byte ordering.
         *
         * \param data The raw byte buffer containing at least the packet header.
         * \return The total size of the packet in bytes, or 0 if the buffer is invalid.
         */
        [[nodiscard]] static size_t calculateSize(std::span<const uint8_t> data);

        /**
         * \brief Calculate the checksum for a given data buffer using the Fletcher-16 algorithm.
         *
         * \note This implementation of the Fletcher-16 algorithm uses the modulo 255 operation as opposed
         *       to the variant that uses the modulo 256.
         *
         * \note This is an optimized version of Fletcher-16 that processes data in blocks to reduce
         *       the number of modulo operations.
         *
         * \see https://en.wikipedia.org/wiki/Fletcher%27s_checksum for details on the algorithm.
         *
         * \param data The data to calculate the checksum for.
         * \return The computed checksum.
         */
        [[nodiscard]] static ChecksumT calculateChecksum(std::span<const uint8_t> data);
    };
} // namespace mosys::tracking
