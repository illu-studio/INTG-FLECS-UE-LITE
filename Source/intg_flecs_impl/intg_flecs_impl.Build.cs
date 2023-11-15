using UnrealBuildTool;

public class intg_flecs_impl : ModuleRules
{
    public intg_flecs_impl(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicIncludePaths.AddRange(new string[] {});
        //The path for the source files
        PrivateIncludePaths.AddRange(new string[] {});

        PublicDependencyModuleNames.AddRange
        (
            new string[]
            {
                "Core",
                "intg_flecs_core"
            }
        );

        PrivateDependencyModuleNames.AddRange
        (
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                
            }
        );

       
    }
}