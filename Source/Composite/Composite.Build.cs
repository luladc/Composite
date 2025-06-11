// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Composite : ModuleRules
{
	public Composite(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "AIModule" 
		});
	}
}
