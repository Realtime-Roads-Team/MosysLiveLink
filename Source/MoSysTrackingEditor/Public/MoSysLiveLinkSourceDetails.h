// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"

#include "IMoSysTracking.h"

#include "IDetailCustomization.h"
#include "Widgets/DeclarativeSyntaxSupport.h"

typedef TSharedPtr<FString> FMoSysHardwareType;
class FMoSysLiveLinkSourceDetails : public IDetailCustomization
{
public:
    // IDetailCustomization Interface
    virtual void CustomizeDetails(IDetailLayoutBuilder &DetailBuilder) override;
    // ~End IDetailCustomization Interface

    template<class T = TSubclassOf<FMoSysLiveLinkSourceDetails>>
    static TSharedRef<IDetailCustomization> MakeInstance()
    {
        return MakeShareable(new T);
    }

    FMoSysLiveLinkSourceDetails(EMoSysSourceMode InSourceMode) : SourceMode(InSourceMode) {}

protected:
    TArray<FMoSysHardwareType> MoSysHardwares;

private:
    EMoSysSourceMode SourceMode;
    FName SubjectName;
    FMoSysHardwareType CurrentMoSysType;
    bool bIsSubjectNameEnabled = true;

    void OnSubjectNameChanged(const FText &NewText, ETextCommit::Type TextType);
    void OnSelectionChanged(FMoSysHardwareType SelectedMoSysHardware, ESelectInfo::Type SelectionType);
    bool IsSubjectNameEnabled() const;

    TSharedRef<SWidget> MakeWidgetForOption(FMoSysHardwareType InOption);
    FText GetCurrentItemLabel() const;
};

class FMoSysLiveLinkUDPSourceDetails : public FMoSysLiveLinkSourceDetails
{
public:
    FMoSysLiveLinkUDPSourceDetails() : FMoSysLiveLinkSourceDetails(EMoSysSourceMode::UDPMode)
    {
        MoSysHardwares.Add(MakeShareable(new FString("StarTracker")));
    	MoSysHardwares.Add(MakeShareable(new FString("Encoder")));
        MoSysHardwares.Add(MakeShareable(new FString("Super Gateway")));
        MoSysHardwares.Add(MakeShareable(new FString("VP Pro Stage")));
        MoSysHardwares.Add(MakeShareable(new FString("Mo-Cap")));
    }
};

class FMoSysLiveLinkSerialSourceDetails : public FMoSysLiveLinkSourceDetails
{
public:
	FMoSysLiveLinkSerialSourceDetails() : FMoSysLiveLinkSourceDetails(EMoSysSourceMode::SerialMode)
	{
		MoSysHardwares.Add(MakeShareable(new FString("StarTracker")));
		MoSysHardwares.Add(MakeShareable(new FString("Encoder")));
		MoSysHardwares.Add(MakeShareable(new FString("Handwheels")));
		MoSysHardwares.Add(MakeShareable(new FString("PanTiltHead")));
        MoSysHardwares.Add(MakeShareable(new FString("Radio")));
	}
};

class FMoSysLiveLinkAudioDemodSourceDetails : public FMoSysLiveLinkSourceDetails
{
public:
	FMoSysLiveLinkAudioDemodSourceDetails() : FMoSysLiveLinkSourceDetails(EMoSysSourceMode::AudioDemodMode)
	{
		MoSysHardwares.Add(MakeShareable(new FString("MediaPlayer")));
	}
};