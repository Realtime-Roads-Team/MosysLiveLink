// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "LedController.h"
#include <mutex>
#include <condition_variable>
#include <functional>
#include <string>
#include <vector>

namespace mosys
{
    namespace hardware
    {
        /**
         * \brief Enum representing different types of LED controllers.
         */
        enum LedControllerType
        {
            LG = 0,    // LG LED controller
        };

        /**
         * \brief Manages multiple LED controllers, handling connections and operations.
         */
        class LedControllerManager
        {
        public:
            /**
             * \brief Gets the singleton instance of the LED controller manager.
             * \return Reference to the singleton instance.
             */
            static LedControllerManager& instance();

            // Delete copy and move constructors and assignment operators
            LedControllerManager(const LedControllerManager&) = delete;
            LedControllerManager(LedControllerManager&&) = delete;
            LedControllerManager& operator=(const LedControllerManager&) = delete;
            LedControllerManager& operator=(LedControllerManager&&) = delete;

            /**
             * \brief Destructor to clean up allocated resources.
             */
            ~LedControllerManager();

            // Callback function types for command and settings responses
            using ConnectionCallback = std::function<bool(bool, const std::string&)>;
            using CommandCallback = std::function<bool(bool, const std::string&)>;

            /**
             * \brief Connects to an LED controller and initializes it.
             * \param type Type of LED controller (LG, Dummy, etc.).
             * \param ipAddress IP address of the LED controller.
             * \param mac_address MAC address of the LED controller.
             * \param hostPort The port to use for the connection.
             * \param udp_ip The UDP IP address for communication.
             * \param udpPort The UDP port for communication.
             * \param commandCallback Callback function for handling command responses.
             * \param settingsCallback Callback function for handling settings updates.
             * \return Shared pointer to the connected LED controller.
             */
            bool connectLedController(
                LedControllerType type,
                const std::string& ipAddress,
                const std::string& mac_address,
                const uint16_t hostPort,
                const std::string& udp_ip,
                const int udpPort,
                ConnectionCallback connectionCallback);

            /**
             * \brief Disconnects an LED controller.
             * \param ledController Shared pointer to the LED controller to disconnect.
             * \param commandCallback Callback function to handle the disconnection response.
             * \return True if the disconnection was successful, false otherwise.
             */
            bool disconnectLedController(const std::string& ipAddress, CommandCallback commandCallback);

            std::shared_ptr<LedController> getLedController(const std::string& ipAddress);

        private:
            /**
             * \brief Private constructor to enforce singleton pattern.
             */
            LedControllerManager();

            /**
             * \brief Finds an LED controller in the list based on its IP address.
             * \param ipAddress The IP address of the LED controller.
             * \param index Reference to store the found index.
             * \return True if the controller was found, false otherwise.
             */
            bool findLedControllerWithAddress(const std::string& ipAddress, int& index);

            /**
             * \brief Callback function for handling connection responses.
             * \param callback The command callback function.
             * \param success Indicates if the operation was successful.
             * \param message Response message.
             * \param ledController Shared pointer to the LED controller.
             * \return True if the callback was successfully processed, false otherwise.
             */
            bool callbackConnected(ConnectionCallback callback, bool success, const std::string& message, std::shared_ptr<LedController> ledController);

            /**
             * \brief Callback function for handling general controller responses.
             * \param callback The command callback function.
             * \param success Indicates if the operation was successful.
             * \param message Response message.
             * \param ledController Shared pointer to the LED controller.
             * \return True if the callback was successfully processed, false otherwise.
             */
            bool callbackController(CommandCallback callback, bool success, const std::string& message, std::shared_ptr<LedController> ledController);

            std::vector<std::shared_ptr<LedController>> m_ledControllers{}; // List of managed LED controllers
            std::string m_lastErrorMessage; // Stores the last error message
            std::mutex m_mutex; // Mutex for thread-safe access
            std::condition_variable m_cv; // Condition variable for synchronization
        };
    }
}
