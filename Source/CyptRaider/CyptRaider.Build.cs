// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CyptRaider : ModuleRules
{
	public CyptRaider(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
