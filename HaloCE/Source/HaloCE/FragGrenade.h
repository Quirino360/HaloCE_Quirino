// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Math/Vector.h"

#include "FragGrenade.generated.h"


class UStaticMeshComponent;
class USphereComponent;

UCLASS()
class HALOCE_API AFragGrenade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFragGrenade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetDirction(FVector _dir) {direction = _dir;}

public:
  UPROPERTY(EditAnywhere, Category = Mesh)
  UStaticMeshComponent* grenadeMesh;

  UPROPERTY(VisibleAnywhere, Category = "Trigger Capsule")
  USphereComponent* DamageSphere;

	FVector direction;



};
