if (isNil {profileNamespace getVariable "armst_bweapon_data"}) then {profileNamespace setvariable ["armst_bweapon_data", 1];};
armst_fnc_bweap = {
private ["_unit", "_weapon", "_jammedWeapons"];

_unit = _this select 0;
_weapon = _this select 1;


// don't jam a weapon with no rounds left
//if (_unit ammo _weapon == 0) exitWith {};

_jammedWeapons = _unit getVariable ["AGM_Overheating_jammedWeapons", []];
_jammedWeapons pushBack _weapon;

_unit setVariable ["AGM_Overheating_jammedWeapons", _jammedWeapons];
/*
profileNamespace setvariable ["armst_bweapon_data", _weapon];
_armst_bweapon_data = profileNamespace getVariable "armst_bweapon_data";
 this is to re-activate the 'DefaultAction', so you can jam a weapon while full auto shooting
[_unit, _weapon] spawn {
  _unit = _this select 0;
  _weapon = _this select 1;

  _ammo = _unit ammo _weapon;

  _frame = diag_frameno;

  if (_ammo > 0) then {
    _unit setAmmo [_weapon, 0];

    waitUntil {_frame < diag_frameno};

    _unit setAmmo [_weapon, _ammo];
    //[localize "STR_AGM_Overheating_WeaponJammed"] call ace_common_fnc_displayTextStructured;
  };
};
*/
// only display the hint once, after you try to shoot an already jammed weapon
AGM_Overheating_knowAboutJam = false;
if (_unit getVariable ["AGM_JammingActionID", -1] == -1) then {
  private ["_condition", "_statement", "_condition2", "_statement2", "_actionID"];

  _condition = {
    [_this select 1] call AGM_Core_fnc_canUseWeapon
    && {currentMuzzle (_this select 1) in ((_this select 1) getVariable ["AGM_Overheating_jammedWeapons", []])}
    && {!(currentMuzzle (_this select 1) in ((_this select 1) getVariable ["AGM_SafeMode_safedWeapons", []]))}
  };

  _statement = {
    playSound3D ["a3\sounds_f\weapons\Other\dry9.wss", _this select 0];

    if (!(missionNamespace getVariable ["AGM_Overheating_knowAboutJam", false]) && {(_this select 1) ammo currentWeapon (_this select 1) > 0}) then {
	["Оружие сломано, необходим ремонт!"] call ace_common_fnc_displayTextStructured;
      AGM_Overheating_knowAboutJam = true;
    };
  };
  _condition2 = {
   // currentWeapon (_this select 1) in ((_this select 1) getVariable ["AGM_Overheating_jammedWeapons", []])
  };

  _statement2 = {
   // [_this select 1, currentWeapon (_this select 1), false] call AGM_Overheating_fnc_clearJam;
  };

 _actionID = [_unit, format ["<t color=""#FFFF00"" >%1</t>", localize "STR_AGM_Overheating_UnjamWeapon"], "DefaultAction", _condition, _statement, _condition2, _statement2, 10] call AGM_Core_fnc_addActionMenuEventHandler;//

  _unit setVariable ["AGM_JammingActionID", _actionID];
};
};

armst_fnc_rweap = {

[[player, "mountSide"], "playMove"] call bis_fnc_mp;
sleep 5;
profileNamespace setvariable ["armst_bweapon_data", 1];
};

AGM_Overheating_fnc_clearJam = {
/*
private ["_unit", "_weapon", "_skipAnim", "_jammedWeapons"];
_unit = _this select 0;
_weapon = _this select 1;
_skipAnim = _this select 2;

_jammedWeapons = _unit getVariable ["AGM_Overheating_jammedWeapons", []];

if (_weapon in _jammedWeapons) then {
  _jammedWeapons = _jammedWeapons - [_weapon];

  _unit setVariable ["AGM_Overheating_jammedWeapons", _jammedWeapons];

  if (count _jammedWeapons == 0) then {
    private "_actionID";

    _actionID = _unit getVariable ["AGM_JammingActionID", -1];
    //_unit removeAction _actionID;
    [_unit, "DefaultAction", _actionID] call AGM_Core_fnc_removeActionMenuEventHandler;
    _unit setVariable ["AGM_JammingActionID", -1];
  };

  if !(_skipAnim) then {
    private "_clearJamAction";

    _clearJamAction = getText (configFile >> "CfgWeapons" >> _weapon >> "AGM_clearJamAction");

    if (_clearJamAction == "") then {
      _clearJamAction = getText (configFile >> "CfgWeapons" >> _weapon >> "reloadAction");
    };

    _unit playActionNow _clearJamAction;
  };

  [localize "STR_AGM_Overheating_WeaponUnjammed"] call ace_common_fnc_displayTextStructured;
};
*/
};



player addEventHandler["Fired",{

_weapon = primaryweapon player;
_arm = profileNamespace getVariable "armst_bweapon_data";
if(round(random 200)==1)then{
profileNamespace setvariable ["armst_bweapon_data", _weapon]; 
};
if(str _arm == str _weapon)then{
[player, primaryWeapon player] spawn armst_fnc_bweap; 
};
}];