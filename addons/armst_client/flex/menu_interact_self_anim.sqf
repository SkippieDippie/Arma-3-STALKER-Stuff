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
            ["Animation list 4 >", "", "", "", ["\armst_client\flex\menu_interact_self_anim.sqf", "animplay", 1], 35, true,  alive player && !(player getVariable ['AGM_isCaptive', false]) && !(player isKindOf "LandVehicle") && {isNull (attachedTo player)}],
			
            ["Animation list 5 >", "", "", "", ["\armst_client\flex\menu_interact_self_anim.sqf", "animplay2", 1], 35, true,  alive player && !(player getVariable ['AGM_isCaptive', false]) && !(player isKindOf "LandVehicle") && {isNull (attachedTo player)}],
			
			["Animation list 6 >", "", "", "", ["\armst_client\flex\menu_interact_self_anim.sqf", "animplay3", 1], 35, true,  alive player && !(player getVariable ['AGM_isCaptive', false]) && !(player isKindOf "LandVehicle") && {isNull (attachedTo player)}]
		]
    ],
      
    [
        ["animplay", "Список анимаций 1", _menuRsc, "", false], // menu stays open after selection
        [		
			["Stop animation",{[[player, "AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon"], "switchMove"] call bis_fnc_mp;},"", "", "", 31, 1, (alive player) && (player isEqualTo vehicle player)],
            ["Standing №1",{[[player, "Acts_millerCamp_A"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
            ["Standing №2",{[[player, "Acts_AidlPercMstpSnonWnonDnon_warmup_3_loop"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
            ["Standing №3",{[[player, "HubBriefing_loop"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
            ["Standing №4",{[[player, "Acts_AidlPercMstpSnonWnonDnon_warmup_8_loop"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
            ["Standing №5",{[[player, "Acts_AidlPercMstpSloWWrflDnon_warmup_1_loop"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
            ["Standing №6",{[[player, "HubStandingUB_idle3"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
            ["Standing №7",{[[player, "HubStandingUC_idle3"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
            ["Sit down with your weapon",{[[player, "Acts_AidlPercMstpSnonWnonDnon_warmup_6_loop"], "switchMove"] call bis_fnc_mp},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
            ["Sit at ready",{[player,"Acts_SupportTeam_Left_KneelLoop"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
            ["Sit on the ground",{[player,"Acts_AidlPercMstpSnonWnonDnon_warmup_4_loop"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
            ["Lay down",{[player,"Acts_InjuredLookingRifle04"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ]
			
		]
    ],
      
    [
        ["animplay2", "Список анимаций 2", _menuRsc, "", false], // menu stays open after selection
        [		
			["Stop animation",{[player,"AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon"] spawn armst_fnc_switchmove},"", "", "", 31, 1, (alive player) && (player isEqualTo vehicle player)],
            ["Warm up",{[player,"sport_press"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
            ["Warm up 2",{[player,"Acts_AidlPercMstpSnonWnonDnon_warmup_7_loop"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
            ["Отдышаться",{[player,"Acts_AidlPercMstpSnonWnonDnon_warmup_2_loop"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
            ["To use a computer",{[player,"acts_millerDisarming_deskLoop"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
            ["Talk",{[player,"Acts_StandingSpeakingUnarmed"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
            ["Pray",{[player,"molitva"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
			["Pray 2",{[player,"armst_psy_molitva"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) && ((faction player) in ["ARMST_MONOLITH"]) ],
			["Pray 3",{[player,"armst_verybadsit"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) && ((faction player) in ["ARMST_MONOLITH"]) ],
            ["Thinking",{[player,"HubBriefing_think"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
            ["Repair",{[[player, "Acts_carFixingWheel"], "switchMove"] call bis_fnc_mp},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
            ["Dance",{[player,"armst_dancing1"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
			["Dance2",{[player,"armst_dancing2"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
			["Dance3",{[player,"armst_dancing3"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
			["Dance4",{[player,"armst_dancing4"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
			["Dance5",{[player,"armst_dancing5"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ]
           
        ]
    ],
	
	[
        ["animplay3", "Список анимаций 3", _menuRsc, "", false], // menu stays open after selection
        [
            ["Rest1",{[player,"armst_relax2"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
			["Rest2",{[player,"armst_relax3"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
			["Rest3",{[player,"armst_relax4"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
			["Rest4",{[player,"armst_relax5"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
			["Rest5",{[player,"armst_relax6"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
			["Rest6",{[player,"armst_relax7"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
			
			["Stand up1",{[player,"armst_stand"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
			["Stand up2",{[player,"armst_stand2"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ],
			
			["Push up",{[player,"armst_otjatie"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  (alive player) && (player isEqualTo vehicle player) ]
        ]
    ]
];
//-----------------------------------------------------------------------------
/*

 

 

*/
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