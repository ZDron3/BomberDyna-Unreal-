// Fill out your copyright notice in the Description page of Project Settings.

#include "Dyna.h"
#include "DynaController.h"
#include "DynaController2.h"
#include "DynaCharacter1.h"
#include "DynaCharacter2.h"



void ADynaController::SetupInputComponent()
{
    // set up gameplay key bindings
    Super::SetupInputComponent();
    
    InputComponent->BindAxis("MoveForward_Backward", this, &ADynaController::MoveForward_Backward);
    InputComponent->BindAxis("MoveLeft_Right", this, &ADynaController::MoveLeft_Right);
    //InputComponent->BindAction("spawnBomb",IE_Pressed, this, &ABomberPlayerController::spawnBomb);
       
}

void ADynaController::BeginPlay()
{
    Player2Init();
}

void ADynaController::MoveForward_Backward(float Val)
{
    if ((this != NULL) && (Val != 0.0f))
    {
        // find out which way is forward
        Pawn= this->GetPawn();
        FRotator Mov = Pawn->GetControlRotation();
        const FVector Direction = FRotationMatrix(Mov).GetScaledAxis(EAxis::X);
        // Limit pitch when walking or falling
        Pawn->AddMovementInput(Direction, Val);
        ADynaCharacter1* Rotref = Cast<ADynaCharacter1>(Pawn);
        Rotref->SetMeshRotation(Val,0);
         }
}

void ADynaController::MoveLeft_Right(float Val)
{
    if ((this != NULL) && (Val != 0.0f))
    {
        // find out which way is forward
        Pawn = this->GetPawn();
        FRotator Mov = Pawn->GetControlRotation();
        const FVector Direction = FRotationMatrix(Mov).GetScaledAxis(EAxis::Y);
        // Limit pitch when walking or falling
        Pawn->AddMovementInput(Direction, Val);
        ADynaCharacter1* Rotref = Cast<ADynaCharacter1>(Pawn);
        Rotref->SetMeshRotation(0,Val);
    }
}


 ADynaController::ADynaController(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{

}
