// Fill out your copyright notice in the Description page of Project Settings.


#include "SniperRifle.h"

USniperRifle::USniperRifle()
{
  maxAmmo = 60;
  maxAmmoCount = maxAmmo;

  magCapacity = 12;
  magCount = magCapacity;

  reloadTime = 2.5f;
  fireRate = 1.0;

  zoom = false;
  isAutomatic = false;
  canShoot = false;
}