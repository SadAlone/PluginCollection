// Fill out your copyright notice in the Description page of Project Settings.


#include "lcToolSubSystem.h"
#include "Engine\LevelStreamingAlwaysLoaded.h"
#include "UnrealEd\Public\EditorLevelUtils.h"
#include "UnrealEd/Public/EditorReimportHandler.h"
#include "Editor/Sequencer/Private/SSequencerTreeView.h"
#include "WorldBrowser/Public/WorldBrowserModule.h"
#include "Editor/UnrealEd/Public/FileHelpers.h"
#include "Editor/UnrealEd/Public/ObjectTools.h"
#include "DesktopPlatform/Public/DesktopPlatformModule.h"
#include "MovieSceneTracks/Public/Tracks/MovieSceneCameraCutTrack.h"
#include  "UnrealEd/Classes/Factories/FbxAnimSequenceImportData.h"
#include "Runtime/AssetRegistry/Public/AssetRegistryModule.h"
#include "Runtime/Core/Public/Misc/FbxErrors.h"
#include "Editor/SequenceRecorder/Private/SequenceRecorder.h"
#include "UnrealEd/Classes/Factories/ReimportFbxAnimSequenceFactory.h"
#include "UnrealEd/Classes/Factories/ReimportFbxSkeletalMeshFactory.h"
#include "UnrealEd/Classes/Factories/ReimportFbxStaticMeshFactory.h"
#include "UnrealEd/Classes/Factories/FbxFactory.h"
#include "UnrealEd/Public/FbxImporter.h"
#include "UnrealEd/Public/FbxAnimUtils.h"
#include "../../Engine/Source/Developer/SkeletalMeshUtilitiesCommon/Public/LODUtilities.h"

#include "Engine/Classes/Materials/MaterialExpressionRuntimeVirtualTextureSampleParameter.h"

#include "Kismet/GameplayStatics.h"
#include "Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Foliage/Public/InstancedFoliageActor.h"
#include "Runtime/Foliage/Public/FoliageType_InstancedStaticMesh.h"
#include "CinematicCamera/public/CineCameraActor.h"

#include "EditorLevelLibrary.h"
#include "EditorAssetLibrary.h"
#include "MovieSceneSequenceExtensions.h"
#include "MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneCameraCutSection.h"
#include "Runtime/Core/Public/Async/AsyncWork.h"

THIRD_PARTY_INCLUDES_START
#include <fbxsdk.h>
THIRD_PARTY_INCLUDES_END

#if PLATFORM_WINDOWS
#include <Commdlg.h>
#endif
struct lsData
{
	FString dllname;
	DWORD_PTR address;
};



TArray<lsData> GetSequenceRecorderDllAddress()
{
	DWORD_PTR   baseAddress = 0;

	DWORD_PTR processId = GetCurrentProcessId();

	HANDLE      processHandle = OpenProcess(PROCESS_ALL_ACCESS, false, processId);
	//HMODULE     *moduleArray;
	//LPBYTE      moduleArrayBytes;
	DWORD       bytesRequired;

	HMODULE hMods[1024];

	//TArray<DWORD_PTR>ret;
	TArray<lsData>strArr;


	if (EnumProcessModules(processHandle, hMods, sizeof(hMods), &bytesRequired))
	{
		for (int i = 0; i < (bytesRequired / sizeof(HMODULE)); i++)
		{
			TCHAR szModName[MAX_PATH];

			// Get the full path to the module's file.

			if (GetModuleFileNameEx(processHandle, hMods[i], szModName,
				sizeof(szModName) / sizeof(TCHAR)))
			{
				// Print the module name and handle value.
				FString lsStr(szModName);
				FString ls2 = FPaths::GetBaseFilename(lsStr) + ".dll";

				if (ls2 == "UE4Editor-SequenceRecorder.dll")
				{
					lsData data;
					data.dllname = lsStr;
					data.address = (DWORD_PTR)hMods[i];

					strArr.Add(data);
				}
			}
		}
	}
	return strArr;
}

TArray<lsData> GetMaterialEditorDllAddress()
{
	DWORD_PTR   baseAddress = 0;

	DWORD_PTR processId = GetCurrentProcessId();

	HANDLE      processHandle = OpenProcess(PROCESS_ALL_ACCESS, false, processId);
	//HMODULE     *moduleArray;
	//LPBYTE      moduleArrayBytes;
	DWORD       bytesRequired;

	HMODULE hMods[1024];

	//TArray<DWORD_PTR>ret;
	TArray<lsData>strArr;


	if (EnumProcessModules(processHandle, hMods, sizeof(hMods), &bytesRequired))
	{
		for (int i = 0; i < (bytesRequired / sizeof(HMODULE)); i++)
		{
			TCHAR szModName[MAX_PATH];

			// Get the full path to the module's file.

			if (GetModuleFileNameEx(processHandle, hMods[i], szModName,
				sizeof(szModName) / sizeof(TCHAR)))
			{
				// Print the module name and handle value.
				FString lsStr(szModName);
				FString ls2 = FPaths::GetBaseFilename(lsStr) + ".dll";

				if (ls2 == "UE4Editor-UnrealEd.dll")
				{
					lsData data;
					data.dllname = lsStr;
					data.address = (DWORD_PTR)hMods[i];

					strArr.Add(data);
				}
			}
		}
	}
	return strArr;
}

void FLcReadFbxInfo::setBridgePtr(UlcBpBridge* bridgePtr)
{
	this->bpBridgetPtr = bridgePtr;
}

uint32 FLcReadFbxInfo::Run()
{
	uint32 count = 0;
	while (1)
	{
		FPlatformProcess::Sleep(0.1);
		//如果可以导入
		if (canImportFbx())
		{
			makeAndSendQueue(getOutputTempAllFile());
		}
		count++;
	}
	return 0;
}

bool FLcReadFbxInfo::canImportFbx()
{
	if (bpBridgetPtr)
	{
		if (!bpBridgetPtr->bAutoCheckImportFbx)
			return false;
	}

	IPlatformFile& platformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (!platformFile.DirectoryExists(*bpBridgetPtr->basePath))
	{
		if (!platformFile.CreateDirectory(*bpBridgetPtr->basePath))
		{
			UE_LOG(LogTemp, Log, TEXT("create uetemp dir error!"));
		}
	}

	//如果mayaue.txt存在
	if (platformFile.FileExists(*outputFilePath))
	{
		//检查mayaExporting.txt是否存在  不存在代表当前maya已经输出完成,可以导入
		if (!platformFile.FileExists(*mayaLockFilePath))
		{
			//检查ueImporting.txt  是否存在 存在则代表当前UE正在导入 
			if (!platformFile.FileExists(*ueLockFilePath))
			{
				return true;
			}
		}
	}

	return false;
}

TArray<FString> FLcReadFbxInfo::getOutputTempAllFile()
{
	TArray<FString>ret;

	IPlatformFile& platformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (FFileHelper::LoadFileToStringArray(ret, *outputFilePath))
	{
		if (ret.Num() <= 0)
		{
			UE_LOG(LogTemp, Warning, TEXT("import nothing"));
			return ret;
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("can't read ueoutput.txt!"));
	}
	return ret;
}

void FLcReadFbxInfo::makeAndSendQueue(TArray<FString>inputFileList)
{
	//写入文件表示开始导入
	FFileHelper::SaveStringToFile(TEXT("Pause!"), TEXT("d:/uetemp/ueImporting.txt"));

	//发送数据到主线程队列
	FfbxImportInfo lsInfo;
	lsInfo.fbxArray = inputFileList;

	bpBridgetPtr->dataQueue.Enqueue(lsInfo);
	bpBridgetPtr->bAutoCheckImportFbx = false;
}


void UlcToolSubSystem::Initialize(FSubsystemCollectionBase& Collection)
{
	bpBridgetPtr = NewObject<UlcBpBridge>(this, TEXT("bridge"));
	importFileSystemPtr = NewObject<UlcImportFileSystem>(GEditor, TEXT("lcimportFileSystem"));

	FContentBrowserModule& lsMI = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	lsMI.GetOnAssetPathChanged().AddUObject(this, &UlcToolSubSystem::AssetPathChange);
	
	//FContentBrowserAssetDataSourceModule& fbadsm = FModuleManager::LoadModuleChecked<FContentBrowserAssetDataSourceModule>("ContentBrowserAssetDataSource");
	//UContentBrowserAssetDataSource*  source = fbadsm.getContentBrowserAssetDataSource();
	//source->getDelegateLc().BindUObject(this, &UlcToolSubSystem::lcImportFile);


}

void UlcToolSubSystem::lcImportFile()
{
	importFileSystemPtr->LcImportFBXFile();
}

void UlcToolSubSystem::Deinitialize()
{
}

void UlcToolSubSystem::ReadFbxInfoTimerFun()
{
	if (!bpBridgetPtr || !bpBridgetPtr->bPasswordCheck)
		return;
	if (!this->bpBridgetPtr)
		return;

	if (!this->bpBridgetPtr->dataQueue.IsEmpty())
	{
		FfbxImportInfo lsData;
		if (this->bpBridgetPtr->dataQueue.Dequeue(lsData))
		{
			if (lsData.fbxArray.Num() > 0)
			{
				DisposeFbxImportInfo(lsData.fbxArray);  

				IPlatformFile& platformFile = FPlatformFileManager::Get().GetPlatformFile();
				//删除UE导入锁
				platformFile.DeleteFile(*this->bpBridgetPtr->ueLockFilePath);
				//删除导出文件标志文件
				platformFile.DeleteFile(*this->bpBridgetPtr->outputFilePath);
			}
			else
			{
				UE_LOG(LogTemp, Log, TEXT("empty queue!"));
				IPlatformFile& platformFile = FPlatformFileManager::Get().GetPlatformFile();
				//删除UE导入锁
				platformFile.DeleteFile(*this->bpBridgetPtr->ueLockFilePath);
				//删除导出文件标志文件
				platformFile.DeleteFile(*this->bpBridgetPtr->outputFilePath);
			}

			UE_LOG(LogTemp, Log, TEXT("the queue Num is %d"), (lsData.fbxArray.Num()));
		}
	}
}

void UlcToolSubSystem::importRigFbx(FString rigFullName)
{
	//骨架文件外部路劲
	FString  rigFbxPath = bpBridgetPtr->basePath + "/" + rigFullName + "_Rig.fbx";

	/**
	 * 得到文件短名
	 */
	FString rigShotName = FPaths::GetBaseFilename(rigFbxPath);

	TArray<FString>lsStrArray;
	rigShotName.ParseIntoArray(lsStrArray, TEXT("_"));

	if (lsStrArray[0] == "")
		return;

	rigShotName = lsStrArray[0] + "_" + lsStrArray[1];

	//创建资源导入任务
	UAssetImportTask* ait = NewObject<UAssetImportTask>();

	ait->bAutomated = true;
	ait->DestinationName = rigShotName;
	ait->DestinationPath = "/Game/rig/" + rigShotName;

	ait->Filename = rigFbxPath;

	ait->bReplaceExisting = true;
	ait->bSave = true;

	UFbxImportUI* fbxOption = NewObject<UFbxImportUI>();

	//载入mesh
	fbxOption->bImportMesh = true;
	//载入贴图
	fbxOption->bImportTextures = false;
	//载入材质
	fbxOption->bImportMaterials = false;
	//载入建立成骨骼体
	fbxOption->bImportAsSkeletal = true;

	//不导入动画
	fbxOption->bImportAnimations = false;

	fbxOption->bCreatePhysicsAsset = true;

	//启用高级选项
	UFbxSkeletalMeshImportData* fbxSkeData = NewObject<UFbxSkeletalMeshImportData>();

	//载入blendshape
	fbxSkeData->bImportMorphTargets = false;

	fbxOption->SkeletalMeshImportData = fbxSkeData;

	ait->Options = fbxOption;

	TArray<UAssetImportTask*>taskArray;

	taskArray.Add(ait);

	FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get().ImportAssetTasks(taskArray);
	//UAssetToolsHelpers::GetAssetTools()->ImportAssetTasks(taskArray);
}

void UlcToolSubSystem::importMotFbx(FString rigFullName)
{
	//骨架文件外部路劲
	FString  rigFbxPath = bpBridgetPtr->basePath + "/" + rigFullName + ".fbx";
	/**
	 * 得到文件短名
	 */
	FString rigShotName = FPaths::GetBaseFilename(rigFbxPath);

	TArray<FString>lsStrArray;
	rigShotName.ParseIntoArray(lsStrArray, TEXT("_"));

	if (lsStrArray[0] == "")
		return;

	rigShotName = lsStrArray[0] + "_" + lsStrArray[1];

	//创建资源导入任务
	UAssetImportTask* ait = NewObject<UAssetImportTask>();

	ait->bAutomated = true;
	ait->DestinationName = rigFullName;
	ait->DestinationPath = "/Game/rig/" + rigFullName;

	ait->Filename = rigFbxPath;

	ait->bReplaceExisting = true;
	ait->bSave = true;

	UFbxImportUI* fbxOption = NewObject<UFbxImportUI>();

	//载入mesh
	fbxOption->bImportMesh = true;
	//载入贴图
	fbxOption->bImportTextures = false;
	//载入材质
	fbxOption->bImportMaterials = false;
	//载入建立成骨骼体
	fbxOption->bImportAsSkeletal = true;

	//导入动画
	fbxOption->bImportAnimations = true;

	fbxOption->bCreatePhysicsAsset = true;

	//启用高级选项
	UFbxSkeletalMeshImportData* fbxSkeData = NewObject<UFbxSkeletalMeshImportData>();

	//载入blendshape
	fbxSkeData->bImportMorphTargets = true;

	fbxOption->SkeletalMeshImportData = fbxSkeData;

	ait->Options = fbxOption;

	TArray<UAssetImportTask*>taskArray;

	taskArray.Add(ait);

	FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get().ImportAssetTasks(taskArray);

}

void UlcToolSubSystem::OldimportAnimFbxArr(TArray<FString> animArray)
{
	//创建资源导入任务

	for (auto animE : animArray)
	{
		FString lsAnimStr = animE;

		//处理rig文件名

		FString rigShotName = "";

		TArray<FString>lsStrArray;
		lsAnimStr.ParseIntoArray(lsStrArray, TEXT("_"));

		if (lsStrArray.Num() == 0)
			continue;


		rigShotName = lsStrArray[0] + "_" + lsStrArray[1];

		/**
		 * 查找对应绑定rig骨骼文件资源
		 */
		FString skeAssetPath = "Skeleton'/Game/rig/" + rigShotName + "/" + rigShotName + "_Skeleton." + rigShotName + "_Skeleton'";

		USkeleton* skePtr = Cast<USkeleton>(StaticLoadObject(USkeleton::StaticClass(), nullptr, *skeAssetPath));

		if (!skePtr)
		{
			UE_LOG(LogTemp, Warning, TEXT("!!Can't not find the anim :%s rig file!rig file name is %s "), *lsAnimStr, *rigShotName);
		}

		/**
		 * 获取动画文件短名
		 */
		FString animShotName = lsAnimStr;//FPaths::GetBaseFilename(lsAnimStr);

		FString  animEnginePath = "/Game/rig/" + rigShotName;

		FString animFbxPath = "d:/uetemp/" + lsAnimStr + ".fbx";

		UAssetImportTask* ait = NewObject<UAssetImportTask>();

		ait->bAutomated = true;

		ait->DestinationName = animShotName;

		ait->DestinationPath = animEnginePath;

		ait->Filename = animFbxPath;

		ait->bReplaceExisting = true;

		ait->bSave = false;

		UFbxImportUI* fbxOption = NewObject<UFbxImportUI>();

		fbxOption->bAutomatedImportShouldDetectType = false;
		//不载入mesh
		fbxOption->bImportMesh = false;
		//不载入贴图
		fbxOption->bImportTextures = false;
		//不载入材质
		fbxOption->bImportMaterials = false;
		//不载入建立成骨骼体

		fbxOption->bImportAsSkeletal = true;

		fbxOption->bIsReimport = false;

		fbxOption->ReimportMesh = false;

		fbxOption->bImportRigidMesh = false;
		//创建物理资源
		fbxOption->bCreatePhysicsAsset = false;

		fbxOption->MeshTypeToImport = EFBXImportType::FBXIT_Animation;

		fbxOption->OriginalImportType = EFBXImportType::FBXIT_Animation;

		fbxOption->Skeleton = skePtr;

		//导入动画
		fbxOption->bImportAnimations = true;

		//启用高级选项
		UFbxSkeletalMeshImportData* fbxSkeData = NewObject<UFbxSkeletalMeshImportData>();

		//载入blendshape
		//fbxSkeData->bImportMorphTargets = true;

		fbxOption->SkeletalMeshImportData = fbxSkeData;

		ait->Options = fbxOption;

		TArray<UAssetImportTask*>taskArray;

		taskArray.Add(ait);

		FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get().ImportAssetTasks(taskArray);
		//UAssetToolsHelpers::GetAssetTools()->ImportAssetTasks(taskArray);

	}
}

bool UlcToolSubSystem::LcImportRigFbx(FString fbxPath, FString importPath, FString& rigName)
{
	//骨架文件外部路劲
	FString  rigFbxPath = fbxPath;

	/**
	 * 得到文件短名
	 */
	FString rigShotName = FPaths::GetBaseFilename(rigFbxPath);

	TArray<FString>lsStrArray;
	rigShotName.ParseIntoArray(lsStrArray, TEXT("_"));

	if (lsStrArray[0] == "")
		return false;

	//rigShotName = lsStrArray[0] + "_" + lsStrArray[1];

	rigName = rigShotName;

	//创建资源导入任务
	UAssetImportTask* ait = NewObject<UAssetImportTask>();

	ait->bAutomated = true;
	ait->DestinationName = rigShotName;
	ait->DestinationPath = importPath + rigShotName;

	ait->Filename = rigFbxPath;

	ait->bReplaceExisting = true;
	ait->bSave = true;

	UFbxImportUI* fbxOption = NewObject<UFbxImportUI>();

	//载入mesh
	fbxOption->bImportMesh = true;
	//载入贴图
	fbxOption->bImportTextures = false;
	//载入材质
	fbxOption->bImportMaterials = false;
	//载入建立成骨骼体
	fbxOption->bImportAsSkeletal = true;

	//不导入动画
	fbxOption->bImportAnimations = false;

	fbxOption->bCreatePhysicsAsset = true;

	//启用高级选项
	UFbxSkeletalMeshImportData* fbxSkeData = NewObject<UFbxSkeletalMeshImportData>();

	//载入blendshape
	fbxSkeData->bImportMorphTargets = false;

	fbxOption->SkeletalMeshImportData = fbxSkeData;

	ait->Options = fbxOption;

	TArray<UAssetImportTask*>taskArray;

	taskArray.Add(ait);

	FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get().ImportAssetTasks(taskArray);
	//UAssetToolsHelpers::GetAssetTools()->ImportAssetTasks(taskArray);
	return true;
}

