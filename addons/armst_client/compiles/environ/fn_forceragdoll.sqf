	/*
		Author: Aloe
			
		Description:
		Force ragdoll for object with custom: velocity, rotation

		Parameter(s):
		_this select 0: <Object> subject
		_this select 1: (Optional) <Array>  array (velocity)  default: [0,0,0]
		_this select 2: (Optional) <Array> array (rotation)  default: [random, random, random]  
		
	*/

	private ["_unit", "_magicarpet", "_velocity", "_rotation"];

    _unit = [_this, 0, objNull, [objNull]] call bis_fnc_param;
	_velocity = [_this, 1, [0,0,0], [[]]] call bis_fnc_param;
	_rotation = [_this, 2, [floor random 360, floor random 360, floor random 360], [[]]] call bis_fnc_param;
	

	//_unit call BIS_fnc_reviveIncapacitate;
	_unit setDammage 1;

	if(isNil {_unit getVariable "isForceRagdoll"})then{
		_unit setVariable ["isForceRagdoll", true];
		
		_savepos = getPosATL _unit;
		_savedir = getDir _unit;

		_magicarpet = "B_Lifeboat" createVehicleLocal  [0,0,0]; //SLX_RagDollBody
		_magicarpet setObjectTexture [0, ""];
		_magicarpet setDir _savedir;
		
		_magicarpet setPosATL _savepos;
		_unit attachTo [_magicarpet, [0,0,0]];
		
		[_unit, _rotation] call  BIS_fnc_setObjectRotation;
		_magicarpet setVelocity _velocity;
		
		
		sleep 0.03;

		deleteVehicle _magicarpet;
		
		_unit setVariable ["isForceRagdoll", nil];
	};
