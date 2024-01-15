// Fill out your copyright notice in the Description page of Project Settings.


#include "SGMGameState.h"

void ASGMGameState::NotifyEndGame()
{
	Multicast_EndGame();
}

void ASGMGameState::Multicast_EndGame_Implementation()
{
	OnGameEndDelegate.Broadcast();
}
