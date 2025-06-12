// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include "mosys-cpp/tracking/TrackingTypes.h"

#include <string>

namespace mosys
{
    class PacketParser
    {
    public:
        PacketParser()
            : m_initialised(false)
            , m_lastErrorMessage()
            , m_frameNumber(0) {}

        virtual ~PacketParser() {}

        virtual bool initialise(unsigned char *buffer, size_t size) = 0;
        virtual void getTrackingFrame(tracking::TrackingFrame& frame) = 0;
        std::string getLastErrorMessage() { return m_lastErrorMessage; }

    protected:
        bool m_initialised;
        std::string m_lastErrorMessage;
        unsigned short m_frameNumber;
    };

} // namespace mosys
