// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "SMoSysLiveLinkSourceFactory.h"

#include "Widgets/SBoxPanel.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Views/SHeaderRow.h"

#include "IMoSysTracking.h"

#define LOCTEXT_NAMESPACE "MoSysTrackingSourceFactory"

namespace MoSysTrackingUI
{
    const FName IdColumnName(TEXT("ID"));
};

class SMoSysTrackingRow : public SMultiColumnTableRow<FMoSysSourceModePtr>
{
public:
    SLATE_BEGIN_ARGS(SMoSysTrackingRow) {}
        /** The list item for this row */
        SLATE_ARGUMENT(FMoSysSourceModePtr, MoSysSourceModePtr)
    SLATE_END_ARGS()

    void Construct(const FArguments& Args, const TSharedRef<STableViewBase>& OwnerTableView)
    {
        MoSysSourceModePtr = Args._MoSysSourceModePtr;

        SMultiColumnTableRow<FMoSysSourceModePtr>::Construct(
            FSuperRowType::FArguments()
            .Padding(1.0f),
            OwnerTableView
        );
    }

    /** Overridden from SMultiColumnTableRow.  Generates a widget for this column of the list view. */
    virtual TSharedRef<SWidget> GenerateWidgetForColumn(const FName& ColumnName) override
    {
        if (ColumnName == MoSysTrackingUI::IdColumnName)
        {
            return SNew(STextBlock)
                .Text(FText::FromString(MoSysSourceModePtr->ToString()));
        }
        return SNullWidget::NullWidget;
    }

private:
    FMoSysSourceModePtr MoSysSourceModePtr;
};

void SMoSysLiveLinkSourceFactory::Construct(const FArguments& Args)
{
    OkClicked = Args._OnOkClicked;
    ChildSlot
    [
        //Creating the button that adds a new item on the list when pressed
        SNew(SBox)
        .WidthOverride(120)
        [
            SNew(SVerticalBox)
            + SVerticalBox::Slot()
            .AutoHeight()
            [
                SAssignNew(ListViewWidget, SListView<FMoSysSourceModePtr>)
                .ListItemsSource(&MoSysHardwareModes) //The Items array is the source of this listview
                .OnGenerateRow(this, &SMoSysLiveLinkSourceFactory::MakeSourceListViewWidget)
                .OnSelectionChanged(this, &SMoSysLiveLinkSourceFactory::OnSourceListSelectionChanged)
                .HeaderRow
                (
                    SNew(SHeaderRow)
                    + SHeaderRow::Column(MoSysTrackingUI::IdColumnName)
                    .FillWidth(130.0f)
                    .DefaultLabel(LOCTEXT("IdColumnHeaderName", "Mo-Sys Hardware"))
                )
            ]
            + SVerticalBox::Slot()
            .HAlign(HAlign_Right)
            .AutoHeight()
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
                .AutoWidth()
                [
                    SNew(SButton)
                    .OnClicked(this, &SMoSysLiveLinkSourceFactory::OnOkClicked)
                    [
                        SNew(STextBlock)
                        .Text(LOCTEXT("Ok", "Ok"))
                    ]
                ]
            ]
        ]
    ];

    MoSysHardwareModes.Add(MakeShared<FMoSysSourceMode>(EMoSysSourceMode::UDPMode));
    MoSysHardwareModes.Add(MakeShared<FMoSysSourceMode>(EMoSysSourceMode::SerialMode));
}

TSharedRef<ITableRow> SMoSysLiveLinkSourceFactory::MakeSourceListViewWidget(FMoSysSourceModePtr MoSysSourceMode, const TSharedRef<STableViewBase>& OwnerTable) const
{
    return SNew(SMoSysTrackingRow, OwnerTable).MoSysSourceModePtr(MoSysSourceMode);
}

void SMoSysLiveLinkSourceFactory::OnSourceListSelectionChanged(FMoSysSourceModePtr MoSysHardware, ESelectInfo::Type SelectionType)
{
    SelectedResult = MoSysHardware;
}

FReply SMoSysLiveLinkSourceFactory::OnOkClicked()
{
    if (SelectedResult.IsValid())
    {
        OkClicked.ExecuteIfBound(SelectedResult);
    }
    return FReply::Handled();
}

#undef LOCTEXT_NAMESPACE
