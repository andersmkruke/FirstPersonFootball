// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FirstPersonFootballGameMode.h"
#include "FirstPersonFootballHUD.h"
#include "FirstPersonFootballCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstPersonFootballGameMode::AFirstPersonFootballGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFirstPersonFootballHUD::StaticClass();
}
