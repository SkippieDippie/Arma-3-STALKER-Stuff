/*
	Author: Vladimir Vorobev <Dragster>
	E-mail:1dragsteron@gmail.com

	Description:
	Create listbox on display

	Parameter(s):
		0 :	DISPLAY - 
		1 : CONTROLSGROUP - parent controls group
		2 :	IDC - id control
		3 :	POSITION - array as [x,y,w,h]
		4 :	COLOR - array as [0,0,0,1]
		5 :	TEXTCOLOR - array as [0,0,0,1]
		6 :	ENABLE - bool true or false

	Returns:
	CONTROL
*/
	disableSerialization;
	params ["_display","_parent","_idc","_position","_color","_textColor","_enable"];
	private _ctrl = _display ctrlCreate ["RscPdaListBox", _idc, _parent];
	_ctrl ctrlSetPosition _position;
	_ctrl ctrlSetBackgroundColor _color;
	_ctrl ctrlSetTextColor _textColor;
	_ctrl ctrlEnable _enable;
	_ctrl ctrlCommit 0;
	_ctrl