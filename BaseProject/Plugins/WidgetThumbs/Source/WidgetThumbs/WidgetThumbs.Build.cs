// Copyright 2019 Recreational Software, Inc. All Rights Reserved.

using UnrealBuildTool;

public class WidgetThumbs : ModuleRules
{
	public WidgetThumbs(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"RenderCore",
				"UMG",
				"UMGEditor",
				"UnrealEd",
			}
		);
	}
}
