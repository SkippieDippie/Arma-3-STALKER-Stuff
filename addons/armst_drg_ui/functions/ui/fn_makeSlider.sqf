/*
	Author: Vladimir Vorobev <Dragster>
	E-mail:1dragsteron@gmail.com

	Description:
	Create slider

	Parameter(s):
		0 :	DISPLAY - 
		1 : CONTROLSGROUP - parent controls group
		2 :	IDC - id control
		3 :	POSITION - array as [x,y,w,h]
		4 :	RANDE - array as [min,max]
		5 :	DEFPOS slider - number

	Returns:
	CONTROL
*/
	disableSerialization;
	params ["_display","_parent","_idc","_position","_range","_defpos"];
	private _ctrl = _display ctrlCreate ["RscSlider", _idc, _parent];
	_ctrl ctrlSetPosition _position;
	_ctrl sliderSetRange _range;
	_ctrl sliderSetPosition _defpos;
	_ctrl ctrlCommit 0;
	_ctrl