// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once
#include "mosys-cpp/core/Timecode.h"

namespace mosys
{
    struct F4AxisBlock
    {
        unsigned char m_axisID;
        unsigned char m_axisStatus;
        unsigned char m_DataBits1;
        unsigned char m_DataBits2;
        unsigned char m_DataBits3;

        // Let the compiler take care of automatic copy and assignment

        unsigned char m_explicitPadding[3];

        /**
         * Populate timecode data based on a Mo-Sys F4 protocol axis block.
         *
         * @param axis F4 protocol axis block
         * @param timecode Timecode to populate
         */
        static bool toTimecode(F4AxisBlock axis, Timecode& timecode);
    };
} // namespace mosys
