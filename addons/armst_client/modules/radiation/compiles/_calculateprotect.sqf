/*
	Author: Aloe <itfruit@mail.ru> & Nomas <Nomasx2000@gmail.com>

	Description:  Расчёт уровня защиты | Calculates the protection value based on gear.
	
	Parameter(s):
		_level 		(Number) - уровень радиции (в Мкр)
		
	Return: Nothing
*/

#include "..\module.sqf";

params ["_level"];

//Защита в Мкр
private _protect = 0;
private _protectHelmet = 0;
private _protectVest = 0;

private _arrVest1LVL = [
	// Mod: Stalker Stuff Gear
	"6B5",
	"6B5_ARMY",	
	"6B3",	
	"SP_JackEllis1_UNBlue1",	
	"armst_harness1_black",	
	"armst_harness1_gray",	
	"armst_kabura",	
	"armst_razgruz",	
	"armst_razgruz2",	
	"armst_razgruz3",	
	"armst_Hood_full_mon",	
	"armst_Modular2_grey",	
	"armst_Modular2_white",	
	"armst_Modular2_prometeus",	
	"armst_Modular2_tan",	
	"armst_Modular2_green",	
	"armst_Modular2_freedom",	
	"armst_Modular2_black",	
	"armst_Modular2_last_day",	
	"armst_Modular2_orden",	
	"armst_Modular2_1",	
	"armst_Modular2_2",	
	"armst_Modular2_3",	
	"armst_Modular2_4",	
	"armst_Modular2_5",	
	"armst_Modular2_6",	
	"armst_Modular2_7",	
	"armst_Modular2_8",	
	"armst_Modular2_9",	
	"armst_Modular2_10",	
	"armst_dolg_vest",	
	"armst_Modular1_grey", 	
	"armst_Modular1_flora",	
	"armst_Modular1_tan",	
	"armst_Modular1_white",	
	"armst_Modular1_black",	
	"armst_Modular1_green",	
	"tarzan_ch_bron",	
	"tarzan_w_bron",	
	"tarzan_ch",	
	"tarzan_ch2",	
	"tarzan_mercenar",	
	"tarzan_w",	
	"V94_OM_ch",	
	"V94_OM_sin",	
	"V94_OM_zel",	
	"V94_sin",	
	"V94_zel",	
	"V94_zel2",	
	"V94_ch",
	"V94_ch2",	
	"V94_ch3",	
	"def_molle_easy",	
	"def_molle_norm",
	"def_molle_hard",	
	"def_voen_easy",	
	"def_voen_norm",	
	"def_voen_hard",	
	"def_oksop",	
	"Kora",	
	"Kora_p_ak",	
	"Kora_p2_ak",	
	"p_ak",	
	"p2_ak",	
	"Rys_m",	
	"Rys_m_gp",	
	"Rys_m_def",	
	"Rys_m_def_mag",	
	"Rys_m_def_gp",	
	"Rys_m2_def_mag",	
	"Rys_m2_def_gp",	
	"Rys_m_kora",	
	"Rys_m_kora_gp",	
	"Rys_m_neutral",	
	"Rys_m_kora_neutral",	
	"Smersh_AK",	
	"Smersh_SVD",
	"Smersh_AK_GP",	
	"Smersh_PK",	
	"Smersh_def_AK",	
	"Smersh_def_SVD",	
	"Smersh_def_PK",	
	"Smersh_def_AK_gp",	
	"Smersh2_def_AK",	
	"Smersh2_def_AK_gp",	
	"Smersh_kora_AK",	
	"Smersh_kora_SVD",	
	"Smersh_kora_AK_gp",	
	"Smersh_kora_PK",	
	"Smersh_def_SVD_army",	
	"Smersh_def_SVD_freedom",
	"Smersh_def_PK_freedom", 	
	"Smersh_kora_AK_dolg",	
	"Smersh_kora_SVD_dolg", 	
	"Smersh_kora_PK_dolg",	
	"Armst_band_coat_mini",	
	"Armst_band_coat_mini_2",
	"Armst_band_coat_mini_3",	
	"Armst_band_coat_mini_4",	
	"Armst_band_kurt",	
	"Armst_band_kurt_2",	
	"Armst_band_kurt_3",	
	"Armst_band_kurt2",	
	"Armst_band_kurt2_2",	
	"Armst_band_kurt2_3",	
	"Armst_band_coat2",	
	"Armst_band_coat2_2",	
	"Armst_band_coat2_3",	
	"Armst_band_coat2_4",
	"Armst_band_coat",	
	"Armst_band_coat_2",	
	"Armst_band_coat_3",	
	"Armst_band_coat_4",	
	"Armst_CN_coat_opened",	
	"Armst_CN_coat_closed",
	// Mod: S.T.A.L.K.E.R. + CBRN Equipment
	"SCE_Coat_Long_1",
	"SCE_Coat_Long_2",
	"SCE_Coat_Long_3",
	"SCE_Coat_Long_4",
	"SCE_Coat_Short_1",
	"SCE_Coat_Short_2",
	"SCE_Coat_Short_3",
	"SCE_Coat_Short_4",
	"SCE_Coat_Sleeveless_1",
	"SCE_Coat_Sleeveless_2",
	"SCE_Coat_Sleeveless_3",
	"SCE_Coat_Sleeveless_4",
	"SE_Eastern_Chest_Rig_Black",
	"SE_Eastern_Chest_Rig_Brown",
	"SE_Eastern_Chest_Rig_Green"
];
private _arrVest2LVL = [
	// Mod: Stalker Stuff Gear
	"armst_i_nbs_vest",
	"armst_i_nbs_vest_2",
	"armst_i_nbs_vest_3",
	"armst_6b43_vest_desert",	
	"armst_6b43_vest_monolith",	
	"armst_6b43_vest_Flora",	
	"armst_6b43_vest_Digital_flora",	
	"armst_6b43_vest_clearsky",	
	"armst_6b43_vest_duty",	
	"armst_6b43_vest_freedom",	
	"armst_6b43_vest_EMR",	
	"armst_6b43_vest_military",	
	"armst_6b43_vest_izlom",	
	"armst_6b43_vest_nocamo",	
	"armst_6b43_vest_orden",	
	"armst_pleit",	
	"armst_pleit2",	
	"armst_pleit3",	
	"armst_pleit4",	
	"armst_PlateCarrier1_mon",	
	"Armst_modvest_mon",	
	"Armst_modvest_orden",	
	"armst_platecarrier1_freedom",	  
	"armst_platecarrier1_green",	
	"armst_platecarrier1_tan",	
	"armst_platecarrier1_ATacsFG",	
	"armst_platecarrier1_Nodurban",	
	"armst_platecarrier1_hunter",	
	"armst_platecarrier1_hunter2",	 
	"armst_platecarrier1_grey",	
	"armst_PlateCarrier1_merc",	
	"armst_platecarrier1_black",	
	"armst_PlateCarrier1_Black2",	
	"armst_platecarrier1_veryblack",	
	"armst_PlateCarrier1_orden",	
	"armst_PlateCarrier1_clearsky",	
	"armst_PlateCarrier1_monolith",	
	"armst_PlateCarrier1_hak1",	
	"armst_PlateCarrier1_hak2",	
	"armst_PlateCarrier1_hak3",	
	"armst_PlateCarrier1_stalk1",	
	"armst_PlateCarrier1_stalk2",	
	"armst_PlateCarrier1_stalk3",	
	"armst_PlateCarrier1_stalk4",	
	"armst_PlateCarrier1_stalk5",	
	"armst_PlateCarrier1_stalk6",	
	"armst_PlateCarrier1_stalk7",	
	"armst_PlateCarrier1_stalk8",	
	"armst_PlateCarrier1_stalk9",	
	"armst_PlateCarrier1_stalk10",	
	"armst_PlateCarrier1_stalk11",	
	"Armst_Lightarmor_CN",	
	"Armst_modvest_monolith",	
	"Armst_modvest_freedom",	
	"Armst_modvest_merc",	
	"Armst_modvest_dolg",	
	"Armst_modvest_army",	
	"Armst_modvest_bandit",	
	"Armst_modvest_stalker1",	
	"Armst_modvest_stalker2",	
	"Armst_modvest_stalker3",	
	"Armst_coat_kora",	
	"Armst_coat_kora_2",	
	"Armst_coat_kora_3",	
	"Armst_coat_kora_4",	
	"Armst_band_coat_multicam",	
	"Armst_coat_6b43_orden",	
	"Armst_coat_seva_orden",	
	"armst_carrier_vest_olive",	
	"armst_carrier_vest_phantom",	
	"armst_carrier_vest_black",	
	"armst_carrier_vest_green",	
	"armst_carrier_vest_orden",	
	"armst_tactical1_white",	
	"armst_tactical1_tan",	 
	"armst_tactical1_green",	 
	"armst_tactical1_blue",	 
	"armst_tactical1_black",	 
	"armst_Tactical1_validol_1",	
	"armst_Tactical1_validol_2",	
	"armst_Tactical1_validol_3",	
	"armst_Tactical1_validol_4",	
	"armst_Tactical1_validol_5",	
	"armst_Tactical1_validol_6",	
	"armst_Tactical1_validol_7",	
	"armst_Tactical1_validol_8",	
	"armst_Tactical1_validol_9",	
	"armst_Tactical1_validol_10",	
	"armst_Tactical1_validol_11",	
	"armst_Tactical1_validol_12",	
	"armst_Tactical1_validol_13",	
	"armst_Tactical1_validol_14",	
	"v_tacvest_oli",	
	"ARMST_PlateCarrier1_method",	
	"armst_PlateCarrier1_orden_black",	
	"Armst_modvest_method",	
	"armst_i_nbc_vest_orden",	
	"Armst_coat_sunrise_orden",
	// Mod: S.T.A.L.K.E.R. + CBRN Equipment
	"SE_Armored_Eastern_Tactical_Vest_Black",
	"SE_Armored_Eastern_Tactical_Vest_Brown",
	"SE_Armored_Eastern_Tactical_Vest_Tan",
	"SE_Assault_Vest_Black",
	"SE_Assault_Vest_Green",
	"SE_Assault_Vest_Tan",
	"SE_Combat_Vest",
	"SE_Eastern_Tactical_Vest_Black",
	"SE_Eastern_Tactical_Vest_Brown",
	"SE_Eastern_Tactical_Vest_Tan",
	"SE_Sunrise_Vest",
	// Mod: The Corporation DVK
	"dvk_tc_vestsf_a",
	"dvk_tc_vestsf_tl"
];
private _arrVest3LVL = [
	// Mod: Stalker Stuff Gear
	"armst_Carrier_hard_mon",
	"Armst_sunrise_mon",
	"armst_Carrier_hard_duty",
	"armst_Carrier_hard_freedom",
	"armst_Carrier_hard_orden",
	"armst_Carrier_hard_monolith",
	"armst_Carrier_hard_stalker",
	"armst_Carrier_hard_stalker2",
	"armst_Carrier_hard_stalker3",
	"armst_Carrier_hard_clearsky",
	"Armst_HardArmor_CN",
	"Armst_sunrise_stalker",
	"Armst_sunrise_stalker_2",
	"Armst_sunrise_freedom",
	"Armst_sunrise_duty",
	"Armst_sunrise_orden",
	"Armst_sunrise_stalker_3",
	"Armst_sunrise_stalker_bandit",
	"Armst_sunrise_stalker_merc",
	"Armst_sunrise_stalker_army",
	"Armst_sunrise_stalker_4",
	"Armst_sunrise_stalker_5",
	"Armst_sunrise_stalker_6",
	"Armst_sunrise_stalker_7",
	"Armst_sunrise_stalker_8",
	"Armst_sunrise_stalker_9",
	"Armst_sunrise_stalker_10",
	"Armst_sunrise_stalker_11",
	"Armst_sunrise_stalker_12",
	"Armst_sunrise_stalker_13",
	"Armst_band_coat_black",
	"Armst_coat_sunrise_stalk1_1",
	"Armst_coat_sunrise_stalk1_2",
	"Armst_coat_sunrise_stalk2_1",
	"Armst_coat_sunrise_stalk2_2",
	"Armst_coat_sunrise_stalk3_1",
	"Armst_coat_sunrise_stalk3_2",
	"Armst_coat_sunrise_bandit_1",
	"Armst_coat_sunrise_bandit_2",
	"Armst_coat_sunrise_merc_1",
	"Armst_coat_sunrise_merc_2",
	"Armst_coat_sunrise_duty_1",
	"Armst_coat_sunrise_duty_2",
	"Armst_coat_sunrise_freedom_1",
	"Armst_coat_sunrise_freedom_2",
	"Armst_coat_6b43_stalk",
	"Armst_coat_6b43_stalk_2",
	"Armst_coat_6b43_stalk_3",
	"Armst_coat_6b43_stalk_4",
	"Armst_coat_6b43_freedom",
	"Armst_coat_6b43_freedom_2",
	"Armst_coat_6b43_clearsky",
	"Armst_coat_6b43_clearsky_2",
	"armst_Carrier_hard_stalker4",
	"armst_Carrier_hard_stalker5",
	"armst_Carrier_hard_stalker6",
	"armst_Carrier_hard_stalker7",
	"armst_Carrier_hard_stalker8",
	"armst_Carrier_hard_army1",
	"armst_Carrier_hard_army2",
	"armst_Carrier_hard_army3",
	"armst_Carrier_hard_merc",
	"armst_Carrier_hard_monolith2",
	"armst_Carrier_hard_ind1",
	"armst_Carrier_hard_ind2",
	"armst_Carrier_hard_ind3",
	"armst_Carrier_hard_ind4",
	"armst_Carrier_hard_ind5",
	"armst_Carrier_hard_ind6",
	"armst_Carrier_hard_ind7",
	"Armst_coat_6b43_orden",
	"armst_bulat_hard_stalker",
	"armst_bulat_hard_army",
	"armst_bulat_hard_voenstal",
	"armst_bulat_hard_dolg",
	"armst_bulat_hard_merc",
	"armst_bulat_hard_freedom",
	"Armst_bulat_hard_orden",
	"armst_ekzo",
	"armst_ekzo2",
	"armst_ekzo3",
	"Armst_ekzobandit",
	"armst_ekzoarmy",
	"armst_ekzomercenaries", 
	"armst_ekzomonolith",
	"armst_ekzofreedom",
	"armst_ekzofreedom2",
	"armst_ekzodolg",
	"armst_ekzodolg2",
	"armst_ekzo3gen",
	// Mod: S.T.A.L.K.E.R. + CBRN Equipment
	"SCE_Exo2G_Bandit_1",
	"SCE_Exo2G_Bandit_2",
	"SCE_Exo2G_Duty_1",
	"SCE_Exo2G_Duty_2",
	"SCE_Exo2G_Freedom_1",
	"SCE_Exo2G_Freedom_2",
	"SCE_Exo2G_Loner_1",
	"SCE_Exo2G_Loner_2",
	"SCE_Exo2G_Merc",
	"SCE_Exo2G_Military",
	"SCE_Exo2G_Monolith",
	"SCE_Sunrise_Bandit",
	"SCE_Sunrise_Duty",
	"SCE_Sunrise_Freedom_1",
	"SCE_Sunrise_Freedom_2",
	"SCE_Sunrise_Black",
	"SCE_Sunrise_Loner",
	"SCE_Sunrise_Mercenary",
	"SCE_Sunrise_Military",
	// Mod: CBRN Defense Unit - Remastered
	"V_CBRN_A_multicam",
	"V_CBRN_A_woodland",
	"V_CBRN_B_black",
	"V_CBRN_B_blue",
	"V_CBRN_B_brown",
	"V_CBRN_C",
	"V_CBRN_C_alt"
];
private _arrVest4LVL = [
	// Mod: Stalker Stuff Gear
	"Armst_coat_seva_stalk1_1",
	"Armst_coat_seva_stalk1_2",
	"Armst_coat_seva_stalk2_1",
	"Armst_coat_seva_stalk2_2",
	"Armst_coat_seva_stalk3_1",
	"Armst_coat_seva_stalk3_2",
	"Armst_coat_seva_stalk4_1",
	"Armst_coat_seva_stalk4_2",
	"Armst_coat_seva_stalk5_1",
	"Armst_coat_seva_stalk5_2",
	"Armst_coat_seva_stalk6_1",
	"Armst_coat_seva_stalk6_2",
	"Armst_coat_seva_clearsky_1",
	"Armst_coat_seva_clearsky_2",
	"Armst_coat_seva_duty_1",
	"Armst_coat_seva_duty_2",
	"Armst_coat_seva_freedom_1",
	"Armst_coat_seva_freedom_2",
	"Armst_coat_seva_freedom2_1",
	"Armst_coat_seva_freedom2_2",
	"Armst_coat_seva_merc_1",
	"Armst_coat_seva_merc_2",
	"Armst_coat_seva_orden",
	"armst_sevastalk",
	"armst_sevastalk2",
	"armst_sevastalk3",
	"Armst_sevastalk4",
	"Armst_sevastalk5",
	"Armst_sevastalk6",
	"Armst_science2",
	"Armst_science_2",
	"armst_sevavoen",
	"armst_sevadolg",
	"armst_sevamonolith",
	"armst_sevanaemnik",
	"armst_sevasvoboda",
	"armst_sevaclearsky",
	"Armst_seva_orden",
	"armst_old_sevastalk",
	"armst_old_sevastalk2",
	"armst_old_sevastalk3",
	"armst_old_sevadolg",
	"armst_old_sevasvoboda", 
	"armst_old_sevanaemnik",
	"armst_old_sevamonolith",
	"Armst_sevasvoboda2",
	"Armst_armed_seva_stalk",
	"Armst_armed_seva_stalk2",
	"Armst_armed_seva_stalk3",
	"Armst_armed_seva_stalk4",
	"Armst_armed_seva_stalk5",
	"Armst_armed_seva_stalk6",
	"Armst_armed_seva_voen",
	"Armst_armed_seva_dolg",
	"Armst_armed_seva_monolith",
	"Armst_armed_seva_naemnik",
	"Armst_armed_seva_svoboda",
	"Armst_armed_seva_clearsky",
	"Armst_armed_seva_orden",
	"Armst_armed_seva_svoboda2",
	"Armst_sunrise_modded",
	"Armst_seva_enoch",
	// Mod: S.T.A.L.K.E.R. + CBRN Equipment
	"SCE_V_SEVA_ClearSky",
	"SCE_V_SEVA_Duty",
	"SCE_V_SEVA_Freedom_1",
	"SCE_V_SEVA_Freedom_2",
	"SCE_V_SEVA_Loner_1",
	"SCE_V_SEVA_Loner_2",
	"SCE_V_SEVA_Loner_3",
	"SCE_V_SEVA_Loner_4",
	"SCE_V_SEVA_Loner_5",
	"SCE_V_SEVA_Loner_6",
	"SCE_V_SEVA_Mercenary",
	"SCE_V_SEVA_Military",
	"SCE_V_SEVA_Monolith"
];
private _arrSevaUniforms = [
	"SE_SEVA_Ecologists_Green",
	"SE_SEVA_Ecologists_Orange",
	"SE_SEVA_Clear_Sky",
	"SE_SEVA_Duty",
	"SE_SEVA_Freedom",
	"SE_SEVA_Loner",
	"SE_SEVA_Mercenary",
	"SE_SEVA_Military",
	"SE_SEVA_Monolith"
];
private _arrHelmet1LVL = [
	// Mod: Stalker Stuff Gear
	"armst_Hood_band",
	"armst_Hood_band_2",
	"armst_Hood_band_3",
	"armst_Hood_band_4",
	"armst_cap_free3",
	"armst_cap_free",
	"armst_cap_free2",
	"armst_cap_free4",
	"armst_cap_merc",
	"armst_cap_band",
	"armst_cap_army",
	"armst_cap_dolg",
	"H_Watchcap_blk",
	"H_Watchcap_camo",
	"H_Watchcap_cbr",
	"H_Watchcap_khk",
	"armst_Hood_mid_military",
	"armst_Hood_mid_merc",
	"armst_Hood_mid_mech",
	"armst_Hood_mid_freedom1",
	"armst_Hood_mid_freedom2",
	"armst_Hood_mid_dolg2",
	"armst_Hood_mid_dolg1",
	"armst_Hood_mid_clearsky",
	"armst_Hood_mid_neutral",
	"armst_Hood_mid_loner11",
	"armst_Hood_mid_loner9",
	"armst_Hood_mid_loner8",
	"armst_Hood_mid_loner7",
	"armst_Hood_mid_loner6",
	"armst_Hood_mid_loner5",
	"armst_Hood_mid_loner4",
	"armst_Hood_mid_loner3",
	"armst_Hood_mid_loner2",
	"armst_Hood_mid_loner1",
	"armst_Hood_mid_loner10",
	"armst_Hood_full_mechanick",
	"H_Cap_grn",
	"H_Cap_tan",
	"H_Cap_red",
	"H_Cap_oli",
	"H_Cap_blu",
	"H_Cap_blk",
	"H_Cap_headphones",
	"H_Cap_marshal",
	"H_MilCap_gry",
	"H_MilCap_blue",
	"armst_kepka_gop",
	"armst_kepka_gop_2",
	"armst_kepka_gop_3",
	"armst_kepka_gop2",
	"armst_kepka_gop2_2",
	"armst_kepka_gop2_3",
	"Beret_a",
	"Beret_dolg",
	"Beret_freedom",
	"Beret_ch",
	"Beret_2_ch",
	"H_Bandanna_mcamo",
	"H_Bandanna_khk_hs",
	"H_Bandanna_cbr",
	"H_Bandanna_camo",
	"H_Bandanna_sand",
	"H_Bandanna_sgg",
	"H_Bandanna_surfer_grn",
	"H_Bandanna_surfer_blk",
	"H_Bandanna_surfer",
	"H_Bandanna_blu",
	"H_Bandanna_khk",
	"H_Bandanna_gry",
	"armst_shlem_altyn",
	"H_Booniehat_khk",
	"H_Booniehat_tan",
	"H_Booniehat_oli",
	"armst_Hood_full_mono",
	"ZSH_1_ZV",
	"ZSH_1_zel",
	"ZSH_1_kam",
	"ZSH",
	"ZSH_ochki",
	"ZSH_ZV",
	"ZSH_ZV_ch",
	"LSHZ_2DT_Y",
	"LSHZ_2DT_Y_ZV",
	"LSHZ_2DT_CH_Y_ZN",
	"LSHZ_2DT_CH_Y",
	"LSHZ_2DT_CH_CH_Y",
	"LSHZ_2DT_CH_CH_Y_ZN",
	"Maska1_zv",
	"Maska1h_zv",
	"Maska1_ochki",
	"Maska1",
	"Maska2",
	"Maska2_ochki",
	"Maska2_ZV",
	"Maska2_ZV_ch",
	"SH_60",
	"SH_60_ch",
	"SH_68_ch",
	"SH_68",
	"armst_mask",
	"armst_mask_2",
	"armst_mask_3",
	"armst_mask_4",
	"armst_mask_5",
	"armst_mask_6",
	"armst_mask_7",
	"armst_mask_8",
	"armst_mask_9",
	"armst_band_balaclava",
	"armst_band_balaclava_2",
	"armst_band_balaclava_3",
	"armst_balaclava_1",
	"armst_balaclava_2",
	"G_Balaclava_blk",
	"G_Balaclava_oli",
	"G_Balaclava_lowprofile",
	"G_Balaclava_combat",
	"armst_balaclava_4",
	"armst_balaclava_army",
	"armst_balaclava_5",
	"armst_balaclava_3",
	"armst_balaclava_monolith",
	"armst_balaclava_clearsky",
	"armst_balaclava_freedom",
	"armst_balaclava_merc",
	"armst_bandana",
	"armst_bandanaglass",
	"G_Bandanna_tan",
	"G_Bandanna_oli",
	"G_Bandanna_khk",
	"G_Bandanna_blk",
	"G_Bandanna_beast",
	"G_Bandanna_aviator",
	"G_Bandanna_sport",
	"G_Bandanna_shades",
	"armst_bandanaGlass_4",
	"armst_bandanaGlass_army",
	"armst_bandanaGlass_2",
	"armst_bandanaGlass_3",
	"armst_bandanaGlass_monolith",
	"armst_bandanaGlass_clearsky",
	"armst_bandanaGlass_freedom",
	"armst_bandanaGlass_merc",
	"armst_bandanaGlass_duty",
	"armst_balaclava3_skull",
	"armst_balaclava3_smile",
	"armst_balaclava3_silent",
	"armst_bandanna_Skull_des",
	"armst_bandanna_Skull_Grn",
	"armst_bandanna_Skull_Blk",
	"Armst_balaclava_SKULL_Blk",
	"Armst_balaclava_SKULL_Grn",
	"Armst_balaclava_SKULL_des",
	"armst_Hood_band_5",
	"armst_ghilli",
	"armst_beret",
	"armst_beret2",
	"armst_beret3",
	"armst_beret_a",
	"armst_beret5",
	"armst_beret4",
	"armst_beret6",
	"armst_Cap",
	"armst_Cap4",
	"armst_Cap2",
	"armst_Cap3",
	"armst_fur",
	"armst_fur2",
	"armst_work_shlem",
	"armst_ushanka_VS",
	"armst_ushanka_VS2",
	"armst_podlshlemnik",
	"armst_SH60pod",
	"armst_pilotka",
	"armst_ushanka",
	"armst_ushanka_off",
	// Mod: S.T.A.L.K.E.R. + CBRN Equipment
	"SE_Ushanka",
	// Mod: Metro: The Last Station
	"reich_kape_officer",
	"red_kape_officer"
];
private _arrHelmet2LVL = [
	// Mod: Stalker Stuff Gear
	"armst_Shemagh_Green",
	"armst_Shemagh_CheckGreen",
	"armst_Shemagh_Black",
	"armst_Shemagh_CheckBlack",
	"armst_Shemagh_White",
	"armst_Shemagh_CheckWhite",
	"armst_Shemagh_CheckBlue",
	"armst_Shemagh_Tan",
	"armst_Shemagh_CheckTan",
	"armst_Shemagh_CheckRed",
	"H_ShemagOpen_tan",
	"H_ShemagOpen_khk",
	"H_Shemag_olive",
	"armst_ACHHelmet",
	"armst_ACHHelmet_freedom",
	"armst_ACHHelmet_ACU",
	"armst_ACHHelmet_Un",
	"armst_CVCHelmet_Black",
	"armst_CVCHelmet_Green",
	"armst_CVCHelmet_Tan",
	"armst_merc_ech_helmet",
	"Skat",
	"Sfera",
	"armst_steel_helmet_glass",
	"armst_steel_helmet",
	"K6_3_ZV",
	"K6_3",
	"kaska_nem",
	"TIG",
	"TIG_ZV",
	"Vulkan_ZV",
	"Vulkan",
	"Altyn_ch_ch",
	"Altyn_ch_ber",
	"Altyn_ch",
	"Altyn_ZV",
	"Altyn",
	"Altyn_ch_ochki",
	"Altyn_ochki",
	"Rys_ochki",
	"Rys_ZV",
	"Rys",
	"Rys_ch",
	"Rys_ch_ochki",
	"armst_shlemMTP",
	"H_HelmetB_light_snakeskin",
	"armst_spart",
	"armst_spart2",
	"armst_spart3",
	"armst_spart4",
	"armst_spart5",
	"armst_spart_1_2",
	"armst_spart_1_22",
	"armst_spart_1_3",
	"armst_spart_1_4",
	"armst_spart_1_5",
	// Mod: Metro: The Last Station
	"scout_reich_helm",
	"heavy_reich_helmet",
	"rus_helm",
	// Mod: The Corporation DVK
	"dvk_corp_hblack",
	"dvk_corp_helih_up",
	"dvk_corp_hlight"
];
private _arrHelmet3LVL = [
	// Mod: Stalker Stuff Gear
	"armst_ratnik",
	"armst_ratnik_army",
	"armst_ratnik_orden",
	"armst_mask_orden",
	"armst_Exohelmet_army",
	"armst_Exohelmet_monolith",
	"armst_Exohelmet_freedom",
	"armst_Exohelmet",
	"armst_Exohelmet_dolg",
	"armst_Exohelmet_bandit",
	"armst_Exohelmet_merc",
	// Mod: S.T.A.L.K.E.R. + CBRN Equipment
	"SCE_Exo_Helmet_Bandit",
	"SCE_Exo_Helmet_Duty",
	"SCE_Exo_Helmet_Freedom",
	"SCE_Exo_Helmet_Loner",
	"SCE_Exo_Helmet_Mercenary",
	"SCE_Exo_Helmet_Military",
	"SCE_Exo_Helmet_Monolith"
];
private _arrBaseSeva = [
	// Mod: Stalker Stuff Gear
	"Armst_sevasvoboda2",
	"Armst_sevastalk",
	"Armst_sevastalk2",
	"Armst_sevastalk3",
	"Armst_sevastalk4",
	"Armst_sevastalk5",
	"Armst_sevastalk6",
	"Armst_seva_enoch",
	"Armst_sevaclearsky",
	"Armst_sevamonolith",
	"Armst_sevadolg",
	"Armst_sevasvoboda",
	"Armst_sevanaemnik",
	"Armst_sevavoen",
	"Armst_science_2",
	"Armst_science2",
	"Armst_seva_orden",
	"Armst_seva_champion",
	"Armst_coat_seva_stalk1_1",
	"Armst_coat_seva_stalk1_2",
	"Armst_coat_seva_stalk2_1",
	"Armst_coat_seva_stalk2_2",
	"Armst_coat_seva_stalk3_1",
	"Armst_coat_seva_stalk3_2",
	"Armst_coat_seva_stalk4_1",
	"Armst_coat_seva_stalk4_2",
	"Armst_coat_seva_stalk5_1",
	"Armst_coat_seva_stalk5_2",
	"Armst_coat_seva_stalk6_1",
	"Armst_coat_seva_stalk6_2",
	"Armst_coat_seva_clearsky_1",
	"Armst_coat_seva_clearsky_2",
	"Armst_coat_seva_duty_1",
	"Armst_coat_seva_duty_2",
	"Armst_coat_seva_freedom_1",
	"Armst_coat_seva_freedom_2",
	"Armst_coat_seva_freedom2_1",
	"Armst_coat_seva_freedom2_2",
	"Armst_coat_seva_merc_1",
	"Armst_coat_seva_champion",
	"Armst_coat_seva_orden",
	"Armst_ekzo_light",	
	"Armst_coat_seva_merc_2",
	// Mod: S.T.A.L.K.E.R. + CBRN Equipment
	"SCE_V_SEVA_ClearSky",
	"SCE_V_SEVA_Duty",
	"SCE_V_SEVA_Freedom_1",
	"SCE_V_SEVA_Freedom_2",
	"SCE_V_SEVA_Loner_1",
	"SCE_V_SEVA_Loner_2",
	"SCE_V_SEVA_Loner_3",
	"SCE_V_SEVA_Loner_4",
	"SCE_V_SEVA_Loner_5",
	"SCE_V_SEVA_Loner_6",
	"SCE_V_SEVA_Mercenary",
	"SCE_V_SEVA_Military",
	"SCE_V_SEVA_Monolith"
];
private _arrArmedSeva = [
	 "Armst_armed_seva_champion"
	,"Armst_armed_seva_svoboda2"
	,"Armst_armed_seva_stalk"
	,"Armst_armed_seva_stalk2"
	,"Armst_armed_seva_stalk3"
	,"Armst_armed_seva_stalk3"
	,"Armst_armed_seva_stalk4"
	,"Armst_armed_seva_stalk5"
	,"Armst_armed_seva_stalk6"
	,"Armst_armed_seva_clearsky"
	,"Armst_armed_seva_monolith"
	,"Armst_armed_seva_dolg"
	,"Armst_armed_seva_svoboda"
	,"Armst_armed_seva_naemnik"
	,"Armst_armed_seva_voen"
	,"Armst_armed_seva_orden"
];
private _arrAllBackpacksSeva = _arrBaseSeva + _arrArmedSeva;
private _arrSevaHelmets = [
	// Mod: Stalker Stuff Gear
	"armst_seva_champion_shlem",
	"armst_seva_shlem_dolg",
	"armst_seva_shlem",
	"armst_seva_shlem2",
	"armst_seva_shlem3",
	"armst_seva_shlem4",
	"armst_seva_shlem5",
	"armst_seva_shlem6",
	"armst_seva_shlem_merc",
	"armst_seva_shlem_monolith",
	"armst_seva_orden_shlem",
	"armst_seva_shlem_army",
	"armst_seva_shlem_clearsky",
	"armst_seva_shlem_freedom",
	"armst_seva_shlem_freedom2",
	"armst_seva_science_shlem",
	"armst_seva_science_shlem2",
	// Mod: S.T.A.L.K.E.R. + CBRN Equipment
	"SCE_H_SEVA_ClearSky",
	"SCE_H_SEVA_Duty",
	"SCE_H_SEVA_Freedom_1",
	"SCE_H_SEVA_Freedom_2",
	"SCE_H_SEVA_Loner_1",
	"SCE_H_SEVA_Loner_2",
	"SCE_H_SEVA_Loner_3",
	"SCE_H_SEVA_Loner_4",
	"SCE_H_SEVA_Loner_5",
	"SCE_H_SEVA_Loner_6",
	"SCE_H_SEVA_Mercenary",
	"SCE_H_SEVA_Military",
	"SCE_H_SEVA_Monolith"
];
private _arrSevaBackpacks = [
	// Mod: Stalker Stuff Gear
	"armst_seva_backpack_champion",
	"armst_seva_backpack_freedom2",
	"armst_seva_backpack_dolg",
	"armst_seva_backpack",
	"armst_seva_backpack2",
	"armst_seva_backpack3",
	"armst_seva_backpack4",
	"armst_seva_backpack5",
	"armst_seva_backpack6",
	"armst_seva_backpack_army",
	"armst_seva_backpack_orden",
	"armst_seva_backpack_clearsky",
	"armst_seva_backpack_freedom",
	"armst_seva_backpack_merc",
	"armst_seva_backpack_monolith",
	"armst_seva_science_backpack",
	"armst_seva_science_backpack_2",
	// Mod: S.T.A.L.K.E.R. + CBRN Equipment
	"SCE_B_SEVA_ClearSky",
	"SCE_B_SEVA_Duty",
	"SCE_B_SEVA_Freedom_1",
	"SCE_B_SEVA_Freedom_2",
	"SCE_B_SEVA_Loner_1",
	"SCE_B_SEVA_Loner_2",
	"SCE_B_SEVA_Loner_3",
	"SCE_B_SEVA_Loner_4",
	"SCE_B_SEVA_Loner_5",
	"SCE_B_SEVA_Loner_6",
	"SCE_B_SEVA_Mercenary",
	"SCE_B_SEVA_Military",
	"SCE_B_SEVA_Monolith"
];
private _arrGluharHeadgear = [
	 "armst_gluhar"
	,"armst_gluhar_army"
	,"armst_gluhar_science"
	,"armst_gluhar_science2"
	,"armst_gluhar_orden"
];
private _arrOtherBackpacks = [
	// Mod: Stalker Stuff Gear
	"armst_backpack_ballon_ESOC1g",
	"armst_backpack_ballon_ESOC2g",
	"armst_Bigbackpack_Filters_black",
	"armst_Bigbackpack_Filters_brown",
	"armst_Bigbackpack_Filters_green",
	"armst_backpack_ballon_samopal",
	"armst_backpack_ballon",
	"armst_backpack_ballon_black",
	// Mod: Vanilla
	"B_CombinationUnitRespirator_01_F",
	"B_SCBA_01_F",
	// Mod: S.T.A.L.K.E.R. + CBRN Equipment
	"SE_SEVA_Oxygen_Tank"
];

