// Fill out your copyright notice in the Description page of Project Settings.


#include "GaCharacter.h"
#include "AIController.h"
#include "GaGroupUnit.h"
#include "Engine/Classes/Animation/AnimInstance.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetStringLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
// Sets default values
AGaCharacter::AGaCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

bool AGaCharacter::IsBakeCharacter()
{
	return bIsBakeCharacter;
}

bool AGaCharacter::SetIsBakeCharacter(bool isBake)
{
	bIsBakeCharacter = isBake;
	return true;
}

AGaTargetPointActor* AGaCharacter::GetCurrentTarget()
{
	return currentTarget;
	if (targetArr.Num() > 0)
	{
		if (targetArr[0]
			&& targetArr[0]->bCanBoot)
			return targetArr[0];
	}
	return nullptr;
}

void AGaCharacter::SubCharacterHp(int hp)
{
	characterData.gaUnitDeadData.hp.X -= hp;
}

bool AGaCharacter::CanAttackEnemy_Implementation()
{
	return !bDead;
}

void AGaCharacter::initCharacterStateMachine_Implementation()
{
	//死亡状态机
	if (characterData.gaUnitDeadData.deadAnimData.deadAnim.Num() > 0)
	{
		//UDeadGaCharacterSmUnit* deadUnit = NewObject<UDeadGaCharacterSmUnit>(this, TEXT("deadSmUnit"));
		if (replaceDeadStateMachineClass->IsValidLowLevel())
		{
			UBaseGaCharacterSmUnit* deadUnit = NewObject<UBaseGaCharacterSmUnit>(this, replaceDeadStateMachineClass);
			deadUnit->gaCharacter = this;
			smUnitArr.Add(deadUnit);
		}
		else
		{
			UBaseGaCharacterSmUnit* deadUnit = NewObject<UDeadGaCharacterSmUnit>(this, TEXT("deadSmUnit"));
			deadUnit->gaCharacter = this;
			smUnitArr.Add(deadUnit);
		}

	}

	if (characterData.gaUnitAttackData.gaUnitAttackAnimData.AttackAnim.Num() > 0)
	{
		if (replaceAttackStateMachineClass->IsValidLowLevel())
		{
			UBaseGaCharacterSmUnit* attackUnit = NewObject<UBaseGaCharacterSmUnit>(this, replaceAttackStateMachineClass);
			attackUnit->gaCharacter = this;
			smUnitArr.Add(attackUnit);
		}
		else
		{
			UAttackGaCharacterSmUnit* attackUnit = NewObject<UAttackGaCharacterSmUnit>(this, TEXT("attackSmUnit"));
			attackUnit->gaCharacter = this;
			smUnitArr.Add(attackUnit);
		}
	}

	if (characterData.gaUnitMoveData.gaUnitMoveAnimData.moveAnim.Num() > 0)
	{
		if (replaceMoveStateMachineClass->IsValidLowLevel())
		{
			UBaseGaCharacterSmUnit* moveUnit = NewObject<UBaseGaCharacterSmUnit>(this, replaceMoveStateMachineClass);
			moveUnit->gaCharacter = this;
			smUnitArr.Add(moveUnit);
		}
		else
		{
			UMoveGaCharacterSmUnit* moveUnit = NewObject<UMoveGaCharacterSmUnit>(this, TEXT("moveSmUnit"));
			moveUnit->gaCharacter = this;
			smUnitArr.Add(moveUnit);
		}
	}
	if (characterData.gaUnitInitData.gaUnitInitAnimData.initAnim.Num() > 0)
	{
		if (replaceIdleStateMachineClass->IsValidLowLevel())
		{
			UBaseGaCharacterSmUnit* idleUnit = NewObject<UBaseGaCharacterSmUnit>(this, replaceIdleStateMachineClass);
			idleUnit->gaCharacter = this;
			smUnitArr.Add(idleUnit);
		}
		else
		{
			UIdleGaCharacterSmUnit* idleUnit = NewObject<UIdleGaCharacterSmUnit>(this, TEXT("idleSmUnit"));
			idleUnit->gaCharacter = this;
			smUnitArr.Add(idleUnit);
		}
	}
	//生成自定义状态机单元
	if (characterData.gaUnitCustomData.customSmClass.Num() > 0)
	{
		for (auto& itUnitClass : characterData.gaUnitCustomData.customSmClass)
		{
			TSubclassOf<UObject>lsClass = itUnitClass;
			UObject* idleUnit = NewObject<UObject>(this, lsClass);
			UBaseGaCharacterSmUnit* lsBaseUnit = Cast< UBaseGaCharacterSmUnit>(idleUnit);
			if (lsBaseUnit)
			{
				lsBaseUnit->gaCharacter = this;
				smUnitArr.Add(lsBaseUnit);
			}
		}
	}
}

