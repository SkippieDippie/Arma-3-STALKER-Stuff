ARMST_WEAPONUPGRADE_open = 
{
disableSerialization;
createdialog "weapon_upgrade";
ctrlShow [1600, false ];
ctrlShow [1601, false ];
_weaponClass = currentWeapon player;
_myVest = vest player;

_pic_weapon = (configfile >> "CfgWeapons" >> _weaponClass >> "picture") call BIS_fnc_getCfgData;
_text_weapon = (configfile >> "CfgWeapons" >> _weaponClass >> "displayname") call BIS_fnc_getCfgData;
_pic_Vest = (configfile >> "CfgWeapons" >> _myVest >> "picture") call BIS_fnc_getCfgData;
_text_Vest = (configfile >> "CfgWeapons" >> _myVest >> "displayname") call BIS_fnc_getCfgData;
		ctrlSetText [1203, _pic_weapon];
		ctrlSetText [1204, _pic_Vest];
		ctrlSetText [1003, _text_weapon];
		ctrlSetText [1004, _text_Vest];


if (currentWeapon player == "av_an94") then {
NEW_WEAPON = "av_an94_gp";
_pic_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "picture") call BIS_fnc_getCfgData;
_text_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "displayname") call BIS_fnc_getCfgData;
WEAPON_PRICE_TEXT = "18000";
WEAPON_PRICE = 18000;
ctrlSetText [1201, _pic_weapon_new];
ctrlSetText [1005, _text_weapon_new];
ctrlSetText [1000, WEAPON_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > WEAPON_PRICE) then 
			{
			ctrlShow [1600, true ];
			};
};

if (currentWeapon player == "av_an94_gp") then {
NEW_WEAPON = "av_an94";
_pic_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "picture") call BIS_fnc_getCfgData;
_text_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "displayname") call BIS_fnc_getCfgData;
WEAPON_PRICE_TEXT = "5000";
WEAPON_PRICE = 5000;
ctrlSetText [1201, _pic_weapon_new];
ctrlSetText [1005, _text_weapon_new];
ctrlSetText [1000, WEAPON_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > WEAPON_PRICE) then 
			{
			ctrlShow [1600, true ];
			};
};

if (currentWeapon player == "arifle_av_aek") then {
NEW_WEAPON = "arifle_av_aek_gp";
_pic_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "picture") call BIS_fnc_getCfgData;
_text_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "displayname") call BIS_fnc_getCfgData;
WEAPON_PRICE_TEXT = "20000";
WEAPON_PRICE = 20000;
ctrlSetText [1201, _pic_weapon_new];
ctrlSetText [1005, _text_weapon_new];
ctrlSetText [1000, WEAPON_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > WEAPON_PRICE) then 
			{
			ctrlShow [1600, true ];
			};
};

if (currentWeapon player == "arifle_av_aek_gp") then {
NEW_WEAPON = "arifle_av_aek";
_pic_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "picture") call BIS_fnc_getCfgData;
_text_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "displayname") call BIS_fnc_getCfgData;
WEAPON_PRICE_TEXT = "5000";
WEAPON_PRICE = 5000;
ctrlSetText [1201, _pic_weapon_new];
ctrlSetText [1005, _text_weapon_new];
ctrlSetText [1000, WEAPON_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > WEAPON_PRICE) then 
			{
			ctrlShow [1600, true ];
			};
};

if (currentWeapon player == "arifle_av_103") then {
NEW_WEAPON = "arifle_av_103_gp";
_pic_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "picture") call BIS_fnc_getCfgData;
_text_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "displayname") call BIS_fnc_getCfgData;
WEAPON_PRICE_TEXT = "20000";
WEAPON_PRICE = 20000;
ctrlSetText [1201, _pic_weapon_new];
ctrlSetText [1005, _text_weapon_new];
ctrlSetText [1000, WEAPON_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > WEAPON_PRICE) then 
			{
			ctrlShow [1600, true ];
			};
};

if (currentWeapon player == "arifle_av_103_gp") then {
NEW_WEAPON = "arifle_av_103";
_pic_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "picture") call BIS_fnc_getCfgData;
_text_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "displayname") call BIS_fnc_getCfgData;
WEAPON_PRICE_TEXT = "5000";
WEAPON_PRICE = 5000;
ctrlSetText [1201, _pic_weapon_new];
ctrlSetText [1005, _text_weapon_new];
ctrlSetText [1000, WEAPON_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > WEAPON_PRICE) then 
			{
			ctrlShow [1600, true ];
			};
};

