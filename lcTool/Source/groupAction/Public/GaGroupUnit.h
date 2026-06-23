// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GaSubVolum.h"
#include "GaTargetPointActor.h"
#include "GaProjectileActor.h"
#include "GameFramework/SaveGame.h"
#include "GaGroupUnit.generated.h"


class AGaCharacter;


#define FOLIAGE_HASH_CELL_BITS 9	// 512x512 grid

struct FGroupActionPaintHash
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
	FGroupActionPaintHash(int32 InHashCellBits = FOLIAGE_HASH_CELL_BITS)
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

	friend FArchive& operator<<(FArchive& Ar, FGroupActionPaintHash& Hash)
	{
		Ar << Hash.CellMap;
		return Ar;
	}
};



struct FGroupActionPaintInfo
{
	TUniquePtr<FGroupActionPaintHash> InstanceHash;
	//添加实例哈希
	void AddInstance(FVector location, int Index);


	void InitInstanceComponent(TMap<int, FVector>idLocationMap);
	void Clear();
};


/************************************************************************/
/* 初始动画数据结构                                                                     */
/************************************************************************/
USTRUCT(BlueprintType)
struct FGaUnitInitAnimData {
	GENERATED_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "初始动画数组"), Category = "初始动画数据")
		TArray<UAnimationAsset*>initAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "随机使用动画"), Category = "初始动画数据")
		bool bUseRandomIndex = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "动画播放速度是否随机"), Category = "初始动画数据")
		bool bUseRandomAnimSpeed = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,
		meta = (DisplayName = "动画播放速度随机最小最大范围"),
		Category = "初始动画数据")
		FVector2D randomAnimSpeedRange = FVector2D(0.9, 1.1);
};

/************************************************************************/
/* 移动动画数据结构                                                                     */
/************************************************************************/
USTRUCT(BlueprintType)

struct FGaUnitMoveAnimData {
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "移动动画数组"), Category = "移动动画数据")
		TArray<UAnimationAsset*>moveAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "随机使用动画"), Category = "移动动画数据")
		bool bUseRandomIndex = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "动画播放速度是否随机"), Category = "移动动画数据")
		bool bUseRandomAnimSpeed = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,
		meta = (DisplayName = "动画播放速度随机最小最大范围",
			EditCondition = "bUseRandomAnimSpeed"),
		Category = "移动动画数据")
		FVector2D randomAnimSpeedRange = FVector2D(0.8f, 1.1f);
};

/************************************************************************/
/* 攻击动画数据结构                                                                     */
/************************************************************************/
USTRUCT(BlueprintType)

struct FGaUnitAttackAnimData {
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "攻击动画数组"), Category = "攻击动画数据")
		TArray<UAnimationAsset*>AttackAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "随机使用动画"), Category = "攻击动画数据")
		bool bUseRandomIndex = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "动画播放速度是否随机"), Category = "攻击动画数据")
		bool bUseRandomAnimSpeed = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,
		meta = (DisplayName = "动画播放速度随机最小最大范围",
			EditCondition = "bUseRandomAnimSpeed"),
		Category = "攻击动画数据")
		FVector2D randomAnimSpeedRange = FVector2D(0.8f, 1.1f);
};

/************************************************************************/
/* 死亡动画数据结构                                                                     */
/************************************************************************/
USTRUCT(BlueprintType)

struct FGaUnitDeadAnimData {
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "死亡动画数组"), Category = "死亡动画数据")
		TArray<UAnimationAsset*>deadAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "随机使用动画"), Category = "死亡动画数据")
		bool bUseRandomIndex = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "动画播放速度是否随机"), Category = "死亡动画数据")
		bool bUseRandomAnimSpeed = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,
		meta = (DisplayName = "动画播放速度随机最小最大范围",
			EditCondition = "bUseRandomAnimSpeed"),
		Category = "死亡动画数据")
		FVector2D randomAnimSpeedRange = FVector2D(0.8f, 1.1f);
};