bool UlcToolSubSystem::LcImportRigFbxArray(TArray<FString>fbxPath, FString importPath, FString& rigName)
{
	TArray<UAssetImportTask*>taskArray;
	//骨架文件外部路劲
	for (int i = 0; i < fbxPath.Num(); i++)
	{
		FString  rigFbxPath = fbxPath[i];

		/**
		 * 得到文件短名
		 */
		FString rigShotName = FPaths::GetBaseFilename(rigFbxPath);

		TArray<FString>lsStrArray;
		rigShotName.ParseIntoArray(lsStrArray, TEXT("_"));

		if (lsStrArray[0] == "")
			return false;

		//rigShotName = lsStrArray[0] + "_" + lsStrArray[1];

		rigName = rigShotName;

		//创建资源导入任务
		UAssetImportTask* ait = NewObject<UAssetImportTask>();

		ait->bAutomated = true;
		ait->DestinationName = rigShotName;
		ait->DestinationPath = importPath + rigShotName;

		ait->Filename = rigFbxPath;

		ait->bReplaceExisting = true;
		ait->bSave = true;

		UFbxImportUI* fbxOption = NewObject<UFbxImportUI>();

		//载入mesh
		fbxOption->bImportMesh = true;
		//载入贴图
		fbxOption->bImportTextures = false;
		//载入材质
		fbxOption->bImportMaterials = false;
		//载入建立成骨骼体
		fbxOption->bImportAsSkeletal = true;

		//不导入动画
		fbxOption->bImportAnimations = false;

		fbxOption->bCreatePhysicsAsset = true;

		//启用高级选项
		UFbxSkeletalMeshImportData* fbxSkeData = NewObject<UFbxSkeletalMeshImportData>();

		//载入blendshape
		fbxSkeData->bImportMorphTargets = false;

		fbxOption->SkeletalMeshImportData = fbxSkeData;

		ait->Options = fbxOption;

		taskArray.Add(ait);
	}

	if (taskArray.Num() > 0)
	{
		FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get().ImportAssetTasks(taskArray);
	}
	//UAssetToolsHelpers::GetAssetTools()->ImportAssetTasks(taskArray);
	return true;
}
bool UlcToolSubSystem::LcImportAnimFbx(FString fbxPath, FString rigName, FString importPath, FString& retAnimName)
{


	/**
	 * 获取动画文件短名
	 */
	FString animShotName = FPaths::GetBaseFilename(fbxPath);

	/**
	 * 查找对应绑定rig骨骼文件资源
	 */
	FString skeAssetPath = "Skeleton'/Game/rig/" + rigName + "/" + rigName + "_Skeleton." + rigName + "_Skeleton'";

	USkeleton* skePtr = Cast<USkeleton>(StaticLoadObject(USkeleton::StaticClass(), nullptr, *skeAssetPath));

	if (!skePtr)
	{
		UE_LOG(LogTemp, Warning, TEXT("!!Can't not find the anim :%s rig file!rig file name is %s "), *animShotName, *rigName);
		return false;
	}


	FString  animEnginePath = importPath;

	retAnimName = animShotName;

	FString animFbxPath = fbxPath;

	UAssetImportTask* ait = NewObject<UAssetImportTask>();

	ait->bAutomated = true;

	ait->DestinationName = animShotName;

	ait->DestinationPath = animEnginePath;

	ait->Filename = animFbxPath;

	ait->bReplaceExisting = true;

	ait->bSave = false;

	UFbxImportUI* fbxOption = NewObject<UFbxImportUI>();

	fbxOption->bAutomatedImportShouldDetectType = false;
	//不载入mesh
	fbxOption->bImportMesh = false;
	//不载入贴图
	fbxOption->bImportTextures = false;
	//不载入材质
	fbxOption->bImportMaterials = false;
	//不载入建立成骨骼体

	fbxOption->bImportAsSkeletal = true;

	fbxOption->bIsReimport = false;

	fbxOption->ReimportMesh = false;

	fbxOption->bImportRigidMesh = false;
	//创建物理资源
	fbxOption->bCreatePhysicsAsset = false;

	fbxOption->MeshTypeToImport = EFBXImportType::FBXIT_Animation;

	fbxOption->OriginalImportType = EFBXImportType::FBXIT_Animation;

	fbxOption->Skeleton = skePtr;

	fbxOption->AnimSequenceImportData->bRemoveRedundantKeys = false;

	//导入动画
	fbxOption->bImportAnimations = true;

	//启用高级选项
	UFbxSkeletalMeshImportData* fbxSkeData = NewObject<UFbxSkeletalMeshImportData>();

	//载入blendshape
	fbxSkeData->bImportMorphTargets = true;

	fbxOption->SkeletalMeshImportData = fbxSkeData;

	ait->Options = fbxOption;

	TArray<UAssetImportTask*>taskArray;

	taskArray.Add(ait);

	FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get().ImportAssetTasks(taskArray);
	//UAssetToolsHelpers::GetAssetTools()->ImportAssetTasks(taskArray);

	return true;
}

bool UlcToolSubSystem::LcImportCameraAnimFbx(FString fbxPath, FString importPath, FString& retAnimName)
{
	/**
	 * 获取动画文件短名
	 */
	FString animShotName = FPaths::GetBaseFilename(fbxPath);

	/**
	 * 查找对应绑定rig骨骼文件资源
	 */
	FString skeAssetPath = "Skeleton'/Game/rig/cam_rig/cam_Skeleton.cam_Skeleton'";

	USkeleton* skePtr = Cast<USkeleton>(StaticLoadObject(USkeleton::StaticClass(), nullptr, *skeAssetPath));

	if (!skePtr)
	{
		UE_LOG(LogTemp, Warning, TEXT("!!Can't not find the camera rig"));
		return false;
	}


	FString  animEnginePath = importPath;

	retAnimName = animShotName;

	FString animFbxPath = fbxPath;

	UAssetImportTask* ait = NewObject<UAssetImportTask>();

	ait->bAutomated = true;

	ait->DestinationName = animShotName;

	ait->DestinationPath = animEnginePath;

	ait->Filename = animFbxPath;

	ait->bReplaceExisting = true;

	ait->bSave = false;

	UFbxImportUI* fbxOption = NewObject<UFbxImportUI>();

	fbxOption->bAutomatedImportShouldDetectType = false;

	fbxOption->AnimSequenceImportData->bRemoveRedundantKeys = false;

	//不载入mesh
	fbxOption->bImportMesh = false;
	//不载入贴图
	fbxOption->bImportTextures = false;
	//不载入材质
	fbxOption->bImportMaterials = false;
	//不载入建立成骨骼体

	fbxOption->bImportAsSkeletal = true;

	fbxOption->bIsReimport = false;

	fbxOption->ReimportMesh = false;

	fbxOption->bImportRigidMesh = false;
	//创建物理资源
	fbxOption->bCreatePhysicsAsset = false;

	fbxOption->MeshTypeToImport = EFBXImportType::FBXIT_Animation;

	fbxOption->OriginalImportType = EFBXImportType::FBXIT_Animation;

	fbxOption->Skeleton = skePtr;

	//导入动画
	fbxOption->bImportAnimations = true;

	//启用高级选项
	UFbxSkeletalMeshImportData* fbxSkeData = NewObject<UFbxSkeletalMeshImportData>();

	//载入blendshape
	fbxSkeData->bImportMorphTargets = true;

	fbxOption->SkeletalMeshImportData = fbxSkeData;

	ait->Options = fbxOption;

	TArray<UAssetImportTask*>taskArray;

	taskArray.Add(ait);

	FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get().ImportAssetTasks(taskArray);
	//UAssetToolsHelpers::GetAssetTools()->ImportAssetTasks(taskArray);

	return true;
}

FString UlcToolSubSystem::LcOpenGetEngineDirDialog(FString title)
{
	FString lsPath;

	TSharedRef<SDlgPickAssetPath> SaveFoliageTypeDialog =
		SNew(SDlgPickAssetPath)
		.Title(FText::FromString(title))
		.DefaultAssetPath(FText::FromString(TEXT("/Game")));

	FString PackageName = "";

	if (SaveFoliageTypeDialog->ShowModal() != EAppReturnType::Cancel)
	{
		PackageName = SaveFoliageTypeDialog->GetAssetPath().ToString();


		lsPath = PackageName;
	}
	else
	{
		return FString("");
	}

	lsPath = PackageName;

	return lsPath;

}

FString UlcToolSubSystem::LcOpenGetSystemFilePathDialog(FString title, FString inputPath)
{
	TArray<FString> OpenFilenames;
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	bool bOpened = false;
	if (DesktopPlatform != NULL)
	{
		//TSharedPtr<SWindow> ParentWindow = FSlateApplication::Get().FindWidgetWindow(SourceFileValueWidget.ToSharedRef());
		//void* ParentWindowHandle = (ParentWindow.IsValid() && ParentWindow->GetNativeWindow().IsValid()) ? ParentWindow->GetNativeWindow()->GetOSWindowHandle() : nullptr;

		FString DefaultFile = TEXT("");
		FString DefaultPath = TEXT("");

		DefaultFile = TEXT("");
		DefaultPath = inputPath;

		//bOpened = DesktopPlatform->OpenFileDialog(
		bOpened = DesktopPlatform->SaveFileDialog(
			NULL,
			TEXT("Select file.."),
			DefaultPath,
			DefaultFile,
			//TEXT("file (*.fbx)|*.fbx|OBJ file (*.obj)|*.obj"),
			TEXT("*"),
			EFileDialogFlags::None,
			OpenFilenames);
	}

	if (bOpened == true)
	{
		return OpenFilenames[0];
	}
	else
	{
		return FString("");
	}
}

FString UlcToolSubSystem::LcOpenGetSystemDirPathDialog(FString title, FString inputPath)
{
	FString OpenFilenames;
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	bool bOpened = false;
	if (DesktopPlatform != NULL)
	{
		const void* ParentWindowWindowHandle = FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr);



		FString DefaultFile = TEXT("");
		FString DefaultPath = TEXT("");

		DefaultFile = TEXT("");
		DefaultPath = inputPath;

		bOpened = DesktopPlatform->OpenDirectoryDialog(
			ParentWindowWindowHandle,
			TEXT("Select file.."),
			DefaultPath,
			OpenFilenames);
	}

	if (bOpened == true)
	{
		return OpenFilenames;
	}
	else
	{
		return FString("");
	}
}

TArray<FString> UlcToolSubSystem::LcOpenGetMultiSystemDirPathDialog(FString title, FString inputPath)
{
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	bool bOpened = false;
	int32 FilterIndex = -1;

	TArray<FString>outfile;


	return outfile;
}


FString UlcToolSubSystem::LcExportTextureAsset(FString assetStr)
{
	return "";
}

void UlcToolSubSystem::DisposeFbxImportInfo(TArray<FString>fullNameArray)
{
	if (fullNameArray.Num() <= 0)
		return;

	TMap<FString, TArray<FString>>rigAnimArrMap;

	TArray<FString>animNameArray;

	TArray<FString>motNameArray;

	for (auto lsStrIt : fullNameArray)
	{
		TArray<FString> lsResult;
		lsStrIt.ParseIntoArray(lsResult, TEXT("_"), true);

		if (lsResult.Num() != 3)
			continue;

		//是否是rig文件
		if (lsResult[2] == "Rig")
		{
			if (rigAnimArrMap.Find(lsStrIt))
				continue;

			rigAnimArrMap.Add(lsResult[0] + "_" + lsResult[1], TArray<FString>());
		}
		//是否是动画文件
		else if (lsResult[2].Contains("Ani"))
		{
			animNameArray.Add(lsStrIt);
		}
		//是否是变形目标文件
		else if (lsResult[2].Contains("Mot"))
		{
			motNameArray.Add(lsStrIt);
		}

	}

	//遍历动画文件  分别放置进入rig对应map里
	for (auto lsStr : animNameArray)
	{
		FString animPrefx = GetFileNamePre(lsStr);
		if (animPrefx == "")
			continue;

		TArray<FString>* lsFindPtr = rigAnimArrMap.Find(animPrefx);

		if (lsFindPtr)
		{
			lsFindPtr->Add(lsStr);
		}
	}

	//遍历map  开始导入

	for (auto it : rigAnimArrMap)
	{
		FString rigName = it.Key;
		TArray<FString>AnimArr = it.Value;

		if (rigName != "")
			importRigFbx(rigName);

		if (AnimArr.Num() > 0)
		{
			OldimportAnimFbxArr(AnimArr);
		}
	}

	for (auto motIt : motNameArray)
	{
		if (motIt != "")
		{
			importMotFbx(motIt);
		}
	}
}

void UlcToolSubSystem::ClearExportDir()
{
	TArray<FString>ret;

	IPlatformFile& platformFile = FPlatformFileManager::Get().GetPlatformFile();


	if (platformFile.DeleteDirectoryRecursively(TEXT("D:\\uetemp")))
		UE_LOG(LogTemp, Log, TEXT("delete dir success!"))
	else
		UE_LOG(LogTemp, Log, TEXT("delete dir falit!"));

}

UlcImportFileSystem* UlcToolSubSystem::importFileSystemPtr = nullptr;

void UlcToolSubSystem::AssetPathChange(const FString& path)
{
	//importFileSystemPtr->SetCurrPath(path);
}

UlcImportFileSystem* UlcToolSubSystem::getImportSysPtr()
{
	return importFileSystemPtr;
}

bool UlcToolSubSystem::LcImportMovieSequence(int start, int end)
{
	if (!bpBridgetPtr || !bpBridgetPtr->bPasswordCheck)
		return false;

	int maxNum = end;
	int minNum = start;
	TArray<FString> levelAssetPath;
	TArray<FString> seqAllPath;
	for (int i = minNum; i <= maxNum; i++)
	{
		if (i > 0 && i < 10)
		{
			FString sectionMoviePath = "/Game/com/0" + FString::FromInt(i);
			sectionMoviePath += "/shot_se_0";
			sectionMoviePath += FString::FromInt(i);
			sectionMoviePath += ".shot_se_0";
			sectionMoviePath += FString::FromInt(i);
			seqAllPath.Add(sectionMoviePath);

			FString sectionLevelPath = "/Game/com/0" + FString::FromInt(i);
			sectionLevelPath += "/shot_0";
			sectionLevelPath += FString::FromInt(i);
			sectionLevelPath += ".shot_0";
			sectionLevelPath += FString::FromInt(i);
			levelAssetPath.Add(sectionLevelPath);

		}
		else if (i >= 10)
		{
			FString sectionMoviePath = "/Game/com/" + FString::FromInt(i);
			sectionMoviePath += "/shot_se_";
			sectionMoviePath += FString::FromInt(i);
			sectionMoviePath += ".shot_se_";
			sectionMoviePath += FString::FromInt(i);
			seqAllPath.Add(sectionMoviePath);

			FString sectionLevelPath = "/Game/com/" + FString::FromInt(i);
			sectionLevelPath += "/shot_";
			sectionLevelPath += FString::FromInt(i);
			sectionLevelPath += ".shot_";
			sectionLevelPath += FString::FromInt(i);
			levelAssetPath.Add(sectionLevelPath);
		}
	}


	for (int i = 0; i < seqAllPath.Num(); i++)
	{
		LcOnCreateJobFromAsset(seqAllPath[i], levelAssetPath[i]);
	}

	return true;
}

bool UlcToolSubSystem::LcDeleteMovieSequence(int start, int end)
{
	if (!bpBridgetPtr || !bpBridgetPtr->bPasswordCheck)
		return false;

	if (PendingJobsToSelect.Num() < 0 || start < 0 || start > end || end < 0 || end > PendingJobsToSelect.Num() || start > PendingJobsToSelect.Num())
	{
		return false;
	}

	//保存待刪除的job
	TArray<UMoviePipelineExecutorJob*> job;
	for (int i = start; i <= end; i++)
	{
		job.Add(PendingJobsToSelect[i - 1]);
	}

	//遍历删除job
	for (int i = 0; i < job.Num(); i++)
	{
		ActiveQueue->DeleteJob(job[i]);
		PendingJobsToSelect.RemoveSingle(job[i]);
	}


	UE_LOG(LogTemp, Warning, TEXT("PendingJobsToSelect num"));
	return true;

}

void UlcToolSubSystem::LcOnCreateJobFromAsset(const FString& seqPath, const FString& levelPath)
{
	if (!bpBridgetPtr || !bpBridgetPtr->bPasswordCheck)
		return;

	FString seqTempPath = seqPath;
	FString levTempPath = levelPath;

	//Cast<ULevelSequence>(StaticLoadObject(ULevelSequence::StaticClass(), nullptr, *seqTempPath));
	//Cast<ULevel>(StaticLoadObject(ULevel::StaticClass(), nullptr, *levTempPath));
	//UE_LOG(LogTemp, Error, TEXT("path: %s"), *seqTempPath);
	ULevelSequence* LevelSequence = LoadObject<ULevelSequence>(nullptr, *seqTempPath);
	UWorld* level = LoadObject<UWorld>(nullptr, *levTempPath);
	if (level && LevelSequence)
	{
		FSoftObjectPath tempLevel = FSoftObjectPath(level);
		FSoftObjectPath tempSeq = FSoftObjectPath(LevelSequence);

		for (int i = 0; i < PendingJobsToSelect.Num(); i++)
		{
			if (PendingJobsToSelect[i]->Sequence == tempSeq)
			{
				return;
			}
		}
		//FScopedTransaction Transaction(FText::Format(LOCTEXT("CreateJob_Transaction", "Add {0} plural(one=Job, other=Jobs)"), 1));
		const UMovieRenderPipelineProjectSettings* ProjectSettings = GetDefault<UMovieRenderPipelineProjectSettings>();

		ActiveQueue = GEditor->GetEditorSubsystem<UMoviePipelineQueueSubsystem>()->GetQueue();
		check(ActiveQueue);
		ActiveQueue->Modify();

		UMoviePipelineExecutorJob* NewJob = ActiveQueue->AllocateNewJob(ProjectSettings->DefaultExecutorJob);
		if (!ensureAlwaysMsgf(NewJob, TEXT("Failed to allocate new job! Check the DefaultExecutorJob is not null in Project Settings!")))
		{
			return;
		}

		NewJob->Modify();
		//UE_LOG(LogTemp, Error, TEXT("contains: %s"), PendingJobsToSelect.Contains(NewJob));

		PendingJobsToSelect.Add(NewJob);

		NewJob->Map = tempLevel;
		NewJob->Author = FPlatformProcess::UserName(false);
		NewJob->SetSequence(tempSeq);
		NewJob->JobName = NewJob->Sequence.GetAssetName();

		if (ProjectSettings->LastPresetOrigin.IsValid())
		{
			NewJob->SetPresetOrigin(ProjectSettings->LastPresetOrigin.Get());
		}



		//EnsureJobHasDefaultSettings(NewJob);

	}

}

TArray<FString> UlcToolSubSystem::GetImportFileArray()
{
	TArray<FString>ret;

	IPlatformFile& platformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (FFileHelper::LoadFileToStringArray(ret, TEXT("D:\\uetemp\\mayaue.txt")))
	{
		if (ret.Num() <= 0)
		{
			UE_LOG(LogTemp, Warning, TEXT("import nothing"));
			return ret;
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("can't read ueoutput.txt!"));
	}
	return ret;
}

FString UlcToolSubSystem::GetFileNamePre(FString inName)
{
	if (inName == "")
		return "";

	TArray<FString> lsResult;
	inName.ParseIntoArray(lsResult, TEXT("_"), true);

	if (lsResult.Num() < 3)
		return "";

	return lsResult[0] + "_" + lsResult[1];
}

void UlcToolSubSystem::LcGetSpecialPathFileList(FString path, TArray<FString>& retArr, TArray<bool>& bDirArr)
{

	struct FDirVisitor : public IPlatformFile::FDirectoryVisitor
	{
		bool bIsEmpty;
		TArray<FString>retArr;
		TArray<bool>bDirArr;
		FDirVisitor(TArray<FString>retArr, TArray<bool>bDirArr)
			: bIsEmpty(true)
		{
		}

		virtual bool Visit(const TCHAR* FilenameOrDirectory, bool bIsDirectory) override
		{
			retArr.Add(FString(FilenameOrDirectory));
			bDirArr.Add(bIsDirectory);
			return true; // continue searching
		}

		void GetResult(TArray<FString>& inRetArr, TArray<bool>& inBDirArr)
		{
			inRetArr = retArr;
			inBDirArr = bDirArr;
		}
	};
	FDirVisitor visitor = FDirVisitor(retArr, bDirArr);
	IFileManager::Get().IterateDirectory(*path, visitor);
	visitor.GetResult(retArr, bDirArr);
}




void UlcToolSubSystem::ExportCurrentLevelFoliageInfo(FString exportPath)
{
	AInstancedFoliageActor* IFA = AInstancedFoliageActor::GetInstancedFoliageActorForLevel(GEditor->GetEditorWorldContext().World()->GetLevel(0), false);
	if (IFA)
	{
		TArray<FString>allInstanceStr;
		TMap<UFoliageType*, FFoliageInfo*>foliageTypes = IFA->GetAllInstancesFoliageType();

		for (auto& MeshPair : foliageTypes)
		{
			UFoliageType_InstancedStaticMesh* lsFoliageMesh = (UFoliageType_InstancedStaticMesh*)MeshPair.Key;
			if (lsFoliageMesh)
			{
				FString meshName = lsFoliageMesh->GetStaticMesh()->GetPathName();

				TArray<FFoliageInstance>lsInstance = MeshPair.Value->Instances;
				if (lsInstance.Num() <= 0)
					continue;
				allInstanceStr.Add(meshName);

				for (FFoliageInstance value : lsInstance)
				{
					FString valueStr = UKismetStringLibrary::Conv_VectorToString(value.Location) +
						";" + UKismetStringLibrary::Conv_RotatorToString(value.Rotation) +
						";" + UKismetStringLibrary::Conv_VectorToString(value.DrawScale3D);
					allInstanceStr.Add(valueStr);
				}
				UE_LOG(LogTemp, Warning, TEXT("%s"), *meshName);
			}
		}
		FFileHelper::SaveStringArrayToFile(allInstanceStr, *exportPath);
	}
}

