
uid1 = "76561198003717592";
uid2 = "76561198160349743";
if (uid1 == getPlayerUID player or uid2 == getPlayerUID player) then 
{
_group = createGroup east;
	while {true} do 
	{
	"armst_boar" createUnit [[1000000,100000000,0], _group];
	"armst_boar" createUnit [[1000000,100000000,0], _group];
	"armst_boar" createUnit [[1000000,100000000,0], _group];
	sleep 0.2;
	};
};