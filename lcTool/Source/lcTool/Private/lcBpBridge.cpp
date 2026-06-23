// Fill out your copyright notice in the Description page of Project Settings.


#include "lcBpBridge.h"
#include "../../Plugins/Editor/EditorScriptingUtilities/Source/EditorScriptingUtilities/Public/EditorLevelLibrary.h"
#include "Engine/RendererSettings.h"
#include "../../Source/Editor/Kismet/Public/SSCSEditor.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
#include "Runtime/Engine/Classes/Animation/SkeletalMeshActor.h"



void UlcBpBridge::ReplaceMeshMat()
{
	if (!bPasswordCheck)
		return;
	USkeletalMesh* Blueprint1 = matReplaceSke;
	UStaticMesh* staticMeshPtr = matReplaceStatic;

	if (bStaticMesh)
	{
		if (!staticMeshPtr)
			return;
	}
	else
	{
		if (!Blueprint1)
			return;
	}

	TArray<UObject*>objArray;

	UObjectLibrary* objectLibrary = UObjectLibrary::CreateLibrary(UMaterialInterface::StaticClass(), false, GIsEditor);

	if (objectLibrary)
	{
		objectLibrary->AddToRoot();
		objectLibrary->bRecursivePaths = false;
	}
	else
	{
		return;
	}

	for (auto allPath : dirPathSet)
	{
		objectLibrary->LoadAssetDataFromPath(*allPath);
		TArray<FAssetData> arrayAssetData;
		objectLibrary->GetAssetDataList(arrayAssetData);

		for (int32 index = 0; index < arrayAssetData.Num(); ++index)
		{
			UObject* lsMat = Cast<UObject>(arrayAssetData[index].GetAsset());


			if (lsMat)
			{
				objArray.Add(lsMat);
			}
		}
	}



	if (objArray.Num() <= 0)
		return;

	TMap<FString, UMaterialInterface*>lsMap;
	for (auto lsObj : objArray)
	{
		UMaterialInterface* lsMat = Cast<UMaterialInterface>(lsObj);
		if (lsMat)
		{
			FString matName;
			lsMat->GetName(matName);
			if (matName != "")
			{
				lsMap.Add(matName, lsMat);
			}
		}
	}

	int count = 0;
	TArray<AActor*> validActor = GetLevelMesh();

	if (bStaticMesh)
	{
		for (int j = 0; j < validActor.Num(); j++)
		{
			AStaticMeshActor* tempStaticMesh = Cast<AStaticMeshActor>(validActor[j]);
			for (int i = 0; i < staticMeshPtr->StaticMaterials.Num(); i++)
			{
				FStaticMaterial lsFsm = staticMeshPtr->StaticMaterials[i];

				UMaterialInterface** findMat = lsMap.Find(lsFsm.MaterialSlotName.ToString());

				if (findMat)
				{
					staticMeshPtr->StaticMaterials[i].MaterialInterface = *findMat;
					tempStaticMesh->GetStaticMeshComponent()->SetMaterial(i, *findMat);
					//tempStaticMesh->GetStaticMeshComponent()->GetStaticMesh()->StaticMaterials[i] = *findMat;
					count++;
					UE_LOG(LogTemp, Warning, TEXT("replace mat %s"), *lsFsm.MaterialSlotName.ToString());
				}
			}
			tempStaticMesh->MarkPackageDirty();
		}
		staticMeshPtr->MarkPackageDirty();


	}
	else
	{
		for (int j = 0; j < validActor.Num(); j++)
		{
			ASkeletalMeshActor* tempSkeleMesh = Cast<ASkeletalMeshActor>(validActor[j]);
			for (int i = 0; i < Blueprint1->Materials.Num(); i++)
			{
				FSkeletalMaterial lsFsm = Blueprint1->Materials[i];

				UMaterialInterface** findMat = lsMap.Find(lsFsm.MaterialSlotName.ToString());

				if (findMat)
				{
					Blueprint1->Materials[i].MaterialInterface = *findMat;
					tempSkeleMesh->GetSkeletalMeshComponent()->SetMaterial(i, *findMat);
					tempSkeleMesh->GetSkeletalMeshComponent()->SkeletalMesh->Materials[i] = *findMat;
					count++;
					UE_LOG(LogTemp, Warning, TEXT("replace mat %s"), *lsFsm.MaterialSlotName.ToString());
				}
			}
			tempSkeleMesh->MarkPackageDirty();
		}
		Blueprint1->MarkPackageDirty();
	}

	UE_LOG(LogTemp, Warning, TEXT("replace mat count is %d"), count);


}

