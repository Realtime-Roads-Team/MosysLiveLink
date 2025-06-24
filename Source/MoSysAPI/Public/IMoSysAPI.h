// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

#include "mosys-cpp/networking/security/MoSysAuthAPI.h"
#include "mosys-cpp/tracking/MoSysStarTrackerManager.h"
#include "mosys-cpp/lens/MoSysLensRest.h"
#include "mosys-cpp/vp/camera/MoSysCameraManager.h"
#include "mosys-cpp/vp/keyer/MoSysKeyerManager.h"
#include "mosys-cpp/vp/lenscontrol/MoSysLensControlManager.h"
#include "mosys-cpp/vp/networking/MoSysVirtualProductionServer.h"
#include "mosys-cpp/vp/networking/CCSNearTimeRest.h"
#include "mosys-cpp/vp/recorder/MoSysRecorderManager.h"
#include "mosys-cpp/vp/ledcontroller/LedControllerManager.h"
#include "mosys-cpp/vp/switcher/MoSysSwitcherManager.h"
#include "mosys-cpp/vp/video/MoSysCardManager.h"
#include "mosys-cpp/vp/xr/MoSysMoViewer.h"
#include "mosys-cpp/robotics/MoSysSubjectTrackerManager.h"


/**
 * The public interface to this module
 */
class IMoSysAPI : public IModuleInterface
{
public:

    /**
     * Singleton-like access to this module's interface.  This is just for convenience!
     * Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
     *
     * @return Returns singleton instance, loading the module on demand if needed
     */
    static inline IMoSysAPI& Get()
    {
    	ensureAlwaysMsgf(IsAvailable(), TEXT("MoSysAPI is unavailable, this module should always load first and should always be available"));
        return FModuleManager::LoadModuleChecked< IMoSysAPI >("MoSysAPI");
    }

    /**
     * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
     *
     * @return True if the module is loaded and ready to use
     */
    static inline bool IsAvailable()
    {
	    return FModuleManager::Get().IsModuleLoaded("MoSysAPI");
    }

	// Add any other managers to this list of getters then implement them in FMoSysAPI
	
	virtual mosys::MoSysAuth& GetMoSysAuth() = 0;
	virtual mosys::hardware::MoSysStarTrackerManager& GetStarTrackerManager() = 0;
	virtual mosys::video::CameraManager& GetCameraManager() = 0;
	virtual mosys::hardware::KeyerManager& GetKeyerManager() = 0;
	virtual mosys::LensControlManager& GetLensControlManager() = 0;
	virtual mosys::MoSysLensRest& GetLensRest() = 0;
	virtual mosys::MoSysVirtualProductionServer& GetMoSysVPServer() = 0;
	virtual ccs::CCSNearTimeRest& GetCCSNearTimeRest() = 0;
	virtual mosys::hardware::MoSysRecorderManager& GetRecorderManager() = 0;
    virtual mosys::hardware::LedControllerManager& GetLedControllerManager() = 0;
	virtual mosys::hardware::SwitcherManager& GetSwitcherManager() = 0;
    virtual mosys::video::CardManager& GetCardManager() = 0;
	virtual mosys::hardware::MoSysSubjectTrackerManager& GetSubjectTrackerManager() = 0;
	virtual mosys::hardware::MoViewer& GetMoViewer() = 0;
};
