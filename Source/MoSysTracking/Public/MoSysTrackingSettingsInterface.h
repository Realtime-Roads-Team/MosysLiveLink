// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include "MoSysTrackingTypes.h"

/**
 * Settings interface intended to be implemented by other modules and registered via the FMoSysTrackingSettingsProvider.
 * This is done to get around circular dependencies of Unreal modules.
 */
class MOSYSTRACKING_API IMoSysTrackingSettingsInterface
{
public:
    virtual ~IMoSysTrackingSettingsInterface() = default;

    /** Get the preferred UDP tracking protocol. */
    virtual mosys::tracking::Protocol GetUDPTrackingProtocol() const = 0;
};
