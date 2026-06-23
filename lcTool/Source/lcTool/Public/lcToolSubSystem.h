// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"
#include "lcBpBridge.h"
#include "ISequencer.h"
#include "Hal/Runnable.h"
#include "Hal/RunnableThread.h"
#include "HAL/PlatformFilemanager.h"
#include "Runtime/Engine/Public/TimerManager.h"
#include "Runtime/Core/Public/Misc/FileHelper.h"
#include "UnrealEd/Public/AssetImportTask.h"
#include "UnrealEd/Public/Toolkits/AssetEditorManager.h"
#include "UnrealEd/Classes/Factories/FbxImportUI.h"
#include "UnrealEd/Classes/Factories/FbxSkeletalMeshImportData.h"

#include "AssetTools/Public/IAssetTools.h"
#include "AssetTools/Public/AssetToolsModule.h"
#include "LevelSequence/Public/LevelSequence.h"
//#include "ILevelSequenceEditorToolkit.h"
#include "../../../Engine/Plugins/MovieScene/LevelSequenceEditor/Source/LevelSequenceEditor/Public/ILevelSequenceEditorToolkit.h"
#include "Editor/Sequencer/Private/SSequencer.h"
#include "../../MovieScene/MovieRenderPipeline/Source/MovieRenderPipelineEditor/Private/MovieRenderPipelineEditorModule.h"
#include "../../MovieScene/MovieRenderPipeline/Source/MovieRenderPipelineEditor/Public/MovieRenderPipelineSettings.h"
#include "../../MovieScene/MovieRenderPipeline/Source/MovieRenderPipelineEditor/Public/MoviePipelineQueueSubsystem.h"
#include "../../MovieScene/MovieRenderPipeline/Source/MovieRenderPipelineEditor/Private/Widgets/SMoviePipelineQueueEditor.h"
#include "../../MovieScene/MovieRenderPipeline/Source/MovieRenderPipelineCore/Public/MoviePipelineQueue.h"
#include "../../../Engine/Source/Runtime/CoreUObject/Public/UObject/UObjectGlobals.h"
#include "../../../Engine/Source/Developer/ToolMenus/Public/ToolMenus.h"
#include "../../../Engine/Source/Developer/ToolMenus/Public/ToolMenuDelegates.h"
#include "../../../Engine/Source/Editor/ContentBrowserData/Public/ContentBrowserDataMenuContexts.h"
#include "../../../Engine/Source/Editor/ContentBrowser/Public/ContentBrowserMenuContexts.h"
#include "../../../Engine/Source/Editor/ContentBrowser/Public/ContentBrowserModule.h"
#include "../../../Engine/Plugins/Editor/ContentBrowser/ContentBrowserAssetDataSource/Source/ContentBrowserAssetDataSource/Public/ContentBrowserAssetDataSource.h"
#include "../../../Engine/Plugins/Editor/ContentBrowser/ContentBrowserAssetDataSource/Source/ContentBrowserAssetDataSource/Public/NewAssetContextMenu.h"
#include "../../../Engine/Plugins/Editor/ContentBrowser/ContentBrowserAssetDataSource/Source/ContentBrowserAssetDataSource/Public/ContentBrowserAssetDataSourceModule.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"

#include "Editor/SequenceRecorder/Public/ActorRecording.h"

#include "Editor/UnrealEd/Public/Toolkits/ToolkitManager.h"

#include "Editor/UnrealEd/Classes/MaterialGraph/MaterialGraphNode.h"
#include "Editor/MaterialEditor/Private/MaterialEditor.h"
#include "Editor/MaterialEditor/Public/MaterialEditorUtilities.h"

#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Core/Public/Internationalization/Culture.h"

#include "windows/AllowWindowsPlatformTypes.h "
#include <windows.h>
#include <TlHelp32.h>
#include <psapi.h>
#include "windows/HideWindowsPlatformTypes.h "

#include "Kismet/GameplayStatics.h"
#include "Landscape/Classes/Landscape.h"
#include "Landscape/Classes/LandscapeInfo.h"

#include "lcImportFileSystem.h"
#include "UnrealEd/Public/FbxImporter.h"

#include "lcToolSubSystem.generated.h"

class UContentBrowserAssetDataSource;


//快捷面板旋转类型
UENUM(BlueprintType)
enum class ELcTransformType :uint8
{
	ELocation UMETA(DisplayName = "Location"),
	ERotation UMETA(DisplayName = "Rotation"),
	EScale UMETA(DisplayName = "Scale")
};

