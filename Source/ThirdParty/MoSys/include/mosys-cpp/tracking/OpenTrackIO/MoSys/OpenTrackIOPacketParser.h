// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once
#include "mosys-cpp/tracking/PacketParser.h"
#include "mosys-cpp/tracking/OpenTrackIO/OpenTrackIO/opentrackio-cpp/include/opentrackio-cpp/OpenTrackIOSample.h"
#include "mosys-cpp/tracking/OpenTrackIO/OpenTrackIO/opentrackio-cpp/include/opentrackio-cpp/OpenTrackIOTypes.h"

namespace mosys
{
    using namespace opentrackio;
    
    class OpenTrackIOPacketParser : public PacketParser
    {
    public:
        OpenTrackIOPacketParser() : PacketParser() {};
        ~OpenTrackIOPacketParser() override = default;

        virtual bool initialise(unsigned char *buffer, size_t size) override;
        virtual void getTrackingFrame(tracking::TrackingFrame& frame) override;
        
    private:
        static void assignFrameTransforms(tracking::TrackingFrame &frame,
                                   std::span<opentrackiotypes::Transform> transforms);
        static size_t getStatusDetail(std::string_view str);
        
        OpenTrackIOSample m_packet{};
    };
} // namespace mosys