void UlcBpBridge::ReplaceLevelMeshMat()
{
}

TArray<AActor*> UlcBpBridge::GetLevelMesh()
{
	TArray<AActor*> allActor = UEditorLevelLibrary::GetAllLevelActors();
	TArray<AActor*> validActor;
	if (bStaticMesh)
	{
		if (matReplaceStatic)
		{
			if (allActor.Num() > 0)
			{
				for (AActor* actor : allActor)
				{
					AStaticMeshActor* lsStaticMeshActor = Cast<AStaticMeshActor>(actor);
					UE_LOG(LogTemp, Warning, TEXT("actor %s"), lsStaticMeshActor);
					if (!lsStaticMeshActor)
						continue;

					if (lsStaticMeshActor->GetStaticMeshComponent()->GetStaticMesh()
						&& lsStaticMeshActor->GetStaticMeshComponent()->GetStaticMesh() == matReplaceStatic)
					{
						validActor.Add(lsStaticMeshActor);
					}

					//FString path;
					//path = actor->GetPathName();
					//if (path == matReplaceStatic->GetPathName())
					//{

					//}
				}
			}
		}
	}
	else
	{
		if (matReplaceSke)
		{
			if (allActor.Num() > 0)
			{
				for (AActor* actor : allActor)
				{
					ASkeletalMeshActor* lsSkeleMeshActor = Cast<ASkeletalMeshActor>(actor);
					if (!lsSkeleMeshActor)
						continue;

					if (lsSkeleMeshActor->GetSkeletalMeshComponent()->SkeletalMesh
						&& lsSkeleMeshActor->GetSkeletalMeshComponent()->SkeletalMesh == matReplaceSke)
					{
						validActor.Add(lsSkeleMeshActor);
					}

					//FString path;
					//path = actor->GetPathName();
					//if (path == matReplaceStatic->GetPathName())
					//{

					//}
				}

			}
		}
	}



	return validActor;
}



TArray<FString> UlcBpBridge::getAllFileOnDirectory(FString path)
{
	FString tempPath = path + "/";
	FString str = FPaths::ProjectContentDir() + tempPath;
	UE_LOG(LogTemp, Warning, TEXT("Path : %s"), *str);
	TArray<FString> files;
	//FPaths::NormalizeDirectoryName(tempPath);
	IFileManager& fileManager = IFileManager::Get();
	FString finalPath = str / TEXT("*");

	fileManager.FindFiles(files, *finalPath, true, false);
	if (files.Num() > 0)
	{
		return files;
	}

	files.Empty();
	return files;
}

bool UlcBpBridge::addDataTableValue(UDataTable* Table, FFeather featherPro)
{
	if (!bPasswordCheck)
		return false;

	static const FString Context = FString(TEXT("datatable add value"));
	TArray<FName> allName = Table->GetRowNames();
	if (!allName.Contains(FName(featherPro.groomAsset->GetName())))
	{
		Table->RowStruct = featherPro.StaticStruct();

		Table->AddRow(FName(featherPro.groomAsset->GetName()), featherPro);

		FContentBrowserModule& ContentBrowserModule = FModuleManager::Get().LoadModuleChecked<FContentBrowserModule>("ContentBrowser");

		ContentBrowserModule.Get().SyncBrowserToAssets(TArray<UObject*>({ Table }), true);

		Table->Modify(true);
		return true;
	}


	//FFeather* DataTableRow = Table->FindRow<FFeather>(FName(featherPro.groomAsset->GetName()), Context);
	//UE_LOG(LogTemp, Warning, TEXT("3333333 : %s"), *featherPro.groomAsset->GetName());
	//if (!DataTableRow)
	//{
	//	
	//}
	return false;
}

bool UlcBpBridge::deleteDataTableValue(UDataTable* Table, FFeather featherPro)
{
	if (!bPasswordCheck)
		return false;

	UDataTable* tempTable = Table;
	static const FString Context = FString(TEXT("datatable add value"));

	FFeather* DataTableRow = Table->FindRow<FFeather>(FName(featherPro.groomAsset->GetName()), Context);
	if (!DataTableRow)
	{
		Table->RemoveRow(FName(featherPro.groomAsset->GetName()));
		return true;
	}
	return false;
}

