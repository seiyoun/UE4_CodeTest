// Fill out your copyright notice in the Description page of Project Settings.


#include "SampleFunction.h"

auto USampleFunction::AttachRedMaterial(AStaticMeshActor* Actor) -> bool
{
	if (!Actor) return false;

	UMaterial* mat = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/Material/Sample.Sample'"));
	if (mat && Actor)
	{
		auto* mesh = Actor->GetStaticMeshComponent();
		if (mesh)
		{
			mesh->SetMaterial(0, mat);
			return true;
		}
	}
	return false;
}