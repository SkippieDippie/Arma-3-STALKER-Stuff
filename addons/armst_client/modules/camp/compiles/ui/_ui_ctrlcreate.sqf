/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Создание контрола
	
	Parameter(s):
		_mode 			(String) - 
		_position 		(Array) - позиция
		_idc 			(Scalar) - идс
		_ctrlParent 	(Control) - родитель

	Return: (Control)
*/
	
	#include "..\..\module.sqf";
	
	params [["_mode", "", [""]], ["_position", [], [[]]], ["_idc", -1, [0]], ["_ctrlParent", controlNull, [controlNull]]];
	
	private _pW = pixelW * 5 * (getResolution select 0) / 1920;
	private _pH = pixelH * 5 * (getResolution select 1) / 1080;
	
	private _control = controlNull;
	private _display = findDisplay IDC_RSCDISPLAYCAMPVIEWER;

	if !(_display isEqualTo displayNull) then {
	
		switch (_mode) do {
						
			case "ctrlGroup" : {
			
				_control = _display ctrlCreate ["RscControlsGroupNoScrollbars", _idc];
				_control ctrlSetPosition _position;
				_control ctrlCommit 0;

			};
			
			case "ctrlText" : {
				
				_control = _display ctrlCreate ["RscText", _idc];
				_control ctrlSetPosition _position;
				_control ctrlCommit 0;
				
			};
			
			case "ctrlTree" : {
				
				_control =  [_display, _ctrlParent, _idc, _position, true] call DRG_fnc_makeTree;
				_control ctrlSetBackgroundColor [0,0,0,0.7];
				_control ctrlCommit 0;
				
			};
			
			case "ctrlButton" : {
				
				_control = _display ctrlCreate ["outlw_MR_RscButtonMenu", _idc, _ctrlParent];
				_control ctrlSetPosition _position;
				_control ctrlSetTextColor [1, 1, 1, 1];
				_control ctrlSetBackgroundColor [0, 0, 0, 1];
				_control ctrlSetFont "RobotoCondensed";
				_control ctrlSetFontHeight 0.05;
				_control ctrlEnable false;
				_control ctrlCommit 0;
			
			};
			
			case "ctrlXListBox" : {
			
				_control = _display ctrlCreate ["RscXListBox", _idc, _ctrlParent];
				_control ctrlSetPosition _position;
				_control ctrlCommit 0;
				
			};
			
			case "ctrlListBox" : {
			
				_control = _display ctrlCreate ["RscListBox", _idc, _ctrlParent];
				_control ctrlSetPosition _position;
				_control ctrlSetFontHeight 0.03;
				_control ctrlCommit 0;
				
			};
			
			case "ctrlEdit" : {
			
				_control = _display ctrlCreate ["RscEdit", _idc, _ctrlParent];
				_control ctrlSetPosition _position;
				_control ctrlSetFontHeight 0.03;
				_control ctrlCommit 0;
				
			};
		
		
		};
	
	
	
	};
	
	_control;