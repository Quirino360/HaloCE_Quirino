// Fill out your copyright notice in the Description page of Project Settings.


#include "AssaultRifle.h"
#include "Bullet.h"

#include "Kismet/KismetMathLibrary.h"
#include "GenericPlatform/GenericPlatformMath.h"

UAssaultRifle::UAssaultRifle()
{
  m_maxAmmo = 600;
  m_maxAmmoCount = m_maxAmmo;

  m_magCapacity = 60;
  m_magCount = m_magCapacity;

  m_reloadTime = 2.7f;
  m_fireRate = 0.1;

  m_zoom = true;
  m_isAutomatic = true;
  m_canShoot = false;
}

void UAssaultRifle::SpawnBullets(FRotator SpawnRotation, FVector SpawnLocation, FVector direction)
{
  UWorld* const World = GetWorld();

  if (World == nullptr) {
    return;
  }
  //Set Spawn Collision Handling Override
  FActorSpawnParameters ActorSpawnParams;
  ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

  direction = UKismetMathLibrary::GetForwardVector(SpawnRotation);
  //direction += getDirDeflection(0.5);

  float lenght = sqrtf((direction.X * direction.X) + (direction.Y * direction.Y) + (direction.Z * direction.Z));
  direction = FVector(direction.X / lenght, direction.Y / lenght, direction.Z / lenght);

  //direction.Normalize();

  ABullet* bulAux = World->SpawnActor<ABullet>(m_bullet, SpawnLocation, SpawnRotation, ActorSpawnParams);

  if (bulAux != nullptr)
  {
    bulAux->SetDirection(direction);
  }
}
