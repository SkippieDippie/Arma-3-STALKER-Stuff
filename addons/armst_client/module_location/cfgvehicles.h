	/*
	class CfgFactionClasses
	{
		class NO_CATEGORY;
		class armst_location: NO_CATEGORY
		{
			displayName = "$STR_LOCATION_MODULENAME";
		};
	};
	*/
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription
		{
			class AnyVehicle;
		};
	};
	
	class ARMST_LocationModule: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName =  "$STR_LOCATION_MODULENAME"; // Name displayed in the menu

		icon = "\a3\Modules_f\data\iconSector_ca.paa";
		
		// Name of function triggered once conditions are met
		function = "ARMST_fnc_locationModule";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 0;
		// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isGlobal = 0;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 0;
		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		isDisposable = 0;

		// Menu displayed when the module is placed or double-clicked on by Zeus
		//curatorInfoType = "RscDisplayAttributeModuleNuke";

		// Module arguments
		/*
		class Arguments
		{						
			class DeactiavateDelay
			{
				displayName="$STR_MUTANTS_MODULE_SET_DEACTIVEDELAY";
				description="$STR_MUTANTS_MODULE_SET_DEACTIVEDELAYDESC";
				typeName="NUMBER";
				class values
				{
					class 0	{name = "$STR_MUTANTS_MODULE_SET_NO";  value = 0.1; default = 1;};  //Default
					class 10 {name = "10"; value = 10; default = 0;};
					class 30 {name = "30"; value = 30; default = 0;};
					class 60 {name = "60"; value = 60; default = 0;};
					class 120 {name = "120"; value = 120; default = 0;};
				};
			};
					
		};
		*/
		class Arguments
		{
			class Name
			{
				displayName="$STR_LOCATION_MODULE_SET_NAME";
				description="$STR_LOCATION_MODULE_SET_NAMEDESC";
				typeName="STRING";
				defaultValue = "";
			};
			class Radius
			{
				displayName="$STR_LOCATION_MODULE_SET_RADIUS";
				description="$STR_LOCATION_MODULE_SET_RADIUSDESC";
				typeName="NUMBER";
				defaultValue = 100;
			};
			class RevardScore
			{
				displayName="$STR_A3_CfgVehicles_ModuleSector_F_Arguments_ScoreReward_0";
				description="$STR_A3_CfgVehicles_ModuleSector_F_Arguments_ScoreReward_1";
				typeName="NUMBER";
				defaultValue = 0;
			};
			class CaptureCoef
			{
				displayName="$STR_LOCATION_MODULE_SET_CAPCOEF";
				description="$STR_LOCATION_MODULE_SET_CAPCOEFDESC";
				typeName="NUMBER";
				defaultValue = 0.025;
			};
			class onOwnerChange
			{
				displayName="$STR_A3_CfgVehicles_ModuleSector_F_Arguments_OnOwnerChange_0";
				description="$STR_A3_CfgVehicles_ModuleSector_F_Arguments_OnOwnerChange_1";
				typeName="STRING";
				defaultValue = "";
			};
			class FlagCreate
			{
				displayName="$STR_LOCATION_MODULE_SET_FLAGCREATE";
				description="$STR_LOCATION_MODULE_SET_FLAGCREATEDESC";
				typeName="NUMBER";
				class values
				{
					class Yes		{name = "$STR_LOCATION_MODULE_SET_YES";	value = 1; default = 1;};
					class No		{name = "$STR_LOCATION_MODULE_SET_NO";	value = 0; default = 0;};
				};
			};
			class RespawnContested
			{
				displayName="$STR_LOCATION_MODULE_SET_RESPAWNCONTESTED";
				description="$STR_LOCATION_MODULE_SET_RESPAWNCONTESTEDDESC";
				typeName="NUMBER";
				class values
				{
					class Yes		{name = "$STR_LOCATION_MODULE_SET_YES";	value = 1; default = 1;};
					class No		{name = "$STR_LOCATION_MODULE_SET_NO";	value = 0; default = 0;};
				};
			};
		};
		
		
		// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
		class ModuleDescription
		{
			description[] = {
				$STR_a3_cfgvehicles_modulesector_f_moduledescription_description_0,
				$STR_a3_cfgvehicles_modulesector_f_moduledescription_description_1
			};
			
			duplicate = 1;
			position = 1; // Position is taken into effect
			direction = 0; // Direction is taken into effect
			
		};
	};