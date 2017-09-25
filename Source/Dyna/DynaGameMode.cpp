// Fill out your copyright notice in the Description page of Project Settings.

#include "Dyna.h"
#include "DynaGameMode.h"
#include "DynaCharacter1.h"




ADynaGameMode::ADynaGameMode()
  {
    //tell your custom game mode to use your custom player controller
    PlayerControllerClass = ADynaController::StaticClass();
    DefaultPawnClass = ADynaCharacter1::StaticClass();
}

