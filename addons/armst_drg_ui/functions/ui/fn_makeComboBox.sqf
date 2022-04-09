/*
	Author: Vladimir Vorobev <Dragster>
	E-mail:1dragsteron@gmail.com

	Description:
	Create combobox

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
	params ["_display","_parent","_idc","_position","_text","_txcolor","_bgcolor"];
	private _ctrl = _display ctrlCreate ["RscCombo", _idc, _parent];
	_ctrl ctrlSetPosition _position;
	_ctrl ctrlSetText _text;
	_ctrl ctrlSetTextColor _txcolor;
	_ctrl ctrlSetBackgroundColor _bgcolor;
	_ctrl ctrlCommit 0;
	_ctrl