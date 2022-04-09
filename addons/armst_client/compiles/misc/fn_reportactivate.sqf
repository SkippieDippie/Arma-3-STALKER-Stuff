/*
      Author: Aloe <itfruit@mail.ru>
      
      Description: активирует / деактивирует шаблон
      
      Parameter(s):
	_templateName 	(String)  - имя шаблона
      _activate	(Bool)   активировать
      
      Return: Nothing
*/
	if (isNil "ARMST_reportTemplates") then {ARMST_reportTemplates = []};
	
	if (params [["_templateName", "", [""]], ["_activate", true, [true]]]) then {
		private ["_value"];
		
		private _find = [ARMST_reportTemplates, _templateName] call BIS_fnc_findInPairs;
		if (_find >= 0) then {
			private _value = ARMST_reportTemplates select _find;
			[ARMST_reportTemplates, _templateName, [_activate, _value select 1]] call BIS_fnc_setToPairs;
		};
		
		["", format ["Report template %1  active - %2", _templateName, _activate]] call ARMST_fnc_report;
	};