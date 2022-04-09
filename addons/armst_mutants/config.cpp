#include "BIS_AddonInfo.hpp"

	class CfgPatches {
		class armst_mutants {
			units[] = {};
			weapons[] = {};
			requiredVersion = 0.1;
			requiredAddons[] = {"A3_Modules_F", "armst_char_mut"};
		};
	};
	
	class CfgRemoteExec
	{
		class Functions
		{
			mode = 1;
			jip = 1; 
			
			//All
			class ARMST_fnc_mutantsModuleUpdateUnitsList	{allowedTargets = 0;};
			class ARMST_fnc_removeDogActions				{allowedTargets = 0;};
			
			//Per-to-per
			class ARMST_fnc_setDammageHitPoint				{allowedTargets = 1;};
			class ARMST_fnc_controllerPsyField				{allowedTargets = 1;};
			class ARMST_fnc_poltergeistPsyField				{allowedTargets = 1;};
			class ARMST_fnc_controllerDistanceAttack		{allowedTargets = 1;};
            class ARMST_fnc_pseudoGiantAttack	        	{allowedTargets = 1;};
			class ARMST_fnc_psyAttackMolitva	        	{allowedTargets = 1;};
			class ARMST_fnc_psyAttackThrow  	        	{allowedTargets = 1;};
            
			class ARMST_fnc_mutPlayAttack 					{allowedTargets = 1;};
			
			class ARMST_fnc_unitDropWeapon					{allowedTargets = 1;};
			class ARMST_fnc_unitPlayMove					{allowedTargets = 1;};
			
		};
		 
	};
	
	class CfgFunctions {
		class Armst {
			
			class MutantsModule {
			
				file = "armst_mutants\Scripts\Module";
				
				class mutantsModuleSpawnInit {};
				class mutantsModuleTypeInit {};

				class mutantsModuleGetSensorsActivated {};
				class mutantsModuleSpawn {};
				class mutantsModuleSpawnOrder {};
				
                class mutantsModuleSpawnGroup {};
                class mutantsModuleUpdateOrders {};
				
                class mutantsModuleSpawnUnit {};
				class mutantsModuleSpawnUnitClient {};
				
				class mutantsModuleLog {};
				class mutantsModuleUpdateUnitsList {};
				
				class mutantsSensorGetModule {};
				class mutantsSensorGetOrders {};
				class mutantsSensorOnActivate {};
				class mutantsSensorOnDeactivate {};
				class mutantsSensorGetPosition {};
                
                class mutantsOrderGetCharacter {};
                class mutantsSetCharacter {};
                
			};
			
			
			class MutantsScripts {
			
				file = "armst_mutants\Scripts";

				class unitDropWeapon {};
				class unitPlayMove {};
				class setDammageHitPoint {};
				class findHidePos {};
				class findSafePos {};
				class groupByDistance {};
				class sortByDistance {};
				

			};
				
	
	
			class AnimalsScripts {
				
				file = "armst_mutants\Animals\Dog";
				
				class initDog {};
				class initDogActions {};
				class removeDogActions {};
				class dogActionSearch {};
				class dogActionDomesticate {};
				class dogStateHint {};
				class dogShowState {};
				class dogLastCommand {};
				
			};
			
			class AnimalsCommandScripts {
				
				file = "armst_mutants\Animals\Dog\Commands";
				
				class dogCommandFollow {};
				class dogCommandWalk {};
				class dogCommandGuard {};
				class dogCommandSit {};
				class dogCommandSearchPeopleA {};
				class dogCommandSearchPeopleE {};
				class dogCommandSearchObjects {};
				class dogCommandEat {};

			};
			
			class MutantsLogicScripts {
				
				file = "armst_mutants\Logics\Scripts";
				
				class mutDebugState {};
				class mutFindUnits {};
				class mutAspectCalculate {};
				class mutAspectRatio {};
				
				class mutGetAnimsPair {};
				class mutGetConfigSounds {};
				class mutGetConfigAnims {};
				
				class mutBehaviour {};
				class mutBehaviourSet {};
				
				class mutAttackLogic {};
				class mutAttackAnother {};
				
				class mutAttackLogicStuck {};
				class mutPlayAttackRemote {};
				class mutSetDammageRemote {};
				
				class mutPlayAttack {};
				class mutScreenAttack {};
				
				class mutIsFriendly {};
			};
			
			class MutantsAttack {
				
				file = "armst_mutants\Logics\Attack";
				
				class mutAttackDefault {};
				class mutAttackDog {};
				class mutAttackBloodsucker {};
				class mutAttackController {};
				class mutAttackPoltergeist {};
				class mutAttackBurrer {};
				class mutAttackBurrerHit {};
				class mutAttackSnork {};
				class mutAttackGiant {};
				
			};
									
			class MutantsAttackScripts {
				
				file = "armst_mutants\Logics\Attack\Scripts";
				
				class controllerDistanceAttack {};
				class controllerPsyField {};
				class poltergeistPsyField {};
				///class pseudoAttack {preInit  = 1;}; WAT A FUCK ?
				class psyAttackMolitva {};
				class psyAttackThrow {};
				class togglePsyShield {};
			};
		};
	};
	
	class CfgSounds 
	{
		class dog_whistle_1
		{
			name = "dog_whistle_1";
			sound[] = {"\armst_mutants\sounds\dog_whistle_1.ogg",1, 1};
			titles[] = {};
		};
		class dog_whistle_2
		{
			name = "dog_whistle_2";
			sound[] = {"\armst_mutants\sounds\dog_whistle_2.ogg",1, 1};
			titles[] = {};
		};
		class dog_whistle_3
		{
			name = "dog_whistle_3";
			sound[] = {"\armst_mutants\sounds\dog_whistle_3.ogg",1, 1};
			titles[] = {};
		};
		class dog_growl_1
		{
			name = "dog_growl_1";
			sound[] = {"\armst_mutants\sounds\dog\growl\dog_growl_1.ogg", db+10, 1};
			titles[] = {};
		};
		class dog_growl_2
		{
			name = "dog_growl_2";
			sound[] = {"\armst_mutants\sounds\dog\growl\dog_growl_2.ogg", db+10, 1};
			titles[] = {};
		};
		class dog_growl_3
		{
			name = "dog_growl_3";
			sound[] = {"\armst_mutants\sounds\dog\growl\dog_growl_3.ogg", db+10, 1};
			titles[] = {};
		};
		class dog_growl_4
		{
			name = "dog_growl_4";
			sound[] = {"\armst_mutants\sounds\dog\growl\dog_growl_4.ogg", db+10, 1};
			titles[] = {};
		};
		class dog_growl_5
		{
			name = "dog_growl_5";
			sound[] = {"\armst_mutants\sounds\dog\growl\dog_growl_5.ogg", db+10, 1};
			titles[] = {};
		};
		class dog_growl_6
		{
			name = "dog_growl_6";
			sound[] = {"\armst_mutants\sounds\dog\growl\dog_growl_6.ogg", db+10, 1};
			titles[] = {};
		};
		class dog_growl_7
		{
			name = "dog_growl_7";
			sound[] = {"\armst_mutants\sounds\dog\growl\dog_growl_7.ogg", db+10, 1};
			titles[] = {};
		};
		class dog_growl_8
		{
			name = "dog_growl_8";
			sound[] = {"\armst_mutants\sounds\dog\growl\dog_growl_8.ogg", db+10, 1};
			titles[] = {};
		};
		class dog_growl_9
		{
			name = "dog_growl_9";
			sound[] = {"\armst_mutants\sounds\dog\growl\dog_growl_9.ogg", db+10, 1};
			titles[] = {};
		};
		class dog_growl_10
		{
			name = "dog_growl_10";
			sound[] = {"\armst_mutants\sounds\dog\growl\dog_growl_10.ogg", db+10, 1};
			titles[] = {};
		};
		class dog_bark_idle
		{
			name = "dog_bark_idle";
			sound[] = {"\armst_mutants\sounds\dog\bark\1\dog_bark_idle.ogg", db+30, 1};
			titles[] = {};
		};
		
		class dog_bark_1_1
		{
			name = "dog_bark_1_1";
			sound[] = {"\armst_mutants\sounds\dog\bark\1\dog_bark_1_1.ogg", db+120, 1};
			titles[] = {};
		};
		class dog_bark_1_2
		{
			name = "dog_bark_1_2";
			sound[] = {"\armst_mutants\sounds\dog\bark\1\dog_bark_1_2.ogg", db+120, 1};
			titles[] = {};
		};
		class dog_bark_1_3
		{
			name = "dog_bark_1_3";
			sound[] = {"\armst_mutants\sounds\dog\bark\1\dog_bark_1_3.ogg", db+120, 1};
			titles[] = {};
		};
		class dog_bark_1_4
		{
			name = "dog_bark_1_4";
			sound[] = {"\armst_mutants\sounds\dog\bark\1\dog_bark_1_4.ogg", db+120, 1};
			titles[] = {};
		};
		class dog_bark_idle_2
		{
			name = "dog_bark_idle_2";
			sound[] = {"\armst_mutants\sounds\dog\bark\2\dog_bark_idle.ogg", db+30, 1};
			titles[] = {};
		};
		class dog_bark_2_1
		{
			name = "dog_bark_2_1";
			sound[] = {"\armst_mutants\sounds\dog\bark\2\dog_bark_2_1.ogg", db+120, 1};
			titles[] = {};
		};
		class dog_bark_2_2
		{
			name = "dog_bark_2_2";
			sound[] = {"\armst_mutants\sounds\dog\bark\2\dog_bark_2_2.ogg", db+120, 1};
			titles[] = {};
		};
		class dog_bark_2_3
		{
			name = "dog_bark_2_3";
			sound[] = {"\armst_mutants\sounds\dog\bark\2\dog_bark_2_3.ogg", db+120, 1};
			titles[] = {};
		};
		class burer_idle_0
		{
			name="burer_idle_0";
			sound[]={"\armst\Armst_sound\burer\burer_idle_0.ogg", 1, 1};
			titles[]={};
		};
		class burer_idle_1
		{
			name="burer_idle_1";
			sound[]={"\armst\Armst_sound\burer\burer_idle_1.ogg", 1, 1};
			titles[]={};
		};
		class burer_idle_2
		{
			name="burer_idle_2";
			sound[]={"\armst\Armst_sound\burer\burer_idle_2.ogg", 1, 1};
			titles[]={};
		};
		class armst_man_scrum_1
		{
			name = "armst_man_scrum_1";
			sound[] = {"\armst_mutants\sounds\psy\armst_man_scrum_1.ogg", db+10, 1};
			titles[] = {};
		};
		class armst_man_scrum_2
		{
			name = "armst_man_scrum_2";
			sound[] = {"\armst_mutants\sounds\psy\armst_man_scrum_2.ogg", db+10, 1};
			titles[] = {};
		};
		class armst_psy_tremmor
		{
			name = "armst_psy_tremmor";
			sound[] = {"\armst_mutants\sounds\psy\armst_psy_tremmor.ogg", db-10, 1};
			titles[] = {};
		};
	};


	class CfgFactionClasses
	{
		class ARMST_MUTANTS
		{
			displayName = "$STR_MUTANTS_MODULENAME";
			priority=0.1;
			side=7;
		};

	};
	
	class CfgVehicles
	{
		#include "moduleBase.cpp"
		
		class ARMST_mutantsModuleSpawn: ARMST_mutantsModuleBaseSpawn 
		{
			
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_SPAWN";
			icon = "armst_mutants\Images\icon_spawn11.paa";
			
			class Attributes: Attributes
			{
				class ModuleDescription: ModuleDescription {};
				
				class CreateType: Combo
				{
					property = "CFG_ARMST_mutantsModuleSpawn_CreateType";
					displayName = "$STR_MUTANTS_MODULE_SET_CREATETYPE"; // Argument label
					tooltip = "$STR_MUTANTS_MODULE_SET_CREATETYPE_DESC"; // Tooltip description
					typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
					defaultValue = 2;
					class values
					{
						class 2	{name = "$STR_MUTANTS_MODULE_SET_CREATETYPE_SERVER";  value = 1;};
						class 3	{name = "$STR_MUTANTS_MODULE_SET_CREATETYPE_CLIENT";  value = 2;};
					};
				};
				
				class DebugType: Combo
				{
					property = "CFG_ARMST_mutantsModuleSpawn_DebugType";
					displayName = "$STR_MUTANTS_MODULE_SET_DEBUG"; // Argument label
					tooltip = "$STR_MUTANTS_MODULE_SET_DEBUG"; // Tooltip description
					typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
					defaultValue = 0;
					class values
					{
						class 1	{name = "$STR_MUTANTS_MODULE_SET_NO";  value = 0;};
						class 2	{name = "$STR_MUTANTS_MODULE_SET_DEBUGTYPE_SEE";  value = 1;};
						class 3	{name = "$STR_MUTANTS_MODULE_SET_DEBUGTYPE_LOG";  value = 2;};
					};
				};
				
				class ActivationCond: Combo
				{
					property = "CFG_ARMST_mutantsModuleSpawn_ActivationCond";
					displayName = "$STR_MUTANTS_MODULE_SET_ACTCOND"; // Argument label
					tooltip = "$STR_MUTANTS_MODULE_SET_ACTCONDDESC"; // Tooltip description
					typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
					defaultValue = 1;
					class values
					{
						class 1	{name = "$STR_MUTANTS_MODULE_SET_ACTCOND_COND";  value = 0;};
						class 2	{name = "$STR_MUTANTS_MODULE_SET_ACTCOND_CONDPRES";  value = 1;};
					};
				};
				
				class AreaMode: Combo
				{
					property = "CFG_ARMST_mutantsModuleSpawn_AreaMode";
					displayName = "$STR_MUTANTS_MODULE_SET_AREAMODE"; // Argument label
					tooltip = "$STR_MUTANTS_MODULE_SET_AREAMODE_DESC"; // Tooltip description
					typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
					defaultValue = 1;
					class values
					{
						class 2	{name = "$STR_MUTANTS_MODULE_SET_AREAMODE_TRIGGER";  value = 1;};
						class 3	{name = "$STR_MUTANTS_MODULE_SET_AREAMODE_PLAYER";  value = 2;};
					};
				};
				
				class SpawnMode: Combo
				{
					property = "CFG_ARMST_mutantsModuleSpawn_SpawnMode";
					displayName = "$STR_MUTANTS_MODULE_SPAWNMODE"; // Argument label
					tooltip = "$STR_MUTANTS_MODULE_SPAWNMODE_DESC"; // Tooltip description
					typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
					defaultValue = 0;
					class values
					{
						class 1	{name = "$STR_MUTANTS_MODULE_SPAWNMODE_ALL";  value = 0;};
						class 2	{name = "$STR_MUTANTS_MODULE_SPAWNMODE_ANY";  value = 1;};
					};
				};
				
				class DeactiavateDelay: Combo
				{
					property = "CFG_ARMST_mutantsModuleSpawn_DeactiavateDelay";
					displayName="$STR_MUTANTS_MODULE_SET_DEACTIVEDELAY";
					tooltip="$STR_MUTANTS_MODULE_SET_DEACTIVEDELAYDESC";
					typeName="NUMBER";
					defaultValue = 0.1;
					class values
					{
						class 0	{name = "$STR_MUTANTS_MODULE_SET_NO";  value = 0.1;};  //Default
						class 10 {name = "10"; value = 10;};
						class 30 {name = "30"; value = 30;};
						class 60 {name = "60"; value = 60;};
						class 120 {name = "120"; value = 120;};
					};
				};
				
				class ActivationTimeout: Combo
				{
					property = "CFG_ARMST_mutantsModuleSpawn_ActivationTimeout";
					displayName = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUT";
					tooltip = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUTDESC";
					typeName = "NUMBER";
					defaultValue = 0;
					class values
					{
						class none	{name = "$STR_MUTANTS_MODULE_SET_NO";  value = 0;};
						class 1	{name = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUT_MIN_1";  value = 1;};
						class 3	{name = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUT_MIN_3";  value = 3;};
						class 5	{name = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUT_MIN_5";  value = 5;};
						class 10 {name = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUT_MIN_10"; value = 10;};
						class 15 {name = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUT_MIN_15"; value = 15;};
						class 30 {name = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUT_MIN_30"; value = 30;};
						class 60 {name = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUT_HOUR_1"; value = 60;};
						class 120 {name = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUT_HOUR_2"; value = 120;};
						class 240 {name = "$STR_MUTANTS_MODULE_SET_ACTTIMEOUT_HOUR_4"; value = 240;};
					};
				};
				
				class ConditionInterval: Combo
				{
					property = "CFG_ARMST_mutantsModuleSpawn_ConditionInterval";
					displayName = "$STR_MUTANTS_MODULE_SET_CONDINTV";
					tooltip = "$STR_MUTANTS_MODULE_SET_CONDINTV_DESC";
					typeName = "NUMBER";
					defaultValue = 10;
					class values
					{
						class 1	{name = "$STR_MUTANTS_MODULE_SET_CONDINTV_SEC_1";  value = 1;};
						class 5	{name = "$STR_MUTANTS_MODULE_SET_CONDINTV_SEC_5";  value = 5;};
						class 10	{name = "$STR_MUTANTS_MODULE_SET_CONDINTV_SEC_10";  value = 10;};
						class 15 {name = "$STR_MUTANTS_MODULE_SET_CONDINTV_SEC_15"; value = 15;};
						class 30 {name = "$STR_MUTANTS_MODULE_SET_CONDINTV_SEC_30"; value = 30;};
						class 60 {name = "$STR_MUTANTS_MODULE_SET_CONDINTV_MIN_1"; value = 60;};
						class 120 {name = "$STR_MUTANTS_MODULE_SET_CONDINTV_MIN_2"; value = 120;};
						class 180 {name = "$STR_MUTANTS_MODULE_SET_CONDINTV_MIN_3"; value = 180;};
						class 300 {name = "$STR_MUTANTS_MODULE_SET_CONDINTV_MIN_5"; value = 300;};
					};
				};
			};
			
		};
		
		class ARMST_mutantsModuleController: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_CONTROLLER";
			icon = "armst_mutants\Images\icon_controller1.paa";
			unitTypes[] = {"armst_controller_new", "armst_controller_new2", "armst_controller_new3"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				
				class TimeDay: TimeDay
				{
					defaultValue = 0;
					
				};
				
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};

			};
		};
		
		class ARMST_mutantsModuleBlinddog: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_BLINDDOG";
			icon = "armst_mutants\Images\icon_dog2.paa";
			unitTypes[] = {"armst_blinddog", "armst_blinddog2", "armst_blinddog3", "armst_blinddog4"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
                /*extend*/ class DebugType: DebugType {};
			};

		};
		
		class ARMST_mutantsModulePseudoDog: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_PSEUDODOG";
			icon = "armst_mutants\Images\icon_pseudodog2.paa";
			unitTypes[] = {"armst_pseudodog", "armst_pseudodog2"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};                
			};
		};
				
		class ARMST_mutantsModulePseudoDogSnow: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_PSEUDODOG";
			icon = "armst_mutants\Images\icon_pseudodog2.paa";
			unitTypes[] = {"armst_pseudodog_snow"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
			};
		};
		
		class ARMST_mutantsModuleBloodsucker: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_KROVOSOS";
			icon = "armst_mutants\Images\icon_krovosos1.paa";
			unitTypes[] = {"armst_krovosos", "armst_krovosos2", "armst_krovosos3", "armst_krovosos4"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				
				class TimeDay: TimeDay
				{
					defaultValue = 0;
					
				};
				
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
			};
		};
		class ARMST_mutantsModuleBloodsuckerStrong: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_KROVOSOS_Strong";
			icon = "armst_mutants\Images\icon_krovosos1.paa";
			unitTypes[] = {"armst_krovosos__strong", "armst_krovosos_strong2"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				
				class TimeDay: TimeDay
				{
					defaultValue = 0;
				};
				
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
			};
		};
		
		class ARMST_mutantsModuleBoar: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_BOAR";
			icon = "armst_mutants\Images\icon_boar4.paa";
			unitTypes[] = {"armst_boar", "armst_boar2", "armst_boar3", "armst_boar4"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
                /*extend*/ class DebugType: DebugType {};
				
			};
		};
		
		class ARMST_mutantsModuleZanoza: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "Заноза";
			icon = "armst_mutants\Images\icon_boar4.paa";
			unitTypes[] = {"armst_zanoza_new"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
                /*extend*/ class DebugType: DebugType {};
				
			};
		};
		
		class ARMST_mutantsModuleFlesh: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_FLESH";
			icon = "armst_mutants\Images\icon_flesh1.paa";
			unitTypes[] = {"armst_PLOT", "armst_PLOT2", "armst_PLOT3"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
				
			};
		};
		
		class ARMST_mutantsModulePseudogiant: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_PSEUDOGIANT";
			icon = "armst_mutants\Images\icon_pseudogiant1.paa";
			unitTypes[] = {"armst_giant", "armst_giant2"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
			};

		};
		
		class ARMST_mutantsModuleJerboa: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_JERBOA";
			icon = "armst_mutants\Images\icon_jerboa1.paa";
			unitTypes[] = {"armst_tushkano", "armst_tushkano2"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
				
			};
		};
		class ARMST_mutantsModuleradJerboa: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_radJERBOA";
			icon = "armst_mutants\Images\icon_jerboa1.paa";
			unitTypes[] = {"armst_tushkano_uran"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
				
			};
		};
		
		class ARMST_mutantsModuleCat: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_CAT";
			icon = "armst_mutants\Images\icon_cat1.paa";
			unitTypes[] = {"armst_cat", "armst_cat2"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
				
			};
		};

		class ARMST_mutantsModuleIzlom: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_IZLOM";
			icon = "armst_mutants\Images\icon_izlom1.paa";
			unitTypes[] = {"armst_izlom"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};				
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};	
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
				
			};
		};
			
		class ARMST_mutantsModulePoltergeist: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_POLTERGEIST";
			icon = "armst_mutants\Images\icon_poltergeist1.paa";
			unitTypes[] = {"armst_poltergeist"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
				
			};
		};
		
		class ARMST_mutantsModuleSnork: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_SNORK";
			icon = "armst_mutants\Images\icon_snork1.paa";
			unitTypes[] = {"armst_snork","armst_snork2","armst_snork3"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
				
			};
		};
		
		class ARMST_mutantsModuleBosorka: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "Босорка";
			icon = "armst_mutants\Images\icon_snork1.paa";
			unitTypes[] = {"armst_lepers"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
				
			};
		};
		class ARMST_mutantsModuleElectroShar: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "Электро-шар";
			icon = "armst_mutants\Images\icon_snork1.paa";
			unitTypes[] = {"armst_electraball"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
				
			};
		};
		class ARMST_mutantsModuleInsector: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "Инсектор";
			icon = "armst_mutants\Images\icon_snork1.paa";
			unitTypes[] = {"armst_Insection"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
				
			};
		};
		class ARMST_mutantsModuleFireball: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "Огненный шар";
			icon = "armst_mutants\Images\icon_snork1.paa";
			unitTypes[] = {"armst_fireball"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
				
			};
		};
		
		class ARMST_mutantsModuleZahvat: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "Хваталки";
			icon = "armst_mutants\Images\icon_snork1.paa";
			unitTypes[] = {"armst_Zahvat"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
				
			};
		};
		
		class ARMST_mutantsModuleBurer: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_BURER";
			icon = "armst_mutants\Images\icon_burer1.paa";
			unitTypes[] = {"burer"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
				
			};
		};

		class ARMST_mutantsModuletark: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_Tark";
			icon = "armst_mutants\Images\icon_chimera1.paa";
			unitTypes[] = {"armst_tark"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
				
			};

		};
		
		class ARMST_mutantsModuleghost: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "Духи";
			icon = "armst_mutants\Images\icon_chimera1.paa";
			unitTypes[] = {"armst_ghost"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
				
			};

		};
		class ARMST_mutantsModuleWolf: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_armst_wolf";
			icon = "armst_mutants\Images\icon_chimera1.paa";
			unitTypes[] = {"armst_wolf"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
			};

		};
		class ARMST_mutantsModulewolfhound: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_armst_wolfhound";
			icon = "armst_mutants\Images\icon_chimera1.paa";
			unitTypes[] = {"armst_wolfhound"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
			};

		};
		class ARMST_mutantsModulewerewolf: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_armst_werewolf";
			icon = "armst_mutants\Images\icon_chimera1.paa";
			unitTypes[] = {"armst_werewolf"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
			};

		};
		class ARMST_mutantsModulewolfAlfa: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_armst_wolfAlfa";
			icon = "armst_mutants\Images\icon_chimera1.paa";
			unitTypes[] = {"armst_wolfAlfa"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
			};

		};
		
		class ARMST_mutantsModuleRat: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_Rat";
			icon = "armst_mutants\Images\icon_chimera1.paa";
			unitTypes[] = {"armst_rat","armst_rat2","armst_rat3","armst_rat4"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
			};

		};
		class ARMST_mutantsModuleBear: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "Медведи";
			icon = "armst_mutants\Images\icon_chimera1.paa";
			unitTypes[] = {"armst_medved"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
			};

		};
		class ARMST_mutantsModuleSpiders: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_Spiders";
			icon = "armst_mutants\Images\icon_chimera1.paa";
			unitTypes[] = {"armst_spider"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
			};

		};
		
		class ARMST_mutantsModuleZOMBIES: ARMST_mutantsModuleBase 
		{
			scope = 2;
			displayName =  "$STR_MUTANTS_MODULENAME_ZOMBIES";
			icon = "armst_mutants\Images\icon_zombies1.paa";
			unitTypes[] = {"bandit_new_2_2_ZOMBIE","bandit_new_2_3_ZOMBIE","bandits_private4_ZOMBIE","bandit_new_1_ZOMBIE","bandits_private5_ZOMBIE","bandit_new_2_ZOMBIE","bandit_new_1_3_ZOMBIE","bandit_new_1_2_ZOMBIE","bandits_private3_ZOMBIE","bandits_private6_ZOMBIE","bandits_private7_ZOMBIE","bandits_private2_ZOMBIE","bandits_private_ZOMBIE","BANDITS_l_ZOMBIE","bandit_elite_ZOMBIE","nonfreedom_private_ZOMBIE","nonfreedom_private2_ZOMBIE","freedom_private_ZOMBIE","elite_freedom_ZOMBIE","freedom_private2_ZOMBIE","FREEDOM_l_ZOMBIE","elite_freedom_exp_ZOMBIE","freedom_b_ZOMBIE","freedom_private_exp_ZOMBIE","freedom_private2_exp_ZOMBIE","freedom_private3_ZOMBIE","freedom_private4_ZOMBIE","freedom_new_ZOMBIE","freedom_soldier_ZOMBIE","Voen_private_ZOMBIE","elite_Voen_ZOMBIE","elite_Voen_exp_ZOMBIE","oksop_private_exp_ZOMBIE","Voen_private_exp_ZOMBIE","Voen_private2_ZOMBIE","army_overall_2_ZOMBIE","army_overall_ZOMBIE","Voen_new_ZOMBIE","Voen_soldier_ZOMBIE","oksop_soldier_ZOMBIE","elite_Voen_expstal_ZOMBIE","elite_Voenstal_ZOMBIE","Dolg_private2_exp_ZOMBIE","Dolg_private_exp_ZOMBIE","elite_dolg_exp_ZOMBIE","Dolg_private3_ZOMBIE","Dolg_new_ZOMBIE","Dolg_new_soldier_ZOMBIE","Dolg_b_ZOMBIE","Dolg_private_ZOMBIE","Dolg_private2_ZOMBIE","DOLG_l_ZOMBIE","elite_dolg_ZOMBIE","elite_merc_ZOMBIE","mercenaries_private_ZOMBIE","mercenaries_private_ZOMBIE2","mercenaries_private2_exp_ZOMBIE","mercenaries_private2_ZOMBIE","MERCENARIES_l_ZOMBIE","elite_merc_exp_ZOMBIE","mercenaries_private3_ZOMBIE","mercenaries_private_exp_ZOMBIE","mercenaries_new_ZOMBIE","merc_alone2_ZOMBIE","merc_alone_ZOMBIE","mechanick_private2_ZOMBIE","mechanick_private_ZOMBIE","loner_private7_exp_ZOMBIE","loner_private7_ZOMBIE","hedgehog_private_ZOMBIE","zek_loner_ZOMBIE","elite_kb_exp_ZOMBIE","korpus","korpus2","lastday_private_ZOMBIE","lastday_private_exp_ZOMBIE","voshod_skin_ZOMBIE","reserv_skin_ZOMBIE","monolith_l_ZOMBIE","monolith_private2_ZOMBIE","monolith_private_exp_ZOMBIE","monolith_private2_ZOMBIE","neutral_private_ZOMBIE","afonix_skin_ZOMBIE","neutral_private_exp_ZOMBIE","loner_orden_ZOMBIE","elite_order_exp_ZOMBIE","science_guard_ZOMBIE","ARMY_pilot_ZOMBIE","loner_prometeus_ZOMBIE","merc_ralph_ZOMBIE","clearsky_private_exp_ZOMBIE","clearsky_private_ZOMBIE","clearsky_private_exp2_ZOMBIE","clearsky_private2_ZOMBIE","elite_clearsky_exp_ZOMBIE","elite_clearsky_ZOMBIE","clearsky_new_ZOMBIE","hazmat_2_ZOMBIE","Armst_hazmat_ZOMBIE","Armst_doctor2_ZOMBIE","Armst_doctor3_ZOMBIE","Armst_doctor_ZOMBIE","hazmat_3_ZOMBIE","loner_private13_exp_ZOMBIE","loner_private13_ZOMBIE","Armst_novice15_ZOMBIE","Armst_novice12_ZOMBIE","Armst_novice4_ZOMBIE","Armst_novice_ZOMBIE","Armst_novice2_ZOMBIE","Armst_novice5_ZOMBIE","Armst_novice6_ZOMBIE","Armst_novice1_ZOMBIE","Armst_novice7_ZOMBIE","Armst_novice8_ZOMBIE","Armst_novice10_ZOMBIE","Armst_novice9_ZOMBIE","Armst_novice3_ZOMBIE","Armst_novice14_ZOMBIE","Armst_novice11_ZOMBIE","Armst_novice13_ZOMBIE","loner_b_ZOMBIE","loner_l_ZOMBIE","elite_loner1_ZOMBIE","elite_loner2_ZOMBIE","loner_private1_ZOMBIE","loner_private2_ZOMBIE","loner_private3_ZOMBIE","loner_private4_ZOMBIE","loner_private5_ZOMBIE","loner_private26_ZOMBIE","loner_private25_ZOMBIE","loner_private15_ZOMBIE","loner_private19_ZOMBIE","loner_private16_ZOMBIE","loner_private17_ZOMBIE","loner_private14_ZOMBIE","loner_private20_ZOMBIE","loner_private12_exp_ZOMBIE","loner_private22_ZOMBIE","loner_private9_exp_ZOMBIE","loner_private8_exp_ZOMBIE","loner_private18_ZOMBIE","loner_private21_ZOMBIE","loner_private12_ZOMBIE","loner_private6_exp_ZOMBIE","loner_private11_ZOMBIE","loner_private23_ZOMBIE","loner_private24_ZOMBIE","loner_private4_exp_ZOMBIE","loner_private3_exp_ZOMBIE","loner_private10_ZOMBIE","loner_private9_ZOMBIE","loner_private14_exp_ZOMBIE","loner_private10_exp_ZOMBIE","loner_private11_exp_ZOMBIE","loner_private5_exp_ZOMBIE","loner_private2_exp_ZOMBIE","loner_private6_ZOMBIE","loner_private1_exp_ZOMBIE","loner_private8_ZOMBIE","newg_private_ZOMBIE","loner_b2_ZOMBIE","elite_loner9_ZOMBIE","elite_loner12_ZOMBIE","elite_loner7_ZOMBIE","elite_loner11_ZOMBIE","elite_loner10_ZOMBIE","elite_loner8_ZOMBIE","elite_loner14_ZOMBIE","elite_loner15_ZOMBIE","elite_loner6_ZOMBIE","elite_loner5_ZOMBIE","elite_loner4_ZOMBIE","elite_loner16_ZOMBIE","elite_loner3_ZOMBIE","elite_loner13_ZOMBIE","elite_loner6_exp_ZOMBIE","elite_loner5_exp_ZOMBIE","elite_loner4_exp_ZOMBIE","elite_loner3_exp_ZOMBIE","elite_loner2_exp_ZOMBIE","elite_loner1_exp_ZOMBIE","stalker_overall_2_ZOMBIE","stalker_overall_4_ZOMBIE","stalker_overall_3_ZOMBIE","stalker_overall_1_ZOMBIE","loner_new5_ZOMBIE","loner_new1_ZOMBIE","loner_new4_ZOMBIE","loner_new3_ZOMBIE","loner_new2_ZOMBIE","loner_soldier6_ZOMBIE","loner_soldier4_ZOMBIE","loner_soldier9_ZOMBIE","loner_soldier1_ZOMBIE","loner_soldier3_ZOMBIE","loner_soldier2_ZOMBIE","loner_soldier8_ZOMBIE","loner_soldier7_ZOMBIE","loner_soldier5_ZOMBIE","loner_l_2_ZOMBIE","loner_l_3_ZOMBIE"};
			
			class Attributes: Attributes
			{
				/*extend*/  class ModuleDescription: ModuleDescription {};
				/*extend*/ class CountUnits: CountUnits {};
				/*extend*/ class CountUnitsLimit: CountUnitsLimit {};
				/*extend*/ class CountUnitsType: CountUnitsType {};
				/*extend*/ class CountUnitsRandomize: CountUnitsRandomize {};
				/*extend*/ class UnitsUpdatePercentage: UnitsUpdatePercentage {};
                /*extend*/ class UpdateDelay: UpdateDelay {};
				/*extend*/ class SpawnAreaPercentage: SpawnAreaPercentage {};
				/*extend*/ class ClearDelay: ClearDelay {};
				/*extend*/ class Housespawn: Housespawn {};
				/*extend*/ class TimeDay: TimeDay {};
				/*extend*/ class Chances: Chances {};
				/*extend*/ class Behaviour: Behaviour {};
				/*extend*/ class Dammage: Dammage {};
				/*extend*/ class Agressive: Agressive {};
				/*extend*/ class Curious: Curious {};
				/*extend*/ class Secrecy: Secrecy {};
				/*extend*/ class Cowardice: Cowardice {};
				/*extend*/ class Societal: Societal {};
				/*extend*/ class Courage: Courage {};
				/*extend*/ class Tactiful: Tactiful {};
                /*extend*/ class HabitatRadius: HabitatRadius {};
				/*extend*/ class DetectionRadius: DetectionRadius {};
				/*extend*/ class CoverRadius: CoverRadius {};
				/*extend*/ class EscapeRadius: EscapeRadius {};
				/*extend*/ class DebugType: DebugType {};
			};

		};
		
	};