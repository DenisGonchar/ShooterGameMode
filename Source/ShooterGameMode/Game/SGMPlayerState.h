// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "SGMPlayerState.generated.h"


UCLASS()
class SHOOTERGAMEMODE_API ASGMPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
public:
	UPROPERTY(Replicated, BlueprintReadOnly)
	float TotalDamage;

	UPROPERTY(Replicated, BlueprintReadOnly)
	int32 TotalKills;

	
};