/************************************************************************/
/* 初始相关数据结构                                                                     */
/************************************************************************/
USTRUCT(BlueprintType)
struct FGaUnitInitData
{
	GENERATED_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "初始动画数据"), Category = "初始数据")
		FGaUnitInitAnimData gaUnitInitAnimData;
};

/************************************************************************/
/* 移动相关数据结构                                                                     */
/************************************************************************/
USTRUCT(BlueprintType)
struct FGaUnitMoveData
{
	GENERATED_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "基础移动速度范围"), Category = "移动数据")
		FVector2D baseMoveSpeed = FVector2D(700, 900);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "移动加速度范围"), Category = "移动数据")
		FVector2D moveAccelerate = FVector2D(1800, 2000);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "移动速度随机范围"), Category = "移动数据")
		FVector2D moveSpeedRandomRange = FVector2D(0.9, 1.1);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "单元移动动画数据"), Category = "移动数据")
		FGaUnitMoveAnimData gaUnitMoveAnimData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "生成就开始移动"), Category = "移动数据")
		bool bSpawnRun = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "是否使用AI移动"), Category = "移动数据")
		bool bUseAiMove = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "是否使用寻路导航网格",
		EditCondition = "bUseAiMove"), Category = "移动数据")
		bool bUseNav = false;
};

/************************************************************************/
/* 攻击相关数据结构                                                                     */
/************************************************************************/
//群组单元攻击类型
UENUM(BlueprintType)
enum class EGaUnitAttackType :uint8
{
	EGUAT_Close UMETA(DisplayName = "近战"),
	EGUAT_Remote UMETA(DisplayName = "远程"),
};

//远程攻击数据结构
USTRUCT(BlueprintType)
struct FGaUnitRemoteAttackData
{
	GENERATED_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "攻击弹丸类"), Category = "远程攻击数据")
		TSubclassOf<AGaProjectileActor>removeProjectClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "攻击范围"), Category = "远程攻击数据")
		FVector2D attackFarRange;
};

//群组单元攻击数据结构
USTRUCT(BlueprintType)
struct FGaUnitAttackData
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "攻击动画数据"), Category = "攻击数据")
		FGaUnitAttackAnimData gaUnitAttackAnimData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "攻击方式"), Category = "攻击数据")
		EGaUnitAttackType attackType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "远程攻击数据",
		EditCondition = "attackType==EGaUnitAttackType::EGUAT_Remote"
		), Category = "攻击数据")
		FGaUnitRemoteAttackData gaUnitRemoteAttackData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "攻击力范围"), Category = "攻击数据")
		FVector2D attackStength = FVector2D(1, 2);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "攻击次数范围"), Category = "攻击数据")
		FVector2D attackMaxCount = FVector2D(0, 0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "攻击次数随机范围",
		EditCondition = "attackMaxCount>0"
		), Category = "攻击数据")
		FVector2D attackRandomRange = FVector2D(0, 0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "攻击间隔范围"), Category = "攻击数据")
		FVector2D attackInterval = FVector2D(1, 2);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "初次攻击延时范围"), Category = "攻击数据")
		FVector2D firstAttackDelay = FVector2D(0, 0);

};

/************************************************************************/
/* 死亡相关数据结构                                                                     */
/************************************************************************/
USTRUCT(BlueprintType)
struct FGaUnitDeadData
{
	GENERATED_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "允许被攻击死亡"), Category = "死亡数据")
		bool bAttackDead = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "允许被攻击死亡",
		EditCondition = "bAttackDead"
		), Category = "死亡数据")
		FVector2D hp = FVector2D(3, 4);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "允许触发死亡"), Category = "死亡数据")
		bool bTriggerDead = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "开启布娃娃系统"), Category = "死亡数据")
		bool bEnablePhysic = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "死亡后消散时间"), Category = "死亡数据")
		FVector2D removeDelay = FVector2D(1, 3);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "死亡动画数据"), Category = "死亡数据")
		FGaUnitDeadAnimData deadAnimData;
};


USTRUCT(BlueprintType)
struct FGaUnitCustomData
{
	GENERATED_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "自定义状态机类"), Category = "自定义单元动作数据")
		TArray<TSubclassOf<UObject>>customSmClass;
};


