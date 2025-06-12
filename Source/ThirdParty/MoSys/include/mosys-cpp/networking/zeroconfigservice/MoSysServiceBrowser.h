// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include "mosys-cpp/networking/zeroconfigservice/ZeroConfServiceCommon.h"
#include <memory>
#include <vector>


namespace mosys
{
    typedef std::function<void(const ServiceConfig& config)> BrowserGetConfig;


    /**
    * Template class for specific MoSysService.
    * This template parameter is used to load specific configuration for each define ServiceDevice using
    * the respective template<ServiceDevice S> MoSysDeviceConfiguration specialization. For example
    * if we need to add a service for a new device (ServiceDevice::Camera)
    * we need to define the template<ServiceDevice S> MoSysDeviceConfiguration specialization for ServiceDevice::Camera.
    */

    class MoSysServiceBrowser
    {
    public:
        /**
         * Create a new MoSysServiceBrowser
         *
         * \param onlineCbk a function object of type BrowserCallback that will be called when a service is found.
         *
         * \param offlineCbk a function object of type BrowserCallback that will be called when a service is removed.
         *
         * \param protocol this is discarted by Bonjour, for Avahi this can take values: AVAHI_PROTO_INET, AVAHI_PROTO_INET6, AVAHI_PROTO_UNSPEC
         *
         * \param domain If non-empty, specifies the domain on which to browse for services. Most applications will
         *                not specify a domain, instead browsing on the default domain(s).
         */

        template<ServiceDevice S>
        static std::unique_ptr<MoSysServiceBrowser> create(BrowserCallback onlineCbk, BrowserCallback offlineCbk, const char* domain, DNSProtocol protocolPlaceHolder)
        {
            std::vector<std::string> hostServiceNames;
            if (MoSysDeviceConfiguration<ServiceDevice::StarTracker>::EnableHostScan)
            {
                for (size_t i = 0; i < MoSysDeviceConfiguration<S>::MaxHostNumber; ++i)
                {
                    hostServiceNames.push_back(MoSysDeviceConfiguration<S>::HostServiceName(i));
                }
            }
            auto newBrowser = new MoSysServiceBrowser(MoSysDeviceConfiguration<S>::ServiceType().c_str(), onlineCbk, offlineCbk, domain, protocolPlaceHolder,
                hostServiceNames, MoSysDeviceConfiguration<S>::Port);
            return std::unique_ptr<MoSysServiceBrowser>(newBrowser);
        }

        template<ServiceDevice S>
        static std::unique_ptr<MoSysServiceBrowser> create(BrowserCallback onlineCbk, BrowserCallback offlineCbk, const char* domain="")
        {
            return create<S>(onlineCbk, offlineCbk, domain, DNSProtocol::IPv4);
        }

        template<ServiceDevice S>
        static std::unique_ptr<MoSysServiceBrowser> create(DNSProtocol protocolPlaceHolder, const char* domain = "")
        {
            return create<S>(nullptr, nullptr, domain, protocolPlaceHolder);
        }

        template<ServiceDevice S>
        static std::unique_ptr<MoSysServiceBrowser> create(const char* domain = "")
        {
            return create<S>(nullptr, nullptr, domain, DNSProtocol::IPv4);
        }

        virtual ~MoSysServiceBrowser();


        /**
        * Return true if the host system has Bounjour installed AND the BounjourCore::ShutDown
        * has NOT been called.
        */
        static bool IsServiceActive();

        void walkThroughResults(std::function<void(const ServiceConfig& config)> cbk);

        /**
        * Apply the onlineCallback (if the browser was constructed with a callback), then this will be
        * applied to each ServiceConf.
        */
        void pullResults();

        /**
        * Return the current number of online services.
        */
        size_t totalAvailableServices() const;

        std::string getLastError();
    private:
        MoSysServiceBrowser(const char* serviceType, BrowserCallback onlineCbk, BrowserCallback offlineCbk, const char* domain, DNSProtocol protocolPlaceHolder,
            std::vector<std::string> const& hostServiceNames, uint16_t port);
        struct Pimpl;
        std::unique_ptr<Pimpl> m_pimpl;
    };

}//namespace mosys


