/*
    author:         ROMZET (ARMSTALKER TEAM)
    e-mail:         romzet1994@gmail.com
    file:           fn_sendMessage.sqf
    version:        1.00
    date:           10.08.2016  
*/
private ["_menuDef", "_target", "_params", "_menuName", "_menuRsc", "_menus", "_status"];
_target = _this select 0;
_params = _this select 1;
_busy = player getVariable["busy", false];
if(_busy) exitWith {};

_menuName = "";
_menuRsc = "Rose";

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
            [".", "", "\drg_ui\a3_dialogs\arm_logo.paa", "", "", -1, false,  alive player],
            ["List of animations 1", "", "", "", ["scripts\fn_animation.sqf", "animplay", 1], 35, true,  alive player && !(player getVariable ['AGM_isCaptive', false]) && !(player isKindOf "LandVehicle") && {isNull (attachedTo player)}]
            
            ,["List of animations 2", "", "", "", ["scripts\fn_animation.sqf", "animplay2", 1], 35, true,  alive player && !(player getVariable ['AGM_isCaptive', false]) && !(player isKindOf "LandVehicle") && {isNull (attachedTo player)}]
            
            ,["List of animations 3", "", "", "", ["scripts\fn_animation.sqf", "animplay3", 1], 35, true,  alive player && !(player getVariable ['AGM_isCaptive', false]) && !(player isKindOf "LandVehicle") && {isNull (attachedTo player)}]
            
            // ,["List of animations 4", "", "", "", ["fn_animation.sqf", "animplay4", 1], 35, true,  alive player && !(player getVariable ['AGM_isCaptive', false]) && !(player isKindOf "LandVehicle") && {isNull (attachedTo player)}]
            
           
     ]
    ],
      
    [
        ["animplay", "List of animations 1", _menuRsc, "", false], // menu stays open after selection
        [       
            ["Stop animation",{[[player, "AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon"], "switchMove"] call bis_fnc_mp;},"", "", "", 31, 1, alive player],
            ["Standing №1",{[[player, "Acts_millerCamp_A"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  alive player ],
            ["Standing №2",{[[player, "Acts_AidlPercMstpSnonWnonDnon_warmup_3_loop"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  alive player ],
            ["Standing №3",{[[player, "HubBriefing_loop"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  alive player ],
            //["Standing №4",{[[player, "Acts_AidlPercMstpSnonWnonDnon_warmup_8_loop"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  alive player ],
            ["Standing №5",{[[player, "Acts_AidlPercMstpSloWWrflDnon_warmup_1_loop"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  alive player ],
            ["Standing №6",{[[player, "HubStandingUB_idle3"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  alive player ],
            ["Standing №7",{[[player, "HubStandingUC_idle3"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  alive player ],
            ["Standing №8",{[[player, "armst_stand"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  alive player ],
            ["Standing №9",{[[player, "armst_stand2"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  alive player ]
            
            ]
        ],
      
    [
        ["animplay2", "List of animations 2", _menuRsc, "", false], // menu stays open after selection
        [       
            ["Stop animation",{[player,"AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon"] spawn armst_fnc_switchmove},"", "", "", 31, 1, alive player],
            ["Warm up",{[player,"sport_press"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Warm up 2",{[player,"Acts_AidlPercMstpSnonWnonDnon_warmup_7_loop"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Catch my breath",{[player,"Acts_AidlPercMstpSnonWnonDnon_warmup_2_loop"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["To use computer",{[player,"acts_millerDisarming_deskLoop"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Talking",{[player,"Acts_StandingSpeakingUnarmed"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Pray",{[player,"molitva"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Think",{[player,"HubBriefing_think"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Repair",{[[player, "Acts_carFixingWheel"], "switchMove"] call bis_fnc_mp},"", "", "", -1, 1,  alive player ],
            ["Dance",{[player,"armst_dancing2"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Lay down",{[player,"Acts_InjuredLookingRifle04"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Writhe in pain",{[] spawn armst_un_unimated},"", "", "", -1, 1,  alive player ]
            
            ]
           
        ],
      
    [
        ["animplay3", "List of animations 3", _menuRsc, "", false], // menu stays open after selection
        [       
            ["Stop animation",{[player,"AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon"] spawn armst_fnc_switchmove},"", "", "", 31, 1, alive player],
            ["Rest",{[player,"armst_relax2"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Rest",{[player,"armst_relax3"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Rest",{[player,"armst_relax4"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Rest",{[player,"armst_relax5"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Rest",{[player,"armst_relax6"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Rest",{[player,"armst_relax7"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ]       
        ]
    ],
      
    [
        ["animplay4", "List of animations 4", _menuRsc, "", false], // menu stays open after selection
        [       
            ["Stop animation",{player playActionNow 'GestureOUT';},"", "", "", 31, 1, alive player],
            ["Raise weapon",{player playActionNow 'armst_weapons_up';},"", "", "", -1, 1,  alive player ],
            ["Raise weapon",{player playActionNow 'armst_weapon_arm';},"", "", "", -1, 1,  alive player ],
            ["Keep your arms to your chest",{player playActionNow 'armst_weapon_arms';},"", "", "", -1, 1,  alive player ],
            ["Hold the weapon by the forend",{player playActionNow 'armst_weapon_hvat_stvol';},"", "", "", -1, 1,  alive player ],
            ["Hold weapons by the magazine",{player playActionNow 'armst_weapon_hvatzamag';},"", "", "", -1, 1,  alive player ],
            ["Keep your arms to your chest",{player playActionNow 'armst_weapon_grud_hvat';},"", "", "", -1, 1,  alive player ],
            ["Holster up your weapon",{player playActionNow 'armst_weapon_rukinaves';},"", "", "", -1, 1,  alive player ]
           
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