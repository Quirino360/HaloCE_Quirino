// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

class UWeapon;
class USoundBase;

UCLASS()
class HALOCE_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

  UFUNCTION(BlueprintCallable)
	void Shoot();

  UFUNCTION(BlueprintCallable)
  void Reload();

  UFUNCTION()
  void OnOverlapBegin(UPrimitiveComponent* OvelappedComponent, AActor* otherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const  FHitResult& SweepResult);

  UFUNCTION()
  void OnOverlapEnd(UPrimitiveComponent* OvelappedComponent, AActor* otherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:
  /** Projectile class to spawn */
  UPROPERTY(EditDefaultsOnly, Category = Projectile)
  TSubclassOf<class AHaloCEProjectile> ProjectileClass;

  /** Gun mesh: 1st person view (seen only by self) */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh)
  USkeletalMeshComponent* FP_Gun;

  /** Location on gun mesh where projectiles should spawn. */
  UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
  USceneComponent* FP_MuzzleLocation;

  /** Gun muzzle's offset from the characters location */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
  FVector GunOffset;

  UPROPERTY(VisibleAnywhere, Category = "Trigger Capsule")
  class UCapsuleComponent* TriggerCapsule;


  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
  UWeapon* m_weapon;

  float m_fireRateTimer;

  float m_maxHealth;
  float m_health;

  float m_maxShield;
  float m_shield;

};
