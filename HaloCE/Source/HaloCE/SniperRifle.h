// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "SniperRifle.generated.h"

/**
 * 
 */
UCLASS()
class HALOCE_API USniperRifle : public UWeapon
{
	GENERATED_BODY()
public:
	USniperRifle();
	
	virtual void SpawnBullets(FRotator SpawnRotation, FVector SpawnLocation, FVector direction) override;
};
