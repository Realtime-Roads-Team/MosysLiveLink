// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.
#include "MoSysTrackingSettingsProvider.h"
#include "MoSysTrackingPrivate.h"

FMoSysTrackingSettingsProvider& FMoSysTrackingSettingsProvider::Get()
{
    static FMoSysTrackingSettingsProvider Instance;
    return Instance;
}

void FMoSysTrackingSettingsProvider::RegisterSettingsInterface(TScriptInterface<IMoSysTrackingSettingsInterface> Interface)
{
    SettingsInterface = Interface;
}

void FMoSysTrackingSettingsProvider::UnregisterSettingsInterface()
{
    if (SettingsInterface)
    {
        SettingsInterface = nullptr;
    }
}

mosys::tracking::Protocol FMoSysTrackingSettingsProvider::GetUDPTrackingProtocol() const
{
    if (SettingsInterface)
    {
        return SettingsInterface->GetUDPTrackingProtocol();
    }
    
    UE_LOG(LogMoSysTracking, Warning, TEXT("No tracking settings interface registered, defaulting to F4 protocol."));
    return mosys::tracking::Protocol::F4;
}