void AGaCharacter::StateMachineTickLoop_Implementation()
{
	if (smUnitArr.Num() <= 0)
		return;

	bool bTargetChange = false;
	bool bBootNewSm = false;

	//检查下一个目标是否能够启动
	if (targetArr.Num() > 0)
	{
		if (targetArr[0])
		{
			//如果下一个目标可以启动,当前状态已经完成,切换目标,切换单元
			if (targetArr[0]->bCanBoot
				&& bFinish)
			{
				//设置当前目标为下一个目标
				currentTarget = targetArr[0];
				//移除目标数组里的下一个目标
				targetArr.RemoveAt(0);
				//目标发生切换,当前的状态机置空
				//需要重新筛选状态机
				currentSmUnit = nullptr;

				bTargetChange = true;

				bFinish = false;
			}
		}
	}
	else if (currentTarget)
	{
		//如果当前状态已经完成,切换目标,切换单元
		if (bFinish)
		{
			//设置当前目标为下一个目标
			currentTarget = nullptr;
			//需要重新筛选状态机
			currentSmUnit = nullptr;

			bTargetChange = true;

			bFinish = false;
		}
	}
	else
	{
		FRotator lsRotator = UKismetMathLibrary::RInterpTo_Constant(GetActorRotation(), lerpTargetRotation, GetWorld()->GetDeltaSeconds(), characterData.lerpRotationSpeed);
		SetActorRotation(lsRotator);
	}

	UBaseGaCharacterSmUnit* oldSmUnit = nullptr;

	//筛选优先级最高的状态机单元
	for (auto smUnit : smUnitArr)
	{
		int newBootCheckValue = smUnit->BootCheck();

		if (newBootCheckValue > 0)
		{
			//如果当前状态机有效
			if (currentSmUnit)
			{
				//如果当前状态机启动检查值小于新的状态机
				if (currentSmUnit->BootCheck() < newBootCheckValue)
				{
					//记录老状态机
					oldSmUnit = currentSmUnit;
					//退出之前状态机
					oldSmUnit->ExitSmUnit();
					//转换新的状态机
					currentSmUnit = smUnit;
					currentSmUnit->BootSmUnit();
					bBootNewSm = true;
				}
			}
			else
			{
				currentSmUnit = smUnit;
				currentSmUnit->BootSmUnit();
			}
		}
	}
	//如果切换了新单元,也启动了新状态机,调用ID切换
	if (bBootNewSm && bTargetChange)
	{
		IdChange(characterData.characterId);
	}

	//如果状态机单元和目标都有效,执行状态机单元tick逻辑
	if (currentSmUnit && currentTarget)
	{
		currentSmUnit->SmUnitTick();
		lerpTargetRotation = GetActorRotation();
	}
}

void AGaCharacter::ExitCurrentUnit()
{
	currentSmUnit = nullptr;
}

int AGaCharacter::GetCharacterId()
{
	return characterData.characterId;
}

void AGaCharacter::SetLerpRotation(FRotator targetRotation)
{
	lerpTargetRotation = targetRotation;
}

void AGaCharacter::SetCharacterId(int id)
{
	characterData.characterId = id;
}

void AGaCharacter::StopStateMachine_Implementation()
{
}

void AGaCharacter::ClosePossessAi()
{
	AutoPossessAI = EAutoPossessAI::Disabled;
}

// Called when the game starts or when spawned
void AGaCharacter::BeginPlay()
{
	Super::BeginPlay();

	//if (!bBakeCorrect)
	//{
	//	this->GetCharacterMovement()->MaxWalkSpeed = characterData.gaUnitMoveData.baseMoveSpeed.X;
	//	this->GetCharacterMovement()->MaxAcceleration = characterData.gaUnitMoveData.moveAccelerate.X;
	//}
	//构建mesh
	//构建状态机
	if (bIsBakeCharacter)
	{
		initCharacterStateMachine();
	}

}

