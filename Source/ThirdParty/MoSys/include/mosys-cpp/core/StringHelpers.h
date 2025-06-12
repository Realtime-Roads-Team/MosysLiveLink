// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once
#include <sstream>
#include <iomanip>

// TODO: should this be in public header
namespace mosys
{
    namespace helper
    {
        namespace string
        {
            inline std::string toString(const mosys::Vector3& vector)
            {
                std::ostringstream os;

                os << "{ ";
                os << "x: " << vector.x << ", ";
                os << "y: " << vector.y << ", ";
                os << "z: " << vector.z;
                os << " }";

                return os.str();
            }

            inline std::string toString(const mosys::RotatorEuler& vector)
            {
                std::ostringstream os;

                os << "{ ";
                os << "yaw: " << vector.yaw << ", ";
                os << "pitch: " << vector.pitch << ", ";
                os << "roll: " << vector.roll;
                os << " }";

                return os.str();
            }

            inline std::string toString(const mosys::tracking::TrackingFrameSettings& trackingFrameSettings)
            {
                std::ostringstream os;

                os << "{ ";
                os << "axes: { ";

                size_t size = trackingFrameSettings.axesCount;
                for (size_t i = 0; i < size; i++)
                {
                    os << "0x" << std::setfill('0') << std::setw(2) << std::hex << (unsigned int)trackingFrameSettings.axes[i];
                    if (i++ != size - 1)
                    {
                        os << ", ";
                    }
                }
                os << " }";
                os << " }";

                return os.str();
            }

            inline std::string toString(const mosys::tracking::TrackingStatus& trackingStatus)
            {
                std::ostringstream os;

                os << "{ ";
                os << "version: " << trackingStatus.version << ", ";
                // TODO use detailString()
                os << "detail: " << std::hex << trackingStatus.detail << ", ";
                std::string summaryStr = "";
                switch (trackingStatus.summary)
                {
                case mosys::tracking::StatusSummary::Green:
                    summaryStr = "Green";
                    break;
                case mosys::tracking::StatusSummary::Orange:
                    summaryStr = "Orange";
                    break;
                case mosys::tracking::StatusSummary::Red:
                    summaryStr = "Red";
                    break;
                case mosys::tracking::StatusSummary::Undefined:
                    summaryStr = "Undefined";
                    break;
                }
                os << "summary: " << summaryStr;
                os << " }";

                return os.str();
            }

            inline std::string toString(const LensParameters& lensData)
            {
                std::ostringstream os;

                os << "{ ";
                os << "hasData: " << std::boolalpha << lensData.hasData << ", ";
                os << "entrancePupil: " << lensData.entrancePupil << ", ";
                os << "K1: " << lensData.K1 << ", ";
                os << "K2: " << lensData.K2 << ", ";
                os << "distortedFx: " << lensData.distortedFx << ", ";
                os << "distortedFy: " << lensData.distortedFy << ", ";
                os << "cx: " << lensData.cx << ", ";
                os << "cy: " << lensData.cy << ", ";
                os << "virtualCameraFx: " << lensData.virtualCameraFx << ", ";
                os << "virtualCameraFy: " << lensData.virtualCameraFy << ", ";
                os << "recipFocalDistance: " << lensData.recipFocalDistance << ", ";
                os << " }";

                return os.str();
            }

            inline std::string toString(const mosys::tracking::TrackingFrame& trackingFrame)
            {
                std::ostringstream os;

                os << "{ ";
                os << "cameraID: " << trackingFrame.cameraID << ", ";
                os << "rotation: " << toString(trackingFrame.rotation) << ", ";
                os << "translation: " << toString(trackingFrame.translation) << ", ";
                os << "frameNumber: " << trackingFrame.frameProgressiveCounter << ", ";
                os << "focusVal: " << trackingFrame.focusVal << ", ";
                os << "zoomVal: " << trackingFrame.zoomVal << ", ";
                os << "lens: " << toString(trackingFrame.lens) << ", ";
                os << "lensExtender:" << (unsigned int)trackingFrame.lensExtender << ", ";
                // os << "lens: " << lens << ", "; // TODO
                std::string tc;
                trackingFrame.timecode.toString(tc);
                os << "timecode: " << tc << ", ";
                os << "recording: " << std::boolalpha << trackingFrame.recording << ", ";
                os << "genlocked: " << std::boolalpha << trackingFrame.genlocked << ", ";
                os << "oddField: " << std::boolalpha << trackingFrame.oddField << ", ";
                os << "status: " << toString(trackingFrame.status) << ", ";
                os << "settings: " << toString(trackingFrame.settings);
                os << " }";

                return os.str();
            }

            inline std::string toString(const mosys::FrameRate& frameRate)
            {
                std::ostringstream os;
                os << std::fixed;
                int precision = 2;
                if (((uint32_t)(frameRate.asDouble() * 1000) % 10) != 0)
                {
                    // 23.976 has an extra digit
                    precision = 3;
                }
                os << std::setprecision(precision);
                os << frameRate.asDouble();

                return os.str();
            }
        } // namespace string
    }  // namespace helper
} // namespace mosys