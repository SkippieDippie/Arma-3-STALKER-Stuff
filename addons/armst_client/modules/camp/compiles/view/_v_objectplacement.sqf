/*
	Author: Aloe <itfruit@mail.ru>

	Description: Размещение объекта
	
	Parameter(s):

	Return: (Nothing)
*/



	#include "..\..\module.sqf";
	
	params ["_object"];
	
	private _target = uiNamespace getVariable [stringify(module(TargetObject)), objNull];
	_target setDir (getDir _object);
	
	private _attachPos = [0, 0, 0.5];
	
	while {!isNull module(_ObjectIsMoving)} do {
		
		private _LRMB =  uiNamespace getVariable [stringify(module(CameraButtons)), [[],[]]];
		private _LMB = count (_LRMB select 0) > 0;
		private _RMB = count (_LRMB select 1) > 0;
		
		private _keys = uiNamespace getVariable [stringify(module(AddinationKeys)), [false, false, false, false]];
		private _mouse = uiNamespace getVariable [stringify(module(MousePosition)), [0,0]];
		
		_keys params [["_shift", false], ["_ctrl", false], ["_alt", false], ["_esc", false]];
		
		if (_ctrl) then {
		
			_object setDir ([_object, AGLToASL (screenToWorld _mouse)] call BIS_fnc_dirTo);
		};
		
		if (_alt) then {
		
			private _y = _attachPos select 2;
			private _mSc = (1 - ((_mouse select 1) max 0)) min 1;
			private _oSc = (1 - (((worldToScreen getPos _object) select 1) max 0)) min 1;
			
			_attachPos = [0, 0, ((_y + (_mSc - _oSc)) min 20) max 0];
		};
		
		if (_LMB || _esc) then {
		
			uiNamespace setVariable [stringify(module(CameraButtons)), [[],[]]];
			uiNamespace setVariable [stringify(module(AddinationKeys)), [false, false, false, false]];
			
			module(_ObjectIsMoving) = objNull;
			
		};
		
		_object attachTo [_target, _attachPos, ""];
		
		sleep 0.05;
	};
