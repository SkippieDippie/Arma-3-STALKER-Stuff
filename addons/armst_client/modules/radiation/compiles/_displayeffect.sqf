/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Отображение эффекта радиации
	
	Parameter(s):
	
	Return: Nothing

*/
/*
	#include "..\module.sqf";
	
	if (isNil {module(_PF_film)}) then {module(_PF_film) = ppEffectCreate ["FilmGrain", 2500]};
	if (isNil {module(_PF_color)}) then {module(_PF_color) = ppEffectCreate ["ColorCorrections", 1500]};
	
	if (module(Level) > 0) then {
		
		module(_PF_film) ppEffectEnable true;
		module(_PF_film) ppEffectAdjust [(module(Level) / 1000) min 0.7, 5, 5, 2, 2, true];
		module(_PF_film) ppEffectCommit 0;
		
		module(_PF_color) ppEffectEnable true;
		module(_PF_color) ppEffectAdjust [
			1, 1, 0,
			0, 0, 0, 0, 
			1, 1, 1, 1 - (module(Level) / 1000), 
			1, 1, 1, 0
		];
		module(_PF_color) ppEffectCommit 1;
		
	} else {
	
		module(SpentTime) = 0;

		module(_PF_color) ppEffectEnable false;
		module(_PF_film) ppEffectEnable false;
		
	};
	
