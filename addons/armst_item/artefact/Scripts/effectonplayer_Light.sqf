private ["_unit", "_blur"];
_unit = _this;

if (_unit == player) then {
	
	sleep 0.01;				//play sound
	_unit say2d "armst_art_exp_s";
	_unit playactionnow "Gestureheadkick";
	_blur = ppEffectCreate ["DynamicBlur", 500];
	_blur ppEffectForceInNVG true;
	_blur ppEffectEnable true;
	_blur ppEffectAdjust [1];
	_blur ppEffectCommit 0.1;
	
	_unit setFatigue 1;
	5 fadeSound 0.25;
	sleep 5;
	
	_blur ppEffectAdjust [0];
	_blur ppEffectCommit 10;
	sleep 5;
	15 fadeSound 1;
	sleep 5;
	_blur ppEffectEnable false;
	
};
_unit setdamage 0.3;