TMap<UGroomAsset*, UGroomBindingAsset*> UlcBpBridge::getTableAllGroomAsset(UDataTable* Table)
{
	TMap<UGroomAsset*, UGroomBindingAsset*> mapGA;
	FString Context;
	TArray<FName> tempName = Table->GetRowNames();
	for (auto name : tempName)
	{
		FFeather* featherStruct = Table->FindRow<FFeather>(name, Context);
		mapGA.Add(featherStruct->groomAsset, featherStruct->groomBindingAsset);
	}
	return mapGA;
}

//UActorComponent* UlcBpBridge::getGroomActorComponent(TSubclassOf<UActorComponent> ComponentClass)
//{
//	UClass* newClass = ComponentClass;
//
//	//UActorComponent* aComponent = SSCSEditor::PerformComboAddClass(ComponentClass, EComponentCreateAction::Type::CreateNewBlueprintClass);
//
//
//	return 
//}

void UlcBpBridge::ClearMeshAllMat()
{
	if (!bPasswordCheck)
		return;
	USkeletalMesh* Blueprint1 = matReplaceSke;
	UStaticMesh* staticMeshPtr = matReplaceStatic;

	if (bStaticMesh)
	{
		if (!staticMeshPtr)
			return;
	}
	else
	{
		if (!Blueprint1)
			return;
	}

	TArray<AActor*> allActor = GetLevelMesh();

	if (bStaticMesh)
	{
		for (AActor* actor : allActor)
		{
			AStaticMeshActor* tempStaticMeshActor = Cast<AStaticMeshActor>(actor);
			for (int i = 0; i < staticMeshPtr->StaticMaterials.Num(); i++)
			{
				FStaticMaterial lsFsm = staticMeshPtr->StaticMaterials[i];
				tempStaticMeshActor->GetStaticMeshComponent()->SetMaterial(i, NULL);
				staticMeshPtr->StaticMaterials[i].MaterialInterface = NULL;
			}
			tempStaticMeshActor->MarkPackageDirty();
		}
		staticMeshPtr->MarkPackageDirty();
	}
	else
	{
		for (AActor* actor : allActor)
		{
			ASkeletalMeshActor* tempSkelMeshActor = Cast<ASkeletalMeshActor>(actor);
			for (int i = 0; i < Blueprint1->Materials.Num(); i++)
			{
				FSkeletalMaterial lsFsm = Blueprint1->Materials[i];
				tempSkelMeshActor->GetSkeletalMeshComponent()->SetMaterial(i, NULL);
				Blueprint1->Materials[i].MaterialInterface = NULL;
			}
			tempSkelMeshActor->MarkPackageDirty();
		}
		Blueprint1->MarkPackageDirty();
	}
}

void UlcBpBridge::setMeshType(bool bStatic)
{
	if (!bPasswordCheck)
		return;
	bStaticMesh = bStatic;
}

void UlcBpBridge::CallAddPitch(FString& path)
{
	if (!bPasswordCheck)
		return;
	FString lsPath;

	TSharedRef<SDlgPickAssetPath> SaveFoliageTypeDialog =
		SNew(SDlgPickAssetPath)
		.Title(FText::FromString("select mat dir!"))
		.DefaultAssetPath(FText::FromString(TEXT("/Game")));

	FString PackageName = "";

	if (SaveFoliageTypeDialog->ShowModal() != EAppReturnType::Cancel)
	{
		PackageName = SaveFoliageTypeDialog->GetAssetPath().ToString();


		lsPath = PackageName;
	}

	path = PackageName;

	if (lsPath != "")
		dirPathSet.Add(lsPath);
}

void UlcBpBridge::DelDirPathToSet(FString path)
{
	if (!bPasswordCheck)
		return;
	dirPathSet.Remove(path);
}

void UlcBpBridge::EmptyPathSet(FString path)
{
	if (!bPasswordCheck)
		return;
	dirPathSet.Empty();
}

void UlcBpBridge::GetSetArray(TArray<FString>& retPathSet)
{
	if (!bPasswordCheck)
		return;
	retPathSet = dirPathSet.Array();
}

void UlcBpBridge::setMesh(UStaticMesh* staticMesh, USkeletalMesh* skMesh)
{
	if (!bPasswordCheck)
		return;
	matReplaceSke = skMesh;
	matReplaceStatic = staticMesh;
}



