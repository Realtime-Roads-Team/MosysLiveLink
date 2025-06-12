// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

namespace UnrealBuildTool.Rules
{

    public class MoSysTrackingEditor : ModuleRules
    {
        public MoSysTrackingEditor(ReadOnlyTargetRules Target) : base(Target)
        {
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

            PrivateIncludePaths.AddRange(new string[] {
                "MoSysTracking/Private",
            });

            PrivateDependencyModuleNames.AddRange(new string[] {
                "CameraCalibrationCore",
                "Core",
                "CoreUObject",
                "Engine",
                "InputCore",
                "LiveLinkInterface",
                "SlateCore",
                "Slate",
                "PlacementMode",
                "PropertyEditor",
                "UnrealEd",
            });

            PublicDependencyModuleNames.AddRange(new string[] {
                "MoSysTracking",
                "LiveLink",
            });
            
        }
    }
}
