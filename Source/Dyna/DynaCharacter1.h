// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "BombsC.h"
#include "DynaCharacter1.generated.h"

UCLASS()
class DYNA_API ADynaCharacter1 : public ACharacter
{
    GENERATED_BODY()

public:
    // Sets default values for this character's properties
    ADynaCharacter1();

    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    // Called every frame
    virtual void Tick(float DeltaSeconds) override;

    UFUNCTION(BlueprintImplementableEvent, Category = "Player2Init")
        void SetMeshRotation(float SetMeshForward,float SetMeshLeft);


};