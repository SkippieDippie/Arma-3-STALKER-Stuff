
player setVariable ["armst_fighter", 0];

armst_fnc_fighter_idle = 
{
    while {true} do 
	{
	   if (player getVariable "armst_fighter" == 1) then 
	   {
		["К рукопашному бою готов."] call ace_common_fnc_displayTextStructured;
	    [player] call AGM_WeaponSelect_fnc_putWeaponAway;
	    player playActionNow "armst_fight_idl";
	   };
	    sleep 3;
	};

};

armst_fnc_fighter = 
{

if ((getFatigue player) < 0.7) then 
	{
	armst_udar = ["cross1","armst_fight_1"];
	armst_udar_comp = armst_udar select floor random count armst_udar;
	_fatigue = getFatigue player;
	player setVariable ["armst_fighter", 0];
	player playactionnow armst_udar_comp;
	player setFatigue (_fatigue + 0.15);
	sleep 0.5;
	player playActionNow "armst_fight_idl";
	player setVariable ["armst_fighter", 1];
	_distance = player distance cursortarget;
		if(_distance <= 2) then 
			{
				if (alive cursortarget && cursortarget isKindOf "armst_human") then 
					{
					[cursortarget] spawn armst_fnc_fighter_kick;
					};
			};
	};
};

armst_fnc_fighter_kick = 
{
private ["_num"];
  _unit = _this select 0;      
  _unit playactionnow "Gestureheadkick";
  addCamShake [10, 1, 25];
  _num = floor random 10;
  _unit setHitPointDamage ["HitHead", (_unit getHitPointDamage "HitHead") + 0.1];
   _fatigue = getFatigue player;
  _unit playactionnow "Gestureheadkick";
  sleep 4;
  if (_num >9) then {
  disableUserInput true;
  [[_unit, "Acts_CivilInjuredGeneral_1"], "switchMove"] call bis_fnc_mp;
  sleep 20;
  disableUserInput false;  
  [[_unit, "AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon"], "switchMove"] call bis_fnc_mp;
  };
 };