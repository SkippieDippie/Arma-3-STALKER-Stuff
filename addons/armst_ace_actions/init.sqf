 /*
 interaction irradiation
*/
_unit = player;
_checkrads = ["Check Irradiation", "Check Irradiation", "\armst_ace_actions\pics\irrad.paa", {hint format['%2: %1',ARMST_Radiation_Infection toFixed 5,localize 'STR_STST_func_radiation_dose']}, {(({_x in ['DETECTOR_RKS20','DETECTOR_MKS1009','DETECTOR_DBG06M']} count (weapons player))> 0)}] call ace_interact_menu_fnc_createAction;

[(typeOf _unit), 1, ["ACE_SelfActions"], _checkrads, true] call ace_interact_menu_fnc_addActionToClass; 
 /*
 Scripts
*/
 
[] spawn armst_fnc_vest;
[] spawn armst_fnc_detector_idle;
ARM_DRG_WAITINIT_VAR=true;
publicVariable "ARM_DRG_WAITINIT_VAR"; 
 

["StalkerDosimeter","T", "Show dosimeter", 
{call ARMST_Radiation_ShowRadimetr;}, "", 
[20, [false, false, false]]] call CBA_fnc_addKeybind;
 /*
 PDA
  */
["StalkerPDA","U","Show PDA",
{
private _arrPdaTabs = [  
"armst_item_pda",  
"armst_item_pda_old", 
"armst_item_pda_band",  
"armst_item_pda_clearsky",  
"armst_item_pda_duty",  
"armst_item_pda_army",  
"armst_item_pda_freedom",  
"armst_item_pda_merc",  
"armst_item_pda_monolith",  
"armst_item_pda_science"  
];
private _arrResult = assignedItems player arrayIntersect _arrPdaTabs; 
	
	if (count _arrResult != 0) then {
		if (!(player getVariable ['ACE_isCaptive', false]) && !(player getVariable ['ACE_isUnconscious', false])) then {
			disableUserInput true;
			disableUserInput false;
			disableUserInput true;
			private _dspl = findDisplay 72600;
			if (isNull (_dspl)) then {
				player playActionNow 'Gesturecompass';
				[] spawn drg_fnc_pdaopen;
				private _ADMINS = getArray (missionConfigfile >> "ADMINS" >> "uids");
				if !(getPlayerUID player in _ADMINS) then {
					[] spawn {
						uisleep 0.4;
						_veh = "armst_pda" createVehicle  [0, 0, 0];
						player playactionnow "armst_GesturePDA";
						_veh attachTo [player, [-0.09, -0.09, 0.03], "LeftHandMiddle1"]; 
						_veh setVectorDirAndUp [[0,0,-1],[67,3,4]];
						_light = "#lightpoint" createVehicle  [0, 0, 0];
						_light setLightBrightness 0.5;  
						_light setLightAmbient[0,0,0];  
						_light setLightColor[1,1,1];  
						_light attachTo [player, [0, 0, 0], "LeftHandMiddle1"]; 
						_light setLightIntensity 15;
						_state = animationState player;
						_stance = stance player;
							
						if (_stance == "STAND") then {
						if (_state == "AmovPercMstpSrasWrflDnon") then {player playmove "AmovPercMstpSlowWrflDnon";};};
						if (_stance == "CROUCH") then {
						if (_state == "AmovPknlMstpSrasWrflDnon") then {player playmove "AmovPknlMstpSlowWrflDnon";_veh attachTo [player, [-0.09, -0.09, 0.05], "LeftHandMiddle1"]; };};
						if (_stance == "PRONE")  then {
						if (_state == "AmovPpneMstpSrasWrflDnon") then {player playmove "AmovPknlMstpSlowWrflDnon";_veh attachTo [player, [-0.09, -0.09, 0.05], "LeftHandMiddle1"];};};
						if (_stance == "STAND") then {
						if (_state == "AmovPercMstpSrasWpstDnon") then {player playmove "AmovPercMstpSlowWpstDnon";};};
						if (_stance == "CROUCH") then {
						if (_state == "AmovPknlMstpSrasWpstDnon") then {player playmove "AmovPknlMstpSlowWpstDnon";_veh attachTo [player, [-0.09, -0.09, 0.05], "LeftHandMiddle1"]; };};
						if (_stance == "PRONE")  then {
						if (_state == "AmovPpneMstpSrasWpstDnon") then {player playmove "AmovPknlMstpSlowWpstDnon";_veh attachTo [player, [-0.09, -0.09, 0.05], "LeftHandMiddle1"];};};
						(findDisplay 72600) displayAddEventHandler ["unload","deletevehicle _veh;deletevehicle _light;"];
						waitUntil { isNull findDisplay 72600 };
						uisleep 0.4;
						player playactionnow "GestureOUT";
						deletevehicle _veh;
						deletevehicle _light;
					};
				};
			} else {
				_dspl closeDisplay 1000;
			};
			disableUserInput false;
			disableUserInput true;
			disableUserInput false;
		};
	};
},
"",
[22, [false, true, false]]] call CBA_fnc_addKeybind;
 /*
 INVENTORY
*/
ARMST_dragster_dblclick_on_item={
	_item = _this select 0;
	_class = _this select 1;
	switch (_item) do { 



		case "ARMST_condom" : 					{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_condom;}; 
		case "ARMST_bugspray" : 				{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_bugspray }; 
		case "armst_babywipes" : 				{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_babywipes; }; 
		case "ARMST_handwarmer" : 				{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_handwarmer; }; 
		case "ARMST_amfetamin" : 				{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_item_amfetamin;  			}; 
		case "ARMST_geroin" : 					{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_item_geroin;  			}; 
		case "ARMST_kokain" : 					{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_item_kokain;  			}; 
		case "ARMST_meta" : 					{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_item_meta;  			}; 
		case "ARMST_towel" : 					{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_towel;  			}; 
		case "ARMST_toiletpaper" : 				{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_toiletpaper;  	}; 
		case "ARMST_tanboxer" : 				{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_tanboxer;  		}; 
		case "ARMST_sunblock" : 				{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_sunblock; 		}; 
		case "ARMST_sudoku" : 					{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_sudoku;  		}; 
		case "ARMST_eyedrops" : 				{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_eyedrops;  		}; 
		case "ARMST_dice" : 					{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_dice;  			}; 
		case "ARMST_laptop" : 					{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_laptop;  		}; 
		case "ARMST_sleepingbag" :  			{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_matras_placer;   }; 
		case "armst_scaner" :  				{  (findDisplay 602) closeDisplay 100;[player] spawn armst_fnc_detect_inf;   };
		case "armst_item_stimulFood" :  				{  (findDisplay 602) closeDisplay 100;[player] spawn armst_fnc_heal_inf;player removeMagazine "armst_item_stimulFood"};
		
		case "armst_spicki" : 			{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_fireplacer;      }; 
		
		case "ARMST_gum" : 				{  (findDisplay 602) closeDisplay 100;[player, "candy", "ARMST_gum",0.05] spawn armst_fnc_food;		}; 
		case "ARMST_skittles" : 		{  (findDisplay 602) closeDisplay 100;[player, "candy", "ARMST_skittles",0.05] spawn armst_fnc_food;	}; 
		case "Armst_item_waterbottle" : {  (findDisplay 602) closeDisplay 100;[player, "water", "Armst_item_waterbottle", 0.5, "armst_switch_waterbottle", "Armst_item_waterbottle50"] spawn armst_fnc_food;};
		case "Armst_item_waterbottle50":{  (findDisplay 602) closeDisplay 100;[player, "water", "Armst_item_waterbottle50", 0.5, "armst_switch_waterbottle", "armst_item_waterbottleempty"] spawn armst_fnc_food;};
		case "armst_item_beer" : 		{  (findDisplay 602) closeDisplay 100;[player, "water", "armst_item_beer", 0.4, "armst_switch_beer", "armst_item_beer50", true, [1,180,2]] spawn armst_fnc_food;};
		case "armst_item_beer50" : 		{  (findDisplay 602) closeDisplay 100;[player, "water", "armst_item_beer50", 0.4, "armst_switch_beer", "armst_item_Beerempty", true, [1,180,2]] spawn armst_fnc_food;};
		case "armst_item_vodka" : 		{  (findDisplay 602) closeDisplay 100;[player, "water", "armst_item_vodka", 0.2, "armst_switch_vodka", "armst_item_vodka50", true, [6,240,2]] spawn armst_fnc_food;};
		case "armst_item_vodka50" : 	{  (findDisplay 602) closeDisplay 100;[player, "water", "armst_item_vodka50", 0.2, "armst_switch_vodka", "armst_item_vodkaempty", true, [6,240,2]] spawn armst_fnc_food;};
		case "ARMST_samogon" : 			{  (findDisplay 602) closeDisplay 100;[player, "water", "ARMST_samogon", 0.5, "armst_switch_vodka", "armst_item_vodkaempty", true, [6,240,2]] spawn armst_fnc_food;};
		case "ARMST_thermos" : 			{  (findDisplay 602) closeDisplay 100;[player, "water", "ARMST_thermos", 0.4, "armst_switch_vodka", "armst_item_vodkaempty"] spawn armst_fnc_food;profileNamespace setVariable ["ARMST_INFECTED",false];};
		case "ARMST_item_energy" : 		{  (findDisplay 602) closeDisplay 100;[player, "water", "ARMST_item_energy", 0.4, "armst_switch_energy", "ARMST_item_energyempty", false, [], true] spawn armst_fnc_food;};
		case "ARMST_konjak" : 			{  (findDisplay 602) closeDisplay 100;[player, "water", "ARMST_konjak", 0.5, "armst_switch_vodka", "armst_item_vodkaempty", true, [1, 1, 25]] spawn armst_fnc_food;};
		case "armst_item_beer_baltica" : 		{  (findDisplay 602) closeDisplay 100;[player, "water", "armst_item_beer_baltica", 0.4, "armst_switch_beer_baltica", "armst_item_beer_baltica50", true, [1,180,2]] spawn armst_fnc_food;};
		case "armst_item_beer_baltica50" : 		{  (findDisplay 602) closeDisplay 100;[player, "water", "armst_item_beer_baltica50", 0.4, "armst_switch_beer_baltica", "armst_item_beer_balticaempty", true, [1,180,2]] spawn armst_fnc_food;};
		case "armst_item_beer_chernigov" : 		{  (findDisplay 602) closeDisplay 100;[player, "water", "armst_item_beer_chernigov", 0.4, "armst_switch_beer_chernigov", "armst_item_beer_chernigov50", true, [1,180,2]] spawn armst_fnc_food;};
		case "armst_item_beer_chernigov50" : 	{  (findDisplay 602) closeDisplay 100;[player, "water", "armst_item_beer_chernigov50", 0.4, "armst_switch_beer_chernigov", "armst_item_beer_chernigovempty", true, [1,180,2]] spawn armst_fnc_food;};
		case "armst_item_beer_FAXE" : 			{  (findDisplay 602) closeDisplay 100;[player, "water", "armst_item_beer_FAXE", 0.4, "armst_switch_beer_FAXE", "armst_item_beer_FAXE50", true, [1,180,2]] spawn armst_fnc_food;};
		case "armst_item_beer_FAXE50" : 		{  (findDisplay 602) closeDisplay 100;[player, "water", "armst_item_beer_FAXE50", 0.4, "armst_switch_beer_FAXE", "armst_item_beer_FAXEempty", true, [1,180,2]] spawn armst_fnc_food;};
		case "armst_item_vodka_finland" : 		{  (findDisplay 602) closeDisplay 100;[player, "water", "armst_item_vodka_finland", 0.2, "armst_switch_vodka_finland", "armst_item_vodka50_finland", true, [6,240,2]] spawn armst_fnc_food;};
		case "armst_item_vodka50_finland" : 	{  (findDisplay 602) closeDisplay 100;[player, "water", "armst_item_vodka50_finland", 0.2, "armst_switch_vodka_finland", "armst_item_vodkaempty_finland", true, [6,240,2]] spawn armst_fnc_food;};
		case "armst_item_Jemeson" : 			{  (findDisplay 602) closeDisplay 100;[player, "water", "armst_item_Jemeson", 0.2, "armst_switch_Jemeson", "armst_item_Jemeson50", true, [6,240,2]] spawn armst_fnc_food;};
		case "armst_item_Jemeson50" : 			{  (findDisplay 602) closeDisplay 100;[player, "water", "armst_item_Jemeson50", 0.2, "armst_switch_Jemeson", "armst_item_Jemesonempty", true, [6,240,2]] spawn armst_fnc_food;};
		case "armst_item_vodka_russianstand" : 	{  (findDisplay 602) closeDisplay 100;[player, "water", "armst_item_vodka_russianstand", 0.2, "armst_switch_vodka_russianstand", "armst_item_vodka50_russianstand", true, [6,240,2]] spawn armst_fnc_food;};
		case "armst_item_vodka50_russianstand" :{  (findDisplay 602) closeDisplay 100;[player, "water", "armst_item_vodka50_russianstand", 0.2, "armst_switch_vodka_russianstand", "armst_item_vodkaempty_russianstand", true, [6,240,2]] spawn armst_fnc_food;};
		case "Armst_item_can_water" : 			{  (findDisplay 602) closeDisplay 100;[player, "water", "Armst_item_can_water", 0.6, "armst_switch_konserv_water", "Armst_item_canempty"] spawn armst_fnc_food;};
		
		case "Armst_item_bred_old" : 		{  (findDisplay 602) closeDisplay 100;[player, "food", "Armst_item_bred_old", 0.15, "armst_switch_bred_old"] spawn armst_fnc_food;};
		case "Armst_item_can_ikra_red" : 	{  (findDisplay 602) closeDisplay 100;[player, "food", "Armst_item_can_ikra_red", 0.4, "armst_switch_konserv_ikra_red", "Armst_item_canempty"] spawn armst_fnc_food;};
		case "Armst_item_can_sosiski" : 	{  (findDisplay 602) closeDisplay 100;[player, "food", "Armst_item_can_sosiski", 0.4, "armst_switch_konserv_sosiski", "Armst_item_canempty"] spawn armst_fnc_food;};
		case "Armst_item_tushonka_kaban" : 	{  (findDisplay 602) closeDisplay 100;[player, "food", "Armst_item_tushonka_kaban", 0.4, "armst_switch_tushonka_kaban", "Armst_item_canempty"] spawn armst_fnc_food;};
		case "Armst_item_tushonka_tomate" : {  (findDisplay 602) closeDisplay 100;[player, "food", "Armst_item_tushonka_tomate", 0.4, "armst_switch_tushonka_tomate", "Armst_item_canempty"] spawn armst_fnc_food;};
		case "Armst_item_shocolate" : 	{  (findDisplay 602) closeDisplay 100;[player, "food", "Armst_item_shocolate", 0.15, "armst_switch_shocolate"] spawn armst_fnc_food;};
		case "Armst_item_shocolate2" : 	{  (findDisplay 602) closeDisplay 100;[player, "food", "Armst_item_shocolate2", 0.15, "armst_switch_shocolate"] spawn armst_fnc_food;};
		case "Armst_item_snorkers" : 	{  (findDisplay 602) closeDisplay 100;[player, "food", "Armst_item_snorkers", 0.1, "armst_switch_snorkers"] spawn armst_fnc_food; };
		case "Armst_item_bred" : 		{  (findDisplay 602) closeDisplay 100;[player, "food", "Armst_item_bred", 0.25, "armst_switch_bred"] spawn armst_fnc_food;};
		case "ARMST_galets" : 			{  (findDisplay 602) closeDisplay 100;[player, "food", "ARMST_galets", 0.1, "armst_switch_bred"] spawn armst_fnc_food;};
		case "ARMST_salo" : 			{  (findDisplay 602) closeDisplay 100;[player, "food", "ARMST_salo", 0.4, "armst_switch_konserv", "Armst_item_canempty"] spawn armst_fnc_food;};
		case "Armst_item_can" : 		{  (findDisplay 602) closeDisplay 100;[player, "food", "Armst_item_can", 0.4, "armst_switch_konserv", "Armst_item_canempty"] spawn armst_fnc_food;};
		case "ARMST_fishkonserva" : 	{  (findDisplay 602) closeDisplay 100;[player, "food", "ARMST_fishkonserva", 0.24, "armst_switch_konserv", "Armst_item_canempty"] spawn armst_fnc_food;};
		case "Armst_item_tushonka" : 	{  (findDisplay 602) closeDisplay 100;[player, "food", "Armst_item_tushonka", 0.4, "armst_switch_konserv", "Armst_item_canempty"] spawn armst_fnc_food;};
		case "Armst_item_kolbasa" : 	{  (findDisplay 602) closeDisplay 100;[player, "food", "Armst_item_kolbasa", 0.3, "armst_switch_kolbasa"] spawn armst_fnc_food;};
		case "Armst_item_Sgushenka" : 	{  (findDisplay 602) closeDisplay 100;[player, "food", "Armst_item_Sgushenka", 0.4, "armst_switch_Sgushenka", "Armst_item_canempty"] spawn armst_fnc_food;};
		case "Armst_item_SuhPay" : 		{  (findDisplay 602) closeDisplay 100;[player, "food", "Armst_item_SuhPay", 0.8, "armst_switch_SuhPay"] spawn armst_fnc_food;};
		case "Armst_item_rathion" : 	{  (findDisplay 602) closeDisplay 100;[player, "food", "Armst_item_rathion", 0.65, "armst_switch_rathion", "Armst_item_rathion_level2"] spawn armst_fnc_food;player additem "Armst_item_rathion_level2";};
		case "Armst_item_rathion_level2":{  (findDisplay 602) closeDisplay 100;[player, "food", "Armst_item_rathion_level2", 0.65, "armst_switch_rathion", "Armst_item_rathion_level3"] spawn armst_fnc_food;player additem "Armst_item_rathion_level3";};
		case "Armst_item_rathion_level3" : 	{  (findDisplay 602) closeDisplay 100;[player, "food", "Armst_item_rathion_level3", 0.65, "armst_switch_rathion"] spawn armst_fnc_food;};

		case "armst_item_stimulFood" : 	{  (findDisplay 602) closeDisplay 100;[player,1] spawn Armst_fnc_switch_stimulFood;      	}; 
		case "armst_item_stimulWater" : {  (findDisplay 602) closeDisplay 100;[player,1] spawn Armst_fnc_switch_stimulWater;      	}; 
		case "ARMST_psyblocade" : {  (findDisplay 602) closeDisplay 100;[] spawn Armst_fnc_item_psyblock;      	}; 
		
		// case "armst_item_pda" : 		{  (findDisplay 602) closeDisplay 100;["main"] call drg_fnc_tabpda;player playActionNow 'Gesturecompass';}; 
		case "armst_item_map" : 		{  (findDisplay 602) closeDisplay 100;createdialog "armst_map2";}; 
		case "armst_item_map2" : 		{  (findDisplay 602) closeDisplay 100;createdialog "armst_map2";}; 

		case "armst_Razorwire" : 		{   (findDisplay 602) closeDisplay 100;["armst_Razorwire","Land_Razorwire_F"] spawn Armst_fnc_barricade;                  }; 
		case "armst_BagFence" : 		{   (findDisplay 602) closeDisplay 100;["armst_BagFence","Land_BagFence_Long_F"] spawn Armst_fnc_barricade;               }; 
		case "armst_CampingChair" : 	{   (findDisplay 602) closeDisplay 100;["armst_CampingChair","Land_CampingChair_V2_F"] spawn Armst_fnc_barricade;         }; 
		case "armst_CampingTable" : 	{   (findDisplay 602) closeDisplay 100;["armst_CampingTable","Land_CampingTable_small_F"] spawn Armst_fnc_barricade;      }; 
		case "armst_tent" : 			{   (findDisplay 602) closeDisplay 100;["armst_tent","Land_tentA_F"] spawn Armst_fnc_barricade;                           }; 
		case "armst_MetalBarrel" : 		{   (findDisplay 602) closeDisplay 100;["armst_MetalBarrel","MetalBarrel_burning_F"] spawn Armst_fnc_barricade;           }; 
		case "armst_generator" : 		{   (findDisplay 602) closeDisplay 100;["armst_generator","Land_Portable_generator_F"] spawn Armst_fnc_barricade;         }; 
		case "armst_Camping_Light" : 	{   (findDisplay 602) closeDisplay 100;["armst_Camping_Light","Land_Camping_Light_F"] spawn Armst_fnc_barricade;          }; 
		case "armst_PortableLight" : 	{   (findDisplay 602) closeDisplay 100;["armst_PortableLight","Land_PortableLight_single_F"] spawn Armst_fnc_barricade;   }; 
		case "armst_Camper" : 			{   (findDisplay 602) closeDisplay 100;["armst_Camper","Land_cargo_addon02_V2_F"] spawn Armst_fnc_barricade;              }; 
		case "armst_pallet_vertical" : 	{   (findDisplay 602) closeDisplay 100;["armst_pallet_vertical","xcam_pallet_vertical_F"] spawn Armst_fnc_barricade;      }; 
		case "armst_armst_korob1" : 	{   (findDisplay 602) closeDisplay 100;["armst_armst_korob1","armst_korob1"] spawn Armst_fnc_barricade;                   }; 
		case "armst_NO1" : 				{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_NO1","Land_PressureWasher_01_F"] spawn Armst_fnc_barricade;       		};  }; 
		case "armst_NO2" : 				{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_NO2","Land_TripodScreen_01_dual_v2_F"] spawn Armst_fnc_barricade; 		};  }; 
		case "armst_NO3" : 				{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_NO3","Land_PortableGenerator_01_F"] spawn Armst_fnc_barricade;    		};  }; 
		case "armst_NO4" : 				{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_NO4","WaterPump_01_forest_F"] spawn Armst_fnc_barricade;          		};  }; 
		case "armst_NO5" : 				{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_NO5","Land_SatelliteAntenna_01_F"] spawn Armst_fnc_barricade;     		};  }; 
		case "armst_NO6" : 				{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_NO6","Land_Device_assembled_F"] spawn Armst_fnc_barricade;        		};  }; 
		case "armst_NO7" : 				{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["armst_NO7","Land_DieselGroundPowerUnit_01_F"] spawn Armst_fnc_barricade;		};  };
		case "ARMST_toxicgas" : 		{  if (alive player  && ("ARMST_instruments" in (items player + assignedItems player))) then { (findDisplay 602) closeDisplay 100;["ARMST_toxicgas","Land_MetalBarrel_F"] spawn Armst_fnc_barricade;		};  };

		case "ARMST_instruments" : 		{  (findDisplay 602) closeDisplay 100;if (((count nearestObjects [player, ["Land_Razorwire_F"], 10])>0)) then { ["armst_Razorwire"] spawn Armst_fnc_additem; _razorwire=nearestObjects [player, ["Land_Razorwire_F"], 10];{deleteVehicle _x;} forEach _razorwire; };      	}; 
		case "ARMST_wpnclnkit" : 		{  (findDisplay 602) closeDisplay 100;[] spawn armst_fnc_rweap}; 
		
		case "armst_item_medkit" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_item_medkit1lvl;player removeitem "armst_item_medkit";player additem "armst_item_medkit_level2";}; 
		case "armst_item_medkit_level2" : {  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_item_medkit1lvl;player removeitem "armst_item_medkit_level2";player additem "armst_item_medkit_level3";}; 
		case "armst_item_medkit_level3" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_item_medkit1lvl;player removeitem "armst_item_medkit_level3";}; 
		case "armst_item_medkit2" : 	{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_item_medkit2lvl;player removeitem "armst_item_medkit2";player additem "armst_item_medkit2_level2";}; 
		case "armst_item_medkit2_level2" : 	{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_item_medkit2lvl;player removeitem "armst_item_medkit2_level2";player additem "armst_item_medkit2_level3";}; 
		case "armst_item_medkit2_level3" : 	{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_item_medkit2lvl;player removeitem "armst_item_medkit2_level3";}; 
		case "armst_item_medkit3" : 	{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_item_medkit3lvl;player removeitem "armst_item_medkit3";player additem "armst_item_medkit3_level2";}; 
		case "armst_item_medkit3_level2" : 	{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_item_medkit3lvl;player removeitem "armst_item_medkit3_level2";player additem "armst_item_medkit3_level3";}; 
		case "armst_item_medkit3_level3" : 	{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_item_medkit3lvl;player removeitem "armst_item_medkit3_level3";};  
		case "armst_item_antirad" : 	{  (findDisplay 602) closeDisplay 100;[player] spawn STLK_fnc_radX_health;}; 	
		case "Chemlight_red" : 			{  (findDisplay 602) closeDisplay 100;[player] call AGM_Attach_fnc_openAttachUI;      	};  
		case "Chemlight_green" : 		{  (findDisplay 602) closeDisplay 100;[player] call AGM_Attach_fnc_openAttachUI;      	};  
		case "Chemlight_blue" : 		{  (findDisplay 602) closeDisplay 100;[player] call AGM_Attach_fnc_openAttachUI;      	};  
		case "Chemlight_yellow" : 		{  (findDisplay 602) closeDisplay 100;[player] call AGM_Attach_fnc_openAttachUI;      	};  
		
		case "ARMST_kosyak" : 			{ 
		 	if ((('ARMST_zippo' in items player) or ('ARMST_lighter' in items player) or ("armst_spicki" in (magazines player)))) then {
		 	  	(findDisplay 602) closeDisplay 100;[player,"Курить косяк","","","(('ARMST_kosyak' in items player) && ('ARMST_zippo' in items player) or ('ARMST_lighter' in items player) or ('armst_spicki' in (magazines player)))","true",{[player] call AGM_WeaponSelect_fnc_putWeaponAway;player removeitem "ARMST_kosyak";},{addcamShake[random 3, 1, random 3];player say2d "smoke";[player] spawn Armst_fnc_cigs_smoke;player playactionnow "Gesturecigaretes";sleep 3;},{[0] call ARMST_Radiation_SetInfection;player setVariable ["AGM_Pain", 0, True];["Покурил..."] call AGM_Core_fnc_displayTextStructured},{},[],18,nil,true,false] call BIS_fnc_holdActionAdd;

		 	};
		}; 
		case "ARMST_cigar" : 			{
		 	if ((('ARMST_zippo' in items player) or ('ARMST_lighter' in items player) or ("armst_spicki" in (magazines player)))) then {
		 	  	(findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_cigar;
		 	};
		}; 
		case "ARMST_cigarettes" : 		{
		 	if ((('ARMST_zippo' in items player) or ('ARMST_lighter' in items player) or ("armst_spicki" in (magazines player)))) then {
		 	  	(findDisplay 602) closeDisplay 100;[player,"Курить Lucky Strike","","","(('ARMST_cigarettes' in items player) && ('ARMST_zippo' in items player) or ('ARMST_lighter' in items player) or ('armst_spicki' in (magazines player)))","true",{[player] call AGM_WeaponSelect_fnc_putWeaponAway;player removeitem "ARMST_cigarettes";},{player say2d "smoke";[player] spawn Armst_fnc_cigs_smoke;player playactionnow "Gesturecigaretes";sleep 3;},{[0] call ARMST_Radiation_SetInfection;player playactionnow "";["Покурил..."] call AGM_Core_fnc_displayTextStructured},{player playactionnow "";["Не покурил..."] call AGM_Core_fnc_displayTextStructured},[],18,0,true,false] call BIS_fnc_holdActionAdd;

		 	};
		};
		case "armst_item_chigarette" : 		{
		 	if ((('ARMST_zippo' in items player) or ('ARMST_lighter' in items player) or ("armst_spicki" in (magazines player)))) then {
		 	  	(findDisplay 602) closeDisplay 100;[player,"Курить Marlboro","","","(('armst_item_chigarette' in items player) && ('ARMST_zippo' in items player) or ('ARMST_lighter' in items player) or ('armst_spicki' in (magazines player)))","true",{[player] call AGM_WeaponSelect_fnc_putWeaponAway;player removeitem "armst_item_chigarette";},{player say2d "smoke";[player] spawn Armst_fnc_cigs_smoke;player playactionnow "Gesturecigaretes";sleep 3;},{[0] call ARMST_Radiation_SetInfection;player playactionnow "";["Покурил..."] call AGM_Core_fnc_displayTextStructured},{player playactionnow "";["Не покурил..."] call AGM_Core_fnc_displayTextStructured},[],18,0,true,false] call BIS_fnc_holdActionAdd;

		 	};
		}; 
		case "armst_item_stimul_Food" : 	{  (findDisplay 602) closeDisplay 100;uiSleep 0.3;[] spawn Armst_fnc_item_stimul_Food;       };
		case "armst_item_stimul_Water" : 	{  (findDisplay 602) closeDisplay 100;uiSleep 0.3;[] spawn Armst_fnc_item_stimul_Water;      };
		case "armst_item_stimul_stamina" : 	{  (findDisplay 602) closeDisplay 100;uiSleep 0.3;[] spawn Armst_fnc_item_stimul_stamina;    };
		case "armst_item_stimul_recoil" : 	{  (findDisplay 602) closeDisplay 100;uiSleep 0.3;[] spawn Armst_fnc_item_stimul_recoil;     };
		case "armst_item_stimul_NVG" : 		{  (findDisplay 602) closeDisplay 100;uiSleep 0.3;[] spawn Armst_fnc_item_stimul_NVG;      	 };
  
		case "DETECTOR_RKS20" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_raddiagnos;      };   
		case "DETECTOR_MKS1009" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_raddiagnos;      };   
		case "DETECTOR_RKS20" : 		{  (findDisplay 602) closeDisplay 100;[player] spawn Armst_fnc_raddiagnos;      };   
		case "armst_taynik_small" : 	{  (findDisplay 602) closeDisplay 100;["armst_taynik_small"] call ARMST_StashC_ActionPlace;      };   
		case "armst_taynik_big" : 		{  (findDisplay 602) closeDisplay 100;["armst_taynik_big"] call ARMST_StashC_ActionPlace;      };   
	};		
};

[] spawn {
	disableSerialization;
    fnc_lbdbclick = {  
        private ["_data","_configName","_stop"];
        _stop=false;
        _all=_this;
        _idc = ctrlIDC (_this select 0);
        _selectedIndex = _this select 1;
        _dt=lbData [_idc, _selectedIndex];
        _tx=lbText [_idc, _selectedIndex];
        _ok=isClass(configFile >> "CfgMagazines" >> _dt);       
        if (_ok) then {
            _configName = "CfgMagazines";
            _data=_dt;
        }else{
            _item=items player;
            {
                _resp =getText(configFile >> "CfgGlasses" >> _x >> "displayName");
                if (_resp==_tx) exitWith {
                	_data=_x;
                	_stop=true;
            		_configName = "CfgGlasses";
                };
                _name =getText(configFile >> "CfgWeapons" >> _x >> "displayName");
                if (_name==_tx) exitWith {
                	_data=_x;
            		_configName = "CfgWeapons";
                };
            	
            } forEach _item;

        };
   		_text1 = format ["Text\n%1\n________\n",lbText [_idc, _selectedIndex]];
        if (_stop) exitWith { };
        [_data,_configName] spawn Armst_dragster_dblclick_on_item;
        false
    };
    fnc_dbclick_helm = { 
    	_helm=headgear player;
    	switch (_helm) do { 
    		case "ZSH_ZV" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "ZSH_ZN"        }; 
    		case "ZSH_ZN" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "ZSH_ZV"        }; 
    		case "ZSH_1_ZV" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "ZSH_1_ZN"      }; 
    		case "ZSH_1_ZN" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "ZSH_1_ZV"      }; 
    		case "Vulkan_ZV" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Vulkan_ZN"     }; 
    		case "Vulkan_ZN" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Vulkan_ZV"     }; 
    		case "TIG_ZV" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "TIG_ZN"        }; 
    		case "TIG_ZN" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "TIG_ZV"        }; 
    		case "Rys_ZV" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Rys_ZN"        }; 
    		case "Rys_ZN" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Rys_ZV"        }; 
    		case "Maska2_ZV" :  	{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Maska2_ZN"     }; 
    		case "Maska2_ZN" :  	{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Maska2_ZV"     }; 
    		case "Maska1h_ZV" : 	{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Maska1h_ZN"    }; 
    		case "Maska1h_ZN" : 	{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Maska1h_ZV"    }; 
    		case "LSHZ_2DT_Y_ZV" : 	{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "LSHZ_2DT_Y_ZN" }; 
    		case "LSHZ_2DT_Y_ZN" : 	{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "LSHZ_2DT_Y_ZV" }; 
    		case "K6_3_ZV" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "K6_3_ZN"       }; 
    		case "K6_3_ZN" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "K6_3_ZV"       }; 
    		case "Altyn_ZV" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Altyn_ZN"      }; 
    		case "Altyn_ZN" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Altyn_ZV"      }; 
    		case "Maska1_ZV" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Maska1_ZN"     }; 
    		case "Maska1_ZN" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "Maska1_ZV"     }; 
    		case "armst_ushanka" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_ushanka_off"     }; 
    		case "armst_ushanka_off" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_ushanka"     }; 
    		case "armst_Hood_mid_loner1" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_full_loner1"     }; 
    		case "armst_Hood_full_loner1" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_closed_loner1"     }; 
    		case "armst_Hood_closed_loner1" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_mid_loner1"     }; 
			
    		case "armst_Hood_mid_loner2" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_full_loner2"     }; 
    		case "armst_Hood_full_loner2" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_closed_loner2"     }; 
    		case "armst_Hood_closed_loner2" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_mid_loner2"     }; 
			
    		case "armst_Hood_mid_loner3" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_full_loner3"     }; 
    		case "armst_Hood_full_loner3" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_closed_loner3"     }; 
    		case "armst_Hood_closed_loner3" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_mid_loner3"     }; 
			
    		case "armst_Hood_mid_loner4" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_full_loner4"     }; 
    		case "armst_Hood_full_loner4" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_closed_loner4"     }; 
    		case "armst_Hood_closed_loner4" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_mid_loner4"     }; 
			
    		case "armst_Hood_mid_loner5" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_full_loner5"     }; 
    		case "armst_Hood_full_loner5" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_closed_loner5"     }; 
    		case "armst_Hood_closed_loner5" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_mid_loner5"     }; 
			
    		case "armst_Hood_mid_loner6" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_full_loner6"     }; 
    		case "armst_Hood_full_loner6" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_closed_loner6"     }; 
    		case "armst_Hood_closed_loner6" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_mid_loner6"     }; 
			
    		case "armst_Hood_mid_loner7" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_full_loner7"     }; 
    		case "armst_Hood_full_loner7" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_closed_loner7"     }; 
    		case "armst_Hood_closed_loner7" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_mid_loner7"     }; 
			
    		case "armst_Hood_mid_loner8" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_full_loner8"     }; 
    		case "armst_Hood_full_loner8" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_closed_loner8"     }; 
    		case "armst_Hood_closed_loner8" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_mid_loner8"     }; 
			
    		case "armst_Hood_mid_loner9" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_full_loner9"     }; 
    		case "armst_Hood_full_loner9" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_closed_loner9"     }; 
    		case "armst_Hood_closed_loner9" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_mid_loner9"     }; 
			
    		case "armst_Hood_mid_loner10" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_full_loner10"     }; 
    		case "armst_Hood_full_loner10" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_closed_loner10"     }; 
    		case "armst_Hood_closed_loner10" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_mid_loner10"     }; 
			
    		case "armst_Hood_mid_loner11" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_full_loner11"     }; 
    		case "armst_Hood_full_loner11" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_closed_loner11"     }; 
    		case "armst_Hood_closed_loner11" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_mid_loner11"     }; 
			
    		case "armst_Hood_mid_clearsky" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_full_clearsky"     }; 
    		case "armst_Hood_full_clearsky" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_closed_clearsky"     }; 
    		case "armst_Hood_closed_clearsky" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_mid_clearsky"     }; 
			
    		case "armst_Hood_mid_dolg1" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_full_dolg1"     }; 
    		case "armst_Hood_full_dolg1" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_closed_dolg1"     }; 
    		case "armst_Hood_closed_dolg1" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_mid_dolg1"     }; 
			
    		case "armst_Hood_mid_dolg2" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_full_dolg2"     }; 
    		case "armst_Hood_full_dolg2" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_closed_dolg2"     }; 
    		case "armst_Hood_closed_dolg2" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_mid_dolg2"     }; 
			
    		case "armst_Hood_mid_freedom1" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_full_freedom1"     }; 
    		case "armst_Hood_full_freedom1" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_closed_freedom1"     }; 
    		case "armst_Hood_closed_freedom1" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_mid_freedom1"     }; 
			
    		case "armst_Hood_mid_freedom2" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_full_freedom2"     }; 
    		case "armst_Hood_full_freedom2" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_closed_freedom2"     }; 
    		case "armst_Hood_closed_freedom2" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_mid_freedom2"     }; 
			
    		case "armst_Hood_mid_mech" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_full_mech"     }; 
    		case "armst_Hood_full_mech" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_closed_mech"     }; 
    		case "armst_Hood_closed_mech" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_mid_mech"     }; 
			
    		case "armst_Hood_mid_merc" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_full_merc"     }; 
    		case "armst_Hood_full_merc" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_closed_merc"     }; 
    		case "armst_Hood_closed_merc" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_mid_merc"     }; 
			
    		case "armst_Hood_mid_military" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_full_military"     }; 
    		case "armst_Hood_full_military" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_closed_military"     }; 
    		case "armst_Hood_closed_military" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_mid_military"     }; 
			
    		case "armst_Hood_mid_neutral" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_full_neutral"     }; 
    		case "armst_Hood_full_neutral" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_closed_neutral"     }; 
    		case "armst_Hood_closed_neutral" : 		{ removeheadgear player;player playActionNow 'GestureWipeFace'; player addheadgear "armst_Hood_mid_neutral"     }; 
			
    		
    	};
    	false
	};
    while {true} do {
        waituntil {!(isnull (finddisplay 602))};        
        ((findDisplay 602) displayCtrl 638) ctrlSetEventHandler ["LBDblClick", "_this call fnc_lbdbclick"];
        ((findDisplay 602) displayCtrl 619) ctrlSetEventHandler ["LBDblClick", "_this call fnc_lbdbclick"];
        ((findDisplay 602) displayCtrl 6240) ctrlSetEventHandler ["MouseButtonDblClick", "_this call fnc_dbclick_helm"];
		_money = player getVariable "Money";
		_moneys=format["Деньги: %1",[_money] call BIS_fnc_numberText];
		ctrlSetText [113, _moneys];
		
        waituntil {isnull (finddisplay 602)};
    };
};
