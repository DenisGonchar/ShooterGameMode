// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShooterGameModeGameMode.h"
#include "ShooterGameModeHUD.h"
#include "ShooterGameModeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShooterGameModeGameMode::AShooterGameModeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShooterGameModeHUD::StaticClass();
}
