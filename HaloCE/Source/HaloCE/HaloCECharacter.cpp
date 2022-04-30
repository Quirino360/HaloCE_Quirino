// Copyright Epic Games, Inc. All Rights Reserved.

#include "HaloCECharacter.h"
#include "HaloCEProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/Engine/Public/EngineGlobals.h"

#include "Sound/SoundBase.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/Controller.h"
#include "Engine/World.h"
#include "Math/UnrealMathUtility.h"
#include "Math/Rotator.h"



#include "Weapon.h"
#include "AssaultRifle.h"
#include "Pistol.h"
#include "RocketLauncher.h"
#include "Shotgun.h"
#include "SniperRifle.h"
#include "Bullet.h"
#include "FragGrenade.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AHaloCECharacter

AHaloCECharacter::AHaloCECharacter()
{
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	FP_Gun->SetupAttachment(Mesh1P);


	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Set my variables
	m_isAiming = false;
	
	m_weaponOne = CreateDefaultSubobject<UAssaultRifle>(TEXT("Weapon1Component"));
	m_weaponTwo = CreateDefaultSubobject<UShotgun>(TEXT("Weapon2Component"));

	m_currentWeapon = m_weaponOne;

	m_maxHeath = 100;
	m_currentHealth = m_maxHeath;
	m_maxShield = 100;
	m_currentShield = m_maxShield;
	m_shieldReloadCooldown = 3.5;
	m_shieldReloadSpeed = 5;
	m_fireRateTimer = 0;

  TriggerCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TriggerCapsule"));
  TriggerCapsule->InitCapsuleSize(55.5f, 96.0f);
  TriggerCapsule->SetCollisionProfileName(TEXT("Trigger"));
  TriggerCapsule->SetupAttachment(RootComponent);

  TriggerCapsule->OnComponentBeginOverlap.AddDynamic(this, &AHaloCECharacter::OnOverlapBegin);
  TriggerCapsule->OnComponentEndOverlap.AddDynamic(this, &AHaloCECharacter::OnOverlapEnd);
}

void AHaloCECharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	//FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));
}

void AHaloCECharacter::Tick(float DeltaTime)
{
  Super::Tick(DeltaTime);


  FP_Gun->SetRelativeLocation(FVector(-20.0f, 70.0f, 120.0f));

  m_fireRateTimer += DeltaTime;

	if (!m_currentWeapon)
	{
		GEngine->AddOnScreenDebugMessage(-1, 12.f, FColor::White, TEXT("Weap is invalid"));
	}
	else
	{
    if (m_currentWeapon->GetCanShoot() == true && m_currentWeapon->GetIsAutomatic() == true && m_fireRateTimer >= m_currentWeapon->GetFireRate())
    {
      ShootWeapon();
      m_fireRateTimer = 0;
    }
    else if (m_currentWeapon->GetCanShoot() == true && m_currentWeapon->GetIsAutomatic() == false)
    {
      ShootWeapon();
			m_currentWeapon->SetCanShoot(false); //**//
    }
	}

	// recharge shield system
	if (m_currentShield < m_maxShield)
	{
		RegenTimer += DeltaTime;
		if (RegenTimer >= m_shieldReloadCooldown)
		{
			float RechargeSpeed = 1;
			m_currentShield += RechargeSpeed * DeltaTime;
			if (m_currentShield > m_maxShield)
			{
				m_currentShield = m_maxShield;
			}
		}
		
	}

}

void AHaloCECharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind weapon event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AHaloCECharacter::OnFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &AHaloCECharacter::OffWeapon);

	// Bind Aim & Reload Events
	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &AHaloCECharacter::Aim);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AHaloCECharacter::Reload);

	//Bind grenade events
	PlayerInputComponent->BindAction("ThrowGrenade", IE_Pressed, this, &AHaloCECharacter::ThrowGrenade);

  // Bind Change Weapon Event
  PlayerInputComponent->BindAction("ChangeWeaponOne", IE_Pressed, this, &AHaloCECharacter::ChangeWeaponOne);
  PlayerInputComponent->BindAction("ChangeWeaponTwo", IE_Pressed, this, &AHaloCECharacter::ChangeWeaponTwo);

	// Bind movement Axis
	PlayerInputComponent->BindAxis("MoveForward", this, &AHaloCECharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AHaloCECharacter::MoveRight);

	// Bind Aim Axis
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AHaloCECharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AHaloCECharacter::LookUpAtRate);
}