// Called every frame
void AGaCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsBakeCharacter)
	{
		StateMachineTickLoop();
	}

	//if (!bBakeCorrect)
	//{
	//	if (targetViewport)
	//	{
	//		FRotator lookRotation = UKismetMathLibrary::FindLookAtRotation(this->GetActorLocation(), targetViewport->GetActorLocation());
	//		lookRotation.Pitch = 0;
	//		lookRotation.Roll = 0;
	//		if (characterData.lerpRotationSpeed > 0)
	//		{
	//			this->SetLerpRotation(lookRotation);
	//		}
	//		else
	//		{
	//			this->SetActorRotation(lookRotation);
	//		}
	//	}
	//}


	//if (characterData.bUseLerpRotation)
	//{
	//	FRotator lsRotator = UKismetMathLibrary::RInterpTo_Constant(GetActorRotation(), lerpTargetRotation, DeltaTime, characterData.lerpRotationSpeed);
	//	SetActorRotation(lsRotator);
	//}
}

void AGaCharacter::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	//if (bBakeCorrect)
	//{
	//	this->GetMesh()->SetRelativeTransform(changeTransform);
	//}
}

void UBaseGaCharacterSmUnit::NativeBootSmUnit()
{
	gaCharacter->currentTarget =  gaCharacter->GetCurrentTarget();
	if (gaCharacter->currentTarget)
	{
		if (gaCharacter->currentTarget->changeNeedFinish)
		{
			gaCharacter->bFinish = false;
		}
		else
		{
			gaCharacter->bFinish = true;
		}
	}
	else
	{
		gaCharacter->bFinish = true;
	}
}

void UBaseGaCharacterSmUnit::NativeExitSmUnit()
{
}

void UBaseGaCharacterSmUnit::NativeSmUnitTick()
{
}

int UBaseGaCharacterSmUnit::NativeBootCheck()
{
	return smUnitPriority;
}

void UBaseGaCharacterSmUnit::BootSmUnit_Implementation()
{
	NativeBootSmUnit();
}

void UBaseGaCharacterSmUnit::ExitSmUnit_Implementation()
{
	NativeExitSmUnit();
}

void UBaseGaCharacterSmUnit::SmUnitTick_Implementation()
{
	NativeSmUnitTick();
}

int UBaseGaCharacterSmUnit::BootCheck_Implementation()
{
	return NativeBootCheck();
}

void UDeadGaCharacterSmUnit::NativeBootSmUnit()
{
	Super::NativeBootSmUnit();
	USkeletalMeshComponent* meshComponent = gaCharacter->GetMesh();

	UAnimationAsset* anim = gaCharacter->characterData.gaUnitDeadData.deadAnimData.deadAnim[0];
	if (anim && !gaCharacter->bDead)
	{
		float playRate = gaCharacter->characterData.gaUnitMoveData.gaUnitMoveAnimData.randomAnimSpeedRange.X;

		float playTiem = gaCharacter->characterData.gaUnitMoveData.gaUnitMoveAnimData.randomAnimSpeedRange.Y;

		UAnimMontage* lsMontage = Cast<UAnimMontage>(anim);
		if (lsMontage)
		{
			//meshComponent->SetAnimation(anim);
			//gaCharacter->PlayAnimMontage(lsMontage, playRate);
			//meshComponent->SetPosition(playTiem);
			if (UAnimInstance* AnimInstance = gaCharacter->GetMesh()->GetAnimInstance())
			{
				const float MontageLength = AnimInstance->Montage_Play(lsMontage, 1, EMontagePlayReturnType::MontageLength, playTiem);
				//bPlayedSuccessfully = (MontageLength > 0.f);
			}

		}
		else
		{
			meshComponent->PlayAnimation(anim, false);
			meshComponent->SetPlayRate(playRate);
			meshComponent->SetPosition(playTiem);
		}

		gaCharacter->GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_WorldDynamic, ECollisionResponse::ECR_Ignore);
		gaCharacter->GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Pawn, ECollisionResponse::ECR_Ignore);
		gaCharacter->GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECollisionResponse::ECR_Ignore);
		gaCharacter->Dead();
		gaCharacter->bDead = true;
		gaCharacter->baseForBuilderUnit->aliveCharacterSet.Remove(gaCharacter);
	}
}

UDeadGaCharacterSmUnit::UDeadGaCharacterSmUnit()
{
	smUnitPriority = 1000;
}

