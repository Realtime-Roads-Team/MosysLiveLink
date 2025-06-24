// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <thread>
#include <mutex>
#include <condition_variable>
#include <functional>
#include <string>

#include "mosys-cpp/core/Timecode.h"


namespace mosys 
{
    namespace hardware
    {

        //enum RecorderType;
        
        enum RecorderState
        {
            RS_Disconnected = 0,
            RS_Connected,
            RS_Playing,
            RS_Recording
        };

        // Details about the recorder
        struct RecorderDetails
        {
            std::string m_model;
            std::string m_ipAddress;
            uint16_t m_port;
        };

        struct RecorderSettings
        {
            Timecode approximateTimecode; // Timecodes format HH:MM:SS:FF
            std::string videoFormat;
            std::string clipName;
            int spaceLeft = 0;
            bool warning = false; // For low disk space or no disk
        };

        class Recorder
        {
            public:
                Recorder();
                virtual ~Recorder();

                // Recorder calls back with a reference to itself for the Manager.
                typedef std::function<bool(bool, const char*, Recorder*)> RecorderCallback;
                typedef std::function<bool(bool, Timecode, Recorder*)> RecorderTimecodeCallback;
                typedef std::function<bool(const char*, Recorder*)> RecorderNotificationCallback;

                virtual void connect(const std::string& ipAddress, RecorderCallback connectionCallback) = 0;
                virtual void record(const std::string& filename, RecorderCallback recorderCallback) = 0;
                virtual void play(RecorderCallback recorderCallback) = 0;
                virtual void stop(RecorderCallback recorderCallback) = 0;
                virtual bool disconnect(std::string& errorMessage) = 0;
                virtual void requestTimecode(RecorderTimecodeCallback timecodeCallback) = 0;
                virtual void setNotifications(const bool enable, RecorderCallback notificationCallback) = 0;
                
                virtual RecorderDetails getDetails() { return m_details; }
                virtual RecorderState getState() { return m_state; }
                virtual RecorderSettings getSettings() { return m_settings; }

            protected:
                std::thread* m_thread;
                std::mutex m_mutex;
                std::condition_variable m_condition;
                RecorderCallback m_notifyCallback;

                RecorderDetails m_details;
                RecorderState m_state;
                RecorderSettings m_settings;
                
        };
    }
}
