// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class FirstPersonFootballEditorTarget : TargetRules
{
	public FirstPersonFootballEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("FirstPersonFootball");
	}
}
