	/*
		Author: Aloe
			
		Description:
		Hide / Show object

		Parameter(s):
		_this select 0: <Object> object
		_this select 1: <Bool>  show
	*/
	
	params ["_object", "_show"];
	
	if (!_show) then {
		if (!isNil {_object getVariable "isVisible"}) then {
			_object hideObjectGlobal true;
			_object setVariable ["isVisible", nil];
		};
	}else{
		if (isNil {_object getVariable "isVisible"}) then {
			_object hideObjectGlobal false;
			_object setVariable ["isVisible", true];
		};
	};

	