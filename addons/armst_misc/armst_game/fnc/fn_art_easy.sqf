/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

private ["_replacement","_unit", "_class", "_freeSpace", "_usedSpace", "_magLoad", "_slots", "_neededSpace","_artefacttype","_respawndata","_respawnpos","_respawntime","_respawnradius"];

_artefact = _this select 0;
_artefacttype = typeOf _artefact;
_unit = player;
if (_artefact isKindOf "ARMST_ART_atom") then {_replacement="ARMST_ART_atom";}; 
if (_artefact isKindOf "ARMST_ART_ball") then {_replacement="ARMST_ART_ball";}; 
if (_artefact isKindOf "ARMST_ART_baloon") then {_replacement="ARMST_ART_baloon";}; 
if (_artefact isKindOf "ARMST_ART_bat") then {_replacement="ARMST_ART_bat";}; 
if (_artefact isKindOf "ARMST_ART_battery") then {_replacement="ARMST_ART_battery";}; 
if (_artefact isKindOf "ARMST_ART_black_angel") then {_replacement="ARMST_ART_black_angel";}; 
if (_artefact isKindOf "ARMST_ART_blood") then {_replacement="ARMST_ART_blood";}; 
if (_artefact isKindOf "ARMST_ART_cell") then {_replacement="ARMST_ART_cell";}; 
if (_artefact isKindOf "ARMST_ART_chelust") then {_replacement="ARMST_ART_chelust";}; 
if (_artefact isKindOf "ARMST_ART_cocoon") then {_replacement="ARMST_ART_cocoon";}; 
if (_artefact isKindOf "ARMST_ART_compass") then {_replacement="ARMST_ART_compass";}; 
if (_artefact isKindOf "ARMST_ART_control") then {_replacement="ARMST_ART_control";}; 
if (_artefact isKindOf "ARMST_ART_cristall") then {_replacement="ARMST_ART_cristall";}; 
if (_artefact isKindOf "ARMST_ART_cristall_flower") then {_replacement="ARMST_ART_cristall_flower";}; 
if (_artefact isKindOf "ARMST_ART_cristall_plant") then {_replacement="ARMST_ART_cristall_plant";}; 
if (_artefact isKindOf "ARMST_ART_dragon_eye") then {_replacement="ARMST_ART_dragon_eye";}; 
if (_artefact isKindOf "ARMST_ART_dummy") then {_replacement="ARMST_ART_dummy";}; 
if (_artefact isKindOf "ARMST_ART_ear") then {_replacement="ARMST_ART_ear";}; 
if (_artefact isKindOf "ARMST_ART_electra_flash") then {_replacement="ARMST_ART_electra_flash";}; 
if (_artefact isKindOf "ARMST_ART_electron") then {_replacement="ARMST_ART_electron";}; 
if (_artefact isKindOf "ARMST_ART_eye") then {_replacement="ARMST_ART_eye";}; 
if (_artefact isKindOf "ARMST_ART_fire") then {_replacement="ARMST_ART_fire";}; 
if (_artefact isKindOf "ARMST_ART_fire_loop") then {_replacement="ARMST_ART_fire_loop";}; 
if (_artefact isKindOf "ARMST_ART_fireball") then {_replacement="ARMST_ART_fireball";}; 
if (_artefact isKindOf "ARMST_ART_fonar") then {_replacement="ARMST_ART_fonar";}; 
if (_artefact isKindOf "ARMST_ART_fountain") then {_replacement="ARMST_ART_fountain";}; 
if (_artefact isKindOf "ARMST_ART_generator") then {_replacement="ARMST_ART_generator";}; 
if (_artefact isKindOf "ARMST_ART_gimplet") then {_replacement="ARMST_ART_gimplet";}; 
if (_artefact isKindOf "ARMST_ART_glass") then {_replacement="ARMST_ART_glass";}; 
if (_artefact isKindOf "ARMST_ART_glassbeads") then {_replacement="ARMST_ART_glassbeads";}; 
if (_artefact isKindOf "ARMST_ART_gold_fish") then {_replacement="ARMST_ART_gold_fish";}; 
if (_artefact isKindOf "ARMST_ART_grapes") then {_replacement="ARMST_ART_grapes";}; 
if (_artefact isKindOf "ARMST_ART_gravi") then {_replacement="ARMST_ART_gravi";}; 
if (_artefact isKindOf "ARMST_ART_kaply") then {_replacement="ARMST_ART_kaply";}; 
if (_artefact isKindOf "ARMST_ART_kislushka") then {_replacement="ARMST_ART_kislushka";}; 
if (_artefact isKindOf "ARMST_ART_kogot") then {_replacement="ARMST_ART_kogot";}; 
if (_artefact isKindOf "ARMST_ART_kolobok") then {_replacement="ARMST_ART_kolobok";}; 
if (_artefact isKindOf "ARMST_ART_lighthouse") then {_replacement="ARMST_ART_lighthouse";}; 
if (_artefact isKindOf "ARMST_ART_medalion") then {_replacement="ARMST_ART_medalion";}; 
if (_artefact isKindOf "ARMST_ART_medusa") then {_replacement="ARMST_ART_medusa";}; 
if (_artefact isKindOf "ARMST_ART_mica") then {_replacement="ARMST_ART_mica";}; 
if (_artefact isKindOf "ARMST_ART_mincer_meat") then {_replacement="ARMST_ART_mincer_meat";}; 
if (_artefact isKindOf "ARMST_ART_moh") then {_replacement="ARMST_ART_moh";}; 
if (_artefact isKindOf "ARMST_ART_moonlight") then {_replacement="ARMST_ART_moonlight";}; 
if (_artefact isKindOf "ARMST_ART_myasorubka") then {_replacement="ARMST_ART_myasorubka";}; 
if (_artefact isKindOf "ARMST_ART_needles1") then {_replacement="ARMST_ART_needles1";}; 
if (_artefact isKindOf "ARMST_ART_night_star") then {_replacement="ARMST_ART_night_star";}; 
if (_artefact isKindOf "ARMST_ART_plenka") then {_replacement="ARMST_ART_plenka";}; 
if (_artefact isKindOf "ARMST_ART_psi_field") then {_replacement="ARMST_ART_psi_field";}; 
if (_artefact isKindOf "ARMST_ART_repei") then {_replacement="ARMST_ART_repei";}; 
if (_artefact isKindOf "ARMST_ART_sandstone") then {_replacement="ARMST_ART_sandstone";}; 
if (_artefact isKindOf "ARMST_ART_serofim") then {_replacement="ARMST_ART_serofim";}; 
if (_artefact isKindOf "ARMST_ART_signet") then {_replacement="ARMST_ART_signet";}; 
if (_artefact isKindOf "ARMST_ART_slug") then {_replacement="ARMST_ART_slug";}; 
if (_artefact isKindOf "ARMST_ART_snowflake") then {_replacement="ARMST_ART_snowflake";}; 
if (_artefact isKindOf "ARMST_ART_soul") then {_replacement="ARMST_ART_soul";}; 
if (_artefact isKindOf "ARMST_ART_spaika") then {_replacement="ARMST_ART_spaika";}; 
if (_artefact isKindOf "ARMST_ART_sparkler") then {_replacement="ARMST_ART_sparkler";}; 
if (_artefact isKindOf "ARMST_ART_star_phantom") then {_replacement="ARMST_ART_star_phantom";}; 
if (_artefact isKindOf "ARMST_ART_sun") then {_replacement="ARMST_ART_sun";}; 
if (_artefact isKindOf "ARMST_ART_tapeworm") then {_replacement="ARMST_ART_tapeworm";}; 
if (_artefact isKindOf "ARMST_ART_vyvert") then {_replacement="ARMST_ART_vyvert";}; 
if (_artefact isKindOf "ARMST_ART_zhelch") then {_replacement="ARMST_ART_zhelch";}; 


if (_unit canAdd _replacement) then {
	
if ('armst_arthelp' in items _unit) then 
		{
		["Picking up artifact with the tools..."] call ace_common_fnc_displayTextStructured;   
		}
		else
		{
				if ('armst_gloves' in items _unit) then 
				{
				["Picking up artifact with the gloves.."] call ace_common_fnc_displayTextStructured;
				[player, 0.1, "rightarm", "unknown"] call ace_medical_fnc_addDamageToUnit;
				[player, 0.1, "leftarm", "unknown"] call ace_medical_fnc_addDamageToUnit;
				} 
				else 
				{
				[player, 0.2, "rightarm", "unknown"] call ace_medical_fnc_addDamageToUnit;
				[player, 0.2, "leftarm", "unknown"] call ace_medical_fnc_addDamageToUnit;
				};
		};


    _unit addmagazine _replacement;
	{
	detach _artefact;
	} forEach attachedObjects player;
	{_obj_type = typeOf _x;
	if (_obj_type == "#lightpoint") then 
    {
	deleteVehicle _x;
	};
	} forEach attachedObjects _artefact;
	deleteVehicle _artefact;
   
	} else {
   [localize "str_Armst_noempty"] call ace_common_fnc_displayTextStructured;   
};
