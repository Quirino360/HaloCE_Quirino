// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Bullet.h"

#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/Controller.h"
#include "Engine/World.h"
#include "Math/UnrealMathUtility.h"
#include "Math/Rotator.h"


// Sets default values for this component's properties
UWeapon::UWeapon()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	m_maxAmmo = 60;
	m_maxAmmoCount = m_maxAmmo;

	m_magCapacity = 12;
	m_magCount = m_magCapacity;

	m_reloadTime = 6.0f;
	m_fireRate = 0.5;

	m_zoom = false;
	m_isAutomatic = false;
	m_canShoot = false;
	// ...


}
	

// Called when the game starts
void UWeapon::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UWeapon::SpawnBullets(FRotator SpawnRotation, FVector SpawnLocation, FVector direction)
{
  UWorld* const World = GetWorld();

  if (World == nullptr) {
    return;
  }
  //Set Spawn Collision Handling Override
  FActorSpawnParameters ActorSpawnParams;
  ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

  ABullet* bulAux = World->SpawnActor<ABullet>(m_bullet, SpawnLocation, SpawnRotation, ActorSpawnParams);

	direction = UKismetMathLibrary::GetForwardVector(SpawnRotation);
  direction.Normalize();

	if (bulAux != nullptr)
  {
    bulAux->SetDirection(direction);
	}
	
}


// Called every frame
void UWeapon::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	// ...
}

void UWeapon::Shoot(FRotator SpawnRotation, FVector SpawnLocation, FVector direction)
{

	if (m_bullet == nullptr) {
		return;
  }

	if (m_magCount > 0)
	{
		SpawnBullets(SpawnRotation, SpawnLocation, direction);

		m_magCount -= 1;

	}
	else if (m_maxAmmoCount > 0)
	{
		Reload();
	}/**/

	// try and play the sound if specified
	if (FireSound == nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, SpawnLocation);
	}

}

void UWeapon::Reload()
{
	if (m_maxAmmoCount + m_magCount <= m_magCapacity)
	{
		m_magCount += m_maxAmmoCount;
		m_maxAmmoCount = 0;
	}
	else
	{
		m_maxAmmoCount -= m_magCapacity - m_magCount;
		m_magCount += m_magCapacity - m_magCount;
	}
	

}

FVector UWeapon::getDirDeflection(float defRadius)
{
	if (defRadius <= 0)	{
		return FVector(0,0,0);
	}

	FVector vDeflection = FVector(0,0,0);

  vDeflection.Y = FMath::FRandRange(-defRadius, defRadius);
  vDeflection.Z = FMath::FRandRange(-defRadius, defRadius);

	return vDeflection;
}

