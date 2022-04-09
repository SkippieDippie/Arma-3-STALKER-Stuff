/*
	Author: aloe
	Mutants-controller: poltergeistPsyField.sqf
	
*/

if (local player) then {

	params ["_aggressor", "_fieldDistantion"];
	
	if (isNil {player getVariable ["underPoltergeistFiled", nil]}) then {
	
		private ["_PF_color", "_PF_film"];
		
		player setVariable ["underPoltergeistFiled", true, true];
		
		cutText ["","BLACK OUT", 0.5];
		sleep 0.5;
		cutText ["","BLACK IN", 1];
		
		private _PF_prioriy = 1500;
		while {
			_PF_color = ppEffectCreate ["ColorCorrections", _PF_prioriy];
			_PF_color < 0
		} do {
			_PF_prioriy = _PF_prioriy + 1;
		};
		_PF_color ppEffectEnable true;
		_PF_color ppEffectCommit 0.3;
		_PF_color ppEffectAdjust [
			1,
			1,
			0,
			[1, 1, 1, 0],
			[1, 1, 1, 0],
			[0.75, 0.25, 0, 1]
		];
		
		private _PF_prioriy = 2000;
		while {
			_PF_film = ppEffectCreate ["FilmGrain", _PF_prioriy];
			_PF_film < 0
		} do {
			_PF_prioriy = _PF_prioriy + 1;
		};
		_PF_film ppEffectEnable true;
		_PF_film ppEffectCommit 0.3;
		_PF_film ppEffectAdjust [
			0.04,
			1,
			1,
			0,
			1,								
			0
		];
			
		waitUntil{
			sleep 0.1;
			(!alive _aggressor || player distance _aggressor > _fieldDistantion)
		};
		
		cutText ["","BLACK OUT", 0.5];
		sleep 0.5;
		cutText ["","BLACK IN", 1];
		
		_PF_color ppEffectAdjust [
			1,
			1,
			0,
			[0, 0, 0, 0],
			[1, 1, 1, 1],
			[0.299, 0.587, 0.114, 0],
			[-1, -1, 0, 0, 0, 0, 0]	
		];
			
		_PF_film ppEffectAdjust [
			0.005,
			1.25,
			2.01,
			0.75,
			1.0,
			0
		];
		
		_PF_color ppEffectEnable false;
		_PF_film ppEffectEnable false;
		ppEffectDestroy [_PF_color, _PF_film]; 

		player setVariable ["underPoltergeistFiled", nil, true];
	
	};
	
};