// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <functional>

#include <vector>

namespace std
{
    class thread;
    template<class _Ty, class _Ax> class vector;
}

namespace mosys
{
    /**
        * Lens data.
        * A container for camera lens data that is sent by lens manufacturer hardware.
        * The units by default are described below unless the isEncoderValue is set.
        * Preston lens drive provides a 16 bit value
        */
    struct LensFrame
    {
        /** not defined distance */
        float Distance;
        /** not defined auxiliary */
        float AUX;
        /** lens focal length in [mm] */
        float Zoom;
        /** lens focus in [cm] */
        float Focus;
        /** lens iris in [T-stops] */
        float Iris;

        /** True if data is provided as encoder count (0 - 65536). Ignore the units indicated above */
        bool isEncoderValue = false;

        LensFrame() : Distance(0), AUX(0), Zoom(0), Focus(0), Iris(0)
        {
        }
    };

    // Preston lens control interface
    typedef std::function<void(bool)> ConnectedCallback;
    typedef std::function<void(LensFrame)> LensReceivedFrameCallback;
    typedef std::function<void(const char*)> MessageCallback;

    enum class LensControllerType {
        LCT_Preston = 0,
        LCT_Teradek
    };

    class LensControlManager
    {
    public:
        static LensControlManager& instance()
        {
            static LensControlManager INSTANCE;
            return INSTANCE;
        }
        ~LensControlManager();

        bool connectLens(LensControllerType lensType, const char* comPort, ConnectedCallback connectedCallback);
        bool disconnectLens(const char* comPort);
        // * Only Preston can have not continuous read and position sent from motor
        // * @continuousRead    - whether to ask for a continuous stream of data updates
        // * @controller        - if true ask for data from controller if false from motor
        bool requestFIZ(mosys::LensReceivedFrameCallback lensFrameCallback, const char* comPort, bool continuousRead, bool controller);
        bool stopReceivingFIZ(const char* comPort);
        bool requestControl(const char* comPort, bool iris, bool focus, bool zoom);
        // Set focus threshold in [cm]
        bool setFocusThreshold(const char* comPort, float threshold);
        bool setLensFrame(const char* comPort, LensFrame lensFrame);
        bool returnControl(const char* comPort);

        bool calibrateLens(const char* comPort);
        bool getFirmware(const char* comPort, mosys::MessageCallback lensStringCallback);
        bool isFocusCalibrated(const char* comPort, mosys::MessageCallback lensStringCallback);

    private:
        LensControlManager();
        std::vector<class LensController*> m_lenses;
        std::thread* m_connectThread;
    };

} // namespace mosys
