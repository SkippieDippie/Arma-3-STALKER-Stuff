
	[] spawn 
	{
		waitUntil {time > 10 && !isNull player};
		if(isMultiplayer && didJIP) then 
		{
			call SAN_fnc_JIP_syncWithServer;
		};	
		
		call SAN_fnc_addHeadLampPFH;
			SAN_Headlamp_MainKeyDown = false;
			
			SAN_Headlamp_KeyDown = (findDisplay 46) displayAddEventHandler ["KeyDown", 
			{
				_ret = false;
				params ["_display","_dikKey","_shift","_ctrl","_alt"];
				
				if (_dikKey in (actionkeys "NightVision")) then
				{
					if(SAN_Headlamp_MainKeyDown) exitwith {};
					
					SAN_Headlamp_MainKeyDown = true;
					if((!_ctrl && _shift) && ((hmd player) in SAN_Headlamp_Headlamps || (headgear player) in SAN_Headlamp_Helmets)) then 
					{				
						player call SAN_fnc_ToggleHeadlamp_local;
						_ret = true;				
					};						
					if((!_ctrl && !_shift && _alt) && ((hmd player) in SAN_Headlamp_Headlamps || (headgear player) in SAN_Headlamp_Helmets)) then 
					{
						player call SAN_fnc_cycleLampBrightness;
						_ret = true;
					};	
					if((_ctrl && !_shift && !_alt) && ((hmd player) in SAN_Headlamp_ColorCompatibleLamps || (headgear player) in SAN_Headlamp_ColorCompatibleLamps)) then 
					{
						player call SAN_fnc_cycleLampColor;	
						_ret = true;
					};					
				};
				_ret
			}];		
			SAN_Headlamp_KeyUp = (findDisplay 46) displayAddEventHandler ["KeyUp", 
			{
				_ret = false;
				params ["_display","_dikKey"];
				if (_dikKey in (actionkeys "NightVision")) then
				{
					SAN_Headlamp_MainKeyDown = false;	
				};
				_ret
			}];
		};		