// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include "mosys-cpp/core/Timecode.h"

#include "CCSNearTimeModel.h"


namespace ccs
{

    enum class ECCSJobState
    {
        Pause,
        Play,
        Cancel
    };

    /// \todo move this to Rest and use elsewhere?
    // no class as we want it to be implicitly cast to an int
    enum EHTTPStatusCode
    {
        CCS_HTTPOk = 200,
        CCS_HTTPCreated = 201,
        CCS_HTTPAccepted = 202,
        CCS_HTTPBadRequest = 400,
        CCS_HTTPForbidden = 403,
        CCS_HTTPNotFound = 404,
        CCS_HTTPRequestTimeout = 408
    };

    // helper simple data structs so we can easily expand if necessary (and 
    // reduces args in some of the CCSRest function calls)
    /// \todo CCS instead is it clearer to pass 5 args to connect (for example)?
    struct CCSNearTimeConnectData
    {
        const char* name = "";
        const char* sourceEngineVersion = "";
        const char* sourceMoSysVersion = "";
        const char* url = "";
        const char* token = "";
    };

    inline char* SetupBuffer(const char* src = "")
    {
        size_t n = std::strlen(src);
        //By default, we will allocate at least 1 char so we set it as the empty string,
        //in this way we avoid multiple check if the pointer is null at the time of using it
        char* dst = new char[n + 1];
        std::memcpy(dst, src, n * sizeof(char));
        dst[n] = 0;
        return dst;
    }

    struct DataSetter
    {
        void SetData(char*& buffer, const char* src = "")
        {
            if (buffer)
            {
                delete[] buffer;
            }
            buffer = SetupBuffer(src);
        }
    };

    struct CCSNearTimeRecordingStartData : public DataSetter
    {
        /// \todo CCS helpers to not have to have user create c style arrays?
        //~CCSNearTimeRecordingStopData();
        //void addCamera(const char* name);
        /// \todo CCS could do this instead of requiring user to create it manually? will cross dll boundary however!
        //mosys::MoSysVector<std::string> cameras;

        mosys::Timecode timecode;
        mosys::FrameRate frameRate;
        char* camerasCSV;
        char* name;
        int projectId{ CCS_INVALID_ID };

        CCSNearTimeRecordingStartData()
            :camerasCSV(SetupBuffer()),
            name(SetupBuffer())
        {
        }

        CCSNearTimeRecordingStartData(const CCSNearTimeRecordingStartData& other)
            :timecode(other.timecode),
            frameRate(other.frameRate),
            camerasCSV(SetupBuffer(other.camerasCSV)),
            name(SetupBuffer(other.name)),
            projectId(other.projectId)
        {
        }

        CCSNearTimeRecordingStartData(const char* InName, const char* InCamerasCSV)
            :camerasCSV(SetupBuffer(InCamerasCSV)),
            name(SetupBuffer(InName))
        {
        }

        ~CCSNearTimeRecordingStartData()
        {
            delete[] camerasCSV;
            delete[] name;
        }

        CCSNearTimeRecordingStartData& operator=(const CCSNearTimeRecordingStartData& other)
        {
            if (&other != this) {
                projectId = other.projectId;
                timecode = other.timecode;
                frameRate = other.frameRate;
                delete[] camerasCSV;
                delete[] name;
                camerasCSV = SetupBuffer(other.camerasCSV);
                name = SetupBuffer(other.name);
            }
            return *this;
        }
    };

    struct CCSNearTimeRecordingStopData : public DataSetter
    {
        mosys::Timecode timecode;
        char* metadata;
        int id{ CCS_INVALID_ID };

        CCSNearTimeRecordingStopData()
            :metadata(SetupBuffer())
        {
        }

        CCSNearTimeRecordingStopData(const char* InMetadata)
            :metadata(SetupBuffer(InMetadata))
        {
        }

        CCSNearTimeRecordingStopData(const CCSNearTimeRecordingStopData& other)
            : timecode(other.timecode),
            metadata(SetupBuffer(other.metadata)),
            id(other.id)
        {
        }

        ~CCSNearTimeRecordingStopData()
        {
            delete[] metadata;
        }

        CCSNearTimeRecordingStopData& operator=(const CCSNearTimeRecordingStopData& other)
        {
            if (this != &other) {
                id = other.id;
                timecode = other.timecode;
                delete[] metadata;
                metadata = SetupBuffer(other.metadata);
            }
            return *this;
        }
    };

    struct CCSNearTimeFile : public DataSetter
    {
        char* path;
        char* name;
        char* contentType;
        unsigned char* buffer{ nullptr };
        int64_t bufferCount{ 0 };
        bool bIsBuffer{ false };

        CCSNearTimeFile()
            :path(SetupBuffer()),
            name(SetupBuffer()),
            contentType(SetupBuffer())
        {
        }

        CCSNearTimeFile(const CCSNearTimeFile& other)
            :path(SetupBuffer(other.path)),
            name(SetupBuffer(other.name)),
            contentType(SetupBuffer(other.contentType))
        {
            bIsBuffer = other.bIsBuffer;
            bufferCount = other.bufferCount;
            if (bIsBuffer)
            {
                buffer = new unsigned char[bufferCount];
                std::memcpy(buffer, other.buffer, bufferCount * sizeof(unsigned char));
            }
        }

