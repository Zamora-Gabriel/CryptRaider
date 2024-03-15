// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectRotator.h"
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
UObjectRotator::UObjectRotator()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UObjectRotator::BeginPlay()
{
	Super::BeginPlay();

	OriginalRotation = GetOwner()->GetActorRotation();
	
}


// Called every frame
void UObjectRotator::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (ShouldRotate)
	{
		Rotate(DeltaTime);
	}
}

void UObjectRotator::Rotate(float DeltaTime)
{
	FRotator currentRotation = GetOwner()->GetActorRotation();
	FRotator targetAngle = OriginalRotation + AngleToRotate;
	float angleDiff = OriginalRotation.FRotator::GetManhattanDistance(targetAngle);
	float speed =  angleDiff / RotateTime;

	FRotator newRotation = FMath::RInterpTo(currentRotation, targetAngle, DeltaTime, speed);

	GetOwner()->SetActorRotation(newRotation);
}

