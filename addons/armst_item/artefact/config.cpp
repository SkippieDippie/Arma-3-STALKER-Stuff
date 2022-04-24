class CfgPatches
{
	class armst_artefacts
	{
		units[]=
		{
			"ARMST_ART_atom",
			"ARMST_ART_ball",
			"ARMST_ART_baloon",
			"ARMST_ART_bat",
			"ARMST_ART_battery",
			"ARMST_ART_black_angel",
			"ARMST_ART_blood",
			"ARMST_ART_cell",
			"ARMST_ART_chelust",
			"ARMST_ART_cocoon",
			"ARMST_ART_compass",
			"ARMST_ART_control",
			"ARMST_ART_cristall",
			"ARMST_ART_cristall_flower",
			"ARMST_ART_cristall_plant",
			"ARMST_ART_dragon_eye",
			"ARMST_ART_dummy",
			"ARMST_ART_ear",
			"ARMST_ART_electra_flash",
			"ARMST_ART_electron",
			"ARMST_ART_eye",
			"ARMST_ART_fire",
			"ARMST_ART_fire_loop",
			"ARMST_ART_fireball",
			"ARMST_ART_fonar",
			"ARMST_ART_fountain",
			"ARMST_ART_generator",
			"ARMST_ART_gimplet",
			"ARMST_ART_glass",
			"ARMST_ART_glassbeads",
			"ARMST_ART_gold_fish",
			"ARMST_ART_grapes",
			"ARMST_ART_gravi",
			"ARMST_ART_kaply",
			"ARMST_ART_kislushka",
			"ARMST_ART_kogot",
			"ARMST_ART_kolobok",
			"ARMST_ART_lighthouse",
			"ARMST_ART_medalion",
			"ARMST_ART_medusa",
			"ARMST_ART_mica",
			"ARMST_ART_mincer_meat",
			"ARMST_ART_moh",
			"ARMST_ART_moonlight",
			"ARMST_ART_myasorubka",
			"ARMST_ART_needles1",
			"ARMST_ART_night_star",
			"ARMST_ART_plenka",
			"ARMST_ART_psi_field",
			"ARMST_ART_repei",
			"ARMST_ART_sandstone",
			"ARMST_ART_serofim",
			"ARMST_ART_signet",
			"ARMST_ART_slug",
			"ARMST_ART_snowflake",
			"ARMST_ART_soul",
			"ARMST_ART_spaika",
			"ARMST_ART_sparkler",
			"ARMST_ART_star_phantom",
			"ARMST_ART_sun",
			"ARMST_ART_tapeworm",
			"ARMST_ART_vyvert"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
		magazines[]=
		{
			"ARMST_ART_atom",
			"ARMST_ART_ball",
			"ARMST_ART_baloon",
			"ARMST_ART_bat",
			"ARMST_ART_battery",
			"ARMST_ART_black_angel",
			"ARMST_ART_blood",
			"ARMST_ART_cell",
			"ARMST_ART_chelust",
			"ARMST_ART_cocoon",
			"ARMST_ART_compass",
			"ARMST_ART_control",
			"ARMST_ART_cristall",
			"ARMST_ART_cristall_flower",
			"ARMST_ART_cristall_plant",
			"ARMST_ART_dragon_eye",
			"ARMST_ART_dummy",
			"ARMST_ART_ear",
			"ARMST_ART_electra_flash",
			"ARMST_ART_electron",
			"ARMST_ART_eye",
			"ARMST_ART_fire",
			"ARMST_ART_fire_loop",
			"ARMST_ART_fireball",
			"ARMST_ART_fonar",
			"ARMST_ART_fountain",
			"ARMST_ART_generator",
			"ARMST_ART_gimplet",
			"ARMST_ART_glass",
			"ARMST_ART_glassbeads",
			"ARMST_ART_gold_fish",
			"ARMST_ART_grapes",
			"ARMST_ART_gravi",
			"ARMST_ART_kaply",
			"ARMST_ART_kislushka",
			"ARMST_ART_kogot",
			"ARMST_ART_kolobok",
			"ARMST_ART_lighthouse",
			"ARMST_ART_medalion",
			"ARMST_ART_medusa",
			"ARMST_ART_mica",
			"ARMST_ART_mincer_meat",
			"ARMST_ART_moh",
			"ARMST_ART_moonlight",
			"ARMST_ART_myasorubka",
			"ARMST_ART_needles1",
			"ARMST_ART_night_star",
			"ARMST_ART_plenka",
			"ARMST_ART_psi_field",
			"ARMST_ART_repei",
			"ARMST_ART_sandstone",
			"ARMST_ART_serofim",
			"ARMST_ART_signet",
			"ARMST_ART_slug",
			"ARMST_ART_snowflake",
			"ARMST_ART_soul",
			"ARMST_ART_spaika",
			"ARMST_ART_sparkler",
			"ARMST_ART_star_phantom",
			"ARMST_ART_sun",
			"ARMST_ART_tapeworm",
			"ARMST_ART_vyvert"
		};
	};
};
class CfgSounds
{
	class armst_art_exp_s
	{
		name="armst_art_exp_s";
		sound[]=
		{
			"\armst\armst_item\artefact\sounds\anomaly_body_tear_1.ogg",
			100,
			1
		};
		duration=2;
	};
};
class Cfgvehicleclasses
{
	class ARMST_art
	{
		displayname="$STR_STST_ui_vehicleclass_artifact_name";
	};
};
class CfgVehicles
{
	class Thing;
	class ARMST_ARTEFACT: Thing
	{
		scope=0;
		animated=0;
		simulation="thing";
		gravityfactor=1;
		icon="\ca\data\data\Unknown_object.paa";
		accuracy=0.2;
		vehicleClass="ARMST_art";
		armor=50;
		destrtype="DestructNo";
		class EventHandlers
		{
			init="[(_this select 0)] execVM ""\armst\armst_item\artefact\Scripts\ArtefactIdle.sqf"";[_this select 0,localize 'STR_DAP_PICKUP_ARTEFACT','','','_this distance _target < 2','true',{player playactionnow 'Gestureart_podnyal'},{},{[_target] spawn armst_fnc_art_easy},{},[],3,nil,false,false] call BIS_fnc_holdActionAdd;";
		};
	};
	class ARMST_ART_atom: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\atom";
		displayName="$STR_STST_art_atom_name";
	};
	class ARMST_ART_ball: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\ball";
		displayName="$STR_STST_art_ball_name";
	};
	class ARMST_ART_baloon: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\baloon";
		displayName="$STR_STST_art_bubble_name";
	};
	class ARMST_ART_bat: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\bat";
		displayName="$STR_STST_art_pearl_name";
	};
	class ARMST_ART_battery: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\battery";
		displayName="$STR_STST_art_battery_name";
	};
	class ARMST_ART_black_angel: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\black_angel";
		displayName="$STR_STST_art_blackangel_name";
	};
	class ARMST_ART_blood: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\blood";
		displayName="$STR_STST_art_stoneblood_name";
	};
	class ARMST_ART_cell: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\cell";
		displayName="$STR_STST_art_cell_name";
	};
	class ARMST_ART_chelust: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\chelust";
		displayName="$STR_STST_art_mamabeads_name";
	};
	class ARMST_ART_cocoon: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\cocoon";
		displayName="$STR_STST_art_cocoon_name";
	};
	class ARMST_ART_compass: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\compass";
		displayName="$STR_STST_art_compass_name";
	};
	class ARMST_ART_control: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\control";
		displayName="$STR_STST_art_alteredwheel_name";
	};
	class ARMST_ART_cristall: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\cristall";
		displayName="$STR_STST_art_crystall_name";
	};
	class ARMST_ART_cristall_flower: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\cristall_flower";
		displayName="$STR_STST_art_stoneflower_name";
	};
	class ARMST_ART_cristall_plant: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\cristall_plant";
		displayName="$STR_STST_art_oasisheart_name";
	};
	class ARMST_ART_dragon_eye: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\dragon_eye";
		displayName="$STR_STST_art_dragoneye_name";
	};
	class ARMST_ART_dummy: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\dummy";
		displayName="$STR_STST_art_dummy_name";
	};
	class ARMST_ART_ear: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\ear";
		displayName="$STR_STST_art_ear_name";
	};
	class ARMST_ART_electra_flash: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\electra_flash";
		displayName="$STR_STST_art_flash_name";
	};
	class ARMST_ART_electron: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\electron";
		displayName="$STR_STST_art_electron_name";
	};
	class ARMST_ART_eye: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\eye";
		displayName="$STR_STST_art_eye_name";
	};
	class ARMST_ART_fire: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\fire";
		displayName="$STR_STST_art_fire_name";
	};
	class ARMST_ART_fire_loop: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\fire_loop";
		displayName="$STR_STST_art_fireloop_name";
	};
	class ARMST_ART_fireball: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\fireball";
		displayName="$STR_STST_art_fireball_name";
	};
	class ARMST_ART_fonar: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\fonar";
		displayName="$STR_STST_art_horn_name";
	};
	class ARMST_ART_fountain: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\fountain";
		displayName="$STR_STST_art_fountain_name";
	};
	class ARMST_ART_generator: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\generator";
		displayName="$STR_STST_art_generator_name";
	};
	class ARMST_ART_gimplet: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\gimplet";
		displayName="$STR_STST_art_gimlet_name";
	};
	class ARMST_ART_glass: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\glass";
		displayName="$STR_STST_art_splash_name";
	};
	class ARMST_ART_glassbeads: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\glassbeads";
		displayName="$STR_STST_art_glassbeads_name";
	};
	class ARMST_ART_gold_fish: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\gold_fish";
		displayName="$STR_STST_art_goldfish_name";
	};
	class ARMST_ART_grapes: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\grapes";
		displayName="$STR_STST_art_grapes_name";
	};
	class ARMST_ART_gravi: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\gravi";
		displayName="$STR_STST_art_gravi_name";
	};
	class ARMST_ART_kaply: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\kaply";
		displayName="$STR_STST_art_droplets_name";
	};
	class ARMST_ART_kislushka: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\kislushka";
		displayName="$STR_STST_art_sour_name";
	};
	class ARMST_ART_kogot: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\kogot";
		displayName="$STR_STST_art_claw_name";
	};
	class ARMST_ART_kolobok: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\kolobok";
		displayName="$STR_STST_art_kolobok_name";
	};
	class ARMST_ART_lighthouse: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\lighthouse";
		displayName="$STR_STST_art_lighthouse_name";
	};
	class ARMST_ART_medalion: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\medalion";
		displayName="$STR_STST_art_medallion_name";
	};
	class ARMST_ART_medusa: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\medusa";
		displayName="$STR_STST_art_jellyfish_name";
	};
	class ARMST_ART_mica: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\mica";
		displayName="$STR_STST_art_mica_name";
	};
	class ARMST_ART_mincer_meat: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\mincer_meat";
		displayName="$STR_STST_art_meatchunk_name";
	};
	class ARMST_ART_moh: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\moh";
		displayName="$STR_STST_art_bush_name";
	};
	class ARMST_ART_moonlight: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\moonlight";
		displayName="$STR_STST_art_moonlight_name";
	};
	class ARMST_ART_myasorubka: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\myasorubka";
		displayName="$STR_STST_art_grinder_name";
	};
	class ARMST_ART_needles1: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\needles1";
		displayName="$STR_STST_art_thorn_name";
	};
	class ARMST_ART_night_star: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\night_star";
		displayName="$STR_STST_art_nightstar_name";
	};
	class ARMST_ART_plenka: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\plenka";
		displayName="$STR_STST_art_film_name";
	};
	class ARMST_ART_psi_field: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\psi_field";
		displayName="$STR_STST_art_alteredinsulator_name";
	};
	class ARMST_ART_repei: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\repei";
		displayName="$STR_STST_art_burdock_name";
	};
	class ARMST_ART_sandstone: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\sandstone";
		displayName="$STR_STST_art_sandstone_name";
	};
	class ARMST_ART_serofim: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\serofim";
		displayName="$STR_STST_art_seraphim_name";
	};
	class ARMST_ART_signet: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\signet";
		displayName="$STR_STST_art_ring_name";
	};
	class ARMST_ART_slug: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\slug";
		displayName="$STR_STST_art_slug_name";
	};
	class ARMST_ART_snowflake: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\snowflake";
		displayName="$STR_STST_art_snowflake_name";
	};
	class ARMST_ART_soul: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\soul";
		displayName="$STR_STST_art_soul_name";
	};
	class ARMST_ART_spaika: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\spaika";
		displayName="$STR_STST_art_symbiote_name";
	};
	class ARMST_ART_sparkler: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\sparkler";
		displayName="$STR_STST_art_sparkler_name";
	};
	class ARMST_ART_star_phantom: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\star_phantom";
		displayName="$STR_STST_art_starphantom_name";
	};
	class ARMST_ART_sun: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\sun";
		displayName="$STR_STST_art_sun_name";
	};
	class ARMST_ART_tapeworm: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\tapeworm";
		displayName="$STR_STST_art_tapeworm_name";
	};
	class ARMST_ART_vyvert: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\vyvert";
		displayName="$STR_STST_art_wrenched_name";
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine: Default
	{
	};
	class HandGrenade: CA_Magazine
	{
	};
	class ARMST_ART_atom: CA_Magazine
	{
		scope=2;
		displayname="$STR_STST_art_atom_name";
		picture="\armst\armst_item\artefact\ball\atom.paa";
		model="\armst\armst_item\artefact\ball\atom";
		count=1;
		mass=25;
	};
	class ARMST_ART_ball: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\atom.paa";
		model="\armst\armst_item\artefact\ball\ball";
		displayName="$STR_STST_art_ball_name";
	};
	class ARMST_ART_baloon: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\atom.paa";
		model="\armst\armst_item\artefact\ball\baloon";
		displayName="$STR_STST_art_bubble_name";
	};
	class ARMST_ART_bat: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\atom.paa";
		model="\armst\armst_item\artefact\ball\bat";
		displayName="$STR_STST_art_pearl_name";
	};
	class ARMST_ART_battery: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\battery.paa";
		model="\armst\armst_item\artefact\ball\battery";
		displayName="$STR_STST_art_battery_name";
	};
	class ARMST_ART_black_angel: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\black_angel.paa";
		model="\armst\armst_item\artefact\ball\black_angel";
		displayName="$STR_STST_art_blackangel_name ";
	};
	class ARMST_ART_blood: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\blood.paa";
		model="\armst\armst_item\artefact\ball\blood";
		displayName="$STR_STST_art_stoneblood_name";
	};
	class ARMST_ART_cell: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\cell.paa";
		model="\armst\armst_item\artefact\ball\cell";
		displayName="$STR_STST_art_cell_name";
	};
	class ARMST_ART_chelust: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\chelust.paa";
		model="\armst\armst_item\artefact\ball\chelust";
		displayName="$STR_STST_art_mamabeads_name";
	};
	class ARMST_ART_cocoon: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\cocoon.paa";
		model="\armst\armst_item\artefact\ball\cocoon";
		displayName="$STR_STST_art_cocoon_name";
	};
	class ARMST_ART_compass: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\compass.paa";
		model="\armst\armst_item\artefact\ball\compass";
		displayName="$STR_STST_art_compass_name";
	};
	class ARMST_ART_control: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\control.paa";
		model="\armst\armst_item\artefact\ball\control";
		displayName="$STR_STST_art_alteredwheel_name";
	};
	class ARMST_ART_cristall: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\cristall.paa";
		model="\armst\armst_item\artefact\ball\cristall";
		displayName="$STR_STST_art_crystall_name";
	};
	class ARMST_ART_cristall_flower: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\cristall_flower.paa";
		model="\armst\armst_item\artefact\ball\cristall_flower";
		displayName="$STR_STST_art_stoneflower_name";
	};
	class ARMST_ART_cristall_plant: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\cristall_plant.paa";
		model="\armst\armst_item\artefact\ball\cristall_plant";
		displayName="$STR_STST_art_oasisheart_name";
	};
	class ARMST_ART_dragon_eye: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\dragon_eye.paa";
		model="\armst\armst_item\artefact\ball\dragon_eye";
		displayName="$STR_STST_art_dragoneye_name";
	};
	class ARMST_ART_dummy: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\dummy.paa";
		model="\armst\armst_item\artefact\ball\dummy";
		displayName="$STR_STST_art_dummy_name";
	};
	class ARMST_ART_ear: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\ear.paa";
		model="\armst\armst_item\artefact\ball\ear";
		displayName="$STR_STST_art_ear_name";
	};
	class ARMST_ART_electra_flash: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\electra_flash.paa";
		model="\armst\armst_item\artefact\ball\electra_flash";
		displayName="$STR_STST_art_flash_name";
	};
	class ARMST_ART_electron: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\electron.paa";
		model="\armst\armst_item\artefact\ball\electron";
		displayName="$STR_STST_art_electron_name";
	};
	class ARMST_ART_eye: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\eye.paa";
		model="\armst\armst_item\artefact\ball\eye";
		displayName="$STR_STST_art_eye_name";
	};
	class ARMST_ART_fire: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\fire.paa";
		model="\armst\armst_item\artefact\ball\fire";
		displayName="$STR_STST_art_fire_name";
	};
	class ARMST_ART_fire_loop: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\fire_loop.paa";
		model="\armst\armst_item\artefact\ball\fire_loop";
		displayName="$STR_STST_art_fireloop_name";
	};
	class ARMST_ART_fireball: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\fireball.paa";
		model="\armst\armst_item\artefact\ball\fireball";
		displayName="$STR_STST_art_fireball_name";
	};
	class ARMST_ART_fonar: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\fonar.paa";
		model="\armst\armst_item\artefact\ball\fonar";
		displayName="$STR_STST_art_horn_name";
	};
	class ARMST_ART_fountain: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\fountain.paa";
		model="\armst\armst_item\artefact\ball\fountain";
		displayName="$STR_STST_art_fountain_name";
	};
	class ARMST_ART_generator: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\generator.paa";
		model="\armst\armst_item\artefact\ball\generator";
		displayName="$STR_STST_art_generator_name";
	};
	class ARMST_ART_gimplet: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\gimplet.paa";
		model="\armst\armst_item\artefact\ball\gimplet";
		displayName="$STR_STST_art_gimlet_name";
	};
	class ARMST_ART_glass: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\glass.paa";
		model="\armst\armst_item\artefact\ball\glass";
		displayName="$STR_STST_art_splash_name";
	};
	class ARMST_ART_glassbeads: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\glassbeads.paa";
		model="\armst\armst_item\artefact\ball\glassbeads";
		displayName="$STR_STST_art_glassbeads_name";
	};
	class ARMST_ART_gold_fish: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\gold_fish.paa";
		model="\armst\armst_item\artefact\ball\gold_fish";
		displayName="$STR_STST_art_goldfish_name";
	};
	class ARMST_ART_grapes: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\grapes.paa";
		model="\armst\armst_item\artefact\ball\grapes";
		displayName="$STR_STST_art_grapes_name";
	};
	class ARMST_ART_gravi: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\gravi.paa";
		model="\armst\armst_item\artefact\ball\gravi";
		displayName="$STR_STST_art_gravi_name";
	};
	class ARMST_ART_kaply: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\kaply.paa";
		model="\armst\armst_item\artefact\ball\kaply";
		displayName="$STR_STST_art_droplets_name";
	};
	class ARMST_ART_kislushka: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\kislushka.paa";
		model="\armst\armst_item\artefact\ball\kislushka";
		displayName="$STR_STST_art_sour_name";
	};
	class ARMST_ART_kogot: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\kogot.paa";
		model="\armst\armst_item\artefact\ball\kogot";
		displayName="$STR_STST_art_claw_name";
	};
	class ARMST_ART_kolobok: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\kolobok.paa";
		model="\armst\armst_item\artefact\ball\kolobok";
		displayName="$STR_STST_art_kolobok_name";
	};
	class ARMST_ART_lighthouse: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\lighthouse.paa";
		model="\armst\armst_item\artefact\ball\lighthouse";
		displayName="$STR_STST_art_lighthouse_name";
	};
	class ARMST_ART_medalion: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\medalion.paa";
		model="\armst\armst_item\artefact\ball\medalion";
		displayName="$STR_STST_art_medallion_name";
	};
	class ARMST_ART_medusa: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\medusa.paa";
		model="\armst\armst_item\artefact\ball\medusa";
		displayName="$STR_STST_art_jellyfish_name";
	};
	class ARMST_ART_mica: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\mica.paa";
		model="\armst\armst_item\artefact\ball\mica";
		displayName="$STR_STST_art_mica_name";
	};
	class ARMST_ART_mincer_meat: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\mincer_meat.paa";
		model="\armst\armst_item\artefact\ball\mincer_meat";
		displayName="$STR_STST_art_meatchunk_name";
	};
	class ARMST_ART_moh: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\moh.paa";
		model="\armst\armst_item\artefact\ball\moh";
		displayName="$STR_STST_art_bush_name";
	};
	class ARMST_ART_moonlight: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\moonlight.paa";
		model="\armst\armst_item\artefact\ball\moonlight";
		displayName="$STR_STST_art_moonlight_name";
	};
	class ARMST_ART_myasorubka: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\myasorubka.paa";
		model="\armst\armst_item\artefact\ball\myasorubka";
		displayName="$STR_STST_art_grinder_name";
	};
	class ARMST_ART_needles1: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\needles1.paa";
		model="\armst\armst_item\artefact\ball\needles1";
		displayName="$STR_STST_art_thorn_name";
	};
	class ARMST_ART_night_star: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\night_star.paa";
		model="\armst\armst_item\artefact\ball\night_star";
		displayName="$STR_STST_art_nightstar_name";
	};
	class ARMST_ART_plenka: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\plenka.paa";
		model="\armst\armst_item\artefact\ball\plenka";
		displayName="$STR_STST_art_film_name";
	};
	class ARMST_ART_psi_field: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\psi_field.paa";
		model="\armst\armst_item\artefact\ball\psi_field";
		displayName="$STR_STST_art_alteredinsulator_name";
	};
	class ARMST_ART_repei: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\repei.paa";
		model="\armst\armst_item\artefact\ball\repei";
		displayName="$STR_STST_art_burdock_name";
	};
	class ARMST_ART_sandstone: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\sandstone.paa";
		model="\armst\armst_item\artefact\ball\sandstone";
		displayName="$STR_STST_art_sandstone_name";
	};
	class ARMST_ART_serofim: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\serofim.paa";
		model="\armst\armst_item\artefact\ball\serofim";
		displayName="$STR_STST_art_seraphim_name";
	};
	class ARMST_ART_signet: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\signet.paa";
		model="\armst\armst_item\artefact\ball\signet";
		displayName="$STR_STST_art_ring_name";
	};
	class ARMST_ART_slug: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\slug.paa";
		model="\armst\armst_item\artefact\ball\slug";
		displayName="$STR_STST_art_slug_name";
	};
	class ARMST_ART_snowflake: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\snowflake.paa";
		model="\armst\armst_item\artefact\ball\snowflake";
		displayName="$STR_STST_art_snowflake_name";
	};
	class ARMST_ART_soul: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\soul.paa";
		model="\armst\armst_item\artefact\ball\soul";
		displayName="$STR_STST_art_soul_name";
	};
	class ARMST_ART_spaika: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\spaika.paa";
		model="\armst\armst_item\artefact\ball\spaika";
		displayName="$STR_STST_art_symbiote_name";
	};
	class ARMST_ART_sparkler: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\sparkler.paa";
		model="\armst\armst_item\artefact\ball\sparkler";
		displayName="$STR_STST_art_sparkler_name";
	};
	class ARMST_ART_star_phantom: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\star_phantom.paa";
		model="\armst\armst_item\artefact\ball\star_phantom";
		displayName="$STR_STST_art_starphantom_name";
	};
	class ARMST_ART_sun: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\sun.paa";
		model="\armst\armst_item\artefact\ball\sun";
		displayName="$STR_STST_art_sun_name";
	};
	class ARMST_ART_tapeworm: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\tapeworm.paa";
		model="\armst\armst_item\artefact\ball\tapeworm";
		displayName="$STR_STST_art_tapeworm_name";
	};
	class ARMST_ART_vyvert: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\vyvert.paa";
		model="\armst\armst_item\artefact\ball\vyvert";
		displayName="$STR_STST_art_wrenched_name";
	};
};
