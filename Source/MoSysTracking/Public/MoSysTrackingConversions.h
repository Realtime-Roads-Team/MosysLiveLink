// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "MoSysTrackingTypes.h"
#include "tracking/TrackingTypes.h"
#include "Misc/App.h"

class MoSysTrackingConversions
{
public:
    static FVector MoSys2UnrealPos(mosys::Vector3 pos)
    {
        return FVector(pos.y, pos.x, pos.z);
    }
    static FRotator MoSys2UnrealRot(mosys::RotatorEuler rot)
    {
        return FRotator(rot.pitch, -rot.yaw, rot.roll);
    }
    static FTimecode MoSys2UnrealTimecode(mosys::Timecode timecode)
    {
        return FTimecode(timecode.hours, timecode.minutes, timecode.seconds, timecode.frames, timecode.getRate().isDropFrame());
    }
    static FFrameRate MoSys2UnrealFrameRate(mosys::FrameRate frameRate)
    {
        return FFrameRate(frameRate.getNumerator(), frameRate.getDenominator());
    }
    static FString MoSys2UnrealTrackingStatusString(int status)
    {
        EMoSysTrackingStatus TrackingStatus = EMoSysTrackingStatus::Undefined;
        TrackingStatus = MoSys2UnrealTrackingStatus(status);
        return UEnum2TrackingStatusString(TrackingStatus);
    }
    static EMoSysTrackingStatus MoSys2UnrealTrackingStatus(int status)
    {
        if (status < 0 || status > (int)EMoSysTrackingStatus::InternalError)
        {
            return EMoSysTrackingStatus::Undefined;
        }
        return (EMoSysTrackingStatus)status;
    }
    static FString UEnum2TrackingStatusString(EMoSysTrackingStatus TrackingStatus)
    {
        if (!GIsSavingPackage && !IsGarbageCollecting())
        {
            return UEnum::GetDisplayValueAsText(TrackingStatus).ToString();
        }
        return FString("Invalid");
    }
    static FLiveLinkMoSysFrameData MoSys2UnrealFrameData(mosys::tracking::TrackingFrame frame)
    {
        FLiveLinkMoSysFrameData FrameData;
        FrameData.Transform = FTransform(
            MoSysTrackingConversions::MoSys2UnrealRot(frame.rotation),
            MoSysTrackingConversions::MoSys2UnrealPos(frame.translation)
        );
        FrameData.Lens = FMoSysLensParameters(frame.lens);
        FrameData.TrackingStatus = MoSysTrackingConversions::MoSys2UnrealTrackingStatus((int)frame.status.detail);
        FrameData.RawFocus = frame.focusVal;
        FrameData.RawZoom = frame.zoomVal;
        FrameData.RawIris = frame.irisVal;
        if (frame.timecode.getRate().isValid())
        {
            FrameData.MetaData.SceneTime = FQualifiedFrameTime(MoSysTrackingConversions::MoSys2UnrealTimecode(frame.timecode),
                MoSysTrackingConversions::MoSys2UnrealFrameRate(frame.timecode.getRate()));
            FrameData.Timecode = MoSysTrackingConversions::MoSys2UnrealTimecode(frame.timecode);
        }

        FrameData.CameraID = frame.cameraID;
        FrameData.FrameProgressiveCounter = frame.frameProgressiveCounter;
        FrameData.LensExtender = (EMoSysExtenderSettings)frame.lensExtender;
        FrameData.RawEncoder = frame.rawEncoder;
        return FrameData;
    }

    static mosys::Vector3 Unreal2MoSysPos(FVector pos)
    {
        return mosys::Vector3(pos.Y, pos.X, pos.Z);
    }
    static mosys::RotatorEuler Unreal2MoSysRot(FRotator rot)
    {
        return mosys::RotatorEuler(-rot.Yaw, rot.Pitch, rot.Roll);
    }
    static mosys::Timecode Unreal2MoSysTimecode(FTimecode Timecode)
    {
        return mosys::Timecode(Timecode.Hours, Timecode.Minutes, Timecode.Seconds, Timecode.Frames, Unreal2MoSysFrameRate(FApp::GetTimecodeFrameRate()));
    }
    static mosys::FrameRate Unreal2MoSysFrameRate(FFrameRate Rate)
    {
        return mosys::FrameRate(Rate.Numerator, Rate.Denominator);
    }
};
