
	_key = _this select 1;
	_shift = _this select 2;
	_ctrl = _this select 3;
	
	//hint (str _key);
if !(player getVariable "FAR_isUnconscious" == 1) then 
{

	switch (_key) do {
		//Y key
		case 3: {
			_anim = if(_ctrl) then {"GestureCheckWeap"};
			player playActionNow _anim;
		};
		case 9: {
				["К рукопашному бою готов."] call ace_common_fnc_displayTextStructured;
				player setVariable ["armst_fighter", 1];
				player playActionNow "armst_fight_idl";
				[player] call AGM_WeaponSelect_fnc_putWeaponAway;
		};
		case 10: {
				["Я не буду драться."] call ace_common_fnc_displayTextStructured;
				player setVariable ["armst_fighter", 0];
				player playActionNow "GestureOUT";
		};
		case 19: {	
			if ((player getVariable "armst_fighter") == 1) then 
			{
			[] spawn armst_fnc_fighter;
			};
		};
		case 20: {
				call ARMST_Radiation_ShowRadimetr;
		};
		case 22: {
		
			player playActionNow 'Gesturecompass';
			call ARMST_Detectors_ShowDetector; 

			if ("armst_item_pda" in (assignedItems player)) then 
				{
					["main"] call drg_fnc_tabpda;
				};		
					
		};
		case 24: {	
			player playActionNow 'Gesturearmst_clockl';
		};
		case 37: {
			player playActionNow 'Gesturecompass';
		};
		case 41: {
			[player] execVM "\armst\armst_misc\armst_game\scripts\fn_jump.sqf";
		};
		case 58: {
			player playActionNow 'GestureRadioTalk';
		};
		case 59: {
		ARMST_GAME = ["GestureGameKamen","GestureGamebumaga","GestureGamenojnice"];
		_ARMST_GAME = ARMST_GAME select floor random count ARMST_GAME;
		_anim = if(_ctrl) then {_ARMST_GAME}else{"GestureOUT"};
			player playActionNow _anim;
		};
		case 60: {
			player playActionNow 'GesturePrivet';
		};
		case 61: {
			player playactionnow "GestureUkaz";
		};
		case 62: {
			player playactionnow "GestureThumb";
		};
		case 63: {
			player playActionNow 'GestureFacepalm';
		};
		case 64: {
			_anim1 = if(_ctrl) then {"GestureFuck"}else{"Gestureugroza"};
			player playActionNow _anim1;
		};
		case 65: {
			player playActionNow 'GestureSilenced';
		};
		case 66: {
			player playActionNow 'GestureSdastsa';
		};
		default {};
	};
};