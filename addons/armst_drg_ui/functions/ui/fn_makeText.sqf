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
		4 :	TEXT - text
		5 :	TEXTCOLOR - array as [0,0,0,1]
		6 :	BACKGROUNDCOLOR - array as [0,0,0,1]
		7 :	FONTHEIGHT - font height
		8 : ENABLE - set enable or disable control
		9 : TOOLTIP - set tooltip on control

	Returns:
	CONTROL
*/
	disableSerialization;
	params ["_display","_parent","_idc","_position","_text","_textColor","_fontheight", "_enable", "_tooltip"];
	private _ctrl = _display ctrlCreate ["RscText", _idc, _parent];
	_ctrl ctrlSetPosition _position;
	_ctrl ctrlSetText _text;
	_ctrl ctrlSetTextColor _textColor;
	_ctrl ctrlSetFontHeight _fontheight;
	_ctrl ctrlEnable _enable;
	_ctrl ctrlSetTooltip _tooltip;
	_ctrl ctrlCommit 0;
	_ctrl