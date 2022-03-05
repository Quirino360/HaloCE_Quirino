// Fill out your copyright notice in the Description page of Project Settings.


#include "SniperRifle.h"

USniperRifle::USniperRifle()
{
  m_maxAmmo = 60;
  m_maxAmmoCount = m_maxAmmo;

  m_magCapacity = 12;
  m_magCount = m_magCapacity;

  m_reloadTime = 2.5f;
  m_fireRate = 1.0;

  m_zoom = false;
  m_isAutomatic = false;
  m_canShoot = false;
}