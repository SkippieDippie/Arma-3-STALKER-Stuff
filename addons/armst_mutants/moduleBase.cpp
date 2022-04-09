
	class Logic;
	class Module_F: Logic {
		class AttributesBase
		{
			class Default;
			class Edit; // Default edit box (i.e., text input field)
			class Combo; // Default combo box (i.e., drop-down menu)
			class Checkbox; // Default checkbox (returned value is Bool)
			class CheckboxNumber; // Default checkbox (returned value is Number)
			class ModuleDescription; // Module description
			class Units; // Selection of units on which the module is applied
		};
		// Description base classes, for more information see below
		class ModuleDescription
		{
			class Anything;
		};
    };
	
	class ARMST_mutantsModuleBaseSpawn: Module_F
	{
		// Standard object definitions
		scope = 0; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		author="Aloe";
		category="ARMST_MUTANTS";
		displayName =  "$STR_MUTANTS_MODULENAME"; // Name displayed in the menu
		icon = "armst_mutants\Images\icon_spawn11.paa";
		
		// Name of function triggered once conditions are met
		function = "ARMST_fnc_mutantsModuleSpawnInit";
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
		class Attributes: AttributesBase {};
		
		// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_MUTANTS_MODULE_DESC"; // Short description, will be formatted as structured text
			sync[] = {"EmptyDetector", "ARMST_mutantsModuleController", "ARMST_mutantsModuleZombies"}; // Array of synced entities (can contain base classes)
			
			
			class EmptyDetector
			{

				displayName = "$STR_MUTANTS_SYNCEDTRIGGER"; // Custom name
				icon = "iconMan"; // Custom icon (can be file path or CfgVehicleIcons entry)
				//side = 1; // Custom side (will determine icon color)
				
				position = 1; // Position is taken into effect
				direction = 0; // Direction is taken into effect
				optional = 0; // Synced entity is optional
				duplicate = 1; // Multiple entities of this type can be synced
				
				
				description[] = { // Multi-line descriptions are supported
					"$STR_MUTANTS_SYNCEDTRIGGER_DESC",
					"$STR_MUTANTS_SYNCEDTRIGGER_DESCFULL"
				};
				
				synced[] = {}; // Pre-define entities like "AnyBrain" can be used. See the list below
			};
			
			class ARMST_mutantsModuleController
			{
				position = 0; // Position is taken into effect
				direction = 0; // Direction is taken into effect
				optional = 1; // Synced entity is optional
				duplicate = 1; // Multiple entities of this type can be synced
			};
			
			class ARMST_mutantsModuleZombies 
			{
				position = 0; // Position is taken into effect
				direction = 0; // Direction is taken into effect
				optional = 1; // Synced entity is optional
				duplicate = 1; // Multiple entities of this type can be synced
			};
		};
	};
	
	class ARMST_mutantsModuleBase: Module_F
	{
		// Standard object definitions
		scope = 0; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName =  "$STR_MUTANTS_MODULENAME"; // Name displayed in the menu
		author="Aloe";
		category="ARMST_MUTANTS";
		// Name of function triggered once conditions are met
		function = "ARMST_fnc_mutantsModuleTypeInit";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 0;
		// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isGlobal = 0;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 0;
		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		isDisposable = 0;
		
		unitTypes[] = {};
		
		// Module arguments
		class Attributes: AttributesBase
		{			
		
			class CountUnits: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_CountUnits";
				displayName = "$STR_MUTANTS_MODULE_SET_CNT"; // Argument label
				tooltip = "$STR_MUTANTS_MODULE_SET_CNTDESC"; // Tooltip description
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = 1;
				class values
				{
					class 1	{name = "1";  value = 1;}; //Default
					class 2	{name = "2";  value = 2;}; 
					class 3	{name = "3";  value = 3;};
					class 4	{name = "4";  value = 4;};
					class 5	{name = "5";  value = 5;};
					class 10 {name = "10"; value = 10;};
					class 15 {name = "15"; value = 15;};
					class 20 {name = "20"; value = 20;};
					class 25 {name = "25"; value = 25;};
					class 30 {name = "30"; value = 30;};
					class 40 {name = "40"; value = 40;};
					class 50 {name = "50"; value = 50;};
					class 60 {name = "60"; value = 60;};
					class 70 {name = "70"; value = 70;};
					class 80 {name = "80"; value = 80;};
					class 90 {name = "90"; value = 90;};
					class 100 {name = "100"; value = 100;};
				};
			};
            
            class CountUnitsLimit: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_CountUnitsLimit";
				displayName = "$STR_MUTANTS_MODULE_SET_CNTLIMIT"; // Argument label
				tooltip = "$STR_MUTANTS_MODULE_SET_CNTLIMIT"; // Tooltip description
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = 50;
				class values
				{
					class 1	{name = "5";  value = 5;};
					class 2	{name = "10";  value = 10;};
					class 3	{name = "15";  value = 15;};
					class 4	{name = "20";  value = 20;};
					class 5	{name = "30";  value = 30;};
					class 6	{name = "50";  value = 50;}; 
					class 7	{name = "100";  value = 100;};
				};
			};
			
			class CountUnitsType: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_CountUnitsType";
				displayName = ""; // Argument label
				tooltip = "$STR_MUTANTS_MODULE_SET_CNT_TYPE_DESC"; // Tooltip description
				typeName="NUMBER";
				defaultValue = 1;
				class values
				{
					class all {name = "$STR_MUTANTS_MODULE_SET_CNT_TYPE_ALL"; value = 1;};
					class each {name = "$STR_MUTANTS_MODULE_SET_CNT_TYPE_EACH"; value = 2;};
				};
			};
			
			class CountUnitsRandomize: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_CountUnitsRandomize";
				displayName = "$STR_MUTANTS_MODULE_SET_CNTRND"; // Argument label
				tooltip = "$STR_MUTANTS_MODULE_SET_CNTRNDDESC"; // Tooltip description
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = 0;
				class values
				{
					class 0	{name = "$STR_MUTANTS_MODULE_SET_NO";  value = 0;};
					class 10 {name = "10%"; value = 10;};
					class 20 {name = "20%"; value = 20;};
					class 30 {name = "30%"; value = 30;};
					class 40 {name = "40%"; value = 40;};
					class 50 {name = "50%"; value = 50;};
					class 60 {name = "60%"; value = 60;};
					class 70 {name = "70%"; value = 70;};
					class 80 {name = "80%"; value = 80;};
					class 90 {name = "90%"; value = 90;};
					class 100 {name = "100%"; value = 100;};
				};
			};
				
			class UnitsUpdatePercentage: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_UnitsUpdatePercentage";
				displayName = "$STR_MUTANTS_MODULE_SET_UPDPERC"; // Argument label
				tooltip = "$STR_MUTANTS_MODULE_SET_UPDPERCDESC"; // Tooltip description
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = 0;
				class values
				{
					class 0	{name = "$STR_MUTANTS_MODULE_SET_NO";  value = 0;};
					class 10 {name = "10%"; value = 10;};
					class 20 {name = "20%"; value = 20;};
					class 30 {name = "30%"; value = 30;};
					class 40 {name = "40%"; value = 40;};
					class 50 {name = "50%"; value = 50;};
					class 60 {name = "60%"; value = 60;};
					class 70 {name = "70%"; value = 70;};
					class 80 {name = "80%"; value = 80;};
					class 90 {name = "90%"; value = 90;};
					class 100 {name = "100%"; value = 100;};
				};
			};
									
			class SpawnAreaPercentage: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_SpawnAreaPercentage";
				displayName = "$STR_MUTANTS_MODULE_SET_SPAWNAREA"; // Argument label
				tooltip = "$STR_MUTANTS_MODULE_SET_SPAWNAREADESC"; // Tooltip description
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = 80;
				class values
				{
					class 10 {name = "10%"; value = 10;};
					class 20 {name = "20%"; value = 20;};
					class 30 {name = "30%"; value = 30;};
					class 40 {name = "40%"; value = 40;};
					class 50 {name = "50%"; value = 50;};
					class 60 {name = "60%"; value = 60;};
					class 70 {name = "70%"; value = 70;};
					class 80 {name = "80%"; value = 80;};
					class 90 {name = "90%"; value = 90;};
					class 100 {name = "100%"; value = 100;};
				};
			};
			
            class UpdateDelay: Combo
            {
                property = "CFG_ARMST_mutantsModuleBase_UpdateDelay";
				displayName="$STR_MUTANTS_MODULE_SET_UPDATEDELAY";
				tooltip="$STR_MUTANTS_MODULE_SET_UPDATEDELAYDESC";
				typeName="NUMBER";
				defaultValue = 3;
				class values
				{
                    class none	{name = "$STR_MUTANTS_MODULE_SET_NO";  value = 0;};
                    class 1	{name = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUT_MIN_1";  value = 1;};
                    class 3	{name = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUT_MIN_3";  value = 3;};
                    class 5	{name = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUT_MIN_5";  value = 5;};
                    class 10 {name = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUT_MIN_10"; value = 10;};
                    class 15 {name = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUT_MIN_15"; value = 15;};
                    class 30 {name = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUT_MIN_30"; value = 30;};
                    class 45 {name = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUT_MIN_45"; value = 45;};
                    class 60 {name = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUT_HOUR_1"; value = 60;};
                    class 90 {name = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUT_MIN_90"; value = 90;};
                    class 120 {name = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUT_HOUR_2"; value = 120;};
				};
            };
            
			class ClearDelay: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_ClearDelay";
				displayName="$STR_MUTANTS_MODULE_SET_CLEARDELAY";
				tooltip="$STR_MUTANTS_MODULE_SET_CLEARDELAYDESC";
				typeName="NUMBER";
				defaultValue = 60;
				class values
				{
					class 0	{name = "$STR_MUTANTS_MODULE_SET_ASDEACTIVATE";  value = 0;}; 
					class 15 {name = "15"; value = 15;};
					class 30 {name = "30"; value = 30;};
					class 60 {name = "60"; value = 60;};
					class 120 {name = "120"; value = 120;};
					class 180 {name = "180"; value = 180;};
					class 300 {name = "300"; value = 300;};
				};
			};
						
			class Housespawn: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_Housespawn";
				displayName="$STR_MUTANTS_MODULE_SET_HOUSESPAWN";
				tooltip="$STR_MUTANTS_MODULE_SET_HOUSESPAWNDESC";
				typeName="NUMBER";
				defaultValue = 0;
				class values
				{
					class never {name = "$STR_MUTANTS_MODULE_SET_NEVER"; value = 0;};
					//class sometimes {name = "$STR_MUTANTS_MODULE_SET_SOMETIMES"; value = 1; default = 0;}; //Default					
					//class always {name = "$STR_MUTANTS_MODULE_SET_ALWAYS"; value = 2; default = 0;}; 
				};
			};
			
			class TimeDay: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_TimeDay";
				displayName="$STR_MUTANTS_MODULE_SET_TIMEDAY";
				tooltip="$STR_MUTANTS_MODULE_SET_TIMEDAYDESC";
				typeName="NUMBER";
				defaultValue = 2;
				class values
				{
					class sunset {name = "$STR_MUTANTS_MODULE_SET_SUNSET"; value = 0;};
					class sunrize {name = "$STR_MUTANTS_MODULE_SET_SUNRISE"; value = 1;};
					class always {name = "$STR_MUTANTS_MODULE_SET_ALWAYS"; value = 2;};
				};
			};
			
			class Chances: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_Chances";
				displayName="$STR_MUTANTS_MODULE_SET_CHANCE";
				tooltip="$STR_MUTANTS_MODULE_SET_CHANCE";
				typeName="NUMBER";
				defaultValue = 100;
				class values
				{
					class chance0 {name = "0%"; value = 0;};
					class chance10 {name = "10%"; value = 10;};
					class chance20 {name = "20%"; value = 20;};
					class chance30 {name = "30%"; value = 30;};
					class chance40 {name = "40%"; value = 40;};
					class chance50 {name = "50%"; value = 50;};
					class chance60 {name = "60%"; value = 60;};
					class chance70 {name = "70%"; value = 70;};
					class chance80 {name = "80%"; value = 80;};
					class chance90 {name = "90%"; value = 90;};
					class chance100 {name = "100%"; value = 100;};
				};
			};
			
			class Behaviour: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_Behaviour";
				displayName = "$STR_MUTANTS_MODULE_SET_BEHAVIOUR"; // Argument label
				tooltip = "$STR_MUTANTS_MODULE_SET_BEHAVIOUR_DESC"; // Tooltip description
				typeName="NUMBER";
				defaultValue = 1;
				class values
				{
					class safe {name = "$STR_MUTANTS_MODULE_SET_BEHAVIOUR_SAFE"; value = 1;};
					class combat {name = "$STR_MUTANTS_MODULE_SET_BEHAVIOUR_COMBAT"; value = 2;};
				};
			};

            class Dammage: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_Char_Dammage";
				displayName="$STR_MUTANTS_MODULE_SET_CHAR_DAMMAGE";
				tooltip="$STR_MUTANTS_MODULE_SET_CHAR_DAMMAGE";
				typeName="NUMBER";
				defaultValue = 30;
				class values
				{  
					class char1 {name = "10%"; value = 10;};
					class char2 {name = "20%"; value = 20;};
					class char3 {name = "30%"; value = 30;};
					class char4 {name = "40%"; value = 40;};
					class char5 {name = "50%"; value = 50;};
					class char6 {name = "60%"; value = 60;};
					class char7 {name = "70%"; value = 70;};
					class char8 {name = "80%"; value = 80;};
					class char9 {name = "90%"; value = 90;};
					class char10 {name = "100%"; value = 100;};
				};
			};
            class Agressive: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_Char_Agressive";
				displayName="$STR_MUTANTS_MODULE_SET_CHAR_AGRESSIVE";
				tooltip="$STR_MUTANTS_MODULE_SET_CHAR_AGRESSIVE_DESC";
				typeName="NUMBER";
				defaultValue = 80;
				class values
				{
                    class char0 {name = "0%"; value = 0;};
					class char1 {name = "10%"; value = 10;};
					class char2 {name = "20%"; value = 20;};
					class char3 {name = "30%"; value = 30;};
					class char4 {name = "40%"; value = 40;};
					class char5 {name = "50%"; value = 50;};
					class char6 {name = "60%"; value = 60;};
					class char7 {name = "70%"; value = 70;};
					class char8 {name = "80%"; value = 80;};
					class char9 {name = "90%"; value = 90;};
					class char10 {name = "100%"; value = 100;};
				};
			};
            class Secrecy: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_Char_Secrecy";
				displayName="$STR_MUTANTS_MODULE_SET_CHAR_SECRECY";
				tooltip="$STR_MUTANTS_MODULE_SET_CHAR_SECRECY_DESC";
				typeName="NUMBER";
				defaultValue = 20;
				class values
				{
                    class char0 {name = "0%"; value = 0;};
					class char1 {name = "10%"; value = 10;};
					class char2 {name = "20%"; value = 20;};
					class char3 {name = "30%"; value = 30;};
					class char4 {name = "40%"; value = 40;};
					class char5 {name = "50%"; value = 50;};
					class char6 {name = "60%"; value = 60;};
					class char7 {name = "70%"; value = 70;};
					class char8 {name = "80%"; value = 80;};
					class char9 {name = "90%"; value = 90;};
					class char10 {name = "100%"; value = 100;};
				};
			};
            class Curious: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_Char_Curious";
				displayName="$STR_MUTANTS_MODULE_SET_CHAR_CURIOUS";
				tooltip="$STR_MUTANTS_MODULE_SET_CHAR_CURIOUS_DESC";
				typeName="NUMBER";
				defaultValue = 50;
				class values
				{
                    class char0 {name = "0%"; value = 0;};
					class char1 {name = "10%"; value = 10;};
					class char2 {name = "20%"; value = 20;};
					class char3 {name = "30%"; value = 30;};
					class char4 {name = "40%"; value = 40;};
					class char5 {name = "50%"; value = 50;};
					class char6 {name = "60%"; value = 60;};
					class char7 {name = "70%"; value = 70;};
					class char8 {name = "80%"; value = 80;};
					class char9 {name = "90%"; value = 90;};
					class char10 {name = "100%"; value = 100;};
				};
			};
            class Cowardice: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_Char_Cowardice";
				displayName="$STR_MUTANTS_MODULE_SET_CHAR_COWARDICE";
				tooltip="$STR_MUTANTS_MODULE_SET_CHAR_COWARDICE_DESC";
				typeName="NUMBER";
				defaultValue = 30;
				class values
				{
                    class char0 {name = "0%"; value = 0;};
					class char1 {name = "10%"; value = 10;};
					class char2 {name = "20%"; value = 20;};
					class char3 {name = "30%"; value = 30;};
					class char4 {name = "40%"; value = 40;};
					class char5 {name = "50%"; value = 50;};
					class char6 {name = "60%"; value = 60;};
					class char7 {name = "70%"; value = 70;};
					class char8 {name = "80%"; value = 80;};
					class char9 {name = "90%"; value = 90;};
					class char10 {name = "100%"; value = 100;};
				};
			};
            class Societal: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_Char_Societal";
				displayName="$STR_MUTANTS_MODULE_SET_CHAR_SOCIETAL";
				tooltip="$STR_MUTANTS_MODULE_SET_CHAR_SOCIETAL_DESC";
				typeName="NUMBER";
				defaultValue = 60;
				class values
				{
                    class char0 {name = "0%"; value = 0;};
					class char1 {name = "10%"; value = 10;};
					class char2 {name = "20%"; value = 20;};
					class char3 {name = "30%"; value = 30;};
					class char4 {name = "40%"; value = 40;};
					class char5 {name = "50%"; value = 50;};
					class char6 {name = "60%"; value = 60;};
					class char7 {name = "70%"; value = 70;};
					class char8 {name = "80%"; value = 80;};
					class char9 {name = "90%"; value = 90;};
					class char10 {name = "100%"; value = 100;};
				};
			};
            class Courage: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_Char_Courage";
				displayName="$STR_MUTANTS_MODULE_SET_CHAR_COURAGE";
				tooltip="$STR_MUTANTS_MODULE_SET_CHAR_COURAGE_DESC";
				typeName="NUMBER";
				defaultValue = 0;
				class values
				{
					class char0 {name = "0"; value = 0;};
					class char1 {name = "1"; value = 1;};
					class char2 {name = "2"; value = 2;};
					class char3 {name = "3"; value = 3;};
					class char4 {name = "4"; value = 4;};
					class char5 {name = "5"; value = 5;};
					class char6 {name = "6"; value = 6;};
					class char7 {name = "7"; value = 7;};
					class char8 {name = "8"; value = 8;};
					class char9 {name = "9"; value = 9;};
					class char10 {name = "10"; value = 10;};
				};
			};
            class Tactiful: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_Char_Tactiful";
				displayName="$STR_MUTANTS_MODULE_SET_CHAR_TACTIFUL";
				tooltip="$STR_MUTANTS_MODULE_SET_CHAR_TACTIFUL_DESC";
				typeName="NUMBER";
				defaultValue = 1;
				class values
				{
                    class none	{name = "$STR_MUTANTS_MODULE_SET_NO";  value = 0;};
                    class yes	{name = "$STR_MUTANTS_MODULE_SET_YES";  value = 1;};
				};
			};
            class HabitatRadius: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_Char_HabitatRadius";
				displayName="$STR_MUTANTS_MODULE_SET_CHAR_HABITATRADIUS";
				tooltip="$STR_MUTANTS_MODULE_SET_CHAR_HABITATRADIUS";
				typeName="NUMBER";
				defaultValue = 1000;
				class values
				{
					class char0 {name = "10m"; value = 10;};
					class char1 {name = "100m"; value = 100;};
					class char2 {name = "200m"; value = 200;};
					class char3 {name = "300m"; value = 300;};
					class char4 {name = "400m"; value = 400;};
					class char5 {name = "500m"; value = 500;};
					class char6 {name = "1000m"; value = 1000;};
					class char7 {name = "2000m"; value = 2000;};
					class char8 {name = "3000m"; value = 3000;};
					class char9 {name = "5000m"; value = 5000;};
				};
			};
            class DetectionRadius: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_Char_DetectionRadius";
				displayName="$STR_MUTANTS_MODULE_SET_CHAR_DETECTIONRADIUS";
				tooltip="$STR_MUTANTS_MODULE_SET_CHAR_DETECTIONRADIUS";
				typeName="NUMBER";
				defaultValue = 300;
				class values
				{
					class char1 {name = "100m"; value = 100;};
					class char2 {name = "200m"; value = 200;};
					class char3 {name = "300m"; value = 300;};
					class char4 {name = "400m"; value = 400;};
					class char5 {name = "500m"; value = 500;};
					class char6 {name = "1000m"; value = 1000;};
				};
			};
            class CoverRadius: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_Char_CoverRadius";
				displayName="$STR_MUTANTS_MODULE_SET_CHAR_COVERRADIUS";
				tooltip="$STR_MUTANTS_MODULE_SET_CHAR_COVERRADIUS";
				typeName="NUMBER";
				defaultValue = 200;
				class values
				{
					class char1 {name = "100m"; value = 100;};
					class char2 {name = "200m"; value = 200;};
					class char3 {name = "300m"; value = 300;};
					class char4 {name = "400m"; value = 400;};
					class char5 {name = "500m"; value = 500;};
				};
			};
            class EscapeRadius: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_Char_EscapeRadius";
				displayName="$STR_MUTANTS_MODULE_SET_CHAR_ESCAPERADIUS";
				tooltip="$STR_MUTANTS_MODULE_SET_CHAR_ESCAPERADIUS";
				typeName="NUMBER";
				defaultValue = 300;
				class values
				{
					class char1 {name = "100m"; value = 100;};
					class char2 {name = "200m"; value = 200;};
					class char3 {name = "300m"; value = 300;};
					class char4 {name = "400m"; value = 400;};
					class char5 {name = "500m"; value = 500;};
				};
			};
            class DebugType: Combo
			{
				property = "CFG_ARMST_mutantsModuleBase_Char_DebugType";
				displayName="$STR_MUTANTS_MODULE_SET_CHAR_DEBUGTYPE";
				tooltip="$STR_MUTANTS_MODULE_SET_CHAR_DEBUGTYPE";
				typeName="NUMBER";
				defaultValue = 0;
				class values
				{
					class char1 {name = "$STR_MUTANTS_MODULE_SET_NO"; value = 0;};
					class char2 {name = "$STR_MUTANTS_MODULE_SET_CHAR_DEBUGTYPE_DISPLAY"; value = 1;};
					class char3 {name = "$STR_MUTANTS_MODULE_SET_CHAR_DEBUGTYPE_DISPLAYLOG"; value = 2;};
				};
			};
		};
		
		// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_MUTANTS_SYNCEDAI_DESC"; // Short description, will be formatted as structured text
			sync[] = {"ARMST_mutantsModuleBaseSpawn"}; // Array of synced entities (can contain base classes)
			
			class ARMST_mutantsModuleBaseSpawn {
				
				position = 0; // Position is taken into effect
				direction = 0; // Direction is taken into effect
				optional = 0; // Synced entity is optional
				duplicate = 1; // Multiple entities of this type can be synced
				
			};
			
			position = 0;
			direction = 0;
			optional = 0;
			duplicate = 1;
			
		};
	};
