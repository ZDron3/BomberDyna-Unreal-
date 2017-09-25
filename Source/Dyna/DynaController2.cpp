// Fill out your copyright notice in the Description page of Project Settings.

#include "Dyna.h"
#include "DynaController2.h"
#include "DynaCharacter2.h"



void ADynaController2::BeginPlay()
{
    Super::BeginPlay();
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("We are using FPS2Character!"));
    }
}
