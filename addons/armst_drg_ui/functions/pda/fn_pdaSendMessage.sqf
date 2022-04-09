/*
	author: 		Dragster
	e-mail:			1dragsteron@gmail.com
	file: 			fn_pdaSendMessage.sqf
	version: 		1.00
	date: 			09.03.2017	
	purpose: 			
	arguments: 		_type - <String> - type message "ls","lsa","all" or "faction"
					_message - <String> - text message
					_name - <String> - uid player
	return value:	none

	example call: 		["ls","Hello!","76561198047143253"] spawn drg_fnc_pdaSendMessage;
*/

params [["_type",""],["_message",""],["_uid",""]];
private ["_emblem","_fullmes"];

if (_type == "") exitWith {};
if (_message == "") exitWith {hint localize "STR_DRG_pda_empty_message";};
if (_uid == "" && (_type in ["ls","lsa"])) exitWith {hint localize "STR_DRG_pda_no_select";};
if (_uid == (getPlayerUID player)) exitWith {hint localize "STR_DRG_pda_no_send_me";};
switch (_type) do { 
	case "ls" : {
	    drg_remoteMessageServer = ["local", "hintpda", _message, player , _type, _uid];
	    publicVariableServer "drg_remoteMessageServer";
	}; 
	case "lsa" : {
	    drg_remoteMessageServer = ["local", "hintpda", _message, player , _type, _uid];
	    publicVariableServer "drg_remoteMessageServer";
	}; 
	case "all" : {
		if (player getVariable ["armst_pda_web",0] == 0) then {
		    drg_remoteMessageServer = ["all", "hintpda", _message, player , _type];
		    publicVariableServer "drg_remoteMessageServer";
			player setvariable ["armst_pda_web",1,true];
			uiSleep 30;
			player setvariable ["armst_pda_web",0,true];
		} else {
			["Unable to send"] call ace_common_fnc_displayTextStructured;
		};
	}; 
	case "faction" : {
	    drg_remoteMessageServer = ["faction", "hintpda", _message, player , _type];
	    publicVariableServer "drg_remoteMessageServer";
	}; 
};
player say2d "pda_song";