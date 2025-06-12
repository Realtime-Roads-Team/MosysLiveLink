// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include <list>
#include <mutex>
#include <cstring>
#include <string>

#include <string>
#include <functional>

#if _DEBUG
#include <iostream>
#endif

namespace mosys
{
    class ServiceConfig;
    typedef std::function<void(const ServiceConfig& config)> BrowserCallback;

    /**
     * \brief Iterate through a list and execute the callback on each element. The iteration stops if the callback returns true.
     * \todo This function is used differently each time and gets confusing as sometimes it's just used for simple iteration
     * \tparam T The type of the element in the list
     * \param container The list containing all the elements to iterate through
     * \param callback The callback used on each element, returning true if the loop should be broken
     * \return True if we broke the loop, false if we iterated over all the elements without breaking
     */
    template<typename T>
    bool walkThroughList(std::list<T>& container, std::function<bool(T& elem)> callback)
    {
        for(auto& elem : container)
        {
            if(callback(elem))
            {
                return true;
            }
        }
        return false;
    }

    // Only used by Avahi
    enum class DNSProtocol
    {
        IPv4,
        IPv6,
        ALL,
    };


    /**
     * The status of the publisher or browser
     */
    enum class ServiceStatus
    {
        Active,
        Unregistered,
        Waiting,
        Failed,
        Stopped,
    };


    /**
     * Devices linked to a zero configuration networking service
     */
    enum class ServiceDevice
    {
        MoSysAPI,
        StarTracker,
        Blackmagic,
        NotSupported,
    };


    template<ServiceDevice S>
    struct MoSysDeviceConfiguration
    {
        static const uint16_t Port = 0;
        static const ServiceDevice Device = ServiceDevice::NotSupported;
        static const bool EnableHostScan = false;
        static const size_t MaxHostNumber = 0;
        static std::string ServiceType()
        {
            return "_not_defined._tcp";
        }
        static std::string HostServiceName(size_t num)
        {
            return "";
        }
    };


    template<>
    struct MoSysDeviceConfiguration<ServiceDevice::StarTracker>
    {
        static const uint16_t Port = 4044;
        static const ServiceDevice Device = ServiceDevice::StarTracker;
        static const bool EnableHostScan = true;
        static const size_t MaxHostNumber = 4;

        static std::string ServiceType()
        {
            return "_startracker._tcp";
        }

        static std::string HostServiceName(size_t num)
        {
            if(num == 0)
            {
                return "StarTracker.local";
            }
            return "StarTracker-" + std::to_string(++num) + ".local";
        }
    };

    template<>
    struct MoSysDeviceConfiguration<ServiceDevice::MoSysAPI>
    {
        static const uint16_t Port = 4045;
        static const ServiceDevice Device = ServiceDevice::MoSysAPI;
        static const bool EnableHostScan = false;
        static const size_t MaxHostNumber = 0;
        static std::string ServiceType()
        {
            return "_mo-sys_api._tcp";
        }
        static std::string HostServiceName(size_t num)
        {
            return "";
        }
    };

    template<>
    struct MoSysDeviceConfiguration<ServiceDevice::Blackmagic>
    {
        static const uint16_t Port = 4046;
        static const ServiceDevice Device = ServiceDevice::Blackmagic;
        static const bool EnableHostScan = false;
        static const size_t MaxHostNumber = 0;
        static std::string ServiceType()
        {
            return "_blackmagic._tcp";
        }
        static std::string HostServiceName(size_t num)
        {
            return "";
        }
    };

    inline std::string lookUpType(ServiceDevice serviceType)
    {
        switch(serviceType)
        {
        case ServiceDevice::MoSysAPI:
            return MoSysDeviceConfiguration<ServiceDevice::MoSysAPI>::ServiceType();
        case ServiceDevice::StarTracker:
            return MoSysDeviceConfiguration<ServiceDevice::StarTracker>::ServiceType();
        case ServiceDevice::Blackmagic:
            return MoSysDeviceConfiguration<ServiceDevice::Blackmagic>::ServiceType();
        case ServiceDevice::NotSupported:
            return MoSysDeviceConfiguration<ServiceDevice::NotSupported>::ServiceType();
        }
        return "";
    }