if (currentWeapon player == "arifle_av_ak74old") then {
NEW_WEAPON = "arifle_av_ak74";
_pic_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "picture") call BIS_fnc_getCfgData;
_text_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "displayname") call BIS_fnc_getCfgData;
WEAPON_PRICE_TEXT = "10000";
WEAPON_PRICE = 10000;
ctrlSetText [1201, _pic_weapon_new];
ctrlSetText [1005, _text_weapon_new];
ctrlSetText [1000, WEAPON_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > WEAPON_PRICE) then 
			{
			ctrlShow [1600, true ];
			};
};

if (currentWeapon player == "arifle_av_ak74m") then {
NEW_WEAPON = "arifle_av_ak74m_gp";
_pic_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "picture") call BIS_fnc_getCfgData;
_text_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "displayname") call BIS_fnc_getCfgData;
WEAPON_PRICE_TEXT = "15000";
WEAPON_PRICE = 15000;
ctrlSetText [1201, _pic_weapon_new];
ctrlSetText [1005, _text_weapon_new];
ctrlSetText [1000, WEAPON_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > WEAPON_PRICE) then 
			{
			ctrlShow [1600, true ];
			};
};

if (currentWeapon player == "arifle_av_ak74m_gp") then {
NEW_WEAPON = "arifle_av_ak74_camo";
_pic_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "picture") call BIS_fnc_getCfgData;
_text_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "displayname") call BIS_fnc_getCfgData;
WEAPON_PRICE_TEXT = "50000";
WEAPON_PRICE = 50000;
ctrlSetText [1201, _pic_weapon_new];
ctrlSetText [1005, _text_weapon_new];
ctrlSetText [1000, WEAPON_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > WEAPON_PRICE) then 
			{
			ctrlShow [1600, true ];
			};
};

if (currentWeapon player == "arifle_av_akm") then {
NEW_WEAPON = "arifle_av_akm_gp";
_pic_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "picture") call BIS_fnc_getCfgData;
_text_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "displayname") call BIS_fnc_getCfgData;
WEAPON_PRICE_TEXT = "70000";
WEAPON_PRICE = 70000;
ctrlSetText [1201, _pic_weapon_new];
ctrlSetText [1005, _text_weapon_new];
ctrlSetText [1000, WEAPON_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > WEAPON_PRICE) then 
			{
			ctrlShow [1600, true ];
			};
};
if (currentWeapon player == "arifle_av_aks74") then {
NEW_WEAPON = "av_aks74m_knife";
_pic_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "picture") call BIS_fnc_getCfgData;
_text_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "displayname") call BIS_fnc_getCfgData;
WEAPON_PRICE_TEXT = "20000";
WEAPON_PRICE = 20000;
ctrlSetText [1201, _pic_weapon_new];
ctrlSetText [1005, _text_weapon_new];
ctrlSetText [1000, WEAPON_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > WEAPON_PRICE) then 
			{
			ctrlShow [1600, true ];
			};
};

if (currentWeapon player == "arifle_av_asval") then {
NEW_WEAPON = "av_asval_pl";
_pic_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "picture") call BIS_fnc_getCfgData;
_text_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "displayname") call BIS_fnc_getCfgData;
WEAPON_PRICE_TEXT = "35000";
WEAPON_PRICE = 35000;
ctrlSetText [1201, _pic_weapon_new];
ctrlSetText [1005, _text_weapon_new];
ctrlSetText [1000, WEAPON_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > WEAPON_PRICE) then 
			{
			ctrlShow [1600, true ];
			};
};

if (currentWeapon player == "av_asval_pl") then {
NEW_WEAPON = "arifle_av_asval";
_pic_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "picture") call BIS_fnc_getCfgData;
_text_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "displayname") call BIS_fnc_getCfgData;
WEAPON_PRICE_TEXT = "25000";
WEAPON_PRICE = 25000;
ctrlSetText [1201, _pic_weapon_new];
ctrlSetText [1005, _text_weapon_new];
ctrlSetText [1000, WEAPON_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > WEAPON_PRICE) then 
			{
			ctrlShow [1600, true ];
			};
};

