// Fill out your copyright notice in the Description page of Project Settings.


#include "etActor.h"

// Sets default values
AetActor::AetActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AetActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AetActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//SetActorLocation(FVector(0, 0, 0));

}


void AetActor::OnConstruction(const FTransform & Transform)
{
	if (WITH_EDITOR)
	{
		PrimaryActorTick.bCanEverTick = true;
		PrimaryActorTick.bStartWithTickEnabled = true;
	}
}

void AetActor::etSetRotation(FRotator rotation)
{
	SetActorRotation(rotation);
}

void AetActor::etSetLocation(FVector location)
{
	SetActorLocation(location);
}


