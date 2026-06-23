// Fill out your copyright notice in the Description page of Project Settings.


#include "GaTargetPointActor.h"
#include "Kismet/GameplayStatics.h"
#include "GaGroupUnit.h"
PRAGMA_DISABLE_OPTIMIZATION
// Sets default values
AGaTargetPointActor::AGaTargetPointActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>("rootComponent");

	IdentifyMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("identifyMesh");
	IdentifyMeshComponent->SetupAttachment(RootComponent);
	IdentifyMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	UObject* lsObj = LoadObject<UObject>(NULL, TEXT("StaticMesh'/lcTool/asset/groupAction/model/gaTargetpoint.gaTargetpoint'"));

	if (lsObj)
	{
		UStaticMesh* identifyMesh = CastChecked<UStaticMesh>(lsObj);
		if (identifyMesh)
		{
			IdentifyMeshComponent->SetStaticMesh(identifyMesh);
		}
	}

	targetPointInstanceComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>("target instance component");
	targetPointInstanceComponent->SetupAttachment(RootComponent);
	targetPointInstanceComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	UObject* targetPointMesh = LoadObject<UObject>(NULL, TEXT("StaticMesh'/lcTool/asset/groupAction/model/targetPointCircle.targetPointCircle'"));

	if (targetPointMesh)
	{
		UStaticMesh* identifyMesh = CastChecked<UStaticMesh>(targetPointMesh);
		if (identifyMesh)
		{
			targetPointInstanceComponent->SetStaticMesh(identifyMesh);
		}
	}
}


//bool AGaTargetPointActor::CanAction()
//{
//	return bCanBoot;
//}

FVector AGaTargetPointActor::GetTargetFormationWorldLocationNative(ABaseFormationBuilder* gaUnit, int id)
{
	return FVector();
}

void AGaTargetPointActor::GetInstancesInsideSphere(float radius, FVector loaction, TArray<int32>& OutInstances)
{
	auto TempInstances = gaFindEnemyHash.GetInstancesOverlappingBox(FBox::BuildAABB(loaction, FVector(radius)));
	for (int32 Idx : TempInstances)
	{
		//FVector* lsLoc = currentFormation->idLocationMap.Find(Idx);
		//if (lsLoc)
		//{

		//	if (FSphere(*lsLoc, 1.0f).IsInside(Sphere))
		//	{
		//		OutInstances.Add(Idx);
		//	}
		//}
		OutInstances.Add(Idx);
	}
}

void AGaTargetPointActor::AddEnemyInstance(FVector location, int32 instanceId)
{
}

// Called when the game starts or when spawned
void AGaTargetPointActor::BeginPlay()
{
	Super::BeginPlay();

	if (bActiveAtBegin)
		bCanBoot = true;

}

// Called every frame
void AGaTargetPointActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGaTargetPointActor::OnConstruction(const FTransform& Transform)
{


}
PRAGMA_ENABLE_OPTIMIZATION
