/*
	Author: Aloe 
	Description: Выбивание оружия из рук юнита
	Environment: Client
	
	Parameter(s):
	_unit 		<Object> - юнит
	_weapon 	<String> - оружие
	
	Return:  Nothing
*/		
	params ["_unit", "_weapon"];

	if !(_weapon isEqualTo "") then {
		
		private _pWeapon = primaryWeapon _unit;
		private _sWeapon = secondaryWeapon _unit;
		private _hWeapon = handgunWeapon _unit;
		private _pWItems = primaryWeaponItems _unit;
		private _sWItems = secondaryWeaponItems _unit;				
		private _hWItems = handgunItems _unit;

		private _pmag	= primaryWeaponMagazine _unit;
		private _smag	= secondaryWeaponMagazine _unit;
		private _hmag	= handgunMagazine _unit;
		
		private _pmagC	=  _unit ammo primaryWeapon _unit;
		private _smagC	=  _unit ammo secondaryWeapon _unit;
		private _hmagC	=  _unit ammo handgunWeapon _unit;
		private _gmagC = [0,0];
		
		if (_pWeapon != "") then {
			_gmagC = ((getUnitLoadout _unit) select 0) select 5;
			if (str _gmagC == "[]") then {
			 _gmagC = [0,0];
			};
		};
		 
		_binocs = binocular _unit;
		
		_unit removeWeaponGlobal _weapon;
		private _weaponHolder = "WeaponHolderSimulated" createVehicle [0,0,0];
		if 	( _weapon ==  _sWeapon ) then {
			_weaponHolder addWeaponWithAttachmentsCargoGlobal [[_weapon, (_sWItems select 0), (_sWItems select 1), (_sWItems select 2), [(_smag select 0), _smagC], [], (_sWItems select 3)], 1];
		};
		if ( _weapon ==  _pWeapon ) then {
			_weaponHolder addWeaponWithAttachmentsCargoGlobal [[_weapon, (_pWItems select 0), (_pWItems select 1), (_pWItems select 2), [(_pmag select 0), _pmagC], [(_pmag select 1), (_gmagC select 1)], (_pWItems select 3)], 1];
		};
		if ( _weapon ==  _hWeapon ) then {
			_weaponHolder addWeaponWithAttachmentsCargoGlobal [[_weapon, (_hWItems select 0), (_hWItems select 1), (_hWItems select 2), [(_hmag select 0), _hmagC], [], (_hWItems select 3)], 1];
		};
		if ( _weapon ==  _binocs ) then {
			_weaponHolder addWeaponCargoGlobal [_weapon,1];
		};	
		
		private _weaponHolder0 = "WeaponHolderSimulated" createVehicle [0,0,0];
		_weaponHolder0 addWeaponCargoGlobal [_weapon, 1];

		if ("STAND" == stance _unit )  then {
			_weaponHolder setPos (_unit modelToWorld [0,0.2,1.2]); 
			_weaponHolder0 setPos (_unit modelToWorld [0.08,0.22,1.22]);
		};
		if ("CROUCH" == stance _unit ) then {
			_weaponHolder setPos (_unit modelToWorld [0,0.2,0.8]); 
			_weaponHolder0 setPos (_unit modelToWorld [0.08,0.22,0.82]);		
		};
		if ("PRONE" == stance _unit ) then {
			_weaponHolder setPos (_unit modelToWorld [0,0.7,0.2]); 
			_weaponHolder0 setPos (_unit modelToWorld [0.08,0.72,0.22]);
		};
		if ("UNDEFINED" == stance _unit ) then {
			_weaponHolder setPos (_unit modelToWorld [0,0.2,1.1]); 
			_weaponHolder0 setPos (_unit modelToWorld [0.08,0.22,1.12]);
		};

		_weaponHolder setDir (getDir _unit);
		_weaponHolder setVelocity [3 * sin(((getDir _unit)-80) + (random 160)), 3 * cos(((getDir _unit)-80) + (random 160)),4]; 

		[_weaponHolder0] spawn {
			sleep 0.1;
			clearWeaponCargoGlobal (_this select 0);
			deleteVehicle (_this select 0);
		};

		_weaponHolder addEventHandler ["ContainerClosed", {
			
			params ["_container", "_unit"];
			
			if (weaponCargo _container isEqualTo []) then {
				deleteVehicle _container;
			};
			
		}];
	};
	
	