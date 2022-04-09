/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Обработчик события использования предмета
	
	Parameter(s):\
		_itemClass 		(String) - тип класса
		_text 			(String) - текст
	
	Return: (Nothing)
*/
	#include "..\module.sqf";
	
	params ["_itemClass", ["_text", ""]];
	
	if (!(_itemClass == module(EmptyPaperClass)) && _text isEqualTo "") then {
	
		[player, _itemClass] remoteExecCall ["ARMST_Papers_requestPaperText", 2];
	
	} else {
	
		private _ctrl = [_text, 2] call module(OpenItemDialog);
		if !(isNull _ctrl) then {
			
			missionNamespace setVariable [module(ctrlPaperLastTextVar), ctrlText _ctrl];
			_ctrlEhKeyDown = _ctrl ctrlAddEventHandler ["KeyDown", module(EHTypeText)];
			
			waitUntil {UiSleep 0.1; isNull _ctrl};
			
			private _paperText = missionNamespace getVariable [module(ctrlPaperLastTextVar), ""];
			if !(_paperText isEqualTo "") then {
				if (_itemClass isEqualTo module(EmptyPaperClass)) then {
					
					[player, _paperText] remoteExecCall ["ARMST_Papers_addUniquePaper", 2]; 
					
				} else {
					
					[_itemClass, _paperText] remoteExecCall ["ARMST_Papers_updUniquePaper", 2];
					
				};
			};
		};
	
	};





