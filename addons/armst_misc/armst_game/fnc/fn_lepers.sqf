// SCRIPT FOR GENERATING FLYES AROUND MASS GRAVE


	_object = _this select 0;


_PS = "#particlesource" createVehicleLocal getpos _object;
_PS setParticleCircle [0, [0, 0, 0]]; 
_PS setParticleRandom [1, [1, 1, 2], [1, 1, 2], 0, 0.2, [0, 0, 0, 0], 0, 0]; 
_PS setParticleParams [["\a3\animals_f\mosquito.p3d", 8, 3, 1], "", 
"SpaceObject", 
1, 
2, 
[0, 0, 2], 
[0, 0, 2], 
0.5,4,1,0, 
[1,1], 
[[1, 1, 1 ,1],[1, 1, 1, 1],[1, 1, 1, 1]], 
[1, 1], 
1, 
0, 
"", 
"", 
_object]; 
_PS setDropInterval 0.01;
    while {true} do 
	{
		if (alive _object) then 
		{
		
		_object say3d "armst_lepers_idle";
		sleep 23;
		};
		if (!alive _object) exitWith {deletevehicle _PS;deletevehicle _object;};
		sleep 1;
	};