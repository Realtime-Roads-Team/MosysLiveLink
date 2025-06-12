// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "mosys-cpp/tracking/MoSysStarTrackerAPI.h"
#include <memory>
#include <list>

namespace mosys
{
    class MoSysServiceBrowser;
    class ServiceConfig;

    typedef std::function<void(const ServiceConfig& config)> BrowserCallback;

    namespace hardware
    {
        class MoSysStarTrackerManager
        {
        public:
            /**
             * \brief Getter for the StarTrackerManager. This function creates a manager if there is not one already. Do not create one manually.
             * \return A valid reference to the camera manager
             */
            static MoSysStarTrackerManager& instance();
            /**
             * \brief Destructor for the manager's singleton. After this is called, it is no longer valid to add or remove StarTrackers.
             * All active StarTrackers are stopped and destroyed and all pending-to-kill StarTrackers are deleted.
             */
            ~MoSysStarTrackerManager();
            /**
             * \brief Callback for StarTrackers who respond to the zeroconfig browsing request.
             * Bool is true if we are adding the StarTracker to our collection, false if we are removing.
             * const char* is the IP address of the StarTracker that responded.
             */
            typedef std::function<void(bool, const char*)> UMoSysStarTrackerBrowserCallback;
            /**
             * \brief Callback for StarTrackers in the active StarTracker List
             */
            typedef std::function<void(MoSysStarTracker*)> UMoSysStarTrackerFetchCallback;
            /**
             * \brief Query if zeroconfig (Bonjour/Avahi) services are installed on the system.
             * \return True if the service is available for use when browsing or publishing.
             */
            bool isDiscoveryAvailable();
            /**
             * \brief Query the network for all available StarTrackers.
             * \param[in] callback Callback for StarTrackers to respond with
             */
            void browseStarTrackers(const UMoSysStarTrackerBrowserCallback& callback);
            /**
             * \return The number of active StarTrackers.
             */
            size_t getStarTrackerCount() const;
            /**
             * \brief Fetch each active StarTracker to add it upstream, such as to the Unreal panel in UMoSysStarTrackerSubsystem
             * \param[in] callback Each active StarTracker will respond to this callback
             * \return True if there are active StarTrackers
             */
            bool fetchStarTrackers(const UMoSysStarTrackerFetchCallback& callback);
            /**
             * \brief Create a new StarTracker, add it to the active StarTrackers list and return a pointer to it
             * \param[in] ipAddress The IP address of the StarTracker to add
             * \param[in] createdByUser True if the user added the StarTracker, false if it was discovered via zeroconfig.
             * StarTrackers added by zeroconfig cannot be manually deleted.
             * \return A pointer to the newly created StarTracker or nullptr if it fails to create a new one
             */
            MoSysStarTracker* createStarTracker(const std::string& ipAddress, bool createdByUser);
            /**
             * \brief Get the most recent error message
             * \param[out] message The error message to pass out
             * \return True if there was an error to pass out
             */
            bool getLastErrorMessage(std::string& message);
            /**
             * \brief Iterate over the StarTracker list and stop them all from updating
             * \note Currently only used in testing
             */
            void stopAllStarTrackerAsyncUpdate();
            /**
             * \brief Remove a StarTracker, using its IP address, that was created by the user.
             * If the StarTracker associated with the IP address was not created by the user, nothing happens.
             * \param ip The IP address of the StarTracker to search for and remove.
             */
            void removeUserAddedStarTracker(const char* ip);

            MoSysStarTrackerManager(MoSysStarTrackerManager const&) = delete;
            MoSysStarTrackerManager(MoSysStarTrackerManager&&) = delete;
            MoSysStarTrackerManager& operator=(MoSysStarTrackerManager const&) = delete;
            MoSysStarTrackerManager& operator=(MoSysStarTrackerManager&&) = delete;

        private:
            MoSysStarTrackerManager() = default;
            /**
             * \brief Initialise the StarTracker and start its update loop.
             * \param st The StarTracker to initialise. This should be a newly created one in most cases. 
             * \return True if we initialised it successfully
             */
            bool initStarTracker(MoSysStarTracker* st);
            /**
             * \brief The internal function to remove a StarTracker. Prefer to use removeStarTracker as it will call back.
             * \param ip The IP address of the StarTracker to remove
             * \param deleteByBrowser True if zeroconfig is trying to delete the StarTracker
             * \return True if we found and deleted the StarTracker
             */
            bool removeStarTrackerInternal(const char* ip, bool deleteByBrowser);
            /**
             * \brief Attempts to remove and delete an active StarTracker created by zeroconfig.
             * \param ip The IP address of the StarTracker to delete
             * \param callback This callback will trigger if we successfully remove the StarTracker
             */
            void removeStarTracker(const char* ip, const UMoSysStarTrackerBrowserCallback& callback);
         
            std::string m_lastErrorMessage;
            std::mutex m_mutex;
            std::list<MoSysStarTracker*> m_starTrackerList;
            std::list<MoSysStarTracker*> m_starTrackersToRemove;
            std::unique_ptr<MoSysServiceBrowser> m_serviceBrowser;
        };
    }
}
