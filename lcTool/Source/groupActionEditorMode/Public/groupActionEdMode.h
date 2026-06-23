// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EdMode.h"
#include "..\Public\groupActionEdMode.h"
#include "..\Public\GaGroupUnit.h"
#include "..\Public\groupActionEdModeToolkit.h"
#include "groupActionPaintInstance.h"

enum class EGaPaintEditingState : uint8
{
	Unknown,
	Enabled,
	PIEWorld,
	SIEWorld,
};

enum class EGaPaintEditingMode : uint8
{
	paint,
	erase,
};


enum class EGaSelectEditingMode : uint8
{
	select,
	lasso,
};

#define NUM_INSTANCE_BUCKETS 10

/** Used to define a vector along which we'd like to spawn an instance. */
struct FDesiredGaInstance
{
	FDesiredGaInstance()
		: StartTrace(ForceInit)
		, EndTrace(ForceInit)
		, Rotation(ForceInit)
		, TraceRadius(0.f)
		, Age(0.f)
		, PlacementMode(EGaPaintEditingMode::paint)
	{

	}

	FDesiredGaInstance(const FVector& InStartTrace, const FVector& InEndTrace, const float InTraceRadius = 0.f)
		: StartTrace(InStartTrace)
		, EndTrace(InEndTrace)
		, Rotation(ForceInit)
		, TraceRadius(InTraceRadius)
		, Age(0.f)
		, PlacementMode(EGaPaintEditingMode::paint)
	{
	}

	FGuid ProceduralGuid;
	FVector StartTrace;
	FVector EndTrace;
	FQuat Rotation;
	float TraceRadius;
	float Age;
	const struct FBodyInstance* ProceduralVolumeBodyInstance;
	EGaPaintEditingMode PlacementMode;
};

struct FPotentialGaInstance
{
	FVector HitLocation;
	FVector HitNormal;
	UPrimitiveComponent* HitComponent;
	float HitWeight;
	FDesiredGaInstance DesiredInstance;

	FPotentialGaInstance(FVector InHitLocation, FVector InHitNormal, UPrimitiveComponent* InHitComponent, float InHitWeight, const FDesiredGaInstance& InDesiredInstance = FDesiredGaInstance());
	bool PlaceInstance(const UWorld* InWorld, const UFoliageType* Settings, bool bSkipCollision = false);
};


class FgroupActionEdMode : public FEdMode
{
public:
	const static FEditorModeID EM_groupActionEdModeId;
public:

	/************************************************************************/
	/* 群組绘制功能相关                                                                     */
	/************************************************************************/

	//当前绘制模式
	EGaPaintEditingMode paintEditingMode = EGaPaintEditingMode::paint;

	//当前选择模式
	EGaSelectEditingMode selectEditingMode = EGaSelectEditingMode::select;

	bool bCtrlDown = false;

	bool bAltDown = false;

	//当前选择数组
	TArray<int>selectArr;

	bool bToolActive = false;
	bool bBrushTraceValid;

	//阵型对象是否改变
	bool bFormationChange = false;
	//是否可以控制
	bool bCanControl = false;

	//是否有移除操作
	bool bHasRemoveOperation = false;
	//是否需要擦除更新
	bool bNeedRemoveUpdate = false;

	//当前绘制阵型引用
	ABaseFormationBuilder* currentFormation;

	//当前群组阵型绘制哈希实例
	FGroupActionPaintHash formationHashInstance;

	FVector BrushLocation;
	FVector BrushNormal;
	FVector BrushTraceDirection;

	UGaSettingObject* gaSetting;

	//选择实例
	void SelectInstances(UWorld* InWorld, bool bSelect);

	//绘制球mesh组件
	UStaticMeshComponent* SphereBrushComponent;
	//刷子动态材质
	UMaterialInstanceDynamic* BrushMID;
	//刷子高亮颜色
	FColor BrushDefaultHighlightColor;
	FColor BrushCurrentHighlightColor;

	//获取绘制刷子半径
	float GetPaintingBrushRadius() const;

	//初始化阵型哈希实例
	void RefreshFormationHash();

	//应用笔刷
	void ApplyBrush(FEditorViewportClient* ViewportClient);

