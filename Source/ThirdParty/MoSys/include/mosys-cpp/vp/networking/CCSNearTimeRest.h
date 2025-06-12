// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include <memory>
#include <chrono>
#include <functional>

#include <string>

#include "CCSNearTimeModel.h"
#include "CCSNearTimeUtils.h"

namespace mosys
{
    class Rest;
}

namespace ccs
{
    class CCSNearTimeRest
    {

    public:
        using NearTimeRestErrorCallback = std::function<bool(EHTTPStatusCode, const char*)>;
        using NearTimeRestNumberCallback = std::function<bool(EHTTPStatusCode, int)>;
        using NearTimeRestModelCallback = std::function<bool(ECCSModelType, EHTTPStatusCode, const char*)>;


        static CCSNearTimeRest& instance();
        ~CCSNearTimeRest();

        // state
        bool hasValidProject() const;
        bool hasValidRecording() const;
        bool canCreateJobs() const;

        // see CCSNearTimeConnectData for necessary data required
        /// \todo CCS this should call the "isServiceAvailable" and then project name and whatever else...
        bool connect(const CCSNearTimeConnectData& data, const NearTimeRestModelCallback& callback);

        // handle projects
        void getProject(const NearTimeRestModelCallback& callback, int id = -1);

        // handle recording
        void startRecording(const CCSNearTimeRecordingStartData& startData, const NearTimeRestModelCallback& callback);
        void failRecording(const char* reason, const NearTimeRestErrorCallback& callback, int recordingId = -1);
        void stopRecording(const CCSNearTimeRecordingStopData& stopData, const NearTimeRestModelCallback& callback);
        void uploadCameraPreview(const char* camera, const CCSNearTimeFile& file, const NearTimeRestErrorCallback& callback, int recordingId = -1);
        void uploadRecordingFiles(const CCSNearTimeFile* files, size_t fileCount, const NearTimeRestErrorCallback& callback, int id = -1);
        void getRecording(const NearTimeRestModelCallback& callback, int id = -1);
        void submitRecording(std::shared_ptr<CCSNearTimeRecordingSubmitData> submitDataPtr, const NearTimeRestErrorCallback& callback);

        // handle jobs 
        void getJobs(const NearTimeRestModelCallback& callback, size_t page, int projectId = -1);
        void getJob(int id, const NearTimeRestModelCallback& callback);
        void getJob(const char* camera, const NearTimeRestModelCallback& callback, int recordingId = -1);
        void changeJobState(int id, ECCSJobState newState, const NearTimeRestErrorCallback& callback);
        void changeJobState(const char* camera, ECCSJobState newState, const NearTimeRestErrorCallback& callback, int recordingId = -1);

        // update everything in a model
        /// \todo CCS need a "toJson" type function to convert back
        //void updateProject(const CCSNearTimeProject& project, const NearTimeRestErrorCallback& callback);
        //void updateRecording(const CCSNearTimeRecording& recording, const NearTimeRestErrorCallback& callback);
        //void updateJob(const CCSNearTimeJob& job, const NearTimeRestErrorCallback& callback);

    private:
        mosys::Rest& rest;
        class CCSNearTimeState* m_state;

       // ensure that only 1 object of this class can exist
    private:
        CCSNearTimeRest();

    public:
        CCSNearTimeRest(CCSNearTimeRest const &) = delete;
        CCSNearTimeRest(CCSNearTimeRest &&) = delete;
        CCSNearTimeRest& operator=(CCSNearTimeRest const &) = delete;
        CCSNearTimeRest& operator=(CCSNearTimeRest &&) = delete;
    };
}
