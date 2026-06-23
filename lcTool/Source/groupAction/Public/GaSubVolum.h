// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "GaSubVolum.generated.h"



UENUM(BlueprintType)
enum class EGaSubVolumType :uint8 {
	EGSVT_Square UMETA(DisplayName="矩形剔除盒子"),
	EGSVT_Sphere UMETA(DisplayName="球形盒子"),
};


UCLASS()
class GROUPACTION_API AGaSubVolum : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGaSubVolum();

	//包围盒数据
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(DisplayName="盒子类型"),Category="剔除盒数据")
		EGaSubVolumType subVolumType;

	UPROPERTY()
	UStaticMeshComponent* visualMeshComponent;

	UFUNCTION()
		void SetSubVolumType(EGaSubVolumType inSubVolumType);

	FBoxSphereBounds getBoundData();

	//切换到矩形类型
	void ChangeToSquareType();

	//切换到球形类型
	void ChangeToSphereType();

	EGaSubVolumType getSubVolumType();	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OnConstruction(const FTransform& Transform);

};
