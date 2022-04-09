/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

armst_render = 
{
   PP_colorC = ppEffectCreate ["ColorCorrections",20005];
   PP_colorC ppEffectEnable true;
   PP_colorC ppEffectAdjust [_this select 1, _this select 2, _this select 3,
                            [_this select 4, _this select 5, _this select 6, _this select 7],
                            [_this select 8, _this select 9, _this select 10, _this select 11],
                            [_this select 12, _this select 13, _this select 14, _this select 15],
                            [_this select 16, _this select 17, _this select 18, _this select 19, _this select 20, 0,4]];
   PP_colorC ppEffectCommit 0;
};

ARMST_BACKPACK_LOCK = {
private["_container","_unit"];
if(count _this == 1) exitWith {false};
_unit = _this select 0;
_container = _this select 1;

_isPack = getNumber(configFile >> "CfgVehicles" >> (typeOf _container) >> "isBackpack");
if(_isPack == 1) then {
	hint "Рюкзак закрыт";
	[] spawn {
		waitUntil {!isNull (findDisplay 602)};
		closeDialog 0;
	};
	uisleep 2;
	hint "Рюкзак закрыт";
	[] spawn {
		waitUntil {!isNull (findDisplay 602)};
		closeDialog 0;
	};
};
};		

ARMST_MASK = ["Armst_BalaclavaFreed"
		,"Armst_balaclava_dolg"
		,"Armst_balaclava_voen"
		,"G_Bandanna_aviator"
		,"armst_bandana"
		,"G_Bandanna_beast"
		,"G_Bandanna_tan"
		,"G_Bandanna_oli"
		,"G_Bandanna_sport"
		,"G_Bandanna_shades"
		,"G_Bandanna_khk"
		,"G_Bandanna_blk"
		,"armst_band_balaclava_3"
		,"armst_band_balaclava_2"
		,"armst_band_balaclava"
		,"armst_bandanaGlass"
		,"armst_MESHOK"
		,"armst_G100"
		,"armst_BioGasMaskG25"
		,"armst_GasP5"
		,"armst_GasP7"
		,"armst_gasm20"
		,"armst_gasm50"
		,"armst_Gasscout"
		,"armst_gasmaskM40"
		,"armst_Gasslon"
		,"armst_gasmaskm04"
		,"armst_gasmasks10"
		,"armst_gasmasks10black"
		,"armst_M334"
		,"armst_gasmaskM50_2"
		,"armst_gasmaskBastard"
		,"armst_R5_SH2_filter"
		,"armst_R5_SH2"
		,"armst_R5_P_filter"
		,"armst_R5_P"];	

ARMST_S_SIDOR = [
				"sidor_script1a_1",
				"sidor_script1a_2",
				"sidor_script1a_3",
				"sidor_script1a_4",
				"sidor_script1a_5",
				"sidor_script1a_6",
				"sidor_script1b_1",
				"sidor_script1b_2",
				"sidor_script1b_3",
				"sidor_script1b_4",
				"sidor_script1b_5",
				"sidor_script1b_6",
				"sidor_script1c_1",
				"sidor_script1c_2",
				"sidor_script1c_3",
				"sidor_script1c_4",
				"sidor_script1c_5",
				"sidor_script1c_6",
				"sidor_script1c_7",
				"sidor_script1c_8",
				"sidor_script1c_9",
				"sidor1a",
				"sidor1b",
				"sidor3a",
				"sidor3b",
				"sidor3c"
				];
ARMST_S_BARMEN = [
				"barmen_script1a_1",
				"barmen_script1a_2",
				"barmen_script1a_3",
				"barmen_script1a_4",
				"barmen_script1a_5",
				"barmen_script1a_6",
				"barmen_script1b_1",
				"barmen_script1b_2",
				"barmen_script1b_3",
				"barmen_script1b_4",
				"barmen_script1b_5",
				"barmen_script1b_6",
				"barmen_script1c_1",
				"barmen_script1c_2",
				"barmen_script1c_3",
				"barmen_script1c_4",
				"barmen_script1c_5",
				"barmen_script1c_6",
				"barmen_script1c_7",
				"barmen_script1c_8",
				"barmen_script1c_9",
				"barmen1a",
				"barmen1b",
				"barmen3a",
				"barmen3b",
				"barmen3c"
				];
ARMST_S_BAndit = [
				"bandit_ojil",
				"bandit_soobrajay",
				"bandit_ti_usnul",
				"bandit_vikladivay"
				];
ARMST_S_radiopomehi = [
				"radio_voice_1",
				"radio_voice_2",
				"radio_voice_3",
				"radio_noise_2",
				"radio_noise_1",
				"aes_2chopers_attack",
				"aes_actor_hunt",
				"aes_blockpost_battle",
				"aes_blowout_1",
				"aes_blowout_3",
				"aes_bridge_ambush_1",
				"aes_bridge_ambush_2",
				"aes_choper_down_3",
				"aes_choper_anomaly",
				"aes_choper_crush",
				"aes_choper_down_1",
				"aes_choper_down_2",
				"aes_choper_hunt",
				"aes_choper_hunt_1",
				"aes_choper_hunt_2",
				"aes_choper_patrol",
				"aes_chopers_begin",
				"aes_chopers_begin_1",
				"aes_chopers_begin_2",
				"aes_chopers_begin_3",
				"aes_commander_out",
				"aes_desant_gate",
				"aes_desant_gate2",
				"aes_desant_more",
				"aes_desant_more_1",
				"aes_desant_more_2",
				"aes_desant_proceed_part_1",
				"aes_desant_proceed_part_2",
				"aes_desant_proceed_part_3",
				"aes_desant_proceed_part_4",
				"aes_desant_proceed2",
				"aes_desant_proceed3",
				"aes_enter_battle_1",
				"aes_first_desant_wave",
				"aes_forth_desant_wave",
				"aes_monsters",
				"aes_monsters_ambush",
				"aes_road_battle",
				"aes_road_battle_2",
				"aes_road_battle_3",
				"aes_road_battle_4",
				"aes_road_battle_5",
				"aes_road_battle_6",
				"aes_road_battle_7",
				"aes_road_battle_8",
				"aes_rpg_1",
				"aes_rpg_2",
				"aes_rpg_3",
				"aes_second_desant_wave",
				"aes_sniper_desant",
				"aes_sniper_talk",
				"aes_snipers_out",
				"aes_third_desant_wave",
				"aes_unknown_weapon",
				"aes_seven_desant_wave"
				];
	