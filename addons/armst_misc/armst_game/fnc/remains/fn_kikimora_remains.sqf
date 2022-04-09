/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

private["_unit", "_player"];      
_unit = _this select 0;        
_weapons = handgunWeapon player;
	if (true) then
	{       
		player say2d "sound_remains";
		//[12, player, "armst_empty",localize "str_mutant_progress", "armst_abort"] spawn AGM_Core_fnc_progressBar;
		player playmove "AinvPknlMstpSnonWnonDnon_medic_1";
		waitUntil {animationState player != "AinvPknlMstpSnonWnonDnon_medic_1"}; 
		if (isNil {_unit getVariable "RemainsEmpty"} && (!alive _unit)) then 
			{
				player addItem "Armst_mut_kikimora";
				_unit setVariable ["RemainsEmpty", true, true];
				[localize "str_remain_complete"] call ace_common_fnc_displayTextStructured;
			};
	};
	