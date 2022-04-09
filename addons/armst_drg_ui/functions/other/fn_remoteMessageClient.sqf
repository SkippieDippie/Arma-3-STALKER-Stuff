/*
    Author: Vladimir Vorobev <Dragster>
    E-mail:1dragsteron@gmail.com

    Description:
    Function for client EventHandler remote messages

    Parameter(s):
        

    Returns:
        NONE       [_typeMessage,_message,_type,getPlayerUID _sender,_targetUid]
*/
    params[
         ["_typeMessage",""]
        ,["_message",""]
        ,["_type",""]
        ,["_senderUID",""]
        ,["_tarUID",""]
    ];
    if (_typeMessage == "") exitWith {};
    if (_message == "") exitWith {};
    switch (toLower _typeMessage) do { 
        case "hint" : {  hint _message;  }; 
        case "hintsilent" : {hintSilent _message;};
        case "hintstr" : {  hint str _message;  }; 
        case "hintsilentstr" : {hintSilent str _message;};
        case "systemchat" : { systemChat str _message; }; 
        case "hintpda" : {
            if !(_type in ["ls","lsa","all","faction"]) exitWith {};
            if (_senderUID isEqualTo "") exitWith {};
            if (_type in ["ls","lsa"] && _tarUID isEqualTo "") exitWith {};
            private _fullMessage = "";
            switch (_type) do { 
                case "ls" : {
                    _fullMessage = format["%1 %2 %3",localize "STR_DRG_pda_tols",[_senderUID] call drg_fnc_getFriendByUID,_message];
                }; 
                case "lsa" : {
                    _fullMessage = format["%1 %2 %3",localize "STR_DRG_pda_tolsa",_message];
                }; 
                case "all" : {
                    _fullMessage = format["%1 %2 %3",localize "STR_DRG_pda_toall",[_senderUID] call drg_fnc_getFriendByUID,_message];
                }; 
                case "faction" : {
                    _fullMessage = format["%1 %2 %3",localize "STR_DRG_pda_tofaction",[_senderUID] call drg_fnc_getFriendByUID,_message];
                }; 
            };
            if (_fullMessage isEqualTo "") exitWith {};
            private _letter = "<img image='drg_ui\textures\pda_new\letter.paa' size='4' shadow='true'/>";
            if (!(([] call drg_fnc_getPdaItemFromAssign) == "") && {player getVariable ['DRG_network',true]}) then {
                if ((!(player getVariable ['AGM_isCaptive', false])) && (!(player getVariable ['AGM_isUnconscious', false]))) then {
                    hintSilent (composeText [lineBreak,parseText _letter,lineBreak, lineBreak, parseText format ["<t size='1.3'>%1</t>",_fullMessage]]);
                } else {
                    hintSilent (composeText [lineBreak,parseText _letter,lineBreak," "]);
                };
                private _arrmes = player getVariable ["drg_player_history_messages",[]];
                _arrmes pushBack _fullMessage;
                player setVariable ["drg_player_history_messages",_arrmes,true];
                player say2d "pda_song";
            };
        }; 
        default { diag_log format["[DRG] ERROR REM!!! TYPE: %1 ; MESSAGE: %2 ;",_type,_message]; }; 
    };