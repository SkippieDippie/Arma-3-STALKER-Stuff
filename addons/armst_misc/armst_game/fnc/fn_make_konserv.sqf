/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
	
private _arrEAT = [
"Armst_mut_boar",
"Armst_mut_wolfalpha",
"Armst_mut_wolfhound",
"Armst_mut_werewolf",
"Armst_mut_watcher",
"Armst_mut_upir",
"Armst_mut_wolf",
"Armst_mut_tushkano_meat",
"Armst_mut_snork",
"Armst_mut_dog_pechen",
"Armst_mut_izlom",
"Armst_mut_krovosos_heart",
"Armst_mut_psevdogigant_heart",
"Armst_mut_burer_heart",
"Armst_mut_cat",
"Armst_mut_psevdog",
"Armst_mut_cat_zeleza"
],

if (_arrVest1LVL in items player) then {
["Консерва готова."] call ace_common_fnc_displayTextStructured;
player removeitem "ARMST_metalolom";
_nearestTargets = nearestObjects [player, ["Box_FIA_Ammo_F"], 80];
{ _x addItemCargoGlobal  ["Armst_item_can", 4]; } forEach _nearestTargets;
}
else 
{
["Ну так мяса то нет, консерву впустую..."] call ace_common_fnc_displayTextStructured;
player removeitem "ARMST_metalolom";
};