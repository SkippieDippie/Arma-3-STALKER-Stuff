	/*
		Author: Aloe
		Description:
		Current location runtime status HUD
	*/
	
_this spawn
{	
	disableSerialization;
	("LocationHud" call bis_fnc_rscLayer) cutRsc ["LocationHud", "PLAIN"];
	_ui = uiNamespace getVariable "LocationHud";				
	
	waitUntil {
		sleep 1;
		
		if !(isNil "ARMST_fnc_moduleLocation_locations") then {
			/**/
			if(count ARMST_fnc_moduleLocation_locations > 0) then {
				
				private ["_locations", "_currentLocation"];
				
				_locations = [];
				{_locations set [_forEachIndex, [_x distance player, _x]]} foreach ARMST_fnc_moduleLocation_locations;
				_locations sort true;
				_currentLocation = (_locations select 0) select 1;

				if !(_currentLocation getVariable ["finalized", false]) then {
					
					private ["_progressBarCtrl", "_locPicCtrl", "_locNameCtrl", "_progress"];
					
					_progressBarCtrl = _ui displayCtrl 2005;
					_locPicCtrl = _ui displayCtrl 1002;
					_locNameCtrl = _ui displayCtrl 2002;
					
					if (player distance _currentLocation <= _currentLocation getVariable ["Radius", 100]) then {
						
						{_x ctrlShow true} foreach [_progressBarCtrl, _locNameCtrl, _locPicCtrl];
						
						_locNameCtrl ctrlSetText (_currentLocation getVariable ["Name", ""]);
						
						private _flagTextue = (getText (configFile >> "cfgFactionClasses" >> _currentLocation getVariable ["Owner", ""] >> "flag") call BIS_fnc_textureMarker);
						if (_flagTextue isEqualTo "") then {
							_flagTextue = "mil_box" call BIS_fnc_textureMarker;
						};
						_locPicCtrl ctrlSetText _flagTextue;
					
						_progress = [_currentLocation getVariable ["Score", []], faction player, 0] call BIS_fnc_getFromPairs;

						_progressBarCtrl ctrlSetPosition [
							safezoneX + (safezoneW / 2) - (0.106 * safezoneW),
							safezoneY + 0.071 * safezoneH,
							0.212 * safezoneW * _progress,
							0.012 * safezoneH
						];
							
						_progressBarCtrl ctrlCommit 1;
						
					} else {
						{_x ctrlShow false} foreach [_progressBarCtrl, _locNameCtrl, _locPicCtrl];
					};
				};
			};
		};
		
	false
	};
};