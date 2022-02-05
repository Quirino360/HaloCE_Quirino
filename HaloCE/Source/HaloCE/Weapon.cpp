// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"

// Sets default values for this component's properties
UWeapon::UWeapon()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	maxAmmo = 60;
	maxAmmoCount = maxAmmo;

	magCapacity = 12;
	magCount = magCapacity;

	reloadTime = 6.0f;
	fireRate = 0.5;

	zoom = false;
	isAutomatic = false;
	canShoot = false;
	// ...
}
	

// Called when the game starts
void UWeapon::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWeapon::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	// ...
}

void UWeapon::Reload()
{
	if (maxAmmoCount + magCount <= magCapacity)
	{
		magCount += maxAmmoCount;
		maxAmmoCount = 0;
	}
	else
	{
		maxAmmoCount -= magCapacity - magCount;
		magCount += magCapacity - magCount;
	}
	

}

