// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include <string>

#include <stdint.h>

namespace mosys
{
    /**
    * A frame rate represented as a fraction comprising 2 integers: a numerator (number of frames), and a denominator (per second)       
    * Supported frame rates are:
    *  23.976, 24, 25, 29.97, 30, 50, 59.94, 60 
    */
    class FrameRate
    {
    public:
        FrameRate();

        FrameRate(uint32_t numerator, uint32_t denominator);

        FrameRate(float frameRate);

        friend bool operator==(const FrameRate& A, const FrameRate& B);
        friend bool operator!=(const FrameRate& A, const FrameRate& B);

        friend FrameRate operator*(FrameRate A, FrameRate B);
        friend FrameRate operator/(FrameRate A, FrameRate B);

        /**
         * Verify that this frame rate is valid to use
         */
        bool isValid() const;

        /**
        *  Is this a drop frame framerate.
        */
        bool isDropFrame() const;

        /**
        *  Set if this a drop frame framerate. Will convert to drop frame if it wasn't before and vice versa.
        */
        void setDropFrame(bool isDropFrame);

        /**
         * Get the decimal representation of this framerate's interval
         *
         * @return The time in seconds for a single frame under this frame rate
         */
        double asInterval() const;

        /**
         * Get the decimal representation of this framerate
         *
         * @return The number of frames per second
         */
        double asDouble() const;

        /**
         * Get the integer representation of this framerate rounded away from zero
         *
         */
        uint32_t asCeilToInt() const;

        uint32_t getNumerator() const;
        uint32_t getDenominator() const;

        /**
         * Convert this frame rate to a prettified text string.
         */
        bool toString(std::string& outFrameRate) const;

		/**
		 * Convert this frame rate to a prettified format string e.g. 23.98p or 50i.
		 */
		bool toFormatString(std::string& outFrameRate, bool isProgressive) const;

    private:
        /**
        * The numerator of the framerate represented as a number of frames per second (e.g. 25000 for 25 fps)
        */
        uint32_t m_numerator;

        /**
        * The denominator of the framerate represented as a number of frames per second (e.g. 1000 for 25 fps)
        */
        uint32_t m_denominator;

        bool m_isDropFrame;
    };
} // namespace mosys

