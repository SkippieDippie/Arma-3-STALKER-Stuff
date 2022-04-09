/*
	Author: aloe
	Mutants-controller: controllerPsyField.sqf
	
*/

if (local player) then {

	params ["_aggressor", "_psyFieldDist"];
	
	if (isNil {player getVariable ["underPsyFiled", nil]}) then {
	
		private ["_PF_film", "_PF_crom", "_PF_film_prioriy", "_PF_crom_prioriy", "_PF_Freq"];
		
		cutText ["","BLACK OUT", 0.5];
		sleep 0.5;
		cutText ["","BLACK IN", 1];
		
		player setVariable ["underPsyFiled", true, true];
		
		_PF_film_prioriy = 2050;
		while {
			_PF_film = ppEffectCreate ["FilmGrain", _PF_film_prioriy];
			_PF_film < 0
		} do {
			_PF_film_prioriy = _PF_film_prioriy + 1;
		};
		_PF_film ppEffectEnable true;
		_PF_film ppEffectCommit 0.3;
		

		_PF_crom_prioriy = 250;
		while {
			_PF_crom = ppEffectCreate ["ChromAberration", _PF_crom_prioriy];
			_PF_crom < 0
		} do {
			_PF_crom_prioriy = _PF_crom_prioriy + 1;
		};
		_PF_crom ppEffectEnable true;
		_PF_crom ppEffectCommit 0.3;

		waitUntil{
			_PF_Freq = (player distance _aggressor) / _psyFieldDist;

			if(_PF_Freq > 1)then{_PF_Freq = 1};
			
			_PF_film ppEffectAdjust [1 - _PF_Freq, 10, 5, 2, 2, true]; // [ intensity, sharpness, grainSize, intensityX0, intensityX1, monochromatic ]
			_PF_crom ppEffectAdjust [1 - _PF_Freq, 1 - _PF_Freq, true];  // [ aberationPowerX, aberationPowerY, correction ]
			player setvariable ["AGM_Blood", _PF_Freq];
			
		sleep 0.3;
		(!alive _aggressor or player distance _aggressor > _psyFieldDist)
		};
		
		cutText ["","BLACK OUT", 0.5];
		sleep 0.5;
		cutText ["","BLACK IN", 1];
		
		
		if(!isNil "_PF_Freq") then {
			while{_PF_Freq < 1}do{
				
				_PF_Freq = _PF_Freq + 0.1;
				
				_PF_film ppEffectAdjust [1 - _PF_Freq, 5, 5, 2, 2, true];;
				_PF_crom ppEffectAdjust [1 - _PF_Freq, 1 - _PF_Freq, true];
			
			sleep 0.03;
			};
		};
		
		_PF_film ppEffectEnable false;
		_PF_crom ppEffectEnable false;
		ppEffectDestroy [_PF_film, _PF_crom]; 
		
		player setVariable ["underPsyFiled", nil, true];
	
	};
	
};