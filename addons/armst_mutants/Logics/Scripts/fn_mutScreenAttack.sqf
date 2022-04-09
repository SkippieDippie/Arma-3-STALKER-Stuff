	
	//private _armst_hit = ["armst_hit_11","armst_hit_17","armst_hit_18"] call BIS_fnc_selectRandom;

private _armst_pain =  ["player_pain1","player_pain2","player_pain3","player_pain4","player_pain5"] call BIS_fnc_selectRandom;
	sleep 0.25;
	
	"dynamicBlur" ppEffectAdjust [1];
	"dynamicBlur" ppEffectCommit 0.01;
	"dynamicBlur" ppEffectEnable true;
	
	addCamShake [14, 1, 4];	
	sleep 0.15;
	
	"dynamicBlur" ppEffectAdjust [0];
	"dynamicBlur" ppEffectCommit 1;
	sleep 2;
	
	"dynamicBlur" ppEffectEnable false;