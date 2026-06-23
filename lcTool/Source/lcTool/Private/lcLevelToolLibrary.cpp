// Fill out your copyright notice in the Description page of Project Settings.


#include "lcLevelToolLibrary.h"
#include "Sequencer/Public/ISequencer.h"


UlcBpBridge* UlcLevelToolLibrary::GetBpBridgeObj()
{
	FlcToolModule& lcModel = FModuleManager::LoadModuleChecked<FlcToolModule>("lcTool");

	if (lcModel.bpBridgetPtr)
	{
		UE_LOG(LogTemp, Warning, TEXT("is valid!"));

	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("not valid!"));

	}

	return lcModel.bpBridgetPtr;


}

UObject* UlcLevelToolLibrary::GetBpLsObj()
{
	FlcToolModule& lcModel = FModuleManager::LoadModuleChecked<FlcToolModule>("lcTool");
	return lcModel.lsObjs;
}

void UlcLevelToolLibrary::SetBpLsObj(UObject* obj)
{
	FlcToolModule& lcModel = FModuleManager::LoadModuleChecked<FlcToolModule>("lcTool");
	lcModel.lsObjs = obj;
}

void UlcLevelToolLibrary::setBpBridgetObj(UlcBpBridge* inObj)
{
	FlcToolModule& lcModel = FModuleManager::LoadModuleChecked<FlcToolModule>("lcTool");
	lcModel.bpBridgetPtr = inObj;
}

bool UlcLevelToolLibrary::bpBridgetObjIsValid()
{
	FlcToolModule& lcModel = FModuleManager::LoadModuleChecked<FlcToolModule>("lcTool");
	if (lcModel.bpBridgetPtr)
		return true;

	return false;
}

void UlcLevelToolLibrary::LcSequencerConvertToPossessable(ULevelSequence* Sequence)
{
	if (!Sequence)
		return;
	IAssetEditorInstance* AssetEditor = GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->FindEditorForAsset(Sequence, false);
	ILevelSequenceEditorToolkit* LevelSequenceEditor = static_cast<ILevelSequenceEditorToolkit*>(AssetEditor);
	TWeakPtr<ISequencer> WeakSequencer = LevelSequenceEditor ? LevelSequenceEditor->GetSequencer() : nullptr;
	if (WeakSequencer.IsValid())
	{
		WeakSequencer.Pin()->LcConvertToPossessable();
	}
}

void UlcLevelToolLibrary::LcRefreshActor(AActor* actor)
{
	FPropertyChangedEvent evt(nullptr);
	actor->PostEditChangeProperty(evt);
}

TArray<FString> UlcLevelToolLibrary::LcSplitString(FString source, FString splitStr)
{
	TArray<FString> Array;
	source.ParseIntoArray(Array, *splitStr, true);
	return  Array;
}

void UlcLevelToolLibrary::LcSimpleDialog(FString msgStr)
{
	FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(msgStr));
}
