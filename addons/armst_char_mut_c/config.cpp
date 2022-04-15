////////////////////////////////////////////////////////////////////
//DeRap: I:\ARMA\@tests\addons\armst_char_mut_c\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Tue Jul 13 17:43:41 2021 : 'file' last modified on Thu Feb 20 14:04:26 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Monsters_main
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {};
	};
	class armst_char_mut
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {};
	};
};
class CfgFactionClasses
{
	class armst_mut_new
	{
		displayName = "$STR_STST_ui_mutant_category_name";
		priority = 1;
		side = 1;
	};
	class armst_animals
	{
		displayName = "$STR_STST_ui_animals_category_name";
		priority = 0;
		side = 1;
	};
};
class CfgVehicleClasses
{
	class armst_mutantss
	{
		displayName = "$STR_STST_ui_mutant_category_name";
	};
	class armst_animals
	{
		displayName = "$STR_STST_ui_animals_category_name";
	};
};

class cfgWeapons 
{

	class Default ;

	class PistolCore ;

	class Pistol ;

	class Rifle ;

	class RifleCore ;

	class MGun ;

	class MGunCore ;

	class ItemCore ;

	class InventoryItem_Base_F ;

	class HeadgearItem ;

	class Uniform_Base: ItemCore
	{
		hiddenSelectionsMaterials[] = {"\armst\armst_misc\armst_game\data\snow.rvmat", "\armst\armst_misc\armst_game\data\snow.rvmat"};
	};

	class UniformItem ;

	class Vest_Base ;

	class VestItem ;

	class B_Soldier_base_F ;

	class U_B_CombatUniform_mcam ;

	class armst_ameba : Uniform_Base
	{
		displayname = "armst_ameba";
		model="\armst\armst_char\char_mut\ameba\ameba.p3d";
		scope = 1;
		picture = "";
			hiddenSelections[] = {
				};
			hiddenSelectionsTextures[] = {
				};
		class ItemInfo : UniformItem
		{
			containerclass = "Supply0";
			mass = 1;
			uniformclass = "armst_ameba";
			uniformmodel = "-";
		};
	};
	class armst_bear1 : Uniform_Base
	{
		displayname = "armst_bear1";
		model = "\armst\armst_char\char_mut\bear\bear.p3d";
		scope = 1;
		picture = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"armst\armst_char\char_mut\bear\bear.paa"};
		class ItemInfo : UniformItem
		{
			containerclass = "Supply0";
			mass = 1;
			uniformclass = "armst_bear1";
			uniformmodel = "-";
		};
	};
	class armst_bear2 : Uniform_Base
	{
		displayname = "armst_bear2";
		model = "\armst\armst_char\char_mut\bear\bear.p3d";
		scope = 1;
		picture = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"armst\armst_char\char_mut\bear\bear2.paa"};
		class ItemInfo : UniformItem
		{
			containerclass = "Supply0";
			mass = 1;
			uniformclass = "armst_bear2";
			uniformmodel = "-";
		};
	};
	class armst_medved : Uniform_Base
	{
		displayname = "armst_medved";
		model = "\armst\armst_char\char_mut\bear2\medved.p3d";
		scope = 1;
		picture = "";
		class ItemInfo : UniformItem
		{
			containerclass = "Supply0";
			mass = 1;
			uniformclass = "armst_medved";
			uniformmodel = "-";
		};
	};
	class armst_biomassa : Uniform_Base
	{
		displayname = "armst_biomassa";
		model = "\armst\armst_char\char_mut\biomassa_old\biomassa.p3d";
		scope = 1;
		picture = "";
		class ItemInfo : UniformItem
		{
			containerclass = "Supply0";
			mass = 1;
			uniformclass = "armst_biomassa";
			uniformmodel = "-";
		};
	};
	class armst_wolf : Uniform_Base
	{
		displayname = "armst_wolf";
		model = "\armst\armst_char\char_mut\wolf\wolf.p3d";
		scope = 1;
		picture = "";
		class ItemInfo : UniformItem
		{
			containerclass = "Supply0";
			mass = 1;
			uniformclass = "armst_wolf";
			uniformmodel = "-";
		};
	};
	class armst_wolfAlfa : Uniform_Base
	{
		displayname = "armst_wolfAlfa";
		model = "\armst\armst_char\char_mut\wolfAlfa\wolfAlfa.p3d";
		scope = 1;
		picture = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"armst\armst_char\char_mut\wolfAlfa\london_wolf.paa"};
		class ItemInfo : UniformItem
		{
			containerclass = "Supply0";
			mass = 1;
			uniformclass = "armst_wolfAlfa";
			uniformmodel = "-";
		};
	};
	class armst_wolfAlfa2 : Uniform_Base
	{
		displayname = "armst_wolfAlfa2";
		model = "\armst\armst_char\char_mut\wolfAlfa\wolfAlfa.p3d";
		scope = 1;
		picture = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"armst\armst_char\char_mut\wolfAlfa\londow_wolf.paa"};
		class ItemInfo : UniformItem
		{
			containerclass = "Supply0";
			mass = 1;
			uniformclass = "armst_wolfAlfa2";
			uniformmodel = "-";
		};
	};
	class armst_wolfhound : Uniform_Base
	{
		displayname = "armst_wolfhound";
		model = "\armst\armst_char\char_mut\wolfAlfa\wolfAlfa.p3d";
		scope = 1;
		picture = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"armst\armst_char\char_mut\wolfAlfa\londow_wolf.paa"};
		class ItemInfo : UniformItem
		{
			containerclass = "Supply0";
			mass = 1;
			uniformclass = "armst_wolfhound";
			uniformmodel = "-";
		};
	};
};