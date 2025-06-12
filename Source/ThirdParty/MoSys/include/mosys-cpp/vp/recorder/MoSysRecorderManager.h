// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <functional>
#include <string>
#include <vector>
#include "core/Timecode.h"
#include "MoSysRecorder.h"

#include <functional>
#include <mutex>
#include <condition_variable>


namespace std
{
    class thread;
}

namespace mosys
{
    namespace hardware
    {
        class Recorder;
        enum RecorderState;
        struct RecorderSettings;
    }
}

namespace mosys
{
    namespace hardware
    {
        enum RecorderType
        {
            Hyperdeck = 0,
            KiPro = 1,
            Dummy // for testing purposes for now
        };

        class MoSysRecorderManager
        {
            public:
                static MoSysRecorderManager& instance();
                ~MoSysRecorderManager();

                typedef std::function<bool(bool, Timecode)> TimecodeCallback;
                typedef std::function<bool(bool, const char*)> CommandCallback;

                // Single recorder operations
                bool connectRecorder(RecorderType type, const std::string& ipAddress, CommandCallback commandCallback);
                bool hitRecordRecorder(const std::string& ipAddress, const std::string& filename, CommandCallback commandCallback);
                bool playRecorder(const std::string& ipAddress, CommandCallback commandCallback);
                bool stopRecorder(const std::string& ipAddress, CommandCallback commandCallback);
                bool disconnectRecorder(const std::string& ipAddress, std::string& errorMessage); // this function blocks
                bool requestTimecodeRecorder(const std::string& ipAddress, TimecodeCallback timecodeCallback);
                bool setNotificationsOnRecorder(const std::string& ipAddress, const bool enable, CommandCallback notificationCallback);

                RecorderState getRecorderState(const std::string& ipAddress);
                RecorderSettings getRecorderSettings(const std::string& ipAddress);

                MoSysRecorderManager(MoSysRecorderManager const&) = delete;
                MoSysRecorderManager(MoSysRecorderManager&&) = delete;
                MoSysRecorderManager& operator=(MoSysRecorderManager const&) = delete;
                MoSysRecorderManager& operator=(MoSysRecorderManager&&) = delete;
     
            private:
                MoSysRecorderManager();
                bool callbackConnected(CommandCallback callback, bool success, const char* message, Recorder* recorder);
                bool callbackRecorder(CommandCallback callback, bool success, const char* message, Recorder* recorder);
                bool callbackTimecode(TimecodeCallback callback, bool success, Timecode timecode, Recorder* recorder);
                bool callbackNotification(CommandCallback callback, bool success, const char* message, Recorder* recorder);
                bool findRecorderWithAddress(const std::string& ipAddress, int& index);

                std::vector<Recorder*>m_recorders;
                std::string m_lastErrorMessage;
                std::mutex m_mutex;
                std::condition_variable m_cv;
        };

    } // namespace hardware
} // namespace mosys
