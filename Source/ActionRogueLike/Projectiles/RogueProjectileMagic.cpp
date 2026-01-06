// Fill out your copyright notice in the Description page of Project Settings.


#include "RogueProjectileMagic.h"
#include "NiagaraComponent.h"

#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

ARogueProjectileMagic::ARogueProjectileMagic()
{
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	RootComponent = SphereComponent;
	SphereComponent->SetSphereRadius(16.0f);
	SphereComponent->SetCollisionProfileName(TEXT("Projectile"));
	
	LoopedNiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("LoopedNiagraComp"));
	LoopedNiagaraComponent->SetupAttachment(SphereComponent);
	
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComp"));
	ProjectileMovementComponent->InitialSpeed = 2000.f;
	ProjectileMovementComponent->ProjectileGravityScale = 0.f;
}



