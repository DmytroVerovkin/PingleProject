// Copyright Epic Games, Inc. All Rights Reserved.

#include "PingleProjectGameMode.h"
#include "PingleProjectHUD.h"
#include "PingleProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

APingleProjectGameMode::APingleProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APingleProjectHUD::StaticClass();
}
