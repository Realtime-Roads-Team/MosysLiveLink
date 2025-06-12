// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
    public class MoSysTracking : MoSysModule
    {
        public MoSysTracking(ReadOnlyTargetRules Target) : base(Target)
        {            
            PublicDependencyModuleNames.AddRange(
                new string[]
                {
                    "LiveLink",
                    "LiveLinkCamera",
                    "LiveLinkComponents",
                    "LiveLinkInterface",
                    "MoSysLensDistortion",
                    "TimeManagement",
                    "LevelSequence",
                    "LensComponent"
                }
            );

            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                    "CameraCalibrationCore",
                    "CinematicCamera",
                    "Core",
                    "CoreUObject",
                    "Engine",
                    "InputCore",
                    "Networking",
                    "Projects",
                    "SlateCore",
                    "Slate",
                    "Sockets",
                }
            );
        }
    }
}
