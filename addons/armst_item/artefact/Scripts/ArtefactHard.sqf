private ["_replacement","_unit", "_class", "_freeSpace", "_usedSpace", "_magLoad", "_slots", "_neededSpace","_artefacttype","_respawndata","_respawnpos","_respawntime","_respawnradius"];

_artefact = _this select 0;
_artefacttype = typeOf _artefact;

disableUserInput true;
_unit = player;
_artefact setvariable ["no_dupe",0];
if (_artefact isKindOf "Medusa_Unstab") then {_replacement="ITEM_Medusa_Unstab";}; 
if (_artefact isKindOf "GRAVI_Unstab") then {_replacement="ITEM_GRAVI_Unstab";}; 
if (_artefact isKindOf "Slude_Unstab") then {_replacement="ITEM_Slude_Unstab";}; 
if (_artefact isKindOf "CRYSTALL_Unstab") then {_replacement="ITEM_CRYSTALL_Unstab";}; 
if (_artefact isKindOf "STONEBLOOD_Unstab") then {_replacement="ITEM_STONEBLOOD_Unstab";}; 
if (_artefact isKindOf "MEAT_Unstab") then {_replacement="ITEM_MEAT_Unstab";}; 
if (_artefact isKindOf "SOUL_Unstab") then {_replacement="ITEM_SOUL_Unstab";};  
if (_artefact isKindOf "Tears_Unstab") then {_replacement="ITEM_Tears_Unstab";};  
if (_artefact isKindOf "SPIKES_Unstab") then {_replacement="ITEM_SPIKES_Unstab";};  
if (_artefact isKindOf "FIRE_Unstab") then {_replacement="ITEM_FIRE_Unstab";}; 
if (_artefact isKindOf "ELECTRA_Unstab") then {_replacement="ITEM_ELECTRA_Unstab";};  
if (_artefact isKindOf "BATTERY_Unstab") then {_replacement="ITEM_BATTERY_Unstab";};  
if (_artefact isKindOf "EMPTY_Unstab") then {_replacement="ITEM_EMPTY_Unstab";};

if ("armst_arthelp" in (items player + assignedItems player)) then {
	if (_unit canAdd _replacement && (_artefact getvariable "no_dupe" == 0)) then {
		_artefact setvariable ["no_dupe",1];
		_unit playactionnow "Gestureart_podnyal";
		sleep 3;
		_unit addmagazine _replacement;
		{
		detach _artefact;
		} forEach attachedObjects player;
		{_obj_type = typeOf _x;
		if (_obj_type == "#lightpoint") then 
		{
		deleteVehicle _x;
		};
		} forEach attachedObjects _artefact;
		deleteVehicle _artefact;
	   
	} else {
	   ["Нет места!"] call AGM_Core_fnc_displayTextStructured;   
	};
} else {
	   ["Нет инструмента для работы с артефактом!"] call AGM_Core_fnc_displayTextStructured;   
};
sleep 2;

disableUserInput false;