USTRUCT(BlueprintType)
struct FGaUnitDelaySpawn
{
	GENERATED_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "是否延迟生成"), Category = "延迟生成数据")
		bool isDelaySpawn = false;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "单个延迟生成?",
	//	EditCondition = "isDelaySpawn"
	//	), Category = "延迟生成数据|单个?")
	//	bool bSigleDelaySpawn = false;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "单个延迟生成时间",
	//	EditCondition = "bSigleDelaySpawn"
	//	), Category = "延迟生成数据|单个?|延迟时间")
	//	float bSigleDelayTime = 0.0f;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "多个延迟生成?",
	//	EditCondition = "isDelaySpawn"
	//	), Category = "延迟生成数据|多个?")
	//	bool bMultiDelaySpawn = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "延迟生成时间",
		EditCondition = "isDelaySpawn"
		), Category = "延迟生成数据|延迟时间")
		float bMultiDelayTime = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "延迟生成次数",
		EditCondition = "isDelaySpawn"
		), Category = "延迟生成数据|延迟次数")
		int32 bMultiDelayNum = 1;

};


/**
 * 群组角色数据结构
 */
USTRUCT(BlueprintType)
struct FGaCharacterData
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "初始化相关数据"), Category = "单元数据")
		FGaUnitInitData gaUnitInitData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "移动相关数据"), Category = "单元数据")
		FGaUnitMoveData gaUnitMoveData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "攻击相关数据"), Category = "单元数据")
		FGaUnitAttackData gaUnitAttackData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "死亡相关数据"), Category = "单元数据")
		FGaUnitDeadData gaUnitDeadData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "自定义相关数据"), Category = "单元数据")
		FGaUnitCustomData gaUnitCustomData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "角色生成叠加变换默认"), Category = "单元数据")
		FTransform characterSpawnTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "开启叠加变换范围"), Category = "单元数据")
		bool openScaleRange = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "角色生成放大倍数",
		EditCondition = "openRange"
		), Category = "单元数据")
		FVector2D characterSpawnTransformRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "角色大小半径"), Category = "单元数据")
		float characterSize = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "是否使用插值旋转"), Category = "单元数据")
		bool bUseLerpRotation = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "插值旋转速率"), Category = "单元数据")
		float lerpRotationSpeed = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "无目标旋转值"), Category = "单元数据")
		FRotator noTargetLooat;

	//角色ID
	UPROPERTY()
		int characterId;
};

//阵型构建单元数据结构
USTRUCT(BlueprintType)
struct FFormationBuildUnitData
{
	GENERATED_BODY()

		//对应ID
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "formation build data")
		int id;

	//角色类
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "formation build data")
		TSubclassOf<AGaCharacter>gaCharacterClass;
	//角色数据
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "formation build data")
		FGaCharacterData characterData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "formation build data")
		FBoxSphereBounds bound;
};


USTRUCT(BlueprintType)
struct FGaUnitSaveData
{
	GENERATED_BODY()
		//保存构建好的阵型数据
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "gaUnitSaveData")
		TMap<int, FFormationBuildUnitData>idFormationBuildUnitData;
};

USTRUCT(BlueprintType)
struct FGaFormationSaveData
{
	GENERATED_BODY()
		//保存构建好的阵型数据
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "gaUnitSaveData")
		TMap<int, FVector>idLocationData;
};

UCLASS()
class UGroupActionSaveGame :public USaveGame
{
	GENERATED_BODY()
public:
	UPROPERTY()
		TMap<FGuid, FGaUnitSaveData>saveUnitData;

	UPROPERTY()
		TMap<FGuid, FGaFormationSaveData>saveFormationData;
};


//阵型构建器
UCLASS(BlueprintType, Blueprintable)
class GROUPACTION_API ABaseFormationBuilder : public  AActor {
	GENERATED_BODY()
public:
	ABaseFormationBuilder();

	/**********************************************************************/
	//合并  property

