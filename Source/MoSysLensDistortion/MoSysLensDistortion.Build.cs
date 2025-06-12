// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

namespace UnrealBuildTool.Rules
{

    public class MoSysLensDistortion : MoSysModule
    {
        public MoSysLensDistortion(ReadOnlyTargetRules Target) : base(Target)
        {            
            PublicDependencyModuleNames.AddRange(new string[] {
                "CameraCalibrationCore",
                "Core",
                "CoreUObject",
                "Engine",
                "RHI",
                "Engine",
                "RenderCore",
                "SlateCore",
                "UMG",
                "Sockets", 
                "LensComponent",
            });

            PrivateDependencyModuleNames.AddRange(new string[] {
                "CinematicCamera",
                "LiveLinkComponents",
                "Projects",
            });

            // To handle dependencies inside #if WITH_EDITOR
            if (Target.Type == TargetType.Editor)
            {
                PrivateDependencyModuleNames.AddRange(new string[] {
                    "UnrealEd",
                });
            }
        }
    }
}
