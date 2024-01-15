// Fill out your copyright notice in the Description page of Project Settings.


#include "SGMPlayerController.h"

#include "ShooterGameMode/ShooterGameModeCharacter.h"
#include "ShooterGameMode/ShooterGameModeGameMode.h"

void ASGMPlayerController::PlayerDeath()
{
	OnPlayerDeathDelegate.Broadcast(this);

	if (const auto gameMode = GetWorld()->GetAuthGameMode<AShooterGameModeGameMode>())
	{
		gameMode->OnPlayerDeath(this);
	}
}

bool ASGMPlayerController::IsDead() const
{
	const auto pawn = GetPawn<AShooterGameModeCharacter>();
	
	return pawn != nullptr && pawn->IsDead();
}