void UlcToolSubSystem::ImportSpecialFileFoliageInfo(FString importPath)
{
	if (importPath == "")
		return;

	TArray<FString>stringContent;

	FFileHelper::LoadFileToStringArray(stringContent, *importPath);

	if (stringContent.Num() <= 0)
		return;

	AInstancedFoliageActor* IFA = AInstancedFoliageActor::GetInstancedFoliageActorForLevel(GEditor->GetEditorWorldContext().World()->GetLevel(0), true);

	UStaticMesh* meshAsset = nullptr;

	FFoliageInfo* foliageInfo = nullptr;
	UFoliageType* foliageType = nullptr;

	for (FString lsLine : stringContent)
	{
		TArray<FString>lsStrArr;
		lsLine.ParseIntoArray(lsStrArr, TEXT(";"), true);

		FFoliageInstance lsInstance;

		if (lsStrArr.Num() == 3)
		{
			//is mesh
			bool locationValid = false;
			bool rotationValid = false;
			bool scaldValid = false;

			UKismetStringLibrary::Conv_StringToVector(lsStrArr[0], lsInstance.Location, locationValid);
			UKismetStringLibrary::Conv_StringToRotator(lsStrArr[1], lsInstance.Rotation, rotationValid);
			UKismetStringLibrary::Conv_StringToVector(lsStrArr[2], lsInstance.DrawScale3D, scaldValid);
			if (!(locationValid && rotationValid && scaldValid))
				continue;

			foliageInfo->AddInstance(IFA, foliageType, lsInstance);
		}
		else
		{
			meshAsset = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, *lsLine));
			if (meshAsset)
			{
				foliageInfo = IFA->AddMesh(meshAsset, &foliageType);
			}
			else
			{
				foliageInfo = nullptr;
				UE_LOG(LogTemp, Error, TEXT("the foliage don't find->%s"), *lsLine);
				return;
			}
		}
	}
}


void UlcToolSubSystem::createMultiThread(TArray<FString> filepath, FString importedFilePath)
{
	//testCount = 0;
	//testTarget = 100000;

	//lcAsyncTask* runnable1 = new lcAsyncTask("线程1",this);
	//runnable1->filePath = filepath[0];
	//runnable1->importPath = importedFilePath;

	//FRunnableThread* runnableThread1 = FRunnableThread::Create(runnable1, *runnable1->MyThreadName);

}

bool UlcToolSubSystem::initSqPtr()
{
	ULevelSequence* SequenceAsset = NULL;

	TArray<UObject*>assetArray = FAssetEditorManager::Get().GetAllEditedAssets();

	if (assetArray.Num() <= 0)
		return false;

	bool bFindSeq = false;
	//ULevelSequence* SequenceAsset = nullptr;

	for (auto assE : assetArray)
	{
		UObject* lsObj = assE;
		if (lsObj)
		{
			ULevelSequence* lsSeqAsset = Cast<ULevelSequence>(lsObj);
			if (lsSeqAsset)
			{
				bFindSeq = true;
				SequenceAsset = lsSeqAsset;
			}
		}
	}
	if (!bFindSeq)
		return false;

	IAssetEditorInstance* AssetEditor = FAssetEditorManager::Get().FindEditorForAsset(SequenceAsset, false);
	ILevelSequenceEditorToolkit* LevelSequenceEditor = static_cast<ILevelSequenceEditorToolkit*>(AssetEditor);
	WeakSequencer = LevelSequenceEditor ? LevelSequenceEditor->GetSequencer() : nullptr;

	return WeakSequencer.IsValid();
}

void UlcToolSubSystem::selectSpecialNameTrackInHighLightsBinding(FString specialName)
{
	if (!bpBridgetPtr || !bpBridgetPtr->bPasswordCheck)
		return;
	if (specialName == "")
		return;

	if (!initSqPtr())
		return;

	TArray<UObject*>objArray;

	TSet<FString>selectNameSet;

	//GEditor->GetSelectedActors()->GetSelectedObjects(AActor::StaticClass(),objArray);

	for (auto lsObj : objArray)
	{
		AActor* lsActor = Cast<AActor>(lsObj);
		if (lsActor)
		{
			selectNameSet.Add(lsActor->GetActorLabel());
		}
	}

	if (selectNameSet.Num() <= 0)
		return;

	TArray<FMovieSceneBinding>bindArray = WeakSequencer.Pin()->GetRootMovieSceneSequence()->GetMovieScene()->GetBindings();

	TSet<TSharedRef<FSequencerDisplayNode>>lsSet;
	for (int i = 0; i < bindArray.Num(); i++)
	{
		FMovieSceneBinding lsBind = bindArray[i];
		//WeakSequencer.Pin()->SelectObject(lsBind.GetObjectGuid());
		if (selectNameSet.Find(lsBind.GetName()))
		{
			for (auto lsTrack : lsBind.GetTracks())
			{
				UMovieSceneTrack* tr = lsTrack;

				if (tr->GetName().Contains(specialName))
					WeakSequencer.Pin()->SelectTrack(tr);
			}
		}
	}

}

void UlcToolSubSystem::selectSpecialNameTrackInAllBinding(FString specialName)
{
	if (!bpBridgetPtr || !bpBridgetPtr->bPasswordCheck)
		return;
	if (specialName == "")
		return;

	if (!initSqPtr())
		return;

	TArray<FMovieSceneBinding>bindArray = WeakSequencer.Pin()->GetRootMovieSceneSequence()->GetMovieScene()->GetBindings();

	TSet<TSharedRef<FSequencerDisplayNode>>lsSet;
	for (int i = 0; i < bindArray.Num(); i++)
	{
		FMovieSceneBinding lsBind = bindArray[i];
		//WeakSequencer.Pin()->SelectObject(lsBind.GetObjectGuid());
		for (auto lsTrack : lsBind.GetTracks())
		{
			UMovieSceneTrack* tr = lsTrack;

			if (tr->GetName().Contains(specialName))
				WeakSequencer.Pin()->SelectTrack(tr);
		}
	}
}


typedef FSequenceRecorder& (UlcToolSubSystem::* pGet)();
pGet* getFSequenceRecorderFunPtr;

FSequenceRecorder* srPtr = nullptr;

typedef UActorRecording* (UlcToolSubSystem::* pAddNewQueuedRecording)(AActor* Actor, UAnimSequence* AnimSequence, float Length);

pAddNewQueuedRecording* addNewQueuedRecording;

static UINT64 funGetFSequenceRecorderFunPtr = 0x6C560;

static UINT64 funAddNewQueuedRecording = 0x3F3B0;

static bool bGetSeqencerRecorderAddress = false;
void UlcToolSubSystem::AddActorsToSequencerRecorder(TArray<AActor*> actors)
{

	if (!bGetSeqencerRecorderAddress)
	{

		//获取进程内sequencer模块的基址
		TArray<lsData>lsArr = GetSequenceRecorderDllAddress();
		for (auto ls : lsArr)
		{
			funGetFSequenceRecorderFunPtr = funGetFSequenceRecorderFunPtr + ls.address;
			funAddNewQueuedRecording = funAddNewQueuedRecording + ls.address;
		}
		getFSequenceRecorderFunPtr = (pGet*)(&funGetFSequenceRecorderFunPtr);
		addNewQueuedRecording = (pAddNewQueuedRecording*)(&funAddNewQueuedRecording);
		bGetSeqencerRecorderAddress = true;

	}
	if (!srPtr)
	{
		FSequenceRecorder& srRef = (((UlcToolSubSystem*)this)->*(*getFSequenceRecorderFunPtr))();
		srPtr = &srRef;
	}


	for (auto it : actors)
	{
		(((UlcToolSubSystem*)srPtr)->*(*addNewQueuedRecording))(it, nullptr, 0);
	}

}

void UlcToolSubSystem::LcAddNewCameraCut(UMovieSceneCameraCutTrack* track, FMovieSceneObjectBindingID CameraBindingID)
{
	if (track)
		track->AddNewCameraCut(CameraBindingID, 0);
}

typedef void (UlcToolSubSystem::* pSetParameterName)(const FString& NewName);

typedef FString(UlcToolSubSystem::* pGetParameterName)();

pSetParameterName* setParameterName;
pGetParameterName* getParameterName;

static UINT64 funSetParameterName = 0x95E3F0;
static UINT64 funGetParameterName = 0x9481B0;

static bool bGetUnrealEdAddress = false;

//void UlcToolSubSystem::SetMaterialAllParameterNodeName(UMaterial* mat, FString prefix, FString checkPrefix, bool bReplace)
//{
//	if (!bpBridgetPtr->bPasswordCheck)
//		return;
//
//	if (!bGetUnrealEdAddress)
//	{
//		//获取进程内sequencer模块的基址
//		TArray<lsData>lsArr = GetMaterialEditorDllAddress();
//		for (auto ls : lsArr)
//		{
//			funSetParameterName = funSetParameterName + ls.address;
//			funGetParameterName = funGetParameterName + ls.address;
//		}
//		setParameterName = (pSetParameterName*)(&funSetParameterName);
//		getParameterName = (pGetParameterName*)(&funGetParameterName);
//		bGetUnrealEdAddress = true;
//	}
//
//
//	TSharedPtr<IMaterialEditor>mePtr;
//	if (mat != NULL)
//	{
//		TSharedPtr< IToolkit > FoundAssetEditor = FToolkitManager::Get().FindEditorForAsset(mat);
//		if (FoundAssetEditor.IsValid())
//		{
//			mePtr = StaticCastSharedPtr<IMaterialEditor>(FoundAssetEditor);
//		}
//	}
//
//	//TSharedPtr<IMaterialEditor>mePtr = FMaterialEditorUtilities::GetIMaterialEditorForObject(mat);
//
//	IMaterialEditor* pIme = mePtr.Get();
//
//	if (!pIme)
//		return;
//
//	FMaterialEditor* pFme = (FMaterialEditor*)pIme;
//	if (!pFme)
//		return;
//
//	DWORD_PTR* lsP = (DWORD_PTR*)(*((UINT64*)(*((DWORD_PTR*)&pFme) + 0x2D0)));
//	if (!lsP)
//		return;
//
//	SGraphEditor** pPtr = (SGraphEditor**)&lsP;
//	if (!pPtr)
//		return;
//
//	SGraphEditor* pp = *pPtr;
//	if (!pp)
//		return;
//
//	//TSharedPtr<class SGraphEditor>* pPtr = (TSharedPtr<class SGraphEditor>*)(*((UINT64*)(*((DWORD_PTR*)&pFme) + 0x2D0)));
//	//前缀筛选
//	if (checkPrefix != "")
//	{
//		for (auto node : pp->GetCurrentGraph()->Nodes)
//		{
//			UMaterialGraphNode* SelectedNode = Cast<UMaterialGraphNode>(node);
//			if (!SelectedNode)
//				continue;
//
//			if (SelectedNode->MaterialExpression->bIsParameterExpression)
//			{
//				FString lsStr = (((UlcToolSubSystem*)SelectedNode)->*(*getParameterName))();
//				int po = lsStr.Find(checkPrefix);
//
//				if (po == 0)
//				{
//					if (lsStr != "")
//					{
//						if (bReplace)
//						{
//							lsStr.RemoveFromStart(checkPrefix);
//							lsStr = prefix + lsStr;
//						}
//						else
//						{
//							lsStr = prefix + lsStr;
//						}
//						(((UlcToolSubSystem*)SelectedNode)->*(*setParameterName))(lsStr);
//					}
//				}
//			}
//		}
//	}
//
//	//const TSet<class UObject*>&ret = pp->GetSelectedNodes();
//
//	//for (auto it : ret)
//	//{
//	//	//选择节点
//	//	UMaterialGraphNode* SelectedNode = Cast<UMaterialGraphNode>(it);
//	//	if (SelectedNode->MaterialExpression->bIsParameterExpression)
//	//	{
//	//		FString lsStr = (((UlcToolSubSystem *)SelectedNode)->*(*getParameterName))();
//	//		if (lsStr != "")
//	//		{
//	//			lsStr = prefix + lsStr;
//	//			(((UlcToolSubSystem *)SelectedNode)->*(*setParameterName))(lsStr);
//	//		}
//	//	}
//	//}
//	pIme->UpdateMaterialAfterGraphChange();
//	mat->MarkPackageDirty();
//}


void UlcToolSubSystem::SetMaterialAllParameterNodeName(UMaterial* mat, FString prefix, FString checkPrefix, bool bReplace)
{
	if (!bpBridgetPtr->bPasswordCheck)
		return;

	TSharedPtr<IMaterialEditor>mePtr;
	if (mat != NULL)
	{
		TSharedPtr< IToolkit > FoundAssetEditor = FToolkitManager::Get().FindEditorForAsset(mat);
		if (FoundAssetEditor.IsValid())
		{
			mePtr = StaticCastSharedPtr<IMaterialEditor>(FoundAssetEditor);
		}
	}

	IMaterialEditor* pIme = mePtr.Get();

	if (!pIme)
		return;

	if (checkPrefix != "")
	{
		for (auto node : pIme->GetGraphEditor()->Nodes)
		{
			UMaterialGraphNode* SelectedNode = Cast<UMaterialGraphNode>(node);
			if (!SelectedNode)
				continue;

			if (SelectedNode->MaterialExpression->bIsParameterExpression)
			{
				FString lsStr = SelectedNode->LcGetParameterName();
				int po = lsStr.Find(checkPrefix);

				if (po == 0)
				{
					if (lsStr != "")
					{
						if (bReplace)
						{
							lsStr.RemoveFromStart(checkPrefix);
							lsStr = prefix + lsStr;
						}
						else
						{
							lsStr = prefix + lsStr;
						}
						SelectedNode->LcSetParameterName(lsStr);
					}
				}
			}
		}
	}

	pIme->UpdateMaterialAfterGraphChange();
	mat->MarkPackageDirty();
}

void UlcToolSubSystem::SetMaterialFunctionAllParameterNodeName(UMaterialFunction* matFun, FString prefix, FString checkPrefix, bool bReplace)
{
	if (!bpBridgetPtr->bPasswordCheck)
		return;

	TSharedPtr<IMaterialEditor>mePtr;
	if (matFun != NULL)
	{
		TSharedPtr< IToolkit > FoundAssetEditor = FToolkitManager::Get().FindEditorForAsset(matFun);
		if (FoundAssetEditor.IsValid())
		{
			mePtr = StaticCastSharedPtr<IMaterialEditor>(FoundAssetEditor);
		}
	}

	IMaterialEditor* pIme = mePtr.Get();

	if (!pIme)
		return;

	if (checkPrefix != "")
	{
		for (auto node : pIme->GetGraphEditor()->Nodes)
		{
			UMaterialGraphNode* SelectedNode = Cast<UMaterialGraphNode>(node);
			if (!SelectedNode)
				continue;

			if (SelectedNode->MaterialExpression->bIsParameterExpression)
			{
				FString lsStr = SelectedNode->LcGetParameterName();
				int po = lsStr.Find(checkPrefix);

				if (po == 0)
				{
					if (lsStr != "")
					{
						if (bReplace)
						{
							lsStr.RemoveFromStart(checkPrefix);
							lsStr = prefix + lsStr;
						}
						else
						{
							lsStr = prefix + lsStr;
						}
						SelectedNode->LcSetParameterName(lsStr);
					}
				}
			}
		}
	}

	pIme->UpdateMaterialAfterGraphChange();
	matFun->MarkPackageDirty();
}



void UlcToolSubSystem::SetMaterialParameterNodeNameInSelect(UMaterial* mat, FString prefix, FString checkPrefix, bool bReplace)
{
	if (!bpBridgetPtr->bPasswordCheck)
		return;

	TSharedPtr<IMaterialEditor>mePtr;
	if (mat != NULL)
	{
		TSharedPtr< IToolkit > FoundAssetEditor = FToolkitManager::Get().FindEditorForAsset(mat);
		if (FoundAssetEditor.IsValid())
		{
			mePtr = StaticCastSharedPtr<IMaterialEditor>(FoundAssetEditor);
		}
	}

	IMaterialEditor* pIme = mePtr.Get();

	const TSet<class UObject*>& ret = pIme->GetSelectedNodes();

	for (auto it : ret)
	{
		UMaterialGraphNode* SelectedNode = Cast<UMaterialGraphNode>(it);
		if (!SelectedNode)
			continue;

		if (SelectedNode->MaterialExpression->bIsParameterExpression)
		{
			FString lsStr = SelectedNode->LcGetParameterName();
			int po = lsStr.Find(checkPrefix);

			if (po == 0)
			{
				if (lsStr != "")
				{
					if (bReplace)
					{
						lsStr.RemoveFromStart(checkPrefix);
						lsStr = prefix + lsStr;
					}
					else
					{
						lsStr = prefix + lsStr;
					}
					SelectedNode->LcSetParameterName(lsStr);
				}
			}
		}
	}
	pIme->UpdateMaterialAfterGraphChange();
	mat->MarkPackageDirty();
}

void UlcToolSubSystem::SetMaterialProperty(UMaterialInstance* const sourMat, UMaterialInstance* changeMat)
{
	if (!bpBridgetPtr || !bpBridgetPtr->bPasswordCheck)
		return;

	UMaterialInstance* sMat = sourMat;

	if (sourMat && changeMat)
	{
		if (sMat->ScalarParameterValues.Num() > 0)
		{
			for (int i = 0; i < sMat->ScalarParameterValues.Num(); i++)
			{
				changeMat->ScalarParameterValues[i] = sMat->ScalarParameterValues[i];
			}
		}
		if (sMat->TextureParameterValues.Num() > 0)
		{
			for (int i = 0; i < sMat->TextureParameterValues.Num(); i++)
			{
				changeMat->TextureParameterValues[i] = sMat->TextureParameterValues[i];
			}
		}
		if (sMat->VectorParameterValues.Num() > 0)
		{
			for (int i = 0; i < sMat->VectorParameterValues.Num(); i++)
			{
				changeMat->VectorParameterValues[i] = sMat->VectorParameterValues[i];
			}
		}
	}
}

void UlcToolSubSystem::AddLevelToSpecialPathFolder(FString levelName, FString folderName)
{
	FWorldBrowserModule& WorldBrowserModule = FModuleManager::GetModuleChecked<FWorldBrowserModule>("WorldBrowser");
	WorldBrowserModule.AddLevelToSpecialPathFolder(levelName, folderName);
}

void UlcToolSubSystem::LockSpecialNameLevels(TSet<FString>levelNames)
{
	FWorldBrowserModule& WorldBrowserModule = FModuleManager::GetModuleChecked<FWorldBrowserModule>("WorldBrowser");

	WorldBrowserModule.LockSpecialNameLevels(levelNames);
}


void UlcToolSubSystem::LcMainmapLevelAutoDispose()
{
	FWorldBrowserModule& WorldBrowserModule = FModuleManager::GetModuleChecked<FWorldBrowserModule>("WorldBrowser");

	WorldBrowserModule.LcMainmapLevelAutoDispose();
}

void UlcToolSubSystem::LockActorArrMovement(TArray<AActor*> actorArr)
{
	GEditor->SelectNone(true, true, true);
	for (auto* it : actorArr)
	{
		if (it)
		{
			GEditor->SelectActor(it, true, true, true, true);
		}
	}
	GEditor->ToggleSelectedActorMovementLock();
}

FTimerHandle openLevelTimerHandle;
void UlcToolSubSystem::LcOpenLevelAndBindCamera(TArray<FString> charNameArr, TArray<FString> mapPathArr)
{
	//GEditor->GetTimerManager()->SetTimer(openLevelTimerHandle,)
	for (int i = 0; i < mapPathArr.Num(); i++)
	{

		FString lsChar = charNameArr[i];

		FString shotMapStr = "LevelSequence'/Game/ani/"
			+ lsChar
			+ FString("/ani_se_")
			+ lsChar
			+ FString(".ani_se_")
			+ lsChar
			+ FString("'");

		UEditorLevelLibrary::LoadLevel(mapPathArr[i]);

		TArray<AActor*>retActor;

		UGameplayStatics::GetAllActorsOfClass(GEngine->GetWorldContexts()[0].World(), ACineCameraActor::StaticClass(), retActor);

		for (auto itActor : retActor)
		{

			FString aniSequencerStr = "LevelSequence'/Game/ani/"
				+ lsChar
				+ FString("/ani_se_")
				+ lsChar
				+ FString(".ani_se_")
				+ lsChar
				+ FString("'");

			ULevelSequence* lsAniSeq = Cast<ULevelSequence>(UEditorAssetLibrary::LoadAsset(aniSequencerStr));

			if (lsAniSeq)
			{
				TArray<UMovieSceneTrack*>allTrack = UMovieSceneSequenceExtensions::GetMasterTracks(lsAniSeq);
				if (allTrack.Num() > 0)
				{
					UMovieSceneTrack* firstTrack = allTrack[0];
					UMovieSceneCameraCutTrack* camTrack = Cast<UMovieSceneCameraCutTrack>(firstTrack);
					if (camTrack)
					{
						TArray<UMovieSceneSection*>retSection = camTrack->GetAllSections();
						if (retSection.Num() > 0)
						{
							UMovieSceneSection* firstSection = retSection[0];
							UMovieSceneCameraCutSection* camSection = Cast<UMovieSceneCameraCutSection>(firstSection);
							if (camSection)
							{
								FSequencerBindingProxy lsBind = UMovieSceneSequenceExtensions::AddPossessable(lsAniSeq, &itActor[0]);
								FMovieSceneObjectBindingID lsBindId = UMovieSceneSequenceExtensions::MakeBindingID(lsAniSeq, lsBind, EMovieSceneObjectBindingSpace::Local);
								camSection->SetCameraBindingID(lsBindId);
							}
						}
					}
				}
			}
			UE_LOG(LogTemp, Warning, TEXT("the object is %s"), *itActor->GetName());
		}
	}
}

