
	/*
	Author: Aloe
		
	Description:
	Initalize location module
		
	Parameter(s):
	_this select 0: <object> module

	*/
	
	if (isServer) then {
		
		params ["_module"];
		
		private _paramName 				= _module getVariable ["Name", ""];
		private _paramRadius 				= (_module getVariable ["Radius", 100]) / 2;
		private _paramRevard 				= _module getVariable ["RevardScore", 0];
		private _paramCaptureCoef 		= _module getVariable ["CaptureCoef", 0.025];
		private _paramOnOwnerChange	 = _module getVariable ["onOwnerChange", ""];
		private _paramFlagCreate			 = _module getVariable ["FlagCreate", 1];
		private _paramRespawnContested	 = _module getVariable ["RespawnContested", 1];
		
		//--- Create trigger
		private _locCenter = getPosATL _module;
		
		private _logic = createTrigger ["EmptyDetector", _locCenter];
		_logic setTriggerActivation  ["ANY", "PRESENT", false];
		_logic setTriggerArea [_paramRadius, _paramRadius, 0, false];
		
		//--- Create marker
		private _locMark = createMarker [format ["ARMST_location%1", random 999 + random 999], _locCenter];
		_locMark setMarkerShape "ICON";
		_locMark setMarkerType "u_installation";
		_locMark setMarkerText _paramName;
		_locMark setMarkerAlpha 1;
		_locMark setMarkerSize [1, 1];
		
		//--- Create marker (Area)
		private _locMarkArea = createMarker [format ["%1Area", _locMark], _locCenter];
		_locMarkArea setMarkerShape "ELLIPSE";
		_locMarkArea setMarkerBrush "Grid";
		_locMarkArea setMarkerColor "colorBlack";
		_locMarkArea setMarkerAlpha 0.3;
		_locMarkArea setMarkerSize [_paramRadius, _paramRadius];
		
		//--- Create Flag
		if(_paramFlagCreate > 0) then {
			private _locFlag = createVehicle ["Flag_BI_F", _locCenter, [], 0, "NONE"];
			_logic setVariable ["Flag", _locFlag];
		};
		
		//--- Register the expression as a scripted event handler
		[_logic, "ownerChanged", _paramOnOwnerChange] call bis_fnc_addscriptedeventhandler;
		
		//--- Store location variables
		_logic setVariable ["LocationName", vehicleVarName _module];
		_logic setVariable ["LocationReward", _paramRevard];
		_logic setVariable ["LocationMarkers", [_locMark, _locMarkArea]];
		
		_logic setVariable ["Name", _paramName, true];
		_logic setVariable ["Radius", _paramRadius, true];
		_logic setVariable ["Owner", "", true];
		_logic setVariable ["Contested", false, true];
		_logic setVariable ["Finalized", false, true];
		
		
		//--- Broadcast location
		private _locations = missionNamespace getvariable ["ARMST_fnc_moduleLocation_locations",[]];
		_locations pushBack _logic;
		
		missionNamespace setVariable ["ARMST_fnc_moduleLocation_locations", _locations];
		publicVariable "ARMST_fnc_moduleLocation_locations";
		
		//---  Definitions
		private _timer = 0;
		
		private _factions =		[];
		private _factionsScore =	[];
		private _locationScore =	[];
		private _contested = false;
		private _owner = "";
		private _ownerOld = _owner;
		
		{
			private _configName = configName _x;
			
			if (getNumber (_x >> "captureLocations") isEqualTo 1) then {
				_factions pushBack _configName; 
				_factionsScore pushBack 0; 
				_locationScore pushBack [_configName, 0];
			};
		} foreach ([missionConfigFile >> "ARMST_Factions", 0, true] call BIS_fnc_returnChildren);
		
		if !(_factions isEqualTo []) then {
		
			while {!(isnull _logic) && (simulationenabled _logic) && !(_logic getvariable ["Finalized",false])} do {
			
				private _timeCoef = _paramCaptureCoef * (time - _timer);
				
				//Расчёт  коэффициента влияния группировок
				private _list = [];
				{
					if (faction _x in  _factions  and alive _x) then {_list pushBack _x};
				} foreach (list _logic);
				
				{
					private _faction = _x;
					private _total = count _list;
					private _impact = {faction _x isEqualTo _faction} count _list;

					if !(_total isEqualTo 0) then {
						if !(_impact isEqualTo 0) then {
							_factionsScore set [_foreachIndex, _impact / _total];
						} else {
							_factionsScore set [_foreachIndex, 0];
						};
					} else {
						_factionsScore set [_foreachIndex, 0];
					};
				} foreach _factions;
				
				
				//Определение лидера
				private _maxScore = 0;
				private _leaderIndex = -1;
				{
					if (_x > _maxScore) then {
						_maxScore = _x;
						_leaderIndex = _foreachIndex;
					};
				} foreach _factionsScore;
				if ({_maxScore isEqualTo _x} count  _factionsScore > 1) then {_leaderIndex = -1};
				
				//Расчёт прогресса захвата
				if !(_leaderIndex isEqualTo -1) then {
					{
						if (_foreachIndex isEqualTo _leaderIndex) then {
							_x set [1, ((_x select 1) + _timeCoef) min 1];
							private _friendly = [_factions select _leaderIndex] call ARMST_fnc_friendlyFactions;
							if ((_x select 1) isEqualTo 1 and !(_owner in _friendly)) then {
								_owner = _factions select _leaderIndex;
							};
						} else {
							_x set [1, ((_x select 1) - _timeCoef) max 0];
						};
					} foreach _locationScore;
				};
				
				//Форсирование владельца
				if !(isNil {_logic getVariable ["ForcedOwner", nil]}) then {
					{
						if ((_x select 0) == (_logic getVariable "ForcedOwner")) then {
							_owner = _x select 0;
							_x set [1, 1];
						} else {_x set [1, 0]};
					} foreach _locationScore;
				};
				
				//if !((_logic getVariable ["Score", []]) isEqualTo _locationScore) then {
				//	_logic setVariable ["Score", _locationScore, true];
				//};
				
				_contested = {_x select 1 in [0,1]} count _locationScore != count _locationScore;
				if !((_logic getVariable ["Contested", false]) isEqualTo _contested) then {
					_logic setVariable ["Contested", _contested, true];
				};
				
				
				//--- Execute code when ownership changes
				if !(_owner isEqualTo _ownerOld) then {
					
					private _factionConfig = configFile >> "CfgFactionClasses" >> _owner;
					
					//--- Call custom code
					[_logic, "ownerChanged", [_logic, _owner, _ownerOld]] call bis_fnc_callscriptedeventhandler;
					
					//--- Broadcast
					_logic setVariable ["Owner", _owner, true];
					
					
					//--- Change FlagTexture
					if !(isNil {_logic getVariable ["Flag", nil]}) then {
						(_logic getVariable "Flag") setFlagTexture (getText (_factionConfig >> "flag") call BIS_fnc_textureMarker);
					};
					
					//---Change markers
					_locMark setMarkerType getText (_factionConfig >> "flag");
					_locMarkArea setMarkerColor getText (_factionConfig >> "color");
					
					if (isNil {_logic getVariable ["ForcedOwner", nil]}) then {
						
						//---Notifications
						//[_logic, _owner, _ownerOld] remoteExec ["ARMST_fnc_showLocationNote"];
						
						//---Save
						if !(isNil "ARMST_Location_ChangeOwner") then {
							[_logic, _owner, _ownerOld] call ARMST_Location_ChangeOwner;
						};
						
					} else {
						_logic setVariable ["ForcedOwner", nil];
					};
				};
				
				_timer = time;
				_ownerOld = _owner;
				
			sleep 1;
			};
			
			//--- Sector finalized
			[_logic] call ARMST_fnc_locationFinalize;
			
		} else {
			["Factions not defined!"] call BIS_fnc_error;
		};
	};
	