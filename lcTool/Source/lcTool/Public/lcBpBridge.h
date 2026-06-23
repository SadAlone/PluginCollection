// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UnrealEd/Public/Dialogs/DlgPickAssetPath.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/ObjectLibrary.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/LevelSequence/Public/LevelSequence.h"
#include "buildLight/Public/BuildLightActor.h"
#include "LcRuntimeLibrary/Public/LcRuntimeLibraryBPLibrary.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Runtime/Json/Public/Json.h"
#include "Runtime/JsonUtilities/Public/JsonUtilities.h"
#include "Runtime/Core/Public/Misc/SecureHash.h"
#include "../../Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAsset.h"
#include "../../Runtime/HairStrands/Source/HairStrandsCore/Public/GroomBindingAsset.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "../../Engine/Source/Editor/ContentBrowser/Public/ContentBrowserModule.h"
#include "../../Engine/Source/Editor/ContentBrowser/Public/IContentBrowserSingleton.h"


#include "Windows/AllowWindowsPlatformTypes.h "
#include <windows.h>
#include "Windows/HideWindowsPlatformTypes.h "


#include "lcBpBridge.generated.h"


struct FfbxImportInfo
{
	TArray<FString>fbxArray;
};


/**
 * 关卡选择合集
 */

USTRUCT(BlueprintType)
struct FLevelSelectSet
{
	GENERATED_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "选择合集")
		bool os;
};

//羽毛数据结构体
USTRUCT(BlueprintType)
struct FFeather : public FTableRowBase
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FeatherProperty")
		UGroomAsset* groomAsset;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FeatherProperty")
		UGroomBindingAsset* groomBindingAsset;

};

//颜色输出通道单元
USTRUCT(BlueprintType)
struct FColorOutputUnitSave
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "选择合集")
		TSet<FString>actorSet;
};


UCLASS(Blueprintable)
class LCTOOL_API UlcBpBridge : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * 材质替换相关
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "目标骨骼物体"), Category = "材质替换")
		USkeletalMesh* matReplaceSke;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "目标静态物体"), Category = "材质替换")
		UStaticMesh* matReplaceStatic;

	//是否是静态模型
	UPROPERTY()
		bool bStaticMesh = false;

	//目录路径合集
	UPROPERTY()
		TSet<FString>dirPathSet;

	//替换mesh材质
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void ReplaceMeshMat();
	//替换场景mesh材质
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void ReplaceLevelMeshMat();

	//清理指定mesh所有材质
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void ClearMeshAllMat();

	//设置是否是静态mesh
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void setMeshType(bool bStatic);

	//添加路径到合集
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void CallAddPitch(FString& path);

	//删除路径在合集
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void DelDirPathToSet(FString path);

	//清空路径合集
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void EmptyPathSet(FString path);

	//获取合集数组
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void GetSetArray(TArray<FString>& retPathSet);

	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void setMesh(UStaticMesh* staticMesh, USkeletalMesh* skMesh);

	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		TArray<AActor*> GetLevelMesh();

	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		TArray<FString> getAllFileOnDirectory(FString path);

	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		bool addDataTableValue(UDataTable* Table, FFeather featherPro);

	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		bool deleteDataTableValue(UDataTable* Table, FFeather featherPro);

	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		TMap<UGroomAsset*, UGroomBindingAsset*> getTableAllGroomAsset(UDataTable* Table);
	
	//UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
	//	UActorComponent* getGroomActorComponent(TSubclassOf<UActorComponent> ComponentClass);



	/**
	* FBX载入相关
	*/
	//异步队列
	TQueue<FfbxImportInfo, EQueueMode::Mpsc>dataQueue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "基础文件夹目录"), Category = "FBX自动导入")
		FString basePath = "D:/uetemp";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "输出检测文件"), Category = "FBX自动导入")
		FString outputFilePath = "D:/uetemp/mayaue.txt";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "maya正在到处标志文件"), Category = "FBX自动导入")
		FString mayaLockFilePath = "D:/uetemp/mayaExporting.txt";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "UE正在导入标志文件"), Category = "FBX自动导入")
		FString ueLockFilePath = "D:/uetemp/ueImporting.txt";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "是否自动检测导入FBX"), Category = "FBX自动导入")
		bool bAutoCheckImportFbx;

	/**
	* sq定序器
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "定序器资源"), Category = "定序器")
		ULevelSequence* sqPtr;

	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void RemoveAllNodeContainSpecialName(FString name);

	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void RemoveAllNodeEqualSpecialName(FString name);

	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void GetAllSqPtrBinddingsName(TArray<FString>& outString);


	/**
	* 关卡选择
	*/
	TMap<FString, TArray<FString>>levelSelectMap;

	//添加新的合集
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void addNewSelectSet(FString setName, TArray<FString>setContent);

	//添加内容到指定名称合集里
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void addContentToSpecialSet(FString setName, TArray<FString>setContent);

	//获取合集内容通过合集名称
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		TArray<FString> getSelectContentBySetName(FString SetName, bool& bfind);

	//移除指定合集通过合集名称
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void removeSpecialSetNameContent(FString SetName);

	//重命名指定名称合集到新的名称
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void setSpecialNameToNewSetName(FString SetName, FString newSetName);

	//获取所有合集名称
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		TArray<FString>getAllSetName();

	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void ClearLevelSelectSet();

	/**
	 * 颜色输出
	 */
	 //ID对应颜色合集
	TMap<int, TArray<FString>>colorOutputSet;

	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		FLinearColor getSpecialIdColor(int id);

	//添加一个合集
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		int addNewColorOuputSet();

	//删除一个合集
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void delColorOutputSet(int id);

	//获取指定id颜色内容
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		TArray<FString> getSpecialIdColorouputContent(int id);

	//获取所有ID
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		TArray<int> getAllColorId();

	//添加内容到指定ID合集
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void addContentToSpecialColorSet(int id, TArray<FString>content);

	//清空所有颜色合集
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void clearAllColorOuputSet();

	//清除指定
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void clearSpecialIdColorOutputSet(int id);

	/**
	 * 设置相关
	 */
	 //开启项目设置stencil
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void settingEnableStencil();

	/**
	 * 注册码相关
	 */
	bool bPasswordCheck = false;
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void RequestServerCode();
	void OnResponseCodeReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	/**
	 * 版本号相关
	 */
	 //服务器版本号
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "version")
		int serverVersionCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "version")
		int currentVersionCode = 4250;

	//服务器请求插件版本号
	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void RequestServerPluginVersion();
	void OnResponseVersionReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	UFUNCTION(BlueprintCallable, Category = "lcBpBridge")
		void callUpdateExe();

	/************************************************************************/
	/* 灯光阵列                                                                     */
	/************************************************************************/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "")
		ABuildSpotLight* buildSpotLight;

};
