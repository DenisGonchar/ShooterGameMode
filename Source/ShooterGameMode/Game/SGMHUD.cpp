// Fill out your copyright notice in the Description page of Project Settings.


#include "SGMHUD.h"

#include "SGMGameState.h"
#include "Blueprint/UserWidget.h"
#include "ShooterGameMode/ShooterGameModeGameMode.h"

void ASGMHUD::BeginPlay()
{
	Super::BeginPlay();

	AddToScreen(GameHUD);

	if (const auto gameState = GetWorld()->GetGameState<ASGMGameState>())
	{
		gameState->OnGameEndDelegate.AddDynamic(this, &ASGMHUD::OnEndGame);
	}
	
}

void ASGMHUD::OnEndGame()
{
	AddToScreen(EndGameScreen);
}

void ASGMHUD::AddToScreen(TSubclassOf<UUserWidget> WidgetClass)
{
	if (WidgetClass != nullptr)
	{
		if(const auto widget = CreateWidget(PlayerOwner, WidgetClass))
		{
			widget->AddToViewport();
		}
	}
}