        CCSNearTimeFile(const char* InName, const char* InPath, const char* InContentType="")
            :path(SetupBuffer(InPath)),
            name(SetupBuffer(InName)),
            contentType(SetupBuffer(InContentType))
        {
        }

        CCSNearTimeFile(const char* InName, const char* InContentType, unsigned char* InBuffer, int64_t InBufferCount)
            :path(SetupBuffer()),
            name(SetupBuffer(InName)),
            contentType(SetupBuffer(InContentType)),
            bufferCount(InBufferCount),
            bIsBuffer(true)
        {
            bIsBuffer = bIsBuffer && (bufferCount > 0);

            if (bIsBuffer)
            {
                buffer = new unsigned char[bufferCount];
                std::memcpy(buffer, InBuffer, bufferCount * sizeof(unsigned char));
            }
        }

        ~CCSNearTimeFile()
        {
            delete[] buffer;
            delete[] path;
            delete[] name;
            delete[] contentType;
        }

        CCSNearTimeFile operator=(const CCSNearTimeFile& other)
        {
            if (this != &other)
            {
                delete[] path;
                delete[] name;
                delete[] contentType;

                path = SetupBuffer(other.path);
                name = SetupBuffer(other.name);
                contentType = SetupBuffer(other.contentType);

                if (bIsBuffer)
                {
                    delete[] buffer;
                }

                bufferCount = other.bufferCount;
                bIsBuffer = other.bIsBuffer && (bufferCount > 0);

                if (bIsBuffer)
                {
                    buffer = new unsigned char[bufferCount];
                    std::memcpy(buffer, other.buffer, bufferCount * sizeof(unsigned char));
                }

            }
            return *this;
        }
    };

    struct CCSNearTimeRecordingSubmitData
    {
        struct Camera : public DataSetter
        {
            CCSNearTimeFile preview;
            char* name;
            Camera()
                :name(SetupBuffer())
            {
            }

            Camera(const Camera& other)
                :preview(other.preview),
                name(SetupBuffer(other.name))
            {
            }

            Camera(const char* InName)
                :name(SetupBuffer(InName))
            {
            }

            void SetName(const char* InName)
            {
                delete[] name;
                name = SetupBuffer(InName);
            }

            Camera& operator=(const Camera& other)
            {
                if (this != &other)
                {
                    preview = other.preview;
                    delete[] name;
                    name = SetupBuffer(other.name);
                }
                return *this;
            }
        };

        CCSNearTimeRecordingStartData start;
        CCSNearTimeRecordingStopData stop;
        Camera* cameras{ nullptr };
        CCSNearTimeFile* files{ nullptr };
        size_t cameraCount{ 0 };
        size_t cameraCounter{ 0 };
        size_t fileCount{ 0 };
        size_t fileCounter{ 0 };

        CCSNearTimeRecordingSubmitData(const CCSNearTimeRecordingStartData& InStart, const CCSNearTimeRecordingStopData& InStop, 
            size_t InCameraCount, size_t InFileCount = 1)
            :start(InStart),
            stop(InStop),
            cameraCount(InCameraCount),
            fileCount(InFileCount)
        {
            cameras = new Camera[InCameraCount];
            files = new CCSNearTimeFile[InFileCount];
        }

        CCSNearTimeRecordingSubmitData(const CCSNearTimeRecordingSubmitData& other)
            :start(other.start),
            stop(other.stop)
        {
            cameraCount = other.cameraCount;
            cameras = new Camera[cameraCount];
            for (int i = 0; i < other.cameraCount; i++) {
                cameras[i] = other.cameras[i];
            }

            fileCount = other.fileCount;
            files = new CCSNearTimeFile[fileCount];
            for (int i = 0; i < other.fileCount; i++) {
                files[i] = other.files[i];
            }
        }

        CCSNearTimeRecordingSubmitData& operator=(const CCSNearTimeRecordingSubmitData& other)
        {
            if (this != &other) {
                start = other.start;
                stop = other.stop;

                delete[] cameras;
                cameraCount = other.cameraCount;
                cameras = new Camera[cameraCount];

                for (int i = 0; i < other.cameraCount; i++) {
                    cameras[i] = other.cameras[i];
                }

                delete[] files;
                fileCount = other.fileCount;
                files = new CCSNearTimeFile[fileCount];
                for (int i = 0; i < other.fileCount; i++) {
                    files[i] = other.files[i];
                }
            }

            return *this;
        }

        ~CCSNearTimeRecordingSubmitData()
        {
            delete[] cameras;
            delete[] files;
        }

        void AddCamera(const char* InName, const CCSNearTimeFile& InPreview)
        {
            if (cameraCounter < cameraCount) 
            {
                cameras[cameraCounter].SetName(InName);
                cameras[cameraCounter].preview = InPreview;
                cameraCounter++;
            }
        }

        void AddFile(const CCSNearTimeFile& InFile)
        {
            if (fileCounter < fileCount)
            {
                files[fileCounter]=InFile;
                fileCounter++;
            }
        }
    };

} // namespace ccs
