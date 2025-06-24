// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <thread>
#include <mutex>
#include <condition_variable>
#include <functional>
#include <string>

namespace mosys
{
    namespace hardware
    {
        constexpr const double MAX_VALUE = 1.0;
        constexpr const double DEFAULT_VALUE = 1.0;
        constexpr const double DEFAULT_HALF_VALUE = 0.5;
        constexpr const double MIN_VALUE = 0.0;

        /**
         * \brief LED controller states in the state machine
         */
        enum LedControllerState
        {
            LCS_Off = 0,         // LED controller is turned off
            LCS_On,              // LED controller is turned on
        };

        /**
         * \brief Stores details about the LED controller, such as make and model.
         */
        struct LedControllerDetails
        {
            std::string make;         // Manufacturer name
            std::string model;        // Model name
            std::string version;      // Firmware version
            std::string serialNumber; // Serial number of the device
            virtual ~LedControllerDetails() = default;
        };

        /**
         * \brief Stores connection details like IP and MAC addresses.
         */
        struct LedControllerConnectionDetails
        {
            std::string ipAddress;   // IP address of the LED controller
            std::string macAddress;  // MAC address of the LED controller
        };

        /**
         * \brief Display settings structure for LED controllers.
         */
        struct LedControllerDisplaySettings
        {
            double brightness = DEFAULT_VALUE; // Brightness level
            double ledLight = DEFAULT_VALUE;     // LED light intensity
            double contrast = DEFAULT_VALUE;     // Contrast level
            double sharpness = DEFAULT_HALF_VALUE;    // Sharpness level
            double color = DEFAULT_VALUE;        // Color saturation
            double tint = DEFAULT_VALUE;         // Tint level
            double temperature = DEFAULT_VALUE;  // Color temperature (3200K-9300K)
        };

        /**
         * \brief Defines the different sources of input for LED controllers.
         */
        enum LedControllerSource
        {
            LC_SOURCE_HDMI = 0xA0,        // HDMI input source
            LC_SOURCE_DISPLAY_PORT = 0xD0,    // DisplayPort input source
            LC_SOURCE_SDI1 = 0xF0,             // SDI input source
            LC_SOURCE_SDI2 = 0xF1             // SDI input source
        };

        /**
         * \brief Abstract base class for all LED controllers.
         */
        class LedController
        {
        public:
            /**
             * \brief Constructor for initializing the LED controller.
             * \param ipAddress IP address of the LED controller
             * \param mac MAC address of the LED controller
             */
            LedController(
                const std::string& ipAddress,
                const std::string& mac
            );

            /**
             * \brief Virtual destructor for proper cleanup.
             */
            virtual ~LedController();

            // Callback type definitions for event-driven operations
            using LedControllerCallback = std::function<bool(bool, const char*, LedController*)>;
            using LedControllerSettingsCallback = std::function<void(const LedControllerDisplaySettings&, const LedControllerSource&, LedController*)>;

            /**
             * \brief Provides available commands and their descriptions.
             * \param commandCallback Callback function to handle command response.
             */
            virtual void help(LedControllerCallback commandCallback) = 0;

            /**
             * \brief Connects to the LED controller.
             * \param hostPort The port used for connection.
             * \param connectionCallback Callback function to handle connection response.
             */
            virtual void connect(const uint16_t hostPort, LedControllerCallback connectionCallback) = 0;

            /**
             * \brief Disconnects from the LED controller.
             * \param commandCallback Callback function to handle disconnection response.
             */
            virtual void disconnect(LedControllerCallback commandCallback) = 0;

            /**
             * \brief Turns off the LED display.
             * \param commandCallback Callback function to handle blackout response.
             */
            virtual void blackOutLed(int duration100ms, LedControllerCallback commandCallback) = 0;

            /**
             * \brief Wakes up the LED display.
             * \param commandCallback Callback function to handle wake-up response.
             */
            virtual void wakeUpLed(int duration100ms, LedControllerCallback commandCallback) = 0;

            /**
             * \brief Sets the brightness level of the LED display.
             * \param value Brightness level (0-100).
             * \param commandCallback Callback function to handle the response.
             */
            virtual void setBrightness(double value, LedControllerCallback commandCallback) = 0;

            /**
             * \brief Sets the LED light intensity.
             * \param value Light intensity level (0-100).
             * \param commandCallback Callback function to handle the response.
             */
            virtual void setLedLight(double value, LedControllerCallback commandCallback) = 0;

            /**
             * \brief Sets the contrast level of the LED display.
             * \param value Contrast level (0-100).
             * \param commandCallback Callback function to handle the response.
             */
            virtual void setContrast(double value, LedControllerCallback commandCallback) = 0;

            /**
             * \brief Sets the sharpness level of the LED display.
             * \param value sharpness level (0-50).
             * \param commandCallback Callback function to handle the response.
             */
            virtual void setSharpness(double value, LedControllerCallback commandCallback) = 0;

            /**
             * \brief Sets the color level of the LED display.
             * \param value color level (0-100).
             * \param commandCallback Callback function to handle the response.
             */
            virtual void setColor(double value, LedControllerCallback commandCallback) = 0;

            /**
             * \brief Sets the tint level of the LED display.
             * \param value tint level (0-100).
             * \param commandCallback Callback function to handle the response.
             */
            virtual void setTint(double value, LedControllerCallback commandCallback) = 0;

            /**
             * \brief Sets the temperature level of the LED display.
             * \param value temperature level (0-100).
             * \param commandCallback Callback function to handle the response.
             */
            virtual void setTemperature(double value, LedControllerCallback commandCallback) = 0;

            /**
             * \brief Sets the display settings for the LED controller.
             * \param settings The display settings to apply.
             * \param commandCallback Callback function to handle the response.
             */
            virtual void setDisplaySettings(LedControllerDisplaySettings settings, LedControllerCallback commandCallback) = 0;

            /**
             * \brief Sets the source for the LED controller.
             * \param source The source to set.
             * \param commandCallback Callback function to handle the response.
             */
            virtual void setSource(LedControllerSource source, LedControllerCallback commandCallback) = 0;

            /**
             * \brief Gets the display settings for the LED controller.
             * \param commandCallback Callback function to handle the response.
             */
            virtual void fetchDisplaySettings(LedControllerCallback commandCallback) = 0;

            /**
             * \brief Resets the display settings to default values.
             * \param commandCallback Callback function to handle the response.
             */
            virtual void resetDisplaySettings(LedControllerCallback commandCallback) = 0;            

            /**
             * \brief Subscribes to display settings change notifications.
             * \param callback Function to be called when display settings change.
             */
            virtual void subscribeToSettingsChanges(LedControllerSettingsCallback callback) = 0;

            /**
             * \brief Intructs the controller to display a solid colour.
             * \param red Red level (0-1).
             * \param green Green level (0-1).
             * \param blue Blue level (0-1).
             * \param commandCallback Callback function to handle the response.
             */
            virtual void setTestPattern(double redValue, double greenValue, double blueValue, bool onOff, LedControllerCallback commandCallback) = 0;

            /**
             * \brief Retrieves the connection details of the LED controller.
             * \return Connection details including IP and MAC address.
             */
            LedControllerConnectionDetails getConnectionDetails() const;

        protected:
            std::unique_ptr<std::thread> m_thread{}; // Thread for handling asynchronous tasks
            mutable std::mutex m_mutex;              // Mutex for thread safety
            std::condition_variable m_cv;            // Condition variable for synchronization

            LedControllerSettingsCallback m_settingsCallback; // Callback for settings changes
            LedControllerConnectionDetails m_connectionDetails; // Stores connection details
        };
    }
}
