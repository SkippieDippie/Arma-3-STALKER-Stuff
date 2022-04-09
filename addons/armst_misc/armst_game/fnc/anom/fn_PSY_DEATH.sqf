/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
ARMST_PSY_DEATH = {
private ["_unit","_zombie", "_z", "_newgroup", "_ZOMBIES", "_inventory"];
_unit = _this select 0;


_condition = typeOf _unit;

switch (_condition) do
	{
		case "Voen_private": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["Voen_private_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "bandits_private":
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["bandits_private_zombie", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "bandits_private2":
		{
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["bandits_private2_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "Dolg_private": 
		{
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["Dolg_private_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "Dolg_private2": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["Dolg_private2_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "armst_man_freedom": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["armst_man_freedom_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "freedom_private2": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["freedom_private2_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "loner_private1":
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["loner_private1_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "loner_private2": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["loner_private2_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "loner_private3": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["loner_private3_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "loner_private4": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["loner_private4_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "loner_private5": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["loner_private5_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "mercenaries_private": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["mercenaries_private_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "mercenaries_private2": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["mercenaries_private_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "Armst_novice":
		{	
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["Armst_novice_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "Armst_newbiebandit": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["Armst_newbiebandit_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "Armst_newbiebandit2": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["Armst_newbiebandit2_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "Armst_newbiebandit3": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["Armst_newbiebandit3_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "loner_l": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["loner_l_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "ARMY_l": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["ARMY_l_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "BANDITS_l": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["BANDITS_l_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "DOLG_l": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["DOLG_l_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "FREEDOM_l": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["FREEDOM_l_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "MERCENARIES_l": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["MERCENARIES_l_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "monolith_l": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["monolith_l_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "hazmat_2": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["hazmat_2_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "ARMY_b": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["ARMY_b_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "DOLG_b": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["DOLG_b_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "loner_b": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["loner_b_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "elite_Voen": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["elite_Voen_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "bandit_elite": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["bandit_elite_zombie", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "elite_dolg": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["elite_dolg_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "elite_freedom": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["elite_freedom_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "elite_loner1": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["elite_loner1_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "elite_loner2": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["elite_loner2_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "mercenaries_private2": 
		{ 
			
			_unit setDammage 1;
			
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["mercenaries_private_ZOMBIE2", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
		case "elite_merc": 
		{ 
			
			_unit setDammage 1;
			sleep 10;
			[_unit, [missionNamespace, _inventory]] call BIS_fnc_saveInventory;
			_unit hideObjectGlobal true;
			_newgroup = createGroup Civilian;
			_zombie = _unit modeltoworld [0,0,0];
			_z = _newgroup createUnit ["elite_merc_ZOMBIE", _zombie, [], 0, "NONE"];
			deleteVehicle _unit;
			[_z, [missionNamespace, _inventory]] call BIS_fnc_loadInventory;
			[_z] call AGM_WeaponSelect_fnc_putWeaponAway;
			_z addrating -1000000;
			[[_z, "ActP_upzombie"], "switchMove"] call bis_fnc_mp;
			_z setPos _zombie;
			sleep 26;
			[[_z, "AmovPercMwlkSnonWnonDb"], "switchMove"] call bis_fnc_mp;
		};
	
		default {_unit setDammage 1};
	};
};	