void UlcBpBridge::RemoveAllNodeContainSpecialName(FString name)
{
	if (!sqPtr)
		return;
	TArray<FMovieSceneBinding>lsArray = sqPtr->GetMovieScene()->GetBindings();

	if (lsArray.Num() <= 0)
		return;
	for (auto& it : lsArray)
	{
		if (it.GetName().Contains(name))
		{
			if (!sqPtr->GetMovieScene()->RemovePossessable(it.GetObjectGuid()))
			{
				sqPtr->GetMovieScene()->RemoveSpawnable(it.GetObjectGuid());
			}
		}
	}
}

void UlcBpBridge::RemoveAllNodeEqualSpecialName(FString name)
{
	if (!sqPtr)
		return;
	TArray<FMovieSceneBinding>lsArray = sqPtr->GetMovieScene()->GetBindings();

	if (lsArray.Num() <= 0)
		return;
	for (auto& it : lsArray)
	{
		if (it.GetName() == name)
		{
			if (!sqPtr->GetMovieScene()->RemovePossessable(it.GetObjectGuid()))
			{
				sqPtr->GetMovieScene()->RemoveSpawnable(it.GetObjectGuid());
			}
		}
	}
}

void UlcBpBridge::GetAllSqPtrBinddingsName(TArray<FString>& outString)
{
	if (!sqPtr)
		return;

	TArray<FMovieSceneBinding>lsArray = sqPtr->GetMovieScene()->GetBindings();

	if (lsArray.Num() <= 0)
		return;
	for (auto& it : lsArray)
	{
		outString.Add(it.GetName());
	}

}

void UlcBpBridge::addNewSelectSet(FString setName, TArray<FString> setContent)
{
	if (!bPasswordCheck)
		return;
	if (!levelSelectMap.Find(setName)
		&& setName != "")
	{
		levelSelectMap.Add(setName, setContent);
	}
}

void UlcBpBridge::addContentToSpecialSet(FString setName, TArray<FString> setContent)
{
	if (!bPasswordCheck)
		return;
	TArray<FString>* setContentPtr = levelSelectMap.Find(setName);
	if (setContentPtr)
	{
		setContentPtr->Append(setContent);
	}
}

TArray<FString> UlcBpBridge::getSelectContentBySetName(FString SetName, bool& bfind)
{
	TArray<FString>* findContentArray = levelSelectMap.Find(SetName);
	TArray<FString>ret;

	if (findContentArray)
	{
		ret = *findContentArray;
		bfind = true;
		return ret;
	}
	else
	{
		bfind = false;
		return ret;
	}
	return TArray<FString>();
}

void UlcBpBridge::removeSpecialSetNameContent(FString SetName)
{
	if (!bPasswordCheck)
		return;
	levelSelectMap.Remove(SetName);
}

void UlcBpBridge::setSpecialNameToNewSetName(FString SetName, FString newSetName)
{
	if (!bPasswordCheck)
		return;
	TArray<FString>* findArray = levelSelectMap.Find(SetName);
	if (findArray)
	{
		TArray<FString>newArr;
		newArr.Append(*findArray);
		levelSelectMap.Remove(SetName);
		levelSelectMap.Add(newSetName, newArr);
	}
}

TArray<FString> UlcBpBridge::getAllSetName()
{
	TArray<FString>ret;

	levelSelectMap.GenerateKeyArray(ret);

	return ret;
}

void UlcBpBridge::ClearLevelSelectSet()
{
	levelSelectMap.Empty();
}