int UDeadGaCharacterSmUnit::NativeBootCheck()
{
	if (gaCharacter->characterData.gaUnitDeadData.hp.X <= 0)
	{
		if (gaCharacter->characterData.gaUnitDeadData.deadAnimData.deadAnim.Num() > 0)
		{
			return smUnitPriority;
		}
		return 0;
	}
	else
	{
		return 0;
	}
}

UAttackGaCharacterSmUnit::UAttackGaCharacterSmUnit()
{
	smUnitPriority = 900;
}

UMoveGaCharacterSmUnit::UMoveGaCharacterSmUnit()
{
	smUnitPriority = 800;
}

void UMoveGaCharacterSmUnit::NativeBootSmUnit()
{
	Super::NativeBootSmUnit();

	if (gaCharacter->characterData.gaUnitMoveData.gaUnitMoveAnimData.moveAnim.Num() > 0)
	{
		USkeletalMeshComponent* meshComponent = gaCharacter->GetMesh();

		UAnimationAsset* anim = gaCharacter->characterData.gaUnitMoveData.gaUnitMoveAnimData.moveAnim[0];
		if (!anim)
			return;

		if (gaCharacter->characterData.gaUnitMoveData.gaUnitMoveAnimData.bUseRandomAnimSpeed)
		{
			float playRate = gaCharacter->characterData.gaUnitMoveData.gaUnitMoveAnimData.randomAnimSpeedRange.X;

			float playTiem = gaCharacter->characterData.gaUnitMoveData.gaUnitMoveAnimData.randomAnimSpeedRange.Y;

			UAnimMontage* lsMontage = Cast<UAnimMontage>(anim);
			if (lsMontage->IsValidLowLevel())
			{
				//meshComponent->SetAnimation(anim);
				//gaCharacter->PlayAnimMontage(lsMontage, playRate);
				//meshComponent->SetPosition(playTiem);
				UAnimInstance* AnimInstance = gaCharacter->GetMesh()->GetAnimInstance();
				if (AnimInstance->IsValidLowLevel())
				{
					const float MontageLength = AnimInstance->Montage_Play(lsMontage, 1, EMontagePlayReturnType::MontageLength, playTiem);
					//bPlayedSuccessfully = (MontageLength > 0.f);
				}

			}
			else
			{
				meshComponent->PlayAnimation(anim, true);
				meshComponent->SetPlayRate(playRate);
				meshComponent->SetPosition(playTiem);
			}

		}
	}
	float moveSpeed = gaCharacter->characterData.gaUnitMoveData.baseMoveSpeed.X;
	float moveAccelerate = gaCharacter->characterData.gaUnitMoveData.moveAccelerate.X;

	gaCharacter->GetCharacterMovement()->MaxWalkSpeed = moveSpeed;
	gaCharacter->GetCharacterMovement()->MaxAcceleration = moveAccelerate;

	if (gaCharacter->characterData.gaUnitMoveData.bUseAiMove)
	{
		if (!gaCharacter->characterData.gaUnitMoveData.bUseNav)
		{
			AiMove();
		}
		else
		{
			AiMoveWithNavMesh();
		}
	}
	bEnable = true;
}


int UMoveGaCharacterSmUnit::NativeBootCheck()
{
	AGaTargetPointActor* target = gaCharacter->GetCurrentTarget();

	if (!target)
		return DGaSmProperty_NoProperty;

	if (!target->bCanBoot)
		return DGaSmProperty_NoProperty;

	//如果已经启动了状态单元,直接返回状态优先级
	if (bEnable)
	{
		return smUnitPriority;
	}

	if (target)
	{
		FVector targetLoction = target->GetTargetFormationWorldLocation(gaCharacter->baseForBuilderUnit, gaCharacter->characterData.characterId);
		FVector2D ls2DLoc = FVector2D(targetLoction.X, targetLoction.Y);

		if (targetLoction != FVector(0, 0, 0))
		{
			FVector charLocation = gaCharacter->GetMesh()->GetComponentLocation();
			FVector2D char2DLocation = FVector2D(charLocation.X, charLocation.Y);

			//float distance = (targetLoction - charLocation).Size();
			float distance = (ls2DLoc - char2DLocation).Size();
			if (distance < target->minArriveDistance)
			{
				return DGaSmProperty_NoProperty;
			}
			else
			{
				return smUnitPriority;
			}
		}
		else
		{
			return DGaSmProperty_NoProperty;
		}
		return smUnitPriority;
	}
	return DGaSmProperty_NoProperty;
}

