// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once
#include "mosys-cpp/networking/zeroconfigservice/ZeroConfServiceCommon.h"
#include <memory>

namespace mosys
{
    /**
    * Set a zero configuration service based on a ServiceDevice template parameter.
    * This template parameter is used to load specific configuration for each define ServiceDevice using
    * the respective template<ServiceDevice S> MoSysDeviceConfiguration specialization. For example
    * if we need to add a service for a new device (ServiceDevice::Camera)
    * we need to define the template<ServiceDevice S> MoSysDeviceConfiguration specialization for ServiceDevice::Camera.
    */

    class MoSysServicePublisher
    {
    public:
         /**
         * Create a new MoSysServicePublisher
         *
         * \param isReal if set false it will prefix the service name with "(Fake) " string.
         *
         * \param ip    If non-empty, specifies the ip of the interface on which to register the service
         *              It is possible to pass "" to register on all available interfaces (internally ""
         *              is traslated to kDNSServiceInterfaceIndexAny).
         *              Please avoid register a service in all available interfaces if the service provide
         *              is only set on one of them.
         *
         * \param domain If non-NULL, specifies the domain on which to advertise the service.
         *               Most applications will not specify a domain, instead automatically
         *               registering in the default domain: "local".
         *
         * \param initialized if true the service will be registered at construction time;
         *                    if it is false, the user will have to call startService()
         *                    at anytime. For example it is good practice to wait for the
         *                    service provider to start before the service can be visible
         *                    by potential users.
         *
         * \param flags  Indicates the renaming behavior on name conflict (most applications
         *               will pass 0). Default is kDNSServiceFlagsNoAutoRename
         *               By default, name conflicts are automatically handled by renaming the service.
         *               NoAutoRename overrides this behavior - with this flag set,
         *               name conflicts will result in a callback to the static method
         *               BonjourPublisher::ServiceRegisterCallback.
         */

        template<ServiceDevice S>
        static std::unique_ptr<MoSysServicePublisher> create(bool isReal, const char* ip, const char* domain)
        {
            // Can't use make_unique here because we are using a private constructor
            auto p = new MoSysServicePublisher(isReal, createMoSysServiceName(MoSysDeviceConfiguration<S>::Device, isReal).c_str(),
                MoSysDeviceConfiguration<S>::ServiceType().c_str(),
                MoSysDeviceConfiguration<S>::Port,
                ip, domain);

            return std::unique_ptr<MoSysServicePublisher>(p);
        }

        template<ServiceDevice S>
        static std::unique_ptr<MoSysServicePublisher> create(bool isReal, const char* ip)
        {
            return create<S>(isReal, ip, "local");
        }

        /**
        * Publish the service on ALL the interfaces available.
        *
        * Use this ONLY if the service will be actually listening on all the interfaces.
        */
        template<ServiceDevice S>
        static std::unique_ptr<MoSysServicePublisher> create(bool isReal=true)
        {
            return create<S>(isReal, "", "local");
        }

        virtual ~MoSysServicePublisher(); // out of line for destruction of m_publisher

        MoSysServicePublisher() = delete;
        MoSysServicePublisher& operator=(const MoSysServicePublisher& other) = delete;
        MoSysServicePublisher& operator=(MoSysServicePublisher&& other) = delete;
        MoSysServicePublisher(const MoSysServicePublisher&) = delete;


        /**
        * Return true if the host system has Bounjour installed AND the BounjourCore::ShutDown
        * has NOT been called.
        */
        static bool IsServiceActive();

        /**
        * If the publisher was constructed with the option initialized = false, we can publish the service
        * when the service provider is up and running.
        */
        bool startService();

        std::string getLastError();

        /**
        * Mark the object for deletion by the garbage collection loop (reduceRefList)
        */
        void stop();

        /**
        * Set key-values pairs of TXTRecords.
        *
        * \param key a null-terminated string which only contains printable ASCII values(0x20 - 0x7E),
        *      excluding '=' (0x3D).Keys should be 9 characters or fewer(not counting the terminating null).
        *      (However frfom TXTRecordGetItemAtIndex()'s documentation: "DNS-SD TXT keys are usually 9 characters or fewer.
        *      To hold the maximum possible key name, the buffer should be 256 bytes long." which implies that
        *      the key could be upto 256 bytes long).
        *
        * \param value Any binary value.For values that represent textual data, UTF - 8 is STRONGLY recommended.
        *         For values that represent textual data, valueSize should NOT include the terminating null(if any)
        *         at the end of the string. If NULL, then "key" will be added with no value.
        *         If non - NULL but valueSize is zero, then "key=" will be added with empty value.
        *
        * Call this method as needed. It is not possible to add more TXTRecords after the service has been published.
        */
        void setTXTRecords(const char* key, const char* val);

        bool serviceIsRunning();

    private:
        MoSysServicePublisher(bool isReal, const char* serviceName, const char* serviceType, uint16_t port, const char* ip, const char* domain);
        struct PublisherHolder;
        std::unique_ptr<PublisherHolder> m_publisher;
    };

}//mo-sys