if (currentWeapon player == "arifle_av_vss") then {
NEW_WEAPON = "arifle_av_vss2";
_pic_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "picture") call BIS_fnc_getCfgData;
_text_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "displayname") call BIS_fnc_getCfgData;
WEAPON_PRICE_TEXT = "35000";
WEAPON_PRICE = 35000;
ctrlSetText [1201, _pic_weapon_new];
ctrlSetText [1005, _text_weapon_new];
ctrlSetText [1000, WEAPON_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > WEAPON_PRICE) then 
			{
			ctrlShow [1600, true ];
			};
};

if (currentWeapon player == "arifle_av_vss2") then {
NEW_WEAPON = "arifle_av_vss";
_pic_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "picture") call BIS_fnc_getCfgData;
_text_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "displayname") call BIS_fnc_getCfgData;
WEAPON_PRICE_TEXT = "25000";
WEAPON_PRICE = 25000;
ctrlSetText [1201, _pic_weapon_new];
ctrlSetText [1005, _text_weapon_new];
ctrlSetText [1000, WEAPON_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > WEAPON_PRICE) then 
			{
			ctrlShow [1600, true ];
			};
};

if (currentWeapon player == "arifle_av_groza") then {
NEW_WEAPON = "arifle_av_groza_gp";
_pic_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "picture") call BIS_fnc_getCfgData;
_text_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "displayname") call BIS_fnc_getCfgData;
WEAPON_PRICE_TEXT = "15000";
WEAPON_PRICE = 15000;
ctrlSetText [1201, _pic_weapon_new];
ctrlSetText [1005, _text_weapon_new];
ctrlSetText [1000, WEAPON_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > WEAPON_PRICE) then 
			{
			ctrlShow [1600, true ];
			};
};

if (currentWeapon player == "arifle_av_groza_gp") then {
NEW_WEAPON = "arifle_av_groza";
_pic_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "picture") call BIS_fnc_getCfgData;
_text_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "displayname") call BIS_fnc_getCfgData;
WEAPON_PRICE_TEXT = "5000";
WEAPON_PRICE = 5000;
ctrlSetText [1201, _pic_weapon_new];
ctrlSetText [1005, _text_weapon_new];
ctrlSetText [1000, WEAPON_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > WEAPON_PRICE) then 
			{
			ctrlShow [1600, true ];
			};
};

if (currentWeapon player == "srifle_av_svda") then {
NEW_WEAPON = "srifle_av_svd";
_pic_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "picture") call BIS_fnc_getCfgData;
_text_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "displayname") call BIS_fnc_getCfgData;
WEAPON_PRICE_TEXT = "200000";
WEAPON_PRICE = 200000;
ctrlSetText [1201, _pic_weapon_new];
ctrlSetText [1005, _text_weapon_new];
ctrlSetText [1000, WEAPON_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > WEAPON_PRICE) then 
			{
			ctrlShow [1600, true ];
			};
};

if (currentWeapon player == "srifle_av_svd") then {
NEW_WEAPON = "srifle_av_svdk";
_pic_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "picture") call BIS_fnc_getCfgData;
_text_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "displayname") call BIS_fnc_getCfgData;
WEAPON_PRICE_TEXT = "250000";
WEAPON_PRICE = 250000;
ctrlSetText [1201, _pic_weapon_new];
ctrlSetText [1005, _text_weapon_new];
ctrlSetText [1000, WEAPON_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > WEAPON_PRICE) then 
			{
			ctrlShow [1600, true ];
			};
};

if (currentWeapon player == "arifle_av_aksu") then {
NEW_WEAPON = "arifle_av_aksu_2";
_pic_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "picture") call BIS_fnc_getCfgData;
_text_weapon_new = (configfile >> "CfgWeapons" >> NEW_WEAPON >> "displayname") call BIS_fnc_getCfgData;
WEAPON_PRICE_TEXT = "400000";
WEAPON_PRICE = 400000;
ctrlSetText [1201, _pic_weapon_new];
ctrlSetText [1005, _text_weapon_new];
ctrlSetText [1000, WEAPON_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > WEAPON_PRICE) then 
			{
			ctrlShow [1600, true ];
			};
};

