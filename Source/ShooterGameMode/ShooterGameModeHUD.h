// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ShooterGameModeHUD.generated.h"

UCLASS()
class AShooterGameModeHUD : public AHUD
{
	GENERATED_BODY()

public:
	AShooterGameModeHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

