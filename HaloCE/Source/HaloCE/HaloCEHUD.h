// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "HaloCEHUD.generated.h"

UCLASS()
class AHaloCEHUD : public AHUD
{
	GENERATED_BODY()

public:
	AHaloCEHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

