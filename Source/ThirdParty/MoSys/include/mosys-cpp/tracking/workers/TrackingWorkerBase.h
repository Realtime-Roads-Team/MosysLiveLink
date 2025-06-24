// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <memory>

#include "mosys-cpp/networking/interfaces/ITransport.h"
#include "mosys-cpp/tracking/TrackingTypes.h"
#include "mosys-cpp/tracking/codecs/F4TrackingCodec.h"
#include "mosys-cpp/tracking/codecs/OpenTrackIOTrackingCodec.h"
#include "mosys-cpp/tracking/interfaces/ITrackingCodec.h"

// Forward declares.
namespace mosys::networking
{
    class SerialTransport;
    class UDPTransport;
} // mosys::networking

namespace mosys::tracking
{
    /**
     * \class TrackingWorkerBase
     * \brief Base class for tracking data workers that receive or send tracking data.
     *
     * Provides common functionality for different tracking worker implementations
     * that handle both receiving and sending tracking data using various protocols 
     * and transport mechanisms.
     *
     * \note This class is not intended to be instantiated directly.
     *       Instead, use mosys::tracking::TrackingWorkerFactory.
     */
    class TrackingWorkerBase
    {
    public:
        /**
         * \brief Virtual destructor.
         */
        virtual ~TrackingWorkerBase() = default;

        /**
         * \brief Establishes connection to the tracking data endpoint.
         *
         * For receivers, connects to the data source.
         * For senders, establishes connection to the target destination.
         *
         * \param outErrorMessage Error description if connection fails
         * \return true if connection succeeds, false otherwise
         */
        [[nodiscard]] virtual bool connect(std::string& outErrorMessage)
        {
            m_isConnected = true;
            return true;
        };

        /**
         * \brief Executes a tracking data operation cycle.
         *
         * For receivers, acquires the next tracking frame from the data source.
         * For senders, transmits the tracking frame to the destination.
         * 
         * \param outTrackingFrame Structure to populate with tracking data (receivers)
         *                        or structure containing data to send (senders)
         * \param outErrorMessage Error description if execution fails
         * \return true if execution succeeds, false otherwise
         */
        [[nodiscard]] virtual bool execute(TrackingFrame& outTrackingFrame, std::string& outErrorMessage) = 0;

        /**
         * \brief Closes the connection to the tracking data endpoint.
         *
         * \param outErrorMessage Error description if closing fails
         * \return true if closing succeeds, false otherwise
         */
        bool close(std::string& outErrorMessage) const { return m_transport->close(outErrorMessage); }

        /**
         * \brief Gets the tracking protocol type being used.
         *
         * \return The active tracking protocol
         */
        [[nodiscard]] Protocol trackingProtocol() const { return m_trackingProtocol; }

        /**
         * \brief Checks if the worker is operating in client mode.
         *
         * \return true if operating as a client, false otherwise
         */
        [[nodiscard]] bool isClient() const { return m_transport->isClient(); }

        /**
         * \brief Checks if the worker is in a valid operational state.
         *
         * \return true if the worker is valid and connected, false otherwise
         */
        [[nodiscard]] virtual bool isValid() const
        {
            return m_transport && m_codec && m_transport->isValid() && m_isConnected;
        }

    protected:
        /**
         * \brief Default constructor. Only constructable by the TrackingWorkerFactory
         */
        TrackingWorkerBase() = default;

        /**
         * \enum TransportProtocol
         * \brief Supported transport protocol modalities.
         */
        enum class TransportProtocol
        {
            UDP,
            Serial
        };

        /**
         * \brief Initializes the worker with protocol and endpoint information.
         *
         * \noIntended to be called by TrackingWorkerFactory.
         *
         * \tparam TTransport Transport type derived from ITransport
         * \tparam TTransport Transport type derived from ITransport
         *
         * \param transport The means of transport for byte data.
         * \param isClient Whether to operate in client mode (receivers) or server mode (senders)
         * \param outErrorMessage Error description if initialization fails
         *
         * \return true if initialization succeeds, false otherwise
         */
        template<Protocol TTrackingProtocol, std::derived_from<networking::ITransport> TTransport>
        [[nodiscard]] constexpr bool initialize(std::unique_ptr<TTransport>&& transport,
                                                const bool isClient,
                                                std::string& outErrorMessage)
        {
            if constexpr (std::is_same_v<TTransport, networking::UDPTransport>)
            {
                m_transportProtocol = TransportProtocol::UDP;
            }
            else if constexpr (std::is_same_v<TTransport, networking::SerialTransport>)
            {
                m_transportProtocol = TransportProtocol::Serial;
            }
            else
            {
                static_assert(TStaticFalse<TTransport> && "Unsupported transport protocol.");
                return false; // This line will never be hit at runtime.
            }

            if constexpr (TTrackingProtocol == Protocol::F4)
            {
                m_codec = std::make_unique<F4TrackingCodec>();
            }
            else if constexpr (TTrackingProtocol == Protocol::OpenTrackIO)
            {
                m_codec = std::make_unique<OpenTrackIOTrackingCodec>();
            }
            else
            {
                static_assert(ProtocolStaticFalse<TTrackingProtocol> && "Unsupported tracking protocol.");
                return false;
            }

            if (transport == nullptr)
            {
                outErrorMessage = "Failed to initialize TrackingReceiverWorker. Transport is nullptr.";
                return false;
            }

            m_transport = std::move(transport);
            m_trackingProtocol = TTrackingProtocol;

            return initializeImpl(TTrackingProtocol,
                                  isClient,
                                  outErrorMessage);
        }

        /**
         * \brief Optional initialization function for derived classes to override. This is called by initialize().
         * 
         * \param protocol The tracking protocol to use
         * \param isClient Whether to operate in client mode (receivers) or server mode (senders)
         * \param outErrorMessage Error description if initialization fails
         *
         * \return true if initialization succeeds, false otherwise
         */
        virtual bool initializeImpl(Protocol protocol,
                                    bool isClient,
                                    std::string& outErrorMessage)
        {
            return true;
        }

        bool m_isConnected{false};
        TransportProtocol m_transportProtocol{};
        Protocol m_trackingProtocol{};

        std::unique_ptr<networking::ITransport> m_transport{};
        std::unique_ptr<ITrackingCodec> m_codec{};

    private:
        /**
         * \brief Helper template to assert false at compile time.
         */
        template<typename T>
        static constexpr bool TStaticFalse = false;

        /**
         * \brief Helper template to false at compile time for unsupported tracking protocols.
         */
        template<Protocol TTrackingProtocol>
        static constexpr bool ProtocolStaticFalse = false;
    };
} // mosys::tracking
