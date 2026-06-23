// Fill out your copyright notice in the Description page of Project Settings.


#include "groupActionESS.h"
#include "groupActionGISS.h"


void UGroupActionESS::Initialize(FSubsystemCollectionBase& Collection)
{
	UGroupActionEngineSS* gaEss = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();

	if (gaEss)
	{
		gaEss->LoadGroupActionUnitSave();
	}

}
