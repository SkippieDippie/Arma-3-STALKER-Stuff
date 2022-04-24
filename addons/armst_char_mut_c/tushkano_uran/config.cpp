class DefaultEventhandlers;
class CfgPatches
{
	class armst_tushkano_uran
	{
		units[]=
		{
			"armst_tushkano_uran",
			"tushkano_uran_test"
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
	class tushkano_uran_test: ARMST_MUTANT_HUM
	{
		uniformClass="tushkano_uran";
		displayName="$STR_STST_tushkano_name";
		moves="CfgMovestushkano";
		faceType="Default";
		model="\armst\armst_char\char_mut\tushkano_uran\tushkano.p3d";
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
		linkedItems[]={};
		respawnLinkedItems[]={};
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
			attackDistances[]={1,2};
			aggressive=1;
			secrecy=0.0089999996;
			curious=1;
			cowardice=0;
			societal=1;
			tactful=1;
			courage=1;
			allowWalk=0;
			friendly[]=
			{
				"armst_Zahvat",
				"controller_test",
				"poltergeist_old_test"
			};
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
					"healself",
					
					{
						"\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWrflDnon_medic",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"healselfprone",
					
					{
						"\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWrflDnon_medic",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"healselfpistolkneelin",
					
					{
						"\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medicIn",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"healselfpistolkneel",
					
					{
						"\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medic",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"healselfpistolkneelout",
					
					{
						"\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medicOut",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"healselfpistolpromein",
					
					{
						"\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medicin",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"healselfpistolprone",
					
					{
						"\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medic",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"healselfpistolpromeout",
					
					{
						"\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medicOut",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"adjust_short",
					
					{
						"\A3\sounds_f\characters\stances\adjust_short1",
						0.15848932,
						1,
						20
					}
				},
				
				{
					"adjust_short",
					
					{
						"\A3\sounds_f\characters\stances\adjust_short2",
						0.15848932,
						1,
						20
					}
				},
				
				{
					"adjust_short",
					
					{
						"\A3\sounds_f\characters\stances\adjust_short3",
						0.15848932,
						1,
						20
					}
				},
				
				{
					"adjust_short",
					
					{
						"\A3\sounds_f\characters\stances\adjust_short4",
						0.15848932,
						1,
						20
					}
				},
				
				{
					"adjust_short",
					
					{
						"\A3\sounds_f\characters\stances\adjust_short5",
						0.15848932,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\adjust_short1",
						0.15848932,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\adjust_short1",
						0.15848932,
						1,
						20
					}
				},
				
				{
					"adjust_kneelhigh_to_standlow",
					
					{
						"\A3\sounds_f\characters\stances\adjust_short3",
						0.15848932,
						1,
						20
					}
				},
				
				{
					"adjust_standlow_to_kneelhigh",
					
					{
						"\A3\sounds_f\characters\stances\adjust_short1",
						0.15848932,
						1,
						20
					}
				},
				
				{
					"over_the_obstacle_slow",
					
					{
						"\A3\sounds_f\characters\movements\over_the_obstacle_slow",
						0.31622776,
						1,
						20
					}
				},
				
				{
					"over_the_obstacle_fast",
					
					{
						"\A3\sounds_f\characters\movements\over_the_obstacle_fast",
						0.31622776,
						1,
						20
					}
				},
				
				{
					"grenade_throw",
					
					{
						"\A3\sounds_f\characters\stances\adjust_short1",
						0.3548134,
						1,
						20
					}
				},
				
				{
					"grenade_throw",
					
					{
						"\A3\sounds_f\characters\stances\adjust_short2",
						0.3548134,
						1,
						20
					}
				},
				
				{
					"grenade_throw",
					
					{
						"\A3\sounds_f\characters\stances\adjust_short3",
						0.3548134,
						1,
						20
					}
				},
				
				{
					"grenade_throw",
					
					{
						"\A3\sounds_f\characters\stances\adjust_short4",
						0.3548134,
						1,
						20
					}
				},
				
				{
					"grenade_throw",
					
					{
						"\A3\sounds_f\characters\stances\adjust_short5",
						0.3548134,
						1,
						20
					}
				},
				
				{
					"inventory_in",
					
					{
						"\A3\sounds_f\characters\stances\adjust_short1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"inventory_out",
					
					{
						"\A3\sounds_f\characters\stances\adjust_short2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"handgun_to_rifle",
					
					{
						"\A3\Sounds_F\characters\stances\handgun_to_rifle",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"handgun_to_launcher",
					
					{
						"\A3\sounds_f\characters\stances\handgun_to_launcher",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"launcher_to_rifle",
					
					{
						"\A3\sounds_f\characters\stances\launcher_to_rifle",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"launcher_to_handgun",
					
					{
						"\A3\sounds_f\characters\stances\launcher_to_handgun",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"rifle_to_handgun",
					
					{
						"\A3\Sounds_F\characters\stances\rifle_to_handgun",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"rifle_to_handgun_prn",
					
					{
						"\A3\Sounds_F\characters\stances\rifle_to_handgun_prn",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"rifle_to_launcher",
					
					{
						"\A3\sounds_f\characters\stances\rifle_to_launcher",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"rifle_to_binoc",
					
					{
						"\A3\sounds_f\characters\stances\rifle_to_binoculars",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"handgun_to_binoc",
					
					{
						"\A3\sounds_f\characters\stances\handgun_to_binoculars",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"launcher_to_binoc",
					
					{
						"\A3\sounds_f\characters\stances\launcher_to_binoculars",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"launcher_to_binoc_knl",
					
					{
						"\A3\sounds_f\characters\stances\launcher_to_binoculars_knl",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"unarmed_to_binoc",
					
					{
						"\A3\sounds_f\characters\stances\unarmed_to_binoculars",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"binoc_to_rifle",
					
					{
						"\A3\sounds_f\characters\stances\binoculars_to_rifle",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"binoc_to_rifle_2",
					
					{
						"\A3\sounds_f\characters\stances\binoculars_to_rifle_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"binoc_to_handgun",
					
					{
						"\A3\sounds_f\characters\stances\binoculars_to_handgun",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"binoc_to_launcher",
					
					{
						"\A3\sounds_f\characters\stances\binoculars_to_launcher",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"binoc_to_unarmed",
					
					{
						"\A3\sounds_f\characters\stances\binoculars_to_unarmed",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"low_rifle",
					
					{
						"A3\sounds_f\characters\stances\low_rifle",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"lift_rifle",
					
					{
						"A3\sounds_f\characters\stances\lift_rifle",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"low_handgun",
					
					{
						"A3\sounds_f\characters\stances\low_handgun",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"lift_handgun",
					
					{
						"A3\sounds_f\characters\stances\lift_handgun",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"ladder",
					
					{
						"\A3\Sounds_F\characters\movements\ladder\ladder_01",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"ladder",
					
					{
						"\A3\Sounds_F\characters\movements\ladder\ladder_02",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"ladder",
					
					{
						"\A3\Sounds_F\characters\movements\ladder\ladder_03",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"ladder",
					
					{
						"\A3\Sounds_F\characters\movements\ladder\ladder_04",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"ladder",
					
					{
						"\A3\Sounds_F\characters\movements\ladder\ladder_05",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"ladder",
					
					{
						"\A3\Sounds_F\characters\movements\ladder\ladder_06",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchGetLowGesture",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_CrouchGetLowGesture",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"Acts_listeningToRadio_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\Acts_listeningToRadio_in",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"Acts_listeningToRadio_Loop",
					
					{
						"\A3\Sounds_F\dummysound",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"Acts_listeningToRadio_Out",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_listeningToRadio_Out",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"Acts_LyingWounded_loop1",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"Acts_LyingWounded_loop2",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"Acts_LyingWounded_loop3",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"Acts_NavigatingChopper_In",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_In",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_NavigatingChopper_Loop",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_Loop",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_NavigatingChopper_Out",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_Out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMstpSlowWrflDnon_handup1",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMstpSlowWrflDnon_handup1b",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMstpSlowWrflDnon_handup1c",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1c",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMstpSlowWrflDnon_handup2",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMstpSlowWrflDnon_handup2b",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2b",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"Acts_PercMstpSlowWrflDnon_handup2c",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2c",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SignalToCheck",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_SignalToCheck",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_ShowingTheRightWay_in",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_ShowingTheRightWay_loop",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_Loop",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_ShowingTheRightWay_out",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_Out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_ShieldFromSun_loop",
					
					{
						"\A3\Sounds_F\dummysound",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_ShieldFromSun_out",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_ShieldFromSun_Out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded01",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded01",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded02",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded03",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded04",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded05",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded05",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded06",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded06",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_AidlPercMstpSlowWrflDnon_pissing",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_AidlPercMstpSlowWrflDnon_pissing",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"Acts_BoatAttacked01",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked01",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"Acts_BoatAttacked02",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked02",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"Acts_BoatAttacked03",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked03",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"Acts_BoatAttacked04",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked04",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"Acts_BoatAttacked05",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked05",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"acts_CrouchingCoveringRifle01",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_CrouchingCoveringRifle01",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"acts_CrouchingIdleRifle01",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_CrouchingIdleRifle01",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"acts_CrouchingReloadingRifle01",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_CrouchingReloadingRifle01",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"acts_CrouchingWatchingRifle01",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_CrouchingWatchingRifle01",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"acts_InjuredAngryRifle01",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_InjuredAngryRifle01",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"acts_InjuredCoughRifle02",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_InjuredCoughRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"acts_InjuredLookingRifle01",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle01",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"acts_InjuredLookingRifle02",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"acts_InjuredLookingRifle03",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"acts_InjuredLookingRifle04",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"acts_InjuredLookingRifle05",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle05",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"acts_InjuredLyingRifle01",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLyingRifle01",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"acts_InjuredSpeakingRifle01",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_InjuredSpeakingRIfle01",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PknlMstpSlowWrflDnon",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_PknlMstpSlowWrflDnon",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_loop1",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_loop2",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_loop3",
					
					{
						"\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisekneeBendA",
					
					{
						"\A3\Sounds_F\characters\cutscenes\AmovPercMstpSnonWnonDnon_exercisekneeBendA",
						0.56234133,
						1,
						20
					}
				}
			};
			normal[]=
			{
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_1",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_2",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_3",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_4",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_5",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_6",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_7",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_8",
					0.50118721,
					1,
					25
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_1",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_2",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_3",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_4",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_5",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_6",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_7",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_8",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_1",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_2",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_3",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_4",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_5",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_6",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_7",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_8",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_1",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_2",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_3",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_4",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_5",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_6",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_7",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_8",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_1",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_2",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_3",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_4",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_5",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",
						0.56234133,
						1,
						20
					}
				}
			};
			rock[]=
			{
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f\characters\footsteps\rock_walk_1",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\rock_walk_2",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\rock_walk_3",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\rock_walk_4",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\rock_walk_5",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\rock_walk_6",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\rock_walk_7",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\rock_walk_8",
					0.50118721,
					1,
					25
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_run_1",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_run_2",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_run_3",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_run_4",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_run_5",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_run_6",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_run_7",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_run_8",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_walk_1",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_walk_2",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_walk_3",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_walk_4",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_walk_5",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_walk_6",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_walk_7",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_walk_8",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_sprint_1",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_sprint_2",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_sprint_3",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_sprint_4",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_sprint_5",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_sprint_6",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_sprint_7",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\rock_sprint_8",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_1",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_2",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_3",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_4",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_5",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\sounds_F\dummysound",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",
						0.56234133,
						1,
						20
					}
				}
			};
			stony[]=
			{
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f\characters\footsteps\stony_walk_1",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\stony_walk_2",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\stony_walk_3",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\stony_walk_4",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\stony_walk_5",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\stony_walk_6",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\stony_walk_7",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\stony_walk_8",
					0.50118721,
					1,
					25
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_run_1",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_run_2",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_run_3",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_run_4",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_run_5",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_run_6",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_run_7",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_run_8",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_walk_1",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_walk_2",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_walk_3",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_walk_4",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_walk_5",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_walk_6",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_walk_7",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_walk_8",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_sprint_1",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_sprint_2",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_sprint_3",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_sprint_4",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_sprint_5",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_sprint_6",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_sprint_7",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\stony_sprint_8",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_1",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_2",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_3",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_4",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_5",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",
						0.56234133,
						1,
						20
					}
				}
			};
			gravel[]=
			{
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\gravel_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\gravel_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\gravel_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f\characters\footsteps\gravel_walk_1",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\gravel_walk_2",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\gravel_walk_3",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\gravel_walk_4",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\gravel_walk_5",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\gravel_walk_6",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\gravel_walk_7",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\gravel_walk_8",
					0.50118721,
					1,
					20
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_run_1",
						0.50118721,
						1,
						40
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_run_2",
						0.50118721,
						1,
						40
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_run_3",
						0.50118721,
						1,
						40
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_run_4",
						0.50118721,
						1,
						40
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_run_5",
						0.50118721,
						1,
						40
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_run_6",
						0.50118721,
						1,
						40
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_run_7",
						0.50118721,
						1,
						40
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_run_8",
						0.50118721,
						1,
						40
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_walk_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_walk_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_walk_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_walk_4",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_walk_5",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_walk_6",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_walk_7",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_walk_8",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_sprint_1",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_sprint_2",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_sprint_3",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_sprint_4",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_sprint_5",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_sprint_6",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_sprint_7",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\gravel_sprint_8",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\gravel_crawl_1",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\gravel_crawl_2",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\gravel_crawl_3",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\gravel_crawl_4",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\gravel_crawl_5",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\gravel_laydown_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\gravel_laydown_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",
						0.56234133,
						1,
						20
					}
				}
			};
			tiling[]=
			{
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f\characters\footsteps\roof_tiles_walk_1",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\roof_tiles_walk_2",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\roof_tiles_walk_3",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\roof_tiles_walk_4",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\roof_tiles_walk_5",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\roof_tiles_walk_6",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\roof_tiles_walk_7",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\roof_tiles_walk_8",
					0.50118721,
					1,
					25
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_run_1",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_run_2",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_run_3",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_run_4",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_run_5",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_run_6",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_run_7",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_run_8",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_walk_1",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_walk_2",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_walk_3",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_walk_4",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_walk_5",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_walk_6",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_walk_7",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_walk_8",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_sprint_1",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_sprint_2",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_sprint_3",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_sprint_4",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_sprint_5",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_sprint_6",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_sprint_7",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tiles_sprint_8",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_1",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_2",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_3",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_4",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_5",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",
						0.56234133,
						1,
						20
					}
				}
			};
			sand[]=
			{
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\sand_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\sand_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\sand_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_sand_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_sand_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_sand_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f\characters\footsteps\sand_walk_1",
					0.50118721,
					1,
					15
				},
				
				{
					"\A3\sounds_f\characters\footsteps\sand_walk_2",
					0.50118721,
					1,
					15
				},
				
				{
					"\A3\sounds_f\characters\footsteps\sand_walk_3",
					0.50118721,
					1,
					15
				},
				
				{
					"\A3\sounds_f\characters\footsteps\sand_walk_4",
					0.50118721,
					1,
					15
				},
				
				{
					"\A3\sounds_f\characters\footsteps\sand_walk_5",
					0.50118721,
					1,
					15
				},
				
				{
					"\A3\sounds_f\characters\footsteps\sand_walk_6",
					0.50118721,
					1,
					15
				},
				
				{
					"\A3\sounds_f\characters\footsteps\sand_walk_7",
					0.50118721,
					1,
					15
				},
				
				{
					"\A3\sounds_f\characters\footsteps\sand_walk_8",
					0.50118721,
					1,
					15
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_run_1",
						0.50118721,
						1,
						35
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_run_2",
						0.50118721,
						1,
						35
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_run_3",
						0.50118721,
						1,
						35
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_run_4",
						0.50118721,
						1,
						35
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_run_5",
						0.50118721,
						1,
						35
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_run_6",
						0.50118721,
						1,
						35
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_run_7",
						0.50118721,
						1,
						35
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_run_8",
						0.50118721,
						1,
						35
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_walk_1",
						0.50118721,
						1,
						15
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_walk_2",
						0.50118721,
						1,
						15
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_walk_3",
						0.50118721,
						1,
						15
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_walk_4",
						0.50118721,
						1,
						15
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_walk_5",
						0.50118721,
						1,
						15
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_walk_6",
						0.50118721,
						1,
						15
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_walk_7",
						0.50118721,
						1,
						15
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_walk_8",
						0.50118721,
						1,
						15
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_sprint_1",
						0.50118721,
						1,
						45
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_sprint_2",
						0.50118721,
						1,
						45
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_sprint_3",
						0.50118721,
						1,
						45
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_sprint_4",
						0.50118721,
						1,
						45
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_sprint_5",
						0.50118721,
						1,
						45
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_sprint_6",
						0.50118721,
						1,
						45
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_sprint_7",
						0.50118721,
						1,
						45
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\sand_sprint_8",
						0.50118721,
						1,
						45
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\sand_crawl_1",
						0.39810717,
						1,
						15
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\sand_crawl_2",
						0.39810717,
						1,
						15
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\sand_crawl_3",
						0.39810717,
						1,
						15
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\sand_crawl_4",
						0.39810717,
						1,
						15
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\sand_crawl_5",
						0.39810717,
						1,
						15
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\sand_laydown_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\sand_laydown_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_sand_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_sand_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_sand_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_UnconsciousStandUp_part1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",
						0.56234133,
						1,
						20
					}
				}
			};
			drygrass[]=
			{
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\grass_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\grass_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\grass_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f\characters\footsteps\new_dry_grass_walk_1",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\new_dry_grass_walk_2",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\new_dry_grass_walk_3",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\new_dry_grass_walk_4",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\new_dry_grass_walk_5",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\new_dry_grass_walk_6",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\new_dry_grass_walk_7",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\new_dry_grass_walk_8",
					0.50118721,
					1,
					25
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_run_1",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_run_2",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_run_3",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_run_4",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_run_5",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_run_6",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_run_7",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_run_8",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_walk_1",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_walk_2",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_walk_3",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_walk_4",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_walk_5",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_walk_6",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_walk_7",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_walk_8",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_1",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_2",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_3",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_4",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_5",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_6",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_7",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\new_dry_grass_sprint_8",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\grass_crawl_1",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\grass_crawl_2",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\grass_crawl_3",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\grass_crawl_4",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\grass_crawl_5",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\grass_laydown_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\grass_laydown_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_drygrass_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_drygrass_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_drygrass_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_UnconsciousStandUp_part1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",
						0.56234133,
						1,
						20
					}
				}
			};
			grass[]=
			{
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\grass_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\grass_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\grass_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f\characters\footsteps\new_grass_walk_1",
					0.15848932,
					1,
					15
				},
				
				{
					"\A3\sounds_f\characters\footsteps\new_grass_walk_2",
					0.15848932,
					1,
					15
				},
				
				{
					"\A3\sounds_f\characters\footsteps\new_grass_walk_3",
					0.15848932,
					1,
					15
				},
				
				{
					"\A3\sounds_f\characters\footsteps\new_grass_walk_4",
					0.15848932,
					1,
					15
				},
				
				{
					"\A3\sounds_f\characters\footsteps\new_grass_walk_5",
					0.15848932,
					1,
					15
				},
				
				{
					"\A3\sounds_f\characters\footsteps\new_grass_walk_6",
					0.15848932,
					1,
					15
				},
				
				{
					"\A3\sounds_f\characters\footsteps\new_grass_walk_7",
					0.15848932,
					1,
					15
				},
				
				{
					"\A3\sounds_f\characters\footsteps\new_grass_walk_8",
					0.15848932,
					1,
					15
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_run_1",
						0.25118864,
						1,
						40
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_run_2",
						0.25118864,
						1,
						40
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_run_3",
						0.25118864,
						1,
						40
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_run_4",
						0.25118864,
						1,
						40
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_run_5",
						0.25118864,
						1,
						40
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_run_6",
						0.25118864,
						1,
						40
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_run_7",
						0.25118864,
						1,
						40
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_run_8",
						0.25118864,
						1,
						40
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_walk_1",
						0.15848932,
						1,
						15
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_walk_2",
						0.15848932,
						1,
						15
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_walk_3",
						0.15848932,
						1,
						15
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_walk_4",
						0.15848932,
						1,
						15
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_walk_5",
						0.15848932,
						1,
						15
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_walk_6",
						0.15848932,
						1,
						15
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_walk_7",
						0.15848932,
						1,
						15
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_walk_8",
						0.15848932,
						1,
						15
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_sprint_1",
						0.31622776,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_sprint_2",
						0.31622776,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_sprint_3",
						0.31622776,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_sprint_4",
						0.31622776,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_sprint_5",
						0.31622776,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_sprint_6",
						0.31622776,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_sprint_7",
						0.31622776,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\new_grass_sprint_8",
						0.31622776,
						1,
						50
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\grass_crawl_1",
						0.39810717,
						1,
						15
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\grass_crawl_2",
						0.39810717,
						1,
						15
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\grass_crawl_3",
						0.39810717,
						1,
						15
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\grass_crawl_4",
						0.39810717,
						1,
						15
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\grass_crawl_5",
						0.39810717,
						1,
						15
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\grass_laydown_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\grass_laydown_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_grass_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_grass_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_grass_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_UnconsciousStandUp_part1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",
						0.56234133,
						1,
						20
					}
				}
			};
			debris[]=
			{
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\gravel_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\gravel_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\gravel_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f\characters\footsteps\debris_walk_1",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\debris_walk_2",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\debris_walk_3",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\debris_walk_4",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\debris_walk_5",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\debris_walk_6",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\debris_walk_7",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\debris_walk_8",
					0.50118721,
					1,
					25
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_run_1",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_run_2",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_run_3",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_run_4",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_run_5",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_run_6",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_run_7",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_run_8",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_walk_1",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_walk_2",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_walk_3",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_walk_4",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_walk_5",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_walk_6",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_walk_7",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_walk_8",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_sprint_1",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_sprint_2",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_sprint_3",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_sprint_4",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_sprint_5",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_sprint_6",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_sprint_7",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\debris_sprint_8",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\dirt_crawl_1",
						0.22387211,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\dirt_crawl_2",
						0.22387211,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\dirt_crawl_3",
						0.22387211,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\dirt_crawl_4",
						0.22387211,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\dirt_crawl_5",
						0.22387211,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\gravel_laydown_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\gravel_laydown_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",
						0.56234133,
						1,
						20
					}
				}
			};
			wood[]=
			{
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f\characters\footsteps\wood_walk_ext_1",
					0.50118721,
					0.69999999,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\wood_walk_ext_2",
					0.50118721,
					0.69999999,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\wood_walk_ext_3",
					0.50118721,
					0.69999999,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\wood_walk_ext_4",
					0.50118721,
					0.69999999,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\wood_walk_ext_5",
					0.50118721,
					0.69999999,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\wood_walk_ext_6",
					0.50118721,
					0.69999999,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\wood_walk_ext_7",
					0.50118721,
					0.69999999,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\wood_walk_ext_8",
					0.50118721,
					0.69999999,
					25
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_run_ext_1",
						0.50118721,
						0.69999999,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_run_ext_2",
						0.50118721,
						0.69999999,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_run_ext_3",
						0.50118721,
						0.69999999,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_run_ext_4",
						0.50118721,
						0.69999999,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_run_ext_5",
						0.50118721,
						0.69999999,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_run_ext_6",
						0.50118721,
						0.69999999,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_run_ext_7",
						0.50118721,
						0.69999999,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_run_ext_8",
						0.50118721,
						0.69999999,
						50
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_walk_ext_1",
						0.50118721,
						0.69999999,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_walk_ext_2",
						0.50118721,
						0.69999999,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_walk_ext_3",
						0.50118721,
						0.69999999,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_walk_ext_4",
						0.50118721,
						0.69999999,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_walk_ext_5",
						0.50118721,
						0.69999999,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_walk_ext_6",
						0.50118721,
						0.69999999,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_walk_ext_7",
						0.50118721,
						0.69999999,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_walk_ext_8",
						0.50118721,
						0.69999999,
						25
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_sprint_ext_1",
						0.50118721,
						0.69999999,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_sprint_ext_2",
						0.50118721,
						0.69999999,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_sprint_ext_3",
						0.50118721,
						0.69999999,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_sprint_ext_4",
						0.50118721,
						0.69999999,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_sprint_ext_5",
						0.50118721,
						0.69999999,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_sprint_ext_6",
						0.50118721,
						0.69999999,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_sprint_ext_7",
						0.50118721,
						0.69999999,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_sprint_ext_8",
						0.50118721,
						0.69999999,
						60
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_1",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_2",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_3",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_4",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_5",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",
						0.56234133,
						1,
						20
					}
				}
			};
			concrete[]=
			{
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_1",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_2",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_3",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_4",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_5",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_6",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_7",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_8",
					0.50118721,
					1,
					25
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_1",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_2",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_3",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_4",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_5",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_6",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_7",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_8",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_1",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_2",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_3",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_4",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_5",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_6",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_7",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_8",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_1",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_2",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_3",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_4",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_5",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_6",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_7",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_8",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_1",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_2",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_3",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_4",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_5",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",
						0.56234133,
						1,
						20
					}
				}
			};
			metal[]=
			{
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f\characters\footsteps\metal_walk_1",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\metal_walk_2",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\metal_walk_3",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\metal_walk_4",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\metal_walk_5",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\metal_walk_6",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\metal_walk_7",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\metal_walk_8",
					0.50118721,
					1,
					25
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_run_1",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_run_2",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_run_3",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_run_4",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_run_5",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_run_6",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_run_7",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_run_8",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_walk_1",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_walk_2",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_walk_3",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_walk_4",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_walk_5",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_walk_6",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_walk_7",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_walk_8",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_sprint_1",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_sprint_2",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_sprint_3",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_sprint_4",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_sprint_5",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_sprint_6",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_sprint_7",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_sprint_8",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_1",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_2",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_3",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_4",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_5",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",
						0.56234133,
						1,
						20
					}
				}
			};
			dirt[]=
			{
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\dirt_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\dirt_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\dirt_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f\characters\footsteps\dirt_walk_new_1",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\dirt_walk_new_2",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\dirt_walk_new_3",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\dirt_walk_new_4",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\dirt_walk_new_5",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\dirt_walk_new_6",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\dirt_walk_new_7",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\dirt_walk_new_8",
					0.50118721,
					1,
					20
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_run_new_1",
						0.50118721,
						1,
						45
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_run_new_2",
						0.50118721,
						1,
						45
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_run_new_3",
						0.50118721,
						1,
						45
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_run_new_4",
						0.50118721,
						1,
						45
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_run_new_5",
						0.50118721,
						1,
						45
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_run_new_6",
						0.50118721,
						1,
						45
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_run_new_7",
						0.50118721,
						1,
						45
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_run_new_8",
						0.50118721,
						1,
						45
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_walk_new_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_walk_new_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_walk_new_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_walk_new_4",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_walk_new_5",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_walk_new_6",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_walk_new_7",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_walk_new_8",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_sprint_new_1",
						0.50118721,
						1,
						55
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_sprint_new_2",
						0.50118721,
						1,
						55
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_sprint_new_3",
						0.50118721,
						1,
						55
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_sprint_new_4",
						0.50118721,
						1,
						55
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_sprint_new_5",
						0.50118721,
						1,
						55
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_sprint_new_6",
						0.50118721,
						1,
						55
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_sprint_new_7",
						0.50118721,
						1,
						55
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\dirt_sprint_new_8",
						0.50118721,
						1,
						55
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\dirt_crawl_1",
						0.22387211,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\dirt_crawl_2",
						0.22387211,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\dirt_crawl_3",
						0.22387211,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\dirt_crawl_4",
						0.22387211,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\dirt_crawl_5",
						0.22387211,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\dirt_laydown_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\dirt_laydown_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"A3\sounds_F\dummysound",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"A3\sounds_F\dummysound",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"A3\sounds_F\dummysound",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",
						0.56234133,
						1,
						20
					}
				}
			};
			wavymetal[]=
			{
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f\characters\footsteps\roof_tin_walk_1",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\roof_tin_walk_2",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\roof_tin_walk_3",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\roof_tin_walk_4",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\roof_tin_walk_5",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\roof_tin_walk_6",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\roof_tin_walk_7",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\roof_tin_walk_8",
					0.50118721,
					1,
					25
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_run_1",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_run_2",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_run_3",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_run_4",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_run_5",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_run_6",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_run_7",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_run_8",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_walk_1",
						0.0056234128,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_walk_2",
						0.0056234128,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_walk_3",
						0.0056234128,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_walk_4",
						0.0056234128,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_walk_5",
						0.0056234128,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_walk_6",
						0.0056234128,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_walk_7",
						0.0056234128,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_walk_8",
						0.0056234128,
						1,
						25
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_sprint_1",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_sprint_2",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_sprint_3",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_sprint_4",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_sprint_5",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_sprint_6",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_sprint_7",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\roof_tin_sprint_8",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_1",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_2",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_3",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_4",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_5",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",
						0.56234133,
						1,
						20
					}
				}
			};
			water[]=
			{
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\crawl\crawl_water_7",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\crawl\crawl_water_7",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f\characters\footsteps\water_walk_1",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\water_walk_2",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\water_walk_3",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\water_walk_4",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\water_walk_5",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\water_walk_6",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\water_walk_7",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\water_walk_8",
					0.50118721,
					1,
					25
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\water_run_1",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\water_run_2",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\water_run_3",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\water_run_4",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\water_run_5",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\water_run_6",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\water_run_7",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\water_run_8",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\water_walk_1",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\water_walk_2",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\water_walk_3",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\water_walk_4",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\water_walk_5",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\water_walk_6",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\water_walk_7",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\water_walk_8",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\water_sprint_1",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\water_sprint_2",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\water_sprint_3",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\water_sprint_4",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\water_sprint_5",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\water_sprint_6",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\water_sprint_7",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\water_sprint_8",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\crawl_water_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\crawl_water_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\crawl_water_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\crawl_water_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\crawl_water_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\crawl_water_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\crawl_water_7",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\crawl_water_8",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\water_laydown_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\water_laydown_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_water_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_water_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_water_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_4",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"dive",
					
					{
						"A3\Sounds_F\characters\movements\diver-swim-1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"dive",
					
					{
						"A3\Sounds_F\characters\movements\diver-swim-2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"dive",
					
					{
						"A3\Sounds_F\characters\movements\diver-swim-3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"dive",
					
					{
						"A3\Sounds_F\characters\movements\diver-swim-4",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"dive",
					
					{
						"A3\Sounds_F\characters\movements\diver-swim-5",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"dive",
					
					{
						"A3\Sounds_F\characters\movements\diver-swim-6",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"dive_dry",
					
					{
						"A3\Sounds_F\characters\movements\diver-dry-swim-1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"dive_dry",
					
					{
						"A3\Sounds_F\characters\movements\diver-dry-swim-2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"dive_dry",
					
					{
						"A3\Sounds_F\characters\movements\diver-dry-swim-3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"dive_dry",
					
					{
						"A3\Sounds_F\characters\movements\diver-dry-swim-4",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"dive_dry",
					
					{
						"A3\Sounds_F\characters\movements\diver-dry-swim-5",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"dive_dry",
					
					{
						"A3\Sounds_F\characters\movements\diver-dry-swim-6",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",
						0.56234133,
						1,
						20
					}
				}
			};
			virtual[]=
			{
				
				{
					"adjust_short",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side1",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_short",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side2",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_short",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side3",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_short",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel1",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_short",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel2",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side1",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side2",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side3",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel1",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel2",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_kneel_to_stand1",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_kneel_to_stand2",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_kneelhigh_to_standlow",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel1",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_standlow_to_kneelhigh",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel2",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_prone",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_to_stand",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_up",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_up_back",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side1",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side2",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side3",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_left",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_right",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\Sounds_F_Bootcamp\Characters\Stances\virtual_adjust_kneel_to_prone",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_to_kneel",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_left_prone",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_right_prone",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_left_prone_to_stand",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_right_prone_to_stand",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"A3\sounds_F\dummysound",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"A3\sounds_F\dummysound",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_kneelhigh_to_standlow",
					
					{
						"A3\sounds_F\dummysound",
						1,
						1,
						20
					}
				},
				
				{
					"adjust_standlow_to_kneelhigh",
					
					{
						"A3\sounds_F\dummysound",
						1,
						1,
						20
					}
				},
				
				{
					"over_the_obstacle_fast",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_over_the_obstacle_fast",
						1,
						1,
						20
					}
				},
				
				{
					"over_the_obstacle_slow",
					
					{
						"\A3\sounds_f_bootcamp\characters\stances\virtual_over_the_obstacle_slow",
						1,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_1",
					0.70794576,
					1,
					25
				},
				
				{
					"\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_2",
					0.70794576,
					1,
					25
				},
				
				{
					"\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_3",
					0.70794576,
					1,
					25
				},
				
				{
					"\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_4",
					0.70794576,
					1,
					25
				},
				
				{
					"\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_5",
					0.70794576,
					1,
					25
				},
				
				{
					"\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_6",
					0.70794576,
					1,
					25
				},
				
				{
					"\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_7",
					0.70794576,
					1,
					25
				},
				
				{
					"\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_8",
					0.70794576,
					1,
					25
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_1",
						0.70794576,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_2",
						0.70794576,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_3",
						0.70794576,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_4",
						0.70794576,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_5",
						0.70794576,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_6",
						0.70794576,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_7",
						0.70794576,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_run_8",
						0.70794576,
						1,
						50
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_1",
						0.3548134,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_2",
						0.3548134,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_3",
						0.3548134,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_4",
						0.3548134,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_5",
						0.3548134,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_6",
						0.3548134,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_7",
						0.3548134,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_walk_8",
						0.3548134,
						1,
						25
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_1",
						0.56234133,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_2",
						0.56234133,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_3",
						0.56234133,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_4",
						0.56234133,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_5",
						0.56234133,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_6",
						0.56234133,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_7",
						0.56234133,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f_bootcamp\characters\footsteps\virtual_sprint_8",
						0.56234133,
						1,
						60
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f_bootcamp\characters\movements\bodyfalls\bodyfall_virtual_1",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f_bootcamp\characters\movements\bodyfalls\bodyfall_virtual_2",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f_bootcamp\characters\movements\bodyfalls\bodyfall_virtual_3",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"laydown",
					
					{
						"A3\sounds_F\dummysound",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"A3\sounds_F\dummysound",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\sounds_f_bootcamp\characters\movements\swim_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\sounds_f_bootcamp\characters\movements\swim_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\sounds_f_bootcamp\characters\movements\swim_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_7",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_8",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_1",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_2",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_3",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_4",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_1",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_2",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_3",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_4",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_UnconsciousStandUp_part1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_AmovPercMstpSnonWnonDnon_exercisePushup",
						0.56234133,
						1,
						20
					}
				}
			};
			int_concrete[]=
			{
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_int_walk_1",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_int_walk_2",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_int_walk_3",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_int_walk_4",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_int_walk_5",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_int_walk_6",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_int_walk_7",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_int_walk_8",
					0.50118721,
					1,
					20
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_run_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_run_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_run_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_run_4",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_run_5",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_run_6",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_run_7",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_run_8",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_walk_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_walk_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_walk_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_walk_4",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_walk_5",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_walk_6",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_walk_7",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_walk_8",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_sprint_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_sprint_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_sprint_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_sprint_4",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_sprint_5",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_sprint_6",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_sprint_7",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_sprint_8",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_1",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_2",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_3",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_4",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_5",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",
						0.56234133,
						1,
						20
					}
				}
			};
			int_wood[]=
			{
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f\characters\footsteps\wood_walk_int_1",
					0.50118721,
					0.69999999,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\wood_walk_int_2",
					0.50118721,
					0.69999999,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\wood_walk_int_3",
					0.50118721,
					0.69999999,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\wood_walk_int_4",
					0.50118721,
					0.69999999,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\wood_walk_int_5",
					0.50118721,
					0.69999999,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\wood_walk_int_6",
					0.50118721,
					0.69999999,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\wood_walk_int_7",
					0.50118721,
					0.69999999,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\wood_walk_int_8",
					0.50118721,
					0.69999999,
					20
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_run_int_1",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_run_int_2",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_run_int_3",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_run_int_4",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_run_int_5",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_run_int_6",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_run_int_7",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_run_int_8",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_walk_int_1",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_walk_int_2",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_walk_int_3",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_walk_int_4",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_walk_int_5",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_walk_int_6",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_walk_int_7",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_walk_int_8",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_sprint_int_1",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_sprint_int_2",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_sprint_int_3",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_sprint_int_4",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_sprint_int_5",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_sprint_int_6",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_sprint_int_7",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\wood_sprint_int_8",
						0.50118721,
						0.69999999,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_1",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_2",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_3",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_4",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_5",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",
						0.56234133,
						1,
						20
					}
				}
			};
			int_metal[]=
			{
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f\characters\footsteps\metal_int_walk_1",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\metal_int_walk_2",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\metal_int_walk_3",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\metal_int_walk_4",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\metal_int_walk_5",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\metal_int_walk_6",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\metal_int_walk_7",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\metal_int_walk_8",
					0.50118721,
					1,
					20
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_run_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_run_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_run_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_run_4",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_run_5",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_run_6",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_run_7",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_run_8",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_walk_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_walk_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_walk_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_walk_4",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_walk_5",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_walk_6",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_walk_7",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_walk_8",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_sprint_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_sprint_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_sprint_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_sprint_4",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_sprint_5",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_sprint_6",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_sprint_7",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\metal_int_sprint_8",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_1",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_2",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_3",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_4",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_5",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",
						0.56234133,
						1,
						20
					}
				}
			};
			int_tiles[]=
			{
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_int_walk_1",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_int_walk_2",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_int_walk_3",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_int_walk_4",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_int_walk_5",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_int_walk_6",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_int_walk_7",
					0.50118721,
					1,
					20
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_int_walk_8",
					0.50118721,
					1,
					20
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_run_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_run_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_run_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_run_4",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_run_5",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_run_6",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_run_7",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_run_8",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_walk_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_walk_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_walk_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_walk_4",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_walk_5",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_walk_6",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_walk_7",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_walk_8",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_sprint_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_sprint_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_sprint_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_sprint_4",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_sprint_5",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_sprint_6",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_sprint_7",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_int_sprint_8",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_1",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_2",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_3",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_4",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_5",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"swim",
					
					{
						"A3\Sounds_F\characters\movements\swim_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",
						0.56234133,
						1,
						20
					}
				}
			};
			tarmac[]=
			{
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_side",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_up_back",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_down",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_left",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_right",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_kneel_to_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_prone_to_kneel",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_left_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_stand_to_right_prone",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_left_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"adjust_right_prone_to_stand",
					
					{
						"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",
						0.25118864,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll",
					
					{
						"A3\Sounds_F\characters\movements\roll\concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"roll_unarmed",
					
					{
						"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",
						0.89125091,
						1,
						20
					}
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_1",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_2",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_3",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_4",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_5",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_6",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_7",
					0.50118721,
					1,
					25
				},
				
				{
					"\A3\sounds_f\characters\footsteps\concrete_walk_8",
					0.50118721,
					1,
					25
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_1",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_2",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_3",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_4",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_5",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_6",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_7",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_run_8",
						0.50118721,
						1,
						50
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_1",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_2",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_3",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_4",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_5",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_6",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_7",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"walk",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_walk_8",
						0.50118721,
						1,
						25
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_1",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_2",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_3",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_4",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_5",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_6",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_7",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"sprint",
					
					{
						"\A3\sounds_f\characters\footsteps\concrete_sprint_8",
						0.50118721,
						1,
						60
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_1",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_2",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_3",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_4",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"crawl",
					
					{
						"\A3\sounds_f\characters\crawl\concrete_crawl_5",
						0.39810717,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"laydown",
					
					{
						"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"bodyfall",
					
					{
						"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",
						0.50118721,
						1,
						20
					}
				},
				
				{
					"Acts_carFixingWheel",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PercMwlkSlowWrflDf2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WalkingChecking",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle02",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle03",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_CrouchingFiringLeftRifle04",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_HUBABriefing",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_PointingLeftUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_SittingJumpingSaluting_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_StandingSpeakingUnarmed",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_in",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_TreatingWounded_out",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_UnconsciousStandUp_part1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_1b",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB01_PlayerWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_4",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_5",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_AIWalk_6",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_1",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_2",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"Acts_WelcomeOnHUB02_PlayerWalk_3",
					
					{
						"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",
						0.56234133,
						1,
						20
					}
				},
				
				{
					"AmovPercMstpSnonWnonDnon_exercisePushup",
					
					{
						"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",
						1,
						1,
						20
					}
				}
			};
		};
	};
	class armst_tushkano_uran: tushkano_uran_test
	{
		displayName="$STR_STST_tushkano_name";
		uniformClass="";
		model="\armst\armst_char\char_mut\tushkano_uran\tushkano.p3d";
		uniformAccessories[]={};
		nakedUniform="tushkano_uran";
		linkedItems[]={};
		nightVision=1;
		scope=2;
	};
};