void AHaloCECharacter::OnFire()
{

	m_currentWeapon->SetCanShoot(true);
}


void AHaloCECharacter::OffWeapon()
{
	m_currentWeapon->SetCanShoot(false);
}

void AHaloCECharacter::ShootWeapon()
{
  const FRotator SpawnRotation = GetControlRotation();

  // MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
  const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

	

	m_currentWeapon->Shoot(SpawnRotation, SpawnLocation, GetActorForwardVector());

  // try and play a firing animation if specified
  if (FireAnimation != nullptr)
  {
    // Get the animation object for the arms mesh
    UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
    if (AnimInstance != nullptr)
    {
      AnimInstance->Montage_Play(FireAnimation, 1.f);
    }
  }
}

void AHaloCECharacter::ThrowGrenade()
{
  UWorld* const World = GetWorld();
  if (World == nullptr) {
    return;
  }

  const FRotator SpawnRotation = GetControlRotation();
  const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);


  //Set Spawn Collision Handling Override
  FActorSpawnParameters ActorSpawnParams;
  ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

  AFragGrenade* fragAux = World->SpawnActor<AFragGrenade>(m_grenade, SpawnLocation, SpawnRotation, ActorSpawnParams);

	//FVector direction = GetActorForwardVector();
	FVector direction = UKismetMathLibrary::GetForwardVector(SpawnRotation);
  direction.Normalize();

  if (fragAux != nullptr)
  {
		fragAux->SetDirction(direction);
  }


}

void AHaloCECharacter::Aim()
{
	if (false == m_currentWeapon->GetZoom())
	{
		return;
	}

	if (false == m_isAiming )
	{
		FirstPersonCameraComponent->SetFieldOfView(60.0f);
		m_isAiming = true;
	}
	else if (true == m_isAiming)
	{
		FirstPersonCameraComponent->SetFieldOfView(90.0f);
		m_isAiming = false;
	}
}

void AHaloCECharacter::ChangeWeaponOne()
{
	if (m_currentWeapon != m_weaponOne)
	{
		m_currentWeapon = m_weaponOne;
	}
}

void AHaloCECharacter::ChangeWeaponTwo()
{
  if (m_currentWeapon != m_weaponTwo)
  {
    m_currentWeapon = m_weaponTwo;
  }
}

void AHaloCECharacter::OnOverlapBegin(UPrimitiveComponent* OvelappedComponent, AActor* otherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

  if (otherActor && (otherActor != this) && OtherComp)
  {
    ABullet* testActor = Cast<ABullet>(otherActor);
    if (testActor)
    {
			if (m_currentShield > 0)
			{
				m_currentShield -= testActor->GetDamage();
			}
			else if (m_currentHealth > 0)
			{
				if (m_currentShield < 0)
				{
          m_currentHealth += m_currentShield;
					m_currentShield = 0;
				}
				m_currentHealth -= testActor->GetDamage();
			}
			else
			{
				Destroy();
				// ends the game
			}

			RegenTimer = 0;
			testActor->Destroy();

      //GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Bullet Overlaped"));
    }
  }
}

void AHaloCECharacter::OnOverlapEnd(UPrimitiveComponent* OvelappedComponent, AActor* otherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
  if (GEngine)
  {
    //GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Overlap End"));
  }
}

void AHaloCECharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AHaloCECharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AHaloCECharacter::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AHaloCECharacter::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AHaloCECharacter::Reload()
{
	m_currentWeapon->Reload();

}