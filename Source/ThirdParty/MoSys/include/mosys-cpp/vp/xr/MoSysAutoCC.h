// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

namespace mosys
{
    struct IPFour
    {
        uint8_t one;
        uint8_t two;
        uint8_t three;
        uint8_t four;
    };
    struct ColourSlideshowParams
    {
        uint16_t LUTSize;
        uint16_t interval;
        float deltaTime;
        IPFour IPAddress;
        bool bBlackoutOtherNodes;
    };
} // namespace mosys
