// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once
#include <stdint.h>
#include <string>
#include <mutex>

#include "mosys-cpp/lens/LensParameters.h"
#include <vector>

#include "mosys-cpp/core/Timecode.h"

//Some versions of glibc define major and minor as macros:
// https://sourceware.org/bugzilla/show_bug.cgi?id=19239
//Check if they are defined and undefine them here
#ifdef major
 #undef major
#endif
#ifdef minor
 #undef minor
#endif

/**
* Mo-Sys Tracking API.
* A container class for the MoSysTrackingAPI that enables live camera pose and lens
* tracking with Mo-Sys hardware for virtual production.
*/
namespace mosys
{
    // Forward declarations
    class TrackingPort;
    class IPacketParser;
    class IPacketBuilder;
    namespace tracking {
        struct TrackingFrame;
    }
    namespace extenderSettings
    {
        /*Enumeration specifying position of lens encoder*/
        enum class e
        {
            notAvailable = 0 //Extender not available.
            , unknown = 1// Extender valid, but if not 1x, exact multiplier unknown.
            , x0_8 = 2
            , x1_2 = 3
            , x1_4 = 4
            , x1_5 = 5
            , x1_6 = 6
            , x2_0 = 7
        };
    }

    /**
    * Mo-Sys Tracking API version.
    * Retrieves the version and build number string of the api.
    *
    * @param version the version string
    * @return true if the version string is available
    */
    bool GetVersion(std::string &version);

    /**
     * Attempt to unlock additional features using a key that can be gotten from Catena
     *
     * @key key A key that will
     * @return true if the key was valid and extra features have been unlocked
     */
    bool UnlockWithTrackingKey(const std::string& key);

    /**
    * 3-Vector.
    * A helper struct for holding a 3-vector for position or rotation data
    */
    struct Vector3
    {
        Vector3() : x(0.0), y(0.0), z(0.0) {}
        Vector3(float fx, float fy, float fz) : x(fx), y(fy), z(fz) {}
        float x;
        float y;
        float z;
        bool operator==(const Vector3& v);
        Vector3 operator*(float f);
        Vector3 operator+(const Vector3 &v);
    };

    struct RotatorEuler
    {
        RotatorEuler() : yaw(0.0), pitch(0.0), roll(0.0) {}
        RotatorEuler(float fYaw, float fPitch, float fRoll) : yaw(fYaw), pitch(fPitch), roll(fRoll) {}
        float yaw;
        float pitch;
        float roll;
        bool operator==(const RotatorEuler& v);
    };

    /**
    * Tracking container class.
    * This is a container class for handling data from Mo-Sys camera tracking systems for virtual production.
    */
    namespace tracking
    {
        enum class StatusSummary
        {
            Undefined = 0,
            Green,
            Orange,
            Red
        };

        struct TrackingStatus
        {
            TrackingStatus() : version(0), summary(StatusSummary::Undefined), detail(0) {}
            TrackingStatus(unsigned short data);
            unsigned char toData() const;

            unsigned short version;
            StatusSummary summary;
            unsigned short detail;

            void detailString(std::string &statusDetail);
            bool operator==(const TrackingStatus& other);
        };

        /**
        * Settings to control how tracking frame is used by internal functions.
        */
        struct TrackingFrameSettings
        {
            typedef unsigned char AxisId;

            /**
            * Add F4 axes IDs to enable Translation, Rotation and Timecode to be sent.
            */
            bool addDefaultAxes();

            /**
            * Add F4 axes IDs to enable raw Focus, Iris and Zoom values to be sent.
            */
            bool addFIZAxes();

            /**
            * The axis with this ID is configured to be sent by WriteWorker and Transmitter once added.
            */
            bool addAxis(unsigned char id);
            TrackingFrameSettings();

            static const size_t MaxAxes = 256;
            AxisId axes[MaxAxes];
            size_t axesCount;
        };

        /**
         * The software version is represented by 2 number using a major and
         * minor version number in the format major.minor. The software build
         * date is coded in BCD format where each decimal digit is represented
         * by a nibble.
         */
        struct BuildInfo
        {
            BuildInfo() : major(0), minor(0), buildDate(0) {}
            uint16_t major;
            uint16_t minor;
            uint32_t buildDate;
            bool operator==(const BuildInfo& other)
            {
                return
                    major == other.major &&
                    minor == other.minor &&
                    buildDate == other.buildDate;
            }
        };

