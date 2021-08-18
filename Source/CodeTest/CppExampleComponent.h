// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CppExampleComponent.generated.h"


UCLASS(ClassGroup = ("UE C++ book"), meta = (BlueprintSpawnableComponent))
class CODETEST_API UCppExampleComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCppExampleComponent();

	TArray<FVector> Locations;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void EndPlay(const	EEndPlayReason::Type EndPlayReason) override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	float ElapsedTime;

public:
	UFUNCTION(BlueprintCallable, Category = "UE C++ book")
		static void AttachSampleComponent(AActor* Actor, FVector Location);
};
