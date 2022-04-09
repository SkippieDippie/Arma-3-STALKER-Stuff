	/*
	Author: Aloe
		
	Description:
	Send spawn module log
		
	Parameter(s):
	_this select 0: <object> module
	_this select 1: <string> log

	*/
	
	params ["_module", "_log"];

	switch (_module getVariable ["DebugType", nil]) do {
		case 1 : {systemChat _log};
		case 2 : {diag_log _log};
		default {};
	};