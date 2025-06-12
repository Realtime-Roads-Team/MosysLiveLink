// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Views/SListView.h"
#include "Input/Reply.h"
#include "Types/SlateEnums.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/Input/SEditableTextBox.h"

class ITableRow;
class STableViewBase;
struct FMoSysSourceMode;

typedef TSharedPtr<FMoSysSourceMode> FMoSysSourceModePtr;
class SMoSysLiveLinkSourceFactory : public SCompoundWidget
{
public:
    DECLARE_DELEGATE_OneParam(FOnOkClicked, FMoSysSourceModePtr);

    SLATE_BEGIN_ARGS(SMoSysLiveLinkSourceFactory) {}
        SLATE_EVENT(FOnOkClicked, OnOkClicked)
    SLATE_END_ARGS()

    void Construct(const FArguments& Args);

private:
    TSharedRef<ITableRow> MakeSourceListViewWidget(FMoSysSourceModePtr MoSysSourceMode, const TSharedRef<STableViewBase>& OwnerTable) const;
    void OnSourceListSelectionChanged(FMoSysSourceModePtr MoSysHardware, ESelectInfo::Type SelectionType);
    FReply OnOkClicked();

    /* The actual UI list */
    TSharedPtr<SListView<FMoSysSourceModePtr>> ListViewWidget;

    /* The list of Source Modes*/
    TArray<FMoSysSourceModePtr> MoSysHardwareModes;

    FMoSysSourceModePtr SelectedResult;
    FOnOkClicked OkClicked;
};