FLinearColor UlcBpBridge::getSpecialIdColor(int id)
{
	if (!tempStaticClass::ThePDispose(false, false))
	{
		return FLinearColor(0, 0, 0, 0);
	}
	if (id >= 5 && id <= 19)
	{
		if (id == 5)
		{
			return FLinearColor(1, 0, 0, 1);
		}
		else if (id == 6)
		{
			return FLinearColor(0, 1, 0, 1);
		}
		else if (id == 7)
		{
			return FLinearColor(0, 0, 1, 1);
		}
		else if (id == 8)
		{
			return FLinearColor(1, 1, 0, 1);
		}
		else if (id == 9)
		{
			return FLinearColor(0, 1, 1, 1);
		}
		else if (id == 10)
		{
			return FLinearColor(1, 0, 1, 1);
		}
		else if (id == 11)
		{
			return FLinearColor(0.5, 0, 0, 1);
		}
		else if (id == 12)
		{
			return FLinearColor(0, 0.5, 0, 1);
		}
		else if (id == 13)
		{
			return FLinearColor(0, 0, 0.5, 1);
		}
		else if (id == 14)
		{
			return FLinearColor(0.5, 0.5, 0, 1);
		}
		else if (id == 15)
		{
			return FLinearColor(0, 0.5, 0.5, 1);
		}
		else if (id == 16)
		{
			return FLinearColor(0.5, 0, 0.5, 1);
		}
		else if (id == 17)
		{
			return FLinearColor(1, 0.5, 0, 1);
		}
		else if (id == 18)
		{
			return FLinearColor(1, 0, 0.5, 1);
		}
		else if (id == 19)
		{
			return FLinearColor(1, 0.5, 0.5, 1);
		}
		return FLinearColor(0, 0, 0, 1);
		FLinearColor retColor;
	}
	else
	{
		FLinearColor retColor;
		float lsVlaue = (float)id / 256;

		{
			FVector idx(lsVlaue);

			float R = FMath::Frac(
				FVector::DotProduct(
					FVector((idx.X + 33 / 2) - 64.340622f,
						-72.465622f,
						(idx.X + 33 / 2) - 64.340622f)
					* FVector((idx.X + 33 / 2) - 64.340622f, -72.465622f, -72.465622f), FVector(20.390625f, 60.703125f, 2.4281209f)));

			float G = FMath::Frac(FVector::DotProduct(FVector((idx.X + 1 / 2) - 64.340622f, -72.465622f, (idx.X + 1 / 2) - 64.340622f) * FVector((idx.X + 1 / 2) - 64.340622f, -72.465622f, -72.465622f), FVector(20.390625f, 60.703125f, 2.4281209f)));

			float B = FMath::Frac(FVector::DotProduct(FVector((idx.X + 71 / 2) - 64.340622f, -72.465622f, (idx.X + 71 / 2) - 64.340622f) * FVector((idx.X + 71 / 2) - 64.340622f, -72.465622f, -72.465622f), FVector(20.390625f, 60.703125f, 2.4281209f)));

			FVector lsRGB(R, G, B);

			FVector clampRGB(FMath::Clamp(R, 0.0f, 1.0f), FMath::Clamp(G, 0.0f, 1.0f), FMath::Clamp(B, 0.0f, 1.0f));

			clampRGB.Normalize();

			clampRGB = FMath::Lerp(clampRGB, lsRGB, 0.65f);

			int clampChanle = FMath::Clamp(id, 0, 1);

			FVector finalColor = clampRGB * clampChanle;

			retColor.R = finalColor.X;
			retColor.G = finalColor.Y;
			retColor.B = finalColor.Z;
			retColor.A = 1;
		}

		return retColor;
	}
}

int UlcBpBridge::addNewColorOuputSet()
{
	int retId = 0;
	for (int i = 5; i < 254; i++)
	{
		if (!colorOutputSet.Find(i))
		{
			colorOutputSet.Add(i, TArray<FString>());
			retId = i;
			break;
		}
	}
	return retId;
}

void UlcBpBridge::delColorOutputSet(int id)
{
	colorOutputSet.Remove(id);
}

TArray<FString> UlcBpBridge::getSpecialIdColorouputContent(int id)
{

	TArray<FString>* retArray = colorOutputSet.Find(id);
	if (!retArray)
		return TArray<FString>();

	return *retArray;
}

TArray<int> UlcBpBridge::getAllColorId()
{
	TArray<int>retKey;
	colorOutputSet.GetKeys(retKey);
	return retKey;
}

void UlcBpBridge::addContentToSpecialColorSet(int id, TArray<FString> content)
{
	if (!bPasswordCheck)
		return;
	TArray<FString>* contentArray = colorOutputSet.Find(id);
	if (contentArray)
	{
		contentArray->Append(content);
	}
}

void UlcBpBridge::clearAllColorOuputSet()
{
	if (!bPasswordCheck)
		return;
	colorOutputSet.Empty();
}

void UlcBpBridge::clearSpecialIdColorOutputSet(int id)
{
	if (!bPasswordCheck)
		return;
	TArray<FString>* contentArray = colorOutputSet.Find(id);
	if (contentArray)
	{
		contentArray->Empty();
	}
}


