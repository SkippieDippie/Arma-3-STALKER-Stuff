/*
	Author: Aloe
		
	Description:
	Gathering player medical variables

	Parameter(s):
	_this select 0: <Object> player object
	
	Returns: Array
*/

private ["_object", "_medicine"];

	_object = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

	_medicine = [
		getDammage _object,
		[[_object getHitPointDamage "HitHead",
		_object getHitPointDamage "HitBody",
		_object getHitPointDamage "HitLeftArm",
		_object getHitPointDamage "HitRightArm",
		_object getHitPointDamage "HitLeftLeg",
		_object getHitPointDamage "HitRightLeg",
		_object getHitPointDamage "HitLegs",
		_object getHitPointDamage "HitHands"],
		_object getVariable "AGM_isUnconscious",
		_object getVariable "AGM_isBleeding",
		_object getVariable "AGM_Blood",
		_object getVariable "AGM_Pain"
		/*
		[_playerVar select 1, "AGM_isUnconscious"] call BIS_fnc_getFromPairs,
		[_playerVar select 1, "AGM_isBleeding"] call BIS_fnc_getFromPairs,
		[_playerVar select 1, "AGM_Blood"] call BIS_fnc_getFromPairs,
		[_playerVar select 1, "AGM_Pain"] call BIS_fnc_getFromPairs
		*/
		]
	];

_medicine