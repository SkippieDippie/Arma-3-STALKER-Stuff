class DefaultEventhandlers;
class CfgPatches
{
	class armst_krovosos2
	{
		units[]=
		{
			"armst_krovosos_strong",
			"armst_krovosos_strong2"
		};
		weapons[]=
		{
			"armst_krovosos_strong",
			"armst_krovosos_strong2"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F",
			"A3_Sounds_F",
			"A3_Data_F",
			"A3_Sounds_F",
			"A3_Anims_F"
		};
	};
};
class EventHandlers;
class CfgVehicles
{
	class B_Soldier_base_F;
	class Land;
	class Man: Land
	{
		class Eventhandlers;
	};
	class ARMST_MUTANT_HUM: B_Soldier_base_F
	{
		identityTypes[]=
		{
			"empty_Face"
		};
	};
	class krovosos_strong_old_test: ARMST_MUTANT_HUM
	{
		uniformClass="$STR_STST_bloodsucker_stronglove_name";
		displayName="bloodsuscker";
		moves="CfgMoveskrovosos2";
		faceType="Default";
		model="\armst\armst_char\char_mut\bloodsuscker\krovosos.p3d";
		armor=100;
		side=1;
		scope=1;
		faction="armst_mut_new";
		vehicleClass="armst_mutantss";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\bloodsuscker\Blodsucker.paa"
		};
		attendant=1;
		weapons[]={};
		magazines[]={};
		respawnWeapons[]={};
		respawnMagazines[]={};
		linkedItems[]={};
		respawnLinkedItems[]={};
		class EventHandlers: EventHandlers
		{
			init="[_this select 0, localize 'str_cutmutants','','','_this distance _target < 2 && !(alive _target) && isNil {_target getVariable ""RemainsEmpty""}','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1'},{[_target] spawn Armst_fnc_krovovos_remains},{},[],15,nil,false,false] call BIS_fnc_holdActionAdd; [_this select 0] spawn ARMST_fnc_bloodsuckersbreath;";
		};
		class Character
		{
			radius=300;
			detectionRadius=300;
			chaseDistance=301;
			coverRadius=100;
			escapeRadius=200;
			damage=0.80000001;
			damageHitPoints[]=
			{
				
				{
					"HitHead",
					0.80000001
				},
				
				{
					"HitBody",
					1
				}
			};
			armor=15;
			attackDistances[]={2,3};
			allowWalk=1;
			aggressive=1;
			secrecy=1;
			curious=1;
			cowardice=0.1;
			societal=0.40000001;
			tactful=1;
			courage=5;
			friendly[]=
			{
				"snork_old_test",
				"tushkano_old_test",
				"pseudodog_old_test",
				"psevdogigant_old_test",
				"poltergeist_old_test",
				"controler_old_test",
				"controller_test",
				"burer_test",
				"izlom_old_test",
				"krovosos_old_test",
				"ARMST_ZOMBIE"
			};
			class Sounds
			{
				idle[]=
				{
					"bloodsucker_idle_1",
					"bloodsucker_idle_2",
					"bloodsucker_idle_3",
					"bloodsucker_scream1",
					"bloodsucker_scream2"
				};
				attack[]=
				{
					"bloodsucker_attack1",
					"bloodsucker_attack2",
					"bloodsucker_attack3"
				};
				hit[]=
				{
					"bloodsucker_hit",
					"bloodsucker_hit1",
					"bloodsucker_hit2",
					"bloodsucker_hit3"
				};
				other[]=
				{
					
					{
						"bloodsucker_idle_0"
					}
				};
			};
			class Animations
			{
				attack_1[]=
				{
					"krovosos_attack1",
					"krovosos_attack2"
				};
				attack_2[]=
				{
					""
				};
				attack_3[]=
				{
					"krovosos_hvat",
					"krovosos_hvat_idle"
				};
				agry[]=
				{
					"krovosos_angry"
				};
				eat[]=
				{
					"krovosos_eat"
				};
				idle[]=
				{
					"krovosos_StopV1",
					"krovosos_StopV2"
				};
			};
		};
		fsmFormation="armst_mutants\Logics\Formation.fsm";
		fsmDanger="armst_mutants\Logics\Danger.fsm";
		fsmInspect="armst_mutants\Logics\Inspect.fsm";
		fsmMove="armst_mutants\Logics\Move.fsm";
		fsmDead="armst_mutants\Logics\Dead.fsm";
		class SoundEnvironExt
		{
			generic[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\bloodsuscker\sucker_breath_0.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
			normal[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\bloodsuscker\sucker_breath_0.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
			stony[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\bloodsuscker\sucker_breath_0.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
			rock[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\bloodsuscker\sucker_breath_0.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
			tiling[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\bloodsuscker\sucker_breath_0.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
			drygrass[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\bloodsuscker\sucker_breath_0.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
			grass[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\bloodsuscker\sucker_breath_0.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
			wood[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\bloodsuscker\sucker_breath_0.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
			concrete[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\bloodsuscker\sucker_breath_0.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
			dirt[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\bloodsuscker\sucker_breath_0.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
			wavymetal[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\bloodsuscker\sucker_breath_0.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
			water[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\bloodsuscker\sucker_breath_0.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
			int_concrete[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\bloodsuscker\sucker_breath_0.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
			int_wood[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\bloodsuscker\sucker_breath_0.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
			int_metal[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\bloodsuscker\sucker_breath_0.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
			metal[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\bloodsuscker\sucker_breath_0.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
			debris[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\bloodsuscker\sucker_breath_0.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
			gravel[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\bloodsuscker\sucker_breath_0.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
		};
	};
	class armst_krovosos_strong: krovosos_strong_old_test
	{
		displayName="$STR_STST_bloodsucker_stronglove_name";
		uniformClass="";
		model="\armst\armst_char\char_mut\bloodsuscker\krovosos.p3d";
		uniformAccessories[]={};
		nakedUniform="krovosos_strong_old";
		linkedItems[]={};
		nightVision=1;
		scope=2;
		scopeCurator=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\bloodsuscker\Blodsucker.paa"
		};
	};
	class armst_krovosos_strong2: krovosos_strong_old_test
	{
		displayName="Стронглав";
		uniformClass="";
		uniformAccessories[]={};
		linkedItems[]={};
		nakedUniform="krovosos_strong_old2";
		nightVision=1;
		scope=2;
		scopeCurator=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\bloodsuscker\Blodsucker_old.paa"
		};
	};
};
class cfgWeapons
{
	class Default;
	class PistolCore;
	class Pistol;
	class Rifle;
	class RifleCore;
	class MGun;
	class MGunCore;
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class Uniform_Base;
	class UniformItem;
	class Vest_Base;
	class VestItem;
	class B_Soldier_base_F;
	class U_B_CombatUniform_mcam;
	class armst_krovosos_strong: Uniform_Base
	{
		displayname="armst_krovosos_strong";
		model="\armst\armst_char\char_mut\bloodsuscker\krovosos.p3d";
		scope=1;
		picture="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\bloodsuscker\Blodsucker.paa"
		};
		class ItemInfo: UniformItem
		{
			containerclass="Supply0";
			mass=1;
			uniformclass="armst_krovosos_strong";
			uniformmodel="-";
		};
	};
	class armst_krovosos_strong2: Uniform_Base
	{
		displayname="armst_krovosos_strong2";
		model="\armst\armst_char\char_mut\bloodsuscker\krovosos.p3d";
		scope=1;
		picture="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\bloodsuscker\Blodsucker_old.paa"
		};
		class ItemInfo: UniformItem
		{
			containerclass="Supply0";
			mass=1;
			uniformclass="armst_krovosos_strong2";
			uniformmodel="-";
		};
	};
};
