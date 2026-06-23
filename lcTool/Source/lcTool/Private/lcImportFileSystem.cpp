
#include "lcImportFileSystem.h"
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
#include "UnrealEd/Classes/Factories/FbxStaticMeshImportData.h"
#include "lcToolSubSystem.h"
#include "UnrealEd/Public/FbxAnimUtils.h"
#include "../../Engine/Source/Developer/SkeletalMeshUtilitiesCommon/Public/LODUtilities.h"


#define LOCTEXT_NAMESPACE "LcImportFileSystem"

//
//FText UlcImportFileSystem::GetImportTaskText(const FText& TaskText) const /*桥接指针 */
//{
//	return TaskText;
//	//return bOperationCanceled ? LOCTEXT("CancellingImportingFbxMeshTask", "Cancelling FBX mesh import") : TaskText;
//}
//
//UObject* UlcImportFileSystem::RecursiveImportNode(UnFbx::FFbxImporter* FbxImporter, void* VoidNode, UObject* InParent, FName InName, EObjectFlags Flags, FScopedSlowTask& SlowTask, TArray<UObject*>& OutNewAssets)
//{
//	TArray<void*> TmpVoidArray;
//	UObject* CreatedObject = NULL;
//	FbxNode* Node = (FbxNode*)VoidNode;
//	bOperationCanceled |= SlowTask.ShouldCancel();
//
//	if (bOperationCanceled)
//	{
//		return CreatedObject;
//	}
//
//	if (Node->GetNodeAttribute() && Node->GetNodeAttribute()->GetAttributeType() == FbxNodeAttribute::eLODGroup && Node->GetChildCount() > 0)
//	{
//		TArray<FbxNode*> AllNodeInLod;
//		// import base mesh
//		FbxImporter->FindAllLODGroupNode(AllNodeInLod, Node, 0);
//		if (AllNodeInLod.Num() > 0)
//		{
//			TmpVoidArray.Empty();
//			for (FbxNode* LodNode : AllNodeInLod)
//			{
//				TmpVoidArray.Add(LodNode);
//			}
//			CreatedObject = LcImportNode(FbxImporter, TmpVoidArray, InParent, InName, Flags, SlowTask);
//		}
//
//		if (CreatedObject)
//		{
//			OutNewAssets.AddUnique(CreatedObject);
//		}
//
//		bool bImportMeshLODs = ImportUI->StaticMeshImportData->bImportMeshLODs;
//
//		if (CreatedObject && bImportMeshLODs)
//		{
//			// import LOD meshes
//			SlowTask.TotalAmountOfWork += Node->GetChildCount();
//			for (int32 LODIndex = 1; LODIndex < Node->GetChildCount(); LODIndex++)
//			{
//				if (LODIndex >= MAX_STATIC_MESH_LODS)
//				{
//					SlowTask.CompletedWork += Node->GetChildCount() - LODIndex;
//					FbxImporter->AddTokenizedErrorMessage(FTokenizedMessage::Create(EMessageSeverity::Warning, FText::Format(
//						LOCTEXT("ImporterLimits_MaximumStaticMeshLODReach", "Reached the maximum number of LODs for a Static Mesh({0}) - discarding {1} LOD meshes."), FText::AsNumber(MAX_STATIC_MESH_LODS), FText::AsNumber(Node->GetChildCount() - MAX_STATIC_MESH_LODS))
//					), FFbxErrors::Generic_Mesh_TooManyLODs);
//					break;
//				}
//
//				bOperationCanceled |= SlowTask.ShouldCancel();
//				if (bOperationCanceled)
//				{
//					break;
//				}
//
//				AllNodeInLod.Empty();
//				FbxImporter->FindAllLODGroupNode(AllNodeInLod, Node, LODIndex);
//				if (AllNodeInLod.Num() > 0)
//				{
//					if (AllNodeInLod[0]->GetMesh() == nullptr)
//					{
//						UStaticMesh* NewStaticMesh = Cast<UStaticMesh>(CreatedObject);
//						//Add a Lod generated model
//						while (NewStaticMesh->GetNumSourceModels() <= LODIndex)
//						{
//							NewStaticMesh->AddSourceModel();
//						}
//
//						LcImportNode(FbxImporter, TmpVoidArray, InParent, InName, Flags, SlowTask, CreatedObject, LODIndex);
//
//						FStaticMeshSourceModel& ThisSourceModel = NewStaticMesh->GetSourceModel(LODIndex);
//
//						if (LODIndex - 1 > 0 && NewStaticMesh->IsReductionActive(LODIndex - 1))
//						{
//							const FStaticMeshSourceModel& PrevSourceModel = NewStaticMesh->GetSourceModel(LODIndex - 1);
//
//							//Do not add the LODGroup bias here, since the bias will be apply during the build
//							if (PrevSourceModel.ReductionSettings.PercentTriangles < 1.0f)
//							{
//								ThisSourceModel.ReductionSettings.PercentTriangles = PrevSourceModel.ReductionSettings.PercentTriangles * 0.5f;
//							}
//							else if (PrevSourceModel.ReductionSettings.MaxDeviation > 0.0f)
//							{
//								ThisSourceModel.ReductionSettings.MaxDeviation = PrevSourceModel.ReductionSettings.MaxDeviation + 1.0f;
//							}
//						}
//						else
//						{
//							ThisSourceModel.ReductionSettings.PercentTriangles = FMath::Pow(0.5f, (float)LODIndex);
//						}
//					}
//					else
//					{
//						TmpVoidArray.Empty();
//						for (FbxNode* LodNode : AllNodeInLod)
//						{
//							TmpVoidArray.Add(LodNode);
//						}
//						LcImportNode(FbxImporter, TmpVoidArray, InParent, InName, Flags, SlowTask, CreatedObject, LODIndex);
//						UStaticMesh* NewStaticMesh = Cast<UStaticMesh>(CreatedObject);
//						if (NewStaticMesh->IsSourceModelValid(LODIndex))
//						{
//							NewStaticMesh->GetSourceModel(LODIndex).bImportWithBaseMesh = true;
//						}
//					}
//
//				}
//			}
//		}
//
//		if (CreatedObject)
//		{
//			UStaticMesh* NewStaticMesh = Cast<UStaticMesh>(CreatedObject);
//			if (NewStaticMesh != nullptr)
//			{
//				//Reorder the material
//				TArray<FbxNode*> Nodes;
//				FbxImporter->FindAllLODGroupNode(Nodes, Node, 0);
//				if (Nodes.Num() > 0)
//				{
//					
//					FbxImporter->PostImportStaticMesh(NewStaticMesh, Nodes);
//					FbxImporter->UpdateStaticMeshImportData(NewStaticMesh, nullptr);
//				}
//			}
//		}
//	}
//	else
//	{
//		if (Node->GetMesh())
//		{
//			TmpVoidArray.Empty();
//			TmpVoidArray.Add(Node);
//			CreatedObject = LcImportNode(FbxImporter, TmpVoidArray, InParent, InName, Flags, SlowTask);
//
//			if (CreatedObject)
//			{
//				UStaticMesh* NewStaticMesh = Cast<UStaticMesh>(CreatedObject);
//				if (NewStaticMesh != nullptr)
//				{
//					//Reorder the material
//					TArray<FbxNode*> Nodes;
//					Nodes.Add(Node);
//					FbxImporter->PostImportStaticMesh(NewStaticMesh, Nodes);
//					FbxImporter->UpdateStaticMeshImportData(NewStaticMesh, nullptr);
//				}
//				OutNewAssets.AddUnique(CreatedObject);
//			}
//		}
//		else
//		{
//			SlowTask.CompletedWork++;
//		}
//
//		SlowTask.TotalAmountOfWork += Node->GetChildCount();
//		for (int32 ChildIndex = 0; ChildIndex < Node->GetChildCount(); ++ChildIndex)
//		{
//			UObject* SubObject = RecursiveImportNode(FbxImporter, Node->GetChild(ChildIndex), InParent, InName, Flags, SlowTask, OutNewAssets);
//
//			if (SubObject)
//			{
//				OutNewAssets.AddUnique(SubObject);
//			}
//
//			if (CreatedObject == NULL)
//			{
//				CreatedObject = SubObject;
//			}
//		}
//	}
//
//	return CreatedObject;
//}
//
//
//
//UObject* UlcImportFileSystem::LcImportNode(UnFbx::FFbxImporter* FbxImporter, TArray<void*> VoidNodes, UObject* InParent, FName InName, EObjectFlags Flags, struct FScopedSlowTask& SlowTask, UObject* InMesh /*= NULL*/, int LODIndex /*= 0*/)
//{
//	FFormatNamedArguments Args;
//	Args.Add(TEXT("NodeIndex"), SlowTask.CompletedWork + 1);
//	Args.Add(TEXT("ArrayLength"), SlowTask.TotalAmountOfWork);
//
//	TArray<FbxNode*> Nodes;
//	for (void* VoidNode : VoidNodes)
//	{
//		Nodes.Add((FbxNode*)VoidNode);
//	}
//	check(Nodes.Num() > 0 && Nodes[0] != nullptr);
////
//	UObject* CreatedObject = NULL;
//	FName OutputName = FbxImporter->MakeNameForMesh(InName.ToString(), Nodes[0]);
//
//	{
//		// skip collision models
//		FbxString NodeName(Nodes[0]->GetName());
//		if (NodeName.Find("UCX") != -1 || NodeName.Find("MCDCX") != -1 ||
//			NodeName.Find("UBX") != -1 || NodeName.Find("USP") != -1 || NodeName.Find("UCP") != -1)
//		{
//			return NULL;
//		}
//		CreatedObject = FbxImporter->ImportStaticMeshAsSingle(InParent, Nodes, OutputName, Flags, ImportUI->StaticMeshImportData, Cast<UStaticMesh>(InMesh));
//		bOperationCanceled |= FbxImporter->GetImportOperationCancelled();
//	}
//
//	return CreatedObject;
//}
//
void UlcImportFileSystem::lcExpandDirectories(const TArray<FString>& Files, const FString& DestinationPath, TArray<TPair<FString, FString>>& FilesAndDestinations) const
{
	// Iterate through all files in the list, if any folders are found, recurse and expand them.
	for (int32 FileIdx = 0; FileIdx < Files.Num(); ++FileIdx)
	{
		const FString& Filename = Files[FileIdx];

		// If the file being imported is a directory, just include all sub-files and skip the directory.
		if (IFileManager::Get().DirectoryExists(*Filename))
		{
			FString FolderName = FPaths::GetCleanFilename(Filename);

			// Get all files & folders in the folder.
			FString SearchPath = Filename / FString(TEXT("*"));
			TArray<FString> SubFiles;
			IFileManager::Get().FindFiles(SubFiles, *SearchPath, true, true);

			// FindFiles just returns file and directory names, so we need to tack on the root path to get the full path.
			TArray<FString> FullPathItems;
			for (FString& SubFile : SubFiles)
			{
				FullPathItems.Add(Filename / SubFile);
			}

			// Expand any sub directories found.
			FString NewSubDestination = DestinationPath / FolderName;
			lcExpandDirectories(FullPathItems, NewSubDestination, FilesAndDestinations);
		}
		else
		{
			// Add any files and their destination path.
			FilesAndDestinations.Emplace(Filename, DestinationPath);
		}
	}
}