//快捷面板向量类型
UENUM(BlueprintType)
enum class ELcVectorType :uint8
{
	EAll UMETA(DisplayName = "all"),
	EX UMETA(DisplayName = "X"),
	EY UMETA(DisplayName = "Y"),
	EZ UMETA(DisplayName = "Z")
};

//关卡指令类型
UENUM(BlueprintType)
enum class ELevelCommandType :uint8
{
	EAllShadow UMETA(DisplayName = "allShadow"),

	EToonShadow UMETA(DisplayName = "toon best shadow"),

	ELightVog UMETA(DisplayName = "light vog"),

	EGroomDebug UMETA(DisplayName = "groom debug"),
};



class FLcReadFbxInfo :public FRunnable
{
public:

	FString basePath = "D:/uetemp";

	FString outputFilePath = "D:/uetemp/mayaue.txt";

	FString mayaLockFilePath = "D:/uetemp/mayaExporting.txt";

	FString ueLockFilePath = "D:/uetemp/ueImporting.txt";

	FLcReadFbxInfo() {};
	~FLcReadFbxInfo() {};

	void setBridgePtr(UlcBpBridge* bridgePtr);

	uint32 Run();

	//检查是否可以导入fbx
	bool canImportFbx();

	//获取输出列表文件里的文件内容
	TArray<FString> getOutputTempAllFile();

	//建立发送内容到主线程队列
	void makeAndSendQueue(TArray<FString>inputFileList);

	//桥接指针
	UlcBpBridge* bpBridgetPtr;
};

/*FBX多线程导入*/
class FLcMultiThread : public FRunnable
{
public:
	//真正的线程实例，可以通过该实例对线程进行挂起、激活、关闭等操作
	FRunnableThread* ThreadIns;

	//线程名称，用于创建线程实例时为线程实例命名
	FString ThreadName;

	//FRunnable实例，可运行的对象，复写了Init，Run，Stop，Exit接口
	FLcMultiThread* RunnableIns;

	//FEvent指针，可以通过该指针进行线程挂起、激活
	FEvent* ThreadEvent;

	//用于控制线程挂起/激活状态
	bool bPauseThread = false;

	//用于控制线程结束
	bool bRun = true;

	bool IsComplete;

	TArray<FString> filePath;

	FString importPath;

	class UlcImportFileSystem* lcThread = nullptr;

	int NumId;



public:
	//构造
	FLcMultiThread(const FString& fName, UlcImportFileSystem* thread, FName name, UObject* parent);

	//析构
	~FLcMultiThread();

	//接口：初始化
	virtual bool Init() override;

	//接口：运行
	virtual uint32 Run() override;

	//接口：停止运行
	virtual void Stop() override;

	//接口：退出线程
	virtual void Exit() override;

	//挂起线程，使用FEvent指针的方式
	void PauseThread();

	//激活线程，使用FEvent指针的方式
	void WakeUpThread();

	//确保线程执行完毕
	void EnsureCompletion();

	//静态调用：实例化FTestThread对象
	static FLcMultiThread* JoyInit(const FString& ThreadName, UlcImportFileSystem* tempThread);

	/*静态调用：线程挂起or唤醒
	 * ThreadName ：想要挂起or唤醒的线程名
	 * bSuspend   ： 执行挂起or唤醒操作
	 * bUseSuspedn： 是否使用Suspend来挂起or唤醒线程 
	 */

	static void Suspend(const FString& ThreadName, bool bSuspend, bool bUseSuspend = true);

	//静态调用：判断一个线程是否结束
	static bool IsThreadFinished(const FString& ThreadName);

	//静态调用：结束一个线程运行
	static void ShutDown(const FString& ThreadName);

//	//静态调用：获取ThreadName:ThreadIns Map容器，该静态容器用于存储创建的多个线程实例
	static TMap<FString, FLcMultiThread*> TMapGetThreadMap();

	bool multiThreadImportFBX();

	UObject* RecursiveImportNode(UnFbx::FFbxImporter* FbxImporter, void* VoidNode, UObject* InParent, FName InName, EObjectFlags Flags, FScopedSlowTask& SlowTask, TArray<UObject*>& OutNewAssets);

	FText GetImportTaskText(const FText& TaskText) const;