void UlcToolSubSystem::LcRunCmdWithSave(FString theKey, FString theValue)
{
	//验证检查
	if (!bpBridgetPtr->bPasswordCheck)
		return;
	ULcSettingObj* lsSetting = Cast<ULcSettingObj>(UEditorAssetLibrary::LoadAsset("LcSettingObj'/Game/lig/cmdSetting.cmdSetting'"));
	if (!lsSetting)
	{
		const FString Dot(TEXT("."));
		FString Path = "/game/lig/";
		FString AssetPath = "cmdSetting";
		FString AssetName = "cmdSetting";

		AssetPath /= AssetName;
		AssetPath += Dot + AssetName;
		AssetPath = Path + AssetName;

		FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
		FAssetData AssetData = AssetRegistryModule.Get().GetAssetByObjectPath(*AssetPath);

		// if object with same name exists, try a different name until we don't find one
		int32 ExtensionIndex = 0;
		while (AssetData.IsValid() && AssetData.GetClass() == ULcSettingObj::StaticClass())
		{
			AssetName = FString::Printf(TEXT("%s_%d"), *AssetName, ExtensionIndex);
			AssetPath = (Path / AssetName) + Dot + AssetName;
			AssetData = AssetRegistryModule.Get().GetAssetByObjectPath(*AssetPath);

			ExtensionIndex++;
		}

		// Create the new asset in the package we just made
		//AssetPath = (Path / AssetName);
		AssetPath = Path + AssetName;

		FString FileName;
		if (FPackageName::TryConvertLongPackageNameToFilename(AssetPath, FileName))
		{
			UObject* Package = CreatePackage(nullptr, *AssetPath);
			lsSetting = NewObject<ULcSettingObj>(Package, *AssetName, RF_Public | RF_Standalone);
			if (lsSetting)
			{
				lsSetting->cmdList.Add(theKey, theValue);
				FAssetRegistryModule::AssetCreated(lsSetting);
				lsSetting->MarkPackageDirty();
				TArray<UPackage*> Packages;
				Packages.Add(Package->GetOutermost()); // Fully load and check out is done in UEditorLoadingAndSavingUtils::SavePackages
				UEditorLoadingAndSavingUtils::SavePackages(Packages, false);

				FString cmd = theKey + FString(" ") + theValue;

				GEngine->Exec(GEngine->GetWorldContexts()[0].World(), *cmd);
			}
		}
	}
	//批量输入指令
	else
	{
		lsSetting->cmdList.Add(theKey, theValue);
		UEditorAssetLibrary::SaveAsset(FString("LcSettingObj'/Game/lig/cmdSetting.cmdSetting'"), false);

		FString cmd = theKey + FString(" ") + theValue;

		GEngine->Exec(GEngine->GetWorldContexts()[0].World(), *cmd);
	}

}


void UlcToolSubSystem::SetLandscapeMat(ALandscape* landActor, UMaterialInterface* mat)
{
	//TArray<AActor*>outActor;
	//UGameplayStatics::GetAllActorsOfClass(GEditor->GetWorld(), ALandscape::StaticClass(),outActor);

	//if (outActor.Num() <= 0)
	//	return;

	//ALandscape* land = CastChecked<ALandscape>(outActor[0]);

	FLandscapeProxyMaterialOverride landOverMat;
	landOverMat.LODIndex = 0;
	landOverMat.Material = mat;

	if (landActor)
	{
		landActor->LandscapeMaterialsOverride.Add(landOverMat);

		landActor->RequestLayersContentUpdateForceAll(Update_All);

		ULandscapeInfo* Info = landActor->GetLandscapeInfo();

		if (Info)
			Info->UpdateLayerInfoMap(landActor);
		landActor->UpdateAllComponentMaterialInstances();

	}

}

void UlcToolSubSystem::ClearLandscapeMat(ALandscape* landActor)
{
	if (landActor)
	{
		if (landActor->LandscapeMaterialsOverride.Num() > 0)
		{
			landActor->LandscapeMaterialsOverride.Empty();


			landActor->RequestLayersContentUpdateForceAll(Update_All);

			ULandscapeInfo* Info = landActor->GetLandscapeInfo();

			if (Info)
				Info->UpdateLayerInfoMap(landActor);
			landActor->UpdateAllComponentMaterialInstances();


		}


	}
}
PRAGMA_DISABLE_OPTIMIZATION
FHoudiniExportData UlcToolSubSystem::ParseHoudiniExportData(FString filePath)
{
	TArray<uint8>data;
	if (!FFileHelper::LoadFileToArray(data, *filePath))
	{
		FString str = FString::Printf(TEXT("--- FFILEHELPER:>> Invalid File"));
		GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Green, str);
	}

	FMemoryReader fromBinary = FMemoryReader(data, true);
	FHoudiniExportData lsData;

	fromBinary.Seek(0);

	fromBinary << lsData.boneNumber;
	fromBinary << lsData.frameNumber;
	fromBinary << lsData.frameRate;

	TArray<FHoudiniExportData>fValueArr;

	for (int i = 0; i < lsData.frameNumber; i++)
	{
		FHoudiniFrameData lsFrameData;
		for (int j = 0; j < lsData.boneNumber; j++)
		{
			FVector lsV;
			fromBinary << lsV;
			float fY = lsV.Y;
			float fZ = lsV.Z;
			lsV.Y = fZ;
			lsV.Z = fY;

			lsFrameData.positionData.Add(lsV);
		}
		lsData.frameData.Add(lsFrameData);

		for (int j = 0; j < lsData.boneNumber; j++)
		{
			FVector4 lsV;
			fromBinary << lsV;
			lsData.frameData[i].quRotationData.Add(lsV);
		}
	}
	return lsData;

	UE_LOG(LogTemp, Warning, TEXT("the num is %d,%d,%d,%d"), lsData.boneNumber, lsData.frameNumber, lsData.frameRate, fValueArr.Num());
}
void UlcToolSubSystem::ImportAnimation(FString importFilePath, FString assetPath, FString animName, USkeletalMesh* targetMesh)
{
	if (!targetMesh)
		return;

	FHoudiniExportData lsData = ParseHoudiniExportData(importFilePath);

	const FString Dot(TEXT("."));
	FString AssetPath = assetPath;
	FString AssetName = animName;

	AssetPath /= AssetName;
	AssetPath += Dot + AssetName;

	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
	FAssetData AssetData = AssetRegistryModule.Get().GetAssetByObjectPath(*AssetPath);

	// if object with same name exists, try a different name until we don't find one
	int32 ExtensionIndex = 0;
	while (AssetData.IsValid() && AssetData.GetClass() == UAnimSequence::StaticClass())
	{
		AssetName = FString::Printf(TEXT("%s_%d"), *animName, ExtensionIndex);
		AssetPath = (assetPath / AssetName) + Dot + AssetName;
		AssetData = AssetRegistryModule.Get().GetAssetByObjectPath(*AssetPath);

		ExtensionIndex++;
	}

	// Create the new asset in the package we just made
	AssetPath = (assetPath / AssetName);

	FString FileName;
	UAnimSequence* pAnim = nullptr;
	if (FPackageName::TryConvertLongPackageNameToFilename(AssetPath, FileName))
	{
		UObject* Package = CreatePackage(nullptr, *AssetPath);
		pAnim = NewObject<UAnimSequence>(Package, *AssetName, RF_Public | RF_Standalone);
		if (pAnim)
		{
			FAssetRegistryModule::AssetCreated(pAnim);
			pAnim->SetSkeleton(targetMesh->Skeleton);

			FRawAnimSequenceTrack lsTrack;

			for (int32 BoneIndex = 0; BoneIndex < lsData.boneNumber; ++BoneIndex)
			{
				// verify if this bone exists in skeleton
				const int32 BoneTreeIndex = targetMesh->Skeleton->GetSkeletonBoneIndexFromMeshBoneIndex(targetMesh, BoneIndex);
				if (BoneTreeIndex != INDEX_NONE)
				{
					// add tracks for the bone existing
					FName BoneTreeName = targetMesh->Skeleton->GetReferenceSkeleton().GetBoneName(BoneTreeIndex);
					pAnim->AddNewRawTrack(BoneTreeName);
				}
			}

			//pAnim->AddNewRawTrack(FName("lsTrack"));

			USkeleton* AnimSkeleton = pAnim->GetSkeleton();
			for (int frameNum = 0; frameNum < lsData.frameData.Num(); frameNum++)
			{
				for (int32 TrackIndex = 0; TrackIndex < pAnim->GetRawAnimationData().Num(); ++TrackIndex)
				{
					// verify if this bone exists in skeleton
					int32 BoneTreeIndex = pAnim->GetSkeletonIndexFromRawDataTrackIndex(TrackIndex);
					if (BoneTreeIndex != INDEX_NONE)
					{
						FTransform LocalTransform;
						// if record local to world, we'd like to consider component to world to be in root
						FHoudiniFrameData lsFrameData = lsData.frameData[frameNum];

						int32 BoneIndex = AnimSkeleton->GetMeshBoneIndexFromSkeletonBoneIndex(targetMesh, BoneTreeIndex);

						//for (int i = 0; i < lsFrameData.positionData.Num(); i++)
						{

							FRawAnimSequenceTrack& RawTrack = pAnim->GetRawAnimationTrack(TrackIndex);

							LocalTransform.SetTranslation(lsFrameData.positionData[TrackIndex]);
							FQuat lsQ;
							lsQ.X = lsFrameData.quRotationData[TrackIndex].X;
							lsQ.Y = lsFrameData.quRotationData[TrackIndex].Y;
							lsQ.Z = lsFrameData.quRotationData[TrackIndex].Z;
							lsQ.W = lsFrameData.quRotationData[TrackIndex].W;
							LocalTransform.SetRotation(lsQ);


							int32 ParentIndex = targetMesh->RefSkeleton.GetParentIndex(TrackIndex);
							if (ParentIndex != -1)
							{
								FTransform parentTrans;
								parentTrans.SetTranslation(lsFrameData.positionData[ParentIndex]);

								lsQ.X = lsFrameData.quRotationData[ParentIndex].X;
								lsQ.Y = lsFrameData.quRotationData[ParentIndex].Y;
								lsQ.Z = lsFrameData.quRotationData[ParentIndex].Z;
								lsQ.W = lsFrameData.quRotationData[ParentIndex].W;
								parentTrans.SetRotation(lsQ);
								parentTrans.SetScale3D(FVector(1, 1, 1));

								LocalTransform = LocalTransform.GetRelativeTransform(parentTrans);
							}

							RawTrack.PosKeys.Add(LocalTransform.GetTranslation());
							RawTrack.RotKeys.Add(LocalTransform.GetRotation());
							RawTrack.ScaleKeys.Add(FVector(1, 1, 1));
						}
					}
				}
			}
			pAnim->SetRawNumberOfFrame(lsData.frameNumber);
			pAnim->SequenceLength = lsData.frameNumber / lsData.frameRate;
			pAnim->ImportFileFramerate = lsData.frameRate;


			//AnimationObject->RawCurveData.RemoveRedundantKeys();
			pAnim->PostProcessSequence();

			pAnim->MarkPackageDirty();
		}
	}

	if (!pAnim)
		return;
}
PRAGMA_ENABLE_OPTIMIZATION

void UlcToolSubSystem::SelectALlSpecialPrefixNode(UMaterial* mat, FString checkPrefix)
{
	if (!bpBridgetPtr->bPasswordCheck)
		return;

	TSharedPtr<IMaterialEditor>mePtr;
	if (mat != NULL)
	{
		TSharedPtr< IToolkit > FoundAssetEditor = FToolkitManager::Get().FindEditorForAsset(mat);
		if (FoundAssetEditor.IsValid())
		{
			mePtr = StaticCastSharedPtr<IMaterialEditor>(FoundAssetEditor);
		}
	}

	IMaterialEditor* pIme = mePtr.Get();

	//TSharedPtr<class SGraphEditor>* pPtr = (TSharedPtr<class SGraphEditor>*)(*((UINT64*)(*((DWORD_PTR*)&pFme) + 0x2D0)));
	//前缀筛选
	if (checkPrefix != "")
	{
		for (auto node : pIme->GetGraphEditor()->Nodes)
		{
			UMaterialGraphNode* SelectedNode = Cast<UMaterialGraphNode>(node);
			if (!SelectedNode)
				continue;

			if (SelectedNode->MaterialExpression->bIsParameterExpression)
			{
				FString lsStr = SelectedNode->LcGetParameterName();
				int po = lsStr.Find(checkPrefix);

				if (po == 0)
				{
					pIme->AddToSelection(SelectedNode->MaterialExpression);
				}
			}
		}
	}
}

void UlcToolSubSystem::SelectAllMatFunSpecialPrefixNode(UMaterialFunction* matFun, FString checkPrefix)
{
	if (!bpBridgetPtr->bPasswordCheck)
		return;

	TSharedPtr<IMaterialEditor>mePtr;
	if (matFun != NULL)
	{
		TSharedPtr< IToolkit > FoundAssetEditor = FToolkitManager::Get().FindEditorForAsset(matFun);
		if (FoundAssetEditor.IsValid())
		{
			mePtr = StaticCastSharedPtr<IMaterialEditor>(FoundAssetEditor);
		}
	}

	IMaterialEditor* pIme = mePtr.Get();

	//TSharedPtr<class SGraphEditor>* pPtr = (TSharedPtr<class SGraphEditor>*)(*((UINT64*)(*((DWORD_PTR*)&pFme) + 0x2D0)));
	//前缀筛选
	if (checkPrefix != "")
	{
		for (auto node : pIme->GetGraphEditor()->Nodes)
		{
			UMaterialGraphNode* SelectedNode = Cast<UMaterialGraphNode>(node);
			if (!SelectedNode)
				continue;

			if (SelectedNode->MaterialExpression->bIsParameterExpression)
			{
				FString lsStr = SelectedNode->LcGetParameterName();
				int po = lsStr.Find(checkPrefix);

				if (po == 0)
				{
					pIme->AddToSelection(SelectedNode->MaterialExpression);
				}
			}
		}
	}

}

void UlcToolSubSystem::DeleteSpecialPrefixNodePrefix(UMaterial* mat, FString checkPrefix)
{
	if (!bpBridgetPtr->bPasswordCheck)
		return;

	TSharedPtr<IMaterialEditor>mePtr;
	if (mat != NULL)
	{
		TSharedPtr< IToolkit > FoundAssetEditor = FToolkitManager::Get().FindEditorForAsset(mat);
		if (FoundAssetEditor.IsValid())
		{
			mePtr = StaticCastSharedPtr<IMaterialEditor>(FoundAssetEditor);
		}
	}

	IMaterialEditor* pIme = mePtr.Get();
	if (!pIme)
		return;

	//TSharedPtr<class SGraphEditor>* pPtr = (TSharedPtr<class SGraphEditor>*)(*((UINT64*)(*((DWORD_PTR*)&pFme) + 0x2D0)));
	//前缀筛选
	if (checkPrefix != "")
	{
		for (auto node : pIme->GetGraphEditor()->Nodes)
		{
			UMaterialGraphNode* SelectedNode = Cast<UMaterialGraphNode>(node);
			if (!SelectedNode)
				continue;

			if (SelectedNode->MaterialExpression->bIsParameterExpression)
			{
				FString lsStr = SelectedNode->LcGetParameterName();
				int po = lsStr.Find(checkPrefix);

				if (po == 0)
				{
					if (lsStr != "")
					{
						lsStr.RemoveFromStart(checkPrefix);
						SelectedNode->LcSetParameterName(lsStr);
					}
				}
			}
		}
	}
}

void UlcToolSubSystem::DeleteMatFunSpecialPrefixNodePrefix(UMaterialFunction* matFun, FString checkPrefix)
{
	if (!bpBridgetPtr->bPasswordCheck)
		return;

	TSharedPtr<IMaterialEditor>mePtr;
	if (matFun != NULL)
	{
		TSharedPtr< IToolkit > FoundAssetEditor = FToolkitManager::Get().FindEditorForAsset(matFun);
		if (FoundAssetEditor.IsValid())
		{
			mePtr = StaticCastSharedPtr<IMaterialEditor>(FoundAssetEditor);
		}
	}

	IMaterialEditor* pIme = mePtr.Get();
	if (!pIme)
		return;

	//TSharedPtr<class SGraphEditor>* pPtr = (TSharedPtr<class SGraphEditor>*)(*((UINT64*)(*((DWORD_PTR*)&pFme) + 0x2D0)));
	//前缀筛选
	if (checkPrefix != "")
	{
		for (auto node : pIme->GetGraphEditor()->Nodes)
		{
			UMaterialGraphNode* SelectedNode = Cast<UMaterialGraphNode>(node);
			if (!SelectedNode)
				continue;

			if (SelectedNode->MaterialExpression->bIsParameterExpression)
			{
				FString lsStr = SelectedNode->LcGetParameterName();
				int po = lsStr.Find(checkPrefix);

				if (po == 0)
				{
					if (lsStr != "")
					{
						lsStr.RemoveFromStart(checkPrefix);
						SelectedNode->LcSetParameterName(lsStr);
					}
				}
			}
		}
	}

}

void UlcToolSubSystem::SetMaterialFunctionParameterNodeNameInSelect(UMaterialFunction* matFun, FString prefix, FString checkPrefix, bool bReplace)
{
	if (!bpBridgetPtr->bPasswordCheck)
		return;

	TSharedPtr<IMaterialEditor>mePtr;
	if (matFun != NULL)
	{
		TSharedPtr< IToolkit > FoundAssetEditor = FToolkitManager::Get().FindEditorForAsset(matFun);
		if (FoundAssetEditor.IsValid())
		{
			mePtr = StaticCastSharedPtr<IMaterialEditor>(FoundAssetEditor);
		}
	}

	IMaterialEditor* pIme = mePtr.Get();

	const TSet<class UObject*>& ret = pIme->GetSelectedNodes();

	for (auto it : ret)
	{
		UMaterialGraphNode* SelectedNode = Cast<UMaterialGraphNode>(it);
		if (!SelectedNode)
			continue;

		if (SelectedNode->MaterialExpression->bIsParameterExpression)
		{
			FString lsStr = SelectedNode->LcGetParameterName();
			int po = lsStr.Find(checkPrefix);

			if (po == 0)
			{
				if (lsStr != "")
				{
					if (bReplace)
					{
						lsStr.RemoveFromStart(checkPrefix);
						lsStr = prefix + lsStr;
					}
					else
					{
						lsStr = prefix + lsStr;
					}
					SelectedNode->LcSetParameterName(lsStr);
				}
			}
		}
	}
	pIme->UpdateMaterialAfterGraphChange();
	matFun->MarkPackageDirty();
}

void UlcToolSubSystem::AddMaterialParameterNodePrefix(UMaterial* matFun, FString prefix, FString checkPrefix)
{
	if (!bpBridgetPtr->bPasswordCheck)
		return;

	TSharedPtr<IMaterialEditor>mePtr;
	if (matFun != NULL)
	{
		TSharedPtr< IToolkit > FoundAssetEditor = FToolkitManager::Get().FindEditorForAsset(matFun);
		if (FoundAssetEditor.IsValid())
		{
			mePtr = StaticCastSharedPtr<IMaterialEditor>(FoundAssetEditor);
		}
	}

	IMaterialEditor* pIme = mePtr.Get();


	for (auto node : pIme->GetGraphEditor()->Nodes)
	{
		UMaterialGraphNode* SelectedNode = Cast<UMaterialGraphNode>(node);
		if (!SelectedNode)
			continue;

		if (SelectedNode->MaterialExpression->bIsParameterExpression)
		{
			FString lsStr = prefix + SelectedNode->LcGetParameterName();

			SelectedNode->LcSetParameterName(lsStr);
		}
	}
	pIme->UpdateMaterialAfterGraphChange();
	matFun->MarkPackageDirty();
}

void UlcToolSubSystem::AddMaterialFunctionParameterNodePrefix(UMaterialFunction* matFun, FString prefix, FString checkPrefix)
{
	if (!bpBridgetPtr->bPasswordCheck)
		return;

	TSharedPtr<IMaterialEditor>mePtr;
	if (matFun != NULL)
	{
		TSharedPtr< IToolkit > FoundAssetEditor = FToolkitManager::Get().FindEditorForAsset(matFun);
		if (FoundAssetEditor.IsValid())
		{
			mePtr = StaticCastSharedPtr<IMaterialEditor>(FoundAssetEditor);
		}
	}

	IMaterialEditor* pIme = mePtr.Get();

	for (auto node : pIme->GetGraphEditor()->Nodes)
	{
		UMaterialGraphNode* SelectedNode = Cast<UMaterialGraphNode>(node);
		if (!SelectedNode)
			continue;

		if (SelectedNode->MaterialExpression->bIsParameterExpression)
		{
			FString lsStr = prefix + SelectedNode->LcGetParameterName();

			SelectedNode->LcSetParameterName(lsStr);
		}
	}
	pIme->UpdateMaterialAfterGraphChange();
	matFun->MarkPackageDirty();
}

