// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <string>

#include "mosys-cpp/tracking/TrackingTypes.h"

namespace mosys
{
    struct F4AxisBlock;

    struct F4Packet
    {
        unsigned char commandByte;
        unsigned char cameraID;
        unsigned char axisCount;
        unsigned char status;
        unsigned char checkSum;
        size_t size;
        F4AxisBlock* axisBlockList;

        F4Packet();

        F4Packet(F4Packet const& packet);

        bool initialise(tracking::TrackingFrame const& frame);

        bool initialise(const unsigned char* buffer, size_t bufferSize);

        /**
         * \brief Calculates the size of an F4 protocol packet based on its header.
         *
         * \param data Byte data buffer containing the packet.
         * \param size The size of the data buffer.
         * \param axisCountIdx Optional index to the axis count byte within the buffer.
         *
         * \return The calculated total packet size in bytes:
         *         payloadLength + header length, or 0 if buffer is too small.
         */
        [[nodiscard]] static size_t calculateSize(const uint8_t* data,
                                                  size_t size,
                                                  size_t axisCountIdx = 2);

        std::string getLastErrorMessage() { return m_lastErrorMessage; }

        ~F4Packet();

        F4Packet& operator=(F4Packet const& other);

        F4AxisBlock& operator[](size_t index);

        F4AxisBlock const& operator[](size_t index) const;

        void allocateAxisBlocks(unsigned char const** data);

        void destroyAxisMemory();

    private:
        unsigned char m_explicitPadding[2];
        std::string m_lastErrorMessage;
    };
} // namespace mosys
