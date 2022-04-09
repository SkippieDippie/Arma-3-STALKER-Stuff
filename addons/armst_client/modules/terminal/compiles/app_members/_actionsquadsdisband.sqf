/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Рассформирование отряда / исключение из отряда
	
	Parameter(s):
		_control 		(Control)
	
*/
	#include "..\..\module.sqf";
	
	params ["_control"];

	private _display =  ctrlParent _control;
	
	private _controlGrpTree = (_display displayCtrl IDC_TERMINAL_PAGE_PER_SQD_LIST_SQUADS);
	private _index = tvCurSel _controlGrpTree;
	
	try {
		if (count _index > 1) throw "USER";
		if (count _index isEqualTo 1) throw "GROUP";
	} catch {
	
		switch (_exception) do {
			case "USER": {
				private _unit = (_controlGrpTree tvData _index) call BIS_fnc_objectFromNetId;
				if !(isNull _unit) then {
					[group _unit, _unit] call module(SquadDisband);
				};
			};
			case "GROUP" : {
				private _group = (_controlGrpTree tvData _index) call BIS_fnc_groupFromNetId;
				if !(isNull _group) then {
					[_group] call module(SquadDisband);
				};
			};
		};
		
		[_display, _display displayCtrl module(CurrentPageApp)] call module(LoadPage);
	};
	