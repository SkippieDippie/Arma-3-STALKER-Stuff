
ARMST_PSY_DEATH2 =
{
private ["_unit","_zombie", "_z", "_newgroup", "_ZOMBIES", "_inventory"];
_unit = _this select 0;
_unit setDammage 1;
};

	/*
	Autors: Aloe, Romzet
	Description:
	ПСИ-излучение
		
	Parameter(s):
	ARMST_PSYDAMAGE переменная, отвечающая за уровень пси-здоровья игрока, при достижении 1 - смертельно.
	*/
ARMST_PSY_FX =
{
private "_counter";
_voices = ["psy_a","psy_b","psy_c"];

player setVariable ["ARMST_PSYEFFECT",1];
_counter=25;
_state = player getVariable "ARMST_PSYEFFECT";
While {(_state==1)} do 
{
_state = player getVariable "ARMST_PSYEFFECT";
_counter=_counter+1;
if (_counter>=5) then {_counter=0; PlaySound (_voices select (round(random 2)));};
sleep 1;
};
player setVariable ["ARMST_PSYEFFECT",nil,true];
player setVariable ["ARMST_PSYDAMAGE",nil,true];
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
		{if ((!alive _x) or (_x isKindOf "ARMST_monolith") or (_psyshield == "armst_psy_protector_exp") )then {_objects=_objects-[_x];};}ForEach _objects;
		{
			if ((_x distance _epicenter)<_range) then
			{
				if (_x isKindOf "CaManBase") then 
				{
					if (local _x) then 
					{
						_dmg = (_x getVariable "ARMST_PSYDAMAGE");
						if (isNil("_dmg")) then {_dmg = 0; _x setVariable ["ARMST_PSYDAMAGE",0];};
				
						_dmg = (_dmg + 0.02);
						_x setVariable ["ARMST_PSYDAMAGE",_dmg];
	
						if (_dmg>1) then {[_x] spawn ARMST_PSY_DEATH2;};
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
				
								_dmg = (_dmg + 0.005);
								_x setVariable ["ARMST_PSYDAMAGE",_dmg];
	
								if (_dmg>1) then {[_x] spawn ARMST_PSY_DEATH2};
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
		if (isNil("_pfx")) then {[] spawn ARMST_PSY_FX};
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
	if ((player HasWeapon "1") and (_vfxstate==1)) then 
	{
		ppEffectDestroy _DynamicBlur;
		ppEffectDestroy _FilmGrain;
		ppEffectDestroy _ColorCorrections;
		
		_pfx = player getVariable "ARMST_PSYEFFECT";
		if (!(isNil("_pfx"))) then {player setVariable ["ARMST_PSYEFFECT",0];};
		_vfxstate=0;
	};
	sleep 1;
};