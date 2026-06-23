// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
#include "LcRuntimeLibraryBPLibrary.h"

#include "AssetRegistryModule.h"

#include "LcRuntimeLibrary.h"

ULcRuntimeLibraryBPLibrary::ULcRuntimeLibraryBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	thePasswordValue = false;
}


void ULcRuntimeLibraryBPLibrary::ChangeMovementRadius(UCharacterMovementComponent* movementComponent, float radiusValue)
{
	movementComponent->AvoidanceConsiderationRadius = radiusValue;
}

ULevelSequence* ULcRuntimeLibraryBPLibrary::LcCreateLevelSequenceAsset(FString Name, FString Path)
{
	const FString Dot(TEXT("."));
	FString AssetPath = Name;
	FString AssetName = Name;

	AssetPath /= AssetName;
	AssetPath += Dot + AssetName;
	AssetPath = Path + Name;

	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
	FAssetData AssetData = AssetRegistryModule.Get().GetAssetByObjectPath(*AssetPath);

	// if object with same name exists, try a different name until we don't find one
	int32 ExtensionIndex = 0;
	while (AssetData.IsValid() && AssetData.GetClass() == ULevelSequence::StaticClass())
	{
		AssetName = FString::Printf(TEXT("%s_%d"), *Name, ExtensionIndex);
		AssetPath = (Path / AssetName) + Dot + AssetName;
		AssetData = AssetRegistryModule.Get().GetAssetByObjectPath(*AssetPath);

		ExtensionIndex++;
	}

	// Create the new asset in the package we just made
	//AssetPath = (Path / AssetName);
	AssetPath = Path + Name;

	FString FileName;
	if (FPackageName::TryConvertLongPackageNameToFilename(AssetPath, FileName))
	{
		UObject* Package = CreatePackage(nullptr, *AssetPath);
		ULevelSequence* lsLS = NewObject<ULevelSequence>(Package, *AssetName, RF_Public | RF_Standalone);
		if (lsLS)
		{
			lsLS->Initialize();
			FAssetRegistryModule::AssetCreated(lsLS);
			return lsLS;
		}
	}

	UE_LOG(LogTemp, Error, TEXT("Couldnt create file for package %s"), *AssetPath);

	return nullptr;
}

void ULcRuntimeLibraryBPLibrary::SetSKin(USkeletalMeshComponent* component)
{
	component->SetCPUSkinningEnabled(true, true);

}

void ULcRuntimeLibraryBPLibrary::LcMinimumAreaRectangle(class UObject* WorldContextObject, const TArray<FVector>& InVerts, const FVector& SampleSurfaceNormal, FVector& OutRectCenter, FRotator& OutRectRotation, float& OutSideLengthX, float& OutSideLengthY, bool bDebugDraw)
{
	float MinArea = -1.f;
	float CurrentArea = -1.f;
	FVector SupportVectorA, SupportVectorB;
	FVector RectSideA, RectSideB;
	float MinDotResultA, MinDotResultB, MaxDotResultA, MaxDotResultB;
	FVector TestEdge;
	float TestEdgeDot = 0.f;
	FVector PolyNormal(0.f, 0.f, 1.f);
	TArray<int32> PolyVertIndices;

	// Bail if we receive an empty InVerts array
	if (InVerts.Num() == 0)
	{
		return;
	}

	// Compute the approximate normal of the poly, using the direction of SampleSurfaceNormal for guidance
	//PolyNormal = (InVerts[InVerts.Num() / 3] - InVerts[0]) ^ (InVerts[InVerts.Num() * 2 / 3] - InVerts[InVerts.Num() / 3]);
	//if ((PolyNormal | SampleSurfaceNormal) < 0.f)
	//{
	PolyNormal = SampleSurfaceNormal;
	//}

	// Transform the sample points to 2D
	FMatrix SurfaceNormalMatrix = FRotationMatrix::MakeFromZX(PolyNormal, FVector(1.f, 0.f, 0.f));
	TArray<FVector> TransformedVerts;
	OutRectCenter = FVector(0.f);
	for (int32 Idx = 0; Idx < InVerts.Num(); ++Idx)
	{
		OutRectCenter += InVerts[Idx];
		TransformedVerts.Add(SurfaceNormalMatrix.InverseTransformVector(InVerts[Idx]));
	}
	OutRectCenter /= InVerts.Num();

	// Compute the convex hull of the sample points
	ConvexHull2D::ComputeConvexHullLegacy(TransformedVerts, PolyVertIndices);

	// Minimum area rectangle as computed by http://www.geometrictools.com/Documentation/MinimumAreaRectangle.pdf
	for (int32 Idx = 1; Idx < PolyVertIndices.Num() - 1; ++Idx)
	{
		SupportVectorA = (TransformedVerts[PolyVertIndices[Idx]] - TransformedVerts[PolyVertIndices[Idx - 1]]).GetSafeNormal();
		SupportVectorA.Z = 0.f;
		SupportVectorB.X = -SupportVectorA.Y;
		SupportVectorB.Y = SupportVectorA.X;
		SupportVectorB.Z = 0.f;
		MinDotResultA = MinDotResultB = MaxDotResultA = MaxDotResultB = 0.f;

		for (int TestVertIdx = 1; TestVertIdx < PolyVertIndices.Num(); ++TestVertIdx)
		{
			TestEdge = TransformedVerts[PolyVertIndices[TestVertIdx]] - TransformedVerts[PolyVertIndices[0]];
			TestEdgeDot = SupportVectorA | TestEdge;
			if (TestEdgeDot < MinDotResultA)
			{
				MinDotResultA = TestEdgeDot;
			}
			else if (TestEdgeDot > MaxDotResultA)
			{
				MaxDotResultA = TestEdgeDot;
			}

			TestEdgeDot = SupportVectorB | TestEdge;
			if (TestEdgeDot < MinDotResultB)
			{
				MinDotResultB = TestEdgeDot;
			}
			else if (TestEdgeDot > MaxDotResultB)
			{
				MaxDotResultB = TestEdgeDot;
			}
		}

		CurrentArea = (MaxDotResultA - MinDotResultA) * (MaxDotResultB - MinDotResultB);
		if (MinArea < 0.f || CurrentArea < MinArea)
		{
			MinArea = CurrentArea;
			RectSideA = SupportVectorA * (MaxDotResultA - MinDotResultA);
			RectSideB = SupportVectorB * (MaxDotResultB - MinDotResultB);
		}
	}

	RectSideA = SurfaceNormalMatrix.TransformVector(RectSideA);
	RectSideB = SurfaceNormalMatrix.TransformVector(RectSideB);
	OutRectRotation = FRotationMatrix::MakeFromZX(PolyNormal, RectSideA).Rotator();
	OutSideLengthX = RectSideA.Size();
	OutSideLengthY = RectSideB.Size();

}


bool tempStaticClass::ThePDispose(bool bNeedToUpdate, bool newValue)
{
	if (bNeedToUpdate)
	{
		thePasswordValue = newValue;
	}
	return thePasswordValue;
}
