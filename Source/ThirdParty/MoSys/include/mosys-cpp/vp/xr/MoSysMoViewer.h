// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <functional>
#include <string>


namespace mosys
{
    namespace hardware
    {
        enum MoViewerMode
        {
            MVM_Camera = 0,
            MVM_Virtual,
            MVM_Alpha,
            MVM_Split,
            MVM_Keyed
        };

        class MoViewer
        {
        public:
            typedef std::function<bool(const std::string&, int)> ModeCallback;
            
            static void setMoViewerMode(std::string ipAddress, MoViewerMode mode);
            static void getMoViewerMode(std::string ipAddress, ModeCallback callback);
            static std::string moViewerModeToString(MoViewerMode mode);
            static MoViewerMode moViewerStringToMode(std::string modeString);

        private:
            static inline std::string modeUrl(std::string ipAddress);
        };
    }
}
