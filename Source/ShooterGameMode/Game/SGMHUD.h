// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ShooterGameMode/ShooterGameModeHUD.h"
#include "SGMHUD.generated.h"


UCLASS()
class SHOOTERGAMEMODE_API ASGMHUD : public AShooterGameModeHUD
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> GameHUD;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> EndGameScreen;
	
protected:
	UFUNCTION()
	void OnEndGame();

	void AddToScreen(TSubclassOf<UUserWidget> WidgetClass);
	
};
