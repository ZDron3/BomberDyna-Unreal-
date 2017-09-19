// Fill out your copyright notice in the Description page of Project Settings.

#include "Dyna.h"
#include "CollidingMyPawn.h"
#include "CollisionMovementComponent.h"


// Sets default values
ACollidingMyPawn::ACollidingMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    USphereComponent* SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
    RootComponent = SphereComponent;
    SphereComponent->InitSphereRadius(40.0f);
    SphereComponent->SetCollisionProfileName(TEXT("Pawn"));

    UStaticMeshComponent* SphereVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
    SphereVisual->SetupAttachment(RootComponent);
    static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
    if (SphereVisualAsset.Succeeded())
    {
        SphereVisual->SetStaticMesh(SphereVisualAsset.Object);
        SphereVisual->SetRelativeLocation(FVector(0.0f, 0.0f, -40.0f));
        SphereVisual->SetWorldScale3D(FVector(0.8f));
    }

    AutoPossessPlayer = EAutoReceiveInput::Player0;

    OurMovementComponent = CreateDefaultSubobject<UCollidingPawnMovementComponent>(TEXT("CustomMovementComponent"));
    OurMovementComponent->UpdatedComponent = RootComponent;

}

// Called when the game starts or when spawned
void ACollidingMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACollidingMyPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ACollidingMyPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

    InputComponent->BindAction("ParticleToggle", IE_Pressed, this, &ACollidingMyPawn::ParticleToggle);

    InputComponent->BindAxis("MoveForward", this, &ACollidingMyPawn::MoveForward);
    InputComponent->BindAxis("MoveRight", this, &ACollidingMyPawn::MoveRight);
}

UPawnMovementComponent* ACollidingMyPawn::GetMovementComponent() const
{
    return OurMovementComponent;
}

void ACollidingMyPawn::MoveForward(float AxisValue)
{
    if (OurMovementComponent && (OurMovementComponent->UpdatedComponent == RootComponent))
    {
        OurMovementComponent->AddInputVector(GetActorForwardVector() * AxisValue);
    }
}

void ACollidingMyPawn::MoveRight(float AxisValue)
{
    if (OurMovementComponent && (OurMovementComponent->UpdatedComponent == RootComponent))
    {
        OurMovementComponent->AddInputVector(GetActorRightVector() * AxisValue);
    }
}

