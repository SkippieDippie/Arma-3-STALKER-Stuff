/*
	Author: Aloe <itfruit@mail.ru>
	Description:  Обработка ответа на запрос авторизации 
*/

	#include "..\module.sqf";
	
	params ["_status", "_response", "_steamID"];
	// diag_log format["AAAAADDDDD:   %1 ASD %2",_status,_steamID];
	if (_steamID != (getPlayerUID player)) exitWith {};
	
	switch (_status) do {
	
		case "ok" : {
		
			private _unit = _response select 0;
			private _character = _response select 1;
			
			if !(isNull _unit) then {
			
				private _dummy = player;
				selectPlayer _unit;
				deleteVehicle _dummy;
				
				//private _isNew = _character select model_auth_isnew;
				private _canSelect = (missionConfigFile >> "ARMST_DefaultCharacter" >> "canFactionSelect") call BIS_fnc_getCfgDataBool;
				
				[_character, _canSelect] spawn {
					params ["_character", "_canSelect"];
					
					try {
						if (_canSelect && module(SelectedFaction) isEqualTo "") then {
						
							call app(Loadscreen,End);
							createDialog "SelectFactionDialog";
							
							waitUntil {uiSleep 0.1; !(module(SelectedFaction) isEqualTo "")};
							
							if !(faction player isEqualTo module(SelectedFaction)) then {
								
								[player, module(SelectedFaction)] remoteExec ["ARMST_Account_ChangeFaction", 2];
								
							} else {
								throw true;
							};
						} else {
							throw true;
						};
					} catch {
					
						[_character] call app(Player,HandlerAuthed);
		
						module(Authed) = true;
						module(AuthedResponse) = "Ok";
					};
				};
			} else {
				call app(Initialization,MissionEnd);
			};
		};
		
		case "wrongname" : {
			
			call app(Loadscreen,End);
			createDialog "DeniedScreen";
			with uiNamespace do {
				(ARMST_DeniedScreen displayCtrl IDC_DENIED_DIALOG_MESSAGE) ctrlSetStructuredText (parseText format [localize "str_accessdenied_wrongnick", _response select 0]);
			};
			uiSleep 15;
			call app(Initialization,MissionEnd);
		};
		
		default {
			call app(Initialization,MissionEnd);
		};
	};
	
	