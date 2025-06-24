// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include "mosys-cpp/tracking/interfaces/IPacketParser.h"
#include "mosys-cpp/tracking/F4Packet/F4Packet.h"

namespace mosys::tracking
{
    class F4PacketParser final : public IPacketParser
    {
    public:
        F4PacketParser() = default;

        ~F4PacketParser() override = default;

        [[nodiscard]] bool parse(std::span<const uint8_t> data,
                                 TrackingFrame& outTrackingFrame,
                                 std::string& outErrorMessage) override;

    private:
        void populateTrackingFrame(TrackingFrame& outTrackingFrame) const;

        F4Packet m_packet{};
        uint16_t m_frameNumber{0};
    };
} // namespace mosys::tracking
