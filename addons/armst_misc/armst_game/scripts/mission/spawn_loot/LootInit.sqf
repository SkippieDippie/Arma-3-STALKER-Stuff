if(isServer)then{

// Set probability of loot spawning 1-100%
_probability=4;

// Show loot position and type on map (Debugging)
_showLoot=false;

// Set Weapon loot: Primary weapons, secondary weapons, Sidearms.
weaponsLoot=	["av_makarov"];
// Set items: Weapon attachments, first-aid, Binoculars
itemsLoot=		["ARMST_x18docs","ARMST_x17docs","ARMST_x21docs","acc_flashlight","Binocular","AGM_CableTie","armst_MESHOK","Armst_item_tushonka","Armst_spicki","ARMST_book_manual","ARMST_book_novel",
"ARMST_cards","ARMST_comic","ARMST_elec_powder","ARMST_lighter","ARMST_multitool","ARMST_newspaper","ARMST_picture_fam",
"ARMST_picture_gf","ARMST_socks_green","ARMST_socks_black","ARMST_tanboxer","ARMST_toiletpaper","ARMST_towel","ARMST_vhstape",
"ARMST_550cord","ARMST_acetone","ARMST_batteries","ARMST_bungeecord","ARMST_canopener","ARMST_detcord","ARMST_ducttape","ARMST_dumbphone",
"ARMST_firestarter","ARMST_gameboy","ARMST_hammer","ARMST_hexamine","ARMST_hydrochloric","ARMST_nails","ARMST_steelpipe","ARMST_toxicgas",
"ARMST_wpnclnkit","ARMST_goldwatch","ARMST_socks_green_dirty","ARMST_socks_black_dirty","ARMST_tanboxer_dirty","ARMST_airfilter",
"ARMST_cellphone","ARMST_clutch_disk","ARMST_fanbelt","ARMST_piston","ARMST_solderingiron","ARMST_spoon","ARMST_leaflet_psyop",
"ARMST_steeringwheel","ARMST_valvesprings","ARMST_wirecutter","ARMST_akkum","ARMST_bumaga","ARMST_kanistra","ARMST_instruments","ARMST_matplat","ARMST_gaz",
"AGM_Epipen","AGM_Bandage","AGM_Morphine","AGM_Bloodbag","armst_item_antirad","armst_svecha","armst_karburator","armst_tkan","armst_brezent",
"armst_kevlar","armst_lopatka","armst_skipidar","armst_broneplastina","armst_brokenradio","armst_brokenpda","armst_zeton","armst_polhir","armst_medinst","armst_medperchatki","armst_scaner","armst_scanerart","armst_doska","armst_bochka","armst_545","armst_762","armst_steklo",
"armst_armst_korob1","armst_pallet_vertical"];
// Set Clothing: Hats, Helmets, Uniforms
clothesLoot=	["armst_bandana"];
// Set Vests: Any vests
vestsLoot=		["p_ak"];
// Set Backpacks: Any packpacks
backpacksLoot=	["ARMST_SUMKA","ARMST_engine","ARMST_WHEELS"];
// Set magazines
magazinesLoot=	["DAPSTALKERS_BOLTS"];

// Exclude buildings from loot spawn. Use 'TYPEOF' to find building name
_exclusionList=	["Land_Pier_F","Land_Pier_small_F","Land_NavigLight","Land_LampHarbour_F"];

private ["_distance","_houseList"];
	_mkr=(_this select 0);
	_mkr setmarkerAlpha 0;
	_pos=markerpos _mkr;
		_mkrY= getmarkerSize _mkr select 0;
		_mkrX= getmarkerSize _mkr select 1;

 _distance=_mkrX;
	if (_mkrY > _mkrX) 
			then {
			_distance=_mkrY;
			};

 _houseList= _pos nearObjects ["HouseBase",_distance];
						
		{
	_house=_X;

	if (!(typeOf _house in _exclusionList)) 
			then {

		
 for "_n" from 0 to 50 do {
 
	_buildingPos=_house buildingpos _n;
		if (str _buildingPos == "[0,0,0]") exitwith {};
					
				if (_probability > random 100) 
					then {
				null=[_buildingPos,_showLoot] execVM "Scripts\spawn_loot\spawnloot.sqf";
						};	
					};
				};				
	}foreach _houseList;
	
};//ISSERVER