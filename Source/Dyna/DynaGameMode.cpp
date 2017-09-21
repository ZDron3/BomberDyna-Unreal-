// Fill out your copyright notice in the Description page of Project Settings.

#include "Dyna.h"
#include "DynaGameMode.h"




ADynaGameMode::ADynaGameMode()
  {

    //tell your custom game mode to use your custom player controller
    PlayerControllerClass = ADynaController::StaticClass();
  /*  static ConstructorHelpers::FClassFinder<ADynaController> DynaPCOb(TEXT("ADynaController'/Game/VictoryEditor/VictoryPlayerControllerBP.VictoryPlayerControllerBP_C'"));
    if (VictoryPCOb.Class != NULL)
    {
        PlayerControllerClass = VictoryPCOb.Class;
    }*/

    //you can set whatever (if any) other default framework classes
    //you wish for this game mode as well
   /* DefaultPawnClass = ACustomPawn::StaticClass();
    GameStateClass = ACustomGameState::StaticClass();
    HUDClass = ACustomGameHUD::StaticClass();
    ReplaySpectatorPlayerControllerClass = ACustomReplaySpectatorPlayerController::StaticClass();
    SpectatorClass = ACustomSpectatorClass::StaticClass();*/

}

//... custom code ...