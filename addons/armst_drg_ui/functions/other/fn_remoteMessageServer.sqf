/*
    Author: Vladimir Vorobev <Dragster>
    E-mail:1dragsteron@gmail.com

    Description:
    Function for server EventHandler remote messages

    Parameter(s):
        _typeSend 		-  String - Type remote messages "local" - to one client, "all" - to all clients, 
		_typeMessage	-  String - Type message to client "hint" or "systemchat"
		_message		- String - Message
		_sender			- Object - Player who send the message
		_type 			- String - Type - la,lsa,faction,all
		_targetUid		- String - UID client - if message is local

    Returns:
    	NONE 			["local", "hintpda", _message, player , _type, _uid]
*/
	params [["_typeSend",""], ["_typeMessage",""], ["_message",""], ["_sender",objNull], ["_type",""], ["_targetUid",""]];
	if (_typeSend == "") exitWith {};
	if (_typeMessage == "") exitWith {};
	if (_message == "") exitWith {};
    private _tarUnit = objNull;
    if (_targetUid != "") then {
        _tarUnit = [_targetUid] call drg_fnc_findPlayerByUID;
    };
	switch (_type) do { 
		case "ls",
		case "lsa" : { ["PDALog",format["<type: %1> < %2(%3) от %4(%5) >  <message: %6>",_typeSend,name _tarUnit,getPlayerUID _tarUnit,name _sender,getPlayerUID _sender,_message]] call DRG_serverToLogFile; }; 
		case "faction" : { ["PDALog",format["<type: %1>< %2 от %3(%4) >  <message: %5>",_typeSend,(faction _tarUnit),name _sender,getPlayerUID _sender,_message]] call DRG_serverToLogFile;  }; 
		case "all" : { ["PDALog",format["<type: %1> < Всем от %2(%3) >  <message: %4>",_typeSend,name _sender,getPlayerUID _sender,_message]] call DRG_serverToLogFile;[getPlayerUID _sender,_message] spawn drgs_fnc_tosite }; 
		default {
			["OtherLog",format["[DRG_REM_LOG] <type: %1> <message: %2>",_typeSend,_message]] call DRG_serverToLogFile;
		};
	};
	switch (_typeSend) do { 
		case "local" : {
			private _unit=objNull;
			{
				if ((getPlayerUID _x) isEqualTo _targetUid) exitWith {
					_unit=_x;
				};	    
			} count playableUnits;
			private _ownID = owner _unit;
			drg_remoteMessageClient = [_typeMessage,_message,_type,getPlayerUID _sender,_targetUid];
			_ownID publicVariableClient "drg_remoteMessageClient";
		}; 
		case "all" : {
			drg_remoteMessageClient = [_typeMessage,_message,_type,getPlayerUID _sender];
			publicVariable "drg_remoteMessageClient";
		}; 
		case "faction" : {
			private _fact = faction _sender;
			private _playersIdArr=[];
			{
				if ((faction _x) isEqualTo _fact) then {
					_playersIdArr pushBack (owner _x);
				};	    
			} forEach playableUnits;
			drg_remoteMessageClient = [_typeMessage,_message,_type,getPlayerUID _sender];
			{
				_x publicVariableClient "drg_remoteMessageClient";
			} forEach _playersIdArr;
		}; 
		default { diag_log format["[DRG] ERROR REM!!! TYPE: %1 ; TYPEMES: %2 ; MESSAGE: %3 ; PLAYER: %3 ; UID: %3 ;",_typeSend,_typeMessage,_message,_player,_targetUid]; }; 
	};