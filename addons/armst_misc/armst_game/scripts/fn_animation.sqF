/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
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
            ["Список анимаций 1", "", "", "", ["scripts\fn_animation.sqf", "animplay", 1], 35, true,  alive player && !(player getVariable ["FAR_isUnconscious",1] == 1) && !(player getVariable ['AGM_isCaptive', false]) && !(player isKindOf "LandVehicle") && {isNull (attachedTo player)}],
			
            ["Список анимаций 2", "", "", "", ["scripts\fn_animation.sqf", "animplay2", 1], 35, true,  alive player && !(player getVariable ["FAR_isUnconscious",1] == 1) && !(player getVariable ['AGM_isCaptive', false]) && !(player isKindOf "LandVehicle") && {isNull (attachedTo player)}]
			
     ]
    ],
      
    [
        ["animplay", "Список анимаций 1", _menuRsc, "", false], // menu stays open after selection
        [		
			["Прекратить",{[[player, "AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon"], "switchMove"] call bis_fnc_mp;},"", "", "", 31, 1, alive player],
            ["Стоять №1",{[[player, "Acts_millerCamp_A"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  alive player ],
            ["Стоять №2",{[[player, "Acts_AidlPercMstpSnonWnonDnon_warmup_3_loop"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  alive player ],
            ["Стоять №3",{[[player, "HubBriefing_loop"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  alive player ],
            ["Стоять №4",{[[player, "Acts_AidlPercMstpSnonWnonDnon_warmup_8_loop"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  alive player ],
            ["Стоять №5",{[[player, "Acts_AidlPercMstpSloWWrflDnon_warmup_1_loop"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  alive player ],
            ["Стоять №6",{[[player, "HubStandingUB_idle3"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  alive player ],
            ["Стоять №7",{[[player, "HubStandingUC_idle3"], "switchMove"] call bis_fnc_mp;},"", "", "", -1, 1,  alive player ],
            ["Присесть с оружием",{[[player, "Acts_AidlPercMstpSnonWnonDnon_warmup_6_loop"], "switchMove"] call bis_fnc_mp},"", "", "", -1, 1,  alive player ],
            ["Сидеть настороженно",{[player,"Acts_SupportTeam_Left_KneelLoop"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Присесть на корты",{[player,"Acts_AidlPercMstpSnonWnonDnon_warmup_4_loop"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Лежать",{[player,"Acts_InjuredLookingRifle04"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Корчиться от боли",{[] spawn armst_un_unimated},"", "", "", -1, 1,  alive player ]
			
			]
        ],
      
    [
        ["animplay2", "Список анимаций 2", _menuRsc, "", false], // menu stays open after selection
        [		
			["Прекратить",{[player,"AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon"] spawn armst_fnc_switchmove},"", "", "", 31, 1, alive player],
            ["Размяться",{[player,"sport_press"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Разогреться",{[player,"Acts_AidlPercMstpSnonWnonDnon_warmup_7_loop"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Отдышаться",{[player,"Acts_AidlPercMstpSnonWnonDnon_warmup_2_loop"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Пользоваться компьютером",{[player,"acts_millerDisarming_deskLoop"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Разговаривать",{[player,"Acts_StandingSpeakingUnarmed"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Молиться",{[player,"molitva"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Думать",{[player,"HubBriefing_think"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ],
            ["Чинить",{[[player, "Acts_carFixingWheel"], "switchMove"] call bis_fnc_mp},"", "", "", -1, 1,  alive player ],
            ["Танцевать",{[player,"armst_dancing2"] spawn armst_fnc_switchmove},"", "", "", -1, 1,  alive player ]
           
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