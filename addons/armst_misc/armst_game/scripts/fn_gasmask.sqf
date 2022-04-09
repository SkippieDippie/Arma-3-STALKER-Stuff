
while {true} do {
	_ifff=false;
	_slp=0;
	_ftg=0;
	
	
	switch (goggles player) do 
		{
			case "armst_respirator": 
				{	
					_ifff=true;
					_slp = selectRandom [60,65,70,75,80,85,90];
					_ftg=_slp/100;	
				};
			case "armst_M334": 
				{	
					_ifff=true;
					_slp = selectRandom [60,65,70,75,80,85,90];
					_ftg=_slp/100;	
				};
				
			case "armst_gasmaskBastard": 
				{	
					_ifff=true;
					_slp = selectRandom [60,65,70,75,80,85,90];
					_ftg=_slp/100;	
				};
				
			case "armst_Gasslon":
				{ 
					_ifff=true;
					_slp = selectRandom [55,60,65,70,75,80,85];
					_ftg=_slp/120;	
				};
			case "armst_GasP5":
				{ 
					_ifff=true;
					_slp = selectRandom [55,60,65,70,75,80];
					_ftg=_slp/130;
				};
			case "armst_GasP7":
				{ 
					_ifff=true;
					_slp = selectRandom [50,55,60,65,70];
					_ftg=_slp/135;
				};
			case "armst_Gasscout":
				{ 	
					_ifff=true;
					_slp = selectRandom [45,50,55,60,65];
					_ftg=_slp/150;
				};
			case "armst_m33":
				{ 	
					_ifff=true;
					_slp = selectRandom [45,50,55,60,65];
					_ftg=_slp/150;
				};
			case "armst_BioGasMaskG25":
				{ 
					_ifff=true;
					_slp = selectRandom [30,40,45,50];
					_ftg=0.15;	
				};
			case "armst_G100":
				{ 
					_ifff=true;
					_slp = selectRandom [28,34,38,42];
					_ftg=0.13;	
				};
			case "armst_gasmaskM40":
				{ 
					_ifff=true;
					_slp = selectRandom [26,30,34,38];
					_ftg=0.1;	
				};
			case "armst_gasm50":
				{ 
					_ifff=true;
					_slp = selectRandom [24,28,32,36];
					_ftg=0.07;	
				};
			case "armst_gasmaskM50_2":
				{ 
					_ifff=true;
					_slp = selectRandom [24,28,32,36];
					_ftg=0.07;	
				};
			case "armst_gasm20":
				{ 
					_ifff=true;
					_slp = selectRandom [24,28,32,36];
					_ftg=0.05;	
				};
			case "armst_gasmaskm04":
				{ 
					_ifff=true;
					_slp = selectRandom [24,28,32,36];
					_ftg=0.05;	
				};
			case "armst_R5_filter":
				{ 
					_ifff=true;
					_slp = selectRandom [55,60,65,70,75,80,85];
					_ftg=_slp/120;	
				};
			case "armst_R5_P_filter":
				{ 
					_ifff=true;
					_slp = selectRandom [30,40,45,50];
					_ftg=0.15;	
				};
			case "armst_R5_SH2_filter":
				{ 
					_ifff=true;
					_slp = selectRandom [26,30,34,38];
					_ftg=0.1;	
				};
			case "armst_gasmasks10":
				{ 
					_ifff=true;
					_slp = selectRandom [26,30,34,38];
					_ftg=0.1;	
				};
			case "armst_gasmasks10black":
				{ 
					_ifff=true;
					_slp = selectRandom [26,30,34,38];
					_ftg=0.1;	
				};
			case "armst_mask":
				{ 
					_ifff=true;
					_slp = selectRandom [2,3];
					_ftg=0.1;
				};
			default
				{
					_ifff=false;
				};
		};
	if (_ifff) then {
			sleep _slp;
			 _fatigue = getFatigue player;
			player setFatigue (_fatigue + _ftg);
			[0] call ARMST_Radiation_SetInfection;
		};
		sleep 4;
};