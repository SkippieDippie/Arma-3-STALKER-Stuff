class CfgPatches {
	class STST_Characters {
		author = "STALKER Stuff Team";
		name = "STALKER Stuff - Characters";
		url = "";

		requiredAddons[] = {"A3_Characters_F"};
		requiredVersion = 1.00;

		units[] = {};
		weapons[] = {};
	};
};

class CfgGlasses {
	class None;

	class STST_Facewear_Base : None {
		scope = 0;
		author = "STALKER Stuff Team";

		identityTypes[] = {"NoGlasses", 0};

		stst_radiation_resistance = 0; //Not implemented yet, all values are placeholders for now
	};

	#include "facewear\gp5\config.hpp"
};
