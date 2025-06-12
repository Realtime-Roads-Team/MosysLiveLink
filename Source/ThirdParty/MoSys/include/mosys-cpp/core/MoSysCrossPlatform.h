// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

// This file must not be included in public headers
// This is because including "windows.h" in the wrong place breaks Unreal

#include <string>
#include <vector>
#include <functional>
#include <cstring>
#include <sstream>
#include <time.h>

#define _WINDOWS_OS 0
#define _LINUX_OS 1

#ifdef _WIN32

#ifndef NOMINMAX
#define NOMINMAX
#endif

#include <windows.h>
#include <direct.h>

#define OS _WINDOWS_OS
#define TO_ALL_INTERFACES (0) //For Bonjour this value is 0 (kDNSServiceInterfaceIndexAny)
#define OS_SEP '\\'

#else //ifdef linux

#define OS _LINUX_OS
//Note: follows Microsoft order, which is *reversed* vs C spec
// https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s?view=vs-2019            
#define localtime_s(arg1, arg2) localtime_r(arg2, arg1)

#define TO_ALL_INTERFACES (-1) //For Avahi this value is -1 (AVAHI_IF_UNSPEC)
#define OS_SEP '/'

#endif // ifdef linux

namespace mosys
{
    std::string GetCharset();

    std::string ComputerName();

    std::string GetUUID();

    struct NICInfo // Network Interface Controller (NIC)
    {
        std::string ipAddress;
        std::string macAddress;
        int32_t interfaceIndex;
    };

    /**
    * \brief If successful, it populates the vector with information about each NIC on the system.
    *
    * \param nics vector to be populated with each nic
    */
    bool GetSystemNICs(std::vector<NICInfo>& nics);
} // namespace mosys