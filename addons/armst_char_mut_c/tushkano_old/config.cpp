class DefaultEventhandlers;
class CfgPatches
{
	class armst_tushkano
	{
		units[]=
		{
			"armst_tushkano",
			"armst_tushkano2",
			"tushkano_old_test"
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
class CfgSounds
{
	class tush_attack_2
	{
		name="tush_attack_2";
		sound[]=
		{
			"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_attack_2.ogg",
			1,
			1
		};
		titles[]={};
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
	class tushkano_old_test: ARMST_MUTANT_HUM
	{
		uniformClass="tushkano_old";
		displayName="tushkano_old";
		moves="CfgMovestushkano";
		faceType="Default";
		model="\armst\armst_char\char_mut\tushkano_old\tushkano.p3d";
		armor=2;
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
		linkedItems[]={};
		respawnLinkedItems[]={};
		class EventHandlers: EventHandlers
		{
			init="[_this select 0, localize 'str_cutmutants','','','_this distance _target < 2 && !(alive _target) && isNil {_target getVariable ""RemainsEmpty""}','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1'},{[_target] spawn Armst_fnc_tushkano_remains},{},[],15,nil,false,false] call BIS_fnc_holdActionAdd;";
		};
		class Character
		{
			radius=200;
			detectionRadius=300;
			chaseDistance=301;
			coverRadius=100;
			escapeRadius=200;
			damage=0.2;
			damageHitPoints[]=
			{
				
				{
					"HitLeftLeg",
					1
				},
				
				{
					"HitRightLeg",
					1
				}
			};
			armor=1;
			attackDistances[]={1,2};
			aggressive=0.69999999;
			secrecy=0.1;
			curious=0.89999998;
			cowardice=0.69999999;
			societal=1;
			tactful=0;
			courage=0;
			allowWalk=0;
			friendly[]=
			{
				"snork_old_test",
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
					"flesh_idle"
				};
				attack[]=
				{
					"tush_attack_2"
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
					"tushkano_attack1",
					"tushkano_attack2",
					"tushkano_attack3"
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
					"tushkano_angry"
				};
				eat[]=
				{
					"tushkano_angry"
				};
				idle[]=
				{
					"tushkano_StopV1",
					"tushkano_StopV2"
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
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\tushkano_old\tush_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
		};
	};
	class armst_tushkano: tushkano_old_test
	{
		displayName="$STR_STST_mutant_tushkano_name";
		uniformClass="";
		model="\armst\armst_char\char_mut\tushkano_old\tushkano.p3d";
		uniformAccessories[]={};
		nakedUniform="tushkano_old";
		linkedItems[]={};
		nightVision=1;
		scope=2;
	};
	class armst_tushkano2: tushkano_old_test
	{
		displayName="$STR_STST_mutant_tushkano_name";
		uniformClass="";
		uniformAccessories[]={};
		linkedItems[]={};
		nakedUniform="tushkano_old2";
		nightVision=1;
		scope=2;
	};
};
