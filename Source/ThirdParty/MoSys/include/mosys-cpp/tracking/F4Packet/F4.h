// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
//*****************************************************************************
// F4.h
//
// F4 Protocol
//
//*****************************************************************************
// 2010-02-01 Luc Kennedy-Lamb, First version.
//*****************************************************************************

#ifndef __F4_H__
#define __F4_H__



//*****************************************************************************
// DEFINES
//*****************************************************************************
// Identification and parameters of Mo-sys proprietary Protocol
#define MSG_MOD_EX_POS4            0xF4
#define CAM_ID_OFFSET            1      // Pos Camera Id
#define NAX_ID_OFFSET            2
#define CNTST_OFFSET            3
#define HEADER_LENGTH            4

#ifndef MOSYS_ROTATIONAL_CNV
#define MOSYS_ROTATIONAL_CNV     0.36  // 1000000 ticks/rev -> 1/1000 degree resolution
#endif
#define MOSYS_LINEAR_CNV        1      // 1/100 of mm resolution

// Field IDs.
#define F4_FIELD_ID_PAN                    0x01
#define F4_FIELD_ID_TILT                   0x02
#define F4_FIELD_ID_FOCUS                  0x03
#define F4_FIELD_ID_ZOOM                   0x04
#define F4_FIELD_ID_X                      0x05
#define F4_FIELD_ID_Y                      0x06
#define F4_FIELD_ID_HEIGHT                 0x07
#define F4_FIELD_ID_CPAN                   0x08
#define F4_FIELD_ID_CTILT                  0x09
#define F4_FIELD_ID_TURNT                  0x0A
#define F4_FIELD_ID_CRANEX                 0x0B
#define F4_FIELD_ID_ORIENT                 0x0C
#define F4_FIELD_ID_IRIS                   0x0D
#define F4_FIELD_ID_DIGIFOCUS              0x0E
#define F4_FIELD_ID_DIGIZOOM               0x0F
#define F4_FIELD_ID_DIGIIRIS               0x10
#define F4_FIELD_ID_STRINGX                0x11
#define F4_FIELD_ID_STRINGY                0x12
#define F4_FIELD_ID_ROLL                   0x13
#define F4_FIELD_ID_HEAD_Y                 0x14
#define F4_FIELD_ID_HEAD_Z                 0x15


#define F4_FIELD_ID_RAWPAN                 0x32
#define F4_FIELD_ID_RAWTILT                0x33
#define F4_FIELD_ID_RAWROLL                0x34
#define F4_FIELD_ID_RAWJIB                 0x35
#define F4_FIELD_ID_RAWTURN                0x36
#define F4_FIELD_ID_RAWTRACK               0x37
#define F4_FIELD_ID_RAWTELE                0x38
#define F4_FIELD_ID_RAWELEV                0x39

#define F4_FIELD_ID_ENTRANCE_PUPIL         0x50
#define F4_FIELD_ID_LENS_DISTORTION_K1     0x51
#define F4_FIELD_ID_LENS_DISTORTION_K2     0x52
#define F4_FIELD_ID_FOCAL_LENGTH_FX        0x53
#define F4_FIELD_ID_CX                     0x54
#define F4_FIELD_ID_CY                     0x55
#define F4_FIELD_ID_VIRTUAL_FX             0X56
#define F4_FIELD_ID_FOCAL_DISTANCE         0X57
#define F4_FIELD_ID_FOCAL_LENGTH_FY        0x58
#define F4_FIELD_ID_VIRTUAL_FY             0X59
#define F4_FIELD_ID_APERTURE               0x60

#define F4_FIELD_ID_TIMECODE               0xF8

// Information fields.
#define F4_FIELD_ID_GATEWAY_BUILD_VERSION  0xFA
#define F4_FIELD_ID_GATEWAY_BUILD_DATE     0xFB
#define F4_FIELD_ID_AXIS_DATA_INFO         0xFC
#define F4_FIELD_ID_NETWORK_STATUS_INFO    0xFD
#define F4_FIELD_ID_PACKET_TIMING_INFO     0xFE
#define F4_FIELD_ID_GENLOCK_INFO           0xFF

// Output enable options
#define F4_OUTPUT_ENABLE_OFF            false
#define F4_OUTPUT_ENABLE_ON             true
#define F4_OUTPUT_ENABLE_ONCE           2


#define F4_COMMAND_BYTE      0xF4
#define F4_PACKET_SIZE_MAX   2048


#define F4_STARTRACKER_ID    0xF7
#define F4_TRACKING_STATUS   0xF9

#define F4_TRACKING_STATUS_UNDEFINED            0
#define F4_TRACKING_STATUS_TRACKING             1 
#define F4_TRACKING_STATUS_OPTICAL_GOOD         2
#define F4_TRACKING_STATUS_OPTICAL_ACCEPTABLE   3
#define F4_TRACKING_STATUS_OPTICAL_UNRELIABLE   4
#define F4_TRACKING_STATUS_OPTICAL_UNSTABLE     5
#define F4_TRACKING_STATUS_OPTICAL_LOST         6
#define F4_TRACKING_STATUS_LOST_TOO_FEW_STARS   7
#define F4_TRACKING_STATUS_LOC_SEARCHING        8
#define F4_TRACKING_STATUS_BUSY_OR_WAITING      9
#define F4_TRACKING_STATUS_BUSY_LOADING_MAP     10
#define F4_TRACKING_STATUS_NO_MAP_LOADED        11
#define F4_TRACKING_STATUS_TEST_SIGNAL          12
#define F4_TRACKING_STATUS_MECH_ENC_ONLY        13
#define F4_TRACKING_STATUS_IO_ERROR             14
#define F4_TRACKING_STATUS_INTERNAL_ERROR       15

namespace mosys
{
    inline constexpr const char * F4_TRACKING_STATUS_STRINGS[] =
    {
        "Undefined",
        "Tracking",
        "Optical Good",
        "Optical Acceptable",
        "Optical Unreliable",
        "Optical Unstable",
        "Optical Lost",
        "Lost Too Few Stars",
        "Location Searching",
        "Busy or Waiting",
        "Busy Loading Map",
        "No Map Loaded",
        "Test Signal",
        "Mechanical Encoders Only",
        "I/O Error",
        "Internal Error"
    };
} // namespace mosys

#endif // __F4_H__


