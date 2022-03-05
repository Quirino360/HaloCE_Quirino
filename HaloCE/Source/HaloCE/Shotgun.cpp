// Fill out your copyright notice in the Description page of Project Settings.


#include "Shotgun.h"

#include "Bullet.h"

#include "Kismet/KismetMathLibrary.h"

UShotgun::UShotgun()
{
  m_maxAmmo = 60;
  m_maxAmmoCount = m_maxAmmo;

  m_magCapacity = 12;
  m_magCount = m_magCapacity;

  m_reloadTime = 0.5f;
  m_fireRate = 1.0;

  m_zoom = false;
  m_isAutomatic = false;
  m_canShoot = false;
}

void UShotgun::SpawnBullets(FRotator SpawnRotation, FVector SpawnLocation, FVector direction)
{
  UWorld* const World = GetWorld();

  if (World == nullptr) {
    return;
  }
  //Set Spawn Collision Handling Override
  FActorSpawnParameters ActorSpawnParams;
  ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

  for (uint8 i = 0; i < 8; i++)
  {
    direction = UKismetMathLibrary::GetForwardVector(SpawnRotation);
    direction+= getDirDeflection(25);
    direction.Normalize();

    ABullet* bulAux = World->SpawnActor<ABullet>(m_bullet, SpawnLocation, SpawnRotation, ActorSpawnParams);

    if (bulAux != nullptr)
    {
      bulAux->SetDirection(direction);
    }
  }

}
