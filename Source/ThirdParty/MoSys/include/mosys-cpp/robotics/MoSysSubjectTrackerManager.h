// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <vector>
#include <mutex>
#include <memory>
#include "mosys-cpp/robotics/MoSysSubjectTrackerAPI.h"

namespace mosys
{
    namespace hardware
    {
        /**
         * \class MoSysSubjectTrackerManager
         * \brief Manages multiple MoSys Subject Trackers.
         */
        class MoSysSubjectTrackerManager
        {
        public:
            /**
             * \brief Gets the singleton instance of the MoSysSubjectTrackerManager.
             * \return Reference to the singleton instance.
             */
            static MoSysSubjectTrackerManager& instance();
            ~MoSysSubjectTrackerManager() = default;

            /**
             * \brief Adds a subject tracker to the manager.
             * This does not automatically connect the Subject Tracker as the callbacks need setting first.
             * \param ipAddress The IP address of the subject tracker.
             * \param port The port of the subject tracker.
             * \param type The type of the subject tracker.
             * \return True if the subject tracker was added successfully, false otherwise.
             */
            bool addSubjectTracker(const std::string& ipAddress, const uint16_t port, MoSysSubjectTrackerType type);

            /**
             * \brief Removes a subject tracker from the manager.
             * This does not automatically disconnect the Subject Tracker.
             * However, it will automatically disconnect if there are no other references to it.
             * \param ipAddress The IP address of the subject tracker.
             * \param port The port of the subject tracker.
             * \return True if the subject tracker was removed successfully, false otherwise.
             */
            bool removeSubjectTracker(const std::string& ipAddress, const uint16_t port);

            /**
             * \brief Gets a subject tracker from the manager.
             * \param ipAddress The IP address of the subject tracker.
             * \param port The port of the subject tracker.
             * \return Weak pointer to the subject tracker, or an empty one if not found.
             */
            std::weak_ptr<MoSysSubjectTrackerBase> getSubjectTracker(const std::string& ipAddress, const uint16_t port) const;

        private:
            mutable std::mutex m_subjectTrackerMtx; ///< Mutex for thread-safe access to subject trackers.
            std::vector<std::shared_ptr<MoSysSubjectTrackerBase>> m_subjectTrackers; ///< List of subject trackers.
        };
    }
}