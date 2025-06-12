#include "IMoSysAPI.h"

#define LOCTEXT_NAMESPACE "MoSysAPI"

/**
 * \brief Use this Module when accessing the singletons created in mosys-cpp.
 * \warning Accessing them directly will result in undefined behaviour as each module that access them will create their own and this breaks the singleton design pattern.
 */
class MOSYSAPI_API FMoSysAPI : public IMoSysAPI
{
public:
    virtual mosys::MoSysAuth& GetMoSysAuth() override
    {
        return mosys::MoSysAuth::instance();
    }
    virtual mosys::hardware::MoSysStarTrackerManager& GetStarTrackerManager() override
    {
        return mosys::hardware::MoSysStarTrackerManager::instance();
    }
    virtual mosys::video::CameraManager& GetCameraManager() override
    {
        return mosys::video::CameraManager::instance();
    }
    virtual mosys::hardware::KeyerManager& GetKeyerManager() override
    {
        return mosys::hardware::KeyerManager::instance();
    }
    virtual mosys::LensControlManager& GetLensControlManager() override
    {
        return mosys::LensControlManager::instance();
    }
    virtual mosys::MoSysLensRest& GetLensRest() override
    {
        return mosys::MoSysLensRest::instance();
    }
    virtual mosys::MoSysVirtualProductionServer& GetMoSysVPServer() override
    {
        return mosys::MoSysVirtualProductionServer::instance();
    }
    virtual ccs::CCSNearTimeRest& GetCCSNearTimeRest() override
    {
        return ccs::CCSNearTimeRest::instance();
    }
    virtual mosys::hardware::MoSysRecorderManager& GetRecorderManager() override
    {
        return mosys::hardware::MoSysRecorderManager::instance();
    }
    virtual mosys::hardware::SwitcherManager& GetSwitcherManager() override
    {
        return mosys::hardware::SwitcherManager::instance();
    }
    virtual mosys::video::CardManager& GetCardManager() override
    {
        return mosys::video::CardManager::instance();
    }
};

IMPLEMENT_MODULE(FMoSysAPI, MoSysAPI);

#undef LOCTEXT_NAMESPACE