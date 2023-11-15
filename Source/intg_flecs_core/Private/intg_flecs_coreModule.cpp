#include "intg_flecs_coreModule.h"



IMPLEMENT_MODULE(Fintg_flecs_coreModule, intg_flecs_core);
DEFINE_LOG_CATEGORY(intg_flecs_core);

#define LOCTEXT_NAMESPACE "Fintg_flecs_coreModule"

void Fintg_flecs_coreModule::StartupModule()
{
        UE_LOG(intg_flecs_core, Warning, TEXT("FLECS CORE module has started!"));
}

void Fintg_flecs_coreModule::ShutdownModule()
{
		UE_LOG(intg_flecs_core, Warning, TEXT("FLECS CORE module has shut down"));
}

#undef LOCTEXT_NAMESPACE
    


