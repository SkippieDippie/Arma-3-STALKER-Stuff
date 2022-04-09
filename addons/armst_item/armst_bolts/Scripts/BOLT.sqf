_unit = _this select 0;
_bolt = _this select 6;
if (_bolt isKindOf "DAPSTALKERS_BOLT") then
{

_velocity = velocity _bolt;
_pos = getPosASL _bolt;
deleteVehicle _bolt;
_newbolt = "DAP_BOLT" createVehicle _pos;
_newbolt setDir getDir _unit;
_newbolt setPosASL _pos;
_newbolt setVelocity _velocity;

_unit addMagazine "DAPSTALKERS_BOLTS";

WaitUntil {((getPosATL _newbolt select 2)<=0.1)};
_newbolt setVelocity [0,0,0];
sleep 15;

deleteVehicle _newbolt;
};