// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <functional>
#include <string>
#include <vector>

#include <mutex>

namespace mosys
{
    // Forward declaration to avoid circular dependency
    class Camera;

    namespace video
    {
        /**
         * \brief What type of camera is being connected, disconnected or used? If you add another type here, add the relevant code to connectCamera function in the CameraManager
         * as well as adding in the implementation of camera's code in header and source files (e.g. RedCamera.cpp and RedCamera.h)
         */
        enum CameraType
        {
            CT_Arri = 0,
            CT_Sony,
            CT_Red,
            CT_Canon,
            CT_Blackmagic
        };

        /**
         * Callbacks for returning what the current status of the camera is. Was it connected? Was there an error?
         */
        typedef std::function<void(std::string key, std::string value)> CameraSettingsCallback;
        typedef std::function<CameraSettingsCallback(bool success, const std::string& name, const std::string& version)> CameraConnectedCallback;

        /**
         * \brief A singleton instance for managing cameras. The cameras themselves handle the logic of what happens when they connect and disconnect.
         * This is used to *own* them for allocation and deallocation.
         */
        class CameraManager
        {
        public:
            /**
             * \brief Getter for the CameraManager. This function creates a manager if there is not one already. Do not create one manually.
             * \return A valid reference to the camera manager
             */
            static CameraManager& instance();
            /**
             * \brief Destructor for the CameraManager. This will clear and disconnect all currently active cameras. This will only happen when unloading the API.
             */
            ~CameraManager();
            /**
             * \brief Main entry for connecting a camera. This will subsequently call "connect" on the camera and will call "subscribe" on successful connection.
             * \param type The type of camera we are connecting with
             * \param address The IP address of the camera. This should be passed in from the engine calling this code.
             * \param password The password of the camera to authenticate the connection. This should be passed in from the engine calling this code.
             * \param connectCallback This will be called at the end and tell the engine what happened with the camera, whether it connected successfully or not.
             * \param slowMode The current mode of the camera. Slow mode indicates the camera is slower at responding to requests. Typically takes longer to respond with current Timecode.
             * \param portIn Port to use. To use the (camera type specific) default port, pass 0.
             */
            void connectCamera(CameraType type, const std::string& address, const std::string& password, const CameraConnectedCallback& connectCallback, bool slowMode = false, uint16_t portIn = 0);
            /**
             * \brief Tells all cameras to start recording
             * \return True if we set the cameras to record, false if there was a failure or no cameras are available to record
             */
            bool rollRecord();
            /**
             * \brief Tells all cameras to stop recording
             * \return True if we set the cameras to stop recording, false if there was a failure or no cameras are available to stop recording
             */
            bool stopRecord();
            /**
             * \brief Main entry for disconnecting a camera. This will attempt to find and disconnect the specified camera before deleting it from the current collection of cameras.
             * \param address The address of the camera to find and disconnect
             * \return True if we successfully found and disconnected a camera, false if we did not find the camera or could not disconnect it
             */
            bool disconnectCamera(const std::string& address);

            /**
             * Deleted constructors and assignment operators as CameraManager is a singleton
             */
            CameraManager(CameraManager const&) = delete;
            CameraManager(CameraManager&&) = delete;
            CameraManager& operator=(CameraManager const&) = delete;
            CameraManager& operator=(CameraManager&&) = delete;

        private:
            /**
             * \brief This is used to callback from the camera code to the CameraManager to report current camera status. This function adds the camera to the current collection of cameras.
             * \param camera The camera we tried connecting and is calling back
             * \param connectCallback The callback to additionally call to respond to the engine trying to connect the camera, value is forwarded from connectCamera function.
             * \param slowMode Is the camera set to be in slow mode, value is forwarded from connectCamera function.
             */
            void onCameraConnectCallback(Camera* camera, const CameraConnectedCallback& connectCallback, bool slowMode);
            /**
             * \brief Default construct the camera manager for the singleton instance
             */
            CameraManager() = default;
            /**
             * \brief Iterate through a collection of cameras and delete each one, after which it clears the collection
             * \param cameras Collection of cameras
             */
            static void clearCameras(std::vector<Camera*>& cameras);
            // Current active cameras
            std::vector<Camera*> m_cameras;
            // Cameras we tried connecting to but failed
            std::vector<Camera*> m_failedCameras;
            // Mutex to lock when connecting or disconnecting a camera. This ensures we are not adding a camera at the same time as removing another or vice versa.
            std::mutex m_cameraConnectMutex;
        };
    }
}
