/*
	author: 		Vladimir Vorobev <Dragster>
	E-mail:			1dragsteron@gmail.com
	file: 			fn_getBackgroundByPdaItem.sqf
	version: 		1.00
	date: 			02.12.2019
	purpose: 			
	arguments: 		
	return value:	

	example call: 		[] call drg_fnc_getBackgroundByPdaItem;
*/

params [["_item",""]];
private _bg = "";
switch (_item) do { 
	case "armst_item_pda_army" : 	{ _bg = "\drg_ui\textures\pda_new\backgrounds\bgArmy.paa"; 			}; 
	case "armst_item_pda_band" : 	{ _bg = "\drg_ui\textures\pda_new\backgrounds\bgBandits.paa"; 		}; 
	case "armst_item_pda_clearsky" :{ _bg = "\drg_ui\textures\pda_new\backgrounds\bgClearSky.paa"; 		}; 
	case "armst_item_pda_duty" : 	{ _bg = "\drg_ui\textures\pda_new\backgrounds\bgDuty.paa"; 			}; 
	case "armst_item_pda_freedom" : { _bg = "\drg_ui\textures\pda_new\backgrounds\bgFreedom.paa"; 		}; 
	case "armst_item_pda_merc" : 	{ _bg = "\drg_ui\textures\pda_new\backgrounds\bgMercenaries.paa"; 	}; 
	case "armst_item_pda_monolith" :{ _bg = "\drg_ui\textures\pda_new\backgrounds\bgMonolith.paa"; 		}; 
	case "armst_item_pda_science" : { _bg = "\drg_ui\textures\pda_new\backgrounds\bgScients.paa"; 		}; 
	default { _bg = "\drg_ui\textures\pda_new\background.paa"; }; 
};
_bg