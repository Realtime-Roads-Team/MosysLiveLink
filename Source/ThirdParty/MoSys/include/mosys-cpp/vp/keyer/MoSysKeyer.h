// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <functional>

#include <string>


namespace mosys
{
    namespace hardware
    {
        class Keyer
        {
            public:

                Keyer();
                virtual ~Keyer();

                typedef std::function<void(bool success, std::string&)> TcpCallback;

                virtual bool connectKeyer(const char* address, TcpCallback callback) = 0;
                virtual bool getCurrentPreset(const std::string& presetName, TcpCallback callback) = 0;
                virtual bool setPreset(const char* presetName, TcpCallback callback) = 0;
                virtual void closeKeyer() = 0;
                virtual void readTcp() = 0;

                bool getLastErrorMessage(std::string& message);

            protected:
                std::string m_lastErrorMessage;
        };
    }
}
