	_unit = _this select 0;

	removeAllWeapons _unit;
	removeAllItems _unit;
	removeAllAssignedItems _unit;
	removeUniform _unit;
	removeVest _unit;
	removeBackpack _unit;
	removeHeadgear _unit;
	removeGoggles _unit;
	
	armst_BackpackTypes = ["ARMST_RUKZAK","ARMST_RUKZAK_GREEN","ARMST_RUKZAK_BLACK","ARMST_RUKZAK_BLACKBLUE","ARMST_RUKZAK_GREENCAMO",
						"ARMST_RUKZAK_BLACK2","ARMST_RUKZAK_BLUE1","ARMST_RUKZAK_GREEN1","ARMST_RUKZAK_GRAY","ARMST_SUMKA1",
						"ARMST_SUMKA3_voen","ARMST_SUMKA5","ARMST_SUMKA6","ARMST_SUMKA7","ARMST_SUMKA8",
						"ARMST_SUMKA9","ARMST_SUMKA10","ARMST_SUMKA11","ARMST_SUMKA12","ARMST_band_sumka"];
	armst_VestTypes = ["6B3","p_ak","p2_ak","Kora","V_BandollierB_blk","armst_i_nbs_vest","armst_cn_vest_easy","armst_cn_vest_hard","armst_harness1_black","armst_Modular2_tan","tarzan_ch","armst_tactical1_black","V94_OM_ch","V94_ch","def_molle_easy","Kora_p2_ak","Kora","Rys_m","Rys_m_kora","armst_sevastalk","armst_old_sevastalk","armst_old_sevastalk3","Smersh_AK","Smersh_def_AK_gp","Smersh_def_SVD_army"];
	armst_HatTypes = ["H_Bandanna_cbr","H_Bandanna_sand","H_Bandanna_sgg","H_Bandanna_blu","H_Bandanna_khk","H_Bandanna_gry","H_Cap_grn","H_Cap_tan","H_Cap_oli","H_Cap_blk","H_Booniehat_khk","armst_cap_army","armst_cap_band","armst_cap_merc",
	"armst_kepka_gop","H_Bandanna_mcamo","H_Bandanna_surfer","armst_Shemagh_Black","armst_Shemagh_CheckTan","armst_shlem_altyn",
	"armst_ushanka","armst_CVCHelmet_Black","Skat","TIG","Vulkan","Altyn_ochki"];
	armst_Glasses = ["G_Aviator","G_Squares","G_Spectacles","G_Bandanna_tan","G_Bandanna_oli","G_Bandanna_sport","G_Bandanna_blk","armst_cigar_face","G_Shades_Black","G_Spectacles_Tinted","G_Lowprofile","armst_one_eye","armst_beard","armst_beard_2","armst_beard3_2","armst_beard2_2","armst_beard5_2","armst_gasmaskBastard"]; 
	armst_Weapons = ["AV_spas12","ARMST_REMINGTON870","ARMST_OBREZ_FULL","av_obrez","ARMST_MP153","av_toz34","av_fort500","arifle_av_aks74","arifle_av_ak74","arifle_av_ak74m","arifle_av_aksu","av_an94","arifle_av_akm","arifle_av_akm_gp","av_mos","srifle_av_svd","ARMST_SKS","USSR_GUITAR","arifle_av_groza","arifle_av_bizon"]; 
	
	_armst_BackpackTypes = armst_BackpackTypes select floor random count armst_BackpackTypes;
	_armst_VestTypes = armst_VestTypes select floor random count armst_VestTypes;
	_armst_HatTypes = armst_HatTypes select floor random count armst_HatTypes;
	_armst_Glasses = armst_Glasses select floor random count armst_Glasses;
	_armst_Weapons = armst_Weapons select floor random count armst_Weapons;
	
	
	_unit addBackpack _armst_BackpackTypes;
	_unit addVest _armst_VestTypes;
	_unit addHeadgear _armst_HatTypes;
	_unit addGoggles _armst_Glasses;
	_unit addWeapon _armst_Weapons;
	_pWeap = primaryWeapon _unit;
	_unit addItem  "AGM_Bandage";
	_unit addItem  "AGM_Bandage";
	_unit addItem  "AGM_Bandage";
	_unit addItem  "AGM_Bandage";
	_unit addItem  "AGM_Bandage";
	_unit addItem  "AGM_Bandage";
	_unit addItem  "armst_item_medkit";
	_unit addItem  "AGM_Morphine";
	{_unit addMagazine ((getArray (configfile >> "CfgWeapons" >> _pWeap >> "magazines")) select 0)} forEach [1,2,3,4,5]; 