_boost_man = _this select 0;
_staminaCustomNew = 0;
//if ((vest _boost_man == "Armst_ekzo") or (vest _boost_man == "Armst_ekzodolg") or (vest _boost_man == "Armst_ekzofreedom") or (vest _boost_man == "Armst_ekzoarmy") or (vest _boost_man == "Armst_ekzomercenaries") or (vest _boost_man == "Armst_ekzomonolith")) then {
if ((vest _boost_man) in ["Armst_ekzo","Armst_ekzo2","Armst_ekzo3","Armst_ekzodolg","Armst_ekzodolg2","Armst_ekzofreedom","Armst_ekzofreedom2","Armst_ekzoarmy","Armst_ekzomercenaries","Armst_ekzomonolith"]) then {
	if (isTouchingGround _boost_man) then {
		if (Boost >= 50) then {
			Boost = Boost - 50;
			if (vehicle player != player) then {
				hint "You are in a vehicle"
			}else{
				[_boost_man, "boostup",10] call CBA_fnc_globalSay3d;
			};
			_boost_man setvelocity [5 * (sin (getdir _boost_man )), 5 * (cos (getdir _boost_man )), 7];
			_damage = getDammage _boost_man;
			sleep 0.4;
			waitUntil {isTouchingGround _boost_man};
			if (vehicle player != player) then {hintSilent ""}else{
				[_boost_man, "boostland",10] call CBA_fnc_globalSay3d;
			};
			_boost_man setDamage _damage;
			[_boost_man, "boostland",10] call CBA_fnc_globalSay3d;
			sleep 60;
			[_boost_man, "energy",3] call CBA_fnc_globalSay3d;
			["Заряд восстановлен."] call ace_common_fnc_displayTextStructured;
			Boost = Boost + 50;
		};
	};
}else{
	if (!(animationState _boost_man == "AovrPercMrunSrasWrflDf")) then {
		_staminaCustomOld = getStamina player;
		if (_staminaCustomOld > _staminaCustomNew + 4) then {
			_staminaCustomOld = _staminaCustomOld - 4;
			player SetStamina _staminaCustomOld;
			[[player, "AovrPercMrunSrasWrflDf"], "switchMove", true, false, true] call BIS_fnc_MP;
			_staminaCustomNew = getStamina player;
		};
	};
};