    /**
    * Create a std::string based on the service type, host name and if the service is real or not
    */
    std::string createMoSysServiceName(ServiceDevice deviceType, bool isReal);

    /**
    * Report error
    */
    class ErrorReporting
    {
    public:
        ErrorReporting()
            : m_status(ServiceStatus::Unregistered)
            , m_resetError(false)
        {}

        virtual ~ErrorReporting()=default;

        ServiceStatus getStatus() const { return m_status; }

        bool serviceIsRunning() const
        {
            return m_status == ServiceStatus::Active;
        }

        std::string getLastError()
        {
            if(m_errorMessage.length() > 0)
            {
                std::string error = m_errorMessage;
                m_errorMessage = "";
                return error;
            }
            return "";
        }

    protected:
        std::string m_errorMessage;
        ServiceStatus m_status;
        bool m_resetError;

        void setErrorMessage(const std::string& str)
        {
            m_errorMessage = str;
        }

        void setServiceStatus(ServiceStatus status)
        {
            m_status = status;
        }
    };


    class ServiceConfig
    {
    public:
        ServiceConfig(const char* serviceName, const char* serviceType, uint16_t port,
                      const char* domain, int32_t interfaceIndex, const char* hostName, const char* ipAddress
        )
            :m_serviceName(serviceName)
            , m_serviceType(serviceType)
            , m_domain(domain)
            , m_ipAddress(ipAddress)
            , m_hostName(hostName)
            , m_id(generateID())
            , m_interfaceIndex(interfaceIndex)
            , m_port(port)
        {
        }

        ServiceConfig(const char* serviceName, const char* serviceType, uint16_t port,
                      const char* domain, int32_t interfaceIndex, const char* hostName = ""
        )
            :ServiceConfig(serviceName, serviceType, port, domain, interfaceIndex, hostName, "")
        {
        }

        ~ServiceConfig();

        bool operator ==(const ServiceConfig& Other) const
        {
            return m_serviceName == Other.m_serviceName &&
                m_serviceType == Other.m_serviceType &&
                m_domain == Other.m_domain &&
                m_ipAddress == Other.m_ipAddress &&
                m_hostName == Other.m_hostName &&
                m_id == Other.m_id &&
                m_interfaceIndex == Other.m_interfaceIndex &&
                m_port == Other.m_port;
        }

        std::string getServiceName()const { return m_serviceName; }
        std::string getServiceType()const { return m_serviceType; }
        std::string getDomain()const { return m_domain; }
        std::string getAddress()const { return m_ipAddress; }
        std::string getHost()const { return m_hostName; }
        int32_t getInterfaceIndex()const { return m_interfaceIndex; }
        uint16_t getPort()const { return m_port; }
        bool getTXTRecordValue(const char* key, const char*& value) const;

        bool isReal() const
        {
            return m_serviceName.starts_with(ServiceConfig::C_FAKE_SERVICE_MARKER) == false;
        }

        int getID()const { return m_id; }

        void addTXTRecord(const char* key, const char* val)
        {
            m_txtRecordList.emplace_back(key, val);
        }

        static const char* C_FAKE_SERVICE_MARKER;

    protected:
        std::string m_serviceName;
        std::string m_serviceType;
        std::string m_domain;
        std::string m_ipAddress;
        std::string m_hostName;
        const int m_id;
        int32_t m_interfaceIndex;
        uint16_t m_port;

        static std::mutex s_mutexID;

        void updateIP(const char* ip)
        {
            m_ipAddress = ip;
        }

        int generateID()
        {
            static int id = 0;
            std::lock_guard<std::mutex> lk(s_mutexID);
            return ++id;
        }


        class TXTRecord
        {
        public:
            TXTRecord(const char* key, const char* val);

            const char* getValue() const
            {
                return m_val.c_str();
            }

            const char* getKey() const
            {
                return m_key.c_str();
            }

            bool isTXTRecord(const char* key) const
            {
                return m_key == key;
            }

            TXTRecord() = delete;

        private:
            std::string m_key;
            std::string m_val;

            friend class ServiceConfig;
            friend class AvahiPublisher;
            friend class BonjourPublisher;
        };

        std::list<TXTRecord> m_txtRecordList;

        uint16_t calculateTXTRecordsLength();

        friend class BonjourBrowser;
        friend std::ostream;
    };

}
