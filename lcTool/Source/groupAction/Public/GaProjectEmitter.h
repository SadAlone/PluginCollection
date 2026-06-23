// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GaProjectileActor.h"
#include "GaTargetPointActor.h"
#include "GaProjectEmitter.generated.h"

UENUM(BlueprintType)
enum class EGaProjectEmmiterTargetType :uint8
{
	EGPETT_RangeRandTarget UMETA(DisplayName="随机范围目标"),
	EGPETT_ActorTarget UMETA(DisplayName="Actor对象目标"),
	EGPETT_GaTarget UMETA(DisplayName="群组目标"),
};

//接口用组件
UCLASS(BlueprintType, Blueprintable)
class GROUPACTION_API UGaProjectEmitterInterfaceComponent :public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "发射物类"),Category="发射物发射器接口数据")
		TSubclassOf<AGaProjectileActor>projectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "固定发射器目标类型"), Category = "发射物发射器接口数据")
		EGaProjectEmmiterTargetType gaProjectEmmiterTargetType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "固定目标对象",
		EditCondition="gaProjectEmmiterTargetType== EGaProjectEmmiterTargetType::EGPETT_ActorTarget"), Category = "发射物发射器接口数据")
		AGaTargetPointActor* target;
};


UCLASS()
class GROUPACTION_API AGaProjectEmitter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGaProjectEmitter();

		//接口组件
	UPROPERTY()
		UGaProjectEmitterInterfaceComponent* interfaceComponent;

	//目标范围盒子组件
	UPROPERTY()
		UStaticMeshComponent* rangeTargetMeshComponent;

	//发射原点盒子组件
	UPROPERTY()
		UStaticMeshComponent* emmiterMeshComponent;


	UPROPERTY(BlueprintReadWrite, Interp, meta = (DisplayName = "目标范围盒子位置坐标", MakeEditWidget = true), Category = "弹丸发射器数据")
		FVector targetRangeBoxPoint;

	UPROPERTY(BlueprintReadWrite, Interp, meta = (DisplayName = "目标范围盒子大小" ), Category = "弹丸发射器数据")
		FVector targetRangeBoxExtend=FVector(100,100,100);

	UPROPERTY(BlueprintReadWrite, Interp, meta = (DisplayName = "发射器范围盒子位置坐标", MakeEditWidget = true), Category = "弹丸发射器数据")
		FVector emmiterRangeBoxPoint = FVector(-200,-200,200);

	UPROPERTY(BlueprintReadWrite, Interp, meta = (DisplayName = "发射器范围盒子大小"), Category = "弹丸发射器数据")
		FVector emmiterRangeBoxExtend=FVector(100,100,100);

	UPROPERTY(BlueprintReadWrite, Interp, meta = (DisplayName = "激活帧"), Category = "弹丸发射器数据")
		int activeFrame = 0;

	UPROPERTY(BlueprintReadWrite, Interp, meta = (DisplayName = "关闭发射"), Category = "弹丸发射器数据")
		bool bClose = false;

	UPROPERTY(BlueprintReadWrite, meta = (DisplayName = "发射次数"), Category = "弹丸发射器数据")
		int emmiterCountRange = 0;

	UPROPERTY(BlueprintReadWrite, meta = (DisplayName = "发射次数"), Category = "弹丸发射器数据")
		bool bRepailExtend;


	UPROPERTY()
		FBoxSphereBounds targetRangeBoxBound;

	UPROPERTY()
		FBoxSphereBounds emmiterRangeBoxBound;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void CreateTargetRangeComponent();
	void CreateEmmiterRangeComponent();

	//发射弹丸
	void LaunchProject();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OnConstruction(const FTransform& Transform)override;

};
