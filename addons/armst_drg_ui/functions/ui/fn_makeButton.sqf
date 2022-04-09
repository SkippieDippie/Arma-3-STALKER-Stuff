/*
	Author: Vladimir Vorobev <Dragster>
	E-mail:1dragsteron@gmail.com

	Description:
	Create button

	Parameter(s):
		0 :	DISPLAY - 
		1 : CONTROLSGROUP - parent controls group
		2 :	IDC - id control
		3 :	POSITION - array as [x,y,w,h]
		4 :	(optional)TEXT - text on button
		5 :	(optional)FADE - number from 0 to 1
		6 :	(optional)ENABLE - bool true or false

	Returns:
	CONTROL
*/
	disableSerialization;
	params ["_display","_parent","_idc","_position",["_text",""],["_fade",0],["_enable",true]];
	private _ctrl = _display ctrlCreate ["RscButton", _idc, _parent];
	_ctrl ctrlSetPosition _position;
	_ctrl ctrlSetText _text;
	_ctrl ctrlSetFade _fade;
	_ctrl ctrlEnable _enable;
	_ctrl ctrlCommit 0;
	_ctrl