using UnrealBuildTool;

public class intg_flecs_core : ModuleRules
{
    public intg_flecs_core(ReadOnlyTargetRules Target) : base(Target)
    {

       
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
         //The path for the header files
       PublicIncludePaths.AddRange(new string[] {});
       //The path for the source files
       PrivateIncludePaths.AddRange(new string[] {});
       
        PublicDependencyModuleNames.AddRange
        (
            new string[]
            {
                "Core", "CoreUObject", "Engine",
            }
        );

       //PrivateDefinitions.AddRange(new string[] { "flecs_EXPORTS=1 " } );
    }
}