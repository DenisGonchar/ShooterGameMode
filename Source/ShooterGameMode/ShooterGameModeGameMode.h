// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "ShooterGameModeGameMode.generated.h"

UCLASS(minimalapi)
class AShooterGameModeGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	AShooterGameModeGameMode();

	virtual void OnPlayerDeath(AController* InController);

	void EndGame();
public:
	
};



