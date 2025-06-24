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
                PublicAdditionalLibraries.Add(Path.Combine(LibDir, "libcrypto.lib"));
                PublicAdditionalLibraries.Add(Path.Combine(LibDir, "libssl.lib"));
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

            string LibDirOpenTrackIO = Path.Combine(LibDirM, "mosys-cpp", "tracking", "OpenTrackIO", "OpenTrackIO", "opentrackio-cpp", "include");
            PublicIncludePaths.Add(LibDirOpenTrackIO);

            string LibDirNlohmann = Path.Combine(LibDirM, "mosys-cpp", "tracking", "OpenTrackIO", "OpenTrackIO", "opentrackio-cpp", "external");
            PublicIncludePaths.Add(LibDirNlohmann);
            PublicDelayLoadDLLs.Add("Cpl_Client-64.dll");

            string ProjectRoot = Path.GetFullPath(Path.Combine(ModuleDirectory, "..", ".."));
            string BinariesDir = Path.Combine(ProjectRoot, "Binaries", "Win64");

            string CryptoDLL = Path.Combine(LibDir, "libcrypto-3-x64.dll");
            string SSLDLL = Path.Combine(LibDir, "libssl-3-x64.dll");

            string OutputCryptoDLL = Path.Combine(BinariesDir, Path.GetFileName(CryptoDLL));
            string OutputSSLDLL = Path.Combine(BinariesDir, Path.GetFileName(SSLDLL));

            // Add API for Runtime too
            RuntimeDependencies.Add(Path.Combine(LibDir, "Cpl_Client-64.dll"));

            // Unreal dependencies to link against, should only be the very basic modules
            PrivateDependencyModuleNames.AddRange(new string[] {
                "Core",
                "CoreUObject",
                "Engine"
            });

            RuntimeDependencies.Add(OutputCryptoDLL, CryptoDLL);
            RuntimeDependencies.Add(OutputSSLDLL, SSLDLL);
        }
        else
        {
            System.Console.WriteLine("Mo-Sys Virtual Production does not support this platform");
        }
    }
}
