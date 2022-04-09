/*
	Author: Aloe <itfruit@mail.ru>
	Email: itfruit@mail.ru

	Description: Запись логов по шаблонам
	
	Parameter(s):
	  _templateName 	(String)  - имя шаблона
	  _message			(String | Array of strings)  - сообщение, строка или массив строк
	  _type 				(String)   тип сообщения ( Log | Error )
*/
	
	if (isNil "ARMST_reportTemplates") then {ARMST_reportTemplates = []};
	
	params [["_templateName", ""], ["_message", "", ["", []]], ["_type", "Log"]];
	private ["_template", "_activate"];
	
	if (typeName _message == "STRING") then {_message = [_message]};
	
	_template =  [ARMST_reportTemplates, _templateName, []] call BIS_fnc_getFromPairs;

	if !(_template isEqualTo []) then {
		_activate = _template select 0;
		_template = _template select 1;
		
		if (_activate) then {
			switch (toUpper _type) do {
				case "LOG" : {
					{
						diag_log  format ["%1 %2", _template select 0, _x];
					} foreach _message;
				};
				case "ERROR" : {
					{
						diag_log  format ["%1 %2", _template select 1, _x];
					} foreach _message;
				};
				default {};
			};
		};
	} else {
		{diag_log _x} foreach _message;
	};
	
	