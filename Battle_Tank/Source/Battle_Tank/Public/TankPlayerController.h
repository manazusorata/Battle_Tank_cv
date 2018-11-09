// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include"Engine.h"
#include"Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"


UCLASS()
class BATTLE_TANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	

public:
	
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

private:

	ATank* GetControlledTank() const;

	void AimTowardsCrosshair();

	bool GetSightRayHitLocation(FVector& HitLocation) const;

	UPROPERTY(EditAnywhere)
	float CrosshairXLocation = 0.5;

	UPROPERTY(EditAnywhere)
	float CrosshairYLocation = 0.35;

	UPROPERTY(EditAnywhere)
		float LineTraceRange = 1000000;

	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection)const;

	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation)const;
};
