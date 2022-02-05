// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Weapon.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HALOCE_API UWeapon : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeapon();

  // All the ammo you can carry
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ammo)
  int maxAmmo;

  // All the ammo you are carrying
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ammo)
  int maxAmmoCount;

  // All the magazine the weapon can have
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ammo)
  int magCapacity;

  // The magazine the weapon has
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ammo)
  int magCount;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ammo)
  float reloadTime;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ammo)
  float fireRate;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ammo)
  bool isAutomatic;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ammo)
  bool canShoot;

  bool zoom;



protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

  UFUNCTION(BlueprintCallable)
  void Reload();

	// ----- Getters
	UFUNCTION(BlueprintCallable)
	int GetMaxAmmo() { return maxAmmo; };

	UFUNCTION(BlueprintCallable)
	int GetMaxAmmoCount() { return maxAmmoCount; };

	UFUNCTION(BlueprintCallable)
	int GetMagCapacity() { return magCapacity; };

	UFUNCTION(BlueprintCallable)
	int GetMagCount() { return magCount; };

	UFUNCTION(BlueprintCallable)
	int GetReloadTime() { return reloadTime; };

	bool GetZoom() { return zoom; };

  UFUNCTION(BlueprintCallable)
  bool GetCanShoot() { return canShoot; };

  UFUNCTION(BlueprintCallable)
  bool GetIsAutomatic() { return isAutomatic; };

  UFUNCTION(BlueprintCallable)
  float GetFireRate() { return fireRate; };

	// ----- Setters 
	UFUNCTION(BlueprintCallable)
	void SetMaxAmmo(int _maxAmmo) { maxAmmo = _maxAmmo; };

	UFUNCTION(BlueprintCallable)
	void SetMaxAmmoCount(int _maxAmmoCount) { maxAmmoCount = _maxAmmoCount; };

	UFUNCTION(BlueprintCallable)
	void SetMagCapacity(int _magCapacity) { magCapacity = _magCapacity; };

	UFUNCTION(BlueprintCallable)
	void SetMagCount(int _magCount) { magCount = _magCount; };

	UFUNCTION(BlueprintCallable)
	void SetReloadTime(int _reloadTime) { reloadTime = _reloadTime; };

  void SetCanShoot(bool _shootAuto) { canShoot = _shootAuto; };



};
