private ["_replacement","_unit", "_class", "_freeSpace", "_usedSpace", "_magLoad", "_slots", "_neededSpace","_artefacttype","_respawndata","_respawnpos","_respawntime","_respawnradius"];

_artefact = _this select 0;
  

				_light = "#lightpoint" createVehicleLocal getpos _artefact;
				_light setLightBrightness 0.05;
				_light setLightAmbient[1, 0.75, 0.75];
				_light setLightColor[1, 0.75, 0.75];
				_light lightAttachObject [_artefact, [0,0,0]];

                // листья вокруг арта
				_leafParticleSource2 = "#particlesource" createVehicleLocal (getpos _artefact);
                _leafParticleSource2 setParticleCircle [0.5, [0.1, 0, 0]];
                _leafParticleSource2 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
                _leafParticleSource2 setParticleParams [["\A3\data_f\cl_leaf2", 1, 0, 1], "", "SpaceObject", 5, 1.01, [0, 0, 0], [0, 0, 0], 0.5,  9, 7.3, 0, [1,1], [[1, 1, 0.1, 1]], [1], 0.1, 0.02, "", "", _artefact];
                _leafParticleSource2 setDropInterval 1;

                // искажения
                _refractParticleSource = "#particlesource" createVehicleLocal (getpos _artefact);
                _refractParticleSource setParticleCircle [0, [0, 0, 0.1]];
                _refractParticleSource setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0,0,0,0], 0, 0];
                _refractParticleSource setDropInterval 0.5;
                _refractParticleSource setParticleParams  [["\A3\data_f\ParticleEffects\Universal\Refract", 1, 0, 1],"","Billboard",1,1,[0,0,0],[0,0,0],0,0.5,0.395,0,[0,1],[[1,1,1,1],[1,1,1,0.9], [1,1,1,0]],[1],0,0,"","",_artefact];

//				_blesk = "#particlesource" createVehicleLocal getpos _artefact;
//				_blesk setParticleRandom [2, [0, 0, 0], [0, 0, 0], 0.1, 0.01, [0, 0, 0, 0], 0, 0];
//				_blesk setDropInterval 0.01;
//				_blesk setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  1,  0.2,  [0,0,0],  [0,0,0],  15,0.3,0.2,0,  [0.001,0.001,0.001,0],  [[1,1,1,0.5],[1,1,1,0.5]],  [1.5,0.5],  0.1,  0.8,  "",  "",  _artefact];

//while {1 == 1} do
//	{
//		{
//			_artefact setVelocity [0,random 3, random 5];
//		} forEach (player nearObjects  100);
//		uiSleep 1;
//		sleep 10;
//	};