class DefaultEventhandlers;
class CfgPatches
{
	class armst_giant
	{
		units[]=
		{
			"armst_giant",
			"armst_giant2",
			"psevdogigant_old_test"
		};
		weapons[]={};
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
	class psevdogigant_old_test: ARMST_MUTANT_HUM
	{
		uniformClass="psevdogigant_old";
		displayName="psevdogigant_old";
		moves="CfgMovesgigant";
		faceType="Default";
		model="\armst\armst_char\char_mut\psevdogigant_old\gigant.p3d";
		armor=60;
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
			"armst\armst_char\char_mut\psevdogigant_old\gigant.paa"
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
			init="[_this select 0, localize 'str_cutmutants','','','_this distance _target < 2 && !(alive _target) && isNil {_target getVariable ""RemainsEmpty""}','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1'},{[_target] spawn Armst_fnc_psevdogigant_remains},{},[],15,nil,false,false] call BIS_fnc_holdActionAdd;[_this select 0] spawn armst_fnc_giant_effect;";
		};
		class Character
		{
			radius=100;
			detectionRadius=300;
			chaseDistance=301;
			coverRadius=100;
			escapeRadius=200;
			damage=0.50999999;
			damageHitPoints[]=
			{
				
				{
					"HitBody",
					1
				}
			};
			armor=1;
			attackDistances[]={3,10};
			allowWalk=1;
			aggressive=1;
			secrecy=0;
			curious=1;
			cowardice=0;
			societal=0;
			tactful=0;
			courage=15;
			friendly[]=
			{
				"controler_old_test",
				"controller_test",
				"poltergeist_old_test",
				"burer_test",
				"izlom_old_test",
				"krovosos_old_test",
				"snork_old_test",
				"tushkano_old_test",
				"ARMST_ZOMBIE"
			};
			class Sounds
			{
				idle[]=
				{
					"giant_breath_0",
					"giant_breath_1",
					"giant_breath_2",
					"giant_breath_3"
				};
				attack[]=
				{
					"giant_attack_0",
					"giant_attack_1"
				};
				hit[]={};
				other[]={};
			};
			class Animations
			{
				attack_1[]=
				{
					"gigant_attack2",
					"gigant_attack3",
					"gigant_attack4"
				};
				attack_2[]=
				{
					"gigant_jump_attack3"
				};
				attack_3[]=
				{
					""
				};
				agry[]=
				{
					"gigant_angry"
				};
				eat[]=
				{
					"gigant_attack1"
				};
				idle[]=
				{
					"gigant_Stop",
					"gigant_StopV1",
					"gigant_StopV2"
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
						"\armst\armst_char\armst_char_mut_c\psevdogigant_old\giant_hit.ogg",
						4.5011873,
						1,
						100
					}
				}
			};
			normal[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\psevdogigant_old\giant_hit.ogg",
						4.5011873,
						1,
						100
					}
				}
			};
			stony[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\psevdogigant_old\giant_hit.ogg",
						4.5011873,
						1,
						100
					}
				}
			};
			rock[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\psevdogigant_old\giant_hit.ogg",
						4.5011873,
						1,
						100
					}
				}
			};
			tiling[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\psevdogigant_old\giant_hit.ogg",
						4.5011873,
						1,
						100
					}
				}
			};
			drygrass[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\psevdogigant_old\giant_hit.ogg",
						4.5011873,
						1,
						100
					}
				}
			};
			grass[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\psevdogigant_old\giant_hit.ogg",
						4.5011873,
						1,
						100
					}
				}
			};
			wood[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\psevdogigant_old\giant_hit.ogg",
						4.5011873,
						1,
						100
					}
				}
			};
			concrete[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\psevdogigant_old\giant_hit.ogg",
						4.5011873,
						1,
						100
					}
				}
			};
			dirt[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\psevdogigant_old\giant_hit.ogg",
						4.5011873,
						1,
						100
					}
				}
			};
			wavymetal[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\psevdogigant_old\giant_hit.ogg",
						4.5011873,
						1,
						100
					}
				}
			};
			water[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\psevdogigant_old\giant_hit.ogg",
						4.5011873,
						1,
						100
					}
				}
			};
			int_concrete[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\psevdogigant_old\giant_hit.ogg",
						4.5011873,
						1,
						100
					}
				}
			};
			int_wood[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\psevdogigant_old\giant_hit.ogg",
						4.5011873,
						1,
						100
					}
				}
			};
			int_metal[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\psevdogigant_old\giant_hit.ogg",
						4.5011873,
						1,
						100
					}
				}
			};
			metal[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\psevdogigant_old\giant_hit.ogg",
						4.5011873,
						1,
						100
					}
				}
			};
			debris[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\psevdogigant_old\giant_hit.ogg",
						4.5011873,
						1,
						100
					}
				}
			};
			gravel[]=
			{
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\psevdogigant_old\giant_hit.ogg",
						4.5011873,
						1,
						100
					}
				}
			};
		};
	};
	class armst_giant: psevdogigant_old_test
	{
		displayName="$STR_armst_giant";
		uniformClass="";
		model="\armst\armst_char\char_mut\psevdogigant_old\gigant.p3d";
		uniformAccessories[]={};
		nakedUniform="psevdogigant_old";
		linkedItems[]={};
		nightVision=1;
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\psevdogigant_old\gigant.paa"
		};
	};
	class armst_giant2: psevdogigant_old_test
	{
		displayName="$STR_armst_giant";
		uniformClass="";
		uniformAccessories[]={};
		linkedItems[]={};
		nakedUniform="psevdogigant_old2";
		nightVision=1;
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\psevdogigant_old\gigant2.paa"
		};
	};
};