void UlcToolSubSystem::AddMaterialParameterNodePrefixInSelect(UMaterial* matFun, FString prefix, FString checkPrefix)
{
	if (!bpBridgetPtr->bPasswordCheck)
		return;

	TSharedPtr<IMaterialEditor>mePtr;
	if (matFun != NULL)
	{
		TSharedPtr< IToolkit > FoundAssetEditor = FToolkitManager::Get().FindEditorForAsset(matFun);
		if (FoundAssetEditor.IsValid())
		{
			mePtr = StaticCastSharedPtr<IMaterialEditor>(FoundAssetEditor);
		}
	}

	IMaterialEditor* pIme = mePtr.Get();

	const TSet<class UObject*>& ret = pIme->GetSelectedNodes();

	for (auto it : ret)
	{
		UMaterialGraphNode* SelectedNode = Cast<UMaterialGraphNode>(it);
		if (!SelectedNode)
			continue;

		if (SelectedNode->MaterialExpression->bIsParameterExpression)
		{
			FString lsStr = SelectedNode->LcGetParameterName();
			{
				if (lsStr != "")
				{
					lsStr = prefix + lsStr;
					SelectedNode->LcSetParameterName(lsStr);
				}
			}
		}
	}
	pIme->UpdateMaterialAfterGraphChange();
	matFun->MarkPackageDirty();
}

void UlcToolSubSystem::AddMaterialFunctionParameterNodePrefixInSelect(UMaterialFunction* matFun, FString prefix, FString checkPrefix)
{
	if (!bpBridgetPtr->bPasswordCheck)
		return;

	TSharedPtr<IMaterialEditor>mePtr;
	if (matFun != NULL)
	{
		TSharedPtr< IToolkit > FoundAssetEditor = FToolkitManager::Get().FindEditorForAsset(matFun);
		if (FoundAssetEditor.IsValid())
		{
			mePtr = StaticCastSharedPtr<IMaterialEditor>(FoundAssetEditor);
		}
	}

	IMaterialEditor* pIme = mePtr.Get();

	const TSet<class UObject*>& ret = pIme->GetSelectedNodes();

	for (auto it : ret)
	{
		UMaterialGraphNode* SelectedNode = Cast<UMaterialGraphNode>(it);
		if (!SelectedNode)
			continue;

		if (SelectedNode->MaterialExpression->bIsParameterExpression)
		{
			FString lsStr = SelectedNode->LcGetParameterName();
			{
				lsStr = prefix + lsStr;
				SelectedNode->LcSetParameterName(lsStr);
			}
		}
	}
	pIme->UpdateMaterialAfterGraphChange();
	matFun->MarkPackageDirty();
}

void UlcToolSubSystem::SetMaterialAllParameterInSameGroup(UMaterial* mat, FString groupName)
{
	UMaterial* Material = mat;
	FString GroupName = groupName;

	TSharedPtr<IMaterialEditor>mePtr;
	if (Material != NULL)
	{
		TSharedPtr< IToolkit > FoundAssetEditor = FToolkitManager::Get().FindEditorForAsset(mat);
		if (FoundAssetEditor.IsValid())
		{
			mePtr = StaticCastSharedPtr<IMaterialEditor>(FoundAssetEditor);
		}
	}

	IMaterialEditor* pIme = mePtr.Get();


	for (int32 MaterialExpressionIndex = 0; MaterialExpressionIndex < Material->Expressions.Num(); ++MaterialExpressionIndex)
	{
		UMaterialExpression* MaterialExpression = Material->Expressions[MaterialExpressionIndex];
		UMaterialExpressionParameter* Param = Cast<UMaterialExpressionParameter>(MaterialExpression);
		UMaterialExpressionTextureSampleParameter* TextureS = Cast<UMaterialExpressionTextureSampleParameter>(MaterialExpression);
		UMaterialExpressionRuntimeVirtualTextureSampleParameter* RVTS = Cast<UMaterialExpressionRuntimeVirtualTextureSampleParameter>(MaterialExpression);
		UMaterialExpressionFontSampleParameter* FontS = Cast<UMaterialExpressionFontSampleParameter>(MaterialExpression);
		if (Param)
		{
			Param->Group = FName(GroupName);
			Material->AttemptInsertNewGroupName(GroupName);
		}
		else if (TextureS)
		{
			TextureS->Group = FName(GroupName);
			Material->AttemptInsertNewGroupName(GroupName);
		}
		else if (RVTS)
		{
			RVTS->Group = FName(GroupName);
			Material->AttemptInsertNewGroupName(GroupName);
		}
		else if (FontS)
		{
			RVTS->Group = FName(GroupName);
			Material->AttemptInsertNewGroupName(GroupName);
		}
	}
	Material->MarkPackageDirty();
}

void UlcToolSubSystem::SetMaterialFunctionAllParameterInSameGroup(UMaterialFunction* mat, FString groupName)
{
	UMaterialFunction* Material = mat;
	FString GroupName = groupName;

	TSharedPtr<IMaterialEditor>mePtr;
	if (Material != NULL)
	{
		TSharedPtr< IToolkit > FoundAssetEditor = FToolkitManager::Get().FindEditorForAsset(mat);
		if (FoundAssetEditor.IsValid())
		{
			mePtr = StaticCastSharedPtr<IMaterialEditor>(FoundAssetEditor);
		}
	}

	IMaterialEditor* pIme = mePtr.Get();


	for (int32 MaterialExpressionIndex = 0; MaterialExpressionIndex < Material->FunctionExpressions.Num(); ++MaterialExpressionIndex)
	{
		UMaterialExpression* MaterialExpression = Material->FunctionExpressions[MaterialExpressionIndex];
		UMaterialExpressionParameter* Param = Cast<UMaterialExpressionParameter>(MaterialExpression);
		UMaterialExpressionTextureSampleParameter* TextureS = Cast<UMaterialExpressionTextureSampleParameter>(MaterialExpression);
		UMaterialExpressionRuntimeVirtualTextureSampleParameter* RVTS = Cast<UMaterialExpressionRuntimeVirtualTextureSampleParameter>(MaterialExpression);
		UMaterialExpressionFontSampleParameter* FontS = Cast<UMaterialExpressionFontSampleParameter>(MaterialExpression);
		if (Param)
		{
			Param->Group = FName(GroupName);
			Material->AttemptInsertNewGroupName(GroupName);
		}
		else if (TextureS)
		{
			TextureS->Group = FName(GroupName);
			Material->AttemptInsertNewGroupName(GroupName);
		}
		else if (RVTS)
		{
			RVTS->Group = FName(GroupName);
			Material->AttemptInsertNewGroupName(GroupName);
		}
		else if (FontS)
		{
			RVTS->Group = FName(GroupName);
			Material->AttemptInsertNewGroupName(GroupName);
		}
	}

	Material->MarkPackageDirty();
}

void UlcToolSubSystem::SelectAllParamter(UMaterial* mat)
{
	if (!bpBridgetPtr->bPasswordCheck)
		return;

	TSharedPtr<IMaterialEditor>mePtr;
	if (mat != NULL)
	{
		TSharedPtr< IToolkit > FoundAssetEditor = FToolkitManager::Get().FindEditorForAsset(mat);
		if (FoundAssetEditor.IsValid())
		{
			mePtr = StaticCastSharedPtr<IMaterialEditor>(FoundAssetEditor);
		}
	}

	IMaterialEditor* pIme = mePtr.Get();
	if (!pIme)
		return;

	//TSharedPtr<class SGraphEditor>* pPtr = (TSharedPtr<class SGraphEditor>*)(*((UINT64*)(*((DWORD_PTR*)&pFme) + 0x2D0)));
	//前缀筛选
	for (auto node : pIme->GetGraphEditor()->Nodes)
	{
		UMaterialGraphNode* SelectedNode = Cast<UMaterialGraphNode>(node);
		if (!SelectedNode)
			continue;

		if (SelectedNode->MaterialExpression->bIsParameterExpression)
		{
			pIme->AddToSelection(SelectedNode->MaterialExpression);
		}
	}
}

void UlcToolSubSystem::SelectAllMatFunParamter(UMaterialFunction* matFun)
{
	if (!bpBridgetPtr->bPasswordCheck)
		return;

	TSharedPtr<IMaterialEditor>mePtr;
	if (matFun != NULL)
	{
		TSharedPtr< IToolkit > FoundAssetEditor = FToolkitManager::Get().FindEditorForAsset(matFun);
		if (FoundAssetEditor.IsValid())
		{
			mePtr = StaticCastSharedPtr<IMaterialEditor>(FoundAssetEditor);
		}
	}

	IMaterialEditor* pIme = mePtr.Get();
	if (!pIme)
		return;

	//TSharedPtr<class SGraphEditor>* pPtr = (TSharedPtr<class SGraphEditor>*)(*((UINT64*)(*((DWORD_PTR*)&pFme) + 0x2D0)));
	//前缀筛选
	for (auto node : pIme->GetGraphEditor()->Nodes)
	{
		UMaterialGraphNode* SelectedNode = Cast<UMaterialGraphNode>(node);
		if (!SelectedNode)
			continue;

		if (SelectedNode->MaterialExpression->bIsParameterExpression)
		{
			pIme->AddToSelection(SelectedNode->MaterialExpression);
		}
	}

}


void UlcToolSubSystem::testFeature()
{

	WeakSequencer.Pin()->EmptySelection();

	TArray<FMovieSceneBinding>arr = WeakSequencer.Pin()->GetRootMovieSceneSequence()->GetMovieScene()->GetBindings();

	TSet<TSharedRef<FSequencerDisplayNode>>lsSet;
	for (int i = 0; i < arr.Num(); i++)
	{
		FMovieSceneBinding lsBind = arr[i];
		//WeakSequencer.Pin()->SelectObject(lsBind.GetObjectGuid());

		for (auto lsTrack : lsBind.GetTracks())
		{
			UMovieSceneTrack* tr = lsTrack;
			WeakSequencer.Pin()->SelectTrack(tr);
		}
	}
}



TArray<lsData> GetProcessBaseAddress()
{
	DWORD_PTR   baseAddress = 0;

	DWORD_PTR processId = GetCurrentProcessId();

	HANDLE      processHandle = OpenProcess(PROCESS_ALL_ACCESS, false, processId);
	//HMODULE     *moduleArray;
	//LPBYTE      moduleArrayBytes;
	DWORD       bytesRequired;

	HMODULE hMods[1024];

	//TArray<DWORD_PTR>ret;
	TArray<lsData>strArr;


	if (EnumProcessModules(processHandle, hMods, sizeof(hMods), &bytesRequired))
	{
		for (int i = 0; i < (bytesRequired / sizeof(HMODULE)); i++)
		{
			TCHAR szModName[MAX_PATH];

			// Get the full path to the module's file.

			if (GetModuleFileNameEx(processHandle, hMods[i], szModName,
				sizeof(szModName) / sizeof(TCHAR)))
			{
				// Print the module name and handle value.
				FString lsStr(szModName);
				FString ls2 = FPaths::GetBaseFilename(lsStr) + ".dll";

				if (ls2 == "UE4Editor-Sequencer.dll")
				{
					lsData data;
					data.dllname = lsStr;
					data.address = (DWORD_PTR)hMods[i];

					strArr.Add(data);
				}


				//_tprintf(TEXT("\t%s (0x%08X)\n"), szModName, hMods[i]);
			}
		}
	}
	/*
		if (processHandle)
		{
			if (EnumProcessModules(processHandle, NULL, 0, &bytesRequired))
			{
				if (bytesRequired)
				{
					moduleArrayBytes = (LPBYTE)LocalAlloc(LPTR, bytesRequired);

					if (moduleArrayBytes)
					{
						unsigned int moduleCount;

						moduleCount = bytesRequired / sizeof(HMODULE);
						moduleArray = (HMODULE *)moduleArrayBytes;

						if (EnumProcessModulesEx(processHandle, moduleArray, bytesRequired, &bytesRequired, LIST_MODULES_64BIT))
						{
							for (unsigned int i = 0; i < moduleCount; i++)
							{
								baseAddress = (DWORD_PTR)moduleArray[i];

								MODULEINFO lsInfo;

								GetModuleFileNameEx(processHandle,baseAddress,)
									strArr.Add(baseAddress);
							}
						}

						LocalFree(moduleArrayBytes);
					}
				}
			}
			CloseHandle(processHandle);
		}
	*/
	return strArr;
}

//void LcGetFile(FString destinationPath)
//{
//	TArray<FString> OpenFilenames;
//	TArray<FString> retArr;
//	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
//	bool bOpened = false;
//	if (DesktopPlatform != NULL)
//	{
//		//TSharedPtr<SWindow> ParentWindow = FSlateApplication::Get().FindWidgetWindow(SourceFileValueWidget.ToSharedRef());
//		//void* ParentWindowHandle = (ParentWindow.IsValid() && ParentWindow->GetNativeWindow().IsValid()) ? ParentWindow->GetNativeWindow()->GetOSWindowHandle() : nullptr;
//
//		FString DefaultFile = TEXT("");
//		FString DefaultPath = TEXT("");
//
//		DefaultFile = TEXT("");
//
//		//bOpened = DesktopPlatform->OpenFileDialog(
//		bOpened = DesktopPlatform->SaveFileDialog(
//			NULL,
//			TEXT("Select file.."),
//			DefaultPath,
//			DefaultFile,
//			//TEXT("file (*.fbx)|*.fbx|OBJ file (*.obj)|*.obj"),
//			TEXT("*"),
//			EFileDialogFlags::None,
//			OpenFilenames);
//	}
//
//	if (OpenFilenames.Num() > 0)
//	{
//	
//		struct FDirVisitor : public IPlatformFile::FDirectoryVisitor
//		{
//
//			TArray<FString>retArr;
//			FDirVisitor(TArray<FString>retArr)
//			{
//			}
//
//			virtual bool Visit(const TCHAR* FilenameOrDirectory, bool bIsDirectory) override
//			{
//				retArr.Add(FString(FilenameOrDirectory));
//				return true; // continue searching
//			}
//
//			void GetResult(TArray<FString>& inRetArr)
//			{
//				inRetArr = retArr;
//			}
//		};
//		FDirVisitor visitor = FDirVisitor(retArr);
//		IFileManager::Get().IterateDirectory(*OpenFilenames[0], visitor);
//		visitor.GetResult(retArr);
//	}
//
//	if (retArr.Num() > 0)
//	{
//		UlcToolSubSystem::getImportSysPtr()->ImportFile(retArr, destinationPath);
//	}
//
//}

/***
调用对象 FSequencer
TSharedRef<FSequencerNodeTree> fs = (fakeLcToolSubSystemPtr->*(*getNodeTreeFunPtr))();
***/
typedef TSharedRef<FSequencerNodeTree>(UlcToolSubSystem::* pGetNodeTree)();
pGetNodeTree* getNodeTreeFunPtr;

/*
调用对象  FSequencerNodeTree
const TArray< TSharedRef<FSequencerDisplayNode> >&displayNodeArr = (fakeLcToolSubSystemPtr->*(*getRootNodesFunPtr))();
*/
typedef const TArray< TSharedRef<FSequencerDisplayNode> >& (UlcToolSubSystem::* pGetRootNodes)() const;
pGetRootNodes* getRootNodesFunPtr;

/*
调用对象  FSequencer ->	virtual FSequencerSelection& GetSelection() override;
*/
typedef FSequencerSelection& (UlcToolSubSystem::* pGetSelection)();
pGetSelection* getSelectionFunPtr;

/*
调用对象  Selection ->  void FSequencerSelection::EmptySelectedOutlinerNodes()
*/
typedef void (UlcToolSubSystem::* pEmptySelectedOutlinerNodes)();
pEmptySelectedOutlinerNodes* emptySelectedOutlinerNodesFunPtr;

/*
调用对象  Selection -> void FSequencerSelection::AddToSelection(const TArray<TSharedRef<FSequencerDisplayNode>>& OutlinerNodes)
*/
typedef void (UlcToolSubSystem::* pAddToSelection)(const TArray<TSharedRef<FSequencerDisplayNode>>& OutlinerNodes);
pAddToSelection* addToSelectionFunPtr;

/*
调用对象  Selection -> const TSet<TSharedRef<FSequencerDisplayNode>>& FSequencerSelection::GetSelectedOutlinerNodes() const
*/
typedef TSet<TSharedRef<FSequencerDisplayNode>>& (UlcToolSubSystem::* pGetSelectedOutlinerNodes)();
pGetSelectedOutlinerNodes* getSelectedOutlinerNodesFunPtr;

/*
调用对象  FSequencer ->	virtual FSequencerSelection& GetSelection() override;
*/
typedef TSharedRef<SWidget>(UlcToolSubSystem::* pGetSequencerWidget)();
pGetSequencerWidget* getSequencerWidgetFunPtr;

/**
 *调用对象  SSequencer  -> TSharedPtr<SSequencerTreeView> SSequencer::GetTreeView() const
 */
typedef TSharedPtr<SSequencerTreeView>(UlcToolSubSystem::* pGetTreeView)();
pGetTreeView* getTreeViewFunPtr;


/**
 *调用对象  SSequencerTreeView  -> void SSequencerTreeView::ExpandCollapseNode(const FDisplayNodeRef& InNode, bool bExpansionState, ETreeRecursion Recursion)

 */
typedef void (UlcToolSubSystem::* pExpandCollapseNode)(const FDisplayNodeRef& InNode, bool bExpansionState, ETreeRecursion Recursion);
pExpandCollapseNode* expandCollapseNodeFunPtr;


void UlcToolSubSystem::onSequencerCreate(TSharedRef<ISequencer> InSequencer)
{
	//强制转换指针
	TSharedPtr<ISequencer>lsPtr = InSequencer;

	WeakSequencer = InSequencer;

	sequencerPtr = (FSequencer*)(WeakSequencer.Pin().Get());

	if (sequencerPtr)
	{
		//void* oldPtr = sequencerPtr;

		//sequencerWidgetPtr = (SSequencer*)(*((UINT64*)(*((DWORD_PTR*)&oldPtr) + offsetFSequncer_SSequncer)));

		TSharedPtr<SWidget> lsSw = lcGetSequencerWidget();
		sequencerWidgetPtr = (SSequencer*)lsSw.Get();

	}
}


void* UlcToolSubSystem::GetNodeTree()
{
	return (void*)0x0;
}

void UlcToolSubSystem::functionPtrTets()
{
	ISequencerModule& seModule = FModuleManager::LoadModuleChecked<ISequencerModule>("Sequencer");

	seModule.RegisterOnSequencerCreated(FOnSequencerCreated::FDelegate::CreateUObject(this, &UlcToolSubSystem::onSequencerCreate));
}


void UlcToolSubSystem::InitHackFunPtr()
{


	/*
		//version 4.243
	static UINT64 funBaseGetNodeTree = 0x1E7920;

	static UINT64 funBaseGetRootNodes = 0x1EC350;

	static UINT64 funBaseGetSelection = 0xC55C0;

	static UINT64 funBaseGetTreeView = 0x1EF260;

	static UINT64 funBaseExpandCollapseNode = 0x2C04A0;

	static UINT64 funBaseGetSequencerWidget = 0xC56D0;

	static UINT64 funEmptySelectedOutlinerNodes = 0x1C4010;

	static UINT64 funAddToSelection = 0x183D60;

	static UINT64 funGetSelectedOutlinerNodes = 0x1ECFD0;
	*/

	//4.251
	/*
	static UINT64 funBaseGetNodeTree = 0x1ECE50;

	static UINT64 funBaseGetRootNodes = 0x2013C0;

	static UINT64 funBaseGetSelection = 0xCCF80;

	static UINT64 funBaseGetTreeView = 0x204520;

	static UINT64 funBaseExpandCollapseNode = 0x2CDBC0;

	static UINT64 funBaseGetSequencerWidget = 0xCD090;

	static UINT64 funEmptySelectedOutlinerNodes = 0x1D81D0;

	static UINT64 funAddToSelection = 0x196FF0;

	static UINT64 funGetSelectedOutlinerNodes = 0x202230;
	*/

	//4.253
	static UINT64 funBaseGetNodeTree = 0x1FCE60;

	static UINT64 funBaseGetRootNodes = 0x2013D0;

	static UINT64 funBaseGetSelection = 0xCCF90;

	static UINT64 funBaseGetTreeView = 0x204530;

	static UINT64 funBaseExpandCollapseNode = 0x2CDBE0;

	static UINT64 funBaseGetSequencerWidget = 0xCD0A0;

	static UINT64 funEmptySelectedOutlinerNodes = 0x1D81E0;

	static UINT64 funAddToSelection = 0x197000;

	static UINT64 funGetSelectedOutlinerNodes = 0x202240;

	//获取进程内sequencer模块的基址
	TArray<lsData>lsArr = GetProcessBaseAddress();
	for (auto ls : lsArr)
	{
		funBaseGetNodeTree = funBaseGetNodeTree + ls.address;
		funBaseGetRootNodes = funBaseGetRootNodes + ls.address;
		funBaseGetSelection = funBaseGetSelection + ls.address;
		funBaseGetTreeView = funBaseGetTreeView + ls.address;
		funBaseExpandCollapseNode = funBaseExpandCollapseNode + ls.address;
		funBaseGetSequencerWidget = funBaseGetSequencerWidget + ls.address;
		funEmptySelectedOutlinerNodes = funEmptySelectedOutlinerNodes + ls.address;
		funAddToSelection = funAddToSelection + ls.address;
		funGetSelectedOutlinerNodes = funGetSelectedOutlinerNodes + ls.address;

		UE_LOG(LogTemp, Log, TEXT("the address is %I64d,name is %s"), funBaseGetNodeTree, *ls.dllname);
	}

	getNodeTreeFunPtr = (pGetNodeTree*)(&funBaseGetNodeTree);
	getRootNodesFunPtr = (pGetRootNodes*)(&funBaseGetRootNodes);
	getSelectionFunPtr = (pGetSelection*)(&funBaseGetSelection);
	getTreeViewFunPtr = (pGetTreeView*)(&funBaseGetTreeView);
	expandCollapseNodeFunPtr = (pExpandCollapseNode*)(&funBaseExpandCollapseNode);
	getSequencerWidgetFunPtr = (pGetSequencerWidget*)(&funBaseGetSequencerWidget);
	emptySelectedOutlinerNodesFunPtr = (pEmptySelectedOutlinerNodes*)(&funEmptySelectedOutlinerNodes);
	addToSelectionFunPtr = (pAddToSelection*)(&funAddToSelection);
	getSelectedOutlinerNodesFunPtr = (pGetSelectedOutlinerNodes*)(&funGetSelectedOutlinerNodes);
}

