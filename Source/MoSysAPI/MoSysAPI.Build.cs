// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class MoSysAPI : ModuleRules
{
    public MoSysAPI(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        // Load Mo-Sys C++ Libraries
        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            // Add libraries, only load them into this module
            string ThirdPartyDir = Path.Combine(ModuleDirectory, "..", "..", "ThirdParty");
            if (!Path.Exists(ThirdPartyDir))
            {
                ThirdPartyDir = Path.Combine(ModuleDirectory, "..", "..", "Source", "ThirdParty");
            }
            string LibDir = Path.Combine(ThirdPartyDir, "MoSys");
            if (Path.Exists(LibDir))
            {
                PublicAdditionalLibraries.Add(Path.Combine(LibDir, "mosys_core.lib"));
                PublicAdditionalLibraries.Add(Path.Combine(LibDir, "mosys_networking.lib"));
                PublicAdditionalLibraries.Add(Path.Combine(LibDir, "mosys_lens.lib"));
                PublicAdditionalLibraries.Add(Path.Combine(LibDir, "mosys_robotics.lib"));
                PublicAdditionalLibraries.Add(Path.Combine(LibDir, "mosys_tracking.lib"));
                PublicAdditionalLibraries.Add(Path.Combine(LibDir, "mosys_vp.lib"));
            }
            PublicSystemLibraries.Add("comsuppw.lib"); // Required for ATEM

            // Includes, duplicated from MoSysModule
            if (Path.Exists(LibDir))
            {
                PublicIncludePaths.Add(Path.Combine(LibDir, "include"));
            }
            string LibDirM = Path.Combine(ThirdPartyDir, "MoSys", "include");
            if (Path.Exists(LibDirM))
            {
                PublicIncludePaths.Add(Path.Combine(LibDirM, "mosys-cpp"));
            }
            // Unreal dependencies to link against, should only be the very basic modules
            PrivateDependencyModuleNames.AddRange(new string[] {
                "Core",
                "CoreUObject",
                "Engine"
            });
        }
        else
        {
            System.Console.WriteLine("Mo-Sys Virtual Production does not support this platform");
        }
    }
}
