// Fill out your copyright notice in the Description page of Project Settings.


#include "CppExampleComponent.h"

// Sets default values for this component's properties
UCppExampleComponent::UCppExampleComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	Locations.Emplace(FVector(1, 0, 0));
	// ...
}


// Called when the game starts
void UCppExampleComponent::BeginPlay()
{
	Super::BeginPlay();
	ElapsedTime = 0.0f;
	// ...
	
}

void UCppExampleComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	AActor* Owner = GetOwner();
	FString Message;
	if (Owner)
	{
		Message = Owner->GetActorLabel() + "EndPlay()";
	}
	else
	{
		Message = "EndPlay()";
	}

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, Message);
	}
}


// Called every frame
void UCppExampleComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	ElapsedTime += DeltaTime;

	FString Message = FString::Printf(TEXT("Actor Elapsed:%f Delta %f"), ElapsedTime, DeltaTime);
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, Message);
	}
	// ...
}

auto UCppExampleComponent::AttachSampleComponent(AActor* Actor, FVector Location) -> void
{
	if (!Actor) return;

	UCppExampleComponent* Comp = NewObject<UCppExampleComponent>(Actor);
	Comp->Locations.SetNum(1);
	Comp->Locations[0] = Location;
	Actor->AddInstanceComponent(Comp);
	Comp->RegisterComponent();
}