	UObject* LcImportNode(UnFbx::FFbxImporter* FbxImporter, TArray<void*> VoidNodes, UObject* InParent, FName InName, EObjectFlags Flags, struct FScopedSlowTask& SlowTask, UObject* InMesh = NULL, int LODIndex = 0);

	int32 lcGetImportType(const FString& InFilename);

	bool lcDetectImportType(int32 ImportType);

	void ConvertScene();


public:
	UnFbx::FFbxImporter* lcFbxImporter = nullptr;
	
	UPROPERTY()
		class UFbxImportUI* ImportUI;

	bool bOperationCanceled;

	TArray<UObject*> AdditionalImportedObjects;

	TQueue<UnFbx::FFbxImporter::FImportSkeletalMeshArgs> MeshArg;

	FString lcFilename;

	FName lcInName;

	UObject* lcInParent = nullptr;

	FbxAxisSystem FileAxisSystem;
	FbxSystemUnit FileUnitSystem;

	UnFbx::FBXImportOptions* lcImportOptions;
//
	static TQueue<FLcMultiThread*, EQueueMode::Mpsc> lcQueue;

	FName MountRoot;

	TArray<FString> RootContentPaths;
private:
	//线程容器
	
	static TMap<FString, FLcMultiThread*> ThreadMap;
//
};
/*FBX多线程导入*/

struct FHoudiniFrameData
{
	TArray<FVector>positionData;
	TArray<FVector4>quRotationData;
};

struct FHoudiniExportData
{
	int boneNumber;
	int frameNumber;
	int frameRate;
	TArray<FHoudiniFrameData>frameData;
};


/**
 *
 */
UCLASS()
class LCTOOL_API UlcToolSubSystem : public UEditorSubsystem
{
	GENERATED_BODY()
		virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:

	
	
	bool bOperationCanceled;

	FText GetImportTaskText(const FText& TaskText) const;

	UObject* RecursiveImportNode(UnFbx::FFbxImporter* FbxImporter, void* VoidNode, UObject* InParent, FName InName, EObjectFlags Flags, FScopedSlowTask& SlowTask, TArray<UObject*>& OutNewAssets);
	
	TArray<UObject*> AdditionalImportedObjects;
	
	UObject* ImportANode(UnFbx::FFbxImporter* FbxImporter, TArray<void*> VoidNodes, UObject* InParent, FName InName, EObjectFlags Flags, struct FScopedSlowTask& SlowTask, UObject* InMesh = NULL, int LODIndex = 0);
	
	/*FBX多线程导入*/
	UPROPERTY()
		class UFbxImportUI* ImportUI;

	static UlcImportFileSystem* getImportSysPtr() ;
	
	static	UlcImportFileSystem* importFileSystemPtr;

	TSharedPtr<FLcMultiThread> asyncTask;

	void lcImportFile();

	UFUNCTION(BlueprintPure, Category = "lcToolSubSystem")
		UlcImportFileSystem* GetImportFileSystemPtr();
	/*FBX多线程导入*/
	
	//桥接指针
	UPROPERTY()
		UlcBpBridge* bpBridgetPtr;

	void AssetPathChange(const FString& path);

	/*

	Movie Render Queue 相关函数

	*/

public:
	TArray<UMoviePipelineExecutorJob*> PendingJobsToSelect;
	UMoviePipelineQueue* ActiveQueue;
	//导入视频序列文件
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		bool LcImportMovieSequence(int start, int end);

	//删除已导入的视频序列文件
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		bool LcDeleteMovieSequence(int start, int end);

	//通过资源 创建seq
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void LcOnCreateJobFromAsset(const FString& seqPath, const FString& levelPath);

	int testCount;
	int testTarget;
	/**
	 * 读取fbx相关
	 */
	



	 //读fbx信息线程指针
	TSharedPtr<FLcReadFbxInfo> rfiPtr;

	//fbx读取定时器句柄
	FTimerHandle timerHandle;

	//获取文件夹内文件内容数组
	TArray<FString> GetImportFileArray();

	//读fbx信息定时器函数
	void ReadFbxInfoTimerFun();
	//导入绑定fbx
	void importRigFbx(FString rigFullName);
	//导入blendshape 变形目标
	void importMotFbx(FString rigFullName);

	//导入动画(旧的,废弃不使用)
	void OldimportAnimFbxArr(TArray<FString>animArray);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		//导入骨骼fbx文件
		bool LcImportRigFbx(FString fbxPath, FString importPath, FString& rigName);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		//导入骨骼fbx文件
		bool LcImportRigFbxArray(TArray<FString>fbxPath, FString importPath, FString& rigName);

