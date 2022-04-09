/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

	_unit = _this select 0;

	removeAllWeapons _unit;
	removeAllItems _unit;
	removeAllAssignedItems _unit;
	removeUniform _unit;
	removeVest _unit;
	removeBackpack _unit;
	removeHeadgear _unit;
	removeGoggles _unit;
	
	armst_BackpackTypes = ["","ARMST_RUKZAK","ARMST_RUKZAK_GREEN","ARMST_RUKZAK_BLACK","ARMST_RUKZAK_BLACKBLUE","ARMST_RUKZAK_GREENCAMO",
						"ARMST_RUKZAK_BLACK2","ARMST_RUKZAK_BLUE1","ARMST_RUKZAK_GREEN1","ARMST_RUKZAK_GRAY","ARMST_SUMKA1"];
	armst_VestTypes = ["6B3","p_ak","p2_ak","Kora","V_BandollierB_blk"];
	armst_HatTypes = ["","H_Bandanna_cbr","H_Bandanna_sand","H_Bandanna_sgg","H_Bandanna_blu","H_Bandanna_khk","H_Bandanna_gry","armst_Hood2_od4",
					"armst_Hood_Tan","armst_Hood_Green","armst_Hood_od1","armst_Hood_od2","H_Bandanna_khk","armst_Hood_od3","armst_Hood_od4",
					"armst_Hood_od5","armst_Hood2_Black","armst_Hood2_Green","armst_Hood2_Tan","armst_Hood2_od1","armst_Hood2_od2","armst_Hood2_od3",
					"armst_Hood2_od5","H_Cap_grn","H_Cap_tan","H_Cap_oli","H_Cap_blk","H_Booniehat_khk",
					"armst_cap_army","armst_cap_band","armst_cap_merc"];
	armst_Glasses = ["","G_Aviator","G_Squares","G_Spectacles","G_Lowprofile","armst_respirator","armst_gasmaskBastard"]; 
	
	_armst_BackpackTypes = armst_BackpackTypes select floor random count armst_BackpackTypes;
	_armst_VestTypes = armst_VestTypes select floor random count armst_VestTypes;
	_armst_HatTypes = armst_HatTypes select floor random count armst_HatTypes;
	_armst_Glasses = armst_Glasses select floor random count armst_Glasses;
	
	_unit setFace "armst_head_Rotten";
	_unit addBackpack _armst_BackpackTypes;
	_unit addVest _armst_VestTypes;
	_unit addHeadgear _armst_HatTypes;
	_unit addGoggles _armst_Glasses;
	
/*
sleep 5;
[_unit] call armst_fnc_zombie_weapon_random;
reload _unit;
sleep 5;
_unit playactionnow "armst_zombie_stvol";
_unit addEventHandler ["fired",{_unit setAmmo [currentWeapon _unit, 50];}];

 while {true} do 
	{
		_Zombie_sound = ["zomb1", "zomb2", "zomb4", "zomb5", "zomb7", "zomb8","zombie_die_1", "zombie_die_2", "zombie_die_3", "zombie_die_4", "zombie_die_5", "zombie_die_7", "zombie_die_8", "zombie_die_9"]; 
		_Zombie_sounds = _Zombie_sound select floor random count _Zombie_sound;
		_unit say3D _Zombie_sounds;
		_unit playactionnow "armst_zombie_stvol";
		_weapon=currentWeapon _unit;		
		_unit fire _weapon; 
		sleep 5 + random 5;
	};
	*/