/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
	_center = createCenter sideLogic;
	_group = createGroup _center;
	_soundscape = _group createUnit ["LOGIC", [0,0,0], [], 0, "NONE"];
    while {true} do 
	{
	_day = (daytime > 6.0 && daytime < 20.0);
	_night = ((daytime > 20.0 && daytime < 23.999) || (daytime > 0.001 && daytime < 6.0));
	_pos = getpos player;
	_nObject = getPos player nearestObject "Building";
	_incity = ((_nObject distance player) < 2);
	if ((str _nObject) == "san_spotlight") then { _incity = 10;};
	_soundscaperadius = 50 + random 20;
	_soundsdaylist = ["rnd_moan","rnd_moan1","rnd_moan2","rnd_moan3","rnd_moan4","org_moan_1","org_moan_2","org_moan_3","org_moan_4","org_moan_5","org_moan_6","new_drone1","fan_squeaks","os_1","rt_ambient1","rt_ambient2","rnd_dog","rnd_dog1","rnd_dog2","rnd_dog3","rnd_dog6","fog_crow_1","fog_crow_2","fog_crow_3","fog_crow_4","fog_crow_5","fog_crow_6","fog_crow_7","fog_crow_8","fog_crow_9","fog_crow_10","fog_crow_11","fog_crow_12","fog_crow_13","fog_crow_14","fog_crow_15","zone_mosquito_bald"];
	_soundsnightlist = ["rnd_moan","rnd_moan1","rnd_moan2","rnd_moan3","rnd_moan4","org_moan_1","org_moan_2","org_moan_3","org_moan_4","org_moan_5","org_moan_6","new_drone1","rnd_fallscream","rnd_krik2","rnd_krik8","rnd_krik9","fan_squeaks","os_1","rt_ambient1","rt_ambient2","blowout_wave_03_short","rnd_dog","rnd_dog1","rnd_dog2","rnd_dog3","rnd_dog6","zone_mosquito_bald","rnd_horror1","rnd_horror"];
	_soundshouselist = ["fan_squeaks","dark_1","hit_1","hit_2","hit_3","rnd_drop_1","rnd_drop_2","rnd_drop_3","rnd_drop_4","rnd_drop_5","rnd_drop_6","rnd_metal1","rnd_metal2","rnd_metal3","rnd_rat_panic_1","rnd_rat_panic_2","rnd_rat_panic_3","steam_1","steam_2","strange_noise_1","strange_noise_2","strange_noise_3","h_eak5","h_eaking","h_egrind1","h_od_creak1","h_od_creak2","h_od_creak3","h_od_creak4","h_od_creak5","h_od_creak6","h_od_creak6"];
	_soundshousenightlist = ["fan_squeaks","rnd_horror1","rnd_horror","breath_1","breath_2","breath_3","breath_4","dark_1","hit_1","hit_2","hit_3","rnd_drop_1","rnd_drop_2","rnd_drop_3","rnd_drop_4","rnd_drop_5","rnd_drop_6","rnd_metal1","rnd_metal2","rnd_metal3","rnd_rat_panic_1","rnd_rat_panic_2","rnd_rat_panic_3","steam_1","steam_2","strange_noise_1","strange_noise_2","strange_noise_3","h_eak5","h_eaking","h_egrind1","h_od_creak1","h_od_creak2","h_od_creak3","h_od_creak4","h_od_creak5","h_od_creak6"];
			
			
	if (!(_incity) && (_day)) then 
	{
	_soundscapeselected = (_soundsdaylist select floor(random(count _soundsdaylist)));
	_soundscape setpos [(_pos select 0) +Random(2*_soundscaperadius) -_soundscaperadius,(_pos select 1) +Random(2*_soundscaperadius) -_soundscaperadius,0]; 
	[_soundscape, _soundscapeselected, 100] call CBA_fnc_globalSay3d;
	};
	if (!(_incity) && (_night)) then 
	{
	_soundscapeselected = (_soundsnightlist select floor(random(count _soundsnightlist)));
	_soundscape setpos [(_pos select 0) +Random(2*_soundscaperadius) -_soundscaperadius,(_pos select 1) +Random(2*_soundscaperadius) -_soundscaperadius,0]; 
	[_soundscape, _soundscapeselected, 100] call CBA_fnc_globalSay3d;
	};
			

	
	
	
	uisleep 90 + random 60;
	};  