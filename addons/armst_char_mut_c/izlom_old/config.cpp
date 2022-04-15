class DefaultEventhandlers;
class CfgPatches
{
	class armst_izlom
	{
		units[]=
		{
			"armst_izlom",
			"izlom_old_test"
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
	class izlom_old_test: ARMST_MUTANT_HUM
	{
		uniformClass="izlom_old";
		displayName="izlom_old";
		moves="CfgMovesizlom";
		faceType="Default";
		model="\armst\armst_char\char_mut\izlom_old\izlom.p3d";
		armor=19;
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
			"armst\armst_char\char_mut\izlom_old\izlom.paa"
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
			init="[_this select 0, localize 'str_cutmutants','','','_this distance _target < 2 && !(alive _target) && isNil {_target getVariable ""RemainsEmpty""}','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1'},{[_target] spawn Armst_fnc_izlom_remains},{},[],15,nil,false,false] call BIS_fnc_holdActionAdd;";
		};
		class Character
		{
			radius=200;
			detectionRadius=300;
			chaseDistance=301;
			coverRadius=100;
			escapeRadius=200;
			damage=0.30000001;
			damageHitPoints[]=
			{
				
				{
					"HitBody",
					1
				}
			};
			armor=1;
			attackDistances[]={3,5};
			allowWalk=1;
			aggressive=0.30000001;
			secrecy=0.69999999;
			curious=0.69999999;
			cowardice=0;
			societal=0.80000001;
			tactful=1;
			courage=1;
			friendly[]=
			{
				"tushkano_old_test",
				"pseudodog_old_test",
				"psevdogigant_old_test",
				"poltergeist_old_test",
				"controler_old_test",
				"controller_test",
				"burer_test",
				"izlom_old_test",
				"krovosos_old_test",
				"ARMST_ZOMBIE",
				"cat_old_test",
				"snork_old_test"
			};
			class Sounds
			{
				idle[]={};
				attack[]={};
				hit[]={};
				other[]={};
			};
			class Animations
			{
				attack_1[]=
				{
					"izlom_attack1"
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
					"izlom_angry"
				};
				eat[]=
				{
					"izlom_eat"
				};
				idle[]=
				{
					"izlom_StopV1",
					"izlom_StopV2",
					"izlom_StopV3"
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
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_2.ogg",
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
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_0.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_1.ogg",
						2.5011871,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\armst\armst_char\armst_char_mut_c\izlom_old\izlom_idle_2.ogg",
						2.5011871,
						1,
						50
					}
				}
			};
		};
	};
	class armst_izlom: izlom_old_test
	{
		displayName="$STR_STST_mutant_izlom_name";
		uniformClass="";
		model="\armst\armst_char\char_mut\izlom_old\izlom.p3d";
		uniformAccessories[]={};
		nakedUniform="izlom_old";
		linkedItems[]={};
		nightVision=1;
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\izlom_old\izlom.paa"
		};
	};
};