	UPROPERTY(AdvancedDisplay, Interp, meta = (DisplayName = "是否可以生成群组"), Category = "C属性内部调用|群组总控制")
		bool bCanSpawnCaCharacter = false;

	UPROPERTY()
		bool bAlreadSpawnCharacter = false;

	UPROPERTY(AdvancedDisplay, Interp, meta = (DisplayName = "是否可以销毁群组"), Category = "C属性内部调用|群组总控制")
		bool bCanDestroyGaCharaceter = false;
	UPROPERTY()
		bool bAlreadDestroyCharacter = false;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "是否使用定序器K属性"), Category = "角色属性|群组角色设置")
		bool bUseSequencerChangeProperty = false;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "使用指定生成旋转"), Category = "角色属性|群组角色设置")
		bool bUseSpecialSpawnRotator = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "使用随机旋转"), Category = "角色属性|群组角色设置")
		bool bUseRandomSpawnRotator = false;

	/*****************角 色 构 造 参 数*************************/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "视点"), Category = "角色属性|角色构造参数")
		AActor* viewPort;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "随机死亡旋转"), Category = "角色属性|角色构造参数")
		bool randomDeadRotation = false;

	/************************************************************************/
	/* 定序器用属性变换                                                                     */
	/************************************************************************/
	UPROPERTY(Interp, BlueprintReadWrite, meta = (DisplayName = "移动速度比值"), Category = "D定序器K内部用")
		float  moveSpeedMultiValue = 1.0f;

	//自定义生成旋转目标方向
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "旋转方向位置", MakeEditWidget = true), Category = "C属性内部调用|群组角色设置")
		FVector specialSpawnRotator = FVector(0, 0, 0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "目标数组"), Category = "角色属性|目标设置")
		TArray<AGaTargetPointActor*>targetPointArr;

	
	//是否间隔生成
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "间隔生成设置"), Category = "角色属性|间隔生成")
			FGaUnitDelaySpawn delaySpawn;






	/***************************************************************************/

	//guid
	UPROPERTY()
		FGuid guid;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "baseFormationBuilder")
		FGuid GetFormationGuid();
	//id对应位置map
	UPROPERTY()
		TMap<int, FVector>idLocationMap;


	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "baseFormationBuilder")
		void GetIdLocationMap(TMap<int, FVector>& retMap);

	UFUNCTION(BlueprintCallable, Category = "baseFormationBuilder")
		void SetIdLocationMap(TMap<int, FVector>retMap);

	//HaskId 对应 instanceid map
	TMap<int, int>HashId_InstanceId_Map;
	//阵型绘制哈希
	FGroupActionPaintHash formationHashInstance;

	UFUNCTION(BlueprintCallable, Category = "baseFormationBuilder")
		void RefreshFormationHash();


	UFUNCTION(BlueprintImplementableEvent, meta = (CallInEditor = "true"), Category = "C函数内部调用")
		void UpdateFormationNumber(int newNum);
	/************************************************************************/
