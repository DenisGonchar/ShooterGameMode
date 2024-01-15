// Fill out your copyright notice in the Description page of Project Settings.


#include "SGMDeathMatchGameMode.h"

#include "SGMPlayerController.h"


void ASGMDeathMatchGameMode::OnPlayerDeath(AController* InController)
{
	Super::OnPlayerDeath(InController);

	int32 countAlive = 0;
	for (auto it = GetWorld()->GetPlayerControllerIterator(); it; ++it)
	{
		if (const auto controller = Cast<ASGMPlayerController>(*it))
		{
			if (!controller->IsDead())
			{
				countAlive++;
			}
		}
	}

	if (GetNumPlayers() > 1 && countAlive == 1)
	{
		EndGame();
	}
}
