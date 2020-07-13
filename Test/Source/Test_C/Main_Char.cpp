// Fill out your copyright notice in the Description page of Project Settings.

#include "Main_Char.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"



// Sets default values
AMain_Char::AMain_Char()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate =FRotator(0.0f , 540.0f ,0.0f);
	GetCharacterMovement()->JumpZVelocity = 600.0f;
	GetCharacterMovement()->AirControl = 0.2f;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);

	CameraBoom->TargetArmLength = 400.0f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	bDead = false;
	Power = 100.0f;
	Speed = 0.0f;


}





// Called when the game starts or when spawned
void AMain_Char::BeginPlay()
{
	Super::BeginPlay();


	GetCharacterMovement()->MaxWalkSpeed = 500.0f;

	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AMain_Char::OnBeginOverlap);

	if (Player_Power_Widget_Class != nullptr)
	{
		Player_Power_Widget = CreateWidget(GetWorld(), Player_Power_Widget_Class);
		Player_Power_Widget->AddToViewport();
	}
	
}

// Called every frame
void AMain_Char::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Power -= DeltaTime* Power_Treshold;
	Speed += DeltaTime* Speed_Treshold;

	if (Speed > 100.0f)
	{
		GetCharacterMovement()->MaxWalkSpeed = 1200.0f;

		FulllSpeed += DeltaTime*EmptyySpeed;

	}

	if (FulllSpeed > 50.0f)
	{
		FulllSpeed = 0.0f;
		Speed = 0.0f;
		GetCharacterMovement()->MaxWalkSpeed = 500.0f;
	}

	
	if (Power < 1)
	{

		bDead = true;

		GetMesh()->SetSimulatePhysics(true);

		FTimerHandle UnusedHandle;
		GetWorldTimerManager().SetTimer(
			UnusedHandle, this, &AMain_Char::RestartGame, 3.0f, false);
	}

}

// Called to bind functionality to input
void AMain_Char::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMain_Char::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMain_Char::moveright);
}


// *************************************** Movement **************************************

void AMain_Char::MoveForward(float Axis)
{
	if (!bDead) {

		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator yawrotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(yawrotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Axis);
	}
}

void AMain_Char::moveright(float Axis)
{

	if (!bDead) {

		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator yawrotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(yawrotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Axis);
	}

}
//*****************************************************************************************

void AMain_Char::RestartGame()
{
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}

void AMain_Char::OnBeginOverlap(UPrimitiveComponent * HitComp,
	AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult & SweepResult)
{

	if (OtherActor->ActorHasTag("Recharge"))
	{
		Power += 10.0f;

		if (Power > 100.0f)
			Power = 100.0f;

		OtherActor->Destroy();
	}

	if (OtherActor->ActorHasTag("Speed"))
	{
		Speed += 10.0f;

		OtherActor->Destroy();
	}

}
