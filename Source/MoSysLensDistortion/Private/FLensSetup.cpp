// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.


#include "FLensSetup.h"
#include "lens/DistortionCoefficientsBuilder.h"


FLensFileDescription::FLensFileDescription(const LensFileDescription & in)
	:LensModel(UTF8_TO_TCHAR(in.lensName.c_str()))
	,LensManufacturer(UTF8_TO_TCHAR(in.lensManufacturer.c_str()))
	,LensSerialNumber(UTF8_TO_TCHAR(in.lensSerialNumber.c_str()))
	,LensType(UTF8_TO_TCHAR(in.lensType.c_str()))
	,CameraManufacturer(UTF8_TO_TCHAR(in.cameraManufacturer.c_str()))
	,CameraModel(UTF8_TO_TCHAR(in.cameraModel.c_str()))
	,CameraMode(UTF8_TO_TCHAR(in.cameraMode.c_str()))
	,AspectRatio(UTF8_TO_TCHAR(in.aspectRatio.c_str()))
	,CameraSerialNumber(UTF8_TO_TCHAR(in.cameraSerialNumber.c_str()))
	,ShortDescription(UTF8_TO_TCHAR(in.shortDescription.c_str()))
	,Comments(UTF8_TO_TCHAR(in.comments.c_str()))
	,Extender(UTF8_TO_TCHAR(in.extender.c_str()))

{



}


FLensFileDescription::operator LensFileDescription ()  const
{
	LensFileDescription LensFileDescriptionTemp;

	LensFileDescriptionTemp.lensName = TCHAR_TO_UTF8(*LensModel);
	LensFileDescriptionTemp.lensManufacturer = TCHAR_TO_UTF8(*LensManufacturer);
	LensFileDescriptionTemp.lensSerialNumber = TCHAR_TO_UTF8(*LensSerialNumber);
	LensFileDescriptionTemp.lensType = TCHAR_TO_UTF8(*LensType);
	LensFileDescriptionTemp.cameraManufacturer = TCHAR_TO_UTF8(*CameraManufacturer);
	LensFileDescriptionTemp.cameraModel = TCHAR_TO_UTF8(*CameraModel);
	LensFileDescriptionTemp.cameraMode = TCHAR_TO_UTF8(*CameraMode);
	LensFileDescriptionTemp.aspectRatio = TCHAR_TO_UTF8(*AspectRatio);
	LensFileDescriptionTemp.cameraSerialNumber = TCHAR_TO_UTF8(*CameraSerialNumber);
	LensFileDescriptionTemp.shortDescription = TCHAR_TO_UTF8(*ShortDescription);
	LensFileDescriptionTemp.comments = TCHAR_TO_UTF8(*Comments);
	LensFileDescriptionTemp.extender = TCHAR_TO_UTF8(*Extender);

	return LensFileDescriptionTemp;
}

FLensSetup::FLensSetup(const LensSetup & in)
	:UndistFxScale(in.undistFxScale)
	,UndistFxOffset(in.undistFxOffset)
	,DistFxScale(in.distFxScale)
	,DistFxOffset(in.distFxOffset)
	,CxScale(in.cxScale)
	,CyScale(in.cyScale)
	,CxOffset(in.cxOffset)
	,CyOffset(in.cyOffset)
	,CxSlope(in.cxSlope)
	,CySlope(in.cySlope)
	,EPDOffset(in.EPDOffset)
	,EPDScale(in.EPDScale)
	,Description(in.description)
{

}


FLensSetup::operator LensSetup ()  const
	{
		LensSetup LensSetupTemp;
		LensSetupTemp.undistFxScale = UndistFxScale;
		LensSetupTemp.undistFxOffset = UndistFxOffset;
		LensSetupTemp.distFxScale = DistFxScale;
		LensSetupTemp.distFxOffset = DistFxOffset;
		LensSetupTemp.cxScale = CxScale;
		LensSetupTemp.cyScale = CyScale;
		LensSetupTemp.cxOffset = CxOffset;
		LensSetupTemp.cyOffset = CyOffset;
		LensSetupTemp.cxSlope = CxSlope;
		LensSetupTemp.cySlope = CySlope;
		LensSetupTemp.EPDOffset = EPDOffset;
		LensSetupTemp.EPDScale = EPDScale;
		LensSetupTemp.description = Description;
		return LensSetupTemp;
	}
