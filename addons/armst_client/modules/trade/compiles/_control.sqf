	/*
		Author: Aloe
		Description:
		Trade control keypressed event hundler
		
	*/
	#include "..\module.sqf";
	
	[_this select 1] params ["_dikCode"];
	private["_handler"];

	_handler = false;
	
	if(_dikCode == 14 or _dikCode == 1) then {
		module(ControlIndex) = 0;
		closeDialog 0;
		_handler = true;
	};

	if(_dikCode in (actionKeys "TurnLeft")) then {
		module(ControlIndex) = 1;
	};

	if(_dikCode in (actionKeys "TurnRight")) then {
		module(ControlIndex) = 2;
	};

	if(_dikCode == 28)  then {
		module(ControlIndex) = 3; 
	};

	_handler;