TArray<FString> UlcImportFileSystem::getPath()
{
	TArray<FString> temp;
	if (lcFilePath.Num() > 0)
	{
		return lcFilePath;
	}

	return temp;
}

void UlcImportFileSystem::LcImportFBXFile()
{
	TArray<FString> arrPath = getFileFullPath();
	if (arrPath.Num() > 0)
	{
		ImportFile(arrPath);
	}
}

bool UlcImportFileSystem::ImportFile(const TArray<FString>& filePaths)
{
	if (filePaths.Num() < 1 )
	{
		return false;
	}

	FString destinationPath = currentPath;
	TArray<TPair<FString, FString>>* FilesAndDestinationsPtr = nullptr;
	lcRunnable.SetNum(filePaths.Num());
	lcFilePath = filePaths;
	lcTargetPath = destinationPath;

	lcFbxImporter = nullptr;

	//bDetectImportTypeOnImport = false;
	UObject* Result = nullptr;

	TMap< FString, TArray<UFactory*> > ExtensionToFactoriesMap;
	TArray<TPair<FString, FString>> FilesAndDestinations;
	if (FilesAndDestinationsPtr == nullptr)
	{
		lcExpandDirectories(filePaths, destinationPath, FilesAndDestinations);
	}
	else
	{
		FilesAndDestinations = (*FilesAndDestinationsPtr);
	}

	for (TObjectIterator<UClass> ClassIt; ClassIt; ++ClassIt)
	{
		if (!(*ClassIt)->IsChildOf(UFactory::StaticClass()) || ((*ClassIt)->HasAnyClassFlags(CLASS_Abstract)) || (*ClassIt)->IsChildOf(USceneImportFactory::StaticClass()))
		{
			continue;
		}

		UFactory* Factory = Cast<UFactory>((*ClassIt)->GetDefaultObject());

		if (!Factory->bEditorImport)
		{
			continue;
		}

		TArray<FString> FactoryExtensions;
		Factory->GetSupportedFileExtensions(FactoryExtensions);

		for (auto& FileDest : FilesAndDestinations)
		{
			const FString FileExtension = FPaths::GetExtension(FileDest.Key);

			// Case insensitive string compare with supported formats of this factory
			if (FactoryExtensions.Contains(FileExtension))
			{
				TArray<UFactory*>& ExistingFactories = ExtensionToFactoriesMap.FindOrAdd(FileExtension);

				// Do not remap extensions, just reuse the existing UFactory.
				// There may be multiple UFactories, so we will keep track of all of them
				bool bFactoryAlreadyInMap = false;
				for (auto FoundFactoryIt = ExistingFactories.CreateConstIterator(); FoundFactoryIt; ++FoundFactoryIt)
				{
					if ((*FoundFactoryIt)->GetClass() == Factory->GetClass())
					{
						bFactoryAlreadyInMap = true;
						break;
					}
				}

				if (!bFactoryAlreadyInMap)
				{
					// We found a factory for this file, it can be imported!
					// Create a new factory of the same class and make sure it doesn't get GCed.
					// The object will be removed from the root set at the end of this function.
					UFactory* NewFactory = NewObject<UFactory>(GetTransientPackage(), Factory->GetClass());
					if (NewFactory->ConfigureProperties())
					{
						NewFactory->AddToRoot();
						ExistingFactories.Add(NewFactory);
					}
				}
			}
		}
	}

	for (int32 FileIdx = 0; FileIdx < FilesAndDestinations.Num() ; ++FileIdx)
	{
		// Filename and DestinationPath will need to get santized before we create an asset out of them as they
		// can be created out of sources that contain spaces and other invalid characters. Filename cannot be sanitized
		// until other checks are done that rely on looking at the actual source file so sanitation is delayed.
		const FString& Filename = FilesAndDestinations[FileIdx].Key;
		const FString DestinationPath = ObjectTools::SanitizeObjectPath(FilesAndDestinations[FileIdx].Value);
		FString FileExtension = FPaths::GetExtension(Filename);
		const TArray<UFactory*>* FactoriesPtr = ExtensionToFactoriesMap.Find(FileExtension);
		UFactory* Factory = nullptr;
		
		if (FactoriesPtr)
		{
			const TArray<UFactory*>& Factories = *FactoriesPtr;
			/*if (Factories.Num() > 0)*/
			{
				Factory = Factories[0];
				UClass* ImportAssetType = Factory->ResolveSupportedClass();
				FString Name = FPaths::GetBaseFilename(Filename);
				FString PackageName = ObjectTools::SanitizeInvalidChars(FPaths::Combine(*destinationPath, *Name), INVALID_LONGPACKAGE_CHARACTERS);
				UPackage* Pkg = CreatePackage(*PackageName);

				lcRunnable[FileIdx] = new FLcMultiThread(Filename,  UlcToolSubSystem::getImportSysPtr() , FName(*Name), Pkg);
				FLcMultiThread::lcQueue.Enqueue(lcRunnable[FileIdx]);
				/*bool bImportWasCancelled = false;
				Result = LcImportObject(ImportAssetType, Pkg, FName(*Name), RF_Public | RF_Standalone | RF_Transactional, Filename, nullptr, GWarn, bImportWasCancelled);*/

			}
		}
	}

	while (!FLcMultiThread::lcQueue.IsEmpty())
	{
		FLcMultiThread* tempThread;
		bool isTemp = FLcMultiThread::lcQueue.Peek(tempThread);
		if (tempThread->IsComplete && !tempThread->bRun && isTemp)
		{
			if (tempThread)
			{
				FLcMultiThread::lcQueue.Pop();
				delete tempThread;
				tempThread = nullptr;
			}
		}

		FPlatformProcess::Sleep(0.5f);
	}


	if (Result != nullptr)
	{
		Result->MarkPackageDirty();
		ULevel::LevelDirtiedEvent.Broadcast();
		Result->PostEditChange();
		return true;

	}
	return false;
}

