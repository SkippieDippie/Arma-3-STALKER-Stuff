/*
	Author: Aloe 
	Description: Отображение состояния юнита
	Environment: Client
	
	Parameter(s):
	_unit 		<Object> - юнит (собака)
	
	Return:  Nothing
*/		
	params ["_unit"];
	
	private _behaviour = switch (toUpper (_unit getVariable ["ARM_MutantBehaviour", ""])) do {
		case "COMBAT" : {localize "STR_STST_func_dog_command_behaviour_attack"};
		case "AWARE" : {localize "STR_STST_func_dog_command_behaviour_warn"};
		case "SAFE" : {localize "STR_STST_func_dog_command_behaviour_safe"};
	};
	
	hintSilent parseText format ["<img size='10' image='%1'/>
		<br/><br/>
		<t align='left'>Порода:</t><t align='right'>%3</t><br/>
		<t align='left'>Здоровье:</t><t align='right'>%4%2</t><br/>
		<t align='left'>Голод:</t><t align='right'>%5%2</t><br/>
		<t align='left'>Поведение:</t><t align='right'>%6</t><br/>
		<t align='left'>Команда:</t><t align='right'>%7</t><br/>
		<t align='left'>Поиск:</t><t align='right'>%8м</t><br/>
		", 
		"\armst_mutants\Images\image_dog.jpg",
		"%",
		getText (configFile >> "CfgVehicles" >> typeOf _unit >> "displayName"),
		round (100 - (getDammage _unit * 100)),
		round (_unit getVariable ["ARMST_Hunger", 0]),
		_behaviour,
		_unit getVariable ["ARM_dogLastCommandString", ""],
		_unit getVariable ["ARM_SearchDistance", 0]
	];
