/*
	Author: Aloe  (itfruit@mail.ru)
	Description: Обработчик события Hit

	Parameter(s):
	_unit 					<Object> - юнит
	_source 				<Object> - ресурс
	_damage 				<Scalar> - урон
	_instigator 			<Object> - наносящий урон
	
	Return: Nothing
*/	

	params ["_unit", "_source", "_damage", "_instigator"];
	
	_unit setVariable ["ARM_LastTimeHit", diag_tickTime];