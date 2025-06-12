// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <functional>


namespace mosys
{
	namespace video
	{
		class Format;
		class ChannelDetails;

		typedef std::function<void(const char*, const char*)> DiscoveredCardCallback;
		typedef std::function<void(mosys::video::Format*)> FormatChangedCallback;
		typedef std::function<void(mosys::video::ChannelDetails, bool, const char*, int, int)> FrameCallback;
	}
}
