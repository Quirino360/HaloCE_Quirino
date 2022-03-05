// Fill out your copyright notice in the Description page of Project Settings.


#include "RocketLauncher.h"

URocketLauncher::URocketLauncher()
{
  m_maxAmmo = 8;
  m_maxAmmoCount = m_maxAmmo;

  m_magCapacity = 2;
  m_magCount = m_magCapacity;

  m_reloadTime = 3.0f;
  m_fireRate = 1.0;

  m_zoom = false;
  m_isAutomatic = false;
  m_canShoot = false;
}