if (vest player == "Kora") then {
NEW_VEST = "Kora_p2_ak";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "500";
EQUIP_PRICE = 500;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
};
	
if (vest player == "V94_ch") then {
NEW_VEST = "V94_ch2";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "def_molle_easy") then {
NEW_VEST = "def_molle_norm";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "def_molle_norm") then {
NEW_VEST = "def_molle_hard";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "def_voen_easy") then {
NEW_VEST = "def_voen_norm";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "def_voen_norm") then {
NEW_VEST = "def_voen_hard";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "p_ak") then {
NEW_VEST = "p2_ak";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "500";
EQUIP_PRICE = 500;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Rys_m_def") then {
NEW_VEST = "Rys_m_def_mag";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "500";
EQUIP_PRICE = 500;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Rys_m_def_mag") then {
NEW_VEST = "Rys_m_def_GP";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Rys_m2_def_mag") then {
NEW_VEST = "Rys_m2_def_GP";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Rys_m") then {
NEW_VEST = "Rys_m_GP";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Rys_m_GP") then {
NEW_VEST = "Rys_m_kora";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Rys_m_kora") then {
NEW_VEST = "Rys_m_kora_GP";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Rys_m_Neutral") then {
NEW_VEST = "Rys_m_kora_Neutral";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Smersh_SVD") then {
NEW_VEST = "Smersh_AK";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1500";
EQUIP_PRICE = 1500;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Smersh_AK") then {
NEW_VEST = "Smersh_AK_GP";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Smersh_AK_GP") then {
NEW_VEST = "Smersh_PK";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Smersh_kora_SVD") then {
NEW_VEST = "Smersh_kora_AK";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Smersh_kora_AK") then {
NEW_VEST = "Smersh_kora_AK_GP";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Smersh_kora_AK_GP") then {
NEW_VEST = "Smersh_kora_PK";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Smersh_kora_SVD_Dolg") then {
NEW_VEST = "Smersh_kora_AK_Dolg";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Smersh_kora_AK_Dolg") then {
NEW_VEST = "Smersh_kora_PK_Dolg";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Smersh_def_SVD") then {
NEW_VEST = "Smersh_def_AK";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Smersh_def_AK") then {
NEW_VEST = "Smersh_def_AK_gp";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Smersh_def_AK_gp") then {
NEW_VEST = "Smersh_def_PK";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Smersh_kora_SVD_Freedom") then {
NEW_VEST = "Smersh_kora_AK_Freedom";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Smersh_kora_AK_Freedom") then {
NEW_VEST = "Smersh_kora_PK_Freedom";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

if (vest player == "Smersh2_def_AK") then {
NEW_VEST = "Smersh2_def_AK_gp";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1000";
EQUIP_PRICE = 1000;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};
		
if (vest player == "Tarzan_ch") then {
NEW_VEST = "Tarzan_ch2";
_pic_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "picture") call BIS_fnc_getCfgData;
_text_Vest_new = (configfile >> "CfgWeapons" >> NEW_VEST >> "displayname") call BIS_fnc_getCfgData;
EQUIP_PRICE_TEXT = "1500";
EQUIP_PRICE = 1500;
ctrlSetText [1002, _text_Vest_new];
ctrlSetText [1202, _pic_Vest_new];
ctrlSetText [1001, EQUIP_PRICE_TEXT];
_money = player getVariable "Money";
	if (_money > EQUIP_PRICE) then 
			{
			ctrlShow [1601, true ];
			};
		};

};

ARMST_WEAPONUPGRADE_BUTTON_1 = 
{
		["Оружие улучшено."] call ace_common_fnc_displayTextStructured;
		_weaponClass = currentWeapon player;
		player removeweapon _weaponClass;
		player addweapon NEW_WEAPON;
		player setVariable ["Money", (player getVariable "Money") - WEAPON_PRICE];
};

ARMST_WEAPONUPGRADE_BUTTON_2 = 
{		
		["Снаряжение улучшено."] call ace_common_fnc_displayTextStructured;
		removeVest player;
		player addVest NEW_VEST;
		player setVariable ["Money", (player getVariable "Money") - EQUIP_PRICE];
};