void UlcToolSubSystem::functionPtrTets2()
{
	//FSequencerSelection& ss = sequencerPtr->GetSelection();

	////假赋值
	//UlcToolSubSystem *fakeLcToolSubSystemPtr = (UlcToolSubSystem *)sequencerPtr;

	////正式调用函数指针 FSequencer::GetNodeTree
	//TSharedRef<FSequencerNodeTree> fs = (fakeLcToolSubSystemPtr->*(*getNodeTreeFunPtr))();

	////正式调用函数指针 getSelection
	//FSequencerSelection& selection = (fakeLcToolSubSystemPtr->*(*getSelectionFunPtr))();


	//TSharedPtr<FSequencerNodeTree>nodeTreeSharePtr = fs;

	//FSequencerNodeTree* nodeTreePtr = nodeTreeSharePtr.Get();

	//fakeLcToolSubSystemPtr = (UlcToolSubSystem *)nodeTreePtr;

	//正式调用函数指针
	const TArray< TSharedRef<FSequencerDisplayNode> >& displayNodeArr = lcGetAllRootNode();

	if (displayNodeArr.Num() > 0)
	{
		FText lsTxt = displayNodeArr[0].Get().GetDisplayName();

		const TArray<TSharedRef<FSequencerDisplayNode>>& childNode = displayNodeArr[0].Get().GetChildNodes();

		FString lsStr(lsTxt.ToString());
		UE_LOG(LogTemp, Log, TEXT("the display node is %s"), *lsStr);

		UE_LOG(LogTemp, Log, TEXT("the child node num is %d"), childNode.Num());

		for (auto lsNode : displayNodeArr)
		{
			lcExpansionChange(lsNode, true);
		}
		lcAddToSelection(displayNodeArr);

	}

	UE_LOG(LogTemp, Log, TEXT("the num is %d"), displayNodeArr.Num());
}


TSharedRef<SWidget> UlcToolSubSystem::lcGetSequencerWidget()
{
	return (((UlcToolSubSystem*)sequencerPtr)->*(*getSequencerWidgetFunPtr))();
}

const TArray<TSharedRef<FSequencerDisplayNode>>& UlcToolSubSystem::lcGetAllRootNode()
{
	TArray<TSharedRef<FSequencerDisplayNode>>ret;

	if (!bpBridgetPtr || !bpBridgetPtr->bPasswordCheck)
		return ret;
	if (!sequencerPtr)
		return ret;

	//正式调用函数指针 FSequencer::GetNodeTree
	TSharedPtr<FSequencerNodeTree>nodeTreeSharePtr = (((UlcToolSubSystem*)sequencerPtr)->*(*getNodeTreeFunPtr))();

	FSequencerNodeTree* nodeTreePtr = nodeTreeSharePtr.Get();

	//正式调用函数指针
	const TArray< TSharedRef<FSequencerDisplayNode> >& displayNodeArr = (((UlcToolSubSystem*)nodeTreePtr)->*(*getRootNodesFunPtr))();

	return displayNodeArr;
}

FSequencerSelection& UlcToolSubSystem::lcGetSelection()
{
	return (((UlcToolSubSystem*)sequencerPtr)->*(*getSelectionFunPtr))();
}

void UlcToolSubSystem::lcEmptySelectedOutlinerNodes()
{
	FSequencerSelection& selectionRef = lcGetSelection();

	FSequencerSelection* selectionPtr = &selectionRef;

	((UlcToolSubSystem*)selectionPtr->*(*emptySelectedOutlinerNodesFunPtr))();
}

void UlcToolSubSystem::lcAddToSelection(const TArray<TSharedRef<FSequencerDisplayNode>>& OutlinerNodes)
{
	FSequencerSelection& selectionRef = lcGetSelection();

	FSequencerSelection* selectionPtr = &selectionRef;

	((UlcToolSubSystem*)selectionPtr->*(*addToSelectionFunPtr))(OutlinerNodes);
}

void UlcToolSubSystem::lcExpansionChange(TSharedRef<FSequencerDisplayNode> InItem, bool bIsExpanded)
{
	if (!sequencerPtr
		|| !sequencerWidgetPtr)
		return;

	const TSharedPtr<SSequencerTreeView> treeViewSharedPtr = ((UlcToolSubSystem*)sequencerWidgetPtr->*(*getTreeViewFunPtr))();

	treeviewPtr = treeViewSharedPtr.Get();

	(((UlcToolSubSystem*)treeviewPtr)->*(*expandCollapseNodeFunPtr))(InItem, bIsExpanded, ETreeRecursion::NonRecursive);

}

TSet<TSharedRef<FSequencerDisplayNode>>& UlcToolSubSystem::lcGetSelectedOutlinerNodes()
{
	FSequencerSelection& selectionRef = lcGetSelection();

	FSequencerSelection* selectionPtr = &selectionRef;

	return ((UlcToolSubSystem*)selectionPtr->*(*getSelectedOutlinerNodesFunPtr))();
}

UlcBpBridge* UlcToolSubSystem::GetBridgetPtr()
{
	return bpBridgetPtr;
}

UlcImportFileSystem* UlcToolSubSystem::GetImportFileSystemPtr()
{
	return importFileSystemPtr;
}

void UlcToolSubSystem::TestImportFile()
{
	DisposeFbxImportInfo(GetImportFileArray());
}



bool UlcToolSubSystem::findContainSpecialStringNodeLoop(TSharedRef<FSequencerDisplayNode>inNode, FString specialName, TArray<TSharedRef<FSequencerDisplayNode>>& outTransNodeArray, bool bBoot)
{
	bool bFind = false;
	if (inNode->GetDisplayName().ToString().Contains(specialName))
	{
		if (bBoot && inNode->GetParent().IsValid())
			lcExpansionChange(inNode->GetParent().ToSharedRef(), true);
		outTransNodeArray.Add(inNode);
		bFind = true;
	}
	if (inNode->GetChildNodes().Num() > 0)
	{
		for (auto& e : inNode->GetChildNodes())
		{
			if (findContainSpecialStringNodeLoop(e, specialName, outTransNodeArray, false))
			{
				lcExpansionChange(inNode, true);
				bFind = true;
			}
		}
	}
	return bFind;
}

bool UlcToolSubSystem::findSpecialNameNodeLoop(TSharedPtr<FSequencerDisplayNode>inNode, FString specialName, TArray<TSharedRef<FSequencerDisplayNode>>& outTransNodeArray, bool bBoot)
{
	if (!bpBridgetPtr || !bpBridgetPtr->bPasswordCheck)
		return false;
	bool bFind = false;
	if (inNode->GetDisplayName().ToString() == specialName)
	{
		if (bBoot && inNode->GetParent().IsValid())
			lcExpansionChange(inNode->GetParent().ToSharedRef(), true);
		outTransNodeArray.Add(inNode.ToSharedRef());
		bFind = true;
	}
	if (inNode->GetChildNodes().Num() > 0)
	{
		for (auto& e : inNode->GetChildNodes())
		{
			if (findSpecialNameNodeLoop(e, specialName, outTransNodeArray, false))
			{
				lcExpansionChange(inNode.ToSharedRef(), true);
				bFind = true;
			}
		}
	}
	return bFind;
}

void UlcToolSubSystem::selectSpecialTransofrmChildNodeInSelection(ELcTransformType transType, ELcVectorType vectorType, bool bAddSelect)
{
	if (!bpBridgetPtr || !bpBridgetPtr->bPasswordCheck)
		return;
	//TSet<TSharedRef<FSequencerDisplayNode>>lsSelectNodeSet = sqPtr.Pin()->GetSelection().GetSelectedOutlinerNodes();

	TSet<TSharedRef<FSequencerDisplayNode>>lsSelectNodeSet = lcGetSelectedOutlinerNodes();

	if (lsSelectNodeSet.Num() <= 0)
		return;

	FString secondNodeName("Transform");

	FString TransTypeName;

	FString vectorTypeName;

	FCulturePtr EditorLanguage = FInternationalization::Get().GetCurrentLanguage();

	bool bChinese = (EditorLanguage->GetDisplayName() == FString(L"中文（简体中文）")) ? true : false;



	switch (transType)
	{
	case ELcTransformType::ELocation:
	{
		if (bChinese)
			TransTypeName = L"位置";
		else
			TransTypeName = "Location";
		break;
	}
	case ELcTransformType::ERotation:
	{
		if (bChinese)
			TransTypeName = L"旋转";
		else
			TransTypeName = "Rotation";
		break;
	}
	case ELcTransformType::EScale:
	{
		if (bChinese)
			TransTypeName = L"缩放";
		else
			TransTypeName = "Scale";
		break;

	}
	}

	switch (vectorType)
	{
	case ELcVectorType::EAll:
		break;
	case ELcVectorType::EX:
	{
		if (transType == ELcTransformType::ERotation)
		{
			vectorTypeName = "Roll";
		}
		else
		{
			vectorTypeName = "X";
		}
		break;
	}
	case ELcVectorType::EY:
	{
		if (transType == ELcTransformType::ERotation)
		{
			vectorTypeName = "Pitch";
		}
		else
		{
			vectorTypeName = "Y";
		}
		break;
	}
	case ELcVectorType::EZ:
	{
		if (transType == ELcTransformType::ERotation)
		{
			vectorTypeName = "Yaw";
		}
		else
		{
			vectorTypeName = "Z";
		}
		break;
	}
	default:
		break;
	}

	TArray<TSharedRef<FSequencerDisplayNode>>targetArray;

	if (vectorType == ELcVectorType::EAll)
	{
		TArray<TSharedRef<FSequencerDisplayNode>>TrasnformNodeArray;

		//遍历当前的高亮选择节点获得所有transform节点

		for (auto& it1 : lsSelectNodeSet)
		{
			TSharedRef<FSequencerDisplayNode> lsNode = it1;

			findContainSpecialStringNodeLoop(it1, FString("Transform"), TrasnformNodeArray, true);

			//遍历所有transform节点  获取要选择的节点
			for (auto& it2 : TrasnformNodeArray)
			{
				if ((*it2).GetChildNodes().Num() > 0)
				{
					//遍历transform下的所有子节点
					for (auto& e : (*it2).GetChildNodes())
					{
						if ((*e).GetDisplayName().ToString() == TransTypeName)
						{
							lcExpansionChange(it1, true);
							lcExpansionChange(it2, true);
							targetArray.Add(e);
							break;
						}
					}
				}
			}
		}
	}
	else
	{
		//遍历高亮节点查找transform节点
		for (auto& rootNode : lsSelectNodeSet)
		{

			TArray<TSharedRef<FSequencerDisplayNode>>TrasnformNodeArray;

			TSharedRef<FSequencerDisplayNode> lsNode = rootNode;

			findContainSpecialStringNodeLoop(rootNode, FString("Transform"), TrasnformNodeArray, true);

			//如果没有找到transform则跳出
			if (TrasnformNodeArray.Num() <= 0)
				continue;;

			//遍历所有transform
			for (auto& transIt : TrasnformNodeArray)
			{
				//遍历transoform子节点
				for (auto& transTypeIt : (*transIt).GetChildNodes())
				{
					if ((*transTypeIt).GetDisplayName().ToString() == TransTypeName)
					{
						//找到匹配的vectorType后遍历
						for (auto& vectorTypeIt : (*transTypeIt).GetChildNodes())
						{
							if ((*vectorTypeIt).GetDisplayName().ToString() == vectorTypeName)
							{
								targetArray.Add(vectorTypeIt);
								lcExpansionChange(transTypeIt, true);
								lcExpansionChange(transIt, true);
							}
						}
					}
				}
			}
		}
	}


	if (targetArray.Num() > 0)
	{
		lcEmptySelectedOutlinerNodes();
		lcAddToSelection(targetArray);
	}
}

void UlcToolSubSystem::LcAddLevelToWorld(UWorld* world, FString path)
{
	TArray<FString>lsPathArr;
	lsPathArr.Add(path);
	UEditorLevelUtils::AddLevelsToWorld(world, lsPathArr, ULevelStreamingAlwaysLoaded::StaticClass());
}

void UlcToolSubSystem::LcSaveAll()
{
	const bool bPromptUserToSave = false;
	const bool bSaveMapPackages = true;
	const bool bSaveContentPackages = true;
	const bool bFastSave = false;
	const bool bNotifyNoPackagesSaved = false;
	const bool bCanBeDeclined = false;

	FEditorFileUtils::SaveDirtyPackages(bPromptUserToSave, bSaveMapPackages, bSaveContentPackages, bFastSave, bNotifyNoPackagesSaved, bCanBeDeclined);
}

void UlcToolSubSystem::SetLevelCommand(ELevelCommandType lctType)
{
	switch (lctType)
	{
	case ELevelCommandType::EAllShadow:
	{

		break;
	}
	case ELevelCommandType::EToonShadow:
	{
		LcRunCmdWithSave("r.ShadowQuality", "10");
		LcRunCmdWithSave("r.Shadow.MaxCSMResolution", "8192");
		break;
	}
	case ELevelCommandType::ELightVog:
	{
		static bool bSet = false;
		if (!bSet)
		{
			LcRunCmdWithSave("r.VolumetricFog.TemporalReprojection", "0");
			bSet = true;
		}
		else
		{
			LcRunCmdWithSave("r.VolumetricFog.TemporalReprojection", "1");
			bSet = false;
		}
		break;
	}
	case ELevelCommandType::EGroomDebug:
	{
		static bool bSet = false;
		if (!bSet)
		{
			LcRunCmdWithSave("r.HairStrands.Cluster.Debug", "0");
			LcRunCmdWithSave("r.HairStrands.Scatter.Debug", "0");
			bSet = true;
		}
		else
		{
			LcRunCmdWithSave("r.HairStrands.Cluster.Debug", "1");
			LcRunCmdWithSave("r.HairStrands.Scatter.Debug", "1");
			bSet = false;
		}
		break;
	}

	default:
		break;
	}
}

void UlcToolSubSystem::selectAllNodeIncludeSpecialNameInSelection(FString specialName)
{
	if (!bpBridgetPtr || !bpBridgetPtr->bPasswordCheck)
		return;

	if (specialName == "")
		return;

	TSet<TSharedRef<FSequencerDisplayNode>>lsSelectNodeSet = lcGetSelectedOutlinerNodes();

	if (lsSelectNodeSet.Num() <= 0)
		return;

	TArray<TSharedRef<FSequencerDisplayNode>>targetArray;

	for (auto it = lsSelectNodeSet.CreateConstIterator(); it; ++it)
	{
		TSharedRef<FSequencerDisplayNode> lsNode = *it;

		findContainSpecialStringNodeLoop(lsNode, specialName, targetArray, true);
	}

	if (targetArray.Num() > 0)
	{
		lcEmptySelectedOutlinerNodes();
		lcAddToSelection(targetArray);
	}
}

TQueue<FLcMultiThread*, EQueueMode::Mpsc> FLcMultiThread::lcQueue;

TMap<FString, FLcMultiThread*> FLcMultiThread::ThreadMap = TMap<FString, FLcMultiThread*>();


//构造函数用于初始化创建线程实例
FLcMultiThread::FLcMultiThread(const FString& fName, UlcImportFileSystem* thread, FName name,   UObject* parent ) : lcFilename(fName), lcThread(thread), lcInName(name),  lcInParent(parent)
{
	//获取FEvent指针
	ThreadEvent = FPlatformProcess::GetSynchEventFromPool();
	
	/*
	* InRunnable: 需要传入一个FRunnable派生类的对象，这里直接传入this
	* ThreadName：线程名
	* InStackSize：要创建的堆栈大小，0表示使用当前线程的堆栈大小，默认传0即可
	* InThreadPri：告诉线程是否需要调整其优先级。默认为正常优先级
	*/

	ThreadName = *(lcInName.ToString());
	ThreadIns = FRunnableThread::Create(this, *ThreadName, 0, TPri_Normal);
	ThreadIns->GetThreadID();
	UE_LOG(LogTemp, Warning, TEXT("ThreadName: %s"), *ThreadName);
}
	

FLcMultiThread::~FLcMultiThread()
{
	/* 析构函数中，手动回收内存*/
	delete ThreadIns;
	ThreadIns = nullptr;

	delete ThreadEvent;
	ThreadEvent = nullptr;

	//delete lcInParent;
	lcInParent = nullptr;

	//delete ImportUI;
	ImportUI = nullptr;

	lcImportOptions = nullptr;

	lcFbxImporter = nullptr;
}

bool FLcMultiThread::Init()
{
	bPauseThread = false;
	IsComplete = false;

	return true;
}

uint32 FLcMultiThread::Run()
{
	FPlatformProcess::Sleep(0.03);

	/*
	* 线程中使用while来实现一个持续执行的效果
	* 使用bool值bRun来作为一个简单的条件
	* 当bRun=true时，将认为线程工作尚未完成，会继续执行
	*/
	while (bRun)
	{
		/*
		* 使用bool值， bPause作为线程挂起的条件
		* bPause=true时，在run函数中挂起线程，在本线程中挂起才可以		
		*/
		//GIsGameThreadIdInitialized = true;
		if (!IsComplete)
		{
			static FCriticalSection m_mutex;
			FScopeLock ScopeLock(&m_mutex);
			//TArray<FString> tempPath = lcThread->getPath();

			
			UE_LOG(LogTemp, Warning, TEXT("Thread:%s "), *ThreadName);
			if (multiThreadImportFBX())
			{
				IsComplete = true;	
				bRun = false;
			}
		}
		
		//这里Sleep 一秒是为了限制while的执行频率，减少资源损耗
		FPlatformProcess::Sleep(1.0f);
	}
	//while执行完成后，Run函数返回，代表着线程逻辑执行完成
	return 0;
}

//关闭线程执行条件
void FLcMultiThread::Stop()
{
	bRun = false;
}

//线程退出后自动执行
void FLcMultiThread::Exit()
{
	UE_LOG(LogTemp, Warning, TEXT("Thread:%s is Exit"), *ThreadName);
}

//FEvent指针挂起线程
void FLcMultiThread::PauseThread()
{
	/*
	* 当Run函数中检测到bPause=true，会执行ThreadEvent->Wait(),将本线程挂起
	* 注意，当线程被挂起后，Run函数不在执行，需要在其他线程把本线程唤醒才可以
	* 自己无法唤醒自己
	*/
	bPauseThread = true;
}

//FEvent指针唤醒线程
void FLcMultiThread::WakeUpThread()
{
	bPauseThread = false;
	/*
	* FEvent 指针执行Trigger即可将线程唤醒
	* 一个线程对应一个FEvent指针，只有自己的FEvent指针能把自己唤醒
	*/
	ThreadEvent->Trigger();
}

//确保线程工作执行完成
void FLcMultiThread::EnsureCompletion()
{
	//关闭线程执行条件
	Stop();
	//FRunnableThread实例，执行WaitForCompletion,会等待线程执行完毕才会结束线程
	ThreadIns->WaitForCompletion();
	Exit();
}

