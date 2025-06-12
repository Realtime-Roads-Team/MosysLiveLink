// Copyright 2023 Mo-Sys Engineering. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"

#include "FLensSetup.generated.h"

struct LensSetup;
struct LensFileDescription;

USTRUCT(BlueprintType)
struct FLensFileDescription
{
    GENERATED_USTRUCT_BODY()

    FLensFileDescription() = default;
    FLensFileDescription(const FLensFileDescription&) = default;

    /**
        * Conversion function follow: Convert tounderlying plain C++ class.
    */

    FLensFileDescription(const LensFileDescription & in);


    operator LensFileDescription ()  const;

    /**
    *   Standard unreal properties follow.
    */
    
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    FString LensModel;
    
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    FString LensManufacturer;
    
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    FString LensSerialNumber;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    FString LensType;
    
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    FString CameraManufacturer;
    
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    FString CameraModel;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    FString CameraMode;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    FString AspectRatio;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    FString CameraSerialNumber;
    
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    FString ShortDescription;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    FString Comments;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    FString Extender;

};

/**
 * 
 */
USTRUCT(BlueprintType)
struct FLensSetup 
{
    GENERATED_USTRUCT_BODY()

    FLensSetup() = default;
    FLensSetup(const FLensSetup&) = default;

    /**
     * Conversion function follow: Convert tounderlying plain C++ class.
    */

    FLensSetup(const LensSetup & in);


    operator LensSetup ()  const;

    /**
    *   Standard unreal properties follow.
    */
    
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    float UndistFxScale = 1;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    float UndistFxOffset = 0;
    
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    float DistFxScale = 1;
    
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    float DistFxOffset = 0;
    
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    float CxScale = 1;
    
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    float CyScale = 1;
    
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    float CxOffset = 0;
    
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    float CyOffset = 0;
    
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    float CxSlope = 0;
    
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    float CySlope = 0;
    
    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    float EPDOffset = 0;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    float EPDScale = 1;

    UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Lens Calibration")
    FLensFileDescription Description;
};
