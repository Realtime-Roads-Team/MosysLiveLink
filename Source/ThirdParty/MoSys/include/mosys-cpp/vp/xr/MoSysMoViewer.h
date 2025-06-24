// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <functional>
#include <string>


namespace mosys
{
    namespace hardware
    {
        enum class MoViewerMode : uint8_t
        {
            Camera = 0,
            Virtual,
            Alpha,
            Split,
            Keyed
        };

        // A lot of these callbacks are similar, they are separated to make the code easier to read
        using VersionCallback = std::function<void(std::string)>;
        using ModeCallback = std::function<void(MoViewerMode)>;
        using IsHeadlessCallback = std::function<void(bool)>;
        using DelayOffsetCallback = std::function<void(int)>;
        using DelaySourceCallback = std::function<void(std::string)>;
        using EnablePreviewCallback = std::function<void(bool)>;
        using EnableOutputCallback = std::function<void(bool)>;
        using InputFormatCallback = std::function<void(std::string)>;
        using OutputFormatCallback = std::function<void(std::string)>;
        using InputSourceCallback = std::function<void(std::string)>;
        using OutputSourceCallback = std::function<void(std::string)>;
        using IsRestartingCallback = std::function<void(bool)>;
        using MatteQualityCallback = std::function<void(float)>;

        // std::string is a stand-in for json
        using ResponseCallback = std::function<bool(int, std::string)>;

        class MoViewer
        {
        public:
            // At the moment, you will only ever have one MoViewer on set
            static MoViewer& instance();

            // Singleton pattern - deleted copy/move constructors and assignment operators
            MoViewer(const MoViewer&) = delete;
            MoViewer& operator=(const MoViewer&) = delete;
            MoViewer(MoViewer&&) = delete;
            MoViewer& operator=(MoViewer&&) = delete;

            struct InputSource
            {
                std::string data {};

                static InputSource toBlackMagic(int cleanVideoDeviceNumber, int fillDeviceNumber, int keyDeviceNumber,
                    const std::string& cleanVideoConnectionType = "sdi",
                    const std::string& fillConnectionType = "sdi",
                    const std::string& keyConnectionType = "sdi");
            };

            struct OutputSource
            {
                std::string data {};

                static OutputSource toBlackMagic(int outputDeviceNumber);
            };

            void initialise(const std::string& ipAddress, uint16_t port);
            std::string getUrl(const std::string& endpoint = "") const;

            void setMode(MoViewerMode mode, ResponseCallback callback = nullptr);
            void setDelayOffset(int delayOffse, ResponseCallback callback = nullptr);
            void setDelaySource(const std::string& delaySource, ResponseCallback callback = nullptr);
            void setEnablePreview(bool enablePreview, ResponseCallback callback = nullptr);
            void setEnableOutput(bool enableOutput, ResponseCallback callback = nullptr);
            void setInputFormat(const std::string& inputFormat, ResponseCallback callback = nullptr);
            void setOutputFormat(const std::string& outputFormat, ResponseCallback callback = nullptr);
            void setInputSource(const InputSource& inputSource, ResponseCallback callback = nullptr);
            void setOutputSource(const OutputSource& outputSource, ResponseCallback callback = nullptr);
            void setMatteQuality(float matteQuality, ResponseCallback callback = nullptr);
            void requestRestart(ResponseCallback callback = nullptr);
            void colorCalibrate(ResponseCallback callback = nullptr);
            void colorReset(ResponseCallback callback = nullptr);
            
            void setVersionCallback(const VersionCallback& versionCallback) { m_versionCallback = versionCallback; }
            void setModeCallback(const ModeCallback& modeCallback) { m_modeCallback = modeCallback; }
            void setIsHeadlessCallback(const IsHeadlessCallback& isHeadlessCallback) { m_isHeadlessCallback = isHeadlessCallback; }
            void setDelayOffsetCallback(const DelayOffsetCallback& delayOffsetCallback) { m_delayOffsetCallback = delayOffsetCallback; }
            void setDelaySourceCallback(const DelaySourceCallback& delaySourceCallback) { m_delaySourceCallback = delaySourceCallback; }
            void setEnablePreviewCallback(const EnablePreviewCallback& enablePreviewCallback) { m_enablePreviewCallback = enablePreviewCallback; }
            void setEnableOutputCallback(const EnableOutputCallback& enableOutputCallback) { m_enableOutputCallback = enableOutputCallback; }
            void setInputFormatCallback(const InputFormatCallback& inputFormatCallback) { m_inputFormatCallback = inputFormatCallback; }
            void setOutputFormatCallback(const OutputFormatCallback& outputFormatCallback) { m_outputFormatCallback = outputFormatCallback; }
            void setInputSourceCallback(const InputSourceCallback& inputSourceCallback) { m_inputSourceCallback = inputSourceCallback; }
            void setOutputSourceCallback(const OutputSourceCallback& outputSourceCallback) { m_outputSourceCallback = outputSourceCallback; }
            void setIsRestartingCallback(const IsRestartingCallback& isRestartingCallback) { m_isRestartingCallback = isRestartingCallback; }
            void setMatteQualityCallback(const MatteQualityCallback& matteQualityCallback) { m_matteQualityCallback = matteQualityCallback; }

            void getMode();
            void getIsHeadless();
            void getDelayOffset();
            void getDelaySource();
            void getEnablePreview();
            void getEnableOutput();
            void getInputFormat();
            void getOutputFormat();
            void getInputSource();
            void getOutputSource();
            void getMatteQuality();
            void getVersion();
            void getIsRestarting();

            static std::string moViewerModeToString(MoViewerMode mode);
            static MoViewerMode moViewerStringToMode(const std::string& modeString);
        private:
            MoViewer() = default;
            std::string m_ipAddress;
            uint16_t m_port {};

            VersionCallback m_versionCallback;
            ModeCallback m_modeCallback;
            IsHeadlessCallback m_isHeadlessCallback;
            DelayOffsetCallback m_delayOffsetCallback;
            DelaySourceCallback m_delaySourceCallback;
            EnablePreviewCallback m_enablePreviewCallback;
            EnableOutputCallback m_enableOutputCallback;
            InputFormatCallback m_inputFormatCallback;
            OutputFormatCallback m_outputFormatCallback;
            InputSourceCallback m_inputSourceCallback;
            OutputSourceCallback m_outputSourceCallback;
            IsRestartingCallback m_isRestartingCallback;
            MatteQualityCallback m_matteQualityCallback;
        };
    }
}