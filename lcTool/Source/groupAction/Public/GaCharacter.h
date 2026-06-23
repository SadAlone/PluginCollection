// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GaGroupUnit.h"
#include "GaTargetPointActor.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GaCharacter.generated.h"


#define DGaSmProperty_NoProperty 0

//群组角色状态机动画类型
UENUM()
enum class EGaCharacterSmType {
	EGCMAT_Idle,
	EGCMAT_Move,
	EGCMAT_Attack,
	EGCMAT_Dead,
	//被攻击
	EGCMAT_BeAttack,
	//逃跑
	EGCMAT_RunAway,
};


class AGaCharacter;
//群组角色状态机单元
UCLASS(BlueprintType, Blueprintable)
class UBaseGaCharacterSmUnit :public UObject
{
	GENERATED_BODY()
public:
	//状态机类型
	UPROPERTY()
		EGaCharacterSmType gaCharacterMcType;

	//状态机优先级
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "formation build data")
		int smUnitPriority;

	//状态机是否启动
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "formation build data")
		bool bEnable = false;

	//对应角色
	UPROPERTY(BlueprintReadOnly, Category = "formation build data")
		AGaCharacter* gaCharacter;

	//启动状态单元
	virtual void NativeBootSmUnit();
	//退出状态单元
	virtual void NativeExitSmUnit();
	//状态单元tick
	virtual void NativeSmUnitTick();
	//启动检查
	virtual int NativeBootCheck();

	UFUNCTION(BlueprintNativeEvent)
		void BootSmUnit();
	void BootSmUnit_Implementation();

	UFUNCTION(BlueprintNativeEvent)
		void ExitSmUnit();
	void ExitSmUnit_Implementation();

	UFUNCTION(BlueprintNativeEvent)
		void SmUnitTick();
	void SmUnitTick_Implementation();

	UFUNCTION(BlueprintNativeEvent)
		int BootCheck();
	int BootCheck_Implementation();
};

//死亡状态机
UCLASS(BlueprintType)
class UDeadGaCharacterSmUnit :public UBaseGaCharacterSmUnit
{
	GENERATED_BODY()
public:
	UDeadGaCharacterSmUnit();

	//启动状态机
	virtual void NativeBootSmUnit()override;

	virtual int NativeBootCheck() override;
};

//攻击状态机
UCLASS()
class UAttackGaCharacterSmUnit :public UBaseGaCharacterSmUnit
{
	GENERATED_BODY()
public:
	UAttackGaCharacterSmUnit();

	//启动状态机
	virtual void NativeBootSmUnit()override;
	virtual int NativeBootCheck() override;

};

//移动状态机
UCLASS(BlueprintType)
class UMoveGaCharacterSmUnit :public UBaseGaCharacterSmUnit
{
	GENERATED_BODY()
public:
	UMoveGaCharacterSmUnit();

	//启动状态机
	virtual void NativeBootSmUnit()override;
	virtual int NativeBootCheck() override;
	virtual void NativeSmUnitTick()override;
	virtual void NativeExitSmUnit()override;

	//ti模拟玩家移动
	void TickMove();

	//ai移动
	void AiMove();

	//带导航网格ai移动
	void AiMoveWithNavMesh();

};

//待机状态机
UCLASS(BlueprintType)
class UIdleGaCharacterSmUnit :public UBaseGaCharacterSmUnit
{
	GENERATED_BODY()
public:
	UIdleGaCharacterSmUnit();

	//启动状态机
	virtual void NativeBootSmUnit()override;
	virtual void NativeExitSmUnit()override;
	virtual int NativeBootCheck() override;

};

UCLASS(BlueprintType)
class GROUPACTION_API AGaCharacter : public ACharacter
{
	GENERATED_BODY()
public:
	// Sets default values for this character's properties
	AGaCharacter();


	//群组角色数据
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GaCharacter")
		FGaCharacterData characterData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GaCharacter")
		ABaseFormationBuilder* baseForBuilderUnit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GaCharacter")
		AGaGroupUnit* gaUnit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GaCharacter")
		AGaTargetPointActor* currentTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GaCharacter")
		bool bFinish = false;




	//死亡标志
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GaCharacter")
		bool bDead = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GaCharacter")
		bool randomDeadRotation = false;

	//是否是烘焙的角色
	bool bIsBakeCharacter = false;

	UFUNCTION(BlueprintCallable, Category = "formation build data")
		bool IsBakeCharacter();

	UFUNCTION(BlueprintCallable, Category = "formation build data")
		bool SetIsBakeCharacter(bool isBake);

	//目标数组
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "目标数组"), Category = "单元数据")
		TArray<AGaTargetPointActor*>targetArr;

	AGaTargetPointActor* GetCurrentTarget();

	//目标视点
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "目标视点"), Category = "GaCharacter")
		AActor* targetViewport;

	//烘焙后修正
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "使用烘焙修正"), Category = "烘焙修正")
	//	bool bBakeCorrect = false;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "变换修正"), Category = "烘焙修正")
	//	FTransform changeTransform;

	UFUNCTION(BlueprintCallable, Category = "formation build data")
		void SubCharacterHp(int hp);
	//退出当前状态机单元

	UFUNCTION(BlueprintCallable, Category = "GaCharacter")
		void ExitCurrentUnit();

	UFUNCTION(BlueprintCallable, Category = "formation build data")
		int GetCharacterId();

	UPROPERTY()
		FRotator lerpTargetRotation;

	//设置目标插值旋转
	UFUNCTION(BlueprintCallable, Category = "formation build data")
		void SetLerpRotation(FRotator targetRotation);

	//角色死亡
	UFUNCTION(BlueprintImplementableEvent)
		void Dead();

	//切换新ID,蓝图实现,默认不更改
	UFUNCTION(BlueprintImplementableEvent)
		void IdChange(int newId);

	UFUNCTION(BlueprintCallable, Category = "GaCharacter")
		void SetCharacterId(int id);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "替换待机状态机类"), Category = "GaCharacter")
		TSubclassOf<UBaseGaCharacterSmUnit>replaceIdleStateMachineClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "替换移动状态机类"), Category = "GaCharacter")
		TSubclassOf<UBaseGaCharacterSmUnit>replaceMoveStateMachineClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "替换死亡状态机类"), Category = "GaCharacter")
		TSubclassOf<UBaseGaCharacterSmUnit>replaceDeadStateMachineClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "替换攻击待机状态机类"), Category = "GaCharacter")
		TSubclassOf<UBaseGaCharacterSmUnit>replaceAttackStateMachineClass;


	//能否攻击敌人
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "gacharacter")
		bool CanAttackEnemy();
	bool CanAttackEnemy_Implementation();

	//初始化角色状态机
	UFUNCTION(BlueprintNativeEvent)
		void initCharacterStateMachine();
	void initCharacterStateMachine_Implementation();

	//状态机tick循环
	UFUNCTION(BlueprintNativeEvent)
		void StateMachineTickLoop();
	void StateMachineTickLoop_Implementation();

	//停止状态机
	UFUNCTION(BlueprintNativeEvent)
		void StopStateMachine();
	void StopStateMachine_Implementation();

	UFUNCTION(BlueprintCallable, Category = "gacharacter")
		void ClosePossessAi();
private:
	//状态机单元数组
	UPROPERTY()
		TArray<UBaseGaCharacterSmUnit*>smUnitArr;

	//当前状态机
	UPROPERTY()
		UBaseGaCharacterSmUnit* currentSmUnit;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//构建脚本
	virtual void OnConstruction(const FTransform& Transform) override;
};
