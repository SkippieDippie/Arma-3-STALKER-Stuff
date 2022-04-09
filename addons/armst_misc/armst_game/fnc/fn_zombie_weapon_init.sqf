
	_unit = _this select 0;
_rNumber = random 6;
sleep 5;
if (_rNumber>5) then {
[_unit] call armst_fnc_zombie_weapon_random;
reload _unit;
sleep 5;
_unit playactionnow "armst_zombie_stvol";
_unit addEventHandler ["fired",{_unit setAmmo [currentWeapon _unit, 50];}];
    while {true} do 
	{
		_Zombie_sound = ["zomb1", "zomb2", "zomb4", "zomb5", "zomb7", "zomb8","zombie_die_1", "zombie_die_2", "zombie_die_3", "zombie_die_4", "zombie_die_5", "zombie_die_7", "zombie_die_8", "zombie_die_9"]; 
		_Zombie_sounds = _Zombie_sound select floor random count _Zombie_sound;
		_unit say3D _Zombie_sounds;
		_unit playactionnow "armst_zombie_stvol";
		if (!alive _unit) exitWith {};
		_weapon=currentWeapon _unit;		
		_unit fire _weapon; 
		sleep 5;
	};
};
