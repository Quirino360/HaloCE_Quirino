// Fill out your copyright notice in the Description page of Project Settings.


#include "AssaultRifle.h"

UAssaultRifle::UAssaultRifle()
{
  maxAmmo = 600;
  maxAmmoCount = maxAmmo;

  magCapacity = 60;
  magCount = magCapacity;

  reloadTime = 2.7f;
  fireRate = 0.1;

  zoom = true;
  isAutomatic = true;
  canShoot = false;
}