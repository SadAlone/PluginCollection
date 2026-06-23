// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GaTargetPointActor.generated.h"

class AGaGroupUnit;
class AGaTargetPointActor;
class ABaseFormationBuilder;
/************************************************************************/
/* 目标单元类型                                                                     */
/************************************************************************/
UENUM(BlueprintType)
enum class ETargetUnitType :uint8
{

	ETUT_Idle UMETA(DisplayName = "待机目标"),
	ETUT_FormationTarget UMETA(DisplayName = "阵型目标"),
	ETUT_PointTarget UMETA(DisplayName = "移动点目标"),
	ETUT_ActorTarget UMETA(DisplayName = "移动单位目标"),
	ETUT_RemoteRangeRandAttackTarget UMETA(DisplayName = "远程范围随机攻击目标"),
	ETUT_CustomTarget UMETA(DisplayName = "自定义目标"),
};

/**
 * 待机目标完成条件类型
 */
UENUM(BlueprintType)
enum class EIdelTargetFinishConditionType :uint8 {
	EITFCT_Immediately UMETA(DisplayName = "立即完成"),
	EITFCT_Delay UMETA(DisplayName = "延时完成"),
	EITFCT_Sequence UMETA(DisplayName = "定序器控制完成"),
};

/************************************************************************/
/* 待机目标数据结构                                                                     */
/************************************************************************/
USTRUCT(BlueprintType)
struct FIdleTargetUnitData {
	GENERATED_BODY()
		//目标单元类型
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "待机帧数"), Category = "待机目标数据")
		float idleFrameCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "待机完成条件"), Category = "待机目标数据")
		EIdelTargetFinishConditionType idelTargetFinishConditionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "待机时间",
		EditCondition = "idelTargetFinishConditionType=EIdelTargetFinishConditionType::EITFCT_Delay"), Category = "待机目标数据")
		float delayTime = 1;

};

/**
 * 阵型目标完成条件类型
 */
UENUM(BlueprintType)
enum class EFormationTargetFinishConditionType :uint8 {
	EFTFCT_Immediately UMETA(DisplayName = "立即完成"),
	EFTFCT_AllArrive UMETA(DisplayName = "全部到达完成"),
	EFTFCT_Sequence UMETA(DisplayName = "定序器完成"),
};

/**
 * 目标阵型类型
 */
UENUM(BlueprintType)
enum class EFormationTargetType :uint8
{
	EFTT_OriFormation UMETA(DisplayName = "原始阵型"),
	EFTT_FormationBuilder UMETA(DisplayName = "阵型生成器阵型"),
	EFTT_SquareFormation UMETA(DisplayName = "矩形阵型"),
	EFTT_CircleFormation UMETA(DisplayName = "圆形阵型"),
};

/**
 * 矩形阵型目标数据
 */
USTRUCT(BlueprintType)
struct FSquareFormationTargetUnitData {
	GENERATED_BODY()
		//阵型目标类型
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "宽度"), Category = "矩形阵型目标数据")
		int X;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "长度"), Category = "矩形阵型目标数据")
		int Y;
};


/**
 * 圆形阵型目标数据
 */
USTRUCT(BlueprintType)
struct FCircleFormationTargetUnitData {
	GENERATED_BODY()
		//阵型目标类型
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "宽度"), Category = "矩形阵型目标数据")
		int X;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "长度"), Category = "矩形阵型目标数据")
		int Y;
};


/************************************************************************/
/* 阵型目标数据结构                                                                     */
/************************************************************************/
USTRUCT(BlueprintType)
struct FFormationTargetUnitData {
	GENERATED_BODY()
		//阵型目标类型
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "阵型类型"), Category = "阵型目标数据")
		EFormationTargetType formationTargetType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "矩形阵型目标数据", EditCondition = "formationTargetType==EFormationTargetType::EFTT_SquareFormation"), Category = "阵型目标数据")
		FSquareFormationTargetUnitData squareFormationTargetUnitData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "圆形阵型目标数据", EditCondition = "formationTargetType==EFormationTargetType::EFTT_CircleFormation"), Category = "阵型目标数据")
		FCircleFormationTargetUnitData circleFormationTargetUnitData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "阵型目标完成条件类型", EditCondition = "formationTargetType==EFormationTargetType::EFTT_CircleFormation"), Category = "阵型目标数据")
		EFormationTargetFinishConditionType formationTargetFinishConditionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "阵型生成器引用",
		EditCondition = "formationTargetType==EFormationTargetType::EFTT_FormationBuilder"), Category = "阵型目标数据")
		TArray<ABaseFormationBuilder*>formationBuilderArr;
};

