
	_unit = _this select 0;
	_armst_Weapons = ["AV_spas12_zombie","av_obrez_zombie","av_toz34_zombie","av_fort500_zombie","arifle_av_aks74_zombie","arifle_av_ak74_zombie","arifle_av_ak74m_zombie","arifle_av_aksu_zombie","arifle_av_akm_zombie","arifle_av_groza_zombie"]; 
	
	_armst_Weapon = _armst_Weapons select floor random count _armst_Weapons;
	
	_unit addWeapon _armst_Weapon;
	_pWeap = primaryWeapon _unit;
	{_unit addMagazine ((getArray (configfile >> "CfgWeapons" >> _pWeap >> "magazines")) select 0)} forEach [1,2]; 