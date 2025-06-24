// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include <string>
#include "SwitcherCallbacks.h"

#define SONY_SWITCHER_TCP_PORT 12000
#define SONY_SWITCHER_GP2_RED 0x93


// Forward declaration to avoid circular dependency
namespace mosys
{
	namespace video
	{
		class ISwitcher;
	}
}


namespace mosys
{
	namespace hardware
	{
		enum SwitcherType
		{
			ATEM_SWITCHER = 0,
			SONY_SWITCHER,
			GRASSVALLEY_SWITCHER,
			DUMMY_SWITCHER
		};


		// Very basic interface to a single switcher that commits and detects input changes.
		class SwitcherManager
		{
		public:
			static SwitcherManager& instance();
			~SwitcherManager();

			void disconnect();

			bool connectSwitcher(const char* ipAddress,
				ConnectSwitcherCallback connectSwitcherCallback = nullptr,
				InputChangedCallback inputChangedCallback = nullptr,
				TallyCallback tallyCallback = nullptr,
				DisconnectSwitcherCallback disconnectCallback = nullptr,
				SwitcherType type = SwitcherType::ATEM_SWITCHER,
				const uint16_t port = (uint16_t)SONY_SWITCHER_TCP_PORT,
				const uint16_t tally = (uint16_t)SONY_SWITCHER_GP2_RED);

			bool isSwitcherValid();
			bool setProgramInput(int inputId);
			int getProgramInput();
			bool setPreviewInput(int inputId);
			int getPreviewInput();
			bool getSwitcherName(std::string& switcherName);
			bool setMixEffectInput(int mixEffectBusId, int inputId);

			SwitcherManager(SwitcherManager const&) = delete;
			SwitcherManager(SwitcherManager&&) = delete;
			SwitcherManager& operator=(SwitcherManager const&) = delete;
			SwitcherManager& operator=(SwitcherManager&&) = delete;

		private:
			SwitcherManager();

			void async_connect(const char* ipAddress, ConnectSwitcherCallback connectSwitcherCallback, InputChangedCallback inputChangedCallback, TallyCallback tallyCallback, DisconnectSwitcherCallback disconnectCallback, SwitcherType type = SwitcherType::ATEM_SWITCHER, const uint16_t port = SONY_SWITCHER_TCP_PORT, const uint16_t tally = SONY_SWITCHER_GP2_RED);
			video::ISwitcher* m_switcher;
		};
	} // namespace hardware
} // namespace mosys