/**
 * 远程范围攻击数据
 */
UENUM(BlueprintType)
enum class ERemoteRangeAttackTargetType :uint8 {
	ERRATT_Square UMETA(DisplayName = "矩形范围攻击"),
	ERRATT_Circle UMETA(DisplayName = "圆形范围攻击"),
};

//远程范围攻击接口用数据结构
USTRUCT(BlueprintType)
struct FRemoteRangeAttackTargetInterfaceData
{
	GENERATED_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "远程范围攻击类型"), Category = "远程范围攻击目标数据")
		ERemoteRangeAttackTargetType remoteRangeAttackTargetType;

	//矩形盒子大小
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "矩形盒子大小",
		EditCondition = "ERemoteRangeAttackTargetType== ERRATT_Square"), Category = "远程范围攻击目标数据")
		FVector squareSize;

	//圆形半径
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "圆形范围半径",
		EditCondition = "ERemoteRangeAttackTargetType== ERRATT_Circle"), Category = "远程范围攻击目标数据")
		float circleSize = 100;
};

//远程范围攻击接口用数据结构
USTRUCT(BlueprintType)
struct FRemoteRangeAttackTargetData
{
	GENERATED_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "远程范围攻击类型"), Category = "远程范围攻击目标数据")
		ERemoteRangeAttackTargetType remoteRangeAttackTargetType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "范围包围盒大小"), Category = "远程范围攻击目标数据")
		FBoxSphereBounds bound;

};


//指定帧触发生成
USTRUCT(BlueprintType)
struct FGaSpecialFrameToggleActiveData
{
	GENERATED_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "指定触发生成的帧数"), Category = "指定帧触发生成角色数据")
		int speicalFrame = 0;
};


/************************************************************************/
/* 自动查找范围目标哈希                                                                     */
/************************************************************************/

#define GA_FIND_ENEMY_HASH_CELL_BITS 9	// 512x512 grid

struct FGaFindEnemyHash
{
private:
	const int32 HashCellBits;
	TMap<uint64, TSet<int32>> CellMap;

	uint64 MakeKey(int32 CellX, int32 CellY) const
	{
		return ((uint64)(*(uint32*)(&CellX)) << 32) | (*(uint32*)(&CellY) & 0xffffffff);
	}

	uint64 MakeKey(const FVector& Location) const
	{
		return  MakeKey(FMath::FloorToInt(Location.X) >> HashCellBits, FMath::FloorToInt(Location.Y) >> HashCellBits);
	}

public:
	FGaFindEnemyHash(int32 InHashCellBits = GA_FIND_ENEMY_HASH_CELL_BITS)
		: HashCellBits(InHashCellBits)
	{}

	void InsertInstance(const FVector& InstanceLocation, int32 InstanceIndex)
	{
		uint64 Key = MakeKey(InstanceLocation);

		CellMap.FindOrAdd(Key).Add(InstanceIndex);
	}

	void RemoveInstance(const FVector& InstanceLocation, int32 InstanceIndex, bool bChecked = true)
	{
		uint64 Key = MakeKey(InstanceLocation);

		if (bChecked)
		{
			int32 RemoveCount = CellMap.FindChecked(Key).Remove(InstanceIndex);
			check(RemoveCount == 1);
		}
		else if (TSet<int32>* Value = CellMap.Find(Key))
		{
			Value->Remove(InstanceIndex);
		}
	}

