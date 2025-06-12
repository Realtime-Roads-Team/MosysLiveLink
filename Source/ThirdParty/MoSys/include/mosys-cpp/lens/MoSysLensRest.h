// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <functional>


namespace mosys
{
    class Rest;

    //class to manage communication with lens server
    class MoSysLensRest
    {
        public:
            typedef std::function<bool(int, const char*)> LensRestCallback;
            typedef std::function<bool(int, const char*, int)> LensRestBinaryCallback;

            static MoSysLensRest& instance();
            ~MoSysLensRest();

            void getUserProducts(const char* lensAccessToken, LensRestCallback callback);
            void getUserCalibrations(const char* lensAccessToken, LensRestCallback callback);

            [[deprecated("We no longer charge for lens files, API endpoint might time out too")]]
            void getEncryptedLensFile(const char* lensAccessToken, int id, bool isProduct, bool isBaseFile, LensRestBinaryCallback callback);

            void getUnencryptedLensFile(const char* lensAccessToken, int id, bool isBaseFile, LensRestCallback callback);
            void postDevice(const char* lensAccessToken, const char* deviceType, const char* hardwareID, LensRestCallback callback);
            void deleteDevice(const char* lensAccessToken, const char* deviceID, LensRestCallback callback);
            void getUserProfile(const char* lensAccessToken, LensRestCallback callback);
            void searchLens(const char* urlEncodedQuery, LensRestCallback callback);
            void searchCamera(const char* urlEncodedQuery, LensRestCallback callback);
            void searchLensSerialNumber(const char* lensAccessToken, const char* serialNumber, LensRestCallback callback);
            void searchCameraSerialNumber(const char* lensAccessToken, const char* serialNumber, LensRestCallback callback);
            void searchManufacturer(const char* urlEncodedQuery, LensRestCallback callback);
            void postLens(const char* lensAccessToken, const char* lensTypeID, const char* serialNumber, LensRestCallback callback);
            void deleteLens(const char* lensAccessToken, const char* lensID, LensRestCallback callback);
            void postCamera(const char* lensAccessToken, const char* cameraTypeID, const char* serialNumber, LensRestCallback callback);
            void deleteCamera(const char* lensAccessToken, const char* cameraID, LensRestCallback callback);
            void postCalibration(const char* lensAccessToken, const char* calibrationData, LensRestCallback callback);
            void deleteCalibration(const char* lensAccessToken, const char* calibrationID, LensRestCallback callback);
            void postManufacturer(const char* lensAccessToken, const char* manufacturerName, LensRestCallback callback);
            void deleteManufacturer(const char* lensAccessToken, const char* manufacturerID, LensRestCallback callback);
            void postLensType(const char* lensAccessToken, const char* manufacturerID, const char* lensName, bool bHasExtender, const char* lensType, LensRestCallback callback);
            void deleteLensType(const char* lensAccessToken, const char* lensTypeID, LensRestCallback callback);


            const char* getRootURL();

            //New methods from merging
            MoSysLensRest(MoSysLensRest const&) = delete;
            MoSysLensRest(MoSysLensRest&&) = delete;
            MoSysLensRest& operator=(MoSysLensRest const&) = delete;
            MoSysLensRest& operator=(MoSysLensRest&&) = delete;

        private:
            MoSysLensRest();
            class Rest& rest;
            const char* LENS_URL;
    };
}
