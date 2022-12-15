class STST_Facewear_GP5_nofilter : STST_Facewear_Base {
	scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;

	displayName = "$STR_STST_goggles_gp5_name";
	descriptionShort = "$STR_STST_goggles_gp5_nofilter_desc";
	picture = "stst_characters\facewear\gp5\ui\gp5.paa";

	model = "stst_characters\facewear\gp5\gp5_nofilter.p3d";

	mass = 4;

	ACE_Overlay = "stst_characters\facewear\gp5\ui\gp5_overlay.paa";
	ACE_OverlayCracked = "";
	ACE_Resistance = 1;
};

class STST_Facewear_GP5_filter1 : STST_Facewear_GP5_nofilter {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;

	descriptionShort = "$STR_STST_goggles_gp5_filter1_desc";

	model = "stst_characters\facewear\gp5\gp5_filter1.p3d";

	stst_radiation_resistance = 30;
};

class STST_Facewear_GP5_filter2 : STST_Facewear_GP5_nofilter {
	descriptionShort = "$STR_STST_goggles_gp5_filter2_desc";

	model = "stst_characters\facewear\gp5\gp5_filter2.p3d";

	stst_radiation_resistance = 60;
};

class STST_Facewear_GP5_filter3 : STST_Facewear_GP5_nofilter {
	descriptionShort = "$STR_STST_goggles_gp5_filter3_desc";

	model = "stst_characters\facewear\gp5\gp5_filter3.p3d";

	stst_radiation_resistance = 90;
};




class STST_Facewear_GP5_black_nofilter : STST_Facewear_GP5_nofilter {
	displayName = "$STR_STST_goggles_gp5_black_name";
	picture = "stst_characters\facewear\gp5\ui\gp5_black.paa";

	model = "stst_characters\facewear\gp5\gp5_black_nofilter.p3d";
};

class STST_Facewear_GP5_black_filter1 : STST_Facewear_GP5_filter1 {
	displayName = "$STR_STST_goggles_gp5_black_name";
	picture = "stst_characters\facewear\gp5\ui\gp5_black.paa";

	model = "stst_characters\facewear\gp5\gp5_black_filter1.p3d";
};

class STST_Facewear_GP5_black_filter2 : STST_Facewear_GP5_filter2 {
	displayName = "$STR_STST_goggles_gp5_black_name";
	picture = "stst_characters\facewear\gp5\ui\gp5_black.paa";

	model = "stst_characters\facewear\gp5\gp5_black_filter2.p3d";
};

class STST_Facewear_GP5_black_filter3 : STST_Facewear_GP5_filter3 {
	displayName = "$STR_STST_goggles_gp5_black_name";
	picture = "stst_characters\facewear\gp5\ui\gp5_black.paa";

	model = "stst_characters\facewear\gp5\gp5_black_filter3.p3d";
};




class STST_Facewear_GP5_old_nofilter : STST_Facewear_GP5_nofilter {
	displayName = "$STR_STST_goggles_gp5_old_name";
	picture = "stst_characters\facewear\gp5\ui\gp5_old.paa";

	model = "stst_characters\facewear\gp5\gp5_old_nofilter.p3d";
};

class STST_Facewear_GP5_old_filter1 : STST_Facewear_GP5_filter1 {
	displayName = "$STR_STST_goggles_gp5_old_name";
	picture = "stst_characters\facewear\gp5\ui\gp5_old.paa";

	model = "stst_characters\facewear\gp5\gp5_old_filter1.p3d";
};

class STST_Facewear_GP5_old_filter2 : STST_Facewear_GP5_filter2 {
	displayName = "$STR_STST_goggles_gp5_old_name";
	picture = "stst_characters\facewear\gp5\ui\gp5_old.paa";

	model = "stst_characters\facewear\gp5\gp5_old_filter2.p3d";
};

class STST_Facewear_GP5_old_filter3 : STST_Facewear_GP5_filter3 {
	displayName = "$STR_STST_goggles_gp5_old_name";
	picture = "stst_characters\facewear\gp5\ui\gp5_old.paa";

	model = "stst_characters\facewear\gp5\gp5_old_filter3.p3d";
};
