// Fill out your copyright notice in the Description page of Project Settings.


#include "FragGrenade.h"

// Sets default values
AFragGrenade::AFragGrenade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

	FVector gravity = FVector(0,-9.81, 0);
	float velocity = 15;
	direction *= DeltaTime * velocity;
	direction  += gravity;
}

