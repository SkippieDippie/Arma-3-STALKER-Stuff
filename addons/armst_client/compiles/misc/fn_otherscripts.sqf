	
	KK_fnc_netId = {
		if (isMultiplayer) exitWith {netId _this};
		if (typeName _this != "OBJECT" && typeName _this != "GROUP" || {isNull _this}) exitWith {""};
		if (isNil "KK_globIDs") then {KK_globIDs = [0]};
		private ["_i", "_cnt", "_netId"];
		_i = KK_globIDs find _this;
		if (_i < 0) exitWith {
			_cnt = (KK_globIDs select 0) + 1;
			KK_globIDs set [0, _cnt];
			_netId = format ["0:%1", _cnt];
			KK_globIDs append [_netId, _this];
			_netId
		};
		KK_globIDs select (_i - 1)
	};

	KK_fnc_objectFromNetId = {
		if (isMultiplayer) exitWith {objectFromNetId _this};
		if (typeName _this != "STRING" || isNil "KK_globIDs") exitWith {objNull};
		private "_i";
		_i = KK_globIDs find _this;
		if (_i < 0) exitWith {objNull};
		KK_globIDs select (_i + 1)
	};