void lcApplyImportUIToImportOptions(UFbxImportUI* ImportUI, UnFbx::FBXImportOptions& InOutImportOptions)
{
	check(ImportUI);

	//General options
	{
		InOutImportOptions.bUsedAsFullName = ImportUI->bOverrideFullName;
		InOutImportOptions.ImportType = ImportUI->MeshTypeToImport;

		InOutImportOptions.bResetToFbxOnMaterialConflict = ImportUI->bResetToFbxOnMaterialConflict;
		InOutImportOptions.bAutoComputeLodDistances = ImportUI->bAutoComputeLodDistances;
		InOutImportOptions.LodDistances.Empty(8);
		InOutImportOptions.LodDistances.Add(ImportUI->LodDistance0);
		InOutImportOptions.LodDistances.Add(ImportUI->LodDistance1);
		InOutImportOptions.LodDistances.Add(ImportUI->LodDistance2);
		InOutImportOptions.LodDistances.Add(ImportUI->LodDistance3);
		InOutImportOptions.LodDistances.Add(ImportUI->LodDistance4);
		InOutImportOptions.LodDistances.Add(ImportUI->LodDistance5);
		InOutImportOptions.LodDistances.Add(ImportUI->LodDistance6);
		InOutImportOptions.LodDistances.Add(ImportUI->LodDistance7);
		InOutImportOptions.LodNumber = ImportUI->LodNumber;
		InOutImportOptions.MinimumLodNumber = ImportUI->MinimumLodNumber;
	}

	//Animation and skeletal mesh options
	{
		InOutImportOptions.bImportAnimations = ImportUI->bImportAnimations;
		InOutImportOptions.SkeletonForAnimation = ImportUI->Skeleton;
		InOutImportOptions.bCreatePhysicsAsset = ImportUI->bCreatePhysicsAsset;
		InOutImportOptions.PhysicsAsset = ImportUI->PhysicsAsset;
		InOutImportOptions.AnimationName = ImportUI->OverrideAnimationName;
	}

	//Material options
	{
		InOutImportOptions.bImportMaterials = ImportUI->bImportMaterials;
		InOutImportOptions.bInvertNormalMap = ImportUI->TextureImportData->bInvertNormalMaps;
		InOutImportOptions.MaterialSearchLocation = ImportUI->TextureImportData->MaterialSearchLocation;
		UMaterialInterface* BaseMaterialInterface = Cast<UMaterialInterface>(ImportUI->TextureImportData->BaseMaterialName.TryLoad());
		if (BaseMaterialInterface) {
			InOutImportOptions.BaseMaterial = BaseMaterialInterface;
			InOutImportOptions.BaseColorName = ImportUI->TextureImportData->BaseColorName;
			InOutImportOptions.BaseDiffuseTextureName = ImportUI->TextureImportData->BaseDiffuseTextureName;
			InOutImportOptions.BaseNormalTextureName = ImportUI->TextureImportData->BaseNormalTextureName;
			InOutImportOptions.BaseEmmisiveTextureName = ImportUI->TextureImportData->BaseEmmisiveTextureName;
			InOutImportOptions.BaseSpecularTextureName = ImportUI->TextureImportData->BaseSpecularTextureName;
			InOutImportOptions.BaseOpacityTextureName = ImportUI->TextureImportData->BaseOpacityTextureName;
			InOutImportOptions.BaseEmissiveColorName = ImportUI->TextureImportData->BaseEmissiveColorName;
		}
		InOutImportOptions.bImportTextures = ImportUI->bImportTextures;
	}

	//Some options are overlap between static mesh, skeletal mesh and anim sequence. We must set them according to the import type to set them only once
	if (ImportUI->MeshTypeToImport == FBXIT_StaticMesh)
	{
		UFbxStaticMeshImportData* StaticMeshData = ImportUI->StaticMeshImportData;
		InOutImportOptions.NormalImportMethod = StaticMeshData->NormalImportMethod;
		InOutImportOptions.NormalGenerationMethod = StaticMeshData->NormalGenerationMethod;
		InOutImportOptions.bComputeWeightedNormals = StaticMeshData->bComputeWeightedNormals;
		InOutImportOptions.ImportTranslation = StaticMeshData->ImportTranslation;
		InOutImportOptions.ImportRotation = StaticMeshData->ImportRotation;
		InOutImportOptions.ImportUniformScale = StaticMeshData->ImportUniformScale;
		InOutImportOptions.bTransformVertexToAbsolute = StaticMeshData->bTransformVertexToAbsolute;
		InOutImportOptions.bBakePivotInVertex = StaticMeshData->bBakePivotInVertex;
		InOutImportOptions.bImportStaticMeshLODs = StaticMeshData->bImportMeshLODs;
		InOutImportOptions.bConvertScene = StaticMeshData->bConvertScene;
		InOutImportOptions.bForceFrontXAxis = StaticMeshData->bForceFrontXAxis;
		InOutImportOptions.bConvertSceneUnit = StaticMeshData->bConvertSceneUnit;
		InOutImportOptions.VertexColorImportOption = StaticMeshData->VertexColorImportOption;
		InOutImportOptions.VertexOverrideColor = StaticMeshData->VertexOverrideColor;
		InOutImportOptions.bReorderMaterialToFbxOrder = StaticMeshData->bReorderMaterialToFbxOrder;
	}
	else if (ImportUI->MeshTypeToImport == FBXIT_SkeletalMesh)
	{
		UFbxSkeletalMeshImportData* SkeletalMeshData = ImportUI->SkeletalMeshImportData;
		InOutImportOptions.NormalImportMethod = SkeletalMeshData->NormalImportMethod;
		InOutImportOptions.NormalGenerationMethod = SkeletalMeshData->NormalGenerationMethod;
		InOutImportOptions.bComputeWeightedNormals = SkeletalMeshData->bComputeWeightedNormals;
		InOutImportOptions.ImportTranslation = SkeletalMeshData->ImportTranslation;
		InOutImportOptions.ImportRotation = SkeletalMeshData->ImportRotation;
		InOutImportOptions.ImportUniformScale = SkeletalMeshData->ImportUniformScale;
		InOutImportOptions.bTransformVertexToAbsolute = SkeletalMeshData->bTransformVertexToAbsolute;
		InOutImportOptions.bBakePivotInVertex = SkeletalMeshData->bBakePivotInVertex;
		InOutImportOptions.bImportSkeletalMeshLODs = SkeletalMeshData->bImportMeshLODs;
		InOutImportOptions.bConvertScene = SkeletalMeshData->bConvertScene;
		InOutImportOptions.bForceFrontXAxis = SkeletalMeshData->bForceFrontXAxis;
		InOutImportOptions.bConvertSceneUnit = SkeletalMeshData->bConvertSceneUnit;
		InOutImportOptions.VertexColorImportOption = SkeletalMeshData->VertexColorImportOption;
		InOutImportOptions.VertexOverrideColor = SkeletalMeshData->VertexOverrideColor;
		InOutImportOptions.bReorderMaterialToFbxOrder = SkeletalMeshData->bReorderMaterialToFbxOrder;

		if (ImportUI->bImportAnimations)
		{
			// Copy the transform information into the animation data to match the mesh.
			UFbxAnimSequenceImportData* AnimData = ImportUI->AnimSequenceImportData;
			AnimData->ImportTranslation = SkeletalMeshData->ImportTranslation;
			AnimData->ImportRotation = SkeletalMeshData->ImportRotation;
			AnimData->ImportUniformScale = SkeletalMeshData->ImportUniformScale;
			AnimData->bConvertScene = SkeletalMeshData->bConvertScene;
			AnimData->bForceFrontXAxis = SkeletalMeshData->bForceFrontXAxis;
			AnimData->bConvertSceneUnit = SkeletalMeshData->bConvertSceneUnit;
		}
	}
	else
	{
		UFbxAnimSequenceImportData* AnimData = ImportUI->AnimSequenceImportData;
		InOutImportOptions.NormalImportMethod = FBXNIM_ComputeNormals;
		InOutImportOptions.bComputeWeightedNormals = true;
		InOutImportOptions.ImportTranslation = AnimData->ImportTranslation;
		InOutImportOptions.ImportRotation = AnimData->ImportRotation;
		InOutImportOptions.ImportUniformScale = AnimData->ImportUniformScale;
		InOutImportOptions.bConvertScene = AnimData->bConvertScene;
		InOutImportOptions.bForceFrontXAxis = AnimData->bForceFrontXAxis;
		InOutImportOptions.bConvertSceneUnit = AnimData->bConvertSceneUnit;
	}

	//Skeletal mesh unshared options
	{
		InOutImportOptions.bImportAsSkeletalGeometry = ImportUI->SkeletalMeshImportData->ImportContentType == EFBXImportContentType::FBXICT_Geometry;
		InOutImportOptions.bImportAsSkeletalSkinning = ImportUI->SkeletalMeshImportData->ImportContentType == EFBXImportContentType::FBXICT_SkinningWeights;
		InOutImportOptions.bImportMorph = ImportUI->SkeletalMeshImportData->bImportMorphTargets;
		InOutImportOptions.bUpdateSkeletonReferencePose = ImportUI->SkeletalMeshImportData->bUpdateSkeletonReferencePose;
		InOutImportOptions.bImportRigidMesh = ImportUI->OriginalImportType == FBXIT_StaticMesh && ImportUI->MeshTypeToImport == FBXIT_SkeletalMesh;
		InOutImportOptions.bUseT0AsRefPose = ImportUI->SkeletalMeshImportData->bUseT0AsRefPose;
		InOutImportOptions.bPreserveSmoothingGroups = ImportUI->SkeletalMeshImportData->bPreserveSmoothingGroups;
		InOutImportOptions.OverlappingThresholds.ThresholdPosition = ImportUI->SkeletalMeshImportData->ThresholdPosition;
		InOutImportOptions.OverlappingThresholds.ThresholdTangentNormal = ImportUI->SkeletalMeshImportData->ThresholdTangentNormal;
		InOutImportOptions.OverlappingThresholds.ThresholdUV = ImportUI->SkeletalMeshImportData->ThresholdUV;
		InOutImportOptions.OverlappingThresholds.MorphThresholdPosition = ImportUI->SkeletalMeshImportData->MorphThresholdPosition;
		InOutImportOptions.bImportMeshesInBoneHierarchy = ImportUI->SkeletalMeshImportData->bImportMeshesInBoneHierarchy;
	}

	//Static mesh unshared options
	{
		InOutImportOptions.bCombineToSingle = ImportUI->StaticMeshImportData->bCombineMeshes;
		InOutImportOptions.bRemoveDegenerates = ImportUI->StaticMeshImportData->bRemoveDegenerates;
		InOutImportOptions.bBuildAdjacencyBuffer = ImportUI->StaticMeshImportData->bBuildAdjacencyBuffer;
		InOutImportOptions.bBuildReversedIndexBuffer = ImportUI->StaticMeshImportData->bBuildReversedIndexBuffer;
		InOutImportOptions.bGenerateLightmapUVs = ImportUI->StaticMeshImportData->bGenerateLightmapUVs;
		InOutImportOptions.bOneConvexHullPerUCX = ImportUI->StaticMeshImportData->bOneConvexHullPerUCX;
		InOutImportOptions.bAutoGenerateCollision = ImportUI->StaticMeshImportData->bAutoGenerateCollision;
		InOutImportOptions.StaticMeshLODGroup = ImportUI->StaticMeshImportData->StaticMeshLODGroup;
	}

	// animation unshared options
	{

		InOutImportOptions.AnimationLengthImportType = ImportUI->AnimSequenceImportData->AnimationLength;
		InOutImportOptions.AnimationRange.X = ImportUI->AnimSequenceImportData->FrameImportRange.Min;
		InOutImportOptions.AnimationRange.Y = ImportUI->AnimSequenceImportData->FrameImportRange.Max;
		// only re-sample if they don't want to use default sample rate
		InOutImportOptions.bResample = !ImportUI->AnimSequenceImportData->bUseDefaultSampleRate;
		InOutImportOptions.ResampleRate = ImportUI->AnimSequenceImportData->CustomSampleRate;
		InOutImportOptions.bPreserveLocalTransform = ImportUI->AnimSequenceImportData->bPreserveLocalTransform;
		InOutImportOptions.bDeleteExistingMorphTargetCurves = ImportUI->AnimSequenceImportData->bDeleteExistingMorphTargetCurves;
		InOutImportOptions.bRemoveRedundantKeys = ImportUI->AnimSequenceImportData->bRemoveRedundantKeys;
		InOutImportOptions.bDoNotImportCurveWithZero = ImportUI->AnimSequenceImportData->bDoNotImportCurveWithZero;
		InOutImportOptions.bImportCustomAttribute = ImportUI->AnimSequenceImportData->bImportCustomAttribute;
		InOutImportOptions.bDeleteExistingCustomAttributeCurves = ImportUI->AnimSequenceImportData->bDeleteExistingCustomAttributeCurves;
		InOutImportOptions.bDeleteExistingNonCurveCustomAttributes = ImportUI->AnimSequenceImportData->bDeleteExistingNonCurveCustomAttributes;
		InOutImportOptions.bImportBoneTracks = ImportUI->AnimSequenceImportData->bImportBoneTracks;
		InOutImportOptions.bSetMaterialDriveParameterOnCustomAttribute = ImportUI->AnimSequenceImportData->bSetMaterialDriveParameterOnCustomAttribute;
		InOutImportOptions.MaterialCurveSuffixes = ImportUI->AnimSequenceImportData->MaterialCurveSuffixes;
	}
}