        /**
         * The FieldDelay denotes the count of fields after Genlock in which
         * the F4 packet starts transmission. A value of 0 means the F4 packet
         * started transmission within the same field as the Genlock pulse. A
         * value of 1 means the F4 packet starts transmission in the field
         * following the Genlock pulse. If a field delay > 0 is specified, then all
         * axes are delayed by the same period.
         * The DataCollisionCounter increments each time duplicate axis data
         * is received from the sensors within the same field. It is usually an
         * indication that 2 sensor modules are both delivering the same data
         * and therefore can overwrite each other. The counter wraps modulo
         * 256.
         */
        struct AxisDataInfo
        {
            AxisDataInfo() : fieldDelay(0), dataCollisionCounter(0), dataCollisionID(0), networkFaultCounter(0) {}
            uint8_t fieldDelay;
            uint8_t dataCollisionCounter;
            uint8_t dataCollisionID;
            uint8_t networkFaultCounter;
            bool operator==(const AxisDataInfo& other)
            {
                return
                    fieldDelay == other.fieldDelay &&
                    dataCollisionCounter == other.dataCollisionCounter &&
                    dataCollisionID == other.dataCollisionID &&
                    networkFaultCounter == other.networkFaultCounter;
            }
        };



        /**
         * The timing information in this field is useful to verify how close the
         * last sensor data packet arrived in relation to the F4 packet
         * transmission time. If a network fault has been indicated, the last
         * sensor data packet to arrive is a likely candidate for the problem.
         */
        struct PacketTimingInfo
        {
            PacketTimingInfo() : lastSensorPacketTimestamp(0), f4PacketTransmissionTimestamp(0) {}
            uint16_t lastSensorPacketTimestamp;
            uint16_t f4PacketTransmissionTimestamp;
            bool operator==(const PacketTimingInfo& other)
            {
                return
                    lastSensorPacketTimestamp == other.lastSensorPacketTimestamp &&
                    f4PacketTransmissionTimestamp == other.f4PacketTransmissionTimestamp;
            }
        };

        /**
         * The Genlock timestamp indicates when the Genlock pulse was
         * detected by the gateway. Discontinuities or excessive jitter in this
         * timing is an indication of a poor Genlock source or a gateway
         * hardware fault.
         */
        struct GenlockInfo
        {
            GenlockInfo() : timestamp(0), counter(0) {}
            uint16_t timestamp;
            uint16_t counter;
            bool operator==(const GenlockInfo& other)
            {
                return
                    timestamp == other.timestamp &&
                    counter == other.counter;
            }
        };

    
        /**
         * An incrementing bus off counter usually indicates a faulty
         * cable or faulty module. The user should swap out both to determine
         * which piece of hardware is at fault. The error warning bit is set if
         * the gateway has detected communications problems on the
         * network, but has safely resolved them. The error warning bit is an
         * indication that a bus off may occur soon.
         */
        struct NetworkStatusInfo
        {
            NetworkStatusInfo() : networkFlags(0), busOffCounterBits(0), lastMissedNetworkID(0) {}
            enum class Flag
            {
                ERROR_WARNING = 1
            };
            uint8_t networkFlags;
            uint16_t busOffCounterBits;
            uint8_t lastMissedNetworkID;
            bool operator==(const NetworkStatusInfo& other)
            {
                return
                    networkFlags == other.networkFlags &&
                    busOffCounterBits == other.busOffCounterBits &&
                    lastMissedNetworkID == other.lastMissedNetworkID;
            }
        }; 

        /**
         * Camera tracking data.
         * A container for camera pose tracking data that is sent by Mo-Sys hardware.
         *
         * NOTE: With the current API, a user cannot observe the presence/absence of fields.
         * This will change in a future version of the API and likely fields will be represented as a map.
         */
        struct TrackingFrame
        {
            TrackingFrameSettings settings;

            uint32_t cameraID;

            /** Camera pose rotation in degrees as a 3-vector about axis x, y, z
             * Must be between -180 and 180 degrees with a resolution of 1/1000 degree. */
            RotatorEuler rotation;

            /** Camera pan in degrees
             * Must be between -180 and 180 degrees with a resolution of 1/1000 degree. */
            float cranePan;

            /** Camera tilt in degrees
             * Must be between -180 and 180 degrees with a resolution of 1/1000 degree. */
            float craneTilt;

            /** Camera pose translation in cm as a 3-vector
             * Must be between -83886 and 83885 mm with a resolution of 1 / 100 mm. */
            Vector3 translation;

            /** Frame number from Mo-Sys hardware modulus 16 */
            unsigned short frameProgressiveCounter;

            /**
             * Raw focus value.
             * Raw 16-bit value from focus ring or digital encoder. Value is normalised so one
             * end-stop is at 0 and the other is 65535.
             *
             * @see zoomVal, irisVal
             */
            uint16_t focusVal;

            /**
             * Raw zoom value.
             * Raw 16-bit value from zoom ring or digital encoder. Value is normalised so one
             * end-stop is at 0 and the other is 65535.
             *
             * @see focusVal, irisVal
             */
            uint16_t zoomVal;

            /**
             * Raw iris value.
             * Raw 16-bit value from iris ring or digital encoder. Value is normalised so one
             * end-stop is at 0 and the other is 65535.
             *
             * @see focusVal, zoomVal
             */
            uint16_t irisVal;

            /**
             * Lens distortion data.
             *
             * @see LensData
             */
            LensParameters lens;

            /*Enum specifying extender status of the lens */
            extenderSettings::e lensExtender;

