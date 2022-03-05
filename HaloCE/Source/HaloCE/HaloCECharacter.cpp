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

#include "Weapon.h"
#include "AssaultRifle.h"
#include "Pistol.h"
#include "RocketLauncher.h"
#include "Shotgun.h"
#include "SniperRifle.h"
#include "Bullet.h"


DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AHaloCECharacter

AHaloCECharacter::AHaloCECharacter()
{
	// Set size for collision capsule
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
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(Mesh1P);



	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));



	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Set my variables
	m_isAiming = false;
	
	m_weapon = CreateDefaultSubobject<UAssaultRifle>(TEXT("WeaponComponent"));
	
	m_maxHeath = 100;
	m_currentHealth = m_maxHeath;
	m_maxShield = 100;
	m_currentShield = m_maxShield;
	m_shieldReloadCooldown = 2.5;
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
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));
}

void AHaloCECharacter::Tick(float DeltaTime)
{
  Super::Tick(DeltaTime);

  m_fireRateTimer += DeltaTime;


  //GEngine->AddOnScreenDebugMessage(-1, 12.f, FColor::White, FString::SanitizeFloat(fireRateTimer));
  //GEngine->AddOnScreenDebugMessage(-1, 12.f, FColor::White, FString::Printf(TEXT("Bool: %s"), weapon->isAutomatic ? TEXT("true") : TEXT("false")));

	if (!m_weapon)
	{
		GEngine->AddOnScreenDebugMessage(-1, 12.f, FColor::White, TEXT("Weap is invalid"));
	}
	else
	{
    if (m_weapon->GetCanShoot() == true && m_weapon->GetIsAutomatic() == true && m_fireRateTimer >= m_weapon->GetFireRate())
    {
      ShootWeapon();
      m_fireRateTimer = 0;
    }
    else if (m_weapon->GetCanShoot() == true && m_weapon->GetIsAutomatic() == false)
    {
      ShootWeapon();
      m_weapon->SetCanShoot(false); //**//
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

	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &AHaloCECharacter::Aim);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AHaloCECharacter::Reload);


	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AHaloCECharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AHaloCECharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AHaloCECharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AHaloCECharacter::LookUpAtRate);
}




void AHaloCECharacter::OnFire()
{
  // try and fire a projectile
  m_weapon->SetCanShoot(true);
}


void AHaloCECharacter::OffWeapon()
{
	m_weapon->SetCanShoot(false);
}

void AHaloCECharacter::ShootWeapon()
{
  const FRotator SpawnRotation = GetControlRotation();

  // MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
  const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

	

	m_weapon->Shoot(SpawnRotation, SpawnLocation, GetActorForwardVector());

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

void AHaloCECharacter::Aim()
{
	if (false == m_weapon->GetZoom())
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


void AHaloCECharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void AHaloCECharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

void AHaloCECharacter::OnOverlapBegin(UPrimitiveComponent* OvelappedComponent, AActor* otherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
  /*if (otherActor && (otherActor != this) && OtherComp)
  {
    if (GEngine)
    {
      //GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Overlap Begin"));
    }
  }/**/

  if (otherActor && (otherActor != this) && OtherComp)
  {
    ABullet* testActor = Cast<ABullet>(otherActor);
    if (testActor)
    {
      GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Bullet Overlaped"));
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
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AHaloCECharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AHaloCECharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AHaloCECharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AHaloCECharacter::Reload()
{
	// cant reload if its full
	m_weapon->Reload();

}

bool AHaloCECharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AHaloCECharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &AHaloCECharacter::EndTouch);

		//Commenting this out to be more consistent with FPS BP template.
		//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AHaloCECharacter::TouchUpdate);
		return true;
	}
	
	return false;
}