//
UObject* UlcImportFileSystem::LcImportObject(UClass* InClass, UObject* InOuter, FName InName, EObjectFlags InFlags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& OutCanceled)
{
	UObject* Result = nullptr;
	//if (!Filename.IsEmpty())
	//{
	//	Result = LcFactoryCreateFile(InClass, InOuter, InName, InFlags, *Filename, Parms, Warn, OutCanceled);
	//}
	//if (Result != nullptr)
	//{
	//	Result->PostEditChange();
	//}

	return Result;
}

//PRAGMA_DISABLE_OPTIMIZATION
//UObject* UlcImportFileSystem::LcFactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)
//{
//	FString fileExtension = FPaths::GetExtension(Filename);
//	const TCHAR* Type = *fileExtension;
//	if (!IFileManager::Get().FileExists(*Filename))
//	{
//		UE_LOG(LogTemp, Error, TEXT("Failed to load file '%s'"), *Filename);
//		return nullptr;
//	}
//
//	CA_ASSUME(InParent);
//
//	GEditor->GetEditorSubsystem<UImportSubsystem>()->BroadcastAssetPreImport(this, InClass, InParent, InName, Type);
//
//	UObject* CreatedObject = NULL;
//	//Look if its a re-import, in that case we must call the re-import factory
//	UObject* ExistingObject = nullptr;
//	if (InParent != nullptr)
//	{
//		ExistingObject = StaticFindObject(UObject::StaticClass(), InParent, *(InName.ToString()));
//		if (ExistingObject)
//		{
//			FReimportHandler* ReimportHandler = nullptr;
//			UFactory* ReimportHandlerFactory = nullptr;
//			UAssetImportTask* HandlerOriginalImportTask = nullptr;
//			bool bIsObjectSupported = true;
//			if (Cast<UStaticMesh>(ExistingObject))
//			{
//				bIsObjectSupported = true;
//				// Using RF_NoFlags because we want to include class default object, which are used by the reimport manager.
//				for (TObjectIterator<UReimportFbxStaticMeshFactory> ReimportFactoryIterator(RF_NoFlags); ReimportFactoryIterator; ++ReimportFactoryIterator)
//				{
//					HandlerOriginalImportTask = ReimportFactoryIterator->AssetImportTask;
//					//ReimportFactoryIterator->AssetImportTask = AssetImportTask;
//					ReimportHandler = *ReimportFactoryIterator;
//					ReimportHandlerFactory = *ReimportFactoryIterator;
//					break;
//				}
//			}
//			else if (Cast<USkeletalMesh>(ExistingObject))
//			{
//				bIsObjectSupported = true;
//				// Using RF_NoFlags because we want to include class default object, which are used by the reimport manager.
//				for (TObjectIterator<UReimportFbxSkeletalMeshFactory> ReimportFactoryIterator(RF_NoFlags); ReimportFactoryIterator; ++ReimportFactoryIterator)
//				{
//					HandlerOriginalImportTask = ReimportFactoryIterator->AssetImportTask;
//					//ReimportFactoryIterator->AssetImportTask = AssetImportTask;
//					ReimportHandler = *ReimportFactoryIterator;
//					ReimportHandlerFactory = *ReimportFactoryIterator;
//					break;
//				}
//			}
//			else if (Cast<UAnimSequence>(ExistingObject))
//			{
//				bIsObjectSupported = true;
//				// Using RF_NoFlags because we want to include class default object, which are used by the reimport manager.
//				for (TObjectIterator<UReimportFbxAnimSequenceFactory> ReimportFactoryIterator(RF_NoFlags); ReimportFactoryIterator; ++ReimportFactoryIterator)
//				{
//					HandlerOriginalImportTask = ReimportFactoryIterator->AssetImportTask;
//					//ReimportFactoryIterator->AssetImportTask = AssetImportTask;
//					ReimportHandler = *ReimportFactoryIterator;
//					ReimportHandlerFactory = *ReimportFactoryIterator;
//					break;
//				}
//			}
//
//			if (bIsObjectSupported)
//			{
//				TArray<UObject*> ToReimportObjects;
//				ToReimportObjects.Add(ExistingObject);
//				TArray<FString> Filenames;
//				Filenames.Add(Filename);
//				//Set the new fbx source path before starting the re-import
//				FReimportManager::Instance()->UpdateReimportPaths(ExistingObject, Filenames);
//				//Do the re-import and exit
//				const bool blcIsAutomated = true;
//				const bool bShowNotification = !blcIsAutomated;
//				isAutoImport = blcIsAutomated;
//				const int32 SourceFileIndex = INDEX_NONE;
//				const bool bForceNewFile = false;
//
//				if (ReimportHandler)
//				{
//					const bool bAskForNewFileIfMissing = true;
//					const FString PreferedReimportFile;
//
//					FReimportManager::Instance()->Reimport(ExistingObject, bAskForNewFileIfMissing, bShowNotification, PreferedReimportFile, ReimportHandler, SourceFileIndex, bForceNewFile, blcIsAutomated);
//
//					if (ReimportHandlerFactory)
//					{
//						ReimportHandlerFactory->AssetImportTask = HandlerOriginalImportTask;
//					}
//				}
//				else
//				{
//					FReimportManager::Instance()->ValidateAllSourceFileAndReimport(ToReimportObjects, bShowNotification, SourceFileIndex, bForceNewFile, blcIsAutomated);
//				}
//
//				return ExistingObject;
//			}
//		}
//	}
//
//	if (lcFbxImporter == nullptr)
//	{
//		lcFbxImporter = UnFbx::FFbxImporter::GetInstance();
//	}
//
//	int32 ImportType = lcGetImportType(Filename);
//
//	UFbxImportUI* fbxOption = NewObject<UFbxImportUI>();
//	{
//		//载入mesh
//		fbxOption->bImportMesh = true;
//		//载入贴图
//		fbxOption->bImportTextures = false;
//		//载入材质
//		fbxOption->bImportMaterials = false;
//		//不导入动画
//		fbxOption->bImportAnimations = false;
//		fbxOption->bCreatePhysicsAsset = true;
//		//We are not re-importing
//		fbxOption->bIsReimport = false;
//		fbxOption->ReimportMesh = nullptr;
//		fbxOption->bAllowContentTypeImport = true;
//
//		fbxOption->bImportMaterials = false;
//		fbxOption->bOverrideFullName = true;
//
//		fbxOption->StaticMeshImportData->bCombineMeshes = true;
//		fbxOption->StaticMeshImportData->bAutoGenerateCollision = true;
//		fbxOption->AnimSequenceImportData->bImportCustomAttribute = true;
//		fbxOption->bImportAnimations = false;
//		fbxOption->MeshTypeToImport = EFBXImportType(ImportType);
//		if (fbxOption->MeshTypeToImport == FBXIT_StaticMesh)
//		{
//			fbxOption->bImportAsSkeletal = false;
//			fbxOption->StaticMeshImportData->bComputeWeightedNormals = true;
//			fbxOption->StaticMeshImportData->bTransformVertexToAbsolute = true;
//			fbxOption->StaticMeshImportData->bConvertScene = true;
//			fbxOption->StaticMeshImportData->bConvertSceneUnit = false;
//			fbxOption->StaticMeshImportData->bForceFrontXAxis = false;
//		}
//		else
//		{
//			fbxOption->bImportAsSkeletal = true;
//			fbxOption->SkeletalMeshImportData->bComputeWeightedNormals = true;
//			fbxOption->SkeletalMeshImportData->bTransformVertexToAbsolute = true;
//			fbxOption->SkeletalMeshImportData->bConvertScene = true;
//			fbxOption->SkeletalMeshImportData->bConvertSceneUnit = false;
//			fbxOption->SkeletalMeshImportData->bForceFrontXAxis = false;
//		}
//	}
//
//	ImportUI = fbxOption;
//
//	if (bDetectImportTypeOnImport)
//	{
//		if (!lcDetectImportType(ImportType))
//		{
//			// Failed to read the file info, fail the import
//			GEditor->GetEditorSubsystem<UImportSubsystem>()->BroadcastAssetPostImport(this, NULL);
//			return NULL;
//		}
//	}
//
//	lcImportOptions = lcFbxImporter->GetImportOptions();
//
//	lcImportOptions->MaterialSearchLocation = EMaterialSearchLocation::Local;
//
//
//	int32 impType = lcGetImportType(Filename);
//
//	FbxNode* RootNodeToImport = NULL;
//	RootNodeToImport = lcFbxImporter->Scene->GetRootNode();
//
//	EFBXImportType ForcedImportType = FBXIT_StaticMesh;
//
//	bool bIsObjFormat = false;
//	if (FString(Type).Equals(TEXT("obj"), ESearchCase::IgnoreCase))
//	{
//	  	bIsObjFormat = true;
//	}
//
//	bool bShowImportDialog = false;
//	bool bImportAll = false;	
//	bOperationCanceled = false;
//
//	lcImportOptions = lcGetImportOptions(lcFbxImporter, ImportUI, bShowImportDialog, bIsAutomated, InParent->GetPathName(), bOperationCanceled, bImportAll, bIsObjFormat, Filename, false, ForcedImportType);
//	if (lcImportOptions)
//	{
//		bIsAutomated = false;
//	}
//
//	ConvertScene();
//
//	// For animation and static mesh we assume there is at lease one interesting node by default
//	int32 InterestingNodeCount = 1;
//	TArray< TArray<FbxNode*>* > SkelMeshArray;
//
//	bool bImportStaticMeshLODs = ImportUI->StaticMeshImportData->bImportMeshLODs;
//	bool bCombineMeshes = ImportUI->StaticMeshImportData->bCombineMeshes;
//	bool bCombineMeshesLOD = false;
//
//	if (ImportUI->MeshTypeToImport == FBXIT_SkeletalMesh)
//	{
//		lcFbxImporter->FillFbxSkelMeshArrayInScene(RootNodeToImport, SkelMeshArray, false, (lcImportOptions->bImportAsSkeletalGeometry || lcImportOptions->bImportAsSkeletalSkinning));
//		InterestingNodeCount = SkelMeshArray.Num();
//	}
//	else if (ImportUI->MeshTypeToImport == FBXIT_StaticMesh)
//	{
//		lcFbxImporter->ApplyTransformSettingsToFbxNode(RootNodeToImport, ImportUI->StaticMeshImportData);
//
//		if (bCombineMeshes && !bImportStaticMeshLODs)
//		{
//			// If Combine meshes and dont import mesh LODs, the interesting node count should be 1 so all the meshes are grouped together into one static mesh
//			InterestingNodeCount = 1;
//		}
//		else
//		{
//			// count meshes in lod groups if we dont care about importing LODs
//			bool bCountLODGroupMeshes = !bImportStaticMeshLODs && bCombineMeshes;
//			int32 NumLODGroups = 0;
//			InterestingNodeCount = lcFbxImporter->GetFbxMeshCount(RootNodeToImport, bCountLODGroupMeshes, NumLODGroups);
//
//			// if there were LODs in the file, do not combine meshes even if requested
//			if (bImportStaticMeshLODs && bCombineMeshes && NumLODGroups > 0)
//			{
//				bCombineMeshes = false;
//				//Combine all the LOD together and export one mesh with LODs
//				bCombineMeshesLOD = true;
//			}
//		}
//		//Find all collision models, even the one contain under a LOD Group
//		lcFbxImporter->FillFbxCollisionMeshArray(RootNodeToImport);
//	}
//
//
//	if (InterestingNodeCount > 1)
//	{
//		// the option only works when there are only one asset
//		lcImportOptions->bUsedAsFullName = false;
//	}
//
//	const FString lcFilename(Filename);
//
//	if (RootNodeToImport && InterestingNodeCount > 0)
//	{
//		int32 NodeIndex = 0;
//
//		int32 ImportedMeshCount = 0;
//		if (ImportUI->MeshTypeToImport == FBXIT_StaticMesh)  // static mesh
//		{
//			UStaticMesh* NewStaticMesh = NULL;
//			if (bCombineMeshes)
//			{
//				TArray<FbxNode*> FbxMeshArray;
//				lcFbxImporter->FillFbxMeshArray(RootNodeToImport, FbxMeshArray, lcFbxImporter);
//				if (FbxMeshArray.Num() > 0)
//				{
//					NewStaticMesh = lcFbxImporter->ImportStaticMeshAsSingle(InParent, FbxMeshArray, InName, Flags, ImportUI->StaticMeshImportData, NULL, 0, nullptr);
//					lcFbxImporter->GetImportOperationCancelled();
//
//					if (!bOperationCanceled && NewStaticMesh != nullptr)
//					{
//						//Build the staticmesh
//					/*	SlowTask.EnterProgressFrame(1, GetImportTaskText(NSLOCTEXT("FbxFactory", "EndingImportingFbxMeshTask", "Finalizing static mesh import.")));*/
//						lcFbxImporter->PostImportStaticMesh(NewStaticMesh, FbxMeshArray);
//						lcFbxImporter->UpdateStaticMeshImportData(NewStaticMesh, nullptr);
//					}
//				}
//
//				ImportedMeshCount = NewStaticMesh ? 1 : 0;
//			}
//			else if (bCombineMeshesLOD)
//			{
//				TArray<FbxNode*> FbxMeshArray;
//				TArray<FbxNode*> FbxLodGroups;
//				TArray<TArray<FbxNode*>> FbxMeshesLod;
//				lcFbxImporter->FillFbxMeshAndLODGroupArray(RootNodeToImport, FbxLodGroups, FbxMeshArray);
//				FbxMeshesLod.Add(FbxMeshArray);
//
//				FFormatNamedArguments Args;
//				Args.Add(TEXT("NodeIndex"), 1);
//				Args.Add(TEXT("ArrayLength"), FbxMeshesLod.Num());
//				//FText SlowtaskText = NSLOCTEXT("UnrealEd", "Importingf", "Importing ({NodeIndex} of {ArrayLength})");
//				/*			FScopedSlowTask ImportStaticMeshSlowTask(FbxMeshesLod.Num(), GetImportTaskText(FText::Format(SlowtaskText, Args)));
//							ImportStaticMeshSlowTask.MakeDialog();*/
//
//							//Import the LOD root
//				if (FbxMeshesLod.Num() > 0)
//				{
//					//ImportStaticMeshSlowTask.EnterProgressFrame(1, GetImportTaskText(FText::Format(SlowtaskText, Args)));
//					TArray<FbxNode*>& LODMeshesArray = FbxMeshesLod[0];
//					NewStaticMesh = lcFbxImporter->ImportStaticMeshAsSingle(InParent, LODMeshesArray, InName, Flags, ImportUI->StaticMeshImportData, NULL, 0);
//					bOperationCanceled |= lcFbxImporter->GetImportOperationCancelled();
//				}
//				//Import all LODs
//				for (int32 LODIndex = 1; LODIndex < FbxMeshesLod.Num() && !bOperationCanceled; ++LODIndex)
//				{
//					TArray<FbxNode*>& LODMeshesArray = FbxMeshesLod[LODIndex];
//					Args[TEXT("NodeIndex")] = LODIndex + 1;
//					//ImportStaticMeshSlowTask.EnterProgressFrame(1, GetImportTaskText(FText::Format(SlowtaskText, Args)));
//
//					if (LODMeshesArray[0]->GetMesh() == nullptr)
//					{
//						lcFbxImporter->AddStaticMeshSourceModelGeneratedLOD(NewStaticMesh, LODIndex);
//					}
//					else
//					{
//						lcFbxImporter->ImportStaticMeshAsSingle(InParent, LODMeshesArray, InName, Flags, ImportUI->StaticMeshImportData, NewStaticMesh, LODIndex);
//						if (NewStaticMesh && NewStaticMesh->IsSourceModelValid(LODIndex))
//						{
//							NewStaticMesh->GetSourceModel(LODIndex).bImportWithBaseMesh = true;
//						}
//					}
//					//bOperationCanceled |= FbxImporter->GetImportOperationCancelled() || SlowTask.ShouldCancel();
//				}
//
//				if (!bOperationCanceled && NewStaticMesh)
//				{
//					lcFbxImporter->PostImportStaticMesh(NewStaticMesh, FbxMeshesLod[0]);
//					lcFbxImporter->UpdateStaticMeshImportData(NewStaticMesh, nullptr);
//				}
//			}
//			else // !bCombineMeshes && !bCombineMeshesLOD
//			{
//				FFormatNamedArguments Args;
//				Args.Add(TEXT("NodeIndex"), 1);
//				Args.Add(TEXT("ArrayLength"), InterestingNodeCount);
//				FScopedSlowTask ImportNodeSlowTask(InterestingNodeCount, GetImportTaskText(FText::Format(NSLOCTEXT("UnrealEd", "Importingf", "Importing ({NodeIndex} of {ArrayLength})"), Args)));
//				ImportNodeSlowTask.MakeDialog(true);
//				TArray<UObject*> AllNewAssets;
//				UObject* Object = RecursiveImportNode(lcFbxImporter, RootNodeToImport, InParent, InName, Flags, ImportNodeSlowTask, AllNewAssets);
//				//bOperationCanceled |= SlowTask.ShouldCancel();
//				NewStaticMesh = Cast<UStaticMesh>(Object);
//
//				// Make sure to notify the asset registry of all assets created other than the one returned, which will notify the asset registry automatically.
//				for (auto AssetIt = AllNewAssets.CreateConstIterator(); !bOperationCanceled && AssetIt; ++AssetIt)
//				{
//					UObject* Asset = *AssetIt;
//					if (Asset != NewStaticMesh)
//					{
//						FAssetRegistryModule::AssetCreated(Asset);
//						Asset->MarkPackageDirty();
//						//Make sure the build is up to date with the latest section info map
//						Asset->PostEditChange();
//						AdditionalImportedObjects.Add(Asset);
//					}
//				}
//
//				ImportedMeshCount = AllNewAssets.Num();
//			}
//
//			// Importing static mesh global sockets only if one mesh is imported
//			if (!bOperationCanceled && ImportedMeshCount == 1 && NewStaticMesh)
//			{
//				lcFbxImporter->ImportStaticMeshGlobalSockets(NewStaticMesh);
//			}
//
//			CreatedObject = NewStaticMesh;
//
//		}
//		else if (ImportUI->MeshTypeToImport == FBXIT_SkeletalMesh)// skeletal mesh
//		{
//			int32 TotalNumNodes = 0;
//
//			for (int32 i = 0; i < SkelMeshArray.Num() && !bOperationCanceled; i++)
//			{
//				USkeletalMesh* BaseSkeletalMesh = nullptr;
//				TArray<FbxNode*> NodeArray = *SkelMeshArray[i];
//
//				TotalNumNodes += NodeArray.Num();
//				// check if there is LODGroup for this skeletal mesh
//				int32 MaxNumberOfLOD = 1;
//				for (int32 j = 0; j < NodeArray.Num(); j++)
//				{
//					FbxNode* Node = NodeArray[j];
//					if (Node->GetNodeAttribute() && Node->GetNodeAttribute()->GetAttributeType() == FbxNodeAttribute::eLODGroup)
//					{
//						// get max LODgroup level
//						if (MaxNumberOfLOD < Node->GetChildCount())
//						{
//							MaxNumberOfLOD = Node->GetChildCount();
//						}
//					}
//				}
//
//				int32 SuccessfulLodIndex = 0;
//				bool bImportSkeletalMeshLODs = ImportUI->SkeletalMeshImportData->bImportMeshLODs;
//
//				//The skeletalmesh will be set after we import the LOD 0 since it is not created yet.
//				FScopedSkeletalMeshPostEditChange ScopedPostEditChange(nullptr);
//
//				for (int32 LODIndex = 0; LODIndex < MaxNumberOfLOD && !bOperationCanceled; LODIndex++)
//				{
//					//We need to know what is the imported lod index when importing the morph targets
//					int32 ImportedSuccessfulLodIndex = INDEX_NONE;
//					if (!bImportSkeletalMeshLODs && LODIndex > 0) // not import LOD if UI option is OFF
//					{
//						break;
//					}
//
//					TArray<FbxNode*> SkelMeshNodeArray;
//					for (int32 j = 0; j < NodeArray.Num(); j++)
//					{
//						FbxNode* Node = NodeArray[j];
//						if (Node->GetNodeAttribute() && Node->GetNodeAttribute()->GetAttributeType() == FbxNodeAttribute::eLODGroup)
//						{
//							TArray<FbxNode*> NodeInLod;
//							if (Node->GetChildCount() > LODIndex)
//							{
//								lcFbxImporter->FindAllLODGroupNode(NodeInLod, Node, LODIndex);
//							}
//							else // in less some LODGroups have less level, use the last level
//							{
//								lcFbxImporter->FindAllLODGroupNode(NodeInLod, Node, Node->GetChildCount() - 1);
//							}
//
//							for (FbxNode* MeshNode : NodeInLod)
//							{
//								SkelMeshNodeArray.Add(MeshNode);
//							}
//						}
//						else
//						{
//							SkelMeshNodeArray.Add(Node);
//						}
//					}
//					FSkeletalMeshImportData OutData;
//					if (LODIndex == 0 && SkelMeshNodeArray.Num() != 0)
//					{
//						FName OutputName = lcFbxImporter->MakeNameForMesh(InName.ToString(), SkelMeshNodeArray[0]);
//
//						UnFbx::FFbxImporter::FImportSkeletalMeshArgs ImportSkeletalMeshArgs;
//						ImportSkeletalMeshArgs.InParent = InParent;
//						ImportSkeletalMeshArgs.NodeArray = SkelMeshNodeArray;
//						ImportSkeletalMeshArgs.Name = OutputName;
//						ImportSkeletalMeshArgs.Flags = Flags;
//						ImportSkeletalMeshArgs.TemplateImportData = ImportUI->SkeletalMeshImportData;
//						ImportSkeletalMeshArgs.LodIndex = LODIndex;
//						ImportSkeletalMeshArgs.OutData = &OutData;
//						
//						MeshArg.Enqueue(ImportSkeletalMeshArgs);
//
//						FString temp = Filename;
//						if (temp != "")
//						{
//							FString leftStr;
//							FString rightStr;
//							temp.Split("/", &leftStr, &rightStr, ESearchCase::IgnoreCase, ESearchDir::FromEnd);
//							rightStr.Split(".", &leftStr, &rightStr);
//						/*	lcRunnable[i] = new FLcMultiThread(leftStr, this);*/
//						}
//
//						//BaseSkeletalMesh = lcFbxImporter->ImportSkeletalMesh(ImportSkeletalMeshArgs);
//						bOperationCanceled |= lcFbxImporter->GetImportOperationCancelled()/* || SlowTask.ShouldCancel()*/;
//					/*	if (lcFbxImporter->fbxSkeleton)
//						{
//							lcFbxImporter->fbxSkeleton->EmptyBoneProperty(BaseSkeletalMesh);
//							
//						}*/
//
//
//						if (BaseSkeletalMesh && !bOperationCanceled)
//						{
//							//Set the base skeletalmesh to the scoped post edit change variable
//							ScopedPostEditChange.SetSkeletalMesh(BaseSkeletalMesh);
//
//							if (lcImportOptions->bImportAnimations)
//							{
//								// We need to remove all scaling from the root node before we set up animation data.
//								// Othewise some of the global transform calculations will be incorrect.
//								lcFbxImporter->RemoveTransformSettingsFromFbxNode(RootNodeToImport, ImportUI->SkeletalMeshImportData);
//								lcFbxImporter->SetupAnimationDataFromMesh(BaseSkeletalMesh, InParent, SkelMeshNodeArray, ImportUI->AnimSequenceImportData, OutputName.ToString());
//
//								// Reapply the transforms for the rest of the import
//								lcFbxImporter->ApplyTransformSettingsToFbxNode(RootNodeToImport, ImportUI->SkeletalMeshImportData);
//							}
//							ImportedSuccessfulLodIndex = SuccessfulLodIndex;
//							//Increment the LOD index
//							SuccessfulLodIndex++;
//						}
//					}
//					else if (BaseSkeletalMesh && SkelMeshNodeArray[0]->GetMesh() == nullptr)
//					{
//						FSkeletalMeshUpdateContext UpdateContext;
//						UpdateContext.SkeletalMesh = BaseSkeletalMesh;
//						//Add a autogenerated LOD to the BaseSkeletalMesh
//						FSkeletalMeshLODInfo& LODInfo = BaseSkeletalMesh->AddLODInfo();
//						LODInfo.ReductionSettings.NumOfTrianglesPercentage = FMath::Pow(0.5f, (float)(SuccessfulLodIndex));
//						LODInfo.ReductionSettings.BaseLOD = 0;
//						LODInfo.bImportWithBaseMesh = true;
//						LODInfo.SourceImportFilename = FString(TEXT(""));
//						FLODUtilities::SimplifySkeletalMeshLOD(UpdateContext, SuccessfulLodIndex);
//						ImportedSuccessfulLodIndex = SuccessfulLodIndex;
//						SuccessfulLodIndex++;
//					}
//					else if (BaseSkeletalMesh) // the base skeletal mesh is imported successfully
//					{
//						FName LODObjectName = NAME_None;
//						UnFbx::FFbxImporter::FImportSkeletalMeshArgs ImportSkeletalMeshArgs;
//						ImportSkeletalMeshArgs.InParent = BaseSkeletalMesh->GetOutermost();
//						ImportSkeletalMeshArgs.NodeArray = SkelMeshNodeArray;
//						ImportSkeletalMeshArgs.Name = LODObjectName;
//						ImportSkeletalMeshArgs.Flags = RF_Transient;
//						ImportSkeletalMeshArgs.TemplateImportData = ImportUI->SkeletalMeshImportData;
//						ImportSkeletalMeshArgs.LodIndex = SuccessfulLodIndex;
//						ImportSkeletalMeshArgs.OutData = &OutData;
//
//						USkeletalMesh* LODObject = lcFbxImporter->ImportSkeletalMesh(ImportSkeletalMeshArgs); 
//						bOperationCanceled |= lcFbxImporter->GetImportOperationCancelled();
//						/*	if (lcFbxImporter->fbxSkeleton)
//							{
//								lcFbxImporter->fbxSkeleton->EmptyBoneProperty(LODObject);
//							}*/
//
//						if (!bOperationCanceled && lcFbxImporter->ImportSkeletalMeshLOD(LODObject, BaseSkeletalMesh, SuccessfulLodIndex))
//						{
//							FSkeletalMeshLODInfo* LODInfo = BaseSkeletalMesh->GetLODInfo(SuccessfulLodIndex);
//							LODInfo->bImportWithBaseMesh = true;
//							LODInfo->SourceImportFilename = FString(TEXT(""));
//							ImportedSuccessfulLodIndex = SuccessfulLodIndex;
//							SuccessfulLodIndex++;
//						}
//						else
//						{
//							lcFbxImporter->AddTokenizedErrorMessage(FTokenizedMessage::Create(EMessageSeverity::Error, LOCTEXT("FailedToImport_SkeletalMeshLOD", "Failed to import Skeletal mesh LOD.")), FFbxErrors::SkeletalMesh_LOD_FailedToImport);
//						}
//					}
//
//					//bOperationCanceled |= SlowTask.ShouldCancel();
//
//					// import morph target
//					if (!bOperationCanceled && BaseSkeletalMesh && lcImportOptions->bImportMorph && ImportedSuccessfulLodIndex != INDEX_NONE)
//					{
//						// Disable material importing when importing morph targets
//						uint32 bImportMaterials = lcImportOptions->bImportMaterials;
//						lcImportOptions->bImportMaterials = 0;
//						uint32 bImportTextures = lcImportOptions->bImportTextures;
//						lcImportOptions->bImportTextures = 0;
//
//						lcFbxImporter->ImportFbxMorphTarget(SkelMeshNodeArray, BaseSkeletalMesh, ImportedSuccessfulLodIndex, OutData);
//						bOperationCanceled |= lcFbxImporter->GetImportOperationCancelled();
//
//						lcImportOptions->bImportMaterials = !!bImportMaterials;
//						lcImportOptions->bImportTextures = !!bImportTextures;
//					}
//
//					//bOperationCanceled |= SlowTask.ShouldCancel();
//				}
//
//				if (BaseSkeletalMesh && !bOperationCanceled)
//				{
//					NodeIndex++;
//					FFormatNamedArguments Args;
//					Args.Add(TEXT("NodeIndex"), NodeIndex);
//					Args.Add(TEXT("ArrayLength"), SkelMeshArray.Num());
//					//SlowTask.EnterProgressFrame(0, GetImportTaskText(FText::Format(NSLOCTEXT("UnrealEd", "Importingf", "Importing ({NodeIndex} of {ArrayLength})"), Args)));
//
//					UnFbx::FFbxImporter::UpdateSkeletalMeshImportData(BaseSkeletalMesh, ImportUI->SkeletalMeshImportData, INDEX_NONE, nullptr, nullptr);
//
//					if (CreatedObject == nullptr)
//					{
//						CreatedObject = BaseSkeletalMesh;
//					}
//					else if (CreatedObject != BaseSkeletalMesh)
//					{
//						AdditionalImportedObjects.Add(BaseSkeletalMesh);
//					}
//				}
//
//				//bOperationCanceled |= SlowTask.ShouldCancel();
//			}
//
//			for (int32 i = 0; i < SkelMeshArray.Num(); i++)
//			{
//				delete SkelMeshArray[i];
//			}
//
//			// if total nodes we found is 0, we didn't find anything. 
//			if (TotalNumNodes == 0)
//			{
//				lcFbxImporter->AddTokenizedErrorMessage(FTokenizedMessage::Create(EMessageSeverity::Error, LOCTEXT("FailedToImport_NoMeshFoundOnRoot", "Could not find any valid mesh on the root hierarchy. If you have mesh in the sub hierarchy, please enable option of [Import Meshes In Bone Hierarchy] when import.")),
//					FFbxErrors::SkeletalMesh_NoMeshFoundOnRoot);
//			}
//		}
//		else if (ImportUI->MeshTypeToImport == FBXIT_Animation)// animation
//		{
//			if (lcImportOptions->SkeletonForAnimation)
//			{
//				// will return the last animation sequence that were added
//				CreatedObject = UEditorEngine::ImportFbxAnimation(lcImportOptions->SkeletonForAnimation, InParent, ImportUI->AnimSequenceImportData, *Filename, *InName.ToString(), true);
//			}
//		}
//	}
//	else
//	{
//		if (RootNodeToImport == NULL)
//		{
//			lcFbxImporter->AddTokenizedErrorMessage(FTokenizedMessage::Create(EMessageSeverity::Error, LOCTEXT("FailedToImport_InvalidRoot", "Could not find root node.")), FFbxErrors::SkeletalMesh_InvalidRoot);
//		}
//		else if (ImportUI->MeshTypeToImport == FBXIT_SkeletalMesh)
//		{
//			lcFbxImporter->AddTokenizedErrorMessage(FTokenizedMessage::Create(EMessageSeverity::Error, LOCTEXT("FailedToImport_InvalidBone", "Failed to find any bone hierarchy. Try disabling the \"Import As Skeletal\" option to import as a rigid mesh. ")), FFbxErrors::SkeletalMesh_InvalidBone);
//		}
//		else
//		{
//			lcFbxImporter->AddTokenizedErrorMessage(FTokenizedMessage::Create(EMessageSeverity::Error, LOCTEXT("FailedToImport_InvalidNode", "Could not find any node.")), FFbxErrors::SkeletalMesh_InvalidNode);
//		}
//	}
//
//	if (lcFbxImporter && !bOperationCanceled)
//	{
//		lcFbxImporter->ReleaseScene();
//		GEditor->GetEditorSubsystem<UImportSubsystem>()->BroadcastAssetPostImport(this, CreatedObject);
//	}
//
//
//	return CreatedObject;
//}
//PRAGMA_ENABLE_OPTIMIZATION
int32 UlcImportFileSystem::lcGetImportType(const FString& InFilename)
{
	int32 Result = -1; // Default to invalid
	FString Filename = InFilename;
	
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

UnFbx::FBXImportOptions* UlcImportFileSystem::getOptions()
{
	if (lcImportOptions)
	{
		return lcImportOptions;
	}
	return nullptr;
}


TQueue<UnFbx::FFbxImporter::FImportSkeletalMeshArgs>& UlcImportFileSystem::getMeshArgs()
{
	return MeshArg;
}



UnFbx::FBXImportOptions* lcGetImportOptions(UnFbx::FFbxImporter* FbxImporter, UFbxImportUI* ImportUI, bool bShowOptionDialog, bool bIsAutomated, const FString& FullPath, bool& OutOperationCanceled, bool& bOutImportAll, bool bIsObjFormat, const FString& InFilename, bool bForceImportType, /*UnFbx::*/EFBXImportType ImportType)
{
	OutOperationCanceled = false;

	if (bIsAutomated)
	{
		bOutImportAll = false;
		UnFbx::FBXImportOptions* ImportOptions = FbxImporter->GetImportOptions();

		// if Skeleton was set by outside, please make sure copy back to UI
		if (ImportOptions->SkeletonForAnimation)
		{
			ImportUI->Skeleton = ImportOptions->SkeletonForAnimation;
		}
		else
		{
			// Look in the current target directory to see if we have a skeleton
			FARFilter Filter;
			Filter.PackagePaths.Add(*FPaths::GetPath(FullPath));
			Filter.ClassNames.Add(USkeleton::StaticClass()->GetFName());

			IAssetRegistry& AssetRegistry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry").Get();
			TArray<FAssetData> SkeletonAssets;
			AssetRegistry.GetAssets(Filter, SkeletonAssets);
			if (SkeletonAssets.Num() > 0)
			{
				ImportUI->Skeleton = CastChecked<USkeleton>(SkeletonAssets[0].GetAsset());
			}
			else
			{
				ImportUI->Skeleton = NULL;
			}
		}

		if (ImportOptions->PhysicsAsset)
		{
			ImportUI->PhysicsAsset = ImportOptions->PhysicsAsset;
		}
		else
		{
			ImportUI->PhysicsAsset = NULL;
		}

		if (bForceImportType)
		{
			ImportUI->MeshTypeToImport = ImportType;
			ImportUI->OriginalImportType = ImportType;
		}

		ImportUI->bImportAsSkeletal = ImportUI->MeshTypeToImport == FBXIT_SkeletalMesh;
		ImportUI->bImportMesh = ImportUI->MeshTypeToImport != FBXIT_Animation;
		ImportUI->bIsObjImport = bIsObjFormat;

		//This option must always be the same value has the skeletalmesh one.
		ImportUI->AnimSequenceImportData->bImportMeshesInBoneHierarchy = ImportUI->SkeletalMeshImportData->bImportMeshesInBoneHierarchy;

		//////////////////////////////////////////////////////////////////////////
		// Set the information section data

		//Make sure the file is open to be able to read the header before showing the options
		//If the file is already open it will simply return false.
		if (FbxImporter->ReadHeaderFromFile(InFilename, true))
		{

			ImportUI->FileVersion = FbxImporter->GetFbxFileVersion();
			ImportUI->FileCreator = FbxImporter->GetFileCreator();
			// do analytics on getting Fbx data
			FbxDocumentInfo* DocInfo = FbxImporter->Scene->GetSceneInfo();
			if (DocInfo)
			{
				FString LastSavedVendor(UTF8_TO_TCHAR(DocInfo->LastSaved_ApplicationVendor.Get().Buffer()));
				FString LastSavedAppName(UTF8_TO_TCHAR(DocInfo->LastSaved_ApplicationName.Get().Buffer()));
				FString LastSavedAppVersion(UTF8_TO_TCHAR(DocInfo->LastSaved_ApplicationVersion.Get().Buffer()));

				ImportUI->FileCreatorApplication = LastSavedVendor + TEXT(" ") + LastSavedAppName + TEXT(" ") + LastSavedAppVersion;
			}
			else
			{
				ImportUI->FileCreatorApplication = TEXT("");
			}

			ImportUI->FileUnits = FbxImporter->GetFileUnitSystem();

			ImportUI->FileAxisDirection = FbxImporter->GetFileAxisDirection();

			//Set the info original file frame rate
			ImportUI->FileSampleRate = FString::Printf(TEXT("%.2f"), FbxImporter->GetOriginalFbxFramerate());

			//Set the info start time and the end time
			ImportUI->AnimStartFrame = TEXT("0");
			ImportUI->AnimEndFrame = TEXT("0");
			FbxTimeSpan AnimTimeSpan(FBXSDK_TIME_INFINITE, FBXSDK_TIME_MINUS_INFINITE);
			int32 AnimStackCount = FbxImporter->Scene->GetSrcObjectCount<FbxAnimStack>();
			for (int32 AnimStackIndex = 0; AnimStackIndex < AnimStackCount; AnimStackIndex++)
			{
				FbxAnimStack* CurAnimStack = FbxImporter->Scene->GetSrcObject<FbxAnimStack>(AnimStackIndex);
				FbxTimeSpan AnimatedInterval(FBXSDK_TIME_INFINITE, FBXSDK_TIME_MINUS_INFINITE);
				FbxImporter->Scene->GetRootNode()->GetAnimationInterval(AnimatedInterval, CurAnimStack);
				// find the most range that covers by both method, that'll be used for clamping
				AnimTimeSpan.SetStart(FMath::Min<FbxTime>(AnimTimeSpan.GetStart(), AnimatedInterval.GetStart()));
				AnimTimeSpan.SetStop(FMath::Max<FbxTime>(AnimTimeSpan.GetStop(), AnimatedInterval.GetStop()));
			}
			if (AnimTimeSpan.GetStart() != FBXSDK_TIME_INFINITE)
			{
				FbxTime EachFrame = FBXSDK_TIME_ONE_SECOND / FbxImporter->GetOriginalFbxFramerate();
				ImportUI->AnimStartFrame = FString::FromInt(AnimTimeSpan.GetStart().Get() / EachFrame.Get());
				ImportUI->AnimEndFrame = FString::FromInt(AnimTimeSpan.GetStop().Get() / EachFrame.Get());
			}
		}

		if (ImportUI->MeshTypeToImport != FBXIT_Animation && ImportUI->ReimportMesh != nullptr)
		{
			ImportUI->OnUpdateCompareFbx = FOnUpdateCompareFbx::CreateLambda([&ImportUI, &FbxImporter]
				{
					//Fill the importUI compare
					ImportUI->UpdateCompareData(FbxImporter);
				});

			ImportUI->OnShowMaterialConflictDialog = FOnShowConflictDialog::CreateLambda([&ImportUI, &FbxImporter]
				{
					if (!ImportUI->MaterialCompareData.bHasConflict)
					{
						return;
					}
					if (ImportUI->MeshTypeToImport == FBXIT_SkeletalMesh)
					{

						//PrepareAndShowMaterialConflictPreviewDialog<FSkeletalMaterial>(ImportUI);
					}
					else if (ImportUI->MeshTypeToImport == FBXIT_StaticMesh)
					{
						//PrepareAndShowMaterialConflictPreviewDialog<FStaticMaterial>(ImportUI);
					}
				});

			ImportUI->OnShowSkeletonConflictDialog = FOnShowConflictDialog::CreateLambda([&ImportUI, &FbxImporter]()
				{
					if (ImportUI->SkeletonCompareData.CompareResult == ImportCompareHelper::ECompareResult::SCR_None)
					{
						return;
					}
					if (ImportUI->MeshTypeToImport == FBXIT_SkeletalMesh)
					{
						//PrepareAndShowSkeletonConflictPreviewDialog(ImportUI);
					}
				});

		}

		if (ImportUI->MeshTypeToImport == FBXIT_SkeletalMesh || ImportUI->MeshTypeToImport == FBXIT_Animation)
		{
			//Set some hardcoded options for skeletal mesh
			ImportUI->SkeletalMeshImportData->bBakePivotInVertex = false;
			ImportOptions->bBakePivotInVertex = false;
			ImportUI->SkeletalMeshImportData->bTransformVertexToAbsolute = true;
			ImportOptions->bTransformVertexToAbsolute = true;
			//when user import animation only we must get duplicate "bImportMeshesInBoneHierarchy" option from ImportUI anim sequence data
			if (!ImportUI->bImportMesh && ImportUI->bImportAnimations)
			{
				ImportUI->SkeletalMeshImportData->bImportMeshesInBoneHierarchy = ImportUI->AnimSequenceImportData->bImportMeshesInBoneHierarchy;
			}
			else
			{
				ImportUI->AnimSequenceImportData->bImportMeshesInBoneHierarchy = ImportUI->SkeletalMeshImportData->bImportMeshesInBoneHierarchy;
			}
		}

		UFbxImportUI::SaveOptions(ImportUI);

		if (ImportUI->StaticMeshImportData)
		{
			UFbxImportUI::SaveOptions(ImportUI->StaticMeshImportData);
		}

		if (ImportUI->SkeletalMeshImportData)
		{
			UFbxImportUI::SaveOptions(ImportUI->SkeletalMeshImportData);
		}

		if (ImportUI->AnimSequenceImportData)
		{
			UFbxImportUI::SaveOptions(ImportUI->AnimSequenceImportData);
		}

		if (ImportUI->TextureImportData)
		{
			UFbxImportUI::SaveOptions(ImportUI->TextureImportData);
		}

		//Automation tests set ImportUI settings directly.  Just copy them over
	/*	UnFbx::FBXImportOptions* ImportOptions = FbxImporter->GetImportOptions();*/
		////Clean up the options
		//UnFbx::FBXImportOptions::ResetOptions(ImportOptions);

		UE_LOG(LogTemp, Warning, TEXT("SDFSFSFSFS: %d"), ImportOptions->bConvertScene);
		lcApplyImportUIToImportOptions(ImportUI, *ImportOptions);
		return ImportOptions;
	}
	else
	{
		return FbxImporter->GetImportOptions();
	}

	return NULL;

}

bool UlcImportFileSystem::lcDetectImportType(int32 ImportType)
{
	UnFbx::FFbxImporter* FFbxImporter = UnFbx::FFbxImporter::GetInstance();

	if (ImportType != -1)
	{
		ImportUI->MeshTypeToImport = EFBXImportType(ImportType);
		ImportUI->OriginalImportType = ImportUI->MeshTypeToImport;
	}
	return true;
}

void UlcImportFileSystem::ConvertScene()
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

void UlcImportFileSystem::SetCurrPath(const FString& path)
{
	currentPath = path;
}

TArray<FString> UlcImportFileSystem::getFileFullPath()
{
	FString OpenFilenames;
	FString path;
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	bool bOpened = false;
	if (DesktopPlatform != NULL)
	{
		//TSharedPtr<SWindow> ParentWindow = FSlateApplication::Get().FindWidgetWindow(SourceFileValueWidget.ToSharedRef());
		//void* ParentWindowHandle = (ParentWindow.IsValid() && ParentWindow->GetNativeWindow().IsValid()) ? ParentWindow->GetNativeWindow()->GetOSWindowHandle() : nullptr;

		FString DefaultFile = TEXT("");
		FString DefaultPath = TEXT("");

		DefaultFile = TEXT("");

		bOpened = DesktopPlatform->OpenDirectoryDialog(
			NULL,
			TEXT("Select file.."),
			DefaultPath,
			OpenFilenames);
	}

	if (bOpened == true)
	{
		path = OpenFilenames;
	}
	else
	{
		path = "";
	}

	TArray<FString> retArr;
	TArray<bool> bDirArr;
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
	return retArr;
}

#undef LOCTEXT_NAMESPACE