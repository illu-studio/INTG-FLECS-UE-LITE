// Copyright 2022-2023, Illu Studio, All rights reserved.


#include "class/subsystem/impl_flecs_subsystem_world.h"


void Fcustom_tick_subsystem::ExecuteTick(float DeltaTime, ELevelTick TickType, ENamedThreads::Type CurrentThread, const FGraphEventRef& MyCompletionEventGraph)
	{
		if (Target && !Target->IsPendingKillOrUnreachable() && TickType != LEVELTICK_ViewportsOnly)
			Target->Tick(DeltaTime);
	}

FString Fcustom_tick_subsystem::DiagnosticMessage()
	{
		return TEXT("FMySubsystemTickFunction");
	}

FName Fcustom_tick_subsystem::DiagnosticContext(bool bDetailed)
	{
		return FName(TEXT("MySubsystem"));
	}

void Uimpl_flecs_subsystem_world::Tick(float DeltaTime)
	{
	}

void Uimpl_flecs_subsystem_world::Initialize(FSubsystemCollectionBase& Collection)
	{
		Super::Initialize(Collection);

		PrimarySystemTick.Target = this;
    
		PrimarySystemTick.bCanEverTick = true;
		PrimarySystemTick.bHighPriority = false;
		PrimarySystemTick.bRunOnAnyThread = false;
		PrimarySystemTick.bTickEvenWhenPaused = false;
		PrimarySystemTick.TickGroup = ETickingGroup::TG_PrePhysics;
		PrimarySystemTick.TickInterval = TickPeriod;
    
		PrimarySystemTick.RegisterTickFunction(GetWorld()->PersistentLevel);
		
	}

void Uimpl_flecs_subsystem_world::Deinitialize()
	{
		Super::Deinitialize();
		
	}

AWorldSettings* Uimpl_flecs_subsystem_world::GetWorldSettings() const
	{
		UWorld* World = GetWorld();
		return (World ? World->GetWorldSettings() : nullptr);
	}


