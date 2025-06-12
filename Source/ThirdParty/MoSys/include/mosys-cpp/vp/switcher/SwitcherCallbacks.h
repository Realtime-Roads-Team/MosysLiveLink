// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <functional>


namespace mosys
{
	namespace hardware
	{
		typedef std::function<void(bool success, const char* errorMessage)> ConnectSwitcherCallback;
		typedef std::function<void(const char* productName)> DisconnectSwitcherCallback;
		typedef std::function<void(int mixEffectBusId, int inputId)> InputChangedCallback;
		typedef std::function<void(int inputId)> TallyCallback;
	}
}