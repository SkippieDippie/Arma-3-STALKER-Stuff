/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

	params["_unit"];
	private["_player","_radio"];       
	player removeItem 'AGM_CableTie';
	[_unit, true] call AGM_Captives_fnc_setCaptive;
	_radio = assignedItems _unit;
	format ["%1", getPlayerUID player] remoteExecCall ["hint", _unit];
	_hr = [_unit] call drg_fnc_findRadioWithType; 
	if (_hr select 0) then {
		_radio = _hr select 1;
		_unit unlinkItem _radio;
		_holder = createVehicle ["GroundWeaponHolder", position _unit, [], 0,"CAN_COLLIDE"];
		_holder addItemCargoGlobal [_radio, 1];
	};
	[] remoteExec ["drg_fnc_closeDisplays",_unit];