	//计算潜在的实例
	void CalculatePotentialInstances(const UWorld* InWorld, const TArray<FDesiredGaInstance>& DesiredInstances, TArray<FPotentialGaInstance> OutPotentialInstances[NUM_INSTANCE_BUCKETS]);

	//群组追踪
	bool GroupActionTrace(const UWorld* InWorld, FHitResult& OutHit, const FDesiredGaInstance& DesiredInstance, FName InTraceTag, bool InbReturnFaceIndex);

	//生成Ga
	void SpawnGaInstance(UWorld* InWorld, const TArray<FPotentialGaInstance>& PlacedInstances);

	void GroupActionBrushTrace(FEditorViewportClient* ViewportClient, const FVector& InRayOrigin, const FVector& InRayDirection);

	bool GetSelectionLocation(UWorld* InWorld, FVector& OutLocation) const;

	//更新工具位置
	void UpdateWidgetLocationToInstanceSelection();

	//添加实例
	void AddInstancesForBrush(UWorld* InWorld, const FSphere& BrushSphere, int32 DesiredInstanceCount);

	//添加单个实例
	void AddSingleInstancesForBrush(UWorld* InWorld, const FSphere& BrushSphere);

	//移除实例
	void RemoveInstancesForBrush(UWorld* InWorld, const FSphere& BrushSphere, int32 DesiredInstanceCount);


	//获取刷子内随机向量
	void GetRandomVectorInBrush(FVector& OutStart, FVector& OutEnd);

	//单个随机向量(无用)
	void GetSingleRandomVectorInBrush(FVector& OutStart, FVector& OutEnd);

	//获取矩形笔刷内向量
	void GetVectorInSquareBrush(int id, FVector& OutStart, FVector& OutEnd);

	bool CheckForOverlappingSphere(const FSphere& Sphere);

	//获取阵型求内实例
	void GetInstancesInsideSphere(const FSphere& Sphere, TArray<int32>& OutInstances);

	//开启绘制追踪
	void StartFoliageBrushTrace(FEditorViewportClient* ViewportClient);

	//结束绘制追踪
	void EndFoliageBrushTrace();

	bool StartTracking(FEditorViewportClient* InViewportClient, FViewport* InViewport);

	bool EndTracking(FEditorViewportClient* InViewportClient, FViewport* InViewport);
	/************************************************************************/
	/* 面板界面                                                                     */
	/************************************************************************/
	//总面板界面引用
	//TSharedPtr<SGroupActionMode>groupActionModeWidget;

	FgroupActionEdMode();
	virtual ~FgroupActionEdMode();
	bool HandleClick(FEditorViewportClient* InViewportClient, HHitProxy* HitProxy, const FViewportClick& Click) override;
	// FEdMode interface
	virtual void Enter() override;
	virtual void Exit() override;

	virtual void Tick(FEditorViewportClient* ViewportClient, float DeltaTime) override;
	virtual bool InputKey(FEditorViewportClient* ViewportClient, FViewport* Viewport, FKey Key, EInputEvent Event) override;
	virtual bool MouseMove(FEditorViewportClient* ViewportClient, FViewport* Viewport, int32 MouseX, int32 MouseY) override;
	virtual bool CapturedMouseMove(FEditorViewportClient* InViewportClient, FViewport* InViewport, int32 InMouseX, int32 InMouseY) override;
	virtual bool InputDelta(FEditorViewportClient* InViewportClient, FViewport* InViewport, FVector& InDrag, FRotator& InRot, FVector& InScale) override;
	virtual void AddReferencedObjects(FReferenceCollector& Collector) override;

	virtual FVector GetWidgetLocation() const override;
	virtual bool AllowWidgetMove() override;
	virtual bool ShouldDrawWidget() const override;
	virtual bool UsesTransformWidget() const override;
	virtual EAxisList::Type GetWidgetAxisToDraw(FWidget::EWidgetMode InWidgetMode) const override;



	bool DisallowMouseDeltaTracking() const override;

	//virtual void Tick(FEditorViewportClient* ViewportClient, float DeltaTime) override;
	//virtual void Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI) override;
	//virtual void ActorSelectionChangeNotify() override;
	bool UsesToolkits() const override;
	void OnLevelSelectionChanged(UObject* Obj);

	//刷新当前选择
	void RefreshSelection();
	// End of FEdMode interface



	EGaPaintEditingState GetEditingState() const;

	bool IsEditingEnabled() const;
};
