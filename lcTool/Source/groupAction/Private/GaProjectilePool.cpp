// Fill out your copyright notice in the Description page of Project Settings.


#include "GaProjectilePool.h"

// Sets default values
AGaProjectilePool::AGaProjectilePool()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGaProjectilePool::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGaProjectilePool::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