void UMoveGaCharacterSmUnit::NativeSmUnitTick()
{
	AGaTargetPointActor* target = gaCharacter->GetCurrentTarget();
	if (target)
	{

		//检查是否已经抵达了目标
		FVector targetLoction = target->GetTargetFormationWorldLocation(gaCharacter->baseForBuilderUnit, gaCharacter->characterData.characterId);
		FVector charLocation = gaCharacter->GetMesh()->GetComponentLocation();
		targetLoction.Z = 0;
		charLocation.Z = 0;

		float distance = (targetLoction - charLocation).Size();
		if (distance < target->minArriveDistance)
		{
			if (target->bCanMovePause)
				return;
			//退出状态机
			gaCharacter->bFinish = true;
			ExitSmUnit();
			return;
		}
		else if (!gaCharacter->characterData.gaUnitMoveData.bUseAiMove)
		{
			TickMove();
		}
	}
}

void UMoveGaCharacterSmUnit::NativeExitSmUnit()
{
	bEnable = false;
	gaCharacter->GetCharacterMovement()->MaxWalkSpeed = 0;
	gaCharacter->GetCharacterMovement()->MaxAcceleration = 0;

	if (gaCharacter->characterData.gaUnitMoveData.bUseAiMove)
	{
		AController* lsCon = gaCharacter->GetController();
		if (lsCon)
			lsCon->StopMovement();
	}
	gaCharacter->ExitCurrentUnit();
}

void UMoveGaCharacterSmUnit::TickMove()
{
	AGaTargetPointActor* target = gaCharacter->GetCurrentTarget();
	FVector targetLoction = target->GetTargetFormationWorldLocation(gaCharacter->baseForBuilderUnit, gaCharacter->characterData.characterId);
	if (targetLoction != FVector(0, 0, 0))
	{
		gaCharacter->AddMovementInput(targetLoction - gaCharacter->GetActorLocation(), 1);
	}
}

void UMoveGaCharacterSmUnit::AiMove()
{
	AGaTargetPointActor* target = gaCharacter->GetCurrentTarget();
	if (!target)
		return;
	FVector targetLoction = target->GetTargetFormationWorldLocation(gaCharacter->baseForBuilderUnit, gaCharacter->characterData.characterId);
	if (targetLoction != FVector(0, 0, 0))
	{
		AController* lsCon = gaCharacter->GetController();
		if (lsCon)
		{
			AAIController* lsAiCon = Cast<AAIController>(lsCon);
			if (lsAiCon)
			{
				lsAiCon->MoveToLocation(targetLoction,
					-1,
					false,
					false,
					false,
					false,
					0,
					true);
			}
		}
	}
}

void UMoveGaCharacterSmUnit::AiMoveWithNavMesh()
{
	AGaTargetPointActor* target = gaCharacter->GetCurrentTarget();
	FVector targetLoction = target->GetTargetFormationWorldLocation(gaCharacter->baseForBuilderUnit, gaCharacter->characterData.characterId);
	if (targetLoction != FVector(0, 0, 0))
	{
		AController* lsCon = gaCharacter->GetController();
		if (lsCon)
		{
			AAIController* lsAiCon = Cast<AAIController>(lsCon);
			if (lsAiCon)
			{
				lsAiCon->MoveToLocation(targetLoction,
					-1,
					false,
					true,
					false,
					false,
					0,
					true);
			}
		}
	}
}

UIdleGaCharacterSmUnit::UIdleGaCharacterSmUnit()
{
	smUnitPriority = 1;
}

