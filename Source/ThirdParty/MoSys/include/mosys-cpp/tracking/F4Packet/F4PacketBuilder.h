// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "mosys-cpp/tracking/interfaces/IPacketBuilder.h"
#include "mosys-cpp/tracking/F4Packet/F4Packet.h"

namespace mosys::tracking
{
    class F4PacketBuilder final : public IPacketBuilder
    {
    public:
        F4PacketBuilder() = default;

        ~F4PacketBuilder() override = default;

        [[nodiscard]] bool build(const TrackingFrame& trackingFrame,
                                 std::vector<uint8_t>& outBuffer,
                                 std::string& outError) override;

    private:
        /**
         * \brief Creates the complete F4 packet including header, axis blocks and checksum.
         */
        void createCompletePacket(const TrackingFrame& frame, std::vector<uint8_t>& outBuffer);

        F4Packet m_packet;
    };
} // namespace mosys::tracking
