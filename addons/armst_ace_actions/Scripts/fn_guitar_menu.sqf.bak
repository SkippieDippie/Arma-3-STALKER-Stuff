
private ["_menuDef", "_target", "_params", "_menuName", "_menuRsc", "_menus", "_status"];
_target = _this select 0;
_params = _this select 1;
_busy = player getVariable["busy", false];
if(_busy) exitWith {};

_menuName = "";
_menuRsc = "popup";

if (typeName _params == typeName []) then
{
    if (count _params < 1) exitWith {diag_log format["Error: Invalid params: %1, %2", _this, __FILE__];};
    _menuName = _params select 0;
    _menuRsc = if (count _params > 1) then {_params select 1} else {_menuRsc};
} else {
    _menuName = _params;
};

//-----------------------------------------------------------------------------
_status = player getVariable["down", false];
_menus =
[
    [
        ["main", "", _menuRsc],
        [
             [localize "str_play_guitar", "", "", "", ["\armst\armst_misc\armst_game\scripts\fn_guitar_menu.sqf", "gitaraplay", 1], 34, true, alive player && player hasWeapon "USSR_GUITAR" && !(player getVariable ['AGM_isCaptive', false]) && {isNull (attachedTo player)}]
			
     ]
    ],
      
    [
        ["gitaraplay", localize "str_play_guitar", _menuRsc, "", false], // menu stays open after selection
        [			
            [localize "str_melody1",{player playactionnow "GestureGuitar"},"", "", "", -1, 1, player hasWeapon "USSR_GUITAR"],
            [localize "str_melody1",{[player, "guitar_01",50] call CBA_fnc_globalSay3d;player selectweapon (primaryweapon player);player playactionnow "GestureGuitar"},"", "", "", -1, 1, player hasWeapon "USSR_GUITAR"],
			 [localize "str_melody2",{[player, "guitar_02",50] call CBA_fnc_globalSay3d;player selectweapon (primaryweapon player);player playactionnow "GestureGuitar"},"", "", "", -1, 1, player hasWeapon "USSR_GUITAR"],
			  [localize "str_melody3",{[player, "guitar_03",50] call CBA_fnc_globalSay3d;player selectweapon (primaryweapon player);player playactionnow "GestureGuitar" },"", "", "", -1, 1, player hasWeapon "USSR_GUITAR"],
			   [localize "str_melody4",{[player, "guitar_04",50] call CBA_fnc_globalSay3d;player selectweapon (primaryweapon player);player playactionnow "GestureGuitar"},"", "", "", -1, 1, player hasWeapon "USSR_GUITAR"],
			    [localize "str_melody5",{[player, "guitar_05",50] call CBA_fnc_globalSay3d;player selectweapon (primaryweapon player);player playactionnow "GestureGuitar"},"", "", "", -1, 1, player hasWeapon "USSR_GUITAR"],
			    [localize "str_melody6",{[player, "guitar_06",50] call CBA_fnc_globalSay3d;player selectweapon (primaryweapon player);player playactionnow "GestureGuitar"},"", "", "", -1, 1, player hasWeapon "USSR_GUITAR"],
			[localize "str_stopmelody",{[[Player, "AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon"], "switchMove"] call bis_fnc_mp;player playActionNow 'GestureOUT';},"", "", "", 31, 1, player hasWeapon "USSR_GUITAR"]
           
        ]
    ]
];
//-----------------------------------------------------------------------------
_menuDef = [];
{
    if (_x select 0 select 0 == _menuName) exitWith {_menuDef = _x};
} forEach _menus;

if (count _menuDef == 0) then
{
    hintC format ["Error: Menu not found: %1\n%2\n%3", str _menuName, if (_menuName == "") then {_this}else{""}, __FILE__];
    diag_log format ["Error: Menu not found: %1, %2, %3", str _menuName, _this, __FILE__];
};

_menuDef // return value