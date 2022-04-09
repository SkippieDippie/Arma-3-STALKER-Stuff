/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Фокус на определённый слой рабочего столя
	
	Parameter(s):
		_layer 		(String | Number) - название слоя или конкретный  IDC
		
*/
	#include "..\module.sqf";
	
	params ["_layer"];
	
	disableSerialization;
	private _display = uiNamespace getVariable ["ARMST_Terminal_Display", displayNull];
	private _control = controlNull;
	
	if !(isNull _display) then {
		if (_layer isEqualType "") then {
			switch (_layer) do {
				case "CURRENT_APP": {
					_control = _display displayCtrl module(CurrentPageApp);
				};
				default {};
			};
		} else {
			_control =  _display displayCtrl  _layer;
		};
		
		if !(isNull _control) then {ctrlSetFocus _control};
	};



	
	