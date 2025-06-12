// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Misc/Timecode.h"

#include "MoSysTimecodeWrapper.generated.h"

/**
 * Slate widget friendly wrapper of native Unreal FTimecode.
 * This is required as FTimecode is not a UStruct, nor are its
 * member properties UPROPERTY, which causes a crash when attempting
 * to render the native FTimecode struct in a slate details view like is done
 * with the FLiveLinkMoSysFrameData.
 */
USTRUCT(BlueprintType)
struct FMoSysTimecodeWrapper
{
    GENERATED_BODY()

    FMoSysTimecodeWrapper() = default;
    ~FMoSysTimecodeWrapper() = default;

    explicit FMoSysTimecodeWrapper(const FTimecode& Timecode)
    {
        Hours = Timecode.Hours;
        Minutes = Timecode.Minutes;
        Seconds = Timecode.Seconds;
        Frames = Timecode.Frames;
        Subframe = Timecode.Subframe;
        bDropFrameFormat = Timecode.bDropFrameFormat;
        m_UnderlyingTimecode = Timecode;
    }

    FMoSysTimecodeWrapper& operator=(const FTimecode& Timecode)
    {
        Hours = Timecode.Hours;
        Minutes = Timecode.Minutes;
        Seconds = Timecode.Seconds;
        Frames = Timecode.Frames;
        Subframe = Timecode.Subframe;
        bDropFrameFormat = Timecode.bDropFrameFormat;
        m_UnderlyingTimecode = Timecode;

        return *this;
    }

    operator FTimecode() const
    {
        return m_UnderlyingTimecode;
    }

    FString ToString() const { return m_UnderlyingTimecode.ToString(); }

    UPROPERTY(Interp, VisibleAnywhere, BlueprintReadWrite, Category = "Mo-Sys|Tracking")
    int32 Hours = 0;

    UPROPERTY(Interp, VisibleAnywhere, BlueprintReadWrite, Category = "Mo-Sys|Tracking")
    int32 Minutes = 0;

    UPROPERTY(Interp, VisibleAnywhere, BlueprintReadWrite, Category = "Mo-Sys|Tracking")
    int32 Seconds = 0;

    UPROPERTY(Interp, VisibleAnywhere, BlueprintReadWrite, Category = "Mo-Sys|Tracking")
    int32 Frames = 0;

    UPROPERTY(Interp, VisibleAnywhere, BlueprintReadWrite, Category = "Mo-Sys|Tracking")
    float Subframe = 0;

    UPROPERTY(Interp, VisibleAnywhere, BlueprintReadWrite, Category = "Mo-Sys|Tracking")
    bool bDropFrameFormat = false;

private:
    FTimecode m_UnderlyingTimecode;
};
