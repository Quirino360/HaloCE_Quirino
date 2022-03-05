// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"

#include "Kismet/GameplayStatics.h"
//#include "Sound/SoundBase.h"
#include "Components/CapsuleComponent.h"

#include "HaloCEProjectile.h"

#include "Weapon.h"
#include "AssaultRifle.h"
#include "Pistol.h"
#include "RocketLauncher.h"
#include "Shotgun.h"
#include "SniperRifle.h"
#include "Bullet.h"

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



  FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
  FP_MuzzleLocation->SetupAttachment(FP_Gun);
  FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

  m_weapon = CreateDefaultSubobject<UAssaultRifle>(TEXT("WeapComponent"));

  m_fireRateTimer = 0;


  TriggerCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TriggerCapsule"));
  TriggerCapsule->InitCapsuleSize(55.5f, 96.0f);
  TriggerCapsule->SetCollisionProfileName(TEXT("Trigger"));
  TriggerCapsule->SetupAttachment(RootComponent);


  TriggerCapsule->OnComponentBeginOverlap.AddDynamic(this, &AEnemy::OnOverlapBegin);
  TriggerCapsule->OnComponentEndOverlap.AddDynamic(this, &AEnemy::OnOverlapEnd);
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();


}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

  m_fireRateTimer += DeltaTime;

  if (m_health <= 0)
  {

  }


  if (m_weapon->GetCanShoot() == true && m_weapon->GetIsAutomatic() == true && m_fireRateTimer >= m_weapon->GetFireRate())
  {
    Shoot();
    m_fireRateTimer = 0;
  }
  else if (m_weapon->GetCanShoot() == true && m_weapon->GetIsAutomatic() == false)
  {
    Shoot();
    m_weapon->SetCanShoot(false);
  }
}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::Shoot()
{
  const FRotator SpawnRotation = GetControlRotation();

  // MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
  const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

  m_weapon->Shoot(SpawnRotation, SpawnLocation, GetActorForwardVector());
}

void AEnemy::Reload()
{
  m_weapon->Reload();
}

void AEnemy::OnOverlapBegin(UPrimitiveComponent* OvelappedComponent, AActor* otherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
  if (otherActor && (otherActor != this) && OtherComp)
  {
    ABullet* testActor = Cast<ABullet>(otherActor);
    if (testActor)
    {
      GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Bullet Overlaped"));
    }

    if (GEngine)
    {
      GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Begin Overlaped"));
    }
  }
}

void AEnemy::OnOverlapEnd(UPrimitiveComponent* OvelappedComponent, AActor* otherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
  if (GEngine)
  {
    //GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Overlap End"));
  }
}

