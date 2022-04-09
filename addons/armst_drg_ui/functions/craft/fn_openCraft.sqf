/*
	Author: Vladimir Vorobev <Dragster>
	E-mail:1dragsteron@gmail.com

	Description:
	Open Craft menu

	Parameter(s):
		None

	Returns:
		None

	example call: 		[] call DRG_fnc_openCraft;
*/
	createDialog "dragster_empty_dialog";
	disableSerialization;

	if (isNull (findDisplay 67000)) exitWith {};
	_display = findDisplay 67000;
	
	_sizeMultiplier = (1 / (getResolution select 5));
	_pW = pixelW * 5 * (getResolution select 0) / 1920;
	_pH = pixelH * 5 * (getResolution select 1) / 1080;
	_craftWindowWidth = 280 * _pW;
	_craftWindowHeight = 154 * _pH;
	
	_craftWindowGroup = _display ctrlCreate ["RscControlsGroupNoScrollbars",1100];
	_craftWindowGroup ctrlSetPosition [safeZoneXabs + (safeZoneWAbs / 2) - (_craftWindowWidth / 2),safeZoneY + (safeZoneH / 2) - (_craftWindowHeight / 2),_craftWindowWidth,_craftWindowHeight];
	_craftWindowGroup ctrlSetFade 1;
	_craftWindowGroup ctrlCommit 0; 
	_craftWindowGroup ctrlSetFade 0;
	_craftWindowGroup ctrlCommit 0.25;
	
	[_display,_craftWindowGroup,-1,[0,0,_craftWindowWidth,_craftWindowHeight],"drg_ui\textures\craft\background.paa",[0,0,0,1],false,false,""] call DRG_fnc_makePicture;

	{
		_b = [_display,_craftWindowGroup,(_x select 0),(_x select 1),(_x select 2),(_x select 3)] call DRG_fnc_makeButton;
		_b ctrlAddEventHandler ["ButtonClick",  (_x select 4) ]; 
		_b ctrlSetTooltip (_x select 5);
	} forEach [
		[200,[138.223*_pW,118.959 *_pH,24.883*_pW,27.371*_pH] ,"1",1,"_butt = ((findDisplay 67000) displayCtrl 200);_butt ctrlShow true;_lb = (findDisplay 67000) displayCtrl 67022;_index = lbCurSel _lb;if (_index == -1) exitWith {};[(_lb lbData _index)] call DRG_fnc_startCraft;_butt ctrlShow false;","Создать"],
		[-1 ,[246.777*_pW,118.959*_pH, 24.883*_pW,27.371*_pH],"1",1,"hint '';(findDisplay 67000) closeDisplay 0","Выход"]
	];




	_lb = [_display,_craftWindowGroup,67022,[33.246	*_pW,15.189*_pH,93.847*_pW,124.840*_pH],[0,0,0,0],[0,0,0,1],true,0.07] call DRG_fnc_makeDRGCraftListBox;
	_lb ctrlSetFont "EpsilonCTT";
	
	_lb ctrlAddEventHandler ["LBSelChanged", {
		params ['_lb','_index'];
		private ["_cfg", "_ingridients", "_instruments", "_lbingrid", "_lbinstrum", "_butt","_can"];
		_can = true;
		_cfg = missionConfigFile >> "DRG_Craft_Config" >> (_lb lbData _index);
		// _cfg = ConfigFile >> "DRG_Craft_Config" >> (_lb lbData _index);
		_ingridients = getArray(_cfg >> "ingridients");
		_instruments = getArray(_cfg >> "instruments");
		_lbingrid = ((findDisplay 67000) displayCtrl 67023);
		_lbinstrum = ((findDisplay 67000) displayCtrl 67024);
		_butt = ((findDisplay 67000) displayCtrl 200);
		_butt ctrlShow true;
		lbClear _lbingrid;
		lbClear _lbinstrum;
		if !(_ingridients isEqualTo [""]) then {
			{
				if (typename _x == "STRING") then {
					if (isNil _x) then {
						_bc = [_x] call DRG_fnc_getBaseConfig;
						_displName = getText(configFile >> _bc >> _x >> "displayName");
						_pic = getText(configFile >> _bc >> _x >> "picture");
						_i = _lbingrid lbAdd format['1x %1',_displName];
						_lbingrid lbSetPicture [_i,_pic];
						_lbingrid lbSetTooltip [_i,'Список необходимых предметов'];
						if !(_x in (itemsWithMagazines player)) then {
							_lbingrid lbSetColor [_i, [0.3, 0, 0, 0.7]];
							_lbingrid lbSetSelectColor [_i, [0.3, 0, 0, 0.7]];
							_lbingrid lbSetSelectColorRight [_i, [0.3, 0, 0, 0.7]];
							_can = false;
						} else {
							_lbingrid lbSetColor [_i, [0, 0.3, 0, 0.7]];
							_lbingrid lbSetSelectColor [_i, [0, 0.3, 0, 0.7]];
							_lbingrid lbSetSelectColorRight [_i, [0, 0.3, 0, 0.7]];
						};
					};
				} else {
					_itm = _x select 0;
					if (isNil (_itm)) then {
						_bc = [_itm] call DRG_fnc_getBaseConfig;
						_displName = getText(configFile >> _bc >> _itm>> "displayName");
						_pic = getText(configFile >> _bc >> _itm >> "picture");
						_i = _lbingrid lbAdd format['%2x %1',_displName,_x select 1];
						_lbingrid lbSetPicture [_i,_pic];
						_lbingrid lbSetTooltip [_i,'Список необходимых предметов'];
						if !(({_x == _itm} count itemsWithMagazines player) >= _x select 1) then {
							_lbingrid lbSetColor [_i, [0.3, 0, 0, 0.7]];
							_lbingrid lbSetSelectColor [_i, [0.3, 0, 0, 0.7]];
							_lbingrid lbSetSelectColorRight [_i, [0.3, 0, 0, 0.7]];
							_can = false;
						} else {
							_lbingrid lbSetColor [_i, [0, 0.3, 0, 0.7]];
							_lbingrid lbSetSelectColor [_i, [0, 0.3, 0, 0.7]];
							_lbingrid lbSetSelectColorRight [_i, [0, 0.3, 0, 0.7]];
						};
					};
				};
			} forEach _ingridients;
		};
		if !(_instruments isEqualTo [""]) then {
			{
				if (typename _x == "STRING") then {
					if (isNil _x) then {
						_bc = [_x] call DRG_fnc_getBaseConfig;
						_displName = getText(configFile >> _bc >> _x >> "displayName");
						_pic = getText(configFile >> _bc >> _x >> "picture");
						_i = _lbinstrum lbAdd format['1x %1',_displName];
						_lbinstrum lbSetPicture [_i,_pic];
						_lbinstrum lbSetTooltip [_i,'Список необходимых инструментов'];
						if !(_x in (itemsWithMagazines player)) then {
							_lbinstrum lbSetColor [_i, [0.3, 0, 0, 0.7]];
							_lbinstrum lbSetSelectColor [_i, [0.3, 0, 0, 0.7]];
							_lbinstrum lbSetSelectColorRight [_i, [0.3, 0, 0, 0.7]];
							_can = false;
						} else {
							_lbinstrum lbSetColor [_i, [0, 0.3, 0, 0.7]];
							_lbinstrum lbSetSelectColor [_i, [0, 0.3, 0, 0.7]];
							_lbinstrum lbSetSelectColorRight [_i, [0, 0.3, 0, 0.7]];
						};
					};
				} else {
					_itm = _x select 0;
					if (isNil (_itm)) then { 
						_bc = [_itm] call DRG_fnc_getBaseConfig;
						_displName = getText(configFile >> _bc >> _itm >> "displayName");
						_pic = getText(configFile >> _bc >> _itm >> "picture");
						_i = _lbinstrum lbAdd format['%2x %1',_displName,_x select 1];
						_lbinstrum lbSetPicture [_i,_pic];
						_lbinstrum lbSetTooltip [_i,'Список необходимых инструментов'];
						if !(({_x == _itm} count itemsWithMagazines player) >= _x select 1) then {
							_lbinstrum lbSetColor [_i, [0.3, 0, 0, 0.7]];
							_lbinstrum lbSetSelectColor [_i, [0.3, 0, 0, 0.7]];
							_lbinstrum lbSetSelectColorRight [_i, [0.3, 0, 0, 0.7]];
							_can = false;
						} else {
							_lbinstrum lbSetColor [_i, [0, 0.3, 0, 0.7]];
							_lbinstrum lbSetSelectColor [_i, [0, 0.3, 0, 0.7]];
							_lbinstrum lbSetSelectColorRight [_i, [0, 0.3, 0, 0.7]];
						};
					};
				};
			} forEach _instruments;
		};
		if !(_can) then {
			_butt ctrlShow false;
		};
	}];

	_lb1 = [_display,_craftWindowGroup,67023,[142.461*_pW,27.213*_pH,130.293*_pW,37.598*_pH],[0,0,0,0],[0,0,0,1],true,0.07] call DRG_fnc_makeDRGCraftListBox;
	_lb2 = [_display,_craftWindowGroup,67024,[142.461*_pW,77.301*_pH,130.293*_pW,37.598*_pH],[0,0,0,0],[0,0,0,1],true,0.07] call DRG_fnc_makeDRGCraftListBox;
	_lb1 ctrlSetFont "EpsilonCTT";
	_lb2 ctrlSetFont "EpsilonCTT";

	{
		private["_item","_count","_pic","_i","_bc"];
		if (isArray(_x >> "item")) then {
			_arr = getArray(_x >> "item");
		_item =  _arr select 0;
		_count = _arr select 1;
		} else {
				_item = getText(_x >> "item");
				_count = 1;
		};
		_bc = [_item] call DRG_fnc_getBaseConfig;
		_displName = getText(configFile >> _bc >> _item >> "displayName");
		_pic = getText(configFile >> _bc >> _item >> "picture");
		_i = _lb lbAdd format['%1',_displName];
		_lb lbSetData [_i, configName _x];
		_lb lbSetTextRight [_i,format['%1x',_count]];
		_lb lbSetPictureRightColor [_i, [1, 0.9647, 0.847, 1]];
		_lb lbSetPictureRight [_i,_pic];
		_lb lbSetTooltip [_i,'Список доступных крафтов'];
	} forEach ("true" configClasses (missionConfigFile >> "DRG_Craft_Config"));
	// } forEach ("true" configClasses (ConfigFile >> "DRG_Craft_Config"));