/* 开关                                                                     */
/************************************************************************/
	UPROPERTY(BlueprintReadWrite, Category = "baseFormationBuilder")
		bool bNeedRefresh = false;

	UFUNCTION(BlueprintImplementableEvent, meta = (CallInEditor = "true"), Category = "formation build data")
		int AddFormationInstance(FVector location);

	UFUNCTION(BlueprintImplementableEvent, meta = (CallInEditor = "true"), Category = "formation build data")
		FVector RemoveFormationInstance(int id);

	UFUNCTION(BlueprintImplementableEvent, meta = (CallInEditor = "true"), Category = "formation build data")
		void UpdateIdMapToFormation();

	UFUNCTION(BlueprintImplementableEvent, meta = (CallInEditor = "true"), Category = "formation build data")
		void ChangeInstanceSize(float size);

	UFUNCTION(BlueprintImplementableEvent, meta = (CallInEditor = "true"), Category = "formation build data")
		UInstancedStaticMeshComponent* GetInstanceComponent();

	//获取指定ID阵型位置
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "formation build data")
		FVector GetFormationLocation(int id, AGaGroupUnit* unit, AGaTargetPointActor* target, bool& bHaveResult);
	FVector GetFormationLocation_Implementation(int id, AGaGroupUnit* unit, AGaTargetPointActor* target, bool& bHaveResult);
	virtual FVector GetFormationLocationNative(int id, AGaGroupUnit* unit, AGaTargetPointActor* target, bool& bHaveResult) { return FVector(0, 0, 0); };

	//构建初始阵型
	//UFUNCTION(BlueprintNativeEvent)
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (CallInEditor = "true"), Category = "formation build data")
		TArray<FFormationBuildUnitData> BuildSpawnFormation(bool& bWorldSpace);
	TArray<FFormationBuildUnitData> BuildSpawnFormation_Implementation(bool& bWorldSpace);
	virtual TArray<FFormationBuildUnitData> BuildSpawnFormationNative(bool& bWorldSpace) { return TArray<FFormationBuildUnitData>(); };

	//获取阵型构建器构建数量
	UFUNCTION(BlueprintImplementableEvent, meta = (CallInEditor = "true"))
		int GetFormationoBuilderAllCount();
	//获取圆圈内随机点
	UFUNCTION(BlueprintCallable, Category = "formation build data")
		FVector2D GetRandomPointInCircle(float radius);

	UFUNCTION(BlueprintCallable, Category = "formation build data")
		bool IsBoundBoxIntersect(FBoxSphereBounds bound1, FBoxSphereBounds bound2);

	UFUNCTION(BlueprintCallable, Category = "formation build data")
		bool isBoundSphereIntersect(FBoxSphereBounds bound1, FBoxSphereBounds bound2);

	//获取一个随机角色数据
	UFUNCTION(BlueprintCallable, Category = "formation build data")
		virtual FGaCharacterData GetRandomCharacterData(TSubclassOf<AGaCharacter>gaCharClass);

	/************************************************************************/
	/* 显示隐藏构建器结果*/
	/************************************************************************/
	UFUNCTION(BlueprintNativeEvent, CallInEditor, Category = "C函数内部调用")
		void ShowHideFormation(bool bShow);
	void ShowHideFormation_Implementation(bool bShow);

	/************************************************************************/
/* 数据载入保存                                                                     */
/************************************************************************/
	bool bLoadAtInit = false;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, CallInEditor, Category = "C函数内部调用")
		void SaveFormationData();
	void SaveFormationData_Implementation();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, CallInEditor, Category = "C函数内部调用")
		void LoadFormationData();
	void LoadFormationData_Implementation();

	//构建脚本
	virtual void OnConstruction(const FTransform& Transform) override;

	virtual void Tick(float DeltaTime) override;


protected:
	virtual void BeginPlay() override;


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "阵型构建器"), Category = "角色属性|阵型设置")
		ABaseFormationBuilder* formationBuilder;

	UPROPERTY()
		UStaticMeshComponent* IdentifyMeshComponent;


	//普通木桩 mesh实例
	UPROPERTY()
		UInstancedStaticMeshComponent* groupUnitDeadmanInstanceComponent;

	//构建好的ID阵型构建单元数据MAP
	UPROPERTY()
		TMap<int, FFormationBuildUnitData> idFormationBuildUnitData;

	//存在角色合集set
	UPROPERTY()
		TSet<ACharacter*>aliveCharacterSet;

	//角色ID 引用 map
	UPROPERTY(BlueprintReadWrite, Category = "formation build data")
		TMap<int, ACharacter*>characterIdMap;


	//角色ID 缩放 map
	UPROPERTY(BlueprintReadWrite, Category = "formation build data")
		TMap<int, FVector> characterScaleMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "开启调试关闭模式"), Category = "角色属性|调试模式设置")
		bool bEnableDebgCloseMdoe = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "立即生成群组角色"), Category = "角色属性|群组生成设置")
		bool bSpawnCharWhenBegin = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "生成位置偏移"), Category = "角色属性|群组生成设置")
		FVector spawnCharacterOffset = FVector(0, 0, 10);


