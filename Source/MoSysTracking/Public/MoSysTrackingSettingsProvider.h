// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "MoSysTrackingSettingsInterface.h"

/**
 * \brief Provides access to tracking settings via a registered settings interface.
 * Implements global access.
 */
class MOSYSTRACKING_API FMoSysTrackingSettingsProvider
{
public:
    /**
     * \brief Constructor to allow the option of creating a new instance of this class,
     * however it's advised to use global instance via the Get() function.
     */
    FMoSysTrackingSettingsProvider() = default;
    
    /**
     * \brief Returns a global instance of a FMoSysTrackingSettingsProvider .
     * 
     * \return Global instance of the FMoSysTrackingSettingsProvider.
     */
    static FMoSysTrackingSettingsProvider& Get();
    
    /**
     * \brief Registers a MosysTrackingSettingsInterface.
     *
     * \note Only one interface can be registered at a time.
     * 
     * \param Interface Settings interface to register.
     */
    void RegisterSettingsInterface(TScriptInterface<IMoSysTrackingSettingsInterface> Interface);

    /**
     * Unregisters the MosysTrackingSettingsInterface if one has been registered.
     */
    void UnregisterSettingsInterface();
    
    /**
     * \brief Returns a tracking protocol which can be set in the VP project settings.
     *
     * F4 = Propreitry Mosys protocol
     * OpenTrackIO = Open source tracking protocol.
     * 
     * @return A tracking protocol.
     */
    mosys::tracking::Protocol GetUDPTrackingProtocol() const;

private:
    // Holds the currently registered settings interface.
    TScriptInterface<IMoSysTrackingSettingsInterface> SettingsInterface;
};
