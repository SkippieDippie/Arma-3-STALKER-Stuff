/*
	Author: Aloe   (itfruit@mail.ru)
		
	Description: 
	Изменение параметров поведения мутанта
	
	------------------
	ARM_Cowardice - трусливость (От 0 до 1)
	ARM_Secrecy - скрытность  (От 0 до 1)
	ARM_Aggressive - агрессивность (От 0 до 1)
	ARM_Curious - любопытность (От 0 до 1)
	ARM_Societal - социальность (От 0 до 1)
	ARM_Courage - мужество (Любое число)
	ARM_Tactful - тактичность (Истина или Ложь)
	
	ARM_Damage - урон (От 0 до 1)
	ARM_Armor - защита (Любое число)	
	-------------------
	
	Parameter(s):
	_this select 0: <Object> unit
	
	Return: Nothing
*/
	
	params ["_unit"];
	
	switch (true) do {
		case (_unit isKindOf "pseudodog_old_test") : {
		
			// _unit setVariable ["ARM_Cowardice", 0.4];
			// _unit setVariable ["ARM_Secrecy", 0.3];
			// _unit setVariable ["ARM_Aggressive", 0.8];
			// _unit setVariable ["ARM_Curious", 0.7];
			// _unit setVariable ["ARM_Societal", 0.3];
			// _unit setVariable ["ARM_Courage", 1];
			// _unit setVariable ["ARM_Tactful", false];
			
			// _unit setVariable ["ARM_Damage", 1];
			// _unit setVariable ["ARM_Armor", 1];
		
		};
		case (_unit isKindOf "blinddog_old_test") : {

		};
		case (_unit isKindOf "controler_old_test") : {

		};
		case (_unit isKindOf "boar_old_test") : {

		};
		case (_unit isKindOf "PLOT_old_test") : {

		};
		case (_unit isKindOf "cat_old_test") : {

		};
		case (_unit isKindOf "izlom_old_test") : {

		};
		case (_unit isKindOf "psevdogigant_old_test") : {

		};
		case (_unit isKindOf "snork_old_test") : {

		};
		case (_unit isKindOf "tushkano_old_test") : {

		};
		case (_unit isKindOf "poltergeist_old_test") : {

		};
		case (_unit isKindOf "krovosos_old_test") : {

		
		};
		default {};
	};
	
	