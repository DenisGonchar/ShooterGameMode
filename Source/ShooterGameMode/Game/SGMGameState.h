// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "SGMGameState.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERGAMEMODE_API ASGMGameState : public AGameState
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameEndDelegate);
	
public:
	void NotifyEndGame();

public:
	UPROPERTY(BlueprintAssignable)
	FOnGameEndDelegate OnGameEndDelegate;
	
protected:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_EndGame();

	
};
