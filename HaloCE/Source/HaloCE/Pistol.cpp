// Fill out your copyright notice in the Description page of Project Settings.


#include "Pistol.h"

UPistol::UPistol()
{
	maxAmmo = 120;
	maxAmmoCount = maxAmmo;

	magCapacity = 12;
	magCount = magCapacity;

	reloadTime = 1.8f;
	fireRate = 0.5;

	zoom = true;
	isAutomatic = false;
	canShoot = false;
}