	void GetInstancesOverlappingBox(const FBox& InBox, TArray<int32>& OutInstanceIndices) const
	{
		int32 MinX = FMath::FloorToInt(InBox.Min.X) >> HashCellBits;
		int32 MinY = FMath::FloorToInt(InBox.Min.Y) >> HashCellBits;
		int32 MaxX = FMath::FloorToInt(InBox.Max.X) >> HashCellBits;
		int32 MaxY = FMath::FloorToInt(InBox.Max.Y) >> HashCellBits;

		for (int32 y = MinY; y <= MaxY; y++)
		{
			for (int32 x = MinX; x <= MaxX; x++)
			{
				uint64 Key = MakeKey(x, y);
				auto* SetPtr = CellMap.Find(Key);
				if (SetPtr)
				{
					OutInstanceIndices.Append(SetPtr->Array());
				}
			}
		}
	}

	TArray<int32> GetInstancesOverlappingBox(const FBox& InBox) const
	{
		TArray<int32> Result;
		GetInstancesOverlappingBox(InBox, Result);
		return Result;
	}

	void CheckInstanceCount(int32 InCount) const
	{
		int32 HashCount = 0;
		for (const auto& Pair : CellMap)
		{
			HashCount += Pair.Value.Num();
		}

		check(HashCount == InCount);
	}

	void Empty()
	{
		CellMap.Empty();
	}

	friend FArchive& operator<<(FArchive& Ar, FGaFindEnemyHash& Hash)
	{
		Ar << Hash.CellMap;
		return Ar;
	}
};



UCLASS(BlueprintType, Blueprintable)
class GROUPACTION_API AGaTargetPointActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGaTargetPointActor();
public:

	UPROPERTY(BlueprintReadOnly, Category = "gaTargetPointActor")
		UStaticMeshComponent* IdentifyMeshComponent;
	UPROPERTY(BlueprintReadOnly, Category = "gaTargetPointActor")
		UInstancedStaticMeshComponent* targetPointInstanceComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "距离多远停下"), Category = "A属性|目标通用设置")
		float minArriveDistance = 50;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "是否直接激活目标"), Category = "A属性|目标通用设置")
		bool bActiveAtBegin = false;

	//需要完成此目标才能切换下一个目标
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "是否可以被攻击"), Category = "A属性|攻击设置")
		bool bCanAttack = false;

	//需要完成此目标才能切换下一个目标
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "需要完成此目标才能切换下一个目标"), Category = "A属性|目标通用设置")
		bool changeNeedFinish = false;

	//个体单独debug模式,是否在游戏中显示
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Debug显示模式"), Category = "A属性|Debug设置")
		bool bDebugMode = false;

	//获取指定ID原角色阵型目标世界位置ABaseFormationBuilder
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "target point")
		FVector GetTargetFormationWorldLocation(ABaseFormationBuilder* gaUnit, int id);
	FVector GetTargetFormationWorldLocation_Implementation(ABaseFormationBuilder* gaUnit, int id) { return GetTargetFormationWorldLocationNative(gaUnit, id); }
	FVector GetTargetFormationWorldLocationNative(ABaseFormationBuilder* gaUnit, int id);

	/*	FVector GetTargetFormationWorldLocation(AGaGroupUnit* gaUnit, int id);
	FVector GetTargetFormationWorldLocation_Implementation(AGaGroupUnit* gaUnit, int id) { return GetTargetFormationWorldLocationNative(gaUnit, id); }
	FVector GetTargetFormationWorldLocationNative(AGaGroupUnit* gaUnit, int id);*/

	UPROPERTY(Interp, BlueprintReadWrite, meta = (DisplayName = "是否可以启动"), Category = "C内部属性|目标设置")
		bool bCanBoot = false;

	UPROPERTY(Interp, BlueprintReadWrite, meta = (DisplayName = "是否允许移动暂停"), Category = "C内部属性|目标设置")
		bool bCanMovePause = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "目标是否允许完成"), Category = "C内部属性|目标设置")
		bool bFinish = true;

	FGaFindEnemyHash gaFindEnemyHash;

	//获取求内实例
	UFUNCTION(BlueprintCallable, Category = "gaTarget")
		void GetInstancesInsideSphere(float radius, FVector loaction, TArray<int32>& OutInstances);

	//添加敌人实例
	UFUNCTION(BlueprintCallable, Category = "gaTarget")
		void AddEnemyInstance(FVector location, int32 instanceId);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OnConstruction(const FTransform& Transform);

};
