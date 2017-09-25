// Fill out your copyright notice in the Description page of Project Settings.

#include "Dyna.h"
#include "DynaCharacter1.h"


// Sets default values
ADynaCharacter1::ADynaCharacter1()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
// Called when the game starts or when spawned
void ADynaCharacter1::BeginPlay()
{
	Super::BeginPlay();
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("We are using FPSCharacter!"));
    }
	
}

// Called every frame
void ADynaCharacter1::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

