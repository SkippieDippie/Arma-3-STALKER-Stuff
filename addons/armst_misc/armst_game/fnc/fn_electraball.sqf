// SCRIPT FOR GENERATING FLYES AROUND MASS GRAVE


	_object = _this select 0;


_PS3 = "#particlesource" createVehiclelocal getpos _object;
_PS3 setParticleCircle [0, [0, 0, 0.6]];
_PS3 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0,0,0,0], 0, 0];
_PS3 setDropInterval 4;
_PS3 setParticleParams  [["\A3\data_f\ParticleEffects\Universal\Refract", 1, 0, 1],"","Billboard",1,5,[0,0,1],[0,0,0],  0,  0.5,  0.395,  0,         [2, 3],       [[1,1,1,1],[1,1,1,0.9], [1,1,1,0]],[1],0,0,"","",""];
 
  
_sparkParticleSource1 = "#particlesource" createVehiclelocal getpos _object;
_sparkParticleSource1 setParticleCircle [0, [0, 0, 0]]; 
_sparkParticleSource1 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0]; 
_sparkParticleSource1 setDropInterval 0.1; 
_sparkParticleSource1 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.4,  5,  [0,0,1.4],  [0,0,0],  0,0.3,0.235,0,  [0.009,0.008,0.009],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true]; 

 
_sparkParticleSource3 = "#particlesource" createVehiclelocal getpos _object;
_sparkParticleSource3 setParticleCircle [8, [0, 0, 0]];
_sparkParticleSource3 setParticleRandom [0, [0, 0, 1], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
_sparkParticleSource3 setDropInterval 0.075;
_sparkParticleSource3 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.27,  0.27,  [0,0,0.6],  [0,0,0],  0,0.3,0.233,0,  [0.011,0.01,0.011],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true];


_light = "#lightpoint" createVehiclelocal getpos _object;
_light setLightBrightness 1;  
_light setLightAmbient[0,0,0];  
_light setLightColor[0,0.604,0.804];  
_light lightAttachObject [_PS3, [0,0,1.5]];  
_light setLightUseFlare true;  
_light setLightFlareSize 5;  
_light setLightDayLight true;  
_light setLightFlareMaxDistance 50;

_sparkParticleSource1 attachTo [_object, [0, 0, 0]]; 
_PS3 attachTo [_object, [0, 0, 0]]; 
_sparkParticleSource3 attachTo [_object, [0, 0, 0]]; 

    while {true} do 
	{
		
		if (alive _object) then 
		{
		
		_object say3d "azSndAnomElectraIdle";
		sleep 5;
		
		};
		if (!alive _object) exitWith {deletevehicle _sparkParticleSource1;deletevehicle _sparkParticleSource3;deletevehicle _PS3;deletevehicle _light;deletevehicle _object;};
		sleep 5;
	};