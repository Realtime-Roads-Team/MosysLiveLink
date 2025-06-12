// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "Models/LensModel.h"
#include "mosys-cpp/lens/LensParameters.h"

#include "MoSysLensModel.generated.h"

/**
 * Mo-Sys lens distortion parameters
 * Full documentation is found in the F4 protocol documentation
 */
USTRUCT(BlueprintType)
struct MOSYSLENSDISTORTION_API FMoSysLensParameters
{
    GENERATED_USTRUCT_BODY()

    FMoSysLensParameters() = default;
    FMoSysLensParameters(const FMoSysLensParameters&) = default;
    FMoSysLensParameters(const LensParameters &in)
        : FxVirtualCamera(in.undistortedFx)
        , FyVirtualCamera(in.virtualCameraFy)
        , FxDistorted(in.distortedFx)
        , FyDistorted(in.distortedFy)
        , K1(in.K1)
        , K2(in.K2)
        , PrincipalPoint_cx(in.cx)
        , PrincipalPoint_cy(in.cy)
        , EntrancePupilDistance(in.entrancePupil)
        , RecipFocalDistance(in.recipFocalDistance)
        , Aperture(in.aperture)
        , IsTStops(in.isTStops ? 1.f : 0.f)
        , HasData(in.hasData ? 1.f : 0.f)
        , ZoomOffset(in.zoomOffset)
        , FocusOffset(in.focusOffset)
        , IsP1P2Valid(in.P1P2Valid)
    {}
    
    /**
    * Conversion for LensParameters Struct
    */
    operator LensParameters () const 
    {
        LensParameters out;
        out.undistortedFx = FxVirtualCamera;
        out.virtualCameraFy = FyVirtualCamera;
        out.entrancePupil = EntrancePupilDistance;
        out.K1 = K1;
        out.K2 = K2;
        out.K3 = K3;
        out.K3Valid = (IsK3Valid > 0 ? true : false);
        out.cx = PrincipalPoint_cx;
        out.cy = PrincipalPoint_cy;
        out.distortedFx = FxDistorted;
        out.distortedFy = FyDistorted;
        out.zoomOffset = ZoomOffset;
        out.focusOffset = FocusOffset;
        out.P1P2Valid = (IsP1P2Valid > 0 ? true: false);
        return out;
    }

    // Is in units of pixels in x, assuming 1920x1080 video.
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float FxVirtualCamera = 1920;

    // Is in units of pixels in y, assuming 1920x1080 video.
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float FyVirtualCamera = 1080;

    // Is in units of pixels in x, assuming 1920x1080 video.
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float FxDistorted = 1920;

    // Is in units of pixels in y, assuming 1920x1080 video.
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float FyDistorted = 1080;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float K1 = 0;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float K2 = 0;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float K3 = 0;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float IsK3Valid = 0; // bools must be floats for LensModel

    // Is in units of pixels, assuming 1920x1080 video.
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float PrincipalPoint_cx = 0;

    // Is in units of pixels, assuming 1920x1080 video.
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float PrincipalPoint_cy = 0;

    // "Entrance Pupil Distance" Is synonym for "Point of no parallax" and is commonly but incorrectly referred to as "nodal point"
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float EntrancePupilDistance = 0;

    // Reciprocal of the focal distance in metres (to handle infinity).
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float RecipFocalDistance = 0;

    // Aperture measured in F- or T-stops (defined in IsTStops).
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float Aperture = 0;

    // Is Aperture measured in T-stops (default is F-Stops).
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float IsTStops = 0; // bools must be floats for LensModel

    // True if this structure contains valid data.
    // Otherwise, this structure will default to values least likely to crash program.
    // Note: for K1,K2,,K3 cx,cy, EntracePupilDistance sensible defaults are provided.
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float HasData = 0; // bools must be floats for LensModel

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float ZoomOffset = 0;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float FocusOffset = 0;
    
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
    float IsP1P2Valid = 0;
};


/**
 * Mo-Sys lens model, using Mo-Sys lens distortion parameters
 */
UCLASS(BlueprintType, meta = (DisplayName = "Mo-Sys Lens Model"))
class MOSYSLENSDISTORTION_API UMoSysLensModel : public ULensModel
{
    GENERATED_BODY()

public:
    //~ Begin ULensModel interface
    virtual UScriptStruct* GetParameterStruct() const override;
    virtual FName GetModelName() const override;
    virtual FName GetShortModelName() const override;
    //~ End ULensModel interface
};
