// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "DynaController2.generated.h"

/**
 * 
 */
UCLASS()
class DYNA_API ADynaController2 : public APlayerController
{
    GENERATED_BODY()
        virtual void BeginPlay() override;	
};
