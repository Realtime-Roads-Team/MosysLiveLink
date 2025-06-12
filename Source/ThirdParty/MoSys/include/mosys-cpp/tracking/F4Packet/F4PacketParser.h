// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include "mosys-cpp/tracking/PacketParser.h"
#include "mosys-cpp/tracking/F4Packet/F4Packet.h"
#include "mosys-cpp/tracking/F4Packet/F4Helper.h"

#include <string>

namespace mosys
{
    class F4PacketParser : public PacketParser
    {
    public:
        F4PacketParser() : PacketParser() {}
        ~F4PacketParser() {}
        bool initialise(unsigned char *data, size_t size) override;
        void getTrackingFrame(tracking::TrackingFrame& frame)  override;

    private:
        void axisBlockToAngleLinearRaw(const F4AxisBlock& axisBlock, float& value, unsigned int factor = helper::f4::DEFAULT_FACTOR);
        void axisBlockToLensType(const F4AxisBlock& axisBlock, uint16_t& value);
        void axisBlockToLensParam(const F4AxisBlock& axisBlock, float& value);

        F4Packet m_packet;
    };

} // namespace mosys
