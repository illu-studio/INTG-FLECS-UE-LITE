// Copyright 2022-2023, Illu Studio, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "flecs.h"

#include "impl_flecs_subsystem_world.generated.h"


USTRUCT()
struct INTG_FLECS_IMPL_API Fcustom_tick_subsystem : public FTickFunction
{
	GENERATED_BODY()

	

	class Uimpl_flecs_subsystem_world* Target;

	virtual void ExecuteTick(float DeltaTime, ELevelTick TickType, ENamedThreads::Type CurrentThread, const FGraphEventRef& MyCompletionGraphEvent) override ;

	 virtual FString DiagnosticMessage() override;
	 virtual FName DiagnosticContext(bool bDetailed) override;



};
template<>
struct TStructOpsTypeTraits<Fcustom_tick_subsystem> : public TStructOpsTypeTraitsBase2<Fcustom_tick_subsystem>
{
	enum { WithCopy = false };
};


UCLASS()
class INTG_FLECS_IMPL_API Uimpl_flecs_subsystem_world : public UWorldSubsystem
{
	GENERATED_BODY()

	public:
	UPROPERTY(EditDefaultsOnly, Category = "Tick")
	struct Fcustom_tick_subsystem PrimarySystemTick;

	UPROPERTY()
	float TickPeriod = 0;
	flecs::world* W = nullptr;
	
	
	virtual void Tick(float DeltaTime);

	
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	class AWorldSettings* GetWorldSettings() const;





	

	
	
	
};