public:
	/*********************合        并****************************************/

	//构建阵型
	UFUNCTION(BlueprintCallable, Category = "group action unit")
		void BuildFormation();


	/************************************************************************/
	/* 角色生成处理                                                                     */
	/************************************************************************/
	//生成角色
	UFUNCTION(BlueprintCallable, Category = "group action unit")
		void SpawnCharacter(int32 characterId = 0);

	UFUNCTION(BlueprintImplementableEvent, Category = "group action unit")
		void spawnCharacterEvent(AGaCharacter* character);

	/************************************************************************/
	/* 数据载入保存                                                                     */
	/************************************************************************/
	UFUNCTION(BlueprintNativeEvent, CallInEditor, Category = "C函数内部调用")
		void SaveUnitData();
	void SaveUnitData_Implementation();


	UFUNCTION(BlueprintNativeEvent, CallInEditor, Category = "C函数内部调用")
		void LoadUnitData();
	void LoadUnitData_Implementation();



};


UCLASS(BlueprintType)
class GROUPACTION_API AGaGroupUnit : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGaGroupUnit();

	//单元ID
	UPROPERTY()
		FGuid guid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "立即生成群组角色"), Category = "A属性|群组生成设置")
		bool bSpawnCharWhenBegin = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "生成位置偏移"), Category = "A属性|群组生成设置")
		FVector spawnCharacterOffset = FVector(0, 0, 10);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "阵型构建器"), Category = "A属性|阵型设置")
		ABaseFormationBuilder* formationBuilder;

	UPROPERTY(AdvancedDisplay, Interp, meta = (DisplayName = "是否可以生成群组"), Category = "C属性内部调用|群组总控制")
		bool bCanSpawnCaCharacter = false;

	UPROPERTY()
		bool bAlreadSpawnCharacter = false;

	UPROPERTY(AdvancedDisplay, Interp, meta = (DisplayName = "是否可以销毁群组"), Category = "C属性内部调用|群组总控制")
		bool bCanDestroyGaCharaceter = false;
	UPROPERTY()
		bool bAlreadDestroyCharacter = false;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "目标数组"), Category = "A属性|目标设置")
		TArray<AGaTargetPointActor*>targetPointArr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "角色之间互相是否有碰撞"), Category = "角色属性|群组角色设置")
		bool bCollisionOtherPawn = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "是否使用定序器K属性"), Category = "角色属性|群组角色设置")
		bool bUseSequencerChangeProperty = false;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "使用指定生成旋转"), Category = "角色属性|群组角色设置")
		bool bUseSpecialSpawnRotator = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "使用随机旋转"), Category = "角色属性|群组角色设置")
		bool bUseRandomSpawnRotator = false;

	UPROPERTY()
		UStaticMeshComponent* IdentifyMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "开启调试关闭模式"), Category = "A属性|调试模式设置")
		bool bEnableDebgCloseMdoe = false;

	/************************************************************************/
	/* 定序器用属性变换                                                                     */
	/************************************************************************/
	UPROPERTY(Interp, BlueprintReadWrite, meta = (DisplayName = "移动速度比值"), Category = "D定序器K内部用")
		float  moveSpeedMultiValue = 1.0f;

	//自定义生成旋转目标方向
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "旋转方向位置", MakeEditWidget = true), Category = "C属性内部调用|群组角色设置")
		FVector specialSpawnRotator = FVector(0, 0, 0);

	//普通木桩 mesh实例
	UPROPERTY()
		UInstancedStaticMeshComponent* groupUnitDeadmanInstanceComponent;

	//所有单元数量
	UPROPERTY()
		int allGroupUnitCount = 0;

	//角色ID 引用 map
	UPROPERTY(BlueprintReadWrite, Category = "formation build data")
		TMap<int, ACharacter*>characterIdMap;

	//角色ID 引用 map
	UPROPERTY(BlueprintReadWrite, Category = "formation build data")
		TMap<int, FVector> characterScaleMap;

	//存在角色合集set
	UPROPERTY()
		TSet<ACharacter*>aliveCharacterSet;

	//获取活着的角色合集
	UFUNCTION(BlueprintCallable, Category = "gaUnit")
		TSet<ACharacter*> GetAliveCharacterSet();

	//移除活着的角色
	UFUNCTION(BlueprintCallable, Category = "gaUnit")
		void RemoveAliveCharacter(AGaCharacter* character);

	//构建好的ID阵型构建单元数据MAP
	UPROPERTY()
		TMap<int, FFormationBuildUnitData>idFormationBuildUnitData;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OnConstruction(const FTransform& Transform) override;

	//追踪指定坐标的有效高度
	bool traceSpecialLocationHeight(FVector& outVector);

	//构建阵型
	UFUNCTION(BlueprintCallable, Category = "group action unit")
		void BuildFormation();

	UFUNCTION(BlueprintCallable, Category = "group action unit")
		void RefreshFormation();

	UFUNCTION(BlueprintCallable, Category = "group action unit")
		void SetGuid(FGuid inguid);

	/************************************************************************/
	/* 角色生成处理                                                                     */
	/************************************************************************/
	//生成角色
	UFUNCTION(BlueprintCallable, Category = "group action unit")
		void SpawnCharacter();

	//
	UFUNCTION(BlueprintImplementableEvent, Category = "group action unit")
		void spawnCharacterEvent(AGaCharacter* character);

	/************************************************************************/
	/* 数据载入保存                                                                     */
	/************************************************************************/
	UFUNCTION(BlueprintNativeEvent, CallInEditor, Category = "C函数内部调用")
		void SaveUnitData();
	void SaveUnitData_Implementation();

	bool bLoadAtInit = false;

	UFUNCTION(BlueprintNativeEvent, CallInEditor, Category = "C函数内部调用")
		void LoadUnitData();
	void LoadUnitData_Implementation();

};

