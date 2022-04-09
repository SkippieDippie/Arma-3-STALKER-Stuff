private ["_menuDef", "_target", "_params", "_menuName", "_menuRsc", "_menus", "_status", "_distance", "_unit", "_isBusy", "_name"];
_target = _this select 0;
_params = _this select 1;
_unit = cursorTarget;
_distance = player distance _unit;
if(_distance > 3) exitWith {};
if( isNull (_unit) ) exitWith {};
    _name = getText (configFile >> "CfgVehicles" >> typeOf(_unit) >> "displayName");

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
_barrobj=[	
	"Land_Razorwire_F",
	"Land_BagFence_Long_F",
	"Land_SatelliteAntenna_01_F",
	"Land_CampingChair_V2_F",
	"Land_CampingTable_small_F",
	"Land_tentA_F",
	"MetalBarrel_burning_F",
	"Land_Portable_generator_F",
	"Land_Camping_Light_F",
	"Land_PortableLight_single_F",
	"Land_cargo_addon02_V2_F",
	"xcam_pallet_vertical_F",
	"armst_korob1",
	"Land_PressureWasher_01_F",
	"Land_TripodScreen_01_dual_v2_F",
	"Land_PortableGenerator_01_F",
	"WaterPump_01_forest_F",
	"Land_SatelliteAntenna_01_F",
	"Land_Device_assembled_F",
	"Land_DieselGroundPowerUnit_01_F"
];
//-----------------------------------------------------------------------------
_menus =
[ 
    [
        ["main", format["%1", _name], _menuRsc],
        [
           ["Перетащить",{[cursorTarget] call armst_fnc_drag_bag},"", "", "", -1, 1,  
		   ((typeOf _unit) in _barrobj)],             
        	["Сломать ящик",{[cursorTarget] call ARMST_StashC_ActionRemove;},"", "", "", -1, 1,  (typeOf _unit) == "armst_box_small" ],  
        	["Сломать ящик",{[cursorTarget] call ARMST_StashC_ActionRemove;},"", "", "", -1, 1,  (typeOf _unit) == "armst_box_big" ],  
		   
           ["Поднять",{cursorTarget setPosASL [getPosASL cursorTarget select 0, getPosASL cursorTarget select 1, (getPosASL cursorTarget select 2) + 0.2];},"", "", "", -1, 1,  
		   ((typeOf _unit) in _barrobj)],
		   
           ["Понизить",{cursorTarget setPosASL [getPosASL cursorTarget select 0, getPosASL cursorTarget select 1, (getPosASL cursorTarget select 2) - 0.2];},"", "", "", -1, 1, 
		   ((typeOf _unit) in _barrobj)],
		   
		   
		   ["Разобрать",{["armst_BagFence"] spawn armst_fnc_additem;},"", "", "", -1, 1, ((typeOf _unit) == "Land_BagFence_Long_F") && ("ARMST_instruments" in (items player + assignedItems player))],
		   ["Разобрать",{["armst_NO5"] spawn armst_fnc_additem;},"", "", "", -1, 1, ((typeOf _unit) == "Land_SatelliteAntenna_01_F") && ("ARMST_instruments" in (items player + assignedItems player))],
		   ["Разобрать",{["armst_CampingChair"] spawn armst_fnc_additem;},"", "", "", -1, 1, ((typeOf _unit) == "Land_CampingChair_V2_F") && ("ARMST_instruments" in (items player + assignedItems player))],
		   ["Разобрать",{["armst_CampingTable"] spawn armst_fnc_additem;},"", "", "", -1, 1, ((typeOf _unit) == "Land_CampingTable_small_F") && ("ARMST_instruments" in (items player + assignedItems player))],
		   ["Разобрать",{["armst_tent"] spawn armst_fnc_additem;},"", "", "", -1, 1, ((typeOf _unit) == "Land_tentA_F") && ("ARMST_instruments" in (items player + assignedItems player))],
		   ["Разобрать",{["armst_MetalBarrel"] spawn armst_fnc_additem;},"", "", "", -1, 1, ((typeOf _unit) == "MetalBarrel_burning_F") && ("ARMST_instruments" in (items player + assignedItems player))],
		   ["Разобрать",{["armst_generator"] spawn armst_fnc_additem;},"", "", "", -1, 1, ((typeOf _unit) == "Land_Portable_generator_F") && ("ARMST_instruments" in (items player + assignedItems player))],
		   ["Разобрать",{["armst_Camping_Light"] spawn armst_fnc_additem;},"", "", "", -1, 1, ((typeOf _unit) == "Land_Camping_Light_F") && ("ARMST_instruments" in (items player + assignedItems player))],
		   ["Разобрать",{["armst_PortableLight"] spawn armst_fnc_additem;},"", "", "", -1, 1, ((typeOf _unit) == "Land_PortableLight_single_F") && ("ARMST_instruments" in (items player + assignedItems player))],
		   ["Разобрать",{["armst_Camper"] spawn armst_fnc_additem;},"", "", "", -1, 1, ((typeOf _unit) == "Land_cargo_addon02_V2_F") && ("ARMST_instruments" in (items player + assignedItems player))],
		   ["Разобрать",{["armst_pallet_vertical"] spawn armst_fnc_additem;},"", "", "", -1, 1, ((typeOf _unit) == "xcam_pallet_vertical_F") && ("ARMST_instruments" in (items player + assignedItems player))],
		   ["Разобрать",{["armst_armst_korob1"] spawn armst_fnc_additem;},"", "", "", -1, 1, ((typeOf _unit) == "armst_korob1") && ("ARMST_instruments" in (items player + assignedItems player))],
		   ["Разобрать",{["armst_NO1"] spawn armst_fnc_additem;},"", "", "", -1, 1, ((typeOf _unit) == "Land_PressureWasher_01_F") && ("ARMST_instruments" in (items player + assignedItems player))],
		   ["Разобрать",{["armst_NO2"] spawn armst_fnc_additem;},"", "", "", -1, 1, ((typeOf _unit) == "Land_TripodScreen_01_dual_v2_F") && ("ARMST_instruments" in (items player + assignedItems player))],
		   ["Разобрать",{["armst_NO3"] spawn armst_fnc_additem;},"", "", "", -1, 1, ((typeOf _unit) == "Land_PortableGenerator_01_F") && ("ARMST_instruments" in (items player + assignedItems player))],
		   ["Разобрать",{["armst_NO4"] spawn armst_fnc_additem;},"", "", "", -1, 1, ((typeOf _unit) == "WaterPump_01_forest_F") && ("ARMST_instruments" in (items player + assignedItems player))],
		   ["Разобрать",{["armst_NO6"] spawn armst_fnc_additem;},"", "", "", -1, 1, ((typeOf _unit) == "Land_Device_assembled_F") && ("ARMST_instruments" in (items player + assignedItems player))],
		   ["Разобрать",{["armst_NO7"] spawn armst_fnc_additem;},"", "", "", -1, 1, ((typeOf _unit) == "Land_DieselGroundPowerUnit_01_F") && ("ARMST_instruments" in (items player + assignedItems player))]
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