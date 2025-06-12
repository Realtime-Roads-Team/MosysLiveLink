// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include <cstddef>
#include <array>
#include <cstring>

#define MAX_NUM_RENDER_NODES 3
#define MAX_SIZE_FILE_NAME 40

namespace mosys
{
    /* This struct is used to store a 4D point of type T. */
    template <typename T> struct MoSys4DPoint
    {
        T x, y, z, w;

        MoSys4DPoint()
        {
            x = 0;
            y = 0;
            z = 0;
            w = 1;
        }

        MoSys4DPoint(T xIn, T yIn, T zIn, T wIn)
        {
            x = xIn;
            y = yIn;
            z = zIn;
            w = wIn;
        }

        MoSys4DPoint(const MoSys4DPoint &other)
        {
            x = other.x;
            y = other.y;
            z = other.z;
            w = other.w;
        }

        static size_t size()
        {
            return sizeof(T) * 4;
        }
    };

    typedef MoSys4DPoint<float> MoSysVector4f;
    typedef std::array<MoSysVector4f, MAX_NUM_RENDER_NODES> MoSysColourCorrectionArray;

    /*This struct used to store the colour correction settings for the LED wall. */
    struct MoSysLEDColourCorrection
    {
        MoSysColourCorrectionArray saturation;
        MoSysColourCorrectionArray contrast;
        MoSysColourCorrectionArray gamma;
        MoSysColourCorrectionArray gain;
        MoSysColourCorrectionArray offset;
        std::array<float, MAX_NUM_RENDER_NODES> exposure;
        std::array<bool, MAX_NUM_RENDER_NODES> saturationOverride;
        std::array<bool, MAX_NUM_RENDER_NODES> contrastOverride;
        std::array<bool, MAX_NUM_RENDER_NODES> gammaOverride;
        std::array<bool, MAX_NUM_RENDER_NODES> gainOverride;
        std::array<bool, MAX_NUM_RENDER_NODES> offsetOverride;
        std::array<bool, MAX_NUM_RENDER_NODES> exposureOverride;
        char saveGameSlotName[MAX_SIZE_FILE_NAME];

        MoSysLEDColourCorrection()
        {
            MoSysVector4f Ones = {1.0f, 1.0f, 1.0f, 1.0f};
            MoSysVector4f Zeroes = {0.0f, 0.0f, 0.0f, 0.0f};
            saturation.fill(Ones);
            contrast.fill(Ones);
            gamma.fill(Ones);
            gain.fill(Ones);
            offset.fill(Zeroes);
            exposure.fill(1.0f);
            saturationOverride.fill(false);
            contrastOverride.fill(false);
            gammaOverride.fill(false);
            gainOverride.fill(false);
            offsetOverride.fill(false);
            exposureOverride.fill(false);

            saveGameSlotName[0] = '\0';
        }

        MoSysLEDColourCorrection(const MoSysLEDColourCorrection &other)
        {
            saturation = other.saturation;
            contrast = other.contrast;
            gamma = other.gamma;
            gain = other.gain;
            offset = other.offset;
            exposure = other.exposure;
            saturationOverride = other.saturationOverride;
            contrastOverride = other.contrastOverride;
            gammaOverride = other.gammaOverride;
            gainOverride = other.gainOverride;
            offsetOverride = other.offsetOverride;
            exposureOverride = other.exposureOverride;
            strcpy_s(saveGameSlotName, strlen(other.saveGameSlotName) + 1, other.saveGameSlotName); // +1 for null terminator
        };

        // this constructor sets all overrides to true
        MoSysLEDColourCorrection(const MoSysColourCorrectionArray& saturationIn, const MoSysColourCorrectionArray& contrastIn, const MoSysColourCorrectionArray& gammaIn, const MoSysColourCorrectionArray& gainIn, const MoSysColourCorrectionArray& offsetIn, const std::array<float, MAX_NUM_RENDER_NODES>& exposureIn, const char* saveGameFileNameIn)
        {
            saturation = saturationIn;
            contrast = contrastIn;
            gamma = gammaIn;
            gain = gainIn;
            offset = offsetIn;
            exposure = exposureIn;

            saturationOverride.fill(true);
            contrastOverride.fill(true);
            gammaOverride.fill(true);
            gainOverride.fill(true);
            offsetOverride.fill(true);
            exposureOverride.fill(true);

            if (strlen(saveGameFileNameIn) <= MAX_SIZE_FILE_NAME)
            {
                strcpy_s(saveGameSlotName, strlen(saveGameFileNameIn) + 1, saveGameFileNameIn); // +1 for null terminator
            }
            else
            {
                saveGameSlotName[0] = '\0';
            }
        };
    };
} // namespace mosys
