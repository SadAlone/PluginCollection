// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;
public class groupActionEditorMode : ModuleRules
{
	public groupActionEditorMode(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		string engine_path = Path.GetFullPath(Target.RelativeEnginePath);
		string srcrt_path = engine_path + "Plugins//lcTool//Source//groupAction//Public//";


		PublicIncludePaths.AddRange(
				 new string[] {
                     // ... add public include paths required here ...
                     srcrt_path,
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
				"Slate",
				"LcRuntimeLibrary",

                // ... add other public dependencies that you statically link with here ...
            }
			);


		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"InputCore",
				"UnrealEd",
				"LevelEditor",
				"LevelSequence",
				"EditorStyle",
				"Landscape",
				"AiModule",
				"MovieScene",
				"EditorSubsystem",
				"groupAction",
				"LcRuntimeLibrary",

                // ... add private dependencies that you statically link with here ...  
            }
			);


		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
                // ... add any modules that your module loads dynamically here ...
            }
			);
	}
}
