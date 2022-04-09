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
		displayname="Armst Arts";
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
		displayName="Atom";
	};
	class ARMST_ART_ball: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\ball";
		displayName="Slime";
	};
	class ARMST_ART_baloon: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\baloon";
		displayName="Stomach";
	};
	class ARMST_ART_bat: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\bat";
		displayName="Pearl";
	};
	class ARMST_ART_battery: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\battery";
		displayName="Battery";
	};
	class ARMST_ART_black_angel: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\black_angel";
		displayName="Angel";
	};
	class ARMST_ART_blood: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\blood";
		displayName="Stone Blood";
	};
	class ARMST_ART_cell: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\cell";
		displayName="Cell";
	};
	class ARMST_ART_chelust: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\chelust";
		displayName="Mama's beads";
	};
	class ARMST_ART_cocoon: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\cocoon";
		displayName="Cocoon";
	};
	class ARMST_ART_compass: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\compass";
		displayName="Compass";
	};
	class ARMST_ART_control: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\control";
		displayName="Altered wheel";
	};
	class ARMST_ART_cristall: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\cristall";
		displayName="Crystall";
	};
	class ARMST_ART_cristall_flower: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\cristall_flower";
		displayName="Crystall flower";
	};
	class ARMST_ART_cristall_plant: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\cristall_plant";
		displayName="Heart of the Oasis";
	};
	class ARMST_ART_dragon_eye: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\dragon_eye";
		displayName="Magma";
	};
	class ARMST_ART_dummy: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\dummy";
		displayName="Spring";
	};
	class ARMST_ART_ear: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\ear";
		displayName="Ear";
	};
	class ARMST_ART_electra_flash: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\electra_flash";
		displayName="Electric flash";
	};
	class ARMST_ART_electron: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\electron";
		displayName="Electron";
	};
	class ARMST_ART_eye: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\eye";
		displayName="Eye";
	};
	class ARMST_ART_fire: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\fire";
		displayName="Fire";
	};
	class ARMST_ART_fire_loop: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\fire_loop";
		displayName="Fireloop";
	};
	class ARMST_ART_fireball: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\fireball";
		displayName="Fireball";
	};
	class ARMST_ART_fonar: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\fonar";
		displayName="Horn";
	};
	class ARMST_ART_fountain: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\fountain";
		displayName="Fountain";
	};
	class ARMST_ART_generator: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\generator";
		displayName="Galaxy";
	};
	class ARMST_ART_gimplet: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\gimplet";
		displayName="Rose Tea";
	};
	class ARMST_ART_glass: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\glass";
		displayName="Splash";
	};
	class ARMST_ART_glassbeads: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\glassbeads";
		displayName="Glass Beads";
	};
	class ARMST_ART_gold_fish: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\gold_fish";
		displayName="Goldfish";
	};
	class ARMST_ART_grapes: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\grapes";
		displayName="Grapes";
	};
	class ARMST_ART_gravi: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\gravi";
		displayName="Gravi";
	};
	class ARMST_ART_kaply: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\kaply";
		displayName="Droplets";
	};
	class ARMST_ART_kislushka: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\kislushka";
		displayName="Kislushka";
	};
	class ARMST_ART_kogot: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\kogot";
		displayName="Dome";
	};
	class ARMST_ART_kolobok: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\kolobok";
		displayName="Kolobok";
	};
	class ARMST_ART_lighthouse: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\lighthouse";
		displayName="Lighthouse";
	};
	class ARMST_ART_medalion: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\medalion";
		displayName="Medallion";
	};
	class ARMST_ART_medusa: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\medusa";
		displayName="Medusa";
	};
	class ARMST_ART_mica: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\mica";
		displayName="Mica";
	};
	class ARMST_ART_mincer_meat: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\mincer_meat";
		displayName="Meat Chunk";
	};
	class ARMST_ART_moh: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\moh";
		displayName="Bush";
	};
	class ARMST_ART_moonlight: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\moonlight";
		displayName="Moonlight";
	};
	class ARMST_ART_myasorubka: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\myasorubka";
		displayName="Earwax";
	};
	class ARMST_ART_needles1: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\needles1";
		displayName="Thorn";
	};
	class ARMST_ART_night_star: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\night_star";
		displayName="Night star";
	};
	class ARMST_ART_plenka: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\plenka";
		displayName="Film";
	};
	class ARMST_ART_psi_field: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\psi_field";
		displayName="Insulator";
	};
	class ARMST_ART_repei: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\repei";
		displayName="Burdock";
	};
	class ARMST_ART_sandstone: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\sandstone";
		displayName="Bacterium";
	};
	class ARMST_ART_serofim: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\serofim";
		displayName="Fault";
	};
	class ARMST_ART_signet: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\signet";
		displayName="Ring";
	};
	class ARMST_ART_slug: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\slug";
		displayName="Slug";
	};
	class ARMST_ART_snowflake: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\snowflake";
		displayName="Snowflake";
	};
	class ARMST_ART_soul: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\soul";
		displayName="Soul";
	};
	class ARMST_ART_spaika: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\spaika";
		displayName="Symbiote";
	};
	class ARMST_ART_sparkler: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\sparkler";
		displayName="Sparkler";
	};
	class ARMST_ART_star_phantom: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\star_phantom";
		displayName="Star phantom";
	};
	class ARMST_ART_sun: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\sun";
		displayName="Sun";
	};
	class ARMST_ART_tapeworm: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\tapeworm";
		displayName="Blood";
	};
	class ARMST_ART_vyvert: ARMST_ARTEFACT
	{
		scope=2;
		model="\armst\armst_item\artefact\ball\vyvert";
		displayName="Vivert";
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
		descriptionshort="";
		displayname="Atom ";
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
		displayName="Slime ";
	};
	class ARMST_ART_baloon: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\atom.paa";
		model="\armst\armst_item\artefact\ball\baloon";
		displayName="Stomach ";
	};
	class ARMST_ART_bat: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\atom.paa";
		model="\armst\armst_item\artefact\ball\bat";
		displayName="Pearl ";
	};
	class ARMST_ART_battery: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\battery.paa";
		model="\armst\armst_item\artefact\ball\battery";
		displayName="Battery ";
	};
	class ARMST_ART_black_angel: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\black_angel.paa";
		model="\armst\armst_item\artefact\ball\black_angel";
		displayName="Angel ";
	};
	class ARMST_ART_blood: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\blood.paa";
		model="\armst\armst_item\artefact\ball\blood";
		displayName="Stone Blood";
	};
	class ARMST_ART_cell: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\cell.paa";
		model="\armst\armst_item\artefact\ball\cell";
		displayName="Cell ";
	};
	class ARMST_ART_chelust: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\chelust.paa";
		model="\armst\armst_item\artefact\ball\chelust";
		displayName="Mama's beads";
	};
	class ARMST_ART_cocoon: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\cocoon.paa";
		model="\armst\armst_item\artefact\ball\cocoon";
		displayName="Cocoon ";
	};
	class ARMST_ART_compass: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\compass.paa";
		model="\armst\armst_item\artefact\ball\compass";
		displayName="Compass ";
	};
	class ARMST_ART_control: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\control.paa";
		model="\armst\armst_item\artefact\ball\control";
		displayName="Altered wheel";
	};
	class ARMST_ART_cristall: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\cristall.paa";
		model="\armst\armst_item\artefact\ball\cristall";
		displayName="Crystall ";
	};
	class ARMST_ART_cristall_flower: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\cristall_flower.paa";
		model="\armst\armst_item\artefact\ball\cristall_flower";
		displayName="Crystall flower";
	};
	class ARMST_ART_cristall_plant: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\cristall_plant.paa";
		model="\armst\armst_item\artefact\ball\cristall_plant";
		displayName="Heart of the Oasis";
	};
	class ARMST_ART_dragon_eye: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\dragon_eye.paa";
		model="\armst\armst_item\artefact\ball\dragon_eye";
		displayName="Magma ";
	};
	class ARMST_ART_dummy: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\dummy.paa";
		model="\armst\armst_item\artefact\ball\dummy";
		displayName="Spring ";
	};
	class ARMST_ART_ear: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\ear.paa";
		model="\armst\armst_item\artefact\ball\ear";
		displayName="Ear ";
	};
	class ARMST_ART_electra_flash: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\electra_flash.paa";
		model="\armst\armst_item\artefact\ball\electra_flash";
		displayName="Electric flash";
	};
	class ARMST_ART_electron: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\electron.paa";
		model="\armst\armst_item\artefact\ball\electron";
		displayName="Electron ";
	};
	class ARMST_ART_eye: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\eye.paa";
		model="\armst\armst_item\artefact\ball\eye";
		displayName="Eye ";
	};
	class ARMST_ART_fire: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\fire.paa";
		model="\armst\armst_item\artefact\ball\fire";
		displayName="Fire ";
	};
	class ARMST_ART_fire_loop: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\fire_loop.paa";
		model="\armst\armst_item\artefact\ball\fire_loop";
		displayName="Fireloop ";
	};
	class ARMST_ART_fireball: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\fireball.paa";
		model="\armst\armst_item\artefact\ball\fireball";
		displayName="Fireball ";
	};
	class ARMST_ART_fonar: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\fonar.paa";
		model="\armst\armst_item\artefact\ball\fonar";
		displayName="Horn ";
	};
	class ARMST_ART_fountain: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\fountain.paa";
		model="\armst\armst_item\artefact\ball\fountain";
		displayName="Fountain ";
	};
	class ARMST_ART_generator: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\generator.paa";
		model="\armst\armst_item\artefact\ball\generator";
		displayName="Galaxy ";
	};
	class ARMST_ART_gimplet: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\gimplet.paa";
		model="\armst\armst_item\artefact\ball\gimplet";
		displayName="Rose tea ";
	};
	class ARMST_ART_glass: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\glass.paa";
		model="\armst\armst_item\artefact\ball\glass";
		displayName="Splash ";
	};
	class ARMST_ART_glassbeads: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\glassbeads.paa";
		model="\armst\armst_item\artefact\ball\glassbeads";
		displayName="Glass Beads";
	};
	class ARMST_ART_gold_fish: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\gold_fish.paa";
		model="\armst\armst_item\artefact\ball\gold_fish";
		displayName="Goldfish ";
	};
	class ARMST_ART_grapes: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\grapes.paa";
		model="\armst\armst_item\artefact\ball\grapes";
		displayName="Grapes ";
	};
	class ARMST_ART_gravi: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\gravi.paa";
		model="\armst\armst_item\artefact\ball\gravi";
		displayName="Gravi ";
	};
	class ARMST_ART_kaply: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\kaply.paa";
		model="\armst\armst_item\artefact\ball\kaply";
		displayName="Droplets ";
	};
	class ARMST_ART_kislushka: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\kislushka.paa";
		model="\armst\armst_item\artefact\ball\kislushka";
		displayName="Kislushka ";
	};
	class ARMST_ART_kogot: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\kogot.paa";
		model="\armst\armst_item\artefact\ball\kogot";
		displayName="Dome ";
	};
	class ARMST_ART_kolobok: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\kolobok.paa";
		model="\armst\armst_item\artefact\ball\kolobok";
		displayName="Kolobok ";
	};
	class ARMST_ART_lighthouse: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\lighthouse.paa";
		model="\armst\armst_item\artefact\ball\lighthouse";
		displayName="Lighthouse ";
	};
	class ARMST_ART_medalion: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\medalion.paa";
		model="\armst\armst_item\artefact\ball\medalion";
		displayName="Medallion ";
	};
	class ARMST_ART_medusa: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\medusa.paa";
		model="\armst\armst_item\artefact\ball\medusa";
		displayName="Medusa ";
	};
	class ARMST_ART_mica: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\mica.paa";
		model="\armst\armst_item\artefact\ball\mica";
		displayName="Mica ";
	};
	class ARMST_ART_mincer_meat: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\mincer_meat.paa";
		model="\armst\armst_item\artefact\ball\mincer_meat";
		displayName="Meat Chunk";
	};
	class ARMST_ART_moh: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\moh.paa";
		model="\armst\armst_item\artefact\ball\moh";
		displayName="Bush ";
	};
	class ARMST_ART_moonlight: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\moonlight.paa";
		model="\armst\armst_item\artefact\ball\moonlight";
		displayName="Moonlight ";
	};
	class ARMST_ART_myasorubka: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\myasorubka.paa";
		model="\armst\armst_item\artefact\ball\myasorubka";
		displayName="Earwax ";
	};
	class ARMST_ART_needles1: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\needles1.paa";
		model="\armst\armst_item\artefact\ball\needles1";
		displayName="Thorn ";
	};
	class ARMST_ART_night_star: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\night_star.paa";
		model="\armst\armst_item\artefact\ball\night_star";
		displayName="Night Star";
	};
	class ARMST_ART_plenka: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\plenka.paa";
		model="\armst\armst_item\artefact\ball\plenka";
		displayName="Film ";
	};
	class ARMST_ART_psi_field: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\psi_field.paa";
		model="\armst\armst_item\artefact\ball\psi_field";
		displayName="Insulator ";
	};
	class ARMST_ART_repei: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\repei.paa";
		model="\armst\armst_item\artefact\ball\repei";
		displayName="Burdock ";
	};
	class ARMST_ART_sandstone: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\sandstone.paa";
		model="\armst\armst_item\artefact\ball\sandstone";
		displayName="Bacterium  ";
	};
	class ARMST_ART_serofim: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\serofim.paa";
		model="\armst\armst_item\artefact\ball\serofim";
		displayName="Fault ";
	};
	class ARMST_ART_signet: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\signet.paa";
		model="\armst\armst_item\artefact\ball\signet";
		displayName="Ring ";
	};
	class ARMST_ART_slug: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\slug.paa";
		model="\armst\armst_item\artefact\ball\slug";
		displayName="Slug ";
	};
	class ARMST_ART_snowflake: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\snowflake.paa";
		model="\armst\armst_item\artefact\ball\snowflake";
		displayName="Snowflake ";
	};
	class ARMST_ART_soul: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\soul.paa";
		model="\armst\armst_item\artefact\ball\soul";
		displayName="Soul ";
	};
	class ARMST_ART_spaika: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\spaika.paa";
		model="\armst\armst_item\artefact\ball\spaika";
		displayName="Symbiote ";
	};
	class ARMST_ART_sparkler: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\sparkler.paa";
		model="\armst\armst_item\artefact\ball\sparkler";
		displayName="Sparkler  ";
	};
	class ARMST_ART_star_phantom: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\star_phantom.paa";
		model="\armst\armst_item\artefact\ball\star_phantom";
		displayName="Star phantom";
	};
	class ARMST_ART_sun: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\sun.paa";
		model="\armst\armst_item\artefact\ball\sun";
		displayName="Sun ";
	};
	class ARMST_ART_tapeworm: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\tapeworm.paa";
		model="\armst\armst_item\artefact\ball\tapeworm";
		displayName="Blood ";
	};
	class ARMST_ART_vyvert: ARMST_ART_atom
	{
		scope=2;
		picture="\armst\armst_item\artefact\ball\vyvert.paa";
		model="\armst\armst_item\artefact\ball\vyvert";
		displayName="Vivert ";
	};
};
