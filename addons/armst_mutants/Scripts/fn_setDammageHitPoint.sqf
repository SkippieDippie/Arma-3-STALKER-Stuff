	/*
		Author: Aloe
			
		Description:
		Set HitPoint Damage with Weight of chance damage point

		Parameter(s):
		unit <Object> - unit 
		damage <Number> - damage level
		hitPoints <Pairs> -  pairs in format [[<String> HitPoint, <Number> Weight (0-1)]]
	*/
	
	params ["_unit", "_damage", "_hitPoints"];	
	_selection = selectRandom ["hand_r","hand_l","leg_r","leg_l","body"];	
	
	[_unit, _damage, _selection, "stab"] call ace_medical_fnc_addDamageToUnit;
	