// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "Math/Vector.h"
#include "Math/Rotator.h"

#include "Weapon.generated.h"


class USoundBase;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HALOCE_API UWeapon : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeapon();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
  virtual void SpawnBullets(FRotator SpawnRotation, FVector SpawnLocation, FVector direction);

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

  UFUNCTION(BlueprintCallable)
  void Shoot(FRotator SpawnRotation, FVector SpawnLocation, FVector direction);

  UFUNCTION(BlueprintCallable)
  void Reload();

private:

  /* 
  * Getters & setters 
  */
public:
	// ----- Getters
	UFUNCTION(BlueprintCallable)
	int GetMaxAmmo() { return m_maxAmmo; };

	UFUNCTION(BlueprintCallable)
	int GetMaxAmmoCount() { return m_maxAmmoCount; };

	UFUNCTION(BlueprintCallable)
	int GetMagCapacity() { return m_magCapacity; };

	UFUNCTION(BlueprintCallable)
	int GetMagCount() { return m_magCount; };

	UFUNCTION(BlueprintCallable)
	int GetReloadTime() { return m_reloadTime; };

	bool GetZoom() { return m_zoom; };

  UFUNCTION(BlueprintCallable)
  bool GetCanShoot() { return m_canShoot; };

  UFUNCTION(BlueprintCallable)
  bool GetIsAutomatic() { return m_isAutomatic; };

  UFUNCTION(BlueprintCallable)
  float GetFireRate() { return m_fireRate; };

	// ----- Setters 
	UFUNCTION(BlueprintCallable)
	void SetMaxAmmo(int _maxAmmo) { m_maxAmmo = _maxAmmo; };

	UFUNCTION(BlueprintCallable)
	void SetMaxAmmoCount(int _maxAmmoCount) { m_maxAmmoCount = _maxAmmoCount; };

	UFUNCTION(BlueprintCallable)
	void SetMagCapacity(int _magCapacity) { m_magCapacity = _magCapacity; };

	UFUNCTION(BlueprintCallable)
	void SetMagCount(int _magCount) { m_magCount = _magCount; };

	UFUNCTION(BlueprintCallable)
	void SetReloadTime(int _reloadTime) { m_reloadTime = _reloadTime; };

  UFUNCTION(BlueprintCallable)
  void SetCanShoot(bool _shootAuto) { m_canShoot = _shootAuto; };

  UFUNCTION(BlueprintCallable)
  FVector getDirDeflection(float defRadius);

public:
    /** Sound to play each time we fire */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
  USoundBase* FireSound;
protected:



  UPROPERTY(EditDefaultsOnly, Category = Bullet)
  TSubclassOf<class ABullet> m_bullet;

  // All the ammo you can carry
  UPROPERTY(EditAnywhere, Category = ammo)
  int m_maxAmmo;

  // All the ammo you are carrying
  UPROPERTY(EditAnywhere, Category = ammo)
  int m_maxAmmoCount;

  // All the magazine the weapon can have
  UPROPERTY(EditAnywhere, Category = ammo)
  int m_magCapacity;

  // The magazine the weapon has
  UPROPERTY(EditAnywhere, Category = ammo)
  int m_magCount;

  UPROPERTY(EditAnywhere, Category = ammo)
  float m_reloadTime;

  UPROPERTY(EditAnywhere, Category = ammo)
  float m_fireRate;

  UPROPERTY(EditAnywhere, Category = ammo)
  bool m_isAutomatic;

  UPROPERTY(EditAnywhere, Category = ammo)
  bool m_canShoot;

  bool m_zoom;

};