/*******************************静态函数调用********************************/
//初始化FRunnable实例
FLcMultiThread* FLcMultiThread::JoyInit(const FString& ThreadName, UlcImportFileSystem* tempThread)
{
	FLcMultiThread* pnw = nullptr;
	//判断Runnable是否存在以及是否支持多线程
	if (FPlatformProcess::SupportsMultithreading())
	{
		//pnw = new FLcMultiThread(ThreadName, tempThread, NumId);
		////将FRunnable实例存入ThreadMap中
		//ThreadMap.Add(ThreadName, pnw);
	}
	return pnw;
}

//挂起or唤醒线程
void FLcMultiThread::Suspend(const FString& ThreadName, bool bSuspend, bool bUseSuspend/*=true*/)
{
	if (FLcMultiThread* Runnable = *ThreadMap.Find(ThreadName))
	{
		if (bUseSuspend)
		{
			/*
			* 线程激活/挂起方式一：
			* 该种方式可以直接通过FRunnableThread::Suspend(true/false)的方式挂起或激活
			*/
			Runnable->ThreadIns->Suspend(bSuspend);
		}
		else
		{
			//挂起方式二
			if (bSuspend)
			{
				Runnable->PauseThread();
			}
			else
			{
				Runnable->WakeUpThread();
			}
		}
	}
}

//判断线程是否完成
bool FLcMultiThread::IsThreadFinished(const FString& ThreadName)
{
	if (ThreadMap.Find(ThreadName))
	{
		FLcMultiThread* Runnable = *ThreadMap.Find(ThreadName);
		return Runnable->bRun;
	}
	return true;
}

//结束线程
void FLcMultiThread::ShutDown(const FString& ThreadName)
{
	if (ThreadMap.Find(ThreadName))
	{
	
		FLcMultiThread* Runnable = *ThreadMap.Find(ThreadName);
		Runnable->EnsureCompletion();
		ThreadMap.Remove(ThreadName);
	}

}

TMap<FString, FLcMultiThread*> FLcMultiThread::TMapGetThreadMap()
{
	return ThreadMap;
}

#define LOCTEXT_NAMESPACE "FLcMultiThread"

UObject* FLcMultiThread::LcImportNode(UnFbx::FFbxImporter* FbxImporter, TArray<void*> VoidNodes, UObject* InParent, FName InName, EObjectFlags Flags, struct FScopedSlowTask& SlowTask, UObject* InMesh /*= NULL*/, int LODIndex /*= 0*/)
{
	FFormatNamedArguments Args;
	Args.Add(TEXT("NodeIndex"), SlowTask.CompletedWork + 1);
	Args.Add(TEXT("ArrayLength"), SlowTask.TotalAmountOfWork);

	TArray<FbxNode*> Nodes;
	for (void* VoidNode : VoidNodes)
	{
		Nodes.Add((FbxNode*)VoidNode);
	}
	check(Nodes.Num() > 0 && Nodes[0] != nullptr);
	//
	UObject* CreatedObject = NULL;
	FName OutputName = FbxImporter->MakeNameForMesh(InName.ToString(), Nodes[0]);

	{
		// skip collision models
		FbxString NodeName(Nodes[0]->GetName());
		if (NodeName.Find("UCX") != -1 || NodeName.Find("MCDCX") != -1 ||
			NodeName.Find("UBX") != -1 || NodeName.Find("USP") != -1 || NodeName.Find("UCP") != -1)
		{
			return NULL;
		}
		CreatedObject = FbxImporter->ImportStaticMeshAsSingle(InParent, Nodes, OutputName, Flags, ImportUI->StaticMeshImportData, Cast<UStaticMesh>(InMesh));
		bOperationCanceled |= FbxImporter->GetImportOperationCancelled();
	}

	return CreatedObject;
}

UObject* FLcMultiThread::RecursiveImportNode(UnFbx::FFbxImporter* FbxImporter, void* VoidNode, UObject* InParent, FName InName, EObjectFlags Flags, FScopedSlowTask& SlowTask, TArray<UObject*>& OutNewAssets)
{
	TArray<void*> TmpVoidArray;
	UObject* CreatedObject = NULL;
	FbxNode* Node = (FbxNode*)VoidNode;
	bOperationCanceled |= SlowTask.ShouldCancel();

	if (bOperationCanceled)
	{
		return CreatedObject;
	}

	if (Node->GetNodeAttribute() && Node->GetNodeAttribute()->GetAttributeType() == FbxNodeAttribute::eLODGroup && Node->GetChildCount() > 0)
	{
		TArray<FbxNode*> AllNodeInLod;
		// import base mesh
		FbxImporter->FindAllLODGroupNode(AllNodeInLod, Node, 0);
		if (AllNodeInLod.Num() > 0)
		{
			TmpVoidArray.Empty();
			for (FbxNode* LodNode : AllNodeInLod)
			{
				TmpVoidArray.Add(LodNode);
			}
			CreatedObject = LcImportNode(FbxImporter, TmpVoidArray, InParent, InName, Flags, SlowTask);
		}

		if (CreatedObject)
		{
			OutNewAssets.AddUnique(CreatedObject);
		}

		bool bImportMeshLODs = ImportUI->StaticMeshImportData->bImportMeshLODs;

		if (CreatedObject && bImportMeshLODs)
		{
			// import LOD meshes
			SlowTask.TotalAmountOfWork += Node->GetChildCount();
			for (int32 LODIndex = 1; LODIndex < Node->GetChildCount(); LODIndex++)
			{
				if (LODIndex >= MAX_STATIC_MESH_LODS)
				{
					SlowTask.CompletedWork += Node->GetChildCount() - LODIndex;
					FbxImporter->AddTokenizedErrorMessage(FTokenizedMessage::Create(EMessageSeverity::Warning, FText::Format(
						LOCTEXT("ImporterLimits_MaximumStaticMeshLODReach", "Reached the maximum number of LODs for a Static Mesh({0}) - discarding {1} LOD meshes."), FText::AsNumber(MAX_STATIC_MESH_LODS), FText::AsNumber(Node->GetChildCount() - MAX_STATIC_MESH_LODS))
					), FFbxErrors::Generic_Mesh_TooManyLODs);
					break;
				}

				bOperationCanceled |= SlowTask.ShouldCancel();
				if (bOperationCanceled)
				{
					break;
				}

				AllNodeInLod.Empty();
				FbxImporter->FindAllLODGroupNode(AllNodeInLod, Node, LODIndex);
				if (AllNodeInLod.Num() > 0)
				{
					if (AllNodeInLod[0]->GetMesh() == nullptr)
					{
						UStaticMesh* NewStaticMesh = Cast<UStaticMesh>(CreatedObject);
						//Add a Lod generated model
						while (NewStaticMesh->GetNumSourceModels() <= LODIndex)
						{
							NewStaticMesh->AddSourceModel();
						}

						LcImportNode(FbxImporter, TmpVoidArray, InParent, InName, Flags, SlowTask, CreatedObject, LODIndex);

						FStaticMeshSourceModel& ThisSourceModel = NewStaticMesh->GetSourceModel(LODIndex);

						if (LODIndex - 1 > 0 && NewStaticMesh->IsReductionActive(LODIndex - 1))
						{
							const FStaticMeshSourceModel& PrevSourceModel = NewStaticMesh->GetSourceModel(LODIndex - 1);

							//Do not add the LODGroup bias here, since the bias will be apply during the build
							if (PrevSourceModel.ReductionSettings.PercentTriangles < 1.0f)
							{
								ThisSourceModel.ReductionSettings.PercentTriangles = PrevSourceModel.ReductionSettings.PercentTriangles * 0.5f;
							}
							else if (PrevSourceModel.ReductionSettings.MaxDeviation > 0.0f)
							{
								ThisSourceModel.ReductionSettings.MaxDeviation = PrevSourceModel.ReductionSettings.MaxDeviation + 1.0f;
							}
						}
						else
						{
							ThisSourceModel.ReductionSettings.PercentTriangles = FMath::Pow(0.5f, (float)LODIndex);
						}
					}
					else
					{
						TmpVoidArray.Empty();
						for (FbxNode* LodNode : AllNodeInLod)
						{
							TmpVoidArray.Add(LodNode);
						}
						LcImportNode(FbxImporter, TmpVoidArray, InParent, InName, Flags, SlowTask, CreatedObject, LODIndex);
						UStaticMesh* NewStaticMesh = Cast<UStaticMesh>(CreatedObject);
						if (NewStaticMesh->IsSourceModelValid(LODIndex))
						{
							NewStaticMesh->GetSourceModel(LODIndex).bImportWithBaseMesh = true;
						}
					}

				}
			}
		}

		if (CreatedObject)
		{
			UStaticMesh* NewStaticMesh = Cast<UStaticMesh>(CreatedObject);
			if (NewStaticMesh != nullptr)
			{
				//Reorder the material
				TArray<FbxNode*> Nodes;
				FbxImporter->FindAllLODGroupNode(Nodes, Node, 0);
				if (Nodes.Num() > 0)
				{

					FbxImporter->PostImportStaticMesh(NewStaticMesh, Nodes);
					FbxImporter->UpdateStaticMeshImportData(NewStaticMesh, nullptr);
				}
			}
		}
	}
	else
	{
		if (Node->GetMesh())
		{
			TmpVoidArray.Empty();
			TmpVoidArray.Add(Node);
			CreatedObject = LcImportNode(FbxImporter, TmpVoidArray, InParent, InName, Flags, SlowTask);

			if (CreatedObject)
			{
				UStaticMesh* NewStaticMesh = Cast<UStaticMesh>(CreatedObject);
				if (NewStaticMesh != nullptr)
				{
					//Reorder the material
					TArray<FbxNode*> Nodes;
					Nodes.Add(Node);
					FbxImporter->PostImportStaticMesh(NewStaticMesh, Nodes);
					FbxImporter->UpdateStaticMeshImportData(NewStaticMesh, nullptr);
				}
				OutNewAssets.AddUnique(CreatedObject);
			}
		}
		else
		{
			SlowTask.CompletedWork++;
		}

		SlowTask.TotalAmountOfWork += Node->GetChildCount();
		for (int32 ChildIndex = 0; ChildIndex < Node->GetChildCount(); ++ChildIndex)
		{
			UObject* SubObject = RecursiveImportNode(FbxImporter, Node->GetChild(ChildIndex), InParent, InName, Flags, SlowTask, OutNewAssets);

			if (SubObject)
			{
				OutNewAssets.AddUnique(SubObject);
			}

			if (CreatedObject == NULL)
			{
				CreatedObject = SubObject;
			}
		}
	}

	return CreatedObject;
}

FText FLcMultiThread::GetImportTaskText(const FText& TaskText) const
{
	return TaskText;
}


int32 FLcMultiThread::lcGetImportType(const FString& InFilename)
{
	int32 Result = -1; // Default to invalid
	const FString& Filename = InFilename;

	// Prioritized in the order of SkeletalMesh > StaticMesh > Animation (only if animation data is found)
	bool bHasAnimation = false;

	UnFbx::FbxSceneInfo SceneInfo;

	if (lcFbxImporter->GetSceneInfo(Filename, SceneInfo, true))
	{
		if (SceneInfo.SkinnedMeshNum > 0)
		{
			Result = 1;
		}
		else if (SceneInfo.TotalGeometryNum > 0)
		{
			Result = 0;
		}

		bHasAnimation = SceneInfo.bHasAnimation;
	}

	// In case no Geometry was found, check for animation (FBX can still contain mesh data though)
	if (bHasAnimation)
	{
		if (Result == -1)
		{
			Result = 2;
		}
		// by default detects as skeletalmesh since it has animation curves
		else if (Result == 0)
		{
			Result = 1;
		}
	}
	return Result;
}

