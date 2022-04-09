class DefaultEventhandlers;
class CfgPatches
{
	class armst_rat
	{
		units[]=
		{
			"armst_rat",
			"armst_rat2",
			"armst_rat3",
			"armst_rat4"
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
	class rat_old_test: ARMST_MUTANT_HUM
	{
		uniformClass="rat_old_testu";
		displayName="rat_old_test";
		moves="CfgMovesrats";
		faceType="Default";
		model="\armst\armst_char\char_mut\rat_old\rat.p3d";
		armor=0.60000002;
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
			"armst\armst_char\char_mut\rat_old\1.paa"
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
			init="[_this select 0, localize 'str_cutmutants','','','_this distance _target < 2 && !(alive _target) && isNil {_target getVariable ""RemainsEmpty""}','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1'},{[_target] spawn Armst_tushkano_remains},{},[],15,nil,false,false] call BIS_fnc_holdActionAdd;";
		};
		class Character
		{
			radius=50;
			detectionRadius=300;
			chaseDistance=301;
			coverRadius=100;
			escapeRadius=300;
			damage=0.1;
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
					"HitBody",
					1
				},
				
				{
					"HitRightArm",
					1
				}
			};
			armor=1;
			attackDistances[]={1};
			allowWalk=1;
			aggressive=0.69999999;
			secrecy=0;
			curious=0.40000001;
			cowardice=0;
			societal=1;
			tactful=0;
			courage=0;
			friendly[]={};
			class Sounds
			{
				idle[]=
				{
					"flesh_idle"
				};
				attack[]=
				{
					"flesh_agressive"
				};
				hit[]=
				{
					"flesh_pain_1",
					"flesh_pain_2",
					"flesh_pain_3",
					"flesh_pain_4",
					"flesh_pain_5",
					"flesh_pain_6",
					"flesh_pain_7",
					"flesh_pain_8",
					"flesh_pain_9"
				};
				other[]={};
			};
			class Animations
			{
				attack_1[]=
				{
					"rat_attack"
				};
				attack_2[]=
				{
					"rat_attack"
				};
				attack_3[]=
				{
					""
				};
				agry[]=
				{
					"rat_attack"
				};
				eat[]=
				{
					"rat_attack"
				};
				idle[]=
				{
					""
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
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\rat_old\idle_2.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
		};
	};
	class armst_rat: rat_old_test
	{
		displayName="$STR_armst_Rat";
		uniformClass="";
		model="\armst\armst_char\char_mut\rat_old\rat.p3d";
		uniformAccessories[]={};
		nakedUniform="rat_old_testu";
		linkedItems[]={};
		nightVision=1;
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\rat_old\1.paa"
		};
	};
	class armst_rat2: rat_old_test
	{
		displayName="$STR_armst_Rat";
		uniformClass="";
		model="\armst\armst_char\char_mut\rat_old\rat.p3d";
		uniformAccessories[]={};
		nakedUniform="rat_old_testu";
		linkedItems[]={};
		nightVision=1;
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\rat_old\2.paa"
		};
	};
	class armst_rat3: rat_old_test
	{
		displayName="$STR_armst_Rat";
		uniformClass="";
		model="\armst\armst_char\char_mut\rat_old\rat.p3d";
		uniformAccessories[]={};
		nakedUniform="rat_old_testu";
		linkedItems[]={};
		nightVision=1;
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\rat_old\3.paa"
		};
	};
	class armst_rat4: rat_old_test
	{
		displayName="$STR_armst_Rat";
		uniformClass="";
		model="\armst\armst_char\char_mut\rat_old\rat.p3d";
		uniformAccessories[]={};
		nakedUniform="rat_old_testu";
		linkedItems[]={};
		nightVision=1;
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\rat_old\4.paa"
		};
	};
};
