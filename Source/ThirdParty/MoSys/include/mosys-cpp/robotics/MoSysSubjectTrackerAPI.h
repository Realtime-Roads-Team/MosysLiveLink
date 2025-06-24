// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <atomic>
#include <thread>
#include <mutex>
#include <string>
#include <functional>
#include <memory>

namespace mosys
{
    namespace hardware
    {
        // Type aliases for various callback functions
        using ConnectCallback = std::function<void()>;
        using DisconnectCallback = std::function<void()>;
        using GetVersionCallback = std::function<void(std::string)>;
        using GetEnabledCallback = std::function<void(bool)>;
        using GetSmoothnessCallback = std::function<void(float)>;
        using GetShotCallback = std::function<void(std::string)>;

        // Enumeration for different types of MoSysSubjectTracker
        enum class MoSysSubjectTrackerType
        {
            FramePilot
        };

        /**
         * \class MoSysSubjectTrackerBase
         * \brief Base class for MoSys Subject Tracker
         */
        class MoSysSubjectTrackerBase : public std::enable_shared_from_this<MoSysSubjectTrackerBase>
        {
        protected:
            struct FactoryGuard { explicit FactoryGuard() = default; };
            MoSysSubjectTrackerBase(const std::string& ip, const uint16_t port);
            virtual ~MoSysSubjectTrackerBase();

        public:
            // Pure virtual functions to be implemented by derived classes
            // PUT requests with data are prefixed with 'set'
            virtual void getVersion() = 0;
            virtual void getEnabled() = 0;
            virtual void setEnabled(bool isEnabled) = 0;
            virtual void getSmoothness() = 0;
            virtual void setSmoothness(float smoothness) = 0;
            virtual void getShot() = 0;
            virtual void setShot(const std::string& shot) = 0;

            // PUT requests with no data
            virtual void putRefresh() = 0;
            virtual void putZero() = 0;

            virtual void poll();

            // Getters for IP address and port
            std::string getIpAddress() const { return m_ipAddress; }
            uint16_t getPort() const { return m_port; }

            /*
             * \brief Get constructed URL in the form: http://<ip_address>:<port>/
             */
            std::string getUrl() const;

            // Connection management functions
            void connect();
            void disconnect();
            bool isConnected() const { return m_isRunning; }

            // Slow mode management functions
            bool getIsSlowMode() const { return m_slowMode; }
            void setIsSlowMode(bool isSlowMode) { m_slowMode = isSlowMode; }
            float getPollSeconds() const { return m_PollSeconds; }
            void setPollSeconds(float pollSeconds) { m_PollSeconds = pollSeconds; }

            // Callback setters
            void setConnectCallback(const ConnectCallback& callback) { m_connectCallback = callback; }
            void setDisconnectCallback(const DisconnectCallback& callback) { m_disconnectCallback = callback; }
            void setGetVersionCallback(const GetVersionCallback& callback) { m_versionCallback = callback; }
            void setGetEnabledCallback(const GetEnabledCallback& callback) { m_enabledCallback = callback; }
            void setGetSmoothnessCallback(const GetSmoothnessCallback& callback) { m_smoothnessCallback = callback; }
            void setGetShotCallback(const GetShotCallback& callback) { m_shotCallback = callback; }

        protected:
            std::atomic_bool m_isRunning = false; ///< Indicates if the tracker is running
            std::atomic_bool m_slowMode = false; ///< Indicates if the tracker is in slow mode
            std::string m_ipAddress; ///< IP address of the tracker
            uint16_t m_port; ///< Port of the tracker
            std::unique_ptr<std::jthread> m_thread; ///< Thread for handling tracker operations
            float m_PollSeconds = 3; ///< Polling interval in seconds

            // Callback functions
            ConnectCallback m_connectCallback;
            DisconnectCallback m_disconnectCallback;
            GetVersionCallback m_versionCallback;
            GetEnabledCallback m_enabledCallback;
            GetSmoothnessCallback m_smoothnessCallback;
            GetShotCallback m_shotCallback;
        };

        /**
         * \class MoSysFramePilot
         * \brief Derived class for MoSys Frame Pilot tracker
         */
        class MoSysFramePilot : public MoSysSubjectTrackerBase
        {
        public:
            MoSysFramePilot(FactoryGuard, const std::string& ip, const uint16_t port) : MoSysSubjectTrackerBase(ip, port) {}
            void getVersion() override;
            void getEnabled() override;
            void setEnabled(bool isEnabled) override;
            void getSmoothness() override;
            void setSmoothness(float smoothness) override;
            void getShot() override;
            void setShot(const std::string& shot) override;

            void putRefresh() override;
            void putZero() override;

            // For proper use of enable_shared_from_this, always use this factory function
            static auto create(const std::string& ip, const uint16_t port)
            {
                return std::make_shared<MoSysFramePilot>(FactoryGuard(), ip, port);
            }

            // Response callback functions - specific to FramePilot
            auto getVersionResponseCallback();
            auto getEnabledResponseCallback();
            auto getSmoothnessResponseCallback();
            auto getShotResponseCallback();
        };
    }
}