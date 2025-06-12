// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysLiveLinkSourceDetails.h"

#include "IMoSysTracking.h"
#include "MoSysLiveLinkUDPSource.h"
#include "MoSysTrackingEditorPrivate.h"

#include "DetailLayoutBuilder.h"
#include "DetailCategoryBuilder.h"
#include "DetailWidgetRow.h"

#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Input/SComboBox.h"

#include "PropertyHandle.h"


#define LOCTEXT_NAMESPACE "MoSysTrackingSourceDetails"

void FMoSysLiveLinkSourceDetails::CustomizeDetails(IDetailLayoutBuilder & DetailBuilder)
{
    // Create a category so this is displayed early in the properties
    IDetailCategoryBuilder& MyCategory = DetailBuilder.EditCategory("Mo-Sys", FText::FromString("Mo-Sys Live Link"), ECategoryPriority::Important);

    if (MoSysHardwares.Num() == 0 && SourceMode != EMoSysSourceMode::AudioDemodMode)
    {
        UE_LOG(LogMoSysTrackingEditor, Error, TEXT("Custom details had no Mo-Sys hardware types available"));
        return;
    }
    CurrentMoSysType = MoSysHardwares[0];

    auto OnSubjectAdd = [this]()
    {
        if (IMoSysTracking::Get().GetOrAddSource(SourceMode) != nullptr)
        {
            IMoSysTracking::Get().GetOrAddSource(SourceMode)->CreateSubject(SubjectName);
        }
        return FReply::Handled();
    };

    auto OnSubjectDelete = [this]()
    {
        if (IMoSysTracking::Get().GetOrAddSource(SourceMode) != nullptr)
        {
            IMoSysTracking::Get().GetOrAddSource(SourceMode)->RemoveSubjectClicked(SubjectName);
        }
        return FReply::Handled();
    };

    MyCategory.AddCustomRow(LOCTEXT("Add Subject", "Add Subject"))
    .NameContent()
    .VAlign(EVerticalAlignment::VAlign_Top)
    [
        SNew(STextBlock)
        .Text(LOCTEXT("Mo-Sys", "Add a Mo-Sys Subject"))
    ]
    .ValueContent()
    .HAlign(EHorizontalAlignment::HAlign_Left)
    [
        SNew(SBox)
        [
            SNew(SVerticalBox)
            + SVerticalBox::Slot()
            .Padding(FMargin(0.f, 5.f))
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
                .HAlign(HAlign_Fill)
                [
                    SNew(SComboBox<FMoSysHardwareType>)
                    .OptionsSource(&MoSysHardwares)
                    .OnSelectionChanged(this, &FMoSysLiveLinkSourceDetails::OnSelectionChanged)
                    .OnGenerateWidget(this, &FMoSysLiveLinkSourceDetails::MakeWidgetForOption)
                    .InitiallySelectedItem(CurrentMoSysType)
                    [
                        SNew(STextBlock)
                        .Text(this, &FMoSysLiveLinkSourceDetails::GetCurrentItemLabel)
                    ]
                ]
            ]
            + SVerticalBox::Slot()
            .Padding(FMargin(0.f, 5.f))
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
                .HAlign(HAlign_Fill)
                [
                    SNew(SEditableTextBox)
                    .HintText(LOCTEXT("SubjectName", "Subject Name"))
                    .OnTextCommitted(this, &FMoSysLiveLinkSourceDetails::OnSubjectNameChanged)
                    .IsEnabled(this, &FMoSysLiveLinkSourceDetails::IsSubjectNameEnabled)
                ]
            ]
            + SVerticalBox::Slot()
            .Padding(FMargin(0.f, 5.f))
            [
                SNew(SButton)
                .Text(LOCTEXT("New Subject Button", "Add New Subject"))
                .HAlign(EHorizontalAlignment::HAlign_Center)
                .VAlign(EVerticalAlignment::VAlign_Center)
                .OnClicked_Lambda(OnSubjectAdd)
            ]
            + SVerticalBox::Slot()
            .Padding(FMargin(0.f, 5.f))
            [
                SNew(SButton)
                .Text(LOCTEXT("Delete Subject Button", "Delete Subject"))
                .HAlign(EHorizontalAlignment::HAlign_Center)
                .VAlign(EVerticalAlignment::VAlign_Center)
                .OnClicked_Lambda(OnSubjectDelete)
            ]
        ]
    ];
}

void FMoSysLiveLinkSourceDetails::OnSubjectNameChanged(const FText& NewText, ETextCommit::Type TextType)
{
    FString Name = NewText.ToString();
    SubjectName = FName(*Name);
}

void FMoSysLiveLinkSourceDetails::OnSelectionChanged(FMoSysHardwareType SelectedMoSysHardware, ESelectInfo::Type SelectionType)
{
    CurrentMoSysType = SelectedMoSysHardware;
    if (*CurrentMoSysType.Get() == "Radio")
    {
        SubjectName = "Radio";
        bIsSubjectNameEnabled = false;
    }
    else
    {
        bIsSubjectNameEnabled = true;
    }
}

bool FMoSysLiveLinkSourceDetails::IsSubjectNameEnabled() const
{
    return bIsSubjectNameEnabled;
}

TSharedRef<SWidget> FMoSysLiveLinkSourceDetails::MakeWidgetForOption(FMoSysHardwareType InOption)
{
    return SNew(STextBlock).Text(FText::FromString(*InOption));
}

FText FMoSysLiveLinkSourceDetails::GetCurrentItemLabel() const
{
    if (CurrentMoSysType.IsValid())
    {
        return FText::FromString(*CurrentMoSysType);
    }

    return LOCTEXT("InvalidComboEntryText", "<<Invalid option>>");
}

#undef LOCTEXT_NAMESPACE
