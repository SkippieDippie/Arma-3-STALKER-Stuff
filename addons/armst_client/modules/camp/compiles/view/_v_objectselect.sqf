/*
	Author: Aloe <itfruit@mail.ru>

	Description: Фокусировка камеры на объект
	
	Parameter(s):
		_control			(Control) - список
		_index				(Control) - индекс элемента
	
	Return: (Nothing)
*/

	#include "..\..\module.sqf";
	
	params ["_control", "_index"];
	
	private _display = findDisplay IDC_RSCDISPLAYCAMPVIEWER;
	private _control = _display displayCtrl IDC_RSCCONTROL_OBJECTS_TREE;
	
	if !(_display isEqualTo displayNull || _control isEqualTo controlNull) then {

		private _object = missionNamespace getVariable [_control tvData _index, objNull];
		if !(_object isEqualTo objNull) then {
			
			private _cam = uinamespace getvariable [stringify(module(Camera)),objnull];
			private _logic = uinamespace getvariable [stringify(module(CameraLogic)),objnull];
			private _target = uinamespace getvariable [stringify(module(CameraTarget)),objnull];
			private _campos = uinamespace getvariable [stringify(module(CameraPos)),objnull];
			
			//Set Focus to Object (TODO: Easy and smoothness)
			_targetPos = position _object;
			_logicPos = position _logic;
			
			_target attachTo [_logic, [
				((_logicPos select 0) - (_targetPos select 0)) max (-50) min (+50),
				((_logicPos select 1) - (_targetPos select 1)) max (-50) min (+50),
				0
			], ""];
			
			_dis = _campos select 0;
			_dirH = _campos select 1;
			_dirV = _campos select 2;
			
			_cam attachTo [_target, [[0, 0, sin _dirV * _dis], cos _dirV * _dis, _dirH] call bis_fnc_relpos, ""];
			_cam campreparetarget _target;
			_cam camcommitprepared 0;
			
		};

	};
	
	