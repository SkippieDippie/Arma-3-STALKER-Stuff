/*
private ["_menuDef", "_target", "_params", "_menuName", "_menuRsc", "_menus", "_status"];
_target = _this select 0;
_params = _this select 1;
_busy = player getVariable ["busy", false];
_uncon = player getVariable ["AGM_isUnconscious", false];
_captive = player getVariable ["AGM_isCaptive",false];

if(_busy or _uncon or _captive) exitWith {};

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
			["Medicine >", "", "", "", ["\armst_client\flex\menu_interact_self_medicine.sqf", "med", 1], 47, true, !_status && !(player getVariable ['AGM_isCaptive', false]) && {isNull (attachedTo player)}]
        ]
     ],
    
    [
        ["med", "Список ", _menuRsc, "", false], // menu stays open after selection		
        [ 
			["Diagnose",{[player, player, 'diagnose'] call AGM_Medical_fnc_treat;},"", "", "", -1, 1, alive player],
			["Inject RadX",{[player] call HashCode_RadX_Run;},"", "", "", -1, 1,"armst_item_antirad" in (items player)],
			["Check Irradiation" + format["(%1)", ["DETECTOR_DBG06M"] call HashCode_Extra_CountMagazines],{[player] spawn Armst_fnc_raddiagnos;},"", "", "", -1, 1, alive player && ("DETECTOR_DBG06M" in (weapons player))],
			["Check Irradiation" + format["(%1)", ["DETECTOR_RKS20"] call HashCode_Extra_CountMagazines],{[player] spawn Armst_fnc_raddiagnos;},"", "", "", -1, 1, alive player && ("DETECTOR_RKS20" in (weapons player))],
			["Check Irradiation" + format["(%1)", ["DETECTOR_MKS1009"] call HashCode_Extra_CountMagazines],{[player] spawn Armst_fnc_raddiagnos;},"", "", "", -1, 1, alive player && ("DETECTOR_MKS1009" in (weapons player))],
			["Inject morphine",{[player] spawn armst_fnc_MorphyPlayer;},"", "", "", -1, 1, alive player],
			["Use bloodbag",{[player, player, 'bloodbag'] call AGM_Medical_fnc_treat;},"", "", "", -1, 1, alive player],
			["Bandage your head",{[player, player, 'bandage', 'HitHead'] call AGM_Medical_fnc_treat;},"", "", "", -1, 1, alive player],
			["Bandage your torso",{[player, player, 'bandage', 'HitBody'] call AGM_Medical_fnc_treat;},"", "", "", -1, 1, alive player],
			["Bandage right arm",{[player, player, 'bandage', 'HitRightArm'] call AGM_Medical_fnc_treat;},"", "", "", -1, 1, alive player],
			["Bandage left arm",{[player, player, 'bandage', 'HitLeftArm'] call AGM_Medical_fnc_treat;},"", "", "", -1, 1, alive player],
			["Bandage right leg",{[player, player, 'bandage', 'HitRightLeg'] call AGM_Medical_fnc_treat;},"", "", "", -1, 1, alive player],
			["Bandage left leg",{[player, player, 'bandage', 'HitLeftLeg'] call AGM_Medical_fnc_treat;},"", "", "", -1, 1, alive player]
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