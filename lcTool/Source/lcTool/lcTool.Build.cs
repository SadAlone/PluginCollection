// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class lcTool : ModuleRules
{
	public lcTool(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(
			new string[] {
								"Editor/Sequencer/Private",
								"Editor/SequencerWidgets/Private",
								"Editor/Blutility/Public",
								"Editor/Blutility/Classes",
								"lcTool/Public",
								"../Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/",
								"../Plugins/Editor/EditorScriptingUtilities/Source/EditorScriptingUtilities/Public/",
								"../Plugins/Editor/MeshEditor/Source/MeshEditor/Public/",
								"../Plugins/lcTool/Source/LcRuntimeLibrary/Public/",
								"../Plugins/MovieScene/SequencerScripting/Source/SequencerScripting/Public/ExtensionLibraries",
                // ... add public include paths required here ...
            }
			);


		PrivateIncludePaths.AddRange(
			new string[] {
                // ... add other private include paths required here ...

            }
			);


		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"Engine",
				"RHI",
				"RenderCore",
				"MeshEditor",
				"UnrealEd",
				"MovieRenderPipelineEditor",
				"SkeletalMeshUtilitiesCommon",
				"Persona",
				"EditorStyle",
				"Sequencer",
				"SequencerWidgets",
				"AppFramework",
				"Sequencer",
				"SequenceRecorder",
				"Foliage",
				"MaterialEditor",
				"MovieScene",
				"EditorSubsystem",
				"EditorScriptingUtilities",
				"Blutility",
				"SkeletalMeshEditor",
				"EditableMesh",
				"buildLight",
				"Landscape",
				"LcRuntimeLibrary",
				"HTTP",
				"Json",
				"JsonUtilities",
				"WorldBrowser",
				"MovieSceneTracks",
				"Kismet",
				"HairStrandsCore",
				"ToolMenus",
				"ContentBrowser",
				"EditorScriptingUtilities",
				"CinematicCamera",
				"SequencerScripting",
				"ContentBrowserData",
				"ContentBrowserAssetDataSource",

                // ... add other public dependencies that you statically link with here ...
            }
			);


		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"RHI",
				"RenderCore",
				"EditableMesh",
				"MeshDescription",
				"Projects",
				"Engine",
				"InputCore",
				"UnrealEd",
				"MovieRenderPipelineCore",
				"LevelEditor",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"Sequencer",
				"LevelSequence",
				"LevelSequenceEditor",
				"UMG",
				"UMGEditor",
				"Blutility",
				"WorldBrowser",
				"LcRuntimeLibrary",
				"ContentBrowserAssetDataSource",
				"SequencerScripting",
                // ... add private dependencies that you statically link with here ...  
            }
			);


		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
                // ... add any modules that your module loads dynamically here ...
            }
			);

        if (Target.Type == TargetType.Editor)
        {
            PublicDependencyModuleNames.Add("FBX");
        }
        // Else just add dynamic depency for FBX manually.
        else
        {
            PublicIncludePaths.Add(FBXModuleIncludePath);

            // Setup stub library for build.
            PublicLibraryPaths.Add(FBXModuleLibraryPath);
            PublicAdditionalLibraries.Add(FBXStubLibraryName);

            // Tell UBT to use DLL version of the FBXSDK at runtime.
            PublicDefinitions.Add(FBXSharedLibrarySymbol);
            // Copy DLL to output directory on build.
            RuntimeDependencies.Add(
                "$(TargetOutputDir)/" + FBXRuntimeLibraryName,
                Path.Combine(FBXModuleLibraryPath, FBXRuntimeLibraryName)
            );
        }


    }

    public string EnginePath
    {
        get { return Path.GetFullPath(Target.RelativeEnginePath); }
    }

    public string EngineThirdPartyPath
    {
        get { return Path.GetFullPath(Path.Combine(EnginePath, "Source/ThirdParty/")); }
    }

    public string FBXModuleIncludePath
    {
        get { return Path.Combine(EngineThirdPartyPath, "C:/UE4_Engine/UnrealEngine-4.26.1-release/Engine/Binaries/ThirdParty/FBX_SDK/2020.2/include/"); }
    }

    public string FBXModuleLibraryPath
    {
        get { return Path.Combine(EngineThirdPartyPath, "C:/UE4_Engine/UnrealEngine-4.26.1-release/Engine/Binaries/ThirdParty/FBX_SDK/2020.2/lib/vs2019/x64/release/"); }
    }

    string FBXStubLibraryName
    {
        get { return "libfbxsdk.lib"; }
    }

    public string FBXRuntimeLibraryName
    {
        get { return "libfbxsdk.dll"; }
    }

    public string FBXSharedLibrarySymbol
    {
        get { return "FBXSDK_SHARED"; }
    }

}
