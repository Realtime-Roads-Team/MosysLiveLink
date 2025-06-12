// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "LiveLinkSourceFactory.h"
#include "SMoSysLiveLinkSourceFactory.h"
#include "MoSysLiveLinkSourceFactory.generated.h"

class FMoSysLiveLinkSource;
class SMoSysLiveLinkSourceFactory;

UCLASS()
class UMoSysLiveLinkSourceFactory : public ULiveLinkSourceFactory
{
    GENERATED_BODY()
public:

    //~ Begin ULiveLinkSourceFactory Interface
    virtual FText GetSourceDisplayName() const override;
    virtual FText GetSourceTooltip() const override;

    virtual EMenuType GetMenuType() const override { return EMenuType::SubPanel; }
    virtual TSharedPtr<SWidget> BuildCreationPanel(FOnLiveLinkSourceCreated OnLiveLinkSourceCreated) const override;

    // ! Warning: This function gets called when a preset containing a source gets loaded. 
    // ! Because ConnectionStrings are writable (via advanced section of settings), it will
    // ! return an invalid source if the user changes the original source
    virtual TSharedPtr<ILiveLinkSource> CreateSource(const FString& ConnectionString) const override;
    //~ End ULiveLinkSourceFactory Interface

private:
    void OnOkClicked(TSharedPtr<FMoSysSourceMode> Mode, FOnLiveLinkSourceCreated OnLiveLinkSourceCreated) const;
};


