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

	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

public:

  //
	void OnFire();

	void OffWeapon();

	void Reload();

	void ShootWeapon();

  void ThrowGrenade();

	void Aim();

  void ChangeWeaponOne();

  void ChangeWeaponTwo();

	void MoveForward(float Val);

	void MoveRight(float Val);

	void TurnAtRate(float Rate);

	void LookUpAtRate(float Rate);

  USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }

  UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

  void RestoreHealth() {m_currentHealth = m_maxHeath;}

  //
  UFUNCTION()
  void OnOverlapBegin(UPrimitiveComponent* OvelappedComponent, AActor* otherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const  FHitResult& SweepResult);

  UFUNCTION()
  void OnOverlapEnd(UPrimitiveComponent* OvelappedComponent, AActor* otherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:
  UPROPERTY(VisibleAnywhere, Category = "Trigger Capsule")
  class UCapsuleComponent* TriggerCapsule;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
  FVector GunOffset;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
  UAnimMontage* FireAnimation;

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

  UPROPERTY(EditDefaultsOnly, Category = Grenade)
  TSubclassOf<class AFragGrenade> m_grenade;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
  UWeapon* m_currentWeapon;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
  UWeapon* m_weaponOne;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
  UWeapon* m_weaponTwo;

private:
  UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
  USkeletalMeshComponent* Mesh1P;

  UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
  USkeletalMeshComponent* FP_Gun;

  UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
  USceneComponent* FP_MuzzleLocation;

  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
  UCameraComponent* FirstPersonCameraComponent;

private:
  float RegenTimer = 0;

protected:
};

