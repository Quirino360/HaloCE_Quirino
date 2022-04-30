// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Math/Vector.h"

#include "Bullet.generated.h"

class UStaticMeshComponent;
class USphereComponent;

UCLASS()
class HALOCE_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullet();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float GetDamage() {return m_damage;}


	UFUNCTION()
	void SetDirection(FVector& _dir) {
		m_direction = _dir;
	};

public:

  FVector m_direction;

	UPROPERTY(VisibleAnywhere, Category = "Trigger Capsule")
	class UCapsuleComponent* TriggerCapsule;


private:
  UPROPERTY(EditAnywhere, Category = Mesh)
  UStaticMeshComponent* bulletMesh;



  float m_speed;

  float m_damage;

};
