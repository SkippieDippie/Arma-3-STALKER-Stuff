
	class Armst 
	{
		class Bootstrap 
		{
			file = "\armst_client\bootstrap";
			
			class preInitClient {preInit  = 1;};
			class postInitClient {postInit  = 1;};
			
		};
		//Code
		class Misc {
			file = "\armst_client\compiles\misc";
			
			class otherScripts {preInit  = 1;};
			
			class report {};
			class reportAdd {};
			class reportActivate {};
			
			class friendlyFactions {};
			
			class inString {};
			class curTimeStr {};
		};

		class miscloot {
			file = "\armst_client\compiles\miscloot";
			class clearUnit {};
			class loadWeapons {};
			class loadUniform {};
			class loadVest {};
			class loadBackpack {};
			class loadMisc {};
			
		};
		
		class Environ {
			file = "\armst_client\compiles\environ";
			
			class prepareNPC {};
			class respawnProtect {};
			
			class visibleToggle{};
			class forceRagdoll{};
			
			class getTerrainInfo {};
			
			class isInsideBuilding{};
			class getEmptyRandomPos{};
			
			class getInvEmptyElement{};
			class loadInventoryGlobal{};
			class loadInventoryToUnit{};
			class getInventory{};
			class loadInventory{};
			class consolidateInventory{};
			class addCargoItems {};
		};
		
		class Player {
			file = "\armst_client\compiles\player";
			
			class playerMusic{};
			class playMovie{};
			class getMedicine{};
			class setMedicine{};
		};
		
		//Locations module
		class ModuleLocationServer {
			file = "\armst_client\module_location\Server";
			class locationModule {};
			class locationFinalize {};
		};
		
		class ModuleLocationClient {
			file = "\armst_client\module_location\Client";
			class locationHUD {};
			class showLocationNote {};
		};
		
	};
	