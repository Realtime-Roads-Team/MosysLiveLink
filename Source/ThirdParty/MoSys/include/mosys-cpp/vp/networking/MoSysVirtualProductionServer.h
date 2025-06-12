// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <functional>
#include <string>
#include "core/MoSysTransform.h"
#include "vp/xr/MoSysAutoCC.h"
#include "vp/xr/MoSysLEDColourCorrection.h"
#include <cstdint>
#define DEFAULT_SERVER_PORT 10001


namespace mosys
{
    class Timecode;

    struct MoSysEightBytes 
    {
        uint8_t byte1;
        uint8_t byte2;
        uint8_t byte3;
        uint8_t byte4;
        uint8_t byte5;
        uint8_t byte6;
        uint8_t byte7;
        uint8_t byte8;

        static int size()
        {
            return 8;
        }
    };


    struct MoSysVirtualProductionServerDelegate 
    {
        virtual void play() = 0;
        virtual void stop() = 0;
        virtual void startRecord() = 0;
        virtual void stopRecord() = 0;
        virtual void selectCamera(int cameraIndex) = 0;
        virtual void selectCameraXR(int cameraIndex) = 0;
        virtual void selectTestPatternXR(int testPatternIndex, IPFour IPAddress) = 0;
        virtual void selectLevel(int levelIndex) = 0;
        virtual void triggerAnimation(char key) = 0;
        virtual void triggerCustom(uint8_t value) = 0;
        virtual void triggerCustomEight(MoSysEightBytes bytes) = 0;
        virtual void triggerCustomTransform(MoSysTransformf transform) = 0;
        virtual void triggerCustomInt(int value) = 0;
        virtual void triggerCustomFloat(float value) = 0;
        virtual void LEDColourCorrection(MoSysLEDColourCorrection ColourCorrection) = 0;
        virtual void clearLEDColourCorrection(int cameraIndexToClear) = 0;
        virtual void startColourSlideshow(uint16_t LUTSize, uint16_t interval, float deltaTime, IPFour IPAddress, bool bBlackoutOtherNodes) = 0;
        virtual void hideARObjects(bool bHide) = 0;
        virtual mosys::Timecode getTimecode() = 0;
        virtual bool getBroadcastIpsCSV(std::string& csv) = 0;
    };


    typedef std::function<void(unsigned char*, size_t, const char*)> MoSysVirtualProductionServerReceivedCallback;


    class MoSysVirtualProductionServer
    {
        public:
            static MoSysVirtualProductionServer& instance();
            ~MoSysVirtualProductionServer();

            bool start(MoSysVirtualProductionServerDelegate* delegate, uint16_t listenPort = DEFAULT_SERVER_PORT, uint16_t timecodeResponsePort = DEFAULT_SERVER_PORT);
            void stop();
            bool isRunning();

            uint16_t getListenPort() const;

            bool broadcastPlay();
            bool broadcastStop();
            bool broadcastStartRecord();
            bool broadcastStopRecord();
            bool broadcastSelectCamera(int cameraIndex);
            bool broadcastTriggerAnimation(char key);
            bool broadcastTriggerCustom(uint8_t value);
            bool broadcastTriggerCustomEight(uint64_t value);
            bool broadcastTriggerCustomTransform(MoSysTransformf value);
            bool broadcastTriggerCustomInt(int value);
            bool broadcastTriggerCustomFloat(float value);
            bool broadcastSelectLevel(int levelIndex);
            bool broadcastSelectCameraXR(int cameraIndex, int extraDelayMs);
            bool broadcastSelectTestPatternXR(int testPatternIndex, IPFour IPAddress);
            bool broadcastLEDColourCorrection(MoSysLEDColourCorrection ColourCorrection);
            bool broadcastClearLEDColourCorrection(int cameraIndexToClear);
            bool broadcastStartColourSlideshow(uint16_t LUTSize, uint16_t interval, float deltaTime, IPFour IPAddress, bool bBlackoutOtherNodes);
            bool broadcastHideARObjects(bool bHide);

            MoSysVirtualProductionServer(MoSysVirtualProductionServer const&) = delete;
            MoSysVirtualProductionServer(MoSysVirtualProductionServer&&) = delete;
            MoSysVirtualProductionServer& operator=(MoSysVirtualProductionServer const&) = delete;
            MoSysVirtualProductionServer& operator=(MoSysVirtualProductionServer&&) = delete;

        private:
            MoSysVirtualProductionServer();
            class MultiEngine* m_multiEngine;
    };
}
