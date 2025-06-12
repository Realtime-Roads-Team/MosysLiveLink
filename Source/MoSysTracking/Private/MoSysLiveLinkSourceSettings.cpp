// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysLiveLinkSourceSettings.h"

#include "IMoSysTracking.h"

#include "Features/IModularFeatures.h"
#include "ILiveLinkClient.h"
#include "LiveLinkClient.h"

#include "Interfaces/IPv4/IPv4Address.h"

#if WITH_EDITOR
void UMoSysLiveLinkSourceSettings::PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent)
{
    if (PropertyChangedEvent.MemberProperty->GetFName() == "Mode")
    {
        if (Mode == ELiveLinkSourceMode::Timecode)
        {
            IModularFeatures& ModularFeatures = IModularFeatures::Get();
            FLiveLinkClient *LiveLinkClient = nullptr;
            if (ModularFeatures.IsModularFeatureAvailable(ILiveLinkClient::ModularFeatureName))
            {
                LiveLinkClient = static_cast<FLiveLinkClient*>(&ModularFeatures.GetModularFeature<ILiveLinkClient>(ILiveLinkClient::ModularFeatureName));
            }

            if (LiveLinkClient)
            {
                BufferSettings.DetectedFrameRate = IMoSysTracking::Get().GetMoSysVPFrameRate();
            }
        }
    }
}
#endif


UMoSysLiveLinkUDPSourceSettings::UMoSysLiveLinkUDPSourceSettings()
    : UMoSysLiveLinkSourceSettings()
{
    TSharedPtr<FMoSysLiveLinkUDPSource> Source = StaticCastSharedPtr<FMoSysLiveLinkUDPSource>(IMoSysTracking::Get().GetOrAddSource(EMoSysSourceMode::UDPMode));
    if (Source)
    {
        IPAddress = Source->GetIPAddress();
        OldAddress = IPAddress;
    }
}

#if WITH_EDITOR
void UMoSysLiveLinkUDPSourceSettings::PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);
    if (PropertyChangedEvent.MemberProperty->GetFName() == "IPAddress")
    {
        if (IMoSysTracking::Get().GetOrAddSource(EMoSysSourceMode::UDPMode))
        {
            FIPv4Address Address;
            if (Parse(IPAddress, Address))
            {
                TSharedPtr<FMoSysLiveLinkUDPSource> Source = StaticCastSharedPtr<FMoSysLiveLinkUDPSource>(IMoSysTracking::Get().GetOrAddSource(EMoSysSourceMode::UDPMode));
                if (Source)
                {
                    Source->ChangeIPAddress(IPAddress);
                    OldAddress = IPAddress;
                }
            }
            else
            {
                IPAddress = OldAddress;
            }
        }
    }
}
#endif

bool UMoSysLiveLinkUDPSourceSettings::Parse(const FString &AddressString, FIPv4Address &OutAddress)
{
    TArray<FString> Tokens;

    if (AddressString.ParseIntoArray(Tokens, TEXT("."), false) == 4)
    {
        /** Check if the parsed address contains numeric numbers only*/
        for (int i = 0; i < 4; ++i)
        {
            if (!Tokens[i].IsNumeric())
            {
                return false;
            }
        }

        OutAddress.A = FCString::Atoi(*Tokens[0]);
        OutAddress.B = FCString::Atoi(*Tokens[1]);
        OutAddress.C = FCString::Atoi(*Tokens[2]);
        OutAddress.D = FCString::Atoi(*Tokens[3]);

        return true;
    }
    return false;
}
