// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

#include "Features/IModularFeatures.h"
#include "LiveLinkClient.h"

#include "Kismet/GameplayStatics.h"

#include "MoSysLiveLinkUDPSource.h"
#include "MoSysLiveLinkSerialSource.h"

#include "MoSysTrackingTypes.h"


/**
 * The public interface to this module.  In most cases, this interface is only public to sibling modules 
 * within this plugin.
 *
 * \warning Including this header will include the different headers for each source type, as well as the tracking
 * types header
 * \todo Clean headers so that these won't be included when the tracking module is included?
 */
class IMoSysTracking : public IModuleInterface
{

public:

    /**
     * Singleton-like access to this module's interface.  This is just for convenience!
     * Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
     *
     * \return Returns singleton instance, loading the module on demand if needed
     */
    static inline IMoSysTracking& Get()
    {
        return FModuleManager::LoadModuleChecked<IMoSysTracking>("MoSysTracking");
    }

    /**
     * Get the Mo-Sys Tracking API version
     *
     * \return Version
     */
    virtual FString GetVersionString() { return ""; }

    /**
     * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
     *
     * \return True if the module is loaded and ready to use
     */
    static inline bool IsAvailable()
    {
        return FModuleManager::Get().IsModuleLoaded("MoSysTracking");
    }

    virtual TSharedPtr<FMoSysLiveLinkSource> GetSource(EMoSysSourceMode Type)
    {
        if (Type == EMoSysSourceMode::Invalid)
        {
            return nullptr;
        }
        if (!ActiveSources.Contains(Type))
        {
            return nullptr;
        }
        return ActiveSources[Type];
    }

    virtual TSharedPtr<FMoSysLiveLinkSource> GetOrAddSource(EMoSysSourceMode Type)
    {
        if (auto Source = GetSource(Type))
        {
            return Source;
        }
        switch (Type)
        {
        case EMoSysSourceMode::UDPMode:
            ActiveSources.Add(Type, MakeShared<FMoSysLiveLinkUDPSource>());
            break;
        case EMoSysSourceMode::SerialMode:
            ActiveSources.Add(Type, MakeShared<FMoSysLiveLinkSerialSource>());
            break;
        }
        return GetSource(Type);
    }

    virtual bool RemoveSource(EMoSysSourceMode Type)
    {
        if (ActiveSources.Contains(Type))
        {
            switch (Type)
            {
            case EMoSysSourceMode::UDPMode:
                ActiveSources.Remove(Type);
                break;
            case EMoSysSourceMode::SerialMode:
                ActiveSources.Remove(Type);
                break;
            }
            return true;
        }
        return false;
    }

    virtual void SetMoSysVPFrameRate(const FFrameRate InFrameRate) {}  
    virtual FFrameRate GetMoSysVPFrameRate() const { return FFrameRate(); }

    bool AdditionalFeaturesUnlocked = false;

protected:
    FFrameRate MSVPFrameRate;
    TMap<EMoSysSourceMode, TSharedPtr<FMoSysLiveLinkSource>> ActiveSources;
};
