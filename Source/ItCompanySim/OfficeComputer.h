// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OfficeComputer.generated.h"

class UStaticMeshComponent;

UCLASS()
class ITCOMPANYSIM_API AOfficeComputer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOfficeComputer();
	UFUNCTION(BlueprintCallable, Category = "Computer")
	void Interact();

	UFUNCTION(BlueprintImplementableEvent, Category = "Computer")
	void OnInteracted();
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UStaticMeshComponent> Mesh;

};
