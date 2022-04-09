/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

private ["_obj","_pos","_fog1","_fog2","_fog3","_inVehicle"];
        _inVehicle = (vehicle player != player);
 
        if (_inVehicle) then {
            _obj = (vehicle player);
        } else {
            _obj = player;
        };
 
        _pos = position _obj;
 
        _fog1 = "#particlesource" createVehicleLocal _pos;
        _fog1 setParticleParams [
        ["\A3\Data_F\ParticleEffects\Universal\universal.p3d" , 16, 12, 13, 0], "", "Billboard", 1, 10,
            [0, 0, -6], [0, 0, 0], 1, 1.275, 1, 0,
            [7,6], [[0,1,0, 0], [0,1,0, 0.04], [0,1,0, 0]], [1000], 1, 0, "", "", _obj
        ];
        _fog1 setParticleRandom [3, [55, 55, 0.2], [0, 0, -0.1], 2, 0.45, [0, 0, 0, 0.1], 0, 0];
        _fog1 setParticleCircle [0.001, [0, 0, -0.12]];
        _fog1 setDropInterval 0.01;
 
        _fog2 = "#particlesource" createVehicleLocal _pos;
        _fog2 setParticleParams [
        ["\A3\Data_F\ParticleEffects\Universal\universal.p3d" , 16, 12, 13, 0], "", "Billboard", 1, 10,
            [0, 0, -6], [0, 0, 0], 1, 1.275, 1, 0,
            [7,6], [[1, 1, 1, 0], [1, 1, 1, 0.04], [1, 1, 1, 0]], [1000], 1, 0, "", "", _obj
        ];
        _fog2 setParticleRandom [3, [55, 55, 0.2], [0, 0, -0.1], 2, 0.45, [0, 0, 0, 0.1], 0, 0];
        _fog2 setParticleCircle [0.001, [0, 0, -0.12]];
        _fog2 setDropInterval 0.01;
 
        _this setVariable ["playerfog", floor time + 5];
		
		if ((vest player) in ["Armst_sevastalk","Armst_sevamonolith","Armst_sevadolg","Armst_sevasvoboda","Armst_sevanaemnik","Armst_sevavoen","Armst_science2"]) then 
			{
			if ((goggles player)=="armst_seva_visor") then 
				{
				if ((headgear player) in ["armst_seva_shlem","armst_seva_science_shlem"]) then 
					{
					if ((backpack player) in ["armst_seva_backpack","armst_backpack_ballon","armst_seva_science_backpack"]) then 
						{
						}
						else {playsound (["player_BreathPain","player_BreathPain2","player_BreathPain3","player_BreathPain4","player_BreathPain5"] call BIS_fnc_selectRandom);player setDammage (getDammage player + 0.05);};						
					}
					else {playsound (["player_BreathPain","player_BreathPain2","player_BreathPain3","player_BreathPain4","player_BreathPain5"] call BIS_fnc_selectRandom);player setDammage (getDammage player + 0.05);};
				}
				else {playsound (["player_BreathPain","player_BreathPain2","player_BreathPain3","player_BreathPain4","player_BreathPain5"] call BIS_fnc_selectRandom);player setDammage (getDammage player + 0.05);};
			}
			else {playsound (["player_BreathPain","player_BreathPain2","player_BreathPain3","player_BreathPain4","player_BreathPain5"] call BIS_fnc_selectRandom);player setDammage (getDammage player + 0.05);};
		
		
 
        sleep 10;
 
        deleteVehicle _fog1;
        deleteVehicle _fog2;