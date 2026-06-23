// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Engine/Classes/Engine/Light.h"
#include "Engine/Classes/Components/SpotLightComponent.h"
#include "Engine/Classes/Components/ArrowComponent.h"
#include "Engine/Classes/Engine/SpotLight.h"
#include "BuildLightActor.generated.h"

//球状灯阵数据
USTRUCT(BlueprintType)
struct FSphereLightData
{
	GENERATED_USTRUCT_BODY()
		//灯光层数
		//是否是半球灯阵
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "sphereLightData")
		bool bHalfSphere = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "sphereLightData")
		int layerNum = 3;

	//每层灯数量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "sphereLightData")
		int lightNumberOneLayer = 5;



	//是否开启阴影
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "sphereLightData")
		bool bShadow = false;
};

USTRUCT(BlueprintType)
struct FSphereLightLayerUnit
{
	GENERATED_USTRUCT_BODY()
		TArray<USpotLightComponent*>spoitLightComponentArr;
};

UCLASS(BlueprintType, nonTransient)
class BUILDLIGHT_API ABuildSpotLight : public AActor
{
	GENERATED_UCLASS_BODY()
public:
	//球灯数据
	UPROPERTY()
		FSphereLightData sphereLightData;

#if WITH_EDITORONLY_DATA
	// Reference to editor arrow component visualization 
private:
	UPROPERTY()
		class UArrowComponent* ArrowComponent;
public:
#endif
	//球半径
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ABuildSpotLight")
		float sphereRadius = 300;
	UPROPERTY()
		USceneComponent* sceneComponent;

	//聚光灯数组
	UPROPERTY(NonTransactional)
		TMap<int, FSphereLightLayerUnit >spotLightMap;

	void AddSpoitLightToMap(int layerNum, USpotLightComponent* spotLightComponent);

	USpotLightComponent* GetSpotLightFormMap(int layerNum, int numInLayer);

	//~ Begin UObject Interface
	virtual void PostLoad() override;
	//#if WITH_EDITOR
	//	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	//#endif
		//~ End UObject Interface

public:
	//#if WITH_EDITORONLY_DATA
	//	/** Returns ArrowComponent subobject **/
	//	class UArrowComponent* GetArrowComponent() const { return ArrowComponent; }
	//#endif

		//刷新构建球状灯
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "BuildSpotLight")
		void RefreshBuildSphereLight();

	//刷新球状灯半径
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "BuildSpotLight")
		void RefreshSphereLightRadius();

	//刷新球状灯阴影
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "BuildSpotLight")
		void RefreshSphereLightShadow(TArray<int>selectLightArr, bool bShowShadow);

	//设置当前球状灯数据
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "BuildSpotLight")
		void SetSphereLightData(FSphereLightData data);

	//获取当前球状灯数据
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "BuildSpotLight")
		FSphereLightData GetSphereLightData();

	//选择指定层组件
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "BuildSpotLight")
		void SelectSpecialLayerComponent(int layerNum);

	//选择指定层数组组件
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "BuildSpotLight")
		void SelectSpeicalLayerArrComponent(TArray<int>layerArr);

	//选择所有组件
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "BuildSpotLight")
		void SelectAllLayerComponent();

	//隐藏所有灯
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "BuildSpotLight")
		void HideAllLight();

	virtual void OnConstruction(const FTransform& Transform);
};