if ((headgear player) in  _arrHelmet1LVL) then {_protectHelmet = 20;};
if ((headgear player) in  _arrHelmet2LVL) then {_protectHelmet = 50;};
if ((headgear player) in  _arrHelmet3LVL) then {_protectHelmet = 100;};

if ((vest player) in  _arrVest1LVL) then {_protectVest = 50;};
if ((vest player) in  _arrVest2LVL) then {_protectVest = 50;};
if ((vest player) in  _arrVest3LVL) then {_protectVest = 100;};
if ((vest player) in  _arrVest4LVL) then {_protectVest = 100;};

switch (goggles player) do {
	// LEVEL 1 PROTECTION GEAR
	// Mod: Vanilla
	case "G_Respirator_blue_F",
	case "G_Respirator_white_F",		
	case "G_Respirator_yellow_F": {	
		_protect = 100;
	};
	// LEVEL 1 PROTECTION GEAR + BACKPACKS
	// Mod: Stalker Stuff Gear
	case "armst_R5",
	case "armst_R5_P",
	case "armst_R5_P_black",
	case "armst_R5_SH2",
	// Mod: Vanilla
	case "G_AirPurifyingRespirator_02_black_nofilter_F",
	case "G_AirPurifyingRespirator_02_olive_nofilter_F",
	case "G_AirPurifyingRespirator_02_sand_nofilter_F",
	case "G_AirPurifyingRespirator_01_nofilter_F": {
		_protect = 100;
		if ((backpack player in _arrOtherBackpacks)) then {
				_protect = _protect + 600;
		};
	};
	// LEVEL 2 PROTECTION GEAR
	// Mod: Stalker Stuff Gear
	case "armst_gasmaskBastard",
	case "armst_Gasslon",		
	case "armst_Gasslon_2",		
	case "armst_Gasscout",
	// Mod: S.T.A.L.K.E.R. + CBRN Equipment
	case "SE_PBF": { 
		_protect = 200;
	};				
	// LEVEL 2 PROTECTION GEAR + BACKPACKS
	// Mod: Stalker Stuff Gear
	case "armst_gasmaskM40_1",		
	case "armst_gasmaskM40",				
	case "armst_gasmaskM41",
	case "armst_respirator",
	// Mod: S.T.A.L.K.E.R. + CBRN Equipment
	case "SCE_G_M40_1",
	case "SCE_G_M40_2",
	case "SE_Respirator",
	case "SE_Respirator_Goggles",
	case "SE_Respirator_Goggles_Broken": {
		_protect = 200;
		if ((backpack player in _arrOtherBackpacks)) then {
				_protect = _protect + 500;
		};
	};
	// SCE Level 2 Damaged Variants
	case "SCE_G_M40_1_Broken",
	case "SCE_G_M40_2_Broken": {
		_protect = 100;
		if ((backpack player in _arrOtherBackpacks)) then {
				_protect = _protect + 500;
		};
	};
	// SCE Level 2 Damaged Variants [No backpack bonus]
	case "SE_PBF_Broken": {
		_protect = 100;
	};
	// LEVEL 3 PROTECTION GEAR
	// Mod: Stalker Stuff Gear
	case "armst_GasP5_2",
	case "armst_GasP5",
	case "armst_gasm20",
	case "armst_m33",
	case "armst_gasm50",
	case "armst_gasmaskM50_2",
	case "armst_gasmaskM50_2_multicam",
	case "armst_R5_P_filter",
	case "armst_R5_filter",
	case "armst_R5_SH2_filter",
	case "armst_GasBal",
	case "armst_GasBal_orden",
	case "armst_CN3p",
	case "armst_CN2f",
	case "armst_gasmask_albino_3",
	case "armst_gasmask_albino",
	case "armst_gasmask_albino_2",
	case "armst_M334_duty",
	case "armst_M334_2",
	case "armst_M334",
	case "armst_M334_freedom",
	// Mod: S.T.A.L.K.E.R. + CBRN Equipment
	case "SCE_G_CN2F",
	case "SCE_G_CN3P",
	case "SE_GP5",
	case "SCE_G_M334",
	case "CAU_G_CBRN_m50_3cd_hood",
	case "CAU_G_CBRN_m50_blk_hood",
	case "CAU_G_CBRN_m50_blue_hood",
	case "CAU_G_CBRN_m50_cadpat_hood",
	case "CAU_G_CBRN_m50_ce_hood",
	case "CAU_G_CBRN_m50_dcp_hood",
	case "CAU_G_CBRN_m50_ddpm_hood",
	case "CAU_G_CBRN_m50_dpm_hood",
	case "CAU_G_CBRN_m50_fleck_hood",
	case "CAU_G_CBRN_m50_flora_hood",
	case "CAU_G_CBRN_m50_gray_hood",
	case "CAU_G_CBRN_m50_green_hood",
	case "CAU_G_CBRN_m50_hoodless",
	case "CAU_G_CBRN_m50_jeitai_hood",
	case "CAU_G_CBRN_m50_m81_hood",
	case "CAU_G_CBRN_m50_m84_hood",
	case "CAU_G_CBRN_m50_m90_hood",
	case "CAU_G_CBRN_m50_mc_hood",
	case "CAU_G_CBRN_m50_mtp_hood",
	case "CAU_G_CBRN_m50_orange_hood",
	case "CAU_G_CBRN_m50_red_hood",
	case "CAU_G_CBRN_m50_tstripe_hood",
	case "CAU_G_CBRN_m50_tubitak_hood",
	case "CAU_G_CBRN_m50_ucp_hood",
	case "CAU_G_CBRN_m50_urban_hood",
	case "CAU_G_CBRN_m50_white_hood",
	case "CAU_G_CBRN_m50_winter_hood",
	case "CAU_G_CBRN_m50_yellow_hood",
	case "SE_PPM88",
	case "SE_M17",
	// Mod: Vanilla
	case "G_AirPurifyingRespirator_02_black_F",
	case "G_AirPurifyingRespirator_02_olive_F",
	case "G_AirPurifyingRespirator_02_sand_F",
	case "G_AirPurifyingRespirator_01_F",
	case "G_RegulatorMask_F",
	// Mod: CBRN Defense Unit - Remastered
	case "G_CBRN_A",
	case "G_CBRN_A_woodland",
	case "G_CBRN_A_multicam",
	// Mod: Fire Support Plus
	case "G_CBRN_M50",
	case "G_CBRN_M50_Hood": { 
		_protect = 400;
		if ((backpack player in _arrOtherBackpacks)) then {
				_protect = _protect + 300;
		};
	};
	// SCE Level 3 Damaged Variants
	case "SCE_G_M334_Broken",
	case "SE_M17_Broken",
	case "SE_PPM88_Broken",
	case "SE_GP5_Broken",
	case "CAU_G_CBRN_m50_3cd_hood_Broken",
	case "CAU_G_CBRN_m50_blk_hood_Broken",
	case "CAU_G_CBRN_m50_blue_hood_Broken",
	case "CAU_G_CBRN_m50_cadpat_hood_Broken",
	case "CAU_G_CBRN_m50_ce_hood_Broken",
	case "CAU_G_CBRN_m50_dcp_hood_Broken",
	case "CAU_G_CBRN_m50_ddpm_hood_Broken",
	case "CAU_G_CBRN_m50_dpm_hood_Broken",
	case "CAU_G_CBRN_m50_fleck_hood_Broken",
	case "CAU_G_CBRN_m50_flora_hood_Broken",
	case "CAU_G_CBRN_m50_gray_hood_Broken",
	case "CAU_G_CBRN_m50_green_hood_Broken",
	case "CAU_G_CBRN_m50_hoodless_Broken",
	case "CAU_G_CBRN_m50_jeitai_hood_Broken",
	case "CAU_G_CBRN_m50_m81_hood_Broken",
	case "CAU_G_CBRN_m50_m84_hood_Broken",
	case "CAU_G_CBRN_m50_m90_hood_Broken",
	case "CAU_G_CBRN_m50_mc_hood_Broken",
	case "CAU_G_CBRN_m50_mtp_hood_Broken",
	case "CAU_G_CBRN_m50_orange_hood_Broken",
	case "CAU_G_CBRN_m50_red_hood_Broken",
	case "CAU_G_CBRN_m50_tstripe_hood_Broken",
	case "CAU_G_CBRN_m50_tubitak_hood_Broken",
	case "CAU_G_CBRN_m50_ucp_hood_Broken",
	case "CAU_G_CBRN_m50_urban_hood_Broken",
	case "CAU_G_CBRN_m50_white_hood_Broken",
	case "CAU_G_CBRN_m50_winter_hood_Broken",
	case "CAU_G_CBRN_m50_yellow_hood_Broken": {
		_protect = 300;
		if ((backpack player in _arrOtherBackpacks)) then {
				_protect = _protect + 300;
		};
	};
	// LEVEL 4 PROTECTION
	// Mod: Stalker Stuff Gear
	case "armst_G100_2",
	case "armst_G100_science",
	case "armst_G100",
	case "armst_BioGasMaskG25",
	case "armst_GasP7",
	case "armst_gasmaskm04_4",
	case "armst_gasmaskm04s10",
	case "armst_gasmaskm04_2",
	case "armst_gasmaskm04_3",
	case "armst_gasmaskm04",
	case "armst_gasmasks10",
	case "armst_gasmasks10_flr",
	case "armst_gasmasks10_orden",
	case "armst_gasmasks10black",
	case "armst_gasmasks10_ttr",
	case "armst_gasmasks10_ppk",
	case "armst_gasmasks10_2",
	// Mod: S.T.A.L.K.E.R. + CBRN Equipment
	case "SE_GP21",
	case "SE_GP7",
	case "CAU_G_CBRN_m04_3cd_hood",
	case "CAU_G_CBRN_m04_blk_hood",
	case "CAU_G_CBRN_m04_blue_hood", 
	case "CAU_G_CBRN_m04_cadpat_hood",
	case "CAU_G_CBRN_m04_ce_hood",
	case "CAU_G_CBRN_m04_dcp_hood",
	case "CAU_G_CBRN_m04_ddpm_hood",
	case "CAU_G_CBRN_m04_dpm_hood",
	case "CAU_G_CBRN_m04_fleck_hood",
	case "CAU_G_CBRN_m04_flora_hood",
	case "CAU_G_CBRN_m04_gray_hood",
	case "CAU_G_CBRN_m04_green_hood",
	case "CAU_G_CBRN_m04_hoodless",
	case "CAU_G_CBRN_m04_jeitai_hood",
	case "CAU_G_CBRN_m04_m81_hood",
	case "CAU_G_CBRN_m04_m84_hood",
	case "CAU_G_CBRN_m04_m90_hood",
	case "CAU_G_CBRN_m04_mc_hood",
	case "CAU_G_CBRN_m04_mtp_hood",
	case "CAU_G_CBRN_m04_orange_hood",
	case "CAU_G_CBRN_m04_red_hood",
	case "CAU_G_CBRN_m04_tstripe_hood",
	case "CAU_G_CBRN_m04_tubitak_hood",
	case "CAU_G_CBRN_m04_ucp_hood",
	case "CAU_G_CBRN_m04_urban_hood",
	case "CAU_G_CBRN_m04_white_hood",
	case "CAU_G_CBRN_m04_winter_hood",
	case "CAU_G_CBRN_m04_yellow_hood",
	case "CAU_G_CBRN_s10_3cd",
	case "CAU_G_CBRN_s10_blk",
	case "CAU_G_CBRN_s10_blue",
	case "CAU_G_CBRN_s10_cadpat",
	case "CAU_G_CBRN_s10_ce",
	case "CAU_G_CBRN_s10_dcp",
	case "CAU_G_CBRN_s10_ddpm",
	case "CAU_G_CBRN_s10_dpm",
	case "CAU_G_CBRN_s10_fleck",
	case "CAU_G_CBRN_s10_flora",
	case "CAU_G_CBRN_s10_gray",
	case "CAU_G_CBRN_s10_green",
	case "CAU_G_CBRN_s10_jeitai",
	case "CAU_G_CBRN_s10_m81",
	case "CAU_G_CBRN_s10_m84",
	case "CAU_G_CBRN_s10_m90",
	case "CAU_G_CBRN_s10_mc",
	case "CAU_G_CBRN_s10_mtp",
	case "CAU_G_CBRN_s10_orange",
	case "CAU_G_CBRN_s10_red",
	case "CAU_G_CBRN_s10_tstripe",
	case "CAU_G_CBRN_s10_tubitak",
	case "CAU_G_CBRN_s10_ucp",
	case "CAU_G_CBRN_s10_urban",
	case "CAU_G_CBRN_s10_white",
	case "CAU_G_CBRN_s10_winter",
	case "CAU_G_CBRN_s10_yellow",
	case "SE_S10",
	// Mod: The Corporation DVK
	case "dvk_corp_gasmask_g",
	case "dvk_corp_gasmask_b2_g",
	// Mod: CBRN Defense Unit - Remastered
	case "G_CBRN_B",
	case "G_CBRN_B_black",
	case "G_CBRN_B_blue",
	case "G_CBRN_B_green",
	case "G_CBRN_C_blue",
	case "G_CBRN_C_orange",
	case "G_CBRN_C_red",
	case "G_CBRN_C_white",
	case "G_CBRN_C_yellow",
	// Mod: Fire Support Plus
	case "G_CBRN_M04",
	case "G_CBRN_M04_Hood",
	case "G_CBRN_S10": {
		_protect = 700;
		if ((backpack player in _arrOtherBackpacks)) then {
				_protect = _protect + 300;
		};
	};
	// SCE Level 4 Damaged Variants
	case "SE_GP21_Broken",
	case "SE_GP7_Broken",
	case "CAU_G_CBRN_m04_3cd_hood_Broken",
	case "CAU_G_CBRN_m04_blk_hood_Broken",
	case "CAU_G_CBRN_m04_blue_hood_Broken", 
	case "CAU_G_CBRN_m04_cadpat_hood_Broken",
	case "CAU_G_CBRN_m04_ce_hood_Broken",
	case "CAU_G_CBRN_m04_dcp_hood_Broken",
	case "CAU_G_CBRN_m04_ddpm_hood_Broken",
	case "CAU_G_CBRN_m04_dpm_hood_Broken",
	case "CAU_G_CBRN_m04_fleck_hood_Broken",
	case "CAU_G_CBRN_m04_flora_hood_Broken",
	case "CAU_G_CBRN_m04_gray_hood_Broken",
	case "CAU_G_CBRN_m04_green_hood_Broken",
	case "CAU_G_CBRN_m04_hoodless_Broken",
	case "CAU_G_CBRN_m04_jeitai_hood_Broken",
	case "CAU_G_CBRN_m04_m81_hood_Broken",
	case "CAU_G_CBRN_m04_m84_hood_Broken",
	case "CAU_G_CBRN_m04_m90_hood_Broken",
	case "CAU_G_CBRN_m04_mc_hood_Broken",
	case "CAU_G_CBRN_m04_mtp_hood_Broken",
	case "CAU_G_CBRN_m04_orange_hood_Broken",
	case "CAU_G_CBRN_m04_red_hood_Broken",
	case "CAU_G_CBRN_m04_tstripe_hood_Broken",
	case "CAU_G_CBRN_m04_tubitak_hood_Broken",
	case "CAU_G_CBRN_m04_ucp_hood_Broken",
	case "CAU_G_CBRN_m04_urban_hood_Broken",
	case "CAU_G_CBRN_m04_white_hood_Broken",
	case "CAU_G_CBRN_m04_winter_hood_Broken",
	case "CAU_G_CBRN_m04_yellow_hood_Broken",
	case "CAU_G_CBRN_s10_3cd_Broken",
	case "CAU_G_CBRN_s10_blk_Broken",
	case "CAU_G_CBRN_s10_blue_Broken",
	case "CAU_G_CBRN_s10_cadpat_Broken",
	case "CAU_G_CBRN_s10_ce_Broken",
	case "CAU_G_CBRN_s10_dcp_Broken",
	case "CAU_G_CBRN_s10_ddpm_Broken",
	case "CAU_G_CBRN_s10_dpm_Broken",
	case "CAU_G_CBRN_s10_fleck_Broken",
	case "CAU_G_CBRN_s10_flora_Broken",
	case "CAU_G_CBRN_s10_gray_Broken",
	case "CAU_G_CBRN_s10_green_Broken",
	case "CAU_G_CBRN_s10_jeitai_Broken",
	case "CAU_G_CBRN_s10_m81_Broken",
	case "CAU_G_CBRN_s10_m84_Broken",
	case "CAU_G_CBRN_s10_m90_Broken",
	case "CAU_G_CBRN_s10_mc_Broken",
	case "CAU_G_CBRN_s10_mtp_Broken",
	case "CAU_G_CBRN_s10_orange_Broken",
	case "CAU_G_CBRN_s10_red_Broken",
	case "CAU_G_CBRN_s10_tstripe_Broken",
	case "CAU_G_CBRN_s10_tubitak_Broken",
	case "CAU_G_CBRN_s10_ucp_Broken",
	case "CAU_G_CBRN_s10_urban_Broken",
	case "CAU_G_CBRN_s10_white_Broken",
	case "CAU_G_CBRN_s10_winter_Broken",
	case "CAU_G_CBRN_s10_yellow_Broken",
	case "SE_S10_Broken": {
		_protect = 600;
		if ((backpack player in _arrOtherBackpacks)) then {
				_protect = _protect + 300;
		};
	};
	// LEVEL 5 PROTECTION
	// Mod: Stalker Stuff Gear
	case "armst_seva_visor",
	// Mod: S.T.A.L.K.E.R. + CBRN Equipment
	case "SCE_G_SEVA_HELMET_VISOR": {
		if ((headgear player) in _arrSevaHelmets) then {			
			if ((vest player) in _arrAllBackpacksSeva) then {		
				if ((backpack player) in _arrSevaBackpacks) then {
					_protectVest = 0;
					_protectHelmet = 0;
					_protect = 3000;
				};				
			};
		};		
	};
	case "SCE_G_SEVA_HELMET_VISOR_Broken": {
		if ((headgear player) in _arrSevaHelmets) then {			
			if ((vest player) in _arrAllBackpacksSeva) then {		
				if ((backpack player) in _arrSevaBackpacks) then {
					_protectVest = 0;
					_protectHelmet = 0;
					_protect = 200;
				};				
			};
		};		
	};
	case "SE_SEVA_Visor": {
		if ((uniform player) in _arrSevaUniforms) then {			
			if ((backpack player) in _arrOtherBackpacks) then {
				_protectVest = 0;
				_protectHelmet = 0;
				_protect = 3000;
			};
		};
	};
	case "SE_SEVA_Visor_Broken": {
		if ((uniform player) in _arrSevaUniforms) then {			
			if ((backpack player) in _arrOtherBackpacks) then {
				_protectVest = 0;
				_protectHelmet = 0;
				_protect = 200;
			};
		};
	};
	// Mod: Stalker Stuff Gear
	case "armst_gluhar_visor": {
		if ((headgear player) in  _arrGluharHeadgear) then {	
			if ((vest player) in  _arrAllBackpacksSeva) then {
				if ((backpack player in _arrOtherBackpacks)) then {
				_protectVest = 0;
				_protectHelmet = 0;
				_protect = 3000;
				player setVariable ["ARMST_BODYTEMP", 1];
				ARMST_BODYTEMP = 37.6;	
				};
			};
		};
	};
	default {};
};

		
switch (headgear player) do {
	case "armst_enclave_gashelmet",
	case "armst_enclave_gashelmet2": {
		_protectHelmet = 200;
		player unassignItem(goggles player);
		if ((backpack player in _arrOtherBackpacks)) then {
			_protectHelmet = _protectHelmet + 500;
		};
	};
	case "armst_bulat_shlem",
	case "armst_bulat_shlem_dolg",
	case "armst_order_helmet_phantom",
	case "armst_order_helmet3",
	case "armst_order_helmet": {
		_protectHelmet = 400;
		player unassignItem(goggles player);
		if ((backpack player in _arrOtherBackpacks)) then {
			_protectHelmet = _protectHelmet + 300;
		};
	};
	// Mod: Metro: The Last Station
	case "gas_mask_03": {
		_protectHelmet = 200;
	};
	default {};
};

switch (hmd player) do {
	// Mod: The Corporation DVK
	case "dvk_corp_gasmask",
	case "dvk_corp_gasmask_b2": {
		_protect = 700;
		player unassignItem(goggles player);
		if ((backpack player in _arrOtherBackpacks)) then {
			_protect = _protect + 300;
		};
	};
	default {};
};


Current_Defence_Level = _protect + _protectHelmet + _protectVest;
((_level - _protect - _protectHelmet - _protectVest) max 0)