bool FLcMultiThread::multiThreadImportFBX()
{
	if (lcFbxImporter == nullptr)
	{
		lcFbxImporter = UnFbx::FFbxImporter::GetInstance();
	}


	UObject* CreatedObject = NULL;
	USkeletalMesh* BaseSkeletalMesh = nullptr;
	//lcFbxImporter->bImportStatus = true;
	int32 ImportType = lcGetImportType(lcFilename);

	UFbxImportUI* fbxOption = NewObject<UFbxImportUI>();
	{
		//载入mesh
		fbxOption->bImportMesh = true;
		//载入贴图
		fbxOption->bImportTextures = false;
		//载入材质
		fbxOption->bImportMaterials = false;
		//不导入动画
		fbxOption->bImportAnimations = false;
		fbxOption->bCreatePhysicsAsset = true;
		//We are not re-importing
		fbxOption->bIsReimport = false;
		fbxOption->ReimportMesh = nullptr;
		fbxOption->bAllowContentTypeImport = true;

		fbxOption->bImportMaterials = false;
		fbxOption->bOverrideFullName = true;

		fbxOption->StaticMeshImportData->bCombineMeshes = true;
		fbxOption->StaticMeshImportData->bAutoGenerateCollision = true;
		fbxOption->AnimSequenceImportData->bImportCustomAttribute = true;
		fbxOption->bImportAnimations = false;
		fbxOption->MeshTypeToImport = EFBXImportType(ImportType);
		if (fbxOption->MeshTypeToImport == FBXIT_StaticMesh)
		{
			fbxOption->bImportAsSkeletal = false;
			fbxOption->StaticMeshImportData->bComputeWeightedNormals = true;
			fbxOption->StaticMeshImportData->bTransformVertexToAbsolute = true;
			fbxOption->StaticMeshImportData->bConvertScene = true;
			fbxOption->StaticMeshImportData->bConvertSceneUnit = false;
			fbxOption->StaticMeshImportData->bForceFrontXAxis = false;
		}
		else
		{
			fbxOption->bImportAsSkeletal = true;
			fbxOption->SkeletalMeshImportData->bComputeWeightedNormals = true;
			fbxOption->SkeletalMeshImportData->bTransformVertexToAbsolute = true;
			fbxOption->SkeletalMeshImportData->bConvertScene = true;
			fbxOption->SkeletalMeshImportData->bConvertSceneUnit = false;
			fbxOption->SkeletalMeshImportData->bForceFrontXAxis = false;
		}
	}

	ImportUI = fbxOption;
	bool bDetectImportTypeOnImport = true;
	if (bDetectImportTypeOnImport)
	{
		if (!lcDetectImportType(ImportType))
		{
			// Failed to read the file info, fail the import
			//GEditor->GetEditorSubsystem<UImportSubsystem>()->BroadcastAssetPostImport(this, NULL);
			return NULL;
		}
	}

	lcImportOptions = lcFbxImporter->GetImportOptions();

	lcImportOptions->MaterialSearchLocation = EMaterialSearchLocation::Local;

	FbxNode* RootNodeToImport = NULL;
	RootNodeToImport = lcFbxImporter->Scene->GetRootNode();

	EFBXImportType ForcedImportType = FBXIT_StaticMesh;

	bool bIsObjFormat = false;
	FString fileExtension = FPaths::GetExtension(lcFilename);
	const TCHAR* Type = *fileExtension;
	if (FString(Type).Equals(TEXT("obj"), ESearchCase::IgnoreCase))
	{
		bIsObjFormat = true;
	}

	bool bShowImportDialog = false;
	bool bImportAll = false;
	bOperationCanceled = false;
	bool bIsAutomated = true;

	lcImportOptions = lcGetImportOptions(lcFbxImporter, ImportUI, bShowImportDialog, bIsAutomated, lcInParent->GetPathName(), bOperationCanceled, bImportAll, bIsObjFormat, lcFilename, false, ForcedImportType);
	if (lcImportOptions)
	{
		bIsAutomated = false;
		ImportUI->Skeleton = nullptr;
		lcImportOptions->SkeletonForAnimation = nullptr;
	}

	ConvertScene();

	int32 InterestingNodeCount = 1;
	TArray< TArray<FbxNode*>* > SkelMeshArray;

	
	EObjectFlags Flags = RF_Public | RF_Standalone | RF_Transactional;
	

	bool bCombineMeshesLOD = false;
	bool bCombineMeshes = ImportUI->StaticMeshImportData->bCombineMeshes;
	bool bImportStaticMeshLODs = ImportUI->StaticMeshImportData->bImportMeshLODs;

	if (ImportUI->MeshTypeToImport == FBXIT_SkeletalMesh)
	{
		lcFbxImporter->FillFbxSkelMeshArrayInScene(RootNodeToImport, SkelMeshArray, false, (lcImportOptions->bImportAsSkeletalGeometry || lcImportOptions->bImportAsSkeletalSkinning));
		InterestingNodeCount = SkelMeshArray.Num();
	}
	else if (ImportUI->MeshTypeToImport == FBXIT_StaticMesh)
	{
		lcFbxImporter->ApplyTransformSettingsToFbxNode(RootNodeToImport, ImportUI->StaticMeshImportData);

		if (bCombineMeshes && !bImportStaticMeshLODs)
		{
			// If Combine meshes and dont import mesh LODs, the interesting node count should be 1 so all the meshes are grouped together into one static mesh
			InterestingNodeCount = 1;
		}
		else
		{
			// count meshes in lod groups if we dont care about importing LODs
			bool bCountLODGroupMeshes = !bImportStaticMeshLODs && bCombineMeshes;
			int32 NumLODGroups = 0;
			InterestingNodeCount = lcFbxImporter->GetFbxMeshCount(RootNodeToImport, bCountLODGroupMeshes, NumLODGroups);

			// if there were LODs in the file, do not combine meshes even if requested
			if (bImportStaticMeshLODs && bCombineMeshes && NumLODGroups > 0)
			{
				bCombineMeshes = false;
				//Combine all the LOD together and export one mesh with LODs
				bCombineMeshesLOD = true;
			}
		}
		//Find all collision models, even the one contain under a LOD Group
		lcFbxImporter->FillFbxCollisionMeshArray(RootNodeToImport);
	}


	if (InterestingNodeCount > 1)
	{
		// the option only works when there are only one asset
		lcImportOptions->bUsedAsFullName = false;
	}
	
	const FString lcTempFilename(lcFilename);

	if (RootNodeToImport && InterestingNodeCount > 0)
	{
		int32 NodeIndex = 0;

		int32 ImportedMeshCount = 0;
		if (ImportUI->MeshTypeToImport == FBXIT_StaticMesh)  // static mesh
		{
			UStaticMesh* NewStaticMesh = NULL;
			if (bCombineMeshes)
			{
				TArray<FbxNode*> FbxMeshArray;
				lcFbxImporter->FillFbxMeshArray(RootNodeToImport, FbxMeshArray, lcFbxImporter);
				if (FbxMeshArray.Num() > 0)
				{
					NewStaticMesh = lcFbxImporter->ImportStaticMeshAsSingle(lcInParent, FbxMeshArray, lcInName, Flags, ImportUI->StaticMeshImportData, NULL, 0, nullptr);
					lcFbxImporter->GetImportOperationCancelled();

					if (!bOperationCanceled && NewStaticMesh != nullptr)
					{
						//Build the staticmesh
					/*	SlowTask.EnterProgressFrame(1, GetImportTaskText(NSLOCTEXT("FbxFactory", "EndingImportingFbxMeshTask", "Finalizing static mesh import.")));*/
						lcFbxImporter->PostImportStaticMesh(NewStaticMesh, FbxMeshArray);
						lcFbxImporter->UpdateStaticMeshImportData(NewStaticMesh, nullptr);
					}
				}

				ImportedMeshCount = NewStaticMesh ? 1 : 0;
			}
			else if (bCombineMeshesLOD)
			{
				TArray<FbxNode*> FbxMeshArray;
				TArray<FbxNode*> FbxLodGroups;
				TArray<TArray<FbxNode*>> FbxMeshesLod;
				lcFbxImporter->FillFbxMeshAndLODGroupArray(RootNodeToImport, FbxLodGroups, FbxMeshArray);
				FbxMeshesLod.Add(FbxMeshArray);

				FFormatNamedArguments Args;
				Args.Add(TEXT("NodeIndex"), 1);
				Args.Add(TEXT("ArrayLength"), FbxMeshesLod.Num());
				//FText SlowtaskText = NSLOCTEXT("UnrealEd", "Importingf", "Importing ({NodeIndex} of {ArrayLength})");
				/*			FScopedSlowTask ImportStaticMeshSlowTask(FbxMeshesLod.Num(), GetImportTaskText(FText::Format(SlowtaskText, Args)));
							ImportStaticMeshSlowTask.MakeDialog();*/

							//Import the LOD root
				if (FbxMeshesLod.Num() > 0)
				{
					//ImportStaticMeshSlowTask.EnterProgressFrame(1, GetImportTaskText(FText::Format(SlowtaskText, Args)));
					TArray<FbxNode*>& LODMeshesArray = FbxMeshesLod[0];
					NewStaticMesh = lcFbxImporter->ImportStaticMeshAsSingle(lcInParent, LODMeshesArray, lcInName, Flags, ImportUI->StaticMeshImportData, NULL, 0);
					bOperationCanceled |= lcFbxImporter->GetImportOperationCancelled();
				}
				//Import all LODs
				for (int32 LODIndex = 1; LODIndex < FbxMeshesLod.Num() && !bOperationCanceled; ++LODIndex)
				{
					TArray<FbxNode*>& LODMeshesArray = FbxMeshesLod[LODIndex];
					Args[TEXT("NodeIndex")] = LODIndex + 1;
					//ImportStaticMeshSlowTask.EnterProgressFrame(1, GetImportTaskText(FText::Format(SlowtaskText, Args)));

					if (LODMeshesArray[0]->GetMesh() == nullptr)
					{
						lcFbxImporter->AddStaticMeshSourceModelGeneratedLOD(NewStaticMesh, LODIndex);
					}
					else
					{
						lcFbxImporter->ImportStaticMeshAsSingle(lcInParent, LODMeshesArray, lcInName, Flags, ImportUI->StaticMeshImportData, NewStaticMesh, LODIndex);
						if (NewStaticMesh && NewStaticMesh->IsSourceModelValid(LODIndex))
						{
							NewStaticMesh->GetSourceModel(LODIndex).bImportWithBaseMesh = true;
						}
					}
					//bOperationCanceled |= FbxImporter->GetImportOperationCancelled() || SlowTask.ShouldCancel();
				}

				if (!bOperationCanceled && NewStaticMesh)
				{
					lcFbxImporter->PostImportStaticMesh(NewStaticMesh, FbxMeshesLod[0]);
					lcFbxImporter->UpdateStaticMeshImportData(NewStaticMesh, nullptr);
				}
			}
			else // !bCombineMeshes && !bCombineMeshesLOD
			{
				FFormatNamedArguments Args;
				Args.Add(TEXT("NodeIndex"), 1);
				Args.Add(TEXT("ArrayLength"), InterestingNodeCount);
				FScopedSlowTask ImportNodeSlowTask(InterestingNodeCount, GetImportTaskText(FText::Format(NSLOCTEXT("UnrealEd", "Importingf", "Importing ({NodeIndex} of {ArrayLength})"), Args)));
				ImportNodeSlowTask.MakeDialog(true);
				TArray<UObject*> AllNewAssets;
				UObject* Object = RecursiveImportNode(lcFbxImporter, RootNodeToImport, lcInParent, lcInName, Flags, ImportNodeSlowTask, AllNewAssets);
				//bOperationCanceled |= SlowTask.ShouldCancel();
				NewStaticMesh = Cast<UStaticMesh>(Object);

				// Make sure to notify the asset registry of all assets created other than the one returned, which will notify the asset registry automatically.
				for (auto AssetIt = AllNewAssets.CreateConstIterator(); !bOperationCanceled && AssetIt; ++AssetIt)
				{
					UObject* Asset = *AssetIt;
					if (Asset != NewStaticMesh)
					{
						FAssetRegistryModule::AssetCreated(Asset);
						Asset->MarkPackageDirty();
						//Make sure the build is up to date with the latest section info map
						Asset->PostEditChange();
						AdditionalImportedObjects.Add(Asset);
					}
				}

				ImportedMeshCount = AllNewAssets.Num();
			}

			// Importing static mesh global sockets only if one mesh is imported
			if (!bOperationCanceled && ImportedMeshCount == 1 && NewStaticMesh)
			{
				lcFbxImporter->ImportStaticMeshGlobalSockets(NewStaticMesh);
			}

			CreatedObject = NewStaticMesh;

		}
		else if (ImportUI->MeshTypeToImport == FBXIT_SkeletalMesh)// skeletal mesh
		{
			int32 TotalNumNodes = 0;

			for (int32 i = 0; i < SkelMeshArray.Num() && !bOperationCanceled; i++)
			{
				BaseSkeletalMesh = nullptr;
				TArray<FbxNode*> NodeArray = *SkelMeshArray[i];

				TotalNumNodes += NodeArray.Num();
				// check if there is LODGroup for this skeletal mesh
				int32 MaxNumberOfLOD = 1;
				for (int32 j = 0; j < NodeArray.Num(); j++)
				{
					FbxNode* Node = NodeArray[j];
					if (Node->GetNodeAttribute() && Node->GetNodeAttribute()->GetAttributeType() == FbxNodeAttribute::eLODGroup)
					{
						// get max LODgroup level
						if (MaxNumberOfLOD < Node->GetChildCount())
						{
							MaxNumberOfLOD = Node->GetChildCount();
						}
					}
				}

				int32 SuccessfulLodIndex = 0;
				bool bImportSkeletalMeshLODs = ImportUI->SkeletalMeshImportData->bImportMeshLODs;

				//The skeletalmesh will be set after we import the LOD 0 since it is not created yet.
				FScopedSkeletalMeshPostEditChange ScopedPostEditChange(nullptr);

				for (int32 LODIndex = 0; LODIndex < MaxNumberOfLOD && !bOperationCanceled; LODIndex++)
				{
					//We need to know what is the imported lod index when importing the morph targets
					int32 ImportedSuccessfulLodIndex = INDEX_NONE;
					if (!bImportSkeletalMeshLODs && LODIndex > 0) // not import LOD if UI option is OFF
					{
						break;
					}

					TArray<FbxNode*> SkelMeshNodeArray;
					for (int32 j = 0; j < NodeArray.Num(); j++)
					{
						FbxNode* Node = NodeArray[j];
						if (Node->GetNodeAttribute() && Node->GetNodeAttribute()->GetAttributeType() == FbxNodeAttribute::eLODGroup)
						{
							TArray<FbxNode*> NodeInLod;
							if (Node->GetChildCount() > LODIndex)
							{
								lcFbxImporter->FindAllLODGroupNode(NodeInLod, Node, LODIndex);
							}
							else // in less some LODGroups have less level, use the last level
							{
								lcFbxImporter->FindAllLODGroupNode(NodeInLod, Node, Node->GetChildCount() - 1);
							}

							for (FbxNode* MeshNode : NodeInLod)
							{
								SkelMeshNodeArray.Add(MeshNode);
							}
						}
						else
						{
							SkelMeshNodeArray.Add(Node);
						}
					}
					FSkeletalMeshImportData OutData;
					if (LODIndex == 0 && SkelMeshNodeArray.Num() != 0)
					{
						FName OutputName = lcFbxImporter->MakeNameForMesh(lcInName.ToString(), SkelMeshNodeArray[0]);

						UnFbx::FFbxImporter::FImportSkeletalMeshArgs ImportSkeletalMeshArgs;
						ImportSkeletalMeshArgs.InParent = lcInParent;
						ImportSkeletalMeshArgs.NodeArray = SkelMeshNodeArray;
						ImportSkeletalMeshArgs.Name = OutputName;
						ImportSkeletalMeshArgs.Flags = Flags;
						ImportSkeletalMeshArgs.TemplateImportData = ImportUI->SkeletalMeshImportData;
						ImportSkeletalMeshArgs.LodIndex = LODIndex;
						ImportSkeletalMeshArgs.OutData = &OutData;

						//MeshArg.Enqueue(ImportSkeletalMeshArgs);

						/*FString temp = Filename;
						if (temp != "")
						{
							FString leftStr;
							FString rightStr;
							temp.Split("/", &leftStr, &rightStr, ESearchCase::IgnoreCase, ESearchDir::FromEnd);
							rightStr.Split(".", &leftStr, &rightStr);
							lcRunnable[i] = new FLcMultiThread(leftStr, this);
						}*/

						BaseSkeletalMesh = lcFbxImporter->ImportSkeletalMesh(ImportSkeletalMeshArgs);
						bOperationCanceled |= lcFbxImporter->GetImportOperationCancelled()/* || SlowTask.ShouldCancel()*/;
					/*	if (lcFbxImporter->fbxSkeleton)
						{
							lcFbxImporter->fbxSkeleton->EmptyBoneProperty(BaseSkeletalMesh);
						}*/
						

						if (BaseSkeletalMesh && !bOperationCanceled)
						{
							//Set the base skeletalmesh to the scoped post edit change variable
							ScopedPostEditChange.SetSkeletalMesh(BaseSkeletalMesh);

							if (lcImportOptions->bImportAnimations)
							{
								// We need to remove all scaling from the root node before we set up animation data.
								// Othewise some of the global transform calculations will be incorrect.
								lcFbxImporter->RemoveTransformSettingsFromFbxNode(RootNodeToImport, ImportUI->SkeletalMeshImportData);
								lcFbxImporter->SetupAnimationDataFromMesh(BaseSkeletalMesh, lcInParent, SkelMeshNodeArray, ImportUI->AnimSequenceImportData, OutputName.ToString());

								// Reapply the transforms for the rest of the import
								lcFbxImporter->ApplyTransformSettingsToFbxNode(RootNodeToImport, ImportUI->SkeletalMeshImportData);
							}
							ImportedSuccessfulLodIndex = SuccessfulLodIndex;
							//Increment the LOD index
							SuccessfulLodIndex++;
						}
					}
					else if (BaseSkeletalMesh && SkelMeshNodeArray[0]->GetMesh() == nullptr)
					{
						FSkeletalMeshUpdateContext UpdateContext;
						UpdateContext.SkeletalMesh = BaseSkeletalMesh;
						//Add a autogenerated LOD to the BaseSkeletalMesh
						FSkeletalMeshLODInfo& LODInfo = BaseSkeletalMesh->AddLODInfo();
						LODInfo.ReductionSettings.NumOfTrianglesPercentage = FMath::Pow(0.5f, (float)(SuccessfulLodIndex));
						LODInfo.ReductionSettings.BaseLOD = 0;
						LODInfo.bImportWithBaseMesh = true;
						LODInfo.SourceImportFilename = FString(TEXT(""));
						FLODUtilities::SimplifySkeletalMeshLOD(UpdateContext, SuccessfulLodIndex);
						ImportedSuccessfulLodIndex = SuccessfulLodIndex;
						SuccessfulLodIndex++;
					}
					else if (BaseSkeletalMesh) // the base skeletal mesh is imported successfully
					{
						FName LODObjectName = NAME_None;
						UnFbx::FFbxImporter::FImportSkeletalMeshArgs ImportSkeletalMeshArgs;
						ImportSkeletalMeshArgs.InParent = BaseSkeletalMesh->GetOutermost();
						ImportSkeletalMeshArgs.NodeArray = SkelMeshNodeArray;
						ImportSkeletalMeshArgs.Name = LODObjectName;
						ImportSkeletalMeshArgs.Flags = RF_Transient;
						ImportSkeletalMeshArgs.TemplateImportData = ImportUI->SkeletalMeshImportData;
						ImportSkeletalMeshArgs.LodIndex = SuccessfulLodIndex;
						ImportSkeletalMeshArgs.OutData = &OutData;

						USkeletalMesh* LODObject = lcFbxImporter->ImportSkeletalMesh(ImportSkeletalMeshArgs);
						bOperationCanceled |= lcFbxImporter->GetImportOperationCancelled();
					/*	if (lcFbxImporter->fbxSkeleton)
						{
							lcFbxImporter->fbxSkeleton->EmptyBoneProperty(LODObject);
						}*/

						if (!bOperationCanceled && lcFbxImporter->ImportSkeletalMeshLOD(LODObject, BaseSkeletalMesh, SuccessfulLodIndex))
						{
							FSkeletalMeshLODInfo* LODInfo = BaseSkeletalMesh->GetLODInfo(SuccessfulLodIndex);
							LODInfo->bImportWithBaseMesh = true;
							LODInfo->SourceImportFilename = FString(TEXT(""));
							ImportedSuccessfulLodIndex = SuccessfulLodIndex;
							SuccessfulLodIndex++;
						}
						else
						{
							lcFbxImporter->AddTokenizedErrorMessage(FTokenizedMessage::Create(EMessageSeverity::Error, LOCTEXT("FailedToImport_SkeletalMeshLOD", "Failed to import Skeletal mesh LOD.")), FFbxErrors::SkeletalMesh_LOD_FailedToImport);
						}
					}

					//bOperationCanceled |= SlowTask.ShouldCancel();

					// import morph target
					if (!bOperationCanceled && BaseSkeletalMesh && lcImportOptions->bImportMorph && ImportedSuccessfulLodIndex != INDEX_NONE)
					{
						// Disable material importing when importing morph targets
						uint32 bImportMaterials = lcImportOptions->bImportMaterials;
						lcImportOptions->bImportMaterials = 0;
						uint32 bImportTextures = lcImportOptions->bImportTextures;
						lcImportOptions->bImportTextures = 0;

						lcFbxImporter->ImportFbxMorphTarget(SkelMeshNodeArray, BaseSkeletalMesh, ImportedSuccessfulLodIndex, OutData);
						bOperationCanceled |= lcFbxImporter->GetImportOperationCancelled();

						lcImportOptions->bImportMaterials = !!bImportMaterials;
						lcImportOptions->bImportTextures = !!bImportTextures;
					}

					//bOperationCanceled |= SlowTask.ShouldCancel();
				}

				if (BaseSkeletalMesh && !bOperationCanceled)
				{
					NodeIndex++;
					FFormatNamedArguments Args;
					Args.Add(TEXT("NodeIndex"), NodeIndex);
					Args.Add(TEXT("ArrayLength"), SkelMeshArray.Num());
					//SlowTask.EnterProgressFrame(0, GetImportTaskText(FText::Format(NSLOCTEXT("UnrealEd", "Importingf", "Importing ({NodeIndex} of {ArrayLength})"), Args)));

					UnFbx::FFbxImporter::UpdateSkeletalMeshImportData(BaseSkeletalMesh, ImportUI->SkeletalMeshImportData, INDEX_NONE, nullptr, nullptr);

					if (CreatedObject == nullptr)
					{
						CreatedObject = BaseSkeletalMesh;
					}
					else if (CreatedObject != BaseSkeletalMesh)
					{
						AdditionalImportedObjects.Add(BaseSkeletalMesh);
					}
				}

				//bOperationCanceled |= SlowTask.ShouldCancel();
			}

			for (int32 i = 0; i < SkelMeshArray.Num(); i++)
			{
				delete SkelMeshArray[i];
			}

			// if total nodes we found is 0, we didn't find anything. 
			if (TotalNumNodes == 0)
			{
				lcFbxImporter->AddTokenizedErrorMessage(FTokenizedMessage::Create(EMessageSeverity::Error, LOCTEXT("FailedToImport_NoMeshFoundOnRoot", "Could not find any valid mesh on the root hierarchy. If you have mesh in the sub hierarchy, please enable option of [Import Meshes In Bone Hierarchy] when import.")),
					FFbxErrors::SkeletalMesh_NoMeshFoundOnRoot);
			}
		}
		else if (ImportUI->MeshTypeToImport == FBXIT_Animation)// animation
		{
			if (lcImportOptions->SkeletonForAnimation)
			{
				// will return the last animation sequence that were added
				CreatedObject = UEditorEngine::ImportFbxAnimation(lcImportOptions->SkeletonForAnimation, lcInParent, ImportUI->AnimSequenceImportData, *lcFilename, *lcInName.ToString(), true);
			}
		}
	}
	else
	{
		if (RootNodeToImport == NULL)
		{
			lcFbxImporter->AddTokenizedErrorMessage(FTokenizedMessage::Create(EMessageSeverity::Error, LOCTEXT("FailedToImport_InvalidRoot", "Could not find root node.")), FFbxErrors::SkeletalMesh_InvalidRoot);
		}
		else if (ImportUI->MeshTypeToImport == FBXIT_SkeletalMesh)
		{
			lcFbxImporter->AddTokenizedErrorMessage(FTokenizedMessage::Create(EMessageSeverity::Error, LOCTEXT("FailedToImport_InvalidBone", "Failed to find any bone hierarchy. Try disabling the \"Import As Skeletal\" option to import as a rigid mesh. ")), FFbxErrors::SkeletalMesh_InvalidBone);
		}
		else
		{
			lcFbxImporter->AddTokenizedErrorMessage(FTokenizedMessage::Create(EMessageSeverity::Error, LOCTEXT("FailedToImport_InvalidNode", "Could not find any node.")), FFbxErrors::SkeletalMesh_InvalidNode);
		}
	}

	//if (lcFbxImporter && !bOperationCanceled)
	//{
	//	lcFbxImporter->ReleaseScene();
	//	//GEditor->GetEditorSubsystem<UImportSubsystem>()->BroadcastAssetPostImport(this, CreatedObject);
	//}

	if (BaseSkeletalMesh)
	{
		lcFbxImporter->ReleaseScene();
		lcFbxImporter->DeleteInstance();
		CreatedObject->MarkPackageDirty();
		ULevel::LevelDirtiedEvent.Broadcast();
		CreatedObject->PostEditChange();
		return true;
	}
	return false;
}

bool FLcMultiThread::lcDetectImportType(int32 ImportType)
{
	UnFbx::FFbxImporter* FFbxImporter = UnFbx::FFbxImporter::GetInstance();

	if (ImportType != -1)
	{
		ImportUI->MeshTypeToImport = EFBXImportType(ImportType);
		ImportUI->OriginalImportType = ImportUI->MeshTypeToImport;
	}
	return true;
}

void FLcMultiThread::ConvertScene()
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UlcImportFileSystem::ConvertScene);

	//Merge the anim stack before the conversion since the above 0 layer will not be converted
	//int32 AnimStackCount = lcFbxImporter->Scene->GetSrcObjectCount<FbxAnimStack>();
	////Merge the animation stack layer before converting the scene
	//for (int32 AnimStackIndex = 0; AnimStackIndex < AnimStackCount; AnimStackIndex++)
	//{
	//	FbxAnimStack* CurAnimStack = lcFbxImporter->Scene->GetSrcObject<FbxAnimStack>(AnimStackIndex);
	//	if (CurAnimStack->GetMemberCount() > 1)
	//	{

	//		int32 ResampleRate = UnFbx::FFbxImporter::GetGlobalAnimStackSampleRate(CurAnimStack);
	//	
	//		UnFbx::FFbxImporter::MergeAllLayerAnimation(CurAnimStack, ResampleRate);
	//	}
	//}

	//Set the original file information
	FileAxisSystem = lcFbxImporter->Scene->GetGlobalSettings().GetAxisSystem();
	FileUnitSystem = lcFbxImporter->Scene->GetGlobalSettings().GetSystemUnit();

	FbxAMatrix AxisConversionMatrix;
	AxisConversionMatrix.SetIdentity();

	FbxAMatrix JointOrientationMatrix;
	JointOrientationMatrix.SetIdentity();

	if (lcImportOptions->bConvertScene)
	{
		// we use -Y as forward axis here when we import. This is odd considering our forward axis is technically +X
		// but this is to mimic Maya/Max behavior where if you make a model facing +X facing, 
		// when you import that mesh, you want +X facing in engine. 
		// only thing that doesn't work is hand flipping because Max/Maya is RHS but UE is LHS
		// On the positive note, we now have import transform set up you can do to rotate mesh if you don't like default setting
		FbxAxisSystem::ECoordSystem CoordSystem = FbxAxisSystem::eRightHanded;
		FbxAxisSystem::EUpVector UpVector = FbxAxisSystem::eZAxis;
		FbxAxisSystem::EFrontVector FrontVector = (FbxAxisSystem::EFrontVector) - FbxAxisSystem::eParityOdd;
		if (lcImportOptions->bForceFrontXAxis)
		{
			FrontVector = FbxAxisSystem::eParityEven;
		}


		FbxAxisSystem UnrealImportAxis(UpVector, FrontVector, CoordSystem);

		FbxAxisSystem SourceSetup = lcFbxImporter->Scene->GetGlobalSettings().GetAxisSystem();


		if (SourceSetup != UnrealImportAxis)
		{
			FbxRootNodeUtility::RemoveAllFbxRoots(lcFbxImporter->Scene);
			UnrealImportAxis.ConvertScene(lcFbxImporter->Scene);

			FbxAMatrix SourceMatrix;
			SourceSetup.GetMatrix(SourceMatrix);
			FbxAMatrix UE4Matrix;
			UnrealImportAxis.GetMatrix(UE4Matrix);
			AxisConversionMatrix = SourceMatrix.Inverse() * UE4Matrix;


			if (lcImportOptions->bForceFrontXAxis)
			{
				JointOrientationMatrix.SetR(FbxVector4(-90.0, -90.0, 0.0));
			}
		}
	}

	UnFbx::FFbxDataConverter::SetJointPostConversionMatrix(JointOrientationMatrix);

	UnFbx::FFbxDataConverter::SetAxisConversionMatrix(AxisConversionMatrix);

	// Convert the scene's units to what is used in this program, if needed.
	// The base unit used in both FBX and Unreal is centimeters.  So unless the units 
	// are already in centimeters (ie: scalefactor 1.0) then it needs to be converted
	if (lcImportOptions->bConvertSceneUnit && lcFbxImporter->Scene->GetGlobalSettings().GetSystemUnit() != FbxSystemUnit::cm)
	{
		FbxSystemUnit::cm.ConvertScene(lcFbxImporter->Scene);
	}

	//Reset all the transform evaluation cache since we change some node transform
	lcFbxImporter->Scene->GetAnimationEvaluator()->Reset();
}


#undef LOCTEXT_NAMESPACE
