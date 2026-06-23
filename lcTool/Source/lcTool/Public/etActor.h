// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "etActor.generated.h"

UCLASS()
class LCTOOL_API AetActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AetActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual bool ShouldTickIfViewportsOnly() const override { return true; }

	virtual void OnConstruction(const FTransform& Transform);

	UFUNCTION(BlueprintCallable, Category = "etActor")
		void etSetLocation(FVector location);

	UFUNCTION(BlueprintCallable, Category = "etActor")
		void etSetRotation(FRotator rotation);

};
