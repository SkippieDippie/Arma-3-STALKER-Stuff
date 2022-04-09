/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Подготовка NPC юнитов
	
	Parameter(s):
		_unit 			(Object) - юнит
		_equp 			(String) - класс конфига ARMST_equipments
		_face 			(String) - лицо
		_anim			(String) - анимация
		
      Return: Nothing
*/

if (isServer) then {

	params [["_unit", objNull], ["_equp", ""], ["_face", ""], ["_anim", ""]];

	if !(isNull _unit) then {
		
		removeAllWeapons _unit;
		removeAllItems _unit;
		removeAllAssignedItems _unit;
		removeUniform _unit;
		removeVest _unit;
		removeBackpack _unit;
		removeHeadgear _unit;
		removeGoggles _unit;
		
		//Face
		if !(_face isEqualTo "") then {
			[_unit, _face] remoteExec ["setFace", 0, true];
		};
		
		//Equipment
		if !(_equp isEqualTo "") then {
			private _equipment = getArray (missionConfigFile >> "ARMST_Equipments" >> _equp);
			if !(_equipment isEqualTo []) then {
				[_unit, [_equipment]] call BIS_fnc_loadInventory;
			};
		};
		
		//Animation
		if !(_anim isEqualTo "") then {
			[_unit, _anim] remoteExec ["switchMove", 0, true];
		};
		
		[_unit, false] remoteExecCall ["allowDammage", 0, true];
		
		_unit setBehaviour "SAFE";
		_unit setSpeaker "NoVoice";
	};

};