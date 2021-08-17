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

	// BlueprintReadWrite �u���v�����g�œǂݏ����\
	// BlueprintReadOnly �u���v�����g�œǂݎ��\

	// EditAnywhere ���x���G�f�B�^�œǂݏ����\

	// VisibleAnywhere ���x���G�f�B�^��u���[�v�����g�G�f�B�^�ŉ{���ł���
	// Category ����

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UE C++ book")
		FCppExampleStruct myStructProp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UE C++ book")
		ECppExampleEnum Type;

	UPROPERTY(EditAnywhere, Category = "UE C++ book")
		float EditableFloat;

	UPROPERTY(BlueprintReadWrite, Category = "UE C++ book")
		float ReadWriteFloat;

	// �C�x���g��`
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FZeroInputDelegate);
	UPROPERTY(BlueprintAssignable, Category = "UE C++ book")
		FZeroInputDelegate TheZeroInputDelegate;

	// ������C++���Ŏ����Ȃ�
	UFUNCTION(BlueprintImplementableEvent, Category = "UE C++ book")
		void FloatInputEvent(const float FloValue);

	// ������c++���Ŏ��K�v������ _Implementation���K�{
	UFUNCTION(BlueprintNativeEvent, Category = "UE C++ book")
		void VectorInputEvent(const FVector& VecValue);
	virtual void VectorInputEvent_Implementation(const FVector& VecValue);
};
