// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SGMPlayerController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerDeathDelegate, class AController*, Controller);

UCLASS()
class SHOOTERGAMEMODE_API ASGMPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	void PlayerDeath();

		bool IsDead() const;
public:
	UPROPERTY(BlueprintAssignable)
	FOnPlayerDeathDelegate OnPlayerDeathDelegate;
};
