// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"

#include "Kismet/GameplayStatics.h"
//#include "Sound/SoundBase.h"

#include "HaloCEProjectile.h"

#include "Weapon.h"
#include "AssaultRifle.h"
#include "Pistol.h"
#include "RocketLauncher.h"
#include "Shotgun.h"
#include "SniperRifle.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

  // Create a gun mesh component
  FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
  FP_Gun->SetOnlyOwnerSee(false);
  FP_Gun->bCastDynamicShadow = false;
  FP_Gun->CastShadow = false;
  FP_Gun->SetupAttachment(RootComponent);

  FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
  FP_MuzzleLocation->SetupAttachment(FP_Gun);
  FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

  // Default offset from the character location for projectiles to spawn
  //GunOffset = FVector(100.0f, 0.0f, 10.0f);

  weapon = CreateDefaultSubobject<UAssaultRifle>(TEXT("WeapComponent"));

  fireRateTimer = 0;
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	

  //Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
  FP_Gun->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

  fireRateTimer += DeltaTime;


  if (weapon->canShoot == true && weapon->isAutomatic == true && fireRateTimer >= weapon->fireRate)
  {
    Shoot();
    fireRateTimer = 0;
  }
  else if (weapon->canShoot == true && weapon->isAutomatic == false)
  {
    Shoot();
    weapon->canShoot = false;
  }
}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::Shoot()
{
	if (ProjectileClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			if (weapon->GetMagCount() > 0)
			{

				const FRotator SpawnRotation = GetControlRotation();
				// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
				const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

				//Set Spawn Collision Handling Override
				FActorSpawnParameters ActorSpawnParams;
        //ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
        ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

				// spawn the projectile at the muzzle
				World->SpawnActor<AHaloCEProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);

				weapon->SetMagCount(weapon->GetMagCount() - 1);

			}
			else if (weapon->maxAmmoCount > 0)
			{
				Reload();
			}
		}
	}

  // try and play the sound if specified
  if (FireSound != nullptr)
  {
    UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
  }
}

void AEnemy::Reload()
{
  weapon->Reload();
}

