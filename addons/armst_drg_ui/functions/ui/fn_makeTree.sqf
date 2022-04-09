/*
	Author: Vladimir Vorobev <Dragster>
	E-mail:1dragsteron@gmail.com

	Description:
	Create text on display

	Parameter(s):
		0 :	DISPLAY - 
		1 : CONTROLSGROUP - parent controls group
		2 :	IDC - id control
		3 :	POSITION - array as [x,y,w,h]
		4 : ENABLE - set enable or disable control

	Returns:
	CONTROL
*/
	disableSerialization;
	params ["_display","_parent","_idc","_position", "_enable"];
	private _ctrl = _display ctrlCreate ["RscTree", _idc, _parent];
	_ctrl ctrlSetPosition _position;
	_ctrl ctrlEnable _enable;
	_ctrl ctrlCommit 0;
	_ctrl