void UIdleGaCharacterSmUnit::NativeBootSmUnit()
{
	Super::NativeBootSmUnit();

	if (gaCharacter->characterData.gaUnitInitData.gaUnitInitAnimData.initAnim.Num() > 0)
	{
		USkeletalMeshComponent* meshComponent = gaCharacter->GetMesh();

		UAnimationAsset* anim = gaCharacter->characterData.gaUnitInitData.gaUnitInitAnimData.initAnim[0];
		if (!anim)
			return;

		if (gaCharacter->characterData.gaUnitInitData.gaUnitInitAnimData.bUseRandomAnimSpeed)
		{
			float playRate = gaCharacter->characterData.gaUnitInitData.gaUnitInitAnimData.randomAnimSpeedRange.X;

			float playTiem = gaCharacter->characterData.gaUnitInitData.gaUnitInitAnimData.randomAnimSpeedRange.Y;
			UAnimMontage* lsMontage = Cast<UAnimMontage>(anim);
			if (lsMontage)
			{
				//meshComponent->SetAnimation(anim);
				gaCharacter->PlayAnimMontage(lsMontage, playRate);
				meshComponent->SetPosition(playTiem);
			}
			else
			{
				meshComponent->PlayAnimation(anim, true);
				meshComponent->SetPlayRate(playRate);
				meshComponent->SetPosition(playTiem);
			}
		}
		else
		{
			float playRate = gaCharacter->characterData.gaUnitInitData.gaUnitInitAnimData.randomAnimSpeedRange.X;
			float playTiem = gaCharacter->characterData.gaUnitInitData.gaUnitInitAnimData.randomAnimSpeedRange.Y;
			UAnimMontage* lsMontage = Cast<UAnimMontage>(anim);
			if (lsMontage)
			{
				//meshComponent->SetAnimation(anim);
				gaCharacter->PlayAnimMontage(lsMontage, playRate);
				meshComponent->SetPosition(playTiem);
			}
			else
			{
				meshComponent->PlayAnimation(anim, true);
				meshComponent->SetPlayRate(playRate);
				meshComponent->SetPosition(playTiem);
			}
		}
	}
	bEnable = true;
}

void UIdleGaCharacterSmUnit::NativeExitSmUnit()
{

}

int UIdleGaCharacterSmUnit::NativeBootCheck()
{
	return 1;
}

void UAttackGaCharacterSmUnit::NativeBootSmUnit()
{
	Super::NativeBootSmUnit();

	if (gaCharacter->characterData.gaUnitAttackData.gaUnitAttackAnimData.AttackAnim.Num() > 0)
	{



		USkeletalMeshComponent* meshComponent = gaCharacter->GetMesh();

		UAnimationAsset* anim = gaCharacter->characterData.gaUnitAttackData.gaUnitAttackAnimData.AttackAnim[0];
		if (!anim)
			return;

		if (gaCharacter->characterData.gaUnitAttackData.gaUnitAttackAnimData.bUseRandomAnimSpeed)
		{
			float playRate = gaCharacter->characterData.gaUnitAttackData.gaUnitAttackAnimData.randomAnimSpeedRange.X;

			float playTiem = gaCharacter->characterData.gaUnitAttackData.gaUnitAttackAnimData.randomAnimSpeedRange.Y;

			UAnimMontage* lsMontage = Cast<UAnimMontage>(anim);
			if (lsMontage)
			{
				//meshComponent->SetAnimation(anim);
				gaCharacter->PlayAnimMontage(lsMontage, playRate);
				meshComponent->SetPosition(playTiem);
			}
			else
			{
				meshComponent->PlayAnimation(anim, true);
				meshComponent->SetPlayRate(playRate);
				meshComponent->SetPosition(playTiem);
			}

			if (gaCharacter->currentTarget)
			{
				FRotator lookRotation = UKismetMathLibrary::FindLookAtRotation(gaCharacter->GetActorLocation(), gaCharacter->currentTarget->GetActorLocation());
				lookRotation.Pitch = 0;
				lookRotation.Roll = 0;
				if (gaCharacter->characterData.lerpRotationSpeed > 0)
				{
					gaCharacter->SetLerpRotation(lookRotation);
				}
				else
				{
					gaCharacter->SetActorRotation(lookRotation);
				}
			}
			else
			{
				if (gaCharacter->characterData.lerpRotationSpeed > 0)
				{
					gaCharacter->SetLerpRotation(gaCharacter->characterData.noTargetLooat);
				}
				else
				{
					gaCharacter->SetActorRotation(gaCharacter->characterData.noTargetLooat);
				}
			}


		}
	}
	bEnable = true;
}

int UAttackGaCharacterSmUnit::NativeBootCheck()
{
	AGaTargetPointActor* target = gaCharacter->GetCurrentTarget();

	if (!target)
		return DGaSmProperty_NoProperty;

	if (!target->bCanBoot)
		return DGaSmProperty_NoProperty;

	if (!gaCharacter->CanAttackEnemy())
		return DGaSmProperty_NoProperty;

	//如果已经启动了状态单元,直接返回状态优先级
	if (bEnable)
	{
		return smUnitPriority;
	}
	if (target->bCanAttack)
		return smUnitPriority;

	return DGaSmProperty_NoProperty;
}


PRAGMA_ENABLE_OPTIMIZATION
