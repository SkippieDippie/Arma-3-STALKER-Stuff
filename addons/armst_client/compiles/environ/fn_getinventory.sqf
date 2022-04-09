	/*
		Author: Aloe
		Description:
		Get unit inventory
		
		Parameter(s):
		unit <Object> - unit
	
		Returns: <Array>  unit inventory
		Format:

	*/

	params [["_unit", objnull]];
	if (_unit isEqualTo objNull) exitWith {};
	private ["_pw", "_pm", "_pmg", "_apm", "_pwi", "_hw", "_hm", "_ahm", "_hwi", "_sw", "_sm", "_asm", "_swi", "_weapons", "_uni", "_uniform", "_vst", "_vest", "_bpck", "_backpack"];
	_pw=primaryWeapon _unit;  _pm="";_pmg="";_apm=0;_pwi=["","","",""];
	_hw=handgunWeapon _unit;  _hm="";		 _ahm=0;_hwi=["","","",""];
	_sw=secondaryWeapon _unit;_sm="";		 _asm=0;_swi=["","","",""];
	_uni=["",[],[],[]];
	_vst=["",[],[],[]];
	_bpck=["",[],[],[]];
	if !(_pw isEqualTo "") then {
		if !((primaryWeaponMagazine _unit) isEqualTo []) then {
		  	_pm=(primaryWeaponMagazine _unit) select 0;
		  	if !(((primaryWeaponMagazine _unit) select 1)  isEqualTo "") then {
		  	  _pmg=(primaryWeaponMagazine _unit) select 1;
		  	};
		  	_apm=_unit ammo primaryWeapon _unit;
		  	_pwi=primaryWeaponItems _unit;
		};	
		_pwi=primaryWeaponItems _unit;  	
	};
	if !(_hw isEqualTo "") then {
		if !((handgunMagazine _unit) isEqualTo []) then {
		  	_hm=(handgunMagazine _unit) select 0;
		  	_ahm=_unit ammo handgunWeapon _unit;
		};
		_hwi= handgunItems _unit;
	};
	if !(_sw isEqualTo "") then {
		if !((secondaryWeaponMagazine _unit) isEqualTo []) then {
		  	_sm=(secondaryWeaponMagazine _unit) select 0;
		  	_asm=_unit ammo secondaryWeapon _unit;
		};
		_swi= secondaryWeaponItems _unit;
	};
	_weapons=[
		[_pw,[[_pm,_apm],_pmg],_pwi],
		[_hw,[_hm,_ahm],_hwi],
		[_sw,[_sm,_asm],_swi],
		currentWeapon _unit
	];
	_uniform=uniformContainer _unit;
	if !(_uniform isEqualTo objNull) then {
	  _uni=[uniform _unit,weaponCargo _uniform,magazinesAmmoCargo _uniform,itemCargo _uniform];
	};
	_vest=vestContainer _unit;
	if !(_vest isEqualTo objNull) then {
	  _vst=[vest _unit,weaponCargo _vest,magazinesAmmoCargo _vest,itemCargo _vest];
	};
	_backpack=backpackContainer _unit;
	if !(_backpack isEqualTo objNull) then {
	  _bpck=[backpack _unit,weaponCargo _backpack,magazinesAmmoCargo _backpack,itemCargo _backpack];
	};


	[
		_weapons
		,
		_uni
		,
		_vst
		,
		_bpck
		,
		[
			headgear _unit,goggles _unit,binocular _unit,assigneditems _unit - [binocular _unit]
		]
	]