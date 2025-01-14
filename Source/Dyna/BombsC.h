// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "BombsC.generated.h"

UCLASS()
class DYNA_API ABombsC : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
    ABombsC();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

    UFUNCTION(BlueprintCallable, Category ="Remote")
    void RemoteControl();

    UFUNCTION(BlueprintImplementableEvent)
        void RemoteController();
	
	
};
