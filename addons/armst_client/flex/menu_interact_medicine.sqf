
private ["_menuDef", "_target", "_params", "_menuName", "_menuRsc", "_menus", "_status", "_distance", "_unit", "_isBusy", "_name"];

_myRep = player getVariable ["rep",0];

_target = _this select 0;
_params = _this select 1;
_unit = cursorTarget;
_distance = player distance _unit;
if(_distance > 3) exitWith {};
if( isNull (_unit) ) exitWith {};
_masks=["Armst_BalaclavaFreed"
		,"Armst_balaclava_dolg"
		,"Armst_balaclava_voen"
		,"G_Balaclava_combat"
		,"G_Balaclava_oli"
		,"G_Balaclava_lowprofile"
		,"G_Balaclava_blk"
		,"G_Bandanna_aviator"
		,"armst_bandana"
		,"G_Bandanna_beast"
		,"G_Bandanna_tan"
		,"G_Bandanna_oli"
		,"G_Bandanna_sport"
		,"G_Bandanna_shades"
		,"G_Bandanna_khk"
		,"G_Bandanna_blk"
		,"armst_bandanaGlass"
		,"armst_MESHOK"
		,"armst_G100"
		,"armst_BioGasMaskG25"
		,"armst_GasP5"
		,"armst_GasP7"
		,"armst_gasm20"
		,"armst_gasm50"
		,"armst_Gasscout"
		,"armst_gasmaskM40"
		,"armst_Gasslon"
		,"armst_gasmaskBastard"
		,"armst_R5_SH2_filter"
		,"armst_R5_SH2"
		,"armst_R5_P_filter"
		,"armst_R5_P"];
if( isPlayer (_unit) )then
{
     _goggles = goggles _unit;
     if (!(_goggles in _masks) && {_unit getVariable ['AGM_isCaptive', false]} && {"armst_item_pda" in (items _unit +assignedItems _unit)}) then {
 		_name = name _unit;
     }
 	else{
       _name = "Unknown";
 	};

}
else
{ 
    _name = getText (configFile >> "CfgVehicles" >> typeOf(_unit) >> "displayName");
};

_unitStatus = _unit getVariable["down", false];
_status = player getVariable["down", false];
_isBusy = player getVariable["busy", false];

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
/*
_menus =
[ 
    [
        ["main", format["%1", _name], _menuRsc],
        [
			[localize "str_Diagnostics", { [cursorTarget] call Armst_fnc_diagnos}, "", "", "", -1, alive _unit],
            [localize "str_FN_morphiy", { [cursorTarget] spawn Armst_fnc_morphiy }, "", "", "", -1, alive _unit],
            [localize "str_FN_adrenaline", { [cursorTarget] call Armst_fnc_adrenaline }, "", "", "", -1, alive _unit],
			[localize "str_FN_radx", { [cursorTarget] call HashCode_RadX_Run }, "", "", "", -1, alive _unit],
            [localize "str_FN_medkit", { [cursorTarget] call Armst_fnc_medkit }, "", "", "", -1, alive _unit],
            [localize "str_FN_heads", { [cursorTarget] call Armst_fnc_head }, "", "", "", -1, alive _unit],
            [localize "str_FN_tors", { [cursorTarget] call Armst_fnc_tors }, "", "", "", -1, alive _unit],
            [localize "str_FN_arms", { [cursorTarget] call Armst_fnc_arms }, "", "", "", -1, alive _unit],
            [localize "str_FN_legs", { [cursorTarget] call Armst_fnc_legs }, "", "", "", -1, alive _unit]
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