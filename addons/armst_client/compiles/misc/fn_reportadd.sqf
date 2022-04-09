/*
      Author: Aloe <itfruit@mail.ru>
      
      Description: Добавляет шаблон в реестр модуля
      
      Parameter(s):
	_templateName 	(String)  - имя шаблона
      _template 		(Array)  - шаблон 
      _active			(Bool)  (Optional)  - активирован по умолчанию. По умолчанию: true
      
      Return: Nothing
*/
	
	if (isNil "ARMST_reportTemplates") then {ARMST_reportTemplates = []};
	
	if (params [["_templateName", "", [""]], ["_template", ["",""], [[]]]]) then {
		
		private _active = param [2, true];
		private _value = [_active, _template];
		[ARMST_reportTemplates, _templateName, _value] call BIS_fnc_addToPairs;

		["", format ["Report template added %1 (default active - %2)", _templateName, _active]] call ARMST_fnc_report;
	};