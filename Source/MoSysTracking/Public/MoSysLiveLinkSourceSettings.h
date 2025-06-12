// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include "LiveLinkSourceSettings.h"

#include "MoSysLiveLinkSourceSettings.generated.h"

UCLASS()
class MOSYSTRACKING_API UMoSysLiveLinkSourceSettings : public ULiveLinkSourceSettings
{
    GENERATED_BODY()
public:
    UMoSysLiveLinkSourceSettings() {}
#if WITH_EDITOR
    virtual void PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent);
#endif
};

UCLASS()
class MOSYSTRACKING_API UMoSysLiveLinkUDPSourceSettings : public UMoSysLiveLinkSourceSettings
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, DisplayName = "Network Interface IP Address", Category = "Mo-Sys|Tracking")
    FString IPAddress;

public:
    UMoSysLiveLinkUDPSourceSettings();

#if WITH_EDITOR
    virtual void PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent);
#endif

private:
    bool Parse(const FString &AddressString, struct FIPv4Address &OutAddress);
    FString OldAddress;
};

UCLASS()
class MOSYSTRACKING_API UMoSysLiveLinkSerialSourceSettings : public UMoSysLiveLinkSourceSettings
{
    GENERATED_BODY()
public:
};

UCLASS()
class MOSYSTRACKING_API UMoSysLiveLinkAudioDemodSourceSettings : public UMoSysLiveLinkSourceSettings
{
    GENERATED_BODY()
public:
};
