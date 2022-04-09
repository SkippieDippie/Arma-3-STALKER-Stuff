/*
	Author: aloe
	Mutants-controller: controllerAttack.sqf

*/

if (local player) then {
	
	params ["_aggressor"];
	private ["_attackPos", "_victimPos", "_attackEyePos", "_victimEyePos", "_attackDistance", "_cam", "_video"];
	
	player setVariable ["underPsyAttack", true, true];
	
	_attackPos = getPosATL _aggressor;
	_victimPos = getPosATL player;
	_attackEyePos = ASLToATL (eyePos _aggressor);
	_victimEyePos = ASLToATL (eyePos player);
	_attackDistance = player distance _aggressor;
	_attackEyePos = [_attackEyePos select 0, _attackEyePos select 1, _attackEyePos select 2];
	
	titleCut ["", "white in", 0.3];

	_aggressor say3D "controller_rryck";
	_aggressor doWatch player;
	
	"colorCorrections" ppEffectEnable true;
	"radialBlur" ppEffectEnable true;
	"radialBlur" ppEffectAdjust [0.04,0.04,0.15,0.15];
	"radialBlur" ppEffectCommit 5;
	
	showCinemaBorder false;
	_cam = "camera" camcreate _victimEyePos;
	_cam cameraeffect ["internal", "back"];
	_cam camsettarget _attackEyePos;
	_cam camsetpos ([_attackEyePos, 3, getDir _aggressor] call BIS_fnc_relPos);
	_cam camsetFOV 0.1;
	_cam camcommit 2;
	sleep 5;

	if (alive _aggressor and alive player) then {
	
		_cam camsetpos  _victimEyePos;
		_cam camsetFOV 2;
		_cam camcommit 0.5;
		sleep 0.5;
		
		player say3D "controller_finalhit";	
		
		addCamShake [10, 10, 25];
		_video = ["armst_mutants\videos\5.ogv", [-0.5, -0.5, 2, 2], [1,1,1,0.2]] spawn bis_fnc_playVideo;
		
		
		"colorCorrections" ppEffectAdjust [1, 0.9, -0.002, [0.0, 0.0, 0.0, 0.0], [1, 0.3, 0.3, 0.6],  [1, 0.5, 0.5, 0.8]];
		"colorCorrections" ppEffectCommit 1;
		player say3D "player_pain4";
		
		_cam cameraeffect ["terminate", "Back"];
		camdestroy _cam;
		showCinemaBorder true;
		
		sleep 3;
		[player, 0.7, "head", "stab"] call ace_medical_fnc_addDamageToUnit;
		
		titlecut ["", "black in", 3];
		"colorCorrections" ppEffectEnable false;
		"radialBlur" ppEffectEnable false;
		player say "controller_starthit";
		
	} else {
		titlecut ["", "black out", 0.3];
		
		_cam cameraeffect ["terminate", "Back"];
		camdestroy _cam;
		sleep 1;
		titlecut ["", "black in", 0.5];
	};
	
	player setVariable ["underPsyAttack", nil, true];
};