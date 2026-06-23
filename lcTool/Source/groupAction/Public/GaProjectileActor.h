// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "GaProjectileActor.generated.h"

/************************************************************************/
/* 弹丸数据结构                                                                     */
/************************************************************************/
USTRUCT(BlueprintType)
struct FGaProjectileData
{
	GENERATED_BODY()
		//攻击力范围
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "弹丸攻击力"), Category = "弹丸数据")
		FVector2D attackValue = FVector2D(1, 3);

	//弹丸速度范围
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "弹丸速度"), Category = "弹丸数据")
		FVector2D speedValue = FVector2D(1000, 1200);


};

UCLASS()
class GROUPACTION_API AGaProjectileActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGaProjectileActor();

	//弹丸数据
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "弹丸数据", ExposeOnSpawn = true), Category = "A属性|弹丸初始数据")
		FGaProjectileData gaProjectildData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "射击目标位置", ExposeOnSpawn = true), Category = "弹丸内部数据")
		FVector targetLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "射击目标角色", ExposeOnSpawn = true), Category = "弹丸内部数据")
		AActor* targetCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "发射弹丸角色", ExposeOnSpawn = true), Category = "弹丸内部数据")
		ACharacter* sendCharacter;

	UPROPERTY(BlueprintReadWrite, BlueprintReadWrite, meta = (DisplayName = "是否击中Actor", ExposeOnSpawn = false), Category = "弹丸内部数据")
		bool hitTarget;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
