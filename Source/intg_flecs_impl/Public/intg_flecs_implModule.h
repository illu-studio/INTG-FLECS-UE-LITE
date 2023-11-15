// Copyright 2022-2023, Illu Studio, All rights reserved.


#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class Fintg_flecs_implModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
