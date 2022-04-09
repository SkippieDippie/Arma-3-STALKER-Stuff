/*
	Author: Vladimir Vorobev <Dragster>
	E-mail:1dragsteron@gmail.com

	Description:
	Create combobox on display

	Parameter(s):
		0 :	DISPLAY - 
		1 : CONTROLSGROUP - parent controls group
		2 :	IDC - id control
		3 :	POSITION - array as [x,y,w,h]
		4 :	TEXT - text on button
		5 :	TEXTCOLOR - array as [0,0,0,1]
		6 :	BACKGROUNDCOLOR - array as [0,0,0,1]
		7 :	FONT - font

	Returns:
	CONTROL
*/
	disableSerialization;
	params ["_display","_parent","_idc","_position","_text","_backgroundColor","_textColor","_font","_sizeMultiplier","_size"];
	private _ctrl = _display ctrlCreate ["RscEdit", _idc, _parent];
	_ctrl ctrlSetPosition _position;
	_ctrl ctrlSetBackgroundColor _backgroundColor;
	_ctrl ctrlSetText _text;
	_ctrl ctrlSetTextColor _textColor;
	_ctrl ctrlSetFont _font;
	_ctrl ctrlSetFontHeight (0.034 * _size * _sizeMultiplier);
	_ctrl ctrlEnable true;
	_ctrl ctrlCommit 0;
	_ctrl