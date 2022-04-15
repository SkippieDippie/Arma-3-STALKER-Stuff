class DefaultEventhandlers;
class CfgPatches
{
	class armst_pseudodog
	{
		units[]=
		{
			"armst_pseudodog",
			"armst_pseudodog2",
			"pseudodog_old_test",
			"armst_pseudodog_snow"
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
	class pseudodog_old_test: ARMST_MUTANT_HUM
	{
		uniformClass="pseudodog_old";
		displayName="pseudodog_old";
		moves="CfgMovespseudodog";
		faceType="Default";
		model="\armst\armst_char\char_mut\pseudodog_old\pseudodog.p3d";
		armor=6;
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
			"armst\armst_char\char_mut\pseudodog_old\pseudodog.paa"
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
			init="[_this select 0, localize 'str_cutmutants','','','_this distance _target < 2 && !(alive _target) && isNil {_target getVariable ""RemainsEmpty""}','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1'},{[_target] spawn Armst_fnc_Pseudodog_remains},{},[],15,nil,false,false] call BIS_fnc_holdActionAdd;";
		};
		class Character
		{
			radius=200;
			detectionRadius=300;
			chaseDistance=301;
			coverRadius=100;
			escapeRadius=200;
			damage=0.40000001;
			damageHitPoints[]=
			{
				
				{
					"HitLeftLeg",
					1
				},
				
				{
					"HitRightLeg",
					1
				},
				
				{
					"HitLeftArm",
					0.40000001
				},
				
				{
					"HitRightArm",
					0.40000001
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
			secrecy=0.34;
			curious=0.5;
			cowardice=0;
			societal=0.60000002;
			tactful=1;
			courage=0;
			friendly[]=
			{
				"controler_old_test",
				"controller_test",
				"poltergeist_old_test",
				"burer_test",
				"izlom_old_test",
				"krovosos_old_test",
				"blinddog_old_test",
				"snork_old_test",
				"tushkano_old_test",
				"ARMST_ZOMBIE"
			};
			class Sounds
			{
				idle[]=
				{
					"psevdodog_idle"
				};
				attack[]=
				{
					"psevdodog_agressive"
				};
				hit[]=
				{
					"dog_pain_1",
					"dog_pain_2",
					"dog_pain_3",
					"dog_pain_4",
					"dog_pain_5",
					"dog_pain_6",
					"dog_pain_7"
				};
				other[]={};
			};
			class Animations
			{
				attack_1[]=
				{
					"pseudodog_attack1",
					"pseudodog_attack2",
					"pseudodog_attack3"
				};
				attack_2[]=
				{
					""
				};
				attack_3[]=
				{
					""
				};
				agry[]=
				{
					"pseudodog_angry"
				};
				eat[]=
				{
					"pseudodog_eat"
				};
				idle[]=
				{
					"pseudodog_Stop",
					"pseudodog_StopV2",
					"pseudodog_StopV3"
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
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\pseudodog_old\pdog_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
		};
	};
	class armst_pseudodog: pseudodog_old_test
	{
		displayName="$STR_STST_mutant_pseudodog_name";
		uniformClass="";
		model="\armst\armst_char\char_mut\pseudodog_old\pseudodog.p3d";
		uniformAccessories[]={};
		nakedUniform="pseudodog_old";
		linkedItems[]={};
		nightVision=1;
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\pseudodog_old\pseudodog.paa"
		};
	};
	class armst_pseudodog2: pseudodog_old_test
	{
		displayName="$STR_STST_mutant_pseudodog_name";
		uniformClass="";
		uniformAccessories[]={};
		linkedItems[]={};
		nakedUniform="pseudodog_old2";
		nightVision=1;
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\pseudodog_old\pseudodog2.paa"
		};
	};
	class armst_pseudodog_snow: pseudodog_old_test
	{
		displayName="PSEUDODOG TP";
		uniformClass="";
		uniformAccessories[]={};
		linkedItems[]={};
		nakedUniform="armst_pseudodog_snow";
		nightVision=1;
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\pseudodog_old\pseudodog_snow.paa"
		};
	};
};
