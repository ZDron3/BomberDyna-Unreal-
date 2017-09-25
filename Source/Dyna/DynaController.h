// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "DynaCharacter2.h"
#include "DynaController.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class DYNA_API ADynaController : public APlayerController
{
    GENERATED_BODY()
public:
        ADynaController(const FObjectInitializer& ObjectInitializer);

        //virtual void PlayerTick(float DeltaTime) override;
            virtual void SetupInputComponent() override;
            
           virtual void BeginPlay() override;
        UFUNCTION()
            void MoveForward_Backward(float Val);
        UFUNCTION()
            void MoveLeft_Right(float Val);
        UFUNCTION(BlueprintImplementableEvent, Category = "Player2Init")
            void Player2Init();
 //       UFUNCTION()
 //           void MoveForward_Backward2(float Val);
 //       UFUNCTION()
 //           void MoveLeft_Right2(float Val);
 //
 /*       UFUNCTION()
           void spawnBomb();*/
        APawn* Pawn;
        
};
