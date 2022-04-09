
	/*
		Author: Aloe
		Description:
		Create camera for trader
		
		Parameter(s):
		unit <Object> - trader
		
		Returns:
		<Camera> created camera
	*/
	#include "..\module.sqf";
	
	params ["_trader"];
	private ["_showcase", "_camRelPos", "_camFOV","_cam"];

	_showcase =  _trader getVariable ["ShowcaseGlobal", objNull];
	_camRelPos =  _trader getVariable ["CamRelPos", []];
	_camFOV =  _trader getVariable ["CamFOV", 0];
	
	if (_camRelPos isEqualTo []) then {_camRelPos = [0, 0.4, 1.5]};
		
	if !(isNull _showcase) then {

		cutText ["","BLACK OUT"];
		player playAction "Civil";
		cutText ["","BLACK IN", 2];
		
		disableSerialization;
		createDialog "tradeDialog";
		
		_cam = "camera" camCreate [getPosATL player select 0, getPosATL player select 1, 1.5];
		_cam cameraEffect ["internal", "Back"];
		_cam camSetTarget (_showcase);
		_cam camSetRelPos _camRelPos;
		_cam camSetFOV _camFOV;
		_cam camSetFocus [50,0];
		_cam camCommit 0.75;
		
		showCinemaBorder false; 
		
	}else{
		["ARMST TRADE: Can`t find showcase for trader ""%1""", _trader call BIS_fnc_objectVar] call BIS_fnc_error;
	};

_cam