	//导入指定骨骼名称的动画文件
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		bool LcImportAnimFbx(FString fbxPath, FString rigName, FString importPath, FString& retAnimName);

	//导入指定骨骼的相机动画文件
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		bool LcImportCameraAnimFbx(FString fbxPath, FString importPath, FString& retAnimName);

	//打开获取引擎路径对话框
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		FString LcOpenGetEngineDirDialog(FString title);

	//打开获取系统文件路径对话框
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		FString LcOpenGetSystemFilePathDialog(FString title, FString inputPath);

	//打开获取系统目录路径对话框
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		FString LcOpenGetSystemDirPathDialog(FString title, FString inputPath);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		TArray<FString> LcOpenGetMultiSystemDirPathDialog(FString title, FString inputPath);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		FString LcExportTextureAsset(FString assetStr);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void ExportCurrentLevelFoliageInfo(FString exportPath);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void ImportSpecialFileFoliageInfo(FString importPath);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void createMultiThread(TArray<FString> filepath, FString importedFilePath);

	//处理fbx导入文件信息
	void DisposeFbxImportInfo(TArray<FString>fullNameArray);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		//清理导出目录所有文件
		void ClearExportDir();

	

	//获取文件名前缀 - yzt_C_Ani ->  yzt_C
	FString GetFileNamePre(FString inName);
	/************************************************************************/
	/* 文件目录操作                                                                     */
	/************************************************************************/
	//获取指定路径文件列表
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void LcGetSpecialPathFileList(FString path, TArray<FString>& retArr, TArray<bool>& bDirArr);



	/************************************************************************/
	/* sequencer相关
	/************************************************************************/

	//sq接口引用指针
	TWeakPtr<ISequencer>WeakSequencer;

	//纯sequnecer指针
	FSequencer* sequencerPtr;

	//sequencer widget指针
	SSequencer* sequencerWidgetPtr;
	
	SSequencerTreeView* treeviewPtr;

	//获取sequecner widget
	TSharedRef<SWidget> lcGetSequencerWidget();

	//获取所有根节点
	const TArray< TSharedRef<FSequencerDisplayNode> >& lcGetAllRootNode();

	//获选当前选择selection
	FSequencerSelection& lcGetSelection();

	//释放所有当前选择的节点
	void lcEmptySelectedOutlinerNodes();

	//添加节点到当前选择
	void lcAddToSelection(const TArray<TSharedRef<FSequencerDisplayNode>>& OutlinerNodes);

	//展开指定节点
	void lcExpansionChange(TSharedRef<FSequencerDisplayNode> InItem, bool bIsExpanded);

	//获取当前选择的所有节点
	TSet<TSharedRef<FSequencerDisplayNode>>& lcGetSelectedOutlinerNodes();

	//循环查找指定名称的节点
	bool findContainSpecialStringNodeLoop(TSharedRef<FSequencerDisplayNode>inNode, FString specialName, TArray<TSharedRef<FSequencerDisplayNode>>& outTransNodeArray, bool bBoot);

	//循环查找指定名称节点
	bool findSpecialNameNodeLoop(TSharedPtr<FSequencerDisplayNode>inNode, FString specialName, TArray<TSharedRef<FSequencerDisplayNode>>& outTransNodeArray, bool bBoot);

	bool initSqPtr();

	//选择所有指定名称的节点在高亮选择节点中
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void selectAllNodeIncludeSpecialNameInSelection(FString specialName);

	//选择指定的transform的类型的节点在当前选择中
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void selectSpecialTransofrmChildNodeInSelection(ELcTransformType transType, ELcVectorType vectorType, bool bAddSelect);

	//选择指定名称track在高亮bindding中
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void selectSpecialNameTrackInHighLightsBinding(FString specialName);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void selectSpecialNameTrackInAllBinding(FString specialName);
	/**
	 * SequencerRecorder相关
	 */
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void AddActorsToSequencerRecorder(TArray<AActor*>actors);

	//添加相机cut
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void LcAddNewCameraCut(UMovieSceneCameraCutTrack* track, FMovieSceneObjectBindingID CameraBindingID);
	//UMovieSceneCameraCutSection* UMovieSceneCameraCutTrack::AddNewCameraCut(const FMovieSceneObjectBindingID& CameraBindingID, FFrameNumber StartTime)

