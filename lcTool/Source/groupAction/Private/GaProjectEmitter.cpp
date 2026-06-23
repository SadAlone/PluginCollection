// Fill out your copyright notice in the Description page of Project Settings.


#include "GaProjectEmitter.h"

// Sets default values
AGaProjectEmitter::AGaProjectEmitter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CreateTargetRangeComponent();
	CreateEmmiterRangeComponent();
}

// Called when the game starts or when spawned
void AGaProjectEmitter::BeginPlay()
{
	Super::BeginPlay();

}

void AGaProjectEmitter::CreateTargetRangeComponent()
{
	USceneComponent* sceneCom = CreateDefaultSubobject<USceneComponent>(TEXT("root"));
	RootComponent = sceneCom;

	rangeTargetMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("范围目标mesh组件"));
	rangeTargetMeshComponent->SetupAttachment(RootComponent);

	UObject* meshObj = LoadObject<UObject>(NULL, TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));

	if (meshObj)
	{
		UStaticMesh* mesh = Cast<UStaticMesh>(meshObj);
		if (mesh)
		{
			rangeTargetMeshComponent->SetStaticMesh(mesh);
			UObject* matObj = LoadObject<UObject>(NULL, TEXT("Material'/lcTool/asset/groupAction/material/gaUnitMaterial1.gaUnitMaterial1'"));
			if (matObj)
			{
				UMaterial* mat = Cast<UMaterial>(matObj);
				if (mat)
				{
					rangeTargetMeshComponent->SetMaterial(0, mat);
				}
			}
		}
	}
	rangeTargetMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	rangeTargetMeshComponent->SetHiddenInGame(true);
}

void AGaProjectEmitter::CreateEmmiterRangeComponent()
{

	emmiterMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("范围发射器mesh组件"));
	emmiterMeshComponent->SetupAttachment(RootComponent);

	UObject* meshObj = LoadObject<UObject>(NULL, TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));

	if (meshObj)
	{
		UStaticMesh* mesh = Cast<UStaticMesh>(meshObj);
		if (mesh)
		{
			emmiterMeshComponent->SetStaticMesh(mesh);
			UObject* matObj = LoadObject<UObject>(NULL, TEXT("Material'/lcTool/asset/groupAction/material/gaUnitMaterial2.gaUnitMaterial2'"));
			if (matObj)
			{
				UMaterial* mat = Cast<UMaterial>(matObj);
				if (mat)
				{
					emmiterMeshComponent->SetMaterial(0, mat);
				}
			}
		}
	}
	emmiterMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	emmiterMeshComponent->SetHiddenInGame(true);


}

void AGaProjectEmitter::LaunchProject()
{




}

// Called every frame
void AGaProjectEmitter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
void AGaProjectEmitter::OnConstruction(const FTransform& Transform)
{
	if (rangeTargetMeshComponent)
	{
		rangeTargetMeshComponent->SetRelativeLocation(targetRangeBoxPoint);
		rangeTargetMeshComponent->SetRelativeScale3D(targetRangeBoxExtend * (float)(1.0f / 100.0f));
		targetRangeBoxBound.Origin = targetRangeBoxPoint;
		targetRangeBoxBound.BoxExtent = targetRangeBoxExtend;
	}
	if (emmiterMeshComponent)
	{
		emmiterMeshComponent->SetRelativeLocation(emmiterRangeBoxPoint);
		emmiterMeshComponent->SetRelativeScale3D(emmiterRangeBoxExtend * (float)(1.0f / 100.0f));
		targetRangeBoxBound.Origin = emmiterRangeBoxPoint;
		targetRangeBoxBound.BoxExtent = emmiterRangeBoxExtend;
	}
}
