// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "HaloCECharacter.generated.h"


class UWeapon;

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UMotionControllerComponent;
class UAnimMontage;
class USoundBase;

UCLASS(config=Game)
class AHaloCECharacter : public ACharacter
{
private:
	GENERATED_BODY()

public:
	AHaloCECharacter();

protected:
	virtual void BeginPlay();
	
	virtual void Tick(float DeltaTime);


public:
  USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }

  UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	void OnFire();

	void OffWeapon();

	void ShootWeapon();

	void Aim();

	void MoveForward(float Val);

	void MoveRight(float Val);

	void TurnAtRate(float Rate);

	void LookUpAtRate(float Rate);

	void Reload();


	struct TouchData
	{
		TouchData() { bIsPressed = false;Location=FVector::ZeroVector;}
		bool bIsPressed;
		ETouchIndex::Type FingerIndex;
		FVector Location;
		bool bMoved;
	};
	void BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location);
	TouchData	TouchItem;


  UFUNCTION()
  void OnOverlapBegin(UPrimitiveComponent* OvelappedComponent, AActor* otherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const  FHitResult& SweepResult);

  UFUNCTION()
  void OnOverlapEnd(UPrimitiveComponent* OvelappedComponent, AActor* otherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

protected:
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

	bool EnableTouchscreenMovement(UInputComponent* InputComponent);

public:

  UPROPERTY(VisibleAnywhere, Category = "Trigger Capsule")
  class UCapsuleComponent* TriggerCapsule;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
  FVector GunOffset;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
  UAnimMontage* FireAnimation;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
  UWeapon* m_weapon;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
  uint8 bUsingMotionControllers : 1;

  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
  float BaseTurnRate;

  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
  float BaseLookUpRate;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mechanics)
  bool m_isAiming;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
  float m_maxHeath;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
  float m_currentHealth;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
  float m_maxShield;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
  float m_currentShield;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
  float m_shieldReloadCooldown;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
  float m_shieldReloadSpeed;

  float m_fireRateTimer;

private:
  UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
  USkeletalMeshComponent* Mesh1P;

  UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
  USkeletalMeshComponent* FP_Gun;

  UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
  USceneComponent* FP_MuzzleLocation;

  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
  UCameraComponent* FirstPersonCameraComponent;

protected:
};

