// SCRIPT FOR GENERATING FLYES AROUND MASS GRAVE


	_object = _this select 0;


_PS3 = "#particlesource" createVehiclelocal getpos _object;
_PS3 setParticleCircle [0, [0, 0, 0.6]];
_PS3 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0,0,0,0], 0, 0];
_PS3 setDropInterval 4;
_PS3 setParticleParams  [["\A3\data_f\ParticleEffects\Universal\Refract", 1, 0, 1],"","Billboard",1,5,[0,0,1],[0,0,0],  0,  0.5,  0.395,  0,         [2, 3],       [[1,1,1,1],[1,1,1,0.9], [1,1,1,0]],[1],0,0,"","",""];
  
_picior = "#particlesource" createVehicleLocal getpos _object; 
_picior setParticleParams [["\A3\data_f\cl_exp",1,0,1],"","Billboard",1,1.5,[0,0,0],[0,0,3.5],3,10,7.9,0,[4,0.5],[[1,1,1,1],[1,1,1,0]],[1],0,0,"","",_object,90]; 
_picior setDropInterval 0.05;
_picior setParticleCircle [0, [0, 0, 0.6]];
_picior setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0,0,0,0], 0, 0];

_scantei = "#particlesource" createVehicleLocal getpos _object; 
_scantei setParticleCircle [2,[40,40,50]]; 
_scantei setParticleRandom [1,[0.5,0.5,0.5],[30,30,20],0,0.1,[0,0,0,0.1],1,0]; 
_scantei setParticleParams [["\A3\data_f\cl_exp",1,0,1],"","Billboard",1,3,[0,0,1],[0,0,0],0,300,10,15,[0.3,0.1],[[1,1,1,1],[1,1,1,1]],[1],1,0,"","",_object,0,false,-1,[[1,0.1,0,1]]]; 
_scantei setDropInterval 0.1; 

_light = "#lightpoint" createVehiclelocal getpos _object;
_light setLightBrightness 1;  
_light setLightAmbient[0,0,0];  
_light setLightColor[1,0.2,0.1];  
_light lightAttachObject [_PS3, [0,0,1.5]];  
_light setLightUseFlare true;  
_light setLightFlareSize 10;  
_light setLightDayLight true;  
_light setLightFlareMaxDistance 50;

_light attachTo [_object, [0, 0, 0]]; 
_scantei attachTo [_object, [0, 0, 0]]; 
_picior attachTo [_object, [0, 0, 0]]; 
_PS3 attachTo [_object, [0, 0, 0]]; 

    while {true} do 
	{
		if (alive _object) then 
		{
		
		_object say3d "azSndAnomBurnIdle";
		sleep 5;
		
		};
		if (!alive _object) exitWith {deletevehicle _PS3;deletevehicle _picior;deletevehicle _scantei;deletevehicle _light;deletevehicle _object;};
		sleep 5;
	};