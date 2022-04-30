// Fill out your copyright notice in the Description page of Project Settings.


#include "FragGrenade.h"

#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AFragGrenade::AFragGrenade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
  grenadeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bullet Mesh"));
  grenadeMesh->SetupAttachment(RootComponent);

  DamageSphere = CreateDefaultSubobject<USphereComponent>(TEXT("TriggerCapsule"));
  DamageSphere->InitSphereRadius(10.0f);
  DamageSphere->SetCollisionProfileName(TEXT("Trigger"));
  DamageSphere->SetupAttachment(grenadeMesh);
}

// Called when the game starts or when spawned
void AFragGrenade::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFragGrenade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector gravity = FVector(0 , 0, -2.5f);
	float speed = 1200;

	SetActorLocation( (direction * speed * DeltaTime) + GetActorLocation() + gravity);

	//SetActorLocation(direction + GetActorLocation());
}

