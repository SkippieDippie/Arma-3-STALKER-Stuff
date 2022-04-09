/*
	Author: Vladimir Vorobev <Dragster>
	E-mail:1dragsteron@gmail.com

	Description:
	Create DRG_ListBox on display

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
	params ["_display","_parent","_idc","_position","_bgcolor","_textColor","_enable","_fontheight"];
	private _ctrl = _display ctrlCreate ["DrgRscTradeCategoryListBox", _idc, _parent];
	_ctrl ctrlSetPosition _position;
	_ctrl ctrlSetBackgroundColor _bgcolor;
	_ctrl ctrlSetTextColor _textColor;
	_ctrl ctrlEnable _enable;
	_ctrl ctrlSetFontHeight _fontheight;
	_ctrl ctrlCommit 0;
	_ctrl