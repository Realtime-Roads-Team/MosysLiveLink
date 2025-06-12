// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once
#include <cassert>
#include <memory>
#include <string>
#include "mosys-cpp/tracking/F4Packet/F4.h"
#include "mosys-cpp/tracking/F4Packet/F4AxisBlock.h"
#include "mosys-cpp/tracking/TrackingTypes.h"

namespace mosys
{
    struct F4Packet
    {
        unsigned char commandByte;
        unsigned char cameraID;
        unsigned char axisCount;
        unsigned char status;
        unsigned char checkSum;
        size_t size;
        F4AxisBlock * axisBlockList;

        F4Packet();
        F4Packet(F4Packet const & packet);
        bool initialise(tracking::TrackingFrame const & frame);
        bool initialise(const unsigned char * buffer, size_t bufferSize);
        std::string getLastErrorMessage() { return m_lastErrorMessage; }
        ~F4Packet();
        F4Packet & operator=(F4Packet const & other);
        F4AxisBlock & operator[](size_t index);
        F4AxisBlock const & operator[](size_t index) const;

        void allocateAxisBlocks(unsigned char const ** data);
        void destroyAxisMemory();

    private:
        unsigned char m_explicitPadding[2];
        std::string m_lastErrorMessage;

    };
} // namespace mosys