// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once 

#include <cstdint>
#include <stdlib.h>
#include <string>
#include <vector>

namespace mosys
{
    class Networking
    {
    public:
        /**
         * \brief Return the first MAC address the OS finds
         * \param[out] mac The MAC address found by the system, or an empty string if one is not available
         * \return True if a MAC address was found
         */
        static bool GetFirstMacAddress(std::string& mac);
        /**
         * \brief Find the network interface controller associated with the IP address provided and return its interface index
         * \param ip The IP address to find the index for
         * \return The interface index of the controller or TO_ALL_INTERFACES if none were found
         */
        static int32_t IP2InterfaceIndex(const char* ip);
        /**
         * \brief Return all MAC addresses of all network interface controllers
         * \return A vector containing MAC addresses
         */
        static std::vector<std::string> GetAllInterfaceMACs();
        /**
         * \brief Return all IP addresses of all network interface controllers
         * \return A vector containing IP addresses
         */
        static std::vector<std::string> GetAllInterfaceIPs();
        /**
         * \brief Check if the IP address provided is a valid IP version 4 address
         * \param ip The IP address string. A valid IPv4 address is 127.0.0.1.
         * \return True if the IP is valid
         */
        static bool IsValidIPAddressV4(const char* ip);
        /**
         * \brief Check if the IP address provided is a valid IP version 6 address
         * \param ip The IP address string. A valid IPv6 address is 2001:0db8:85a3:0000:0000:8a2e:0370:7334.
         * \return True if the IP is valid
         */
        static bool IsValidIPAddressV6(const char* ip);
        /**
         * \brief Check if the specified UDP port is already bound to another socket
         * \param port Port number to check between 0-65535
         * \return True if the port is in use / bound to another socket
         */
        static bool IsUDPPortInUse(unsigned short port);
        /**
         * \brief Iterate through port numbers and find the next available one
         * \param port The port to start at and will hold the port number that is next available (if one is found)
         * \param tries The number of ports to try
         * \return True if we found an available port
         */
        static bool FindNextAvailableUDPPort(unsigned short& port, size_t tries = 100);
    };
} // namespace mosys
