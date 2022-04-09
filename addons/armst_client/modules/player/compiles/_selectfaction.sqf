/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Выбор фракции через диалог
	
	Parameter(s):
		_control 		(Control) - контрол
		
*/
	#include "..\module.sqf";
	
	params ["_control"];

	private _defaultFaction = getText (missionConfigFile >> "ARMST_DefaultCharacter" >> "faction");
	
	private _selectedFaction = switch (ctrlIDC _control) do {
	
		case IDC_SELECTFACTION_1 : {"ARMST_FREEDOM"};
		case IDC_SELECTFACTION_2 : {"ARMST_DOLG"};
		case IDC_SELECTFACTION_3 : {"ARMST_MONOLITH"};
		case IDC_SELECTFACTION_4 : {"ARMST_BANDITS"};
		case IDC_SELECTFACTION_5 : {"ARMST_STALKER"};
		default {_defaultFaction};
		
	};
	
	module(SelectedFaction) = _selectedFaction;
	
	cutText ["","BLACK FADED", 0];
	closeDialog 0;
	
	[] spawn {
		waitUntil {uiSleep .1; module(Authed)};
		cutText ["","BLACK IN", 3];
	};


	