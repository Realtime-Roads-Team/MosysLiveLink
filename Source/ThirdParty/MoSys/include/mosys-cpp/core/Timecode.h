// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include <cstdint>
#include "mosys-cpp/core/FrameRate.h"

namespace mosys
{

    /**
    * \brief Struct for difference in time between timecodes
    *
    * \todo Needs methods to get asTotalFrames, decimal asHours etc.
    */
    struct Duration
    {
        uint32_t hours;
        uint32_t minutes;
        uint32_t seconds;
        uint32_t frames;
    };

    /**
     * \brief Timecode class.
     * \details Container for timecode data and utility methods for type conversion.
     *
     * \todo Support signed and unsigned needed.
     * \todo See UE5 FTimecode approach.
     * \todo See UE5 FFramerate approach.
     */
    class Timecode
    {
    public:

        /**
         * \brief Default constructor
         * \param[in] frameRate The frame rate of the timecode
         */
        Timecode(const FrameRate& frameRate = FrameRate());

        /**
         * \brief Copy constructor
         * \param[in] timecode The timecode being copied
         */
        Timecode(const Timecode& timecode);

        /**
         * \brief Constructor for standard timecode in hours, minutes, seconds, frames
         *
         * \param[in] h Hours
         * \param[in] m Minutes
         * \param[in] s Seconds
         * \param[in] f Frames
         * \param[in] rate Frame rate
         */
        Timecode(uint32_t h, uint32_t m, uint32_t s, uint32_t f, FrameRate rate);

        /**
         * \brief Constructor that will parse a string in standard timecode format HH:MM:SS:FF
         * \details It accepts the formats: HH:MM:SS:FF, HH;MM;SS;FF or HH:MM:SS;FF
         *
         * \param[in] str Timecode string in format HH:MM:SS:FF, HH;MM;SS;FF or HH:MM:SS;FF
         */
        Timecode(const char *str);

        /**
         * \brief Overload prefix increment.
         * \todo Needs to log when not valid
         */
        Timecode& operator++();

        /**
         * \brief Overload minus.
         * \details Gets the duration until the left hand side Timecode from the right hand side Timecode.
         * \details Eg 15:10:00:00 - 13:10:00:00 = 02:00:00:00
         * \details Eg 01:25:00:00 - 23:55:00:00 = 01:30:00:00
         *
         * \param[out] other Timecode to subtract by
         */
        Duration operator-(const Timecode& other);

        /**
        * \brief Timecode to string convertion.
        * \details Fetch the timecode as a string in standard format HH:MM:SS:FF
        *
        * \param[out] tc the buffer to write the timecode string into
        */
        bool toString(std::string& outTc) const;

        /**
         * \brief Set frame rate
         *
         * \param[in] rate Frame rate to set
         * \return If the rate was valid and set
         */
        bool setRate(FrameRate rate);
        
        /**
         * \brief Get frame rate
         *
         * \return Return frame rate
         */
        FrameRate getRate() const;

        /**
         * \brief Timecode F4.
         * 
         * \return Fetch the timecode as an unsigned long in Mo-Sys F4 protocol compact format.
         * \todo 'asF4Compact' method on the FrameRate class
         * \todo needs signed support
         */
        unsigned long toF4Compact() const;

        /**
         * \brief Set the timecode from a string.
         * \details Alternative to construction with a string of standard format HH:MM:SS:FF, HH;MM;SS;FF or HH:MM:SS;FF
         *
         * \param[out] tc Timecode string in format HH:MM:SS:FF, HH;MM;SS;FF or HH:MM:SS;FF
         */
        bool fromString(const std::string& tc);

        /**
         * \brief Set the timecode from the system time
         */
        void fromSystemTime();

		      /**
		       * \brief Populate data from an unisgned 32 bit integer as BCD.
		       *
		       * \param bcd Timecode in BCD format HH:MM:SS:FF
		       */
		       void fromBCD(uint32_t bcd);
        
        bool operator== (const Timecode &timecode);
        bool operator!= (const Timecode &timecode);
     
        uint32_t hours;
        uint32_t minutes;
        uint32_t seconds;
        uint32_t frames;

    private:
        friend struct F4AxisBlock;
        FrameRate m_frameRate;

         /**
         * \brief BCD Helper.
         */
		       static inline uint16_t bcdToInt(uint8_t bcd) { return (bcd & 0xf) + ((bcd >> 4) * 10); }
    };
} // namespace mosys


