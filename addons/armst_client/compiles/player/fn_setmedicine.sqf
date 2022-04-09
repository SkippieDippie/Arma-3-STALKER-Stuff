/*
	Author: Aloe
		
	Description:
	Set player medical variables

	Parameter(s) (for Server only):
	_this select 0: <Object> player object
	_this select 1: <Array> special (returned fn_getMedicine)
	
	Returns: Array
*/

private ["_object", "_medicine", "_medicineAGM", "_medicineAGMHitPnts"];

	_object = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
	_medicine = [_this, 1, [], [[]]]  call BIS_fnc_param;

	if(_object != objNull and count _medicine > 0)then{
		_object setDammage (_medicine select 0);
		_medicineAGM = _medicine select 1;
		_medicineAGMHitPnts = (_medicineAGM select 0);
			
			_object setHitPointDamage ["HitHead", _medicineAGMHitPnts select 0];
			_object setHitPointDamage ["HitBody", _medicineAGMHitPnts select 1];
			_object setHitPointDamage ["HitLeftArm", _medicineAGMHitPnts select 2];
			_object setHitPointDamage ["HitRightArm", _medicineAGMHitPnts select 3];
			_object setHitPointDamage ["HitLeftLeg", _medicineAGMHitPnts select 4];
			_object setHitPointDamage ["HitRightLeg", _medicineAGMHitPnts select 5];
			_object setHitPointDamage ["HitLegs", _medicineAGMHitPnts select 6];
			_object setHitPointDamage ["HitHands", _medicineAGMHitPnts select 7];
		
		_object setVariable ["AGM_isUnconscious", _medicineAGM select 1, true];
		_object setVariable ["AGM_isBleeding", _medicineAGM select 2, true];
		_object setVariable ["AGM_Blood", _medicineAGM select 3, true];
		_object setVariable ["AGM_Pain", _medicineAGM select 4, true];
		
		diag_log format ["fn_setMedicine: %1 %2", str _object, str _medicine];
	};