/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

	player = _this select 0;

player setVariable ["ARMST_THIRST", 100];  
player setVariable ["ARMST_HUNGER", 100]; 
 
player addAction ["Зов", "[player, 'armst_infected_angry',300] call CBA_fnc_globalSay3d;"]; 
player addAction ["Атаковать", " 
[player, 'armst_infected_attack',100] call CBA_fnc_globalSay3d; 
player playactionnow 'GestureKrovAttack2'; 
_distance = player distance cursortarget; 
_damage = getDammage cursortarget; 
if(_distance <= 1) then {cursortarget setdamage (_damage + 0.25); } else {};
sleep 2; 
player playactionnow 'GestureOUT'; "
];	
	
	
	
 while {true} do 
	{
		player say3D "armst_infected_idle";
		removeAllWeapons player;
		[0] call ARMST_Radiation_SetInfection;	
		_fatigue = getFatigue player;
		player setFatigue (_fatigue - 1);
		sleep 5;
	};