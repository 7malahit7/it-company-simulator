// Fill out your copyright notice in the Description page of Project Settings.
#include "OfficeComputer.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AOfficeComputer::AOfficeComputer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	SetRootComponent(Mesh);
}

void AOfficeComputer::Interact()
{
	UE_LOG(LogTemp, Warning, TEXT("Computer Activated"));
	OnInteracted();
}


