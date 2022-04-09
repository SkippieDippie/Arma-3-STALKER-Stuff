/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/


	//Autors: Aloe, Romzet
	//Description:
	//Tелепортирует игрока с триггера Trigger на другой в соответсвии с параметрами Index и Altitude
		
	//Parameter(s):
	//0: Trigger <Object> Текущий триггер
	//1: Index <Number, Array> Если параметр является числом, телепортация осуществляется на триггер с этим индексом. 
	//Если является массивом с одним элементом [0], параметр принимает контекст шага и телепортация будет осуществлена на
	//рандомный, соседний (по индексу) триггер (исключая текущий) в соответсвии с шагом. 
	//Note: Если шаг = 0, телепортация будет осуществлена на этот же триггер   
	//2: Altitude <Number> (Optional) Высота, по умолчанию: 0

	if(params [["_activator", objNull, [objNull]], ["_point", [0], [0, [0]]]]) then {
	
		//local only
		if (local player) then {
			private ["_altitude", "_formatTrgName", "_getTriggerIndex", "_getRandomPoint", "_triggerNext"];
			
			_altitude = if(count _this > 2)then{_this select 2}else{0};
			_formatTrgName = "anomalyTeleportLes_";
			_pos = getpos _activator;
			
			
			
_PS3 = "#particlesource" createVehicle _pos;
_PS3 setParticleCircle [0, [0, 0, 0.6]];
_PS3 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0,0,0,0], 0, 0];
_PS3 setDropInterval 4;
_PS3 setParticleParams  [["\A3\data_f\ParticleEffects\Universal\Refract", 1, 0, 1],"","Billboard",1,5,[0,0,1],[0,0,0],  0,  0.5,  0.395,  0,         [2, 3],       [[1,1,1,1],[1,1,1,0.9], [1,1,1,0]],[1],0,0,"","",""];
 
  
_sparkParticleSource1 = "#particlesource" createVehicle _pos;
_sparkParticleSource1 setParticleCircle [0, [0, 0, 0]]; 
_sparkParticleSource1 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0]; 
_sparkParticleSource1 setDropInterval 0.1; 
_sparkParticleSource1 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.4,  5,  [0,0,1.4],  [0,0,0],  0,0.3,0.235,0,  [0.009,0.008,0.009],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true]; 

 
_sparkParticleSource3 = "#particlesource" createVehicle _pos;
_sparkParticleSource3 setParticleCircle [8, [0, 0, 0]];
_sparkParticleSource3 setParticleRandom [0, [0, 0, 1], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
_sparkParticleSource3 setDropInterval 0.075;
_sparkParticleSource3 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.27,  0.27,  [0,0,0.6],  [0,0,0],  0,0.3,0.233,0,  [0.011,0.01,0.011],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true];

_sparkParticleSource4 = "armst_idle_teleport_idle" createVehicle _pos;

_light = "#lightpoint" createVehiclelocal _pos;
_light setLightBrightness 1;  
_light setLightAmbient[0,0,0];  
_light setLightColor[0,0.604,0.804];  
_light lightAttachObject [_PS3, [0,0,1.5]];  
_light setLightUseFlare true;  
_light setLightFlareSize 5;  
_light setLightDayLight true;  
_light setLightFlareMaxDistance 50;
			

			
			
			
			//Get Index from trigger name function
			_getTriggerIndex = {
				private ["_name", "_nameSeparate", "_index"];
				_index = -1;
				{
					if (missionNamespace getVariable _x isEqualTo _this) exitWith {_name = _x};
				} forEach allVariables missionNamespace;
				
				if !(isNil "_name") then {
					_nameSeparate = _name splitString "_";
					if !(_nameSeparate isEqualTo []) then {
						_index = parseNumber (_nameSeparate select 1);
					};
				};
			_index;
			};
			
			//Get a random trigger on the index between spending function
			_getRandomPoint = {
				params ["_current", "_diverge"];
				private ["_point", "_period", "_attempt"];
				
				_point = objNull;
				_period = [];
				for "_i" from (_current - _diverge) to (_current + _diverge) step 1 do {
					if(_i > 0 and _i != _current) then {_period pushBack _i}else{_diverge = _diverge + 1};
				};
				
				if(count _period > 0) then {
					_attempt = 0;
					while {_attempt <= count _period} do {
						private ["_randTrg"];
						_randTrg = missionNamespace getVariable [format["%1%2", _formatTrgName, _period select floor random count _period], nil];
						if !(isNil "_randTrg") exitWith {
							_point = _randTrg;
						};
						
					_attempt = _attempt + 1;
					};
				};

			_point;
			};
			
			switch (typeName _point) do {
				case "SCALAR" : {
					_triggerNext = missionNamespace getVariable (format ["%1%2", _formatTrgName, _point]);
				};
				case "ARRAY" : {
					private ["_currentIndex"];
					_currentIndex = _activator call _getTriggerIndex;
					_point = _point select 0;
					
					if(_point > 0) then {
						_triggerNext = [_currentIndex, _point] call _getRandomPoint;
					}else{
						_triggerNext = [_currentIndex, _point] call _getRandomPoint;
					};
				};
				default {};
			};
				
			//hint format ["Текущий индекс: %1 Следующий: %2", str (_activator call _getTriggerIndex), str (_triggerNext call _getTriggerIndex)];
			
			if !(isNil "_triggerNext") then {
			
				if (alive player) then {
					
					sleep 3;
					if(player in list _activator) then { //Снова проверяем после задержки
						
						enableCamShake true;
						addCamShake [2, 10, 25];
						sleep 2;
						if(player in list _activator) then { //И ещё раз и всегда после задержек
							//player playactionnow "Gestureheadkick";
							addCamShake [3, 5, 20];
							player setFatigue 1;
							//player playactionnow "Gestureheadkick";
							private ["_teleportPos"];
							[[player, "spotikanie_anim"], "switchMove"] call bis_fnc_mp;
							_teleportPos = getPosATL _triggerNext;
							_teleportPos set [2, _altitude];
							player setPosATL _teleportPos;
							sleep 1;
							[[player, "spotikanie_anim"], "switchMove"] call bis_fnc_mp;
							sleep 2;
							[[player, "spotikanie_anim2"], "switchMove"] call bis_fnc_mp;
							//if (RANDOMDEATH >= 8) then {player setdamage 1;};
						};
					};
					sleep 2;
					deleteVehicle _PS3;
					deleteVehicle _sparkParticleSource1;
					deleteVehicle _sparkParticleSource3;
					deleteVehicle _sparkParticleSource4;
					deleteVehicle _light;
				};
			} else {
				private ["_error"];
				_error =  format ["Undefined trigger '%1'", format ["%1%2", _formatTrgName, _point]];
				diag_log _error;
				hint _error;
			};
			
		};
	}else{
		diag_log format ["Incorrect params: %1 in %2", _this, __FILE__];
	};