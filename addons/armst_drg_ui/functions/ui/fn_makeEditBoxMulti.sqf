/*
	Author: Vladimir Vorobev <Dragster>
	E-mail:1dragsteron@gmail.com

	Description:
	Create editboxMulti on display

	Parameter(s):
		0 :	DISPLAY - 
		1 : CONTROLSGROUP - parent controls group
		2 :	IDC - id control
		3 :	POSITION - array as [x,y,w,h]
		4 :	TEXTCOLOR - array as [0,0,0,1]
		5 :	BACKGROUNDCOLOR - array as [0,0,0,1]
		6 :	FONTHEIGHT - font height
		7 : ENABLE - set enable or disable control
		8 : TOOLTIP - set tooltip on control

	Returns:
	CONTROL
*/
	disableSerialization;
	params ["_display","_parent","_idc","_position","_textColor", "_bgcolor", "_enable", "_tooltip"];
	private _ctrl = _display ctrlCreate ["RscEditMulti", _idc, _parent];
	_ctrl ctrlSetPosition _position;
	_ctrl ctrlSetTextColor _textColor;
	_ctrl ctrlSetBackgroundColor _bgcolor;
	_ctrl ctrlEnable _enable;
	_ctrl ctrlSetTooltip _tooltip;
	_ctrl ctrlCommit 0;
	_ctrl