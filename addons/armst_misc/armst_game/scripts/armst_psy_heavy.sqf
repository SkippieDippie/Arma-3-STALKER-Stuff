
ARMST_fnc_PSY_DEATHS = 
{

_unit = _this select 0;


[[_unit, "armst_psy_death"], "switchMove"] call bis_fnc_mp;
sleep 10;
[[_unit, "AadjPcrhMstpSrasWpstDup"], "switchMove"] call bis_fnc_mp;
_unit setdamage 1;

};

private ["_vfxstate","_dmg","_pdmg","_ColorCorrections","_DynamicBlur","_FilmGrain","_psyshield"];

_epicenter = _this select 0;
_range = _this select 1;
_vfxstate=0;

while {true} do 
{
	_objects=list _epicenter;

	_psyshield = headgear player;
	if (count _objects>0) then 
	{
		{if ((!alive _x) or (_x isKindOf "ARMST_monolith") )then {_objects=_objects-[_x];};}ForEach _objects;
		{
			if ((_x distance _epicenter)<_range) then
			{
				if (_x isKindOf "CaManBase") then 
				{
					if (local _x) then 
					{
						_dmg = (_x getVariable "ARMST_PSYDAMAGE");
						if (isNil("_dmg")) then {_dmg = 0; _x setVariable ["ARMST_PSYDAMAGE",0];};
				
						_dmg = (_dmg + 0.04);
						_x setVariable ["ARMST_PSYDAMAGE",_dmg];
						
						
								if (_dmg>1) exitWith {
								[_x] spawn ARMST_fnc_PSY_DEATHS;
								_x setVariable ["ARMST_PSYDAMAGE",0.1];
								};
					};
				}
				else
				{
					{
						if (_x isKindOf "CaManBase") then 
						{
							if (local _x) then 
							{
								_dmg = (_x getVariable "ARMST_PSYDAMAGE");
								if (isNil("_dmg")) then {_dmg = 0; _x setVariable ["ARMST_PSYDAMAGE",0];};
				
								_dmg = (_dmg + 0.04);
								_x setVariable ["ARMST_PSYDAMAGE",_dmg];
			
								if (_dmg>1) exitWith {
								[_x] spawn ARMST_fnc_PSY_DEATHS;
								_x setVariable ["ARMST_PSYDAMAGE",0.1];
								};
							};
						};
						
					}ForEach crew _x;
				};
			};
		}ForEach _objects;
	};

	_pos = (_epicenter modelToWorld [0,0,0]);
	_dist=(player distance [_pos select 0, _pos select 1, _pos select 2]);
	if ((_dist<=_range) and (!(player isKindOf "ARMST_monolith")) ) then 
	{
		if (_vfxstate==0) then 
		{
			
			_ColorCorrections = ppEffectCreate ["colorCorrections", 1565];
			_DynamicBlur = ppEffectCreate ["dynamicBlur", 465];
			_FilmGrain = ppEffectCreate ["filmGrain", 2005];
			
			_ColorCorrections ppEffectEnable true;
			_DynamicBlur ppEffectEnable true;
			
			_FilmGrain ppEffectEnable true;
			
			_DynamicBlur ppEffectCommit 0.1;
			_FilmGrain ppEffectCommit 0.5;
			
			_vfxstate=1;
		};
		
		_pdmg = player getVariable "ARMST_PSYDAMAGE";
		if (!(isNil("_pdmg"))) then 
		{
				_fxb=(_pdmg*5);
				_fxc = 1 - _pdmg ;
				_DynamicBlur ppEffectCommit 0.1;
				_DynamicBlur ppEffectAdjust [_fxb];
				_ColorCorrections ppEffectAdjust [1, 1, 0, [0,0,0,-0.1], [1,1,0,_fxc], [0,1,1,_fxc]]; 
				_ColorCorrections ppEffectCommit 0.1;
		};
		
		_FilmGrain ppEffectAdjust [0.1, -1, 0.1, 0.05, 2, false];
		_pfx = player getVariable "ARMST_PSYEFFECT";
		if (isNil("_pfx")) then {[] spawn ARMST_fnc_PSY_FX};
	};
	if ((_dist>_range) and (!(player isKindOf "ARMST_monolith")) and (_vfxstate==1)) then 
	{
		ppEffectDestroy _DynamicBlur;
		ppEffectDestroy _FilmGrain;
		ppEffectDestroy _ColorCorrections;
		
		_pfx = player getVariable "ARMST_PSYEFFECT";
		if (!(isNil("_pfx"))) then {player setVariable ["ARMST_PSYEFFECT",0];};
		_vfxstate=0;
	};
	sleep 2;
};