/*
	Author: Vladimir Vorobev <Dragster>
	E-mail:1dragsteron@gmail.com

	Description:
	Changing the filling of the list box

	Parameter(s):
		0 :	TRADER - trader in config 
		1 : CATERGORY - category from config
		2 :	TYPE - buy or sell

	Returns:
	NONE
*/
	disableSerialization;
	params ["_trader","_category","_type"];
	(findDisplay 67000) setVariable ['tradecategory',_category];
	private ["_lb", "_arrconf", "_trader", "_category", "_cfgname", "_baseConf", "_displName", "_pic", "_type", "_price", "_i"];
	if (isClass(missionConfigFile >> "DRG_Trader_Config")) then {
		_arrconf= ("true" configClasses (missionConfigFile >> "DRG_Trader_Config" >> _trader >> _category));
	} else {
		_arrconf= ("true" configClasses (ConfigFile >> "DRG_Trader_Config" >> "Debug" >> "test"));
	};
	((findDisplay 67000) displayCtrl 67019) ctrlSetText '';
	((findDisplay 67000) displayCtrl 67017) ctrlSetText '';
	((findDisplay 67000) displayCtrl 67018) ctrlSetText '';
	((findDisplay 67000) displayCtrl 67020) ctrlSetStructuredText (parseText format ['<t shadow="0" font="EpsilonCTT" align="right" size="%2" color="#000000">%1 р.</t>', "0",1 * (1 / (getResolution select 5))]);
	if (_type == "buy") then {
		((findDisplay 67000) displayCtrl 67021) ctrlSetText '1';
	} else {
		lbClear ((findDisplay 67000) displayCtrl 67021);
	};

	_lb = ((findDisplay 67000) displayCtrl 67022);
	_allThPl = [primaryWeapon player,secondaryWeapon player,handgunWeapon player] + itemsWithMagazines player + assignedItems player + [uniform player] + [vest player] + [backpack player] + [headgear player] + [goggles player];
	lbClear _lb;
	_lb lbSetCurSel -1;
	{
		private ["_price"];
		_cfgname = (configName _x);
		_baseConf = [_cfgname] call DRG_fnc_getBaseConfig;
		if !(_baseConf isEqualTo true) then {
			_displName = getText(configFile >> _baseConf >> _cfgname >> "displayName");
			_pic = getText(configFile >> _baseConf >> _cfgname >> "picture");
			_rank = getNumber(_x >> "sellRank");
			_myRank = player getVariable ["Score",0];
			if (_myRank >= _rank) then {
				if (_type == "buy") then {
					_price = getNumber(_x >> "buy");
					if !(_price == 0) then {
						_i = _lb lbAdd _displName;
						_lb lbSetPicture [_i,_pic];
						_lb lbSetData [_i,_cfgname];
						_lb lbSetValue [_i,_price];
					};
				} else {
					_price = getNumber(_x >> "sell");
					if !(_price == 0) then {
						if (_cfgname in _allThPl) then {
							_i = _lb lbAdd _displName;
							_lb lbSetPicture [_i,_pic];
							_lb lbSetData [_i,_cfgname];
							_lb lbSetValue [_i,_price];
						};
					};
				};
			};
		};
	} forEach _arrconf;