// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Roles/LiveLinkTransformTypes.h"

#include "MoSysLensModel.h"
#include "MoSysTimecodeWrapper.h"

#include "MoSysTrackingTypes.generated.h"

/**
 * Enum of the different modes for a source that Mo-Sys supports.
 */
enum class EMoSysSourceMode : uint8
{
    UDPMode,
    SerialMode,
    AudioDemodMode,
    Invalid,
};

/**
 * A Struct to handle converting a source mode from a string to an enum. Needed
 * to load the correct source mode used in the source factory.
 * @warning to add another source mode, a const string expression must be made
 * and must be added in ToString and ToEnum functions.
 */
struct FMoSysSourceMode
{
    FMoSysSourceMode() = default;
    FMoSysSourceMode(const EMoSysSourceMode InMode) : Mode(InMode) {}

    const FString UDPMode = "UDP Mode";
    const FString SerialMode = "Serial Gateway Mode";
    const FString AudioDemodMode = "Audio Demod Mode";

    EMoSysSourceMode Mode = EMoSysSourceMode::UDPMode;

    FString ToString()
    {
        FString Result = UDPMode;
        switch (Mode)
        {
        case EMoSysSourceMode::UDPMode:
            Result = UDPMode;
            break;
        case EMoSysSourceMode::SerialMode:
            Result = SerialMode;
            break;
        case EMoSysSourceMode::AudioDemodMode:
            Result = AudioDemodMode;
            break;
        }
        return Result;
    }

    EMoSysSourceMode GetEnum(FString InMode)
    {
        if (InMode == UDPMode)
        {
            return EMoSysSourceMode::UDPMode;
        }
        else if (InMode == SerialMode)
        {
            return EMoSysSourceMode::SerialMode;
        }
        else if (InMode == AudioDemodMode)
        {
            return EMoSysSourceMode::AudioDemodMode;
        }
        return EMoSysSourceMode::Invalid;
    }
};

UENUM()
enum class EMoSysTrackingStatus : uint8
{
    Undefined UMETA(DisplayName = "Undefined"),
    Tracking UMETA(DisplayName = "Tracking"),
    OpticalGood UMETA(DisplayName = "Optical Good"),
    OpticalAcceptable UMETA(DisplayName = "Optical Acceptable"),
    OpticalUnreliable UMETA(DisplayName = "Optical Unreliable"),
    OpticalUnstable UMETA(DisplayName = "Optical Unstable"),
    OpticalLost UMETA(DisplayName = "Optical Lost"),
    LostTooFewStars UMETA(DisplayName = "Lost Too Few Stars"),
    Searching UMETA(DisplayName = "Searching"),
    BusyOrWaiting UMETA(DisplayName = "Busy Or Waiting"),
    BusyLoadingMap UMETA(DisplayName = "Busy Loading Map"),
    NoMapLoaded UMETA(DisplayName = "No Map Loaded"),
    TestSignal UMETA(DisplayName = "Test Signal"),
    MechEncOnly UMETA(DisplayName = "Mech Enc Only"),
    IOError UMETA(DisplayName = "IO Error"),
    Waiting UMETA(DisplayName = "Waiting"),
    /* 
    *Currently, a StrarTracker device advertises the service when the host OS is initialising
    * therefore before the actual StrarTracker system is running. So this state is represented
    * by the LoadingSystem
    */
    LoadingSystem UMETA(DisplayName = "Loading System"),
    InternalError UMETA(DisplayName = "Internal Error")
};

UENUM(BlueprintType)
enum class EMoSysExtenderSettings : uint8
{
    notAvailable UMETA(DisplayName = "Not Available") //Extender not available.
    , unknown UMETA(DisplayName = "Unknown")// Extender valid, but if not 1x, exact multiplier unknown.
    , x0_8 UMETA(DisplayName = "x0.8")
    , x1_2 UMETA(DisplayName = "x1.2")
    , x1_4 UMETA(DisplayName = "x1.4")
    , x1_5 UMETA(DisplayName = "x1.5")
    , x1_6 UMETA(DisplayName = "x1.6")
    , x2_0 UMETA(DisplayName = "x2.0")
};

USTRUCT(BlueprintType)
struct MOSYSTRACKING_API FLiveLinkMoSysStaticData : public FLiveLinkTransformStaticData
{
    GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct MOSYSTRACKING_API FLiveLinkMoSysFrameData : public FLiveLinkTransformFrameData
{
    GENERATED_BODY()

    UPROPERTY(Interp, VisibleAnywhere, BlueprintReadOnly, Category = "Mo-Sys|Tracking")
    FMoSysLensParameters Lens;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mo-Sys|Tracking")
    EMoSysTrackingStatus TrackingStatus;

    UPROPERTY(Interp, VisibleAnywhere, BlueprintReadOnly, Category = "Mo-Sys|Tracking")
    int32 RawFocus = 0;

    UPROPERTY(Interp, VisibleAnywhere, BlueprintReadOnly, Category = "Mo-Sys|Tracking")
    int32 RawZoom = 0;

    UPROPERTY(Interp, VisibleAnywhere, BlueprintReadOnly, Category = "Mo-Sys|Tracking")
    int32 RawIris = 0;

    UPROPERTY(Interp, VisibleAnywhere, BlueprintReadOnly, Category = "Mo-Sys|Tracking")
    FMoSysTimecodeWrapper Timecode;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mo-Sys|Tracking")
    int32 CameraID;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mo-Sys|Tracking")
    int32 FrameProgressiveCounter = 0;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mo-Sys|Tracking")
    EMoSysExtenderSettings LensExtender;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mo-Sys|Tracking")
    int32 RawEncoder;
};
