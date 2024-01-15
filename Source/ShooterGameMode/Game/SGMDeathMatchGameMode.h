// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ShooterGameMode/ShooterGameModeGameMode.h"
#include "SGMDeathMatchGameMode.generated.h"


UCLASS()
class SHOOTERGAMEMODE_API ASGMDeathMatchGameMode : public AShooterGameModeGameMode
{
	GENERATED_BODY()
public:
	virtual void OnPlayerDeath(AController* InController) override;

	
};
