// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once
#include <stdint.h>
#include "mosys-cpp/tracking/F4Packet/F4.h"
#include "mosys-cpp/tracking/F4Packet/F4AxisBlock.h"

namespace mosys
{
    namespace helper
    {
        /// \todo rename?
        namespace f4
        {
            #define BYTE_OFFSET(axisBlock, offset)\
                (unsigned char*)(&axisBlock) + offset

            /// \todo this should be 1 for RAW encoded axes but then the tests will fail..As 1000 it limits the values
            const unsigned int DEFAULT_FACTOR = 1000;

            const unsigned int ANGLE_FACTOR = 1000;
            const unsigned int LINEAR_FACTOR = 1000;

            inline void twoBytesToValue(unsigned char* bytes, uint16_t& value)
            {
                value = (bytes[0] << 8) & 0xFF;
                value = bytes[1] & 0xFF;
            }

            inline void valueToTwoBytes(unsigned char* bytes, uint16_t value)
            {
                bytes[0] = (value >> 8) & 0xFF;
                bytes[1] = value & 0xFF;
            }

            inline void valueToLowerAxisBlock(F4AxisBlock & axisBlock, uint16_t value)
            {
                valueToTwoBytes((unsigned char*)(&axisBlock), value);
            }

            inline void valueToUpperAxisBlock(F4AxisBlock & axisBlock, uint16_t value)
            {
                valueToTwoBytes(BYTE_OFFSET(axisBlock, 3), value);
            }

            inline void lowerAxisBlockToValue(const F4AxisBlock& axisBlock, uint16_t& value)
            {
                twoBytesToValue((unsigned char*)(&axisBlock), value);
            }

            inline void upperAxisBlockToBytes(const F4AxisBlock& axisBlock, uint16_t& value)
            {
                twoBytesToValue(BYTE_OFFSET(axisBlock, 3), value);
            }

            inline int threeBytesToInt(unsigned char firstByte, unsigned char secondByte, unsigned char thirdByte)
            {
                // Swap endianness, filling first 3 bytes.
                // WARNING: Assumes a little endian platform.
                int paddedFirstByte = static_cast<int>(firstByte) << 16;
                int paddedSecondByte = static_cast<int>(secondByte) << 8;
                int paddedThirdByte = static_cast<int>(thirdByte);
                return paddedFirstByte | paddedSecondByte | paddedThirdByte;
            }

            inline int threeBytesToSignedInt(unsigned char firstByte, unsigned char secondByte, unsigned char thirdByte)
            {
                return (threeBytesToInt(firstByte, secondByte, thirdByte) << 8) / 256;
            }

            inline float fourBytesToFloat(unsigned char firstByte, unsigned char secondByte, unsigned char thirdByte, unsigned char fourthByte)
            {
                // Swap endianness
                // WARNING: Assumes a little endian platform.
                uint32_t paddedFirstByte = static_cast<uint32_t>(firstByte) << 24;
                uint32_t paddedSecondByte = static_cast<uint32_t>(secondByte) << 16;
                uint32_t paddedThirdByte = static_cast<uint32_t>(thirdByte) << 8;
                uint32_t paddedFourthByte = static_cast<uint32_t>(fourthByte);
                uint32_t uintVal = paddedFirstByte | paddedSecondByte | paddedThirdByte | paddedFourthByte;

                // This type punning (https://en.wikipedia.org/wiki/Type_punning) 
                // It is required to do a byte-wise conversion from integer to float.
                /// \todo Make strict-aliasing safe.
                /// \todo Wrap into a template library
                float* floatPtr = (float*)&uintVal;
                return *floatPtr;
            }

            inline void axisBlockToUint32(const F4AxisBlock &  axisBlock, uint32_t& value)
            {
                // Swap endianness
                // WARNING: Assumes a little endian platform.
                value = axisBlock.m_axisStatus << 24 | axisBlock.m_DataBits1 << 16 | axisBlock.m_DataBits2 << 8 | axisBlock.m_DataBits3;
            }

            inline void axisBlockToInt24(const F4AxisBlock &  axisBlock, int32_t& value)
            {
                // Swap endianness
                // WARNING: Assumes a little endian platform.
                value = axisBlock.m_DataBits1 << 16 | axisBlock.m_DataBits2 << 8 | axisBlock.m_DataBits3;

                if (axisBlock.m_DataBits1 & 0x80)
                {
                    value |= 0xFF000000; // Set the upper 8 bits to 1 for negative numbers
                }
            }

            inline void uint32ToAxisBlock(F4AxisBlock & axisBlock, uint32_t value)
            {
                unsigned char *c = (unsigned char*)&value;

                // Swap endianness, extracting first 4 bytes.
                // WARNING: Assumes a little endian platform.
                axisBlock.m_axisStatus = c[3];
                axisBlock.m_DataBits1 = c[2];
                axisBlock.m_DataBits2 = c[1];
                axisBlock.m_DataBits3 = c[0];
            }

            inline void floatToFourBytes(unsigned char * bytes, float value)
            {
                unsigned char *c = (unsigned char*)&value;

                // Swap endianness, extracting first 4 bytes.
                // WARNING: Assumes a little endian platform.
                bytes[0] = c[3];
                bytes[1] = c[2];
                bytes[2] = c[1];
                bytes[3] = c[0];
            }

            inline void floatToThreeBytes(unsigned char * bytes, float value)
            {
                unsigned int val = static_cast<unsigned int>(value);
                unsigned char *c = (unsigned char*)&val;

                // Swap endianness, extracting first 3 bytes.
                // WARNING: Assumes a little endian platform.
                bytes[0] = c[2];
                bytes[1] = c[1];
                bytes[2] = c[0];
            }

            /**
                Checksum algorithm:

                Total byte - 64 here

                for all bytes in packetData
                    subtract byte from Total

                Total should then be equal to
                the last byte in the packet
            */
            inline unsigned char ComputeF4CheckSum(unsigned char const * packetData, size_t packetSize)
            {
                unsigned char Total = 0x40;    // 01000000
                for (size_t i = 0; i < packetSize - 1; ++i)
                {
                    Total -= packetData[i];
                }
                return Total;
            }

            inline long GetF4OffsetInData(unsigned char *data, size_t size)
            {
                for (size_t i = 0; i < size; i++)
                {
                    if (data[i] == F4_COMMAND_BYTE)
                    {
                        return (long)i;
                    }
                }
                return -1;
            }

            inline unsigned int GetF4PacketSizeInHeader(unsigned char *data, size_t size)
            {
                // Header should be 4 bytes long
                if (size < 4)
                {
                    return 0;
                }
                if (data[0] != F4_COMMAND_BYTE)
                {
                    return 0;
                }
                return ((unsigned int)data[2] * 5) + 5;
            }
            /**
            * Will send 1 byte UDP to the timecode server located at address:port. Response is put into timecode
            * unless there is an error in which case the function returns false and the error message contains
            * more info.
            *
            * \param buffer Buffer to store returned data
            * \param size How many bytes to be retrieved from destination
            * \param address The IP address of the destination
            * \param port The port of the destination
            * \param timeOutMs The max time to wait for a response
            * \param errorMessage If unsuccessful, this contains more information
            * \return True on success
            */
            bool RequestData(
                unsigned char* buffer,
                size_t size,
                const char* address,
                const char* port,
                int timeOutMs,
                std::string& outErrorMessage);
        } // namespace f4
    }  // namespace helper
} // namespace mosys