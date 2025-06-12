// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "IMoSysTracking.h"
#include "MoSysTrackingPrivate.h"
#include "tracking/TrackingTypes.h"

#include "HAL/PlatformProcess.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "Misc/Base64.h"
#include "Modules/ModuleManager.h"
#include "Features/IModularFeatures.h"

#define LOCTEXT_NAMESPACE "MoSysTracking"

class FMoSysTracking : public IMoSysTracking
{

public:

    /** IModuleInterface implementation */
    virtual void StartupModule()
    {
    }

    virtual void ShutdownModule()
    {
    }

    virtual void SetMoSysVPFrameRate(const FFrameRate InFrameRate)
    {
        MSVPFrameRate = InFrameRate;
    }

    virtual FFrameRate GetMoSysVPFrameRate() const { return MSVPFrameRate; }

};

DEFINE_LOG_CATEGORY(LogMoSysTracking);

IMPLEMENT_MODULE(FMoSysTracking, MoSysTracking)

#undef LOCTEXT_NAMESPACE
