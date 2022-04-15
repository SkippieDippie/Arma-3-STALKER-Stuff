class DefaultEventhandlers;
class CfgPatches
{
	class armst_cat
	{
		units[]=
		{
			"armst_cat",
			"armst_cat2"
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
	class cat_old_test: ARMST_MUTANT_HUM
	{
		uniformClass="cat_old_testu";
		displayName="cat_old_test";
		moves="CfgMovescat";
		faceType="Default";
		model="\armst\armst_char\char_mut\cat_old\cat.p3d";
		armor=2;
		side=1;
		scope=1;
		faction="armst_mut_new";
		vehicleClass="armst_mutantss";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1;
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		attendant=1;
		weapons[]={};
		magazines[]={};
		respawnWeapons[]={};
		respawnMagazines[]={};
		linkedItems[]={};
		respawnLinkedItems[]={};
		class EventHandlers: EventHandlers
		{
			init="[_this select 0, localize 'str_cutmutants','','','_this distance _target < 2 && !(alive _target) && isNil {_target getVariable ""RemainsEmpty""}','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1'},{[_target] spawn Armst_fnc_cat_remains},{},[],15,nil,false,false] call BIS_fnc_holdActionAdd;";
		};
		class Character
		{
			radius=200;
			detectionRadius=300;
			chaseDistance=301;
			coverRadius=100;
			escapeRadius=200;
			damage=0.22;
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
					"HitLeftArm",
					1
				},
				
				{
					"HitRightArm",
					1
				}
			};
			armor=1;
			attackDistances[]={1.3,2};
			allowWalk=1;
			aggressive=1;
			secrecy=0.5;
			curious=0.69999999;
			cowardice=0;
			societal=0.60000002;
			tactful=1;
			courage=0;
			friendly[]=
			{
				"controler_old_test",
				"controller_test",
				"izlom_old_test"
			};
			class Sounds
			{
				idle[]=
				{
					"cat_idle",
					"cat_idle2",
					"cat_idle3"
				};
				attack[]=
				{
					"cat_agressive",
					"cat_agressive2"
				};
				hit[]=
				{
					"cat_pain",
					"cat_pain2"
				};
				other[]={};
			};
			class Animations
			{
				attack_1[]=
				{
					"cat_attack2",
					"cat_attack1"
				};
				attack_2[]=
				{
					"cat_attack2",
					"cat_attack1"
				};
				attack_3[]=
				{
					""
				};
				agry[]=
				{
					"cat_angry"
				};
				eat[]=
				{
					""
				};
				idle[]=
				{
					"cat_StopV1"
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
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
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
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_3.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\cat_old\cat_idle_4.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
		};
	};
	class armst_cat: cat_old_test
	{
		displayName="$STR_STST_mutant_cat_name";
		uniformClass="";
		model="\armst\armst_char\char_mut\cat_old\cat.p3d";
		uniformAccessories[]={};
		nakedUniform="cat_old_testu";
		linkedItems[]={};
		nightVision=1;
		scope=2;
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class armst_cat2: cat_old_test
	{
		displayName="$STR_STST_mutant_cat_name";
		uniformClass="";
		uniformAccessories[]={};
		linkedItems[]={};
		nakedUniform="cat_old_testu";
		nightVision=1;
		scope=2;
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
};
