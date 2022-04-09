/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

	params [["_pos", [0,0,0]], ["_radius", 0], ["_count", 1]];
	private ["_trg1", "_trigPos"];

	_trg1 = createTrigger ["EmptyDetector", _pos];
	_trg1 setTriggerArea [_radius, _radius, 0, false];
	_trg1 setTriggerActivation ["NONE", "PRESENT", false];
	_trg1 setTriggerStatements ["true","",""]; 

	_trigPos = getPosATL _trg1;

	for "_i" from 0 to (_count - 1) do {
		private ["_randPos", "_hundle"];
		
		_randPos = [_trg1] call BIS_fnc_randomPosTrigger;
		_trg1 setPosATL _randPos;
		
		_hundle = [_trg1, "хуй", true] spawn BIS_fnc_moduleLightning;
		waitUntil {sleep 0.3; scriptDone _hundle};
		terminate _hundle;
		
		_trg1 setPosATL _trigPos;
		
	sleep 0.4;
	};

	deleteVehicle _trg1;