// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <Engine/StaticMeshActor.h>
#include "SampleFunction.generated.h"

/**
 *
 */
UCLASS()
class CODETEST_API USampleFunction : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "UE C++ book")
		static bool AttachRedMaterial(AStaticMeshActor* Actor);
};
