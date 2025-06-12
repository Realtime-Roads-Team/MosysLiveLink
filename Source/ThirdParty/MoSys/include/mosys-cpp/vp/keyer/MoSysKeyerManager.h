// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <string>
#include <vector>

#include <functional>

namespace mosys
{
    namespace hardware
    {
        enum KeyerType
        {
            /// \todo Currently only Blackmagic Ultimatte is supported
            KT_Ultimatte = 0
        };


        // Very basic interface to a single Keyer that gets and sets keyer presets.
        class KeyerManager
        {
            public:
                static KeyerManager& instance();
                ~KeyerManager();

                typedef std::function<void(bool success, std::string&)> TcpCallback;

                // Fetch a keyer object for the given address or nullptr if connection failed

                class Keyer* connectKeyer(const char* address, TcpCallback callback, KeyerType keyerType = KeyerType::KT_Ultimatte);
                void disconnectAll();

                KeyerManager(KeyerManager const&) = delete;
                KeyerManager(KeyerManager&&) = delete;
                KeyerManager& operator=(KeyerManager const&) = delete;
                KeyerManager& operator=(KeyerManager&&) = delete;


            private:
                KeyerManager();
                std::vector<class Keyer*>m_keyers;
        };
    }
}
