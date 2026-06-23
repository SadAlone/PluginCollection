// Fill out your copyright notice in the Description page of Project Settings.


#include "GaProjectileActor.h"
#include "../Public/GaCharacter.h"
#include "Engine\Classes\Kismet\KismetMathLibrary.h"

// Sets default values
AGaProjectileActor::AGaProjectileActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGaProjectileActor::BeginPlay()
{
	Super::BeginPlay();
	hitTarget = false;
	
}

// Called every frame
void AGaProjectileActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (hitTarget)
	{
		hitTarget = false;
		if (targetCharacter)
		{
			AGaCharacter* tCharacter = Cast<AGaCharacter>(targetCharacter);
			if (tCharacter)
			{
				float subHp = UKismetMathLibrary::RandomFloatInRange(gaProjectildData.attackValue.X, gaProjectildData.attackValue.Y);
				tCharacter->SubCharacterHp(subHp);
				UE_LOG(LogTemp, Warning, TEXT("减少的HP =  %d"), subHp);
					
			}
		}
	}
}

