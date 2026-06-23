#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"
#include "lcBpBridge.h"
#include "ISequencer.h"
#include "Hal/Runnable.h"
#include "Hal/RunnableThread.h"
#include "HAL/PlatformFilemanager.h"
#include "Runtime/Core/Public/Misc/FileHelper.h"
#include "UnrealEd/Public/FbxImporter.h"
#include "UnrealEd/Public/AssetImportTask.h"
#include "UnrealEd/Public/Toolkits/AssetEditorManager.h"
#include "UnrealEd/Classes/Factories/FbxImportUI.h"
#include "UnrealEd/Classes/Factories/FbxSkeletalMeshImportData.h"
#include "UnrealEd/Classes/Factories/Factory.h"
#include "Editor/SequenceRecorder/Public/ActorRecording.h"
#include "Editor/UnrealEd/Public/Toolkits/ToolkitManager.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "../../../Engine/Source/Editor/ContentBrowser/Public/ContentBrowserModule.h"
#include "windows/AllowWindowsPlatformTypes.h "
#include <windows.h>
#include <TlHelp32.h>
#include <psapi.h>
#include "windows/HideWindowsPlatformTypes.h "


#include "Kismet/GameplayStatics.h"
#include "lcImportFileSystem.generated.h"

class FLcMultiThread;

namespace UnFbx {
	class FFbxImporter;
	class FFbxDataConverter;
	struct FbxSceneInfo;
	struct FBXImportOptions;
	//enum EFBXImportType;
}


struct FbxMeshInfo
{
	FString Name;
	uint64 UniqueId;
	int32 FaceNum;
	int32 VertexNum;
	bool bTriangulated;
	int32 MaterialNum;
	bool bIsSkelMesh;
	FString SkeletonRoot;
	int32 SkeletonElemNum;
	FString LODGroup;
	int32 LODLevel;
	int32 MorphNum;
};

//Node use to store the scene hierarchy transform will be relative to the parent
struct FbxNodeInfo
{
	const char* ObjectName;
	uint64 UniqueId;
	FTransform Transform;
	FVector RotationPivot;
	FVector ScalePivot;

	const char* AttributeName;
	uint64 AttributeUniqueId;
	const char* AttributeType;

	const char* ParentName;
	uint64 ParentUniqueId;
};

struct FbxSceneInfo
{
	// data for static mesh
	int32 NonSkinnedMeshNum;

	//data for skeletal mesh
	int32 SkinnedMeshNum;

	// common data
	int32 TotalGeometryNum;
	int32 TotalMaterialNum;
	int32 TotalTextureNum;

	TArray<FbxMeshInfo> MeshInfo;
	TArray<FbxNodeInfo> HierarchyInfo;

	/* true if it has animation */
	bool bHasAnimation;
	double FrameRate;
	double TotalTime;

	void Reset()
	{
		NonSkinnedMeshNum = 0;
		SkinnedMeshNum = 0;
		TotalGeometryNum = 0;
		TotalMaterialNum = 0;
		TotalTextureNum = 0;
		MeshInfo.Empty();
		HierarchyInfo.Empty();
		bHasAnimation = false;
		FrameRate = 0.0;
		TotalTime = 0.0;
	}
};
/*FBX多线程导入*/
UCLASS(Blueprintable)
class LCTOOL_API UlcImportFileSystem : public UFactory
{
	GENERATED_BODY()

public:

	FbxAxisSystem FileAxisSystem;
	FbxSystemUnit FileUnitSystem;



	UPROPERTY()
		class UFbxImportUI* ImportUI;

	TArray<UObject*> AdditionalImportedObjects;

	bool bOperationCanceled;

	TArray<FString> lcFilePath;

	FString lcTargetPath;

	UnFbx::FBXImportOptions* lcImportOptions;

	UnFbx::FFbxImporter* lcFbxImporter;

	TArray<FLcMultiThread*> lcRunnable;

	FString currentPath;

	//UFUNCTION(BlueprintCallable, Category = "lcImportFileSystem")
	//	void startImport(const TArray<FString>& filePaths, FString destinationPath);

	//FBX导入UE4的时候 ，一把丑陋的大锁
	FCriticalSection Import_FBXToUE_mutex;

	TArray<FString> getPath();

	void LcImportFBXFile();

	UFUNCTION(BlueprintCallable, Category = "lcImportFileSystem")
		bool ImportFile(const TArray<FString>& filePaths);

	UObject* LcImportObject(UClass* InClass, UObject* InOuter, FName InName, EObjectFlags InFlags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& OutCanceled);

	//UObject* LcFactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled);

	//FText GetImportTaskText(const FText& TaskText) const;

	//UObject* RecursiveImportNode(UnFbx::FFbxImporter* FbxImporter, void* VoidNode, UObject* InParent, FName InName, EObjectFlags Flags, FScopedSlowTask& SlowTask, TArray<UObject*>& OutNewAssets);


	//UObject* LcImportNode(UnFbx::FFbxImporter* FbxImporter, TArray<void*> VoidNodes, UObject* InParent, FName InName, EObjectFlags Flags, struct FScopedSlowTask& SlowTask, UObject* InMesh = NULL, int LODIndex = 0);

	void lcExpandDirectories(const TArray<FString>& Files, const FString& DestinationPath, TArray<TPair<FString, FString>>& FilesAndDestinations) const;

	int32 lcGetImportType(const FString& InFilename);

	bool isAutoImport;

	bool bIsAutomated;

	bool isLcCompleted;

	bool bDetectImportTypeOnImport;

	bool lcDetectImportType(int32 ImportType);

	UnFbx::FBXImportOptions* getOptions();



	TQueue<UnFbx::FFbxImporter::FImportSkeletalMeshArgs>& getMeshArgs();

	TQueue<UnFbx::FFbxImporter::FImportSkeletalMeshArgs> MeshArg;

	void ConvertScene();

	void SetCurrPath(const FString& path);

	TArray<FString> getFileFullPath();

};


void lcApplyImportUIToImportOptions(UFbxImportUI* ImportUI, UnFbx::FBXImportOptions& InOutImportOptions);

UnFbx::FBXImportOptions* lcGetImportOptions(UnFbx::FFbxImporter* FbxImporter, UFbxImportUI* ImportUI, bool bShowOptionDialog, bool bIsAutomated, const FString& FullPath, bool& OutOperationCanceled, bool& bOutImportAll, bool bIsObjFormat, const FString& InFilename, bool bForceImportType, EFBXImportType ImportType);

