// Fill out your copyright notice in the Description page of Project Settings.


#include "SniperRifle.h"

#include "Bullet.h"

#include "Kismet/KismetMathLibrary.h"

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


void USniperRifle::SpawnBullets(FRotator SpawnRotation, FVector SpawnLocation, FVector direction)
{
  UWorld* const World = GetWorld();

  if (World == nullptr) {
    return;
  }
  //Set Spawn Collision Handling Override
  FActorSpawnParameters ActorSpawnParams;
  ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

  direction = UKismetMathLibrary::GetForwardVector(SpawnRotation);
  direction.Normalize();

  ABullet* bulAux = World->SpawnActor<ABullet>(m_bullet, SpawnLocation, SpawnRotation, ActorSpawnParams);

  if (bulAux != nullptr)
  {
    bulAux->SetDirection(direction);
  }
}
