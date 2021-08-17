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

	// BlueprintReadWrite ブルプリントで読み書き可能
	// BlueprintReadOnly ブルプリントで読み取り可能

	// EditAnywhere レベルエディタで読み書き可能

	// VisibleAnywhere レベルエディタやブループリントエディタで閲覧できる
	// Category 検索

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UE C++ book")
		FCppExampleStruct myStructProp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UE C++ book")
		ECppExampleEnum Type;

	UPROPERTY(EditAnywhere, Category = "UE C++ book")
		float EditableFloat;

	UPROPERTY(BlueprintReadWrite, Category = "UE C++ book")
		float ReadWriteFloat;

	// イベント定義
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FZeroInputDelegate);
	UPROPERTY(BlueprintAssignable, Category = "UE C++ book")
		FZeroInputDelegate TheZeroInputDelegate;

	// 実装はC++側で持たない
	UFUNCTION(BlueprintImplementableEvent, Category = "UE C++ book")
		void FloatInputEvent(const float FloValue);

	// 実装はc++側で持つ必要がある _Implementationが必須
	UFUNCTION(BlueprintNativeEvent, Category = "UE C++ book")
		void VectorInputEvent(const FVector& VecValue);
	virtual void VectorInputEvent_Implementation(const FVector& VecValue);
};
