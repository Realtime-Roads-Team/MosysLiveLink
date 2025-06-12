// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

/**
 * Lens distortion data.
 * A container for lens distortion data that is sent by Mo-Sys hardware. It uses the OpenCV
 * model for lens distortion.
 */
struct LensParameters
{
    /**
     * Has lens distortion data. Provided for convenience. Is true when the distortion
     * parameters have been set by Mo-Sys hardware. Otherwise sensible defaults will be set
     * to prevent usage issues.
     */
    bool hasData = false;

    /**
     * Distorted field of view in pixels in x.
     * Assuming 1920x1080 video.
     */
    float distortedFx = 1920.0f;

    /**
     * Distorted field of view in pixels in y.
     * Assuming 1920x1080 video.
     */
    float distortedFy = 1080.0f;

    /**
     * Undistorted field of view in pixels
     */
    float undistortedFx = 1920.0f;

    /**
     * Entrance Pupil Distance.
     * This lens distortion parameter is a synonym for "Point of no parallax" and is commonly
     * referred to as the "nodal point"
     */
    float entrancePupil = 0.0f;

    /** 
     * Lens distortion parameter K1 
     */
    float K1 = 0.0f;

    /** 
     * Lens distortion parameter K2 
     */
    float K2 = 0.0f;

    /** 
     * Lens distortion parameter K3 
     */
    float K3 = 0.0f;
    
    /**
     * Tangential lens distortion parameter P1
     */
    float P1 = 0.0f;

    /**
     * Tangential lens distortion parameter P2
     */
    float P2 = 0.0f;

    /** 
     * Principal point centre x 
     */
    float cx = 0.0f;

    /** 
     * Principal point centre y 
     */
    float cy = 0.0f;

    /**
     * Distorted field of view in pixels in x.
     * Assuming 1920x1080 video.
     */
    float virtualCameraFx = 1920.0f;

    /**
     * Distorted field of view in pixels in y.
     * Assuming 1920x1080 video.
     */
    float virtualCameraFy = 1080.0f;

    /** 
     * Reciprocal of the focal distance in metres (to handle infinity). 
     */
    float recipFocalDistance = 0.0f;

    /**
     * Aperture measured in F- or T-stops (defined in isTStops). Defaults to F4.0 (mid-aperture for most lenses)
     */
    float aperture = 4.0f;

    /**
     * Is Aperture measured in T-stops (default is F-Stops)
     */
    bool isTStops = false;

    /** 
     * Zoom offset from control point 
     */
    float zoomOffset = 0.0f;

    /** 
     * Focus offset from control point 
     */
    float focusOffset = 0.0f;

    float nearestFocus = 0.0f;
    float nearestZoom = 0.0f;

    float panOffset = 0.0f;
	float tiltOffset = 0.0f;
	float rollOffset = 0.0f;
	float tpRightOffset = 0.0f;
	float tpUpOffset = 0.0f;

    /** 
     * Is K3 valid in lens file
     */
    bool K3Valid = false;

    /** 
     * Is P1 and P2 valid in lens file
     */
    bool P1P2Valid = false;

    /** 
     * Is ST Offset valid in lens file
     */
    bool STOffsetsValid = false;

    /** 
     * Is Focal Distance valid in lens file
     */
    bool focalDistValid = false;

    /**
     * Is Aperture valid in lens file
     */
    bool apertureValid = false;
};
