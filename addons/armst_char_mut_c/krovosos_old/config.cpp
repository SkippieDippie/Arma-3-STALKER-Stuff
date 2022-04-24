class DefaultEventhandlers;
class CfgPatches
{
	class armst_krovosos
	{
		units[]=
		{
			"armst_krovosos",
			"armst_krovosos2",
			"armst_krovosos3",
			"armst_krovosos4"
		};
		weapons[]=
		{
			"krovosos_old",
			"krovosos_old2",
			"krovosos_old3",
			"krovosos_old4"
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
	class krovosos_old_test: ARMST_MUTANT_HUM
	{
		uniformClass="";
		displayName="$STR_STST_bloodsucker_name";
		moves="CfgMoveskrovosos2";
		faceType="Default";
		model="\armst\armst_char\char_mut\krovosos_old\krovosos.p3d";
		armor=50;
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
			"armst\armst_char\char_mut\krovosos_old\krovosos.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"armst\armst_char\char_mut\krovosos_old\krovosos.rvmat"
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
			escapeRadius=300;
			damage=0.41;
			damageHitPoints[]=
			{
				
				{
					"HitHead",
					0.80000001
				},
				
				{
					"HitBody",
					0.80000001
				}
			};
			armor=1;
			attackDistances[]={2,3};
			allowWalk=1;
			aggressive=1;
			secrecy=1;
			curious=1;
			cowardice=0.1;
			societal=0.40000001;
			tactful=1;
			courage=3;
			friendly[]=
			{
				"snork_old_test",
				"tushkano_old_test",
				"controler_old_test",
				"controller_test",
				"poltergeist_old_test",
				"burer_test",
				"izlom_old_test",
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
			};
		};
		fsmFormation="armst_mutants\Logics\Formation.fsm";
		fsmDanger="armst_mutants\Logics\Danger.fsm";
		fsmInspect="armst_mutants\Logics\Inspect.fsm";
		fsmMove="armst_mutants\Logics\Move.fsm";
		fsmDead="armst_mutants\Logics\Dead.fsm";
		fsmAttack="armst_mutants\Logics\Attack\Bloodsucker.fsm";
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
	class armst_krovosos: krovosos_old_test
	{
		displayName="$STR_STST_bloodsucker_name";
		uniformClass="";
		model="\armst\armst_char\char_mut\krovosos_old\krovosos.p3d";
		uniformAccessories[]={};
		nakedUniform="krovosos_old";
		linkedItems[]={};
		nightVision=1;
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\krovosos_old\krovosos1.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"armst\armst_char\char_mut\krovosos_old\krovosos.rvmat"
		};
	};
	class armst_krovosos2: krovosos_old_test
	{
		displayName="$STR_STST_bloodsucker_name";
		uniformClass="";
		uniformAccessories[]={};
		linkedItems[]={};
		nakedUniform="krovosos_old2";
		nightVision=1;
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\krovosos_old\krovosos2.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"armst\armst_char\char_mut\krovosos_old\krovosos.rvmat"
		};
	};
	class armst_krovosos3: krovosos_old_test
	{
		displayName="$STR_STST_bloodsucker_name";
		uniformClass="";
		uniformAccessories[]={};
		linkedItems[]={};
		nakedUniform="krovosos_old3";
		nightVision=1;
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\krovosos_old\krovosos3.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"armst\armst_char\char_mut\krovosos_old\krovosos.rvmat"
		};
	};
	class armst_krovosos4: krovosos_old_test
	{
		displayName="$STR_STST_bloodsucker_name";
		uniformClass="";
		uniformAccessories[]={};
		linkedItems[]={};
		nakedUniform="krovosos_old4";
		nightVision=1;
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\krovosos_old\krovosos4.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"armst\armst_char\char_mut\krovosos_old\krovosos.rvmat"
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
	class krovosos_old: Uniform_Base
	{
		displayname="$STR_STST_bloodsucker_name";
		model="armst\armst_char\char_mut\krovosos_old\krovosos.p3d";
		scope=1;
		picture="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\krovosos_old\krovosos.paa"
		};
		class ItemInfo: UniformItem
		{
			containerclass="Supply0";
			mass=1;
			uniformclass="krovosos_old";
			uniformmodel="-";
		};
	};
	class krovosos_old2: Uniform_Base
	{
		displayname="$STR_STST_bloodsucker_name";
		model="armst\armst_char\char_mut\krovosos_old\krovosos.p3d";
		scope=1;
		picture="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\krovosos_old\krovosos2.paa"
		};
		class ItemInfo: UniformItem
		{
			containerclass="Supply0";
			mass=1;
			uniformclass="krovosos_old2";
			uniformmodel="-";
		};
	};
	class krovosos_old3: Uniform_Base
	{
		displayname="$STR_STST_bloodsucker_name";
		model="armst\armst_char\char_mut\krovosos_old\krovosos.p3d";
		scope=1;
		picture="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\krovosos_old\krovosos3.paa"
		};
		class ItemInfo: UniformItem
		{
			containerclass="Supply0";
			mass=1;
			uniformclass="krovosos_old3";
			uniformmodel="-";
		};
	};
	class krovosos_old4: Uniform_Base
	{
		displayname="$STR_STST_bloodsucker_name";
		model="armst\armst_char\char_mut\krovosos_old\krovosos.p3d";
		scope=1;
		picture="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\krovosos_old\krovosos4.paa"
		};
		class ItemInfo: UniformItem
		{
			containerclass="Supply0";
			mass=1;
			uniformclass="krovosos_old4";
			uniformmodel="-";
		};
	};
};