		/**
		 * 材质编辑器相关
		 */
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void SetMaterialAllParameterNodeName(UMaterial* mat, FString prefix, FString checkPrefix, bool bReplace);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void SetMaterialFunctionAllParameterNodeName(UMaterialFunction* matFun, FString prefix, FString checkPrefix, bool bReplace);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void SelectALlSpecialPrefixNode(UMaterial* mat, FString checkPrefix);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void SelectAllMatFunSpecialPrefixNode(UMaterialFunction* matFun, FString checkPrefix);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void SelectAllParamter(UMaterial* mat);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void SelectAllMatFunParamter(UMaterialFunction* matFun);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void DeleteSpecialPrefixNodePrefix(UMaterial* mat, FString checkPrefix);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void DeleteMatFunSpecialPrefixNodePrefix(UMaterialFunction* matFun, FString checkPrefix);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void SetMaterialParameterNodeNameInSelect(UMaterial* mat, FString prefix, FString checkPrefix, bool bReplace);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void SetMaterialFunctionParameterNodeNameInSelect(UMaterialFunction* matFun, FString prefix, FString checkPrefix, bool bReplace);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void AddMaterialParameterNodePrefix(UMaterial* matFun, FString prefix, FString checkPrefix);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void AddMaterialFunctionParameterNodePrefix(UMaterialFunction* matFun, FString prefix, FString checkPrefix);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void AddMaterialParameterNodePrefixInSelect(UMaterial* matFun, FString prefix, FString checkPrefix);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void AddMaterialFunctionParameterNodePrefixInSelect(UMaterialFunction* matFun, FString prefix, FString checkPrefix);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void SetMaterialAllParameterInSameGroup(UMaterial* mat, FString groupName);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void SetMaterialFunctionAllParameterInSameGroup(UMaterialFunction* mat, FString groupName);

	/*
	材质参数调整功能
	*/
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void SetMaterialProperty(UMaterialInstance* const sourMat, UMaterialInstance* changeMat);


	/************************************************************************/
	/* 关卡相关                                                                     */
	/************************************************************************/
	//添加指定名称关卡到指定文件夹
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void AddLevelToSpecialPathFolder(FString levelName, FString folderName);

	//锁定指定关卡
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void LockSpecialNameLevels(TSet<FString>levelNames);

	//关卡自动放入文件夹处理
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void LcMainmapLevelAutoDispose();

	//锁定指定对象移动
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void LockActorArrMovement(TArray<AActor*>actorArr);

	//打开关卡并绑定相机
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void LcOpenLevelAndBindCamera(TArray<FString>charNameArr, TArray<FString> mapPathArr);

/************************************************************************/
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void LcRunCmdWithSave(FString theKey, FString theValue);

	/************************************************************************/
	/* 颜色输出面板相关
	/************************************************************************/
	//设置地形覆盖材质
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void SetLandscapeMat(ALandscape* landActor, UMaterialInterface* mat);

	//清除地形覆盖材质
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void ClearLandscapeMat(ALandscape* landActor);

	/**
	 * 动画导入相关
	 */


	 //UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
	FHoudiniExportData ParseHoudiniExportData(FString filePath);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void ImportAnimation(FString importFilePath, FString assetPath, FString animName, USkeletalMesh* targetMesh);





	/************************************************************************/
	/* hack 功能                                                                     */
	/************************************************************************/

	//TArray<lsData> GetSpecialModuleBaseAddress(FString moduleDllName);


	//各个偏移
	UINT64 offsetFSequncer_SSequncer = 0x490;

	//初始化所有hack函数指针
	void InitHackFunPtr();


	/**
	 * 关卡操作
	 */
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void LcAddLevelToWorld(UWorld* world, FString path);

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void LcSaveAll();

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void SetLevelCommand(ELevelCommandType lctType);

	/**
	 * 测试
	 */
	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void testFeature();

	void onSequencerCreate(TSharedRef<ISequencer> InSequencer);

	void* GetNodeTree();

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void functionPtrTets();

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void functionPtrTets2();

	UFUNCTION(BlueprintPure, Category = "lcToolSubSystem")
		UlcBpBridge* GetBridgetPtr();

	UFUNCTION(BlueprintCallable, Category = "lcToolSubSystem")
		void TestImportFile();

	


};

//
//LCTOOL_API void LcGetFile(FString destinationPath);


