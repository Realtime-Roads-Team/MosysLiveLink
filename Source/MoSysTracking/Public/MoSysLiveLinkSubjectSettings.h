// Copyright 20223Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "MoSysTrackingTypes.h"

#include "UObject/NoExportTypes.h"
#include "LiveLinkSubjectSettings.h"

#include "MoSysLiveLinkSubjectSettings.generated.h"

UCLASS()
class MOSYSTRACKING_API UMoSysLiveLinkSubjectSettings : public ULiveLinkSubjectSettings
{
    GENERATED_BODY()
public:
    UMoSysLiveLinkSubjectSettings();

    /** Current Status. */
    UPROPERTY(VisibleAnywhere, Category = "Mo-Sys|Tracking")
    FString TrackingStatus;

    UPROPERTY()
    FName SubjectName;

    UPROPERTY(VisibleAnywhere, Category = "Mo-Sys|Tracking")
    FString HardwareID;

protected:
    virtual EMoSysSourceMode GetMoSysSourceType() { return EMoSysSourceMode::Invalid; };
};

/**
 * Subject Settings for UDP Mode
 */
UCLASS()
class MOSYSTRACKING_API UMoSysUDPSubjectSettings : public UMoSysLiveLinkSubjectSettings
{
    GENERATED_BODY()
    public:
    UMoSysUDPSubjectSettings() : UMoSysLiveLinkSubjectSettings() {}
    UMoSysUDPSubjectSettings(int32 InPort) : Port(InPort) {}

    /*The UDP port for udp communications */
    UPROPERTY(EditAnywhere, Category = "Mo-Sys|Tracking")
    int32 Port;

    UPROPERTY()
    int32 OldPort;

protected:
    virtual EMoSysSourceMode GetMoSysSourceType() override { return EMoSysSourceMode::UDPMode; }

#if WITH_EDITOR
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
};

/**
 * Subject Settings for Serial Mode
 */
UCLASS()
class MOSYSTRACKING_API UMoSysSerialSubjectSettings : public UMoSysLiveLinkSubjectSettings
{
    GENERATED_BODY()
public:
    UMoSysSerialSubjectSettings() : UMoSysLiveLinkSubjectSettings() {}
    UMoSysSerialSubjectSettings(FString InComPort) : ComPort(InComPort) {}

    /** The Serial port for serial communications. */
    UPROPERTY(EditAnywhere, Category = "Mo-Sys|Tracking")
    FString ComPort;

    UPROPERTY()
    int32 ComPortNum;

    UPROPERTY()
    int32 OldComPortNum;

protected:
    virtual EMoSysSourceMode GetMoSysSourceType() override { return EMoSysSourceMode::SerialMode; }

#if WITH_EDITOR
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
};
