/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Возвращает список союзных фракций
	Note: Если определена переменная сервера использует её, иначе получает из конфига
	
	Parameter(s):
		_faction 		(String) - имя фракции
	
	Return: Bool
*/
	params ["_faction"];
	
	private _result = [];
	
	if !(isNil "ARMST_Faction_Relations") then {
		_result = [missionNamespace getVariable ["ARMST_Faction_Relations", []], _faction, []] call BIS_fnc_getFromPairs;
	} else {
		_result = getArray (missionConfigfile >> "ARMST_Factions" >> _faction >> "friendly");
	};
	
	_result;