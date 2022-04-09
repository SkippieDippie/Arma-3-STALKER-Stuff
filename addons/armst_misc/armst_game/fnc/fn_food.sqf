/*
	author: 		Dragster (ARMSTALKER TEAM)
	e-mail:			1dragsteron@gmail.com
	file: 			fn_food.sqf
	version: 		1.00
	date: 			05.02.2018

	Parameter(s):
		0 :	_unit			- player
		1 :	_type 			- one of three type : "food","water","candy"
		2 :	_item 			- item which will be used
		3 :	_val 			- (optional) the amount by which the parameter increases
		4 :	_switchItem 	- (optional) the item(weapon-binocular) that will be used to display the animation
		5 :	_output 		- (optional) output item example "armst_item_vodkaempty"
		6 :	_alc 			- (optional) if _type is water then alcohol is it or no
		7 :	_camShake 		- (optional) if _alc = true then _camShake should be [power, duration, frequency]  

	EXAMPLES:
	[player, "candy", "ARMST_gum"] spawn armst_fnc_food;
	[player, "food", "Armst_item_Sgushenka", "armst_switch_Sgushenka", 0.4, "Armst_item_canempty"] spawn armst_fnc_food;
	[player, "water", "armst_item_vodka50", "armst_switch_vodka", 0.2, "armst_item_vodkaempty", true, [6,240,2]] spawn armst_fnc_food;
	for remoteExec 

	
	[_cursorTarget, "food", "ARMST_galets", "armst_switch_bred", 0.1] remoteExec ["armst_fnc_food", _cursorTarget];
*/

params [["_unit",objNull], ["_type",""], ["_item",""], ["_val",0], ["_switchItem",""], ["_output",""], ["_alc",false],["_camShake",[6,240,2]],["_energy",false]];

private ["_hunger", "_thirst", "_binocular", "_flag"];
_goggles = goggles _unit;
_ARMST_MASK = ["Armst_BalaclavaFreed"
	,"Armst_balaclava_dolg"
	,"Armst_balaclava_voen"
	,"G_Bandanna_aviator"
	,"armst_bandana"
	,"G_Bandanna_beast"
	,"G_Bandanna_tan"
	,"G_Bandanna_oli"
	,"G_Bandanna_sport"
	,"G_Bandanna_shades"
	,"G_Bandanna_khk"
	,"G_Bandanna_blk"
	,"armst_band_balaclava_3"
	,"armst_band_balaclava_2"
	,"armst_band_balaclava"
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
	,"armst_gasmaskm04"
	,"armst_gasmasks10"
	,"armst_gasmaskM50_2"
	,"armst_gasmaskBastard"
	,"armst_R5_SH2_filter"
	,"armst_R5_SH2"
	,"armst_R5_P_filter"
	,"armst_R5_P"
	,"armst_gasmasks10black"
	,"armst_R5_filter"
	,"armst_CN3p"
	,"armst_seva_visor"
	,"armst_gluhar_visor"
	,"armst_gasmask_albino"
	,"armst_CN2f"
	,"armst_bandanaGlass_2"
	,"armst_bandanaGlass_3"
	,"armst_bandanaGlass_4"
	,"armst_bandanaGlass_clearsky"
	,"armst_bandanaGlass_duty"
	,"armst_bandanaGlass_freedom"
	,"armst_bandanaGlass_merc"
	,"armst_bandanaGlass_monolith"
	,"armst_bandanaGlass_army"
	,"armst_G100_2"
	,"armst_G100_science"
	,"armst_GasP5_2"
	,"armst_gasmask_albino_2"
	,"armst_gasmask_albino_3"
	,"armst_Gasslon_2"
	,"armst_gasmasks10_2"
	,"armst_gasmasks10_ttr"
	,"armst_gasmasks10_ppk"
	,"armst_gasmasks10_flr"
	
];	
if (_goggles in _ARMST_MASK) exitwith {
  hint localize "str_stop";
};
_binocular = binocular _unit;
_flag = false;
if (_switchItem != "") then {
	_flag = true;
};
_hunger = _unit getVariable ["ARMST_HUNGER",1];
_thirst = _unit getVariable ["ARMST_THIRST",1];
switch (_type) do { 
	case "food" :  {
		if (_hunger > 1) exitwith {
			hint localize "str_stop";
		};

		disableUserInput true;
		disableUserInput false;
		disableUserInput true;
		
		if (_flag) then {
			_unit removeWeapon _binocular;
		};
		_unit action ["SwitchWeapon", _unit, _unit, 100];
		_unit removeItem _item;
		if (_flag) then {
			_unit addweapon _switchItem; 
			uiSleep 1; 
			_unit selectWeapon _switchItem; 
			_unit switchmove "AmovPercMstpSoptWbinDnon";  
			_unit playactionnow "GestureEat";    
		};
		_unit say2d "eating0"; 
		_unit setVariable ["ARMST_HUNGER", _hunger + _val];  
		if (_flag) then {
			sleep 7;
			_unit removeweapon _switchItem; 
		};
		if (_output != "") then {
			_unit additem _output;
		};

		if (_flag) then {
			_unit addWeapon _binocular;
		};
		
		_unit action ["SwitchWeapon", _unit, _unit, 100];

		disableUserInput false;
		disableUserInput true;
		disableUserInput false;
	}; 
	case "water" : {
		if (_thirst > 1) exitwith {
			hint localize "str_stop";
		};

		disableUserInput true;
		disableUserInput false;
		disableUserInput true;

		if (_flag) then {
			_unit removeWeapon _binocular;
		};
		_unit action ["SwitchWeapon", _unit, _unit, 100];

		_unit removeItem _item;
		if (_flag) then {
			_unit addweapon _switchItem; 
			uiSleep 1; 
			_unit selectWeapon _switchItem; 
			_unit switchmove "AmovPercMstpSoptWbinDnon";  
			_unit playactionnow "GestureDrink";   
		};
	 
		_unit say2d "drinking";  
		_unit setVariable ["ARMST_THIRST", _thirst + _val];  
		if (_alc) then {
			_unit setVariable ["ARMST_BODYTEMP", 1];  
			ARMST_BODYTEMP = 37;
			[0] remoteExec ["ARMST_Radiation_SetInfection", _unit];
			[0] call ARMST_Radiation_SetInfection;
			addcamshake _camShake;
		};
		if (_flag) then {
			sleep 7;
			_unit removeweapon _switchItem; 
		};

		if (_output != "") then {
			_unit additem _output;
		};

		if (_flag) then {
			_unit addWeapon _binocular;
		};
		if (_energy) then {
			_unit setFatigue 0;
		};
		_unit action ["SwitchWeapon", _unit, _unit, 100];

		disableUserInput false;
		disableUserInput true;
		disableUserInput false;
	}; 
	case "candy" : {
		switch (_item) do { 
			case "ARMST_gum" : {
				player removeitem "ARMST_gum";
				player say2d "sladost";
				["Пластинка незаметно быстро перемещается с руки на язык и медленно тает во рту. Вкусно, залипательно!"] call ace_common_fnc_displayTextStructured;   
			}; 
			case "ARMST_skittles" : {
				player removeitem "ARMST_skittles";
				player say2d "sladost";
				if (_hunger < 1) then {
					player setVariable ["ARMST_HUNGER", _hunger + _val];
				};
				["Я с легкостью открываю упаковку и закидываю в рот всю пачку конфет."] call ace_common_fnc_displayTextStructured;   
			}; 
		};
	}; 
};
