/*
	Author: Vladimir Vorobev <Dragster>
	E-mail:1dragsteron@gmail.com

	Description:
	Create Structured Text on display with absolete position

	Parameter(s):
		0 :	DISPLAY - 
		1 : CONTROLSGROUP - parent controls group
		2 :	IDC - id control
		3 :	POSITION - array as [x,y,w,h]
		4 :	TEXT - text on button
		5 :	TEXTCOLOR - hexcolor
		6 :	BACKGROUNDCOLOR - array as [0,0,0,1]
		7 :	FONT - font

	Returns:
	CONTROL
*/
	disableSerialization;
	params ["_display","_parent","_idc","_position","_text","_font","_size","_color","_align","_shadow","_sizeMultiplier",["_valign","top"]];
	private ["_ctrl"];
	_ctrl = _display ctrlCreate ["RscStructuredText", _idc, _parent];
	_ctrl ctrlSetPosition _position;
	_ctrl ctrlSetStructuredText (parseText format ["<t shadow='%6' font='%5' align='%4' size='%2' color='%3' valign='%7'>%1</t>", _text,_size * _sizeMultiplier,_color, _align,_font,_shadow,_valign]);
	_ctrl ctrlEnable false;
	_ctrl ctrlCommit 0;
	_ctrl