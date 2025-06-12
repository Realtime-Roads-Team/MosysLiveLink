// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include <stdint.h>

#include <string>
#include <vector>


namespace mosys
{
	namespace video
	{
        struct FrameData
        {
            FrameData() : audioBuffer() {}
            const uint8_t* videoBuffer = nullptr;
            //const uint8_t* audioBuffer = nullptr;
            std::vector<uint8_t> audioBuffer;
        };

        class Format
        {
            /// \todo handle drop frame
            public:
                Format(Format& format);
                Format(unsigned int width, unsigned int height, float fps, bool interlaced);
                unsigned int getWidth();
                unsigned int getHeight();
                unsigned int getStride();
                unsigned int getSize();
                float getFps();
                bool isInterlace();
                std::string toString();
                unsigned long toDecklinkDisplayMode();

            private:
                unsigned int m_width;
                unsigned int m_height;
                float m_fps;
                bool m_interlaced;
        };

	} // namespace video
} // namespace mosys
