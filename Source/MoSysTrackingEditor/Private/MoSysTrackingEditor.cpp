// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "IMoSysTrackingEditor.h"
#include "MoSysTrackingEditorPrivate.h"
#include "IMoSysTracking.h"

#include "PropertyEditorModule.h"
#include "MoSysLiveLinkSourceDetails.h"


class FMoSysTrackingEditor
    : public IMoSysTrackingEditor
{
public:

    //~ IModuleInterface interface
    virtual void StartupModule() 
	{
		auto& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule >("PropertyEditor");
		// MakeInstance template types must be subclasses of FMoSysLiveLinkSourceDetails class
		PropertyModule.RegisterCustomClassLayout("MoSysLiveLinkUDPSourceSettings", FOnGetDetailCustomizationInstance::CreateStatic(&FMoSysLiveLinkSourceDetails::MakeInstance<FMoSysLiveLinkUDPSourceDetails>));
		PropertyModule.RegisterCustomClassLayout("MoSysLiveLinkSerialSourceSettings", FOnGetDetailCustomizationInstance::CreateStatic(&FMoSysLiveLinkSourceDetails::MakeInstance<FMoSysLiveLinkSerialSourceDetails>));
	}
    virtual void ShutdownModule() 
	{
		if (FModuleManager::Get().IsModuleLoaded("PropertyEditor"))
		{
			auto& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
			PropertyModule.UnregisterCustomClassLayout("MoSysLiveLinkUDPSourceSettings");
			PropertyModule.UnregisterCustomClassLayout("MoSysLiveLinkSerialSourceSettings");
		}
	}
    // End of IModuleInterface

};

DEFINE_LOG_CATEGORY(LogMoSysTrackingEditor);

IMPLEMENT_MODULE(FMoSysTrackingEditor, MoSysTrackingEditor);