UENUM(BlueprintType)
enum class EGaControlMode : uint8
{
	EGCM_Normal UMETA(DisplayName = "普通模式"),
	EGCM_Paint UMETA(DisplayName = "绘制模式"),
	EGCM_Select UMETA(DisplayName = "选择模式"),
};


USTRUCT(BlueprintType)
struct FGaSettingSaveData {
	GENERATED_BODY()

		UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "当前操控模式"), Category = "操控设置")
		EGaControlMode egcm;

	//是否显示构建器
	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "是否显示阵型构建器"), Category = "群组显示设置")
		bool bShowFormationBuilder = true;

	//是否在离开群组操作面板后继续显示群组unit
	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "是否在离开面板后继续显示群组"), Category = "群组显示设置")
		bool bShowGaUnitWhenLeaveGaMode = false;




};


//群组设置对象
UCLASS()
class GROUPACTION_API UGaSettingObject : public USaveGame
{
	GENERATED_BODY()
public:
	UGaSettingObject();

	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "当前操控模式"), Category = "操控设置")
		EGaControlMode egcm;
	//是否是单点绘制模式
	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "是否中心单点绘制"), Category = "操控设置")
		bool bSinglePaintMode = true;
	//是否显示构建器
	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "是否显示阵型构建器"), Category = "群组显示设置")
		bool bShowFormationBuilder = true;

	//是否显示群组单元
	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "是否显示构建好的群组单元"), Category = "群组显示设置")
		bool bShowGaUnit = true;

	//是否在离开群组操作面板后继续显示群组unit
	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "是否在离开面板后继续显示群组"), Category = "群组显示设置")
		bool bShowGaUnitWhenLeaveGaMode = false;

	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "是否绘制骨骼网格体"), Category = "骨骼网格体绘制")
		bool bPaintSkeletalMesh = false;

	//是否自动生成GUID
	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "是否给群组自动生成GUID"), Category = "其他设置")
		bool bAutoCreateGUID = true;

	//刷子半径
	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "笔刷半径"), Category = "群组绘制设置")
		float brushRadius = 100.0f;

	//绘制密度
	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "绘制密度"), Category = "群组绘制设置")
		float density = 100.0f;


	UFUNCTION()
		void ChangeBrushRadisu(float changeValue);


};
