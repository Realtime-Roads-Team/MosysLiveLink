// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class MoSysModule : ModuleRules
{
    public MoSysModule(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            // Loads MoSysAPI as a dependency, anything inheriting from MoSysModule will implicitly reference MoSysAPI and the ThirdParty include folder
            // You will need to include IMoSysAPI.h to use the managers
            PrivateDependencyModuleNames.AddRange(new string[]
            {
                "MoSysAPI"
            });
            PrivateIncludePathModuleNames.AddRange(new string[]
            {
                "MoSysAPI",
            });
            PublicIncludePathModuleNames.AddRange(new string[]
            {
                "MoSysAPI",
            });
            // Only perform includes here, MoSysAPI now loads the libraries
            string ThirdPartyDir = Path.Combine(ModuleDirectory, "..", "..", "ThirdParty");
            if (!Path.Exists(ThirdPartyDir))
            {
                ThirdPartyDir = Path.Combine(ModuleDirectory, "..", "..", "Source", "ThirdParty");
            }
            string LibDir = Path.Combine(ThirdPartyDir, "MoSys");
            if (Path.Exists(LibDir))
            {
                PublicIncludePaths.Add(Path.Combine(LibDir, "include"));
            }
            string LibDirM = Path.Combine(ThirdPartyDir, "MoSys", "include");
            if (Path.Exists(LibDirM))
            {
                PublicIncludePaths.Add(Path.Combine(LibDirM, "mosys-cpp"));
            }
        }
        else
        {
            System.Console.WriteLine("Mo-Sys Virtual Production does not support this platform");
        }
    }
}
