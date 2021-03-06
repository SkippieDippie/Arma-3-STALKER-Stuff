class CfgPatches
{
	class armst_char_burer
	{
		units[]=
		{
			"burer"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR"
		};
	};
};
class EventHandlers;
class CfgVehicles
{
	class B_Soldier_base_F;
	class ARMST_MUTANT_HUM: B_Soldier_base_F
	{
	};
	class burer_test: ARMST_MUTANT_HUM
	{
		uniformClass="burerun";
		displayName="burer";
		faceType="Default";
		model="\armst\armst_char\char_mut\burer_old\burer.p3d";
		armor=8;
		side=1;
		scope=1;
		faction="armst_mut_new";
		vehicleClass="armst_mutantss";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1;
		attendant=1;
		weapons[]={};
		magazines[]={};
		respawnWeapons[]={};
		respawnMagazines[]={};
		respawnLinkedItems[]={};
		linkedItems[]={};
		class Eventhandlers
		{
			init="[_this select 0, localize 'str_cutmutants','','','_this distance _target < 2 && !(alive _target) && isNil {_target getVariable ""RemainsEmpty""}','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1'},{[_target] spawn Armst_fnc_burer_remains},{},[],15,nil,false,false] call BIS_fnc_holdActionAdd;(_this select 0) execFSM '\armst_mutants\Logics\logicBurer.fsm'";
		};
		class Character
		{
			radius=200;
			detectionRadius=200;
			chaseDistance=201;
			coverRadius=100;
			escapeRadius=200;
			damage=0.5;
			damageHitPoints[]=
			{
				
				{
					"HitHead",
					0.5
				}
			};
			armor=15;
			attackDistances[]={1.5,50};
			allowWalk=1;
			aggressive=1;
			secrecy=0;
			curious=1;
			cowardice=0;
			societal=0;
			tactful=0;
			courage=5;
			friendly[]=
			{
				"blinddog_old_test",
				"pseudodog_old_test",
				"boar_old_test",
				"cat_old_test",
				"izlom_old_test",
				"PLOT_old_test",
				"snork_old_test",
				"tushkano_old_test",
				"poltergeist_old_test",
				"controler_old_test",
				"controller_test",
				"krovosos_old_test",
				"ARMST_ZOMBIE"
			};
			class Sounds
			{
				idle[]=
				{
					"burer_idle_0",
					"burer_idle_1",
					"burer_idle_2"
				};
				attack[]=
				{
					"controller_attack2"
				};
				hit[]={};
				other[]={};
			};
			class Animations
			{
				attack_1[]=
				{
					"Act_Alien_Gesture_Rifle"
				};
				attack_2[]=
				{
					"Act_Alien_Gesture_Rifle"
				};
				attack_3[]=
				{
					"Act_Alien_Gesture"
				};
				agry[]=
				{
					""
				};
				eat[]=
				{
					""
				};
				idle[]=
				{
					"HubStandingUB_idle1",
					"HubStandingUB_idle2",
					"HubStandingUB_idle3"
				};
			};
		};
		fsmFormation="armst_mutants\Logics\Formation.fsm";
		fsmDanger="armst_mutants\Logics\Danger.fsm";
		fsmInspect="armst_mutants\Logics\Inspect.fsm";
		fsmMove="armst_mutants\Logics\Move.fsm";
		fsmDead="armst_mutants\Logics\Dead.fsm";
	};
	class burer: burer_test
	{
		displayName="$STR_armst_burer";
		uniformClass="";
		linkedItems[]={};
		model="\armst\armst_char\char_mut\burer_old\burer.p3d";
		uniformAccessories[]={};
		nakedUniform="burerun";
		armor=8;
		scope=2;
	};
};
