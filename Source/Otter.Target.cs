// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class OtterTarget : TargetRules
{
	public OtterTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		ExtraModuleNames.Add("Otter");
		// Warning when updating to new version told me to add this
		// Adding in both Otter and OtterEditor target files to be safe
		bLegacyParentIncludePaths = false;
		CppStandard=CppStandardVersion.Default;
		WindowsPlatform.bStrictConformanceMode = true;
		bValidateFormatStrings = true;
	}
}
