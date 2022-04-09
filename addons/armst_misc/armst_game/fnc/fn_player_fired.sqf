params ["_unit","_weapon","_muzzle","_mode","_ammo","_magazine","_projectile","_gunner"];
switch (_weapon) do { 
	case "machete" : 	{ 
		_unit playactionnow (selectRandom ["cross1","cross2","cross3","GestureAxe","woodaxe_attack2","woodaxe_attack1","woodaxe_attack3","woodaxe_attack4","Gestureknife"]);
 	}; 
	case "Hatchet2" : 	{ 
		_unit playactionnow (selectRandom ["cross1","cross2","cross3","GestureAxe","woodaxe_attack2","woodaxe_attack1","woodaxe_attack3","woodaxe_attack4","Gestureknife"]);
 	 }; 
	case "Hatchet3" : 	{ 
		_unit playactionnow (selectRandom ["cross1","cross2","cross3","GestureAxe","Gestureknife"]);
 	 }; 
	case "Axe" :		{ 
		_unit playactionnow (selectRandom ["cross1","cross2","cross3","GestureAxe","Gestureknife"]);
 	 }; 
	case "Axe2" : 		{ 
		_unit playactionnow (selectRandom ["cross1","cross2","cross3","GestureAxe","woodaxe_attack2","woodaxe_attack1","woodaxe_attack3","woodaxe_attack4","Gestureknife"]);
 	 }; 
	case "crowbar" : 	{ 
		_unit playactionnow (selectRandom ["cross1","cross2","cross3","GestureAxe","woodaxe_attack2","woodaxe_attack1","woodaxe_attack3","woodaxe_attack4","Gestureknife"]);
 	 }; 
};