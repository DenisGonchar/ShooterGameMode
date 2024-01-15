// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShooterGameModeGameMode.h"
#include "ShooterGameModeHUD.h"
#include "ShooterGameModeCharacter.h"
#include "Game/SGMGameState.h"
#include "UObject/ConstructorHelpers.h"

AShooterGameModeGameMode::AShooterGameModeGameMode()
	: Super()
{
	
	HUDClass = AShooterGameModeHUD::StaticClass();
}

void AShooterGameModeGameMode::OnPlayerDeath(AController* InController)
{
	
}

void AShooterGameModeGameMode::EndGame()
{
	for (auto it = GetWorld()->GetPlayerControllerIterator(); it; ++it)
    {
    	it->Get()->DisableInput(it->Get());
    }

	if (const auto gameState = GetGameState<ASGMGameState>())
	{
		gameState->NotifyEndGame();
	}
	
}
