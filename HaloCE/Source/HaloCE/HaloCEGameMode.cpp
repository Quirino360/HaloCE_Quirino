// Copyright Epic Games, Inc. All Rights Reserved.

#include "HaloCEGameMode.h"
#include "HaloCEHUD.h"
#include "HaloCECharacter.h"
#include "UObject/ConstructorHelpers.h"

AHaloCEGameMode::AHaloCEGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHaloCEHUD::StaticClass();
}
