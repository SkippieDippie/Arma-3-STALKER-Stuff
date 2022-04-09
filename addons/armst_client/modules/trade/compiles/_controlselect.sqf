/*
		Author: Aloe
		Description:
		Trade camera control selector. _selector variable will be changed 
		
		Parameter(s):
		select type <String> - Prev or Next or Reset
		selector <String> - Currenr selector
		limit  <Number> - Selector limit
*/
	
	#include "..\module.sqf";
	params ["_stream", "_trade", "_limitSelector"];
	
	private _limit = count _trade;
	private _selector = module(_Selector);
	
	module(_ControlStream) = _stream;
	
	switch (_stream) do {
		case "Prev" : {
			 _selector set [1, (_selector select 1) - 1];
			if ((_selector select 1) < 0) then {
				if (((_selector select 0) - 1) < 0) then {
					_selector = [_limit - 1, count (_trade select (_limit - 1)) - 1];
				} else {
					private _secIdx = (_selector select 0) - 1;
					_selector = [_secIdx, count ((_trade select _secIdx) select 1) - 1];
				};
			};
		};
		case "Next" : {
			_selector set [1, (_selector select 1) + 1];
			if ((_selector select 1) >= _limitSelector) then {
				if (((_selector select 0) + 1) >= _limit) then {
					_selector = [0, 0];
				} else {
					_selector = [(_selector select 0) +1, 0];
				};
			};
		};
		default {};
	};
	
	module(_Selector) = _selector;
	module(ControlIndex) = 4;
	
	