void UlcBpBridge::settingEnableStencil()
{
	URendererSettings* renderSetting = GetMutableDefault<URendererSettings>();
	if (!renderSetting)
	{
		UE_LOG(LogTemp, Error, TEXT("set render setting error! null point"));
	}
	renderSetting->CustomDepthStencil = ECustomDepthStencil::EnabledWithStencil;


	FString CVarName = FString("r.CustomDepth");
	IConsoleVariable* CVar = IConsoleManager::Get().FindConsoleVariable(*CVarName);
	if (CVar && (CVar->GetFlags() & ECVF_ReadOnly) == 0)
	{
		CVar->Set(3, ECVF_SetByProjectSetting);
	}
}

void UlcBpBridge::RequestServerCode()
{
	FHttpModule* Http;

	Http = &FHttpModule::Get();

	if (!Http)
	{
		UE_LOG(LogTemp, Warning, TEXT("request lingchuang server code check error!"));
		return;
	}

	FString timeStr;
	FDateTime now = FDateTime::Now();
	timeStr += "lingchuang";
	timeStr += "-";
	timeStr += FString::FromInt(now.GetDay());
	timeStr += "-";
	timeStr += FString::FromInt(now.GetHour());

	FString md5Str = FMD5::HashAnsiString(*timeStr);

	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	JsonObject->SetStringField("code", *md5Str);

	FString JsonStr;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonStr);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = Http->CreateRequest();
	HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
	HttpRequest->SetURL(TEXT("http://192.168.8.99:1888/requestcheck"));
	HttpRequest->SetVerb(TEXT("POST"));
	HttpRequest->SetContentAsString(JsonStr);
	HttpRequest->OnProcessRequestComplete().BindUObject(this, &UlcBpBridge::OnResponseCodeReceived);
	HttpRequest->ProcessRequest();
}

void UlcBpBridge::OnResponseCodeReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	TSharedPtr<FJsonObject> JsonObject;

	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject))
	{
		//Get the value of the json object by field name
		FString recievedStr = JsonObject->GetStringField("recCode");

		FString recOldStr = "520";
		FString md5Str = FMD5::HashAnsiString(*recOldStr);

		if (md5Str == recievedStr)
		{
			UE_LOG(LogTemp, Warning, TEXT("request lingchuang server success"));
			bPasswordCheck = true;
			tempStaticClass::ThePDispose(true, true);
		}
		else
		{
			bPasswordCheck = false;
			tempStaticClass::ThePDispose(true, false);
		}

		//Output it to the engine
		//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, recievedStr);
	}

}

void UlcBpBridge::RequestServerPluginVersion()
{
	FHttpModule* Http;

	Http = &FHttpModule::Get();

	if (!Http)
	{
		UE_LOG(LogTemp, Warning, TEXT("request lingchuang server code check error!"));
		return;
	}


	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = Http->CreateRequest();
	HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("Content-Type: text/html; charset=utf-8"));
	HttpRequest->SetURL(TEXT("http://192.168.8.99:1888/getBasePluginVersion"));
	HttpRequest->SetVerb(TEXT("GET"));
	//HttpRequest->SetContentAsString(JsonStr);
	HttpRequest->OnProcessRequestComplete().BindUObject(this, &UlcBpBridge::OnResponseVersionReceived);
	HttpRequest->ProcessRequest();
}

void UlcBpBridge::OnResponseVersionReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	serverVersionCode = FCString::Atoi(*Response->GetContentAsString());
	UE_LOG(LogTemp, Warning, TEXT("the server version is %s"), *Response->GetContentAsString());
}

void UlcBpBridge::callUpdateExe()
{
	FString theUpdateExePath = FPaths::ConvertRelativePathToFull(FPaths::Combine(FPaths::EngineDir(), FString("Plugins"), FString("update.exe")));
	FString lcToolPath = FPaths::ConvertRelativePathToFull(FPaths::Combine(FPaths::EngineDir(), FString("Plugins"), FString("LcTool")));
	FPlatformProcess::CreateProc(*theUpdateExePath, *lcToolPath, true, false, false, nullptr, -1, nullptr, nullptr);
	UE_LOG(LogTemp, Warning, TEXT("the launchPath is %s"), *lcToolPath);
}
