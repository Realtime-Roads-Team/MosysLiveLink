// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <atomic>
#include <thread>
#include <mutex>
#include <string>
#include <functional>


namespace mosys
{
    class Rest;

    namespace hardware
    {
        class MoSysStarTracker
        {
        public:
            typedef std::function<bool(int, int) > RestGetIntegerCallback;
            typedef std::function<bool(float, int) > RestGetFloatCallback;
            typedef std::function<bool(const std::string&, int) > RestGetStringCallback;
            typedef std::function<bool(int) > RestPutCallback;
            typedef std::function<void(bool) > UpdateCallback;

            bool getIpAddress(std::string& ip) const;
            bool compareIpAddress(const char* ip) const;

            bool getHardwareId(std::string& hardwareId, RestGetStringCallback callback);
            bool getVersion(std::string& version, RestGetStringCallback callback);
            // The camera ident is the Camera A,B,C etc in Data > Record
            bool getCameraIdent(std::string& cameraIdent, RestGetStringCallback callback);
            bool getCurrentLensFilename(std::string& currentLensFilename, RestGetStringCallback callback);
            bool getAvailableLensFilenames(std::string& availableLensFilenames, RestGetStringCallback callback);
            int getStatus(RestGetIntegerCallback callback);
            bool getRecordFilename(std::string& recordFilename, RestGetStringCallback callback);

            /// \todo provide callback
            void autoConfigureNetwork(const std::string ipAddress, int port);
            void setJam(bool jam);
            void setRecord(bool record);
            void restartSoftware();
            void setLensPin(std::string pin);
            void setCameraIdent(std::string ident);
            bool setCurrentLensFilename(const std::string currentLensFilename);
            bool setRecordFilename(const std::string recordFilename);

            void sendEncryptedLensFile(const std::string urlEncodedFilename, const std::string& encryptedFile, RestPutCallback callback);
            void sendUnencryptedLensFile(const std::string urlEncodedFilename, const std::string& unencryptedFile, RestPutCallback callback);

            //friend class MoSysStarTrackerManager;
            /// \todo should be private - friendship not working
            void updateSynchronous();
            void stopUpdateAsync();

            // Run thread to keep updating the http requests
            void updateAsync();

            MoSysStarTracker(const std::string& ipAddress, bool createdByUser = false);
            ~MoSysStarTracker();
            void reset(const std::string& ipAddress = "");
            bool updatesCompleted();
            int getUpdatesCompleted() const;
            int getMaxUpdates() const;
            bool getHasRestServerEnabled();

            void update();
            bool isRunning();
            void setRunning(bool run);
            void getThreadUpdateCompleted(UpdateCallback callback);
            void verifyRest(std::string& errorMessage);
            bool getIsVerified() const;
            int getCurrentStatus() const;
            bool canBeDeletedByUser() const;

        private:
            std::string getEndpoint(const std::string path);
            std::string getOldEndpoint(const std::string path);

            void getString(const std::string path, RestGetStringCallback callback);
            void getOldString(const std::string path, RestGetStringCallback callback);
            void getInteger(const std::string path, std::string key, RestGetIntegerCallback callback);
            void put(const std::string path, std::string body, RestPutCallback callback);
            void putOld(const std::string path, std::string body, RestPutCallback callback);
            void getFloat(const std::string path, std::string key, RestGetFloatCallback callback);

            void getRestHardwareId(RestGetStringCallback callback);
            void getRestCurrentLensFilename(RestGetStringCallback callback);
            void getRestRecordFilename(RestGetStringCallback callback);
            void getRestAvailableLensFilenames(RestGetStringCallback callback);
            void getRestStatus(RestGetIntegerCallback callback);
            void getRestVersion(RestGetStringCallback callback);
            void getRestCameraIdent(RestGetStringCallback callback);

            void setDestinationIPAddress(std::string address, RestPutCallback callback);
            void setDestinationPort(int port, RestPutCallback callback);
            void setJam(bool jamVal, RestPutCallback callback);
            void setRecord(bool record, RestPutCallback callback);
            void setUdpChannel(RestPutCallback callback);
            void setLensPin(std::string pin, RestPutCallback callback);
            void setCameraIdent(std::string pin, RestPutCallback callback);

            void restartSoftware(RestPutCallback callback);

            bool hardwareIdCallback(std::string jsonHardwareId, int httpStatus);
            bool versionCallback(std::string jsonVersion, int httpStatus);
            bool currentLensFilenameCallback(std::string jsonLensFilename, int httpStatus);
            bool recordFilenameCallback(std::string jsonRecordFilename, int httpStatus);
            bool availableLensFilenamesCallback(std::string jsonAvailableLensFilenames, int httpStatus);
            bool statusCallback(int status, int httpStatus);
            bool cameraIdentCallback(std::string, int httpStatus);
            bool defaultCallback(int httpStatus);
            void setForDeletion();
            void waitForRest();
            

            struct RestUpdatesComplete
            {
                bool hardwareId;
                bool version;
                bool cameraIdent;
                bool currentLensFilename;
                bool recordFilename;
                bool availableLensFilename;
                bool status;

                int updatesCompleted();
            };

            std::atomic<RestUpdatesComplete*> m_restUpdates;
            std::string m_ipAddress;
            std::string m_hardwareId;
            std::string m_version;
            std::string m_currentLensFilename;
            std::string m_recordFilename;
            std::string m_availableLensFilenames;
            std::string m_cameraIdent;

            Rest& rest;
            std::thread* m_thread;
            std::atomic_bool m_running;
            std::mutex m_mutex;

            int m_status;
            int m_tries;
            bool m_hasRestServerEnabled;
            bool m_isVerified;
            bool m_allowDeletion;

            RestGetStringCallback m_hardwareCallback;
            RestGetStringCallback m_versionCallback;
            RestGetStringCallback m_currentLensFilenameCallback;
            RestGetStringCallback m_recordFilenameCallback;
            RestGetStringCallback m_availableLensFilenamesCallback;
            RestGetIntegerCallback m_tcOffsetCallback;
            RestGetIntegerCallback m_tcUdpChannelCallback;
            RestGetIntegerCallback m_statusCallback;
            RestGetFloatCallback m_allDelayCallback;
            RestGetStringCallback m_cameraIdentCallback;
            UpdateCallback m_updateCallback;

            friend class MoSysStarTrackerManager;
        };
    }
}
