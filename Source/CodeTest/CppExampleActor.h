// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppExampleStruct.h"
#include "CppExampleEnum.h"
#include "CppExampleActor.generated.h"

UCLASS()
class CODETEST_API ACppExampleActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACppExampleActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UE C++ book")
		FCppExampleStruct myStructProp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UE C++ book")
		ECppExampleEnum Type;
};
