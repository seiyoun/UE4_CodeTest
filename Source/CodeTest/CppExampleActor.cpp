// Fill out your copyright notice in the Description page of Project Settings.


#include "CppExampleActor.h"

// Sets default values
ACppExampleActor::ACppExampleActor() :
	ReadWriteFloat(20.0f),
	EditableFloat(20.0f)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACppExampleActor::BeginPlay()
{
	Super::BeginPlay();

	// イベント実行
	TheZeroInputDelegate.Broadcast();

	FloatInputEvent(1.0f);

	VectorInputEvent(FVector(0.0f, 0.0f, 0.0f));
}

// Called every frame
void ACppExampleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACppExampleActor::VectorInputEvent_Implementation(const FVector& VecValue)
{
	UE_LOG(LogTemp, Log, TEXT("CALL"));
}

