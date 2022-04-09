/*
	nul = [place, altura, dir, weapon, mag, magCount, copias, distancia] execVM "placeweapons.sqf";
*/
if (!isServer) exitWith {};

if (!isServer && (player != player)) then
{
    waitUntil {player == player};
};

private["_place","_x","_y","_z","_dir","_weapon","_ammo","_magspergun"];
_place = _this select 0;
_x = getPos _place select 0;
_y = getPos _place select 1;
_z = _this select 1;
_dir = _this select 2;
_weapon = _this select 3;
_ammo = _this select 4;
_magspergun = _this select 5;
_holder = objNull;

_copies = 0;
_dist = 0;

if ( format["%1", _this select 5] == "<null>") then 
{ 
	_magspergun = 1;
};

if ( format["%1", _this select 6] != "<null>") then 
{ 
	_copies = (_this select 6) - 1;
	_dist = _this select 7;
};

_dx = sin(_dir) * _dist;
_dy = cos(_dir) * _dist;

if (_copies > 0) then 
{ 
	_x = _x - (_copies/2) * _dx; 
	_y =_y - (_copies/2) * _dy;
};

_cnt = 0;
_holder = "groundWeaponHolder" createVehicle [0,0];
while{_cnt <= _copies} do
{
	
	if (_ammo != "") then { _holder addmagazineCargoGlobal [_ammo, _magspergun]; };
	if (_weapon != "") then { _holder addweaponCargoGlobal [_weapon, 1]; };
	_holder setDir _dir;
	_holder setPos [_x,_y,_z];
	player reveal _holder;

	_x = _x + _dx;
	_y = _y + _dy;
	_cnt = _cnt + 1;
};

_sleep = 120;

while{_sleep > 0}do
{
    _mags = getMagazineCargo _holder;
    
    _total = 0;
    {
        _total = _total + _x;
    }
    forEach (_mags select 1);
    
    if(_total == 0) exitWith{};    
    _sleep = _sleep - 1;
    sleep 1;
};

deleteVehicle _holder;
deleteVehicle _place;
_place = objNull;
_holder = objNull;