            /** Must be between -180 and 180 degrees with a resolution of 1/1000 degree. */
            float turnTableRotation;
            float dollyCranePosition;
            float generalOrientationCoord;
            uint16_t digiLensFocus;
            uint16_t digiLensZoom;
            uint16_t digiLensIris;
            float xString;
            float yString;
            float headY;
            float headZ;
            float rawPan;
            float rawTilt;
            float rawRoll;
            float rawJib;
            float rawTurn;
            float rawTrack;
            float rawTele;
            float rawElev;
            BuildInfo buildInfo;
            AxisDataInfo axisDataInfo;
            NetworkStatusInfo networkInfo;
            PacketTimingInfo packetTimingInfo;
            GenlockInfo genlockInfo;
            uint32_t startrackerID;
            int32_t rawEncoder;

            /**
            * Timecode for this frame.
            */
            Timecode timecode;
            /**
             * Tracking status for this frame
             *
             * @see TrackingStatus
             */
            TrackingStatus status;

             /** True if Mo-Sys hardware is recording */
            bool recording;

            /** True if Mo-Sys hardware is genlocked */
            bool genlocked;

            /** True if Mo-Sys hardware is using the odd field in an interlaced system */
            bool oddField;

            /**
             * Construct a TrackingFrame with default values.
             */
            TrackingFrame();

            /**
            * Contruct a TrackingFrame from another TrackingFrame.
            */
            TrackingFrame(const TrackingFrame& other);

            /**
             * Construct a TrackingFrame from some commonly required types.
             *
             * @param translation Translation for this frame
             * @param rotation Rotation for this frame
             * @param timecode Timecode for this frame
             * @param frameProgressiveCounter Frame progress counter is modulo 16
             */
            void initialise(const Vector3& translation, const RotatorEuler& rotation, const Timecode& timecode, unsigned long long frameProgressiveCounter);

            /**
            * Insert raw focus, iris and zoom values into a TrackingFrame
            *
            * @param focus Focus encoder value for this frame (0-65535)
            * @param zoom Zoom encoder value for this frame (0-65535)
            * @param iris Iris encoder value for this frame (0-65535)
            */
            void insertFIZValues(const uint16_t focus, const uint16_t zoom = 0, const uint16_t iris = 0);

            size_t getSize() const;

            bool operator==(const TrackingFrame& other);
            bool operator!=(const TrackingFrame& other); // For C++17 compliance

            private:
                void reset();
                bool lensParamEqual(const LensParameters &first, const LensParameters &other);
        };

        /**
         * \brief Tracking protocol.
         *
         * \todo Currently only F4 protocol is supported. But Mo-Sys hardware can be configured to
         * use other protocols.
         */
        enum class Protocol
        {
            F4 = 0,
            TrackerLite = 1,
            OpenTrackIO = 2
        };

        /**
         * Helper function to parse a .f4 file into a std::vector
         */
        bool parseF4File(const char* path, std::vector<TrackingFrame>& frames, std::string& errorMessage);
 
        class MoCapDataFuser
        {
        public:
            /**
            * Correct the drift in a motion capture suit with a StarTracker.
            *
            * @param usingTrackingStatus whether to use tracking status to get the corrected pose
            * @param trackingStatus current tracking status from Mo-Sys live link.
            * @param ghostLocation the location of the MoCap ghost.
            * @param mocapRootLocation the root location of the MoCap actor.
            * @param mocapSocketLocation the location of the MoCap actor.
            * @param correctionRatio correction ratio between 0 and 1.
            * @return Vector3 of the corrected position for the MoCap actor.
            */
            Vector3 getCorrectPose(const bool usingTrackingStatus, const int trackingStatus, Vector3 ghostLocation,
                const Vector3 mocapRootLocation, const Vector3 mocapSocketLocation, const float correctionRatio);
        private:
            /* Internal use only */
            mosys::Vector3 m_lastReading;
        };
    }; // namespace tracking
}; // namespace mosys

#if 0
extern "C"
{
	/// \todo We should consider making a tracking frame C-friendly - i.e. remove operators etc. Then we wouldn't need this struct.
    // Note does not yet support anamorphic parameters (this would require work in Unity)
	// Ref: https://docs.microsoft.com/en-us/dotnet/framework/interop/marshaling-classes-structures-and-unions?redirectedfrom=MSDN
	struct MSTSimpleTrackingFrame
	{
		float x, y, z;
		float roll, pitch, yaw;
		uint16_t focus, zoom, iris;
		float epd, k1, k2, distortedFx, undistortedFx, virtualFx, cx, cy, recipFd, aperture;
		uint16_t h, m, s, f, fpsn, fpsd;
		uint16_t status;
	};

	MOSYS_C_API float MSTTestDLL(float test);
	MOSYS_C_API bool MSTGetVersion(char *version, size_t size);
	MOSYS_C_API bool MSTConnectTracking(const char *ipAddress, int port);
	MOSYS_C_API bool MSTGetTrackingFrame(MSTSimpleTrackingFrame *frame);
	MOSYS_C_API void MSTDisconnectTracking();
}
#endif
