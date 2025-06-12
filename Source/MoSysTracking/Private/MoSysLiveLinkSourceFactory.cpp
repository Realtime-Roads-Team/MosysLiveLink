// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysLiveLinkSourceFactory.h"

#include "IMoSysTracking.h"
#include "MoSysLiveLinkUDPSource.h"
#include "MoSysLiveLinkSerialSource.h"
#include "MoSysTrackingPrivate.h"

#include "Features/IModularFeatures.h"

#define LOCTEXT_NAMESPACE "MoSysTrackingSource"

FText UMoSysLiveLinkSourceFactory::GetSourceDisplayName() const
{
    return LOCTEXT("SourceDisplayName", "Mo-Sys Hardware Source");
}

FText UMoSysLiveLinkSourceFactory::GetSourceTooltip() const
{
    return LOCTEXT("SourceTooltip", "Creates a connection to a Mo-Sys hardware LiveLink source");
}

TSharedPtr<SWidget> UMoSysLiveLinkSourceFactory::BuildCreationPanel(FOnLiveLinkSourceCreated OnLiveLinkSourceCreated) const
{
    return SNew(SMoSysLiveLinkSourceFactory).OnOkClicked(SMoSysLiveLinkSourceFactory::FOnOkClicked::
        CreateUObject(this, &UMoSysLiveLinkSourceFactory::OnOkClicked, OnLiveLinkSourceCreated));
}

void UMoSysLiveLinkSourceFactory::OnOkClicked(TSharedPtr<FMoSysSourceMode> Mode, FOnLiveLinkSourceCreated InOnLiveLinkSourceCreated) const
{
    if (IMoSysTracking::Get().GetOrAddSource(Mode->Mode) != nullptr)
    {
        InOnLiveLinkSourceCreated.ExecuteIfBound(IMoSysTracking::Get().GetOrAddSource(Mode->Mode), Mode->ToString());
    }
}

/** Called only when a preset is loaded. */
TSharedPtr<ILiveLinkSource> UMoSysLiveLinkSourceFactory::CreateSource(const FString& ConnectionString) const
{
    FMoSysSourceMode SourceMode;
    if (ConnectionString == SourceMode.UDPMode ||
        ConnectionString == SourceMode.SerialMode ||
        ConnectionString == SourceMode.AudioDemodMode)
    {
        return IMoSysTracking::Get().GetOrAddSource(SourceMode.GetEnum(ConnectionString));
    }
    UE_LOG(LogMoSysTracking, Error, TEXT("Could not create Mo-Sys source, invalid connection string."));
    return TSharedPtr<ILiveLinkSource>();
}

#undef LOCTEXT_NAMESPACE
