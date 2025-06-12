// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#define CCS_MODEL_PRIVATE(MODEL)\
    MODEL(const MODEL& other) = delete;\
    MODEL& operator=(const MODEL& other) = delete;\
    MODEL(MODEL&& other) = delete;\
    MODEL& operator=(MODEL&& other) = delete;\
    struct MODEL##Impl;\
    MODEL##Impl* impl;

#define CCS_INVALID_ID -1

/// \todo CCS double check models like this is dll safe (never crosses boundry, no allocations needed)
//       stop using MACROS in source if not readable/extensible
//       can add object members? (or limited to primitive only)

namespace ccs
{

    enum class ECCSModelType
    {
        None,
        Project,
        Recording,
        Job,
        JobList
    };

    class CCSNearTimeProject
    {
    public:
        enum class CMSType
        {
            Invalid,
            FrameIO,
            S3,
            Moxion,
            C2C
        };

        CCSNearTimeProject(const char* data);
        ~CCSNearTimeProject();

        bool valid() const;
        int id() const;
        bool name(const char* str) const;
        size_t nameLength() const;
        CMSType cms_type() const;
        bool export_format(const char* str) const;
        size_t export_formatLength() const;
        bool auto_pause_jobs() const;

    private:
        CCS_MODEL_PRIVATE(CCSNearTimeProject);
    };

    class CCSNearTimeRecording
    {
    public:
        CCSNearTimeRecording(const char* data);
        ~CCSNearTimeRecording();

        bool valid() const;
        int id() const;
        bool name(const char* str) const;
        size_t nameLength() const;
        bool start(const char* str) const;
        size_t startLength() const;
        bool end(const char* str) const;
        size_t endLength() const;
        size_t frames() const;
        bool start_timecode(const char* str) const;
        size_t start_timecodeLength() const;
        bool end_timecode(const char* str) const;
        size_t end_timecodeLength() const;

    private:
        CCS_MODEL_PRIVATE(CCSNearTimeRecording);
    };

    class CCSNearTimeJob
    {
    public:
        enum class Status
        {
            Invalid,
            Assigned,
            Cancelled,
            Complete,
            Failed,
            Publishing,
            PostRendered,
            PostRendering,
            Queuing,
            Rendering,
            Rendered,
            Submitting,
            Any
        };

        CCSNearTimeJob(const char* data);
        ~CCSNearTimeJob();

        bool valid() const;
        int id() const;
        bool name(const char* str) const;
        size_t nameLength() const;
        bool camera(const char* str) const;
        size_t cameraLength() const;
        int progress() const;
        size_t frames() const;
        int time_remaining() const;
        Status status() const;
        int project() const;
        int recording() const;
        bool is_paused() const;

    private:
        CCS_MODEL_PRIVATE(CCSNearTimeJob);
    };

    class CCSNearTimeJobList
    {
    public:
        CCSNearTimeJobList(const char* data);
        ~CCSNearTimeJobList();

        const CCSNearTimeJob* get(size_t index) const;
        size_t length() const;
        size_t nextPage() const;

    private:
        CCS_MODEL_PRIVATE(CCSNearTimeJobList);
    };

} // ccs
