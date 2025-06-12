// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <map>
#include <string>
#include <memory>
#include "vp/video/MoSysFormatAndChannelDetailsCallbacks.h"


// Forward declaration
class DeckLinkDeviceDiscovery;
class IDeckLink;

// Forward declaration
namespace mosys
{
    namespace video
    {
        class Channel;
        class SyncChannel;

        class Format;
        struct FrameData;
    }
}


namespace mosys
{
    // Forward declaration
    class Timecode;
    class Card;

	namespace video
	{
        class CardManager
        {
            public:
                static CardManager& instance();
                ~CardManager();

                // Device discovery will only initiate if CheckMachineLock has been called and succeeded
                // The format is a starting suggested format only, and will not prevent discovery if the card does not support it.
                bool discover(mosys::video::Format* format, mosys::video::DiscoveredCardCallback discoveredCardCallback = nullptr, mosys::video::FormatChangedCallback formatChangedCallback = nullptr);

                // Currently the API runs in two modes:
                // - VFX (single input and single (optional) output)
                // - Studio (dual output for fill and (optional) key)
                // Return false if suitable cards / channels are not available
                bool getRecommendedChannelsVFX(mosys::video::ChannelDetails& inputChannel, mosys::video::ChannelDetails& outputChannel);
                bool getRecommendedChannelsStudio(mosys::video::ChannelDetails& fillChannel, mosys::video::ChannelDetails& keyChannel);
                bool getRecommendedChannelsInternalComp(mosys::video::ChannelDetails& fillChannel, mosys::video::ChannelDetails& keyChannel);
                bool getRecommendedSyncCard(std::string& cardId);

                bool isGenlocked(const char* cardId, float& fps);
                bool waitForSync(const char* cardId);
                bool startSync(const char* cardId);
                bool stopSync(const char* cardId);
                bool startChannel(const mosys::video::ChannelDetails channel);
                bool stopChannel(const mosys::video::ChannelDetails channel);
                bool restartChannel(const mosys::video::ChannelDetails channel);
                // Must be called with an input channel
                void setInputFrameDelay(unsigned short frameDelay);
                // Must be called with an input channel
                mosys::video::FrameData getFrameData(const mosys::video::ChannelDetails channel, mosys::Timecode& timecode, int& frameCounter, int& queueSize);
                // Must be called with an output channel
                bool putFrame(const mosys::video::ChannelDetails channel, unsigned char* buffer, unsigned long size, unsigned char* audioBuffer, unsigned long audioSize, mosys::Timecode* timecode);
                // Must be called with an output channel
                bool setOutputFrameCallback(const mosys::video::ChannelDetails channel, mosys::video::FrameCallback frameCallback);

                bool getNameOfCardWithId(const char* cardId, std::string& cardName);
                int getChannelCountOfCardWithId(const char* cardId);
                mosys::video::Format* getFormat();
                float getFps();
                // This will return false if format is being controlled by one of the card's input change callbacks
                bool setFormat(mosys::video::Format* format);
                bool stopAllChannels();

            private:
                CardManager();
                void decklinkDeviceArrived(IDeckLink* decklink, size_t id);
                mosys::video::Channel* getChannel(mosys::video::ChannelDetails channel);
                mosys::video::SyncChannel* getSync(const char* cardId);
                void removeAll();

                DeckLinkDeviceDiscovery* m_decklink;
                std::map<std::string, std::unique_ptr<mosys::Card>> m_cards;
                mosys::video::DiscoveredCardCallback m_discoveredCardCallback;
                mosys::video::FormatChangedCallback m_formatChangedCallback;
                mosys::video::Format* m_format;
                unsigned short m_inputFrameDelay;
                bool m_canSetFormat;
        };
	} // namespace video
} // namespace mosys
