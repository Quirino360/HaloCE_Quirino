// Fill out your copyright notice in the Description page of Project Settings.


#include "Medkit.h"

#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"

#include "HaloCECharacter.h"

// Sets default values
AMedkit::AMedkit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	medkidMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MedkidMesh"));
	//medkidMesh->SetupAttachment(RootComponent);


  TriggerCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TriggerCapsule"));
  TriggerCapsule->InitCapsuleSize(55.5f, 96.0f);
  TriggerCapsule->SetCollisionProfileName(TEXT("Trigger"));


  TriggerCapsule->OnComponentBeginOverlap.AddDynamic(this, &AMedkit::OnOverlapBegin);
}

void AMedkit::OnOverlapBegin(UPrimitiveComponent* OvelappedComponent, AActor* otherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (otherActor && (otherActor != this) && OtherComp)
	{
		AHaloCECharacter* testActor = Cast<AHaloCECharacter>(otherActor);
		if (testActor)
		{
			if (testActor->m_currentHealth < testActor->m_maxHeath)
			{
				testActor->RestoreHealth();
				Destroy();
			}
		}
	}
}

// Called when the game starts or when spawned
void AMedkit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMedkit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



