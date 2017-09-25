// Fill out your copyright notice in the Description page of Project Settings.

#include "Dyna.h"
#include "DynaCharacter2.h"


// Sets default values
ADynaCharacter2::ADynaCharacter2()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADynaCharacter2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADynaCharacter2::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ADynaCharacter2::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

