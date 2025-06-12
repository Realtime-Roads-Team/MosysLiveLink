// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once
#include "mosys-cpp/tracking/PacketBuilder.h"
#include "mosys-cpp/tracking/OpenTrackIO/OpenTrackIO/opentrackio-cpp/include/opentrackio-cpp/OpenTrackIOSample.h"
#include "mosys-cpp/external/boost/boost/rational.hpp"

namespace mosys
{
    using namespace opentrackio;
    
    class OpenTrackIOPacketBuilder : public PacketBuilder 
    {
    public:
        OpenTrackIOPacketBuilder() : PacketBuilder(Type::OpenTrackIO) {};
        ~OpenTrackIOPacketBuilder() = default;
        
        bool initialise(const tracking::TrackingFrame& frame)  override;
        void getBuffer(unsigned char* buffer, size_t bufferSize)  override;
        size_t getBufferSize() override;

    private:
        static boost::rational<int64_t> float_to_rational(float value, uint32_t precision = 1000000);
        bool initialiseSampleFromFrame(const tracking::TrackingFrame& frame);
        static std::string getStatusDetailString(tracking::TrackingFrame const& frame);
        
        OpenTrackIOSample m_sample{};
        tracking::TrackingFrame m_frame;
        std::vector<uint8_t> m_cbor{};
    };
} // namespace mosys
