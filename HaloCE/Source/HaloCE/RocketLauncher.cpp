// Fill out your copyright notice in the Description page of Project Settings.


#include "RocketLauncher.h"

URocketLauncher::URocketLauncher()
{
  maxAmmo = 8;
  maxAmmoCount = maxAmmo;

  magCapacity = 2;
  magCount = magCapacity;

  reloadTime = 3.0f;
  fireRate = 1.0;

  zoom = false;
  isAutomatic = false;
  canShoot = false;
}