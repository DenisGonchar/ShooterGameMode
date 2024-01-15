// Fill out your copyright notice in the Description page of Project Settings.


#include "SGMPlayerState.h"

#include "Net/UnrealNetwork.h"

void ASGMPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(ASGMPlayerState, TotalDamage);
	DOREPLIFETIME(ASGMPlayerState, TotalKills);
	
}
