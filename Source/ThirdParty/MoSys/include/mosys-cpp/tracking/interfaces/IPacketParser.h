// Copyright 2025 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include <cstdint>
#include <span>
#include <string>

namespace mosys::tracking
{
    struct TrackingFrame;

    /**
     * \class IPacketParser
     * \brief Interface for parsing binary packets into tracking data.
     *
     * This interface defines the contract for classes that convert binary protocol 
     * data into a TrackingFrame.
     */
    class IPacketParser
    {
    public:
        /**
         * \brief Virtual destructor.
         */
        virtual ~IPacketParser() = default;

        /**
         * \brief Parses binary data into a TrackingFrame.
         *
         * \param data Binary data to be parsed
         * \param outTrackingFrame The tracking frame to populate with parsed data
         * \param outErrorMessage Error message if deserialization fails
         * \return true if deserialization was successful, false otherwise
         */
        [[nodiscard]] virtual bool parse(std::span<const uint8_t> data,
                                         TrackingFrame& outTrackingFrame,
                                         std::string& outErrorMessage) = 0;
    };
} // namespace mosys::tracking
