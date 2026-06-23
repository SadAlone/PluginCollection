// Fill out your copyright notice in the Description page of Project Settings.


#include "GaSubVolum.h"

// Sets default values
AGaSubVolum::AGaSubVolum()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	visualMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("rootVusualMesh");
	RootComponent = visualMeshComponent;
	visualMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ChangeToSquareType();
}

EGaSubVolumType AGaSubVolum::getSubVolumType()
{
	return subVolumType;
}

void AGaSubVolum::SetSubVolumType(EGaSubVolumType inSubVolumType)
{
	switch (subVolumType)
	{
	case EGaSubVolumType::EGSVT_Square:
		ChangeToSquareType();
		break;
	case EGaSubVolumType::EGSVT_Sphere:
		ChangeToSphereType();
		break;
	default:
		break;
	}
	this->subVolumType = inSubVolumType;
}

FBoxSphereBounds AGaSubVolum::getBoundData()
{
	FVector scal3D = GetActorScale3D();
	FBoxSphereBounds retBound;

	retBound.Origin = GetActorLocation();
	retBound.BoxExtent.X = FMath::Abs(100 * scal3D.X * 0.5);
	retBound.BoxExtent.Y = FMath::Abs(100 * scal3D.Y * 0.5);
	retBound.BoxExtent.Z = FMath::Abs(100 * scal3D.Z * 0.5);
	retBound.SphereRadius = FMath::Abs(scal3D.X * 100);
	return retBound;
}

void AGaSubVolum::ChangeToSquareType()
{
	UObject* lsMeshObj = LoadObject<UObject>(NULL, TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (!lsMeshObj)
	{
		UE_LOG(LogTemp, Error, TEXT("lc group action can not find the square mesh!"));
		return;
	}
	UStaticMesh* SquareMesh = Cast<UStaticMesh>(lsMeshObj);
	if (!SquareMesh)
		return;

	UObject* lsMatObj = LoadObject<UObject>(NULL, TEXT("Material'/lcTool/asset/groupAction/material/subVolumMat.subVolumMat'"));
	if (!lsMatObj)
	{
		UE_LOG(LogTemp, Error, TEXT("lc group action can not find the subVolum Mat!"));
		return;
	}
	UMaterialInterface* SquareMat= Cast<UMaterialInterface>(lsMatObj);
	if (!SquareMat)
		return;
	visualMeshComponent->SetStaticMesh(SquareMesh);
	visualMeshComponent->SetMaterial(0,SquareMat);
}

void AGaSubVolum::ChangeToSphereType()
{
	UObject* lsMeshObj = LoadObject<UObject>(NULL, TEXT("StaticMesh'/lcTool/asset/groupAction/model/subVolumSphere.subVolumSphere'"));
	if (!lsMeshObj)
	{
		UE_LOG(LogTemp, Error, TEXT("lc group action can not find the square mesh!"));
		return;
	}
	UStaticMesh* SquareMesh = Cast<UStaticMesh>(lsMeshObj);
	if (!SquareMesh)
		return;

	UObject* lsMatObj = LoadObject<UObject>(NULL, TEXT("Material'/lcTool/asset/groupAction/material/subVolumMat.subVolumMat'"));
	if (!lsMatObj)
	{
		UE_LOG(LogTemp, Error, TEXT("lc group action can not find the subVolum Mat!"));
		return;
	}
	UMaterialInterface* SquareMat = Cast<UMaterialInterface>(lsMatObj);
	if (!SquareMat)
		return;
	visualMeshComponent->SetStaticMesh(SquareMesh);
	visualMeshComponent->SetMaterial(0, SquareMat);
}

// Called when the game starts or when spawned
void AGaSubVolum::BeginPlay()
{
	Super::BeginPlay();
	SetActorHiddenInGame(true);
}

// Called every frame
void AGaSubVolum::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGaSubVolum::OnConstruction(const FTransform& Transform)
{
	SetSubVolumType(subVolumType);
}

