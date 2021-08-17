// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CppExampleStruct.generated.h"

/**
 * ç\ë¢ëÃíËã`
 */
USTRUCT(BlueprintType)
struct FCppExampleStruct
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UE C++ book")
		float Value;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UE C++ book")
		int32 Index;
};
