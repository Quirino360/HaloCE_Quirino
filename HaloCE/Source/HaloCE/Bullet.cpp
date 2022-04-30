// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bulletMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bullet Mesh"));
	bulletMesh->SetupAttachment(RootComponent);


	//RootComponent = bulletMesh;

  m_direction = FVector(1.0f, 0.0f, 0.0f);

  m_speed = 500.0f;

  m_damage = 1;


	TriggerCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TriggerCapsule"));
	TriggerCapsule->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
  //TriggerCapsule->InitCapsuleSize(0.75f, 1.5f);
  TriggerCapsule->InitCapsuleSize(10.0f, 10.0f);
	TriggerCapsule->SetCollisionProfileName(TEXT("Trigger"));
	TriggerCapsule->SetupAttachment(bulletMesh);

}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	SetLifeSpan(5.0f);
	
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SetActorLocation((m_direction * m_speed * DeltaTime) + GetActorLocation());

}
