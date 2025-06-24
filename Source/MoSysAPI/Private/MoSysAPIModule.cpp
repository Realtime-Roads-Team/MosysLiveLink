#include "IMoSysAPI.h"

#include "Misc/Paths.h"
#include "HAL/PlatformProcess.h"

#define LOCTEXT_NAMESPACE "MoSysAPI"

/**
 * \brief Use this Module when accessing the singletons created in mosys-cpp.
 * \warning Accessing them directly will result in undefined behaviour as each module that access them will create their own and this breaks the singleton design pattern.
 */
class MOSYSAPI_API FMoSysAPI : public IMoSysAPI
{
public:
    virtual void StartupModule() override
    {
        LoadGrassValleyDLL();
    }
    virtual void ShutdownModule() override
    {
        if (GVDLLHandle != nullptr)
        {
            FPlatformProcess::FreeDllHandle(GVDLLHandle);
        }
    }
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
    virtual mosys::hardware::LedControllerManager& GetLedControllerManager() override
    {
        return mosys::hardware::LedControllerManager::instance();
    }
    virtual mosys::hardware::SwitcherManager& GetSwitcherManager() override
    {
        return mosys::hardware::SwitcherManager::instance();
    }
    virtual mosys::video::CardManager& GetCardManager() override
    {
        return mosys::video::CardManager::instance();
    }
    virtual mosys::hardware::MoSysSubjectTrackerManager& GetSubjectTrackerManager() override
    {
        return mosys::hardware::MoSysSubjectTrackerManager::instance();
    }
    virtual mosys::hardware::MoViewer & GetMoViewer() override
    {
        return mosys::hardware::MoViewer::instance();
    }

private:
    void* GVDLLHandle = nullptr;

    bool LoadGrassValleyDLL();
};

bool FMoSysAPI::LoadGrassValleyDLL()
{
    check(GVDLLHandle == nullptr);

    // Load GV CPL DLL
    const FString CPLDll = TEXT("Cpl_Client-64.dll");
    FString DllPath = FPaths::Combine(FPaths::GetPath(FPaths::GetProjectFilePath()), "Plugins", "MoSysVPPro", "ThirdParty", "MoSys");
    FPlatformProcess::PushDllDirectory(*DllPath);
    DllPath = FPaths::Combine(DllPath, CPLDll);

    if (!FPaths::FileExists(DllPath))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to find the binary folder for the dll. Plug-in will not be functional"));
        return false;
    }

    GVDLLHandle = FPlatformProcess::GetDllHandle(*DllPath);
    if (GVDLLHandle == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load required library %s. Plug-in will not be functional"), *CPLDll);
        return false;
    }
    return true;
}

IMPLEMENT_MODULE(FMoSysAPI, MoSysAPI);

#undef LOCTEXT_NAMESPACE