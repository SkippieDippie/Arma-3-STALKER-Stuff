#include "BIS_AddonInfo.hpp"
	
	class CfgPatches 
	{
		class armst_client 
		{
			author = "Aloe,Romzet,Dragster";
			version = 1;
			units[] = {};
			requiredAddons[] = {"A3_Modules_F"};
		};
		class armst_man_science22 
		{
			author = "Aloe,Romzet,Dragster";
			version = 1;
			units[] = {};
			requiredAddons[] = {"A3_Modules_F"};
		};
	};
	
	class CfgRemoteExec
	{
		  class Functions
		  {
			    mode = 2;
			    jip = 1; 
			    
			    //Server
			    //class ARMST_Account_Authorization 				{allowedTargets = 2;};
			    //class ARMST_Account_SavePlayer	 				{allowedTargets = 2;};
			   // class ARMST_Account_Kick 						{allowedTargets = 2;};

			    //class ARMST_Faction_TerminalRequestAuth			{allowedTargets = 2;};
			    //class ARMST_Faction_TerminalRequest				{allowedTargets = 2;};
			    
			    //class ARMST_StashS_CreateStashRemote	 		{allowedTargets = 2;};
			    //class ARMST_StashS_SaveStash				 	{allowedTargets = 2;};
				
				//class ARMST_Papers_addUniquePaper				{allowedTargets = 2;};
				//class ARMST_Papers_updUniquePaper				{allowedTargets = 2;};
				//class ARMST_Papers_requestPaperText				{allowedTargets = 2;};
				
				//class ARMST_Camps_Create_NewCamp				{allowedTargets = 2;};
				//class ARMST_Camps_Create_NewObject				{allowedTargets = 2;};
				//class ARMST_Camps_SyncData						{allowedTargets = 2;};
			
			    //Per-to-per
			     //class ARMST_Rating_OnKill 						{allowedTargets = 1;};
				 
			     
		  };
	};
	
	#define true 1
	#define false 0
	
	class ARMST_ClientModules 
	{
		class Loadscreen
		{
			log = true;
			loadscreen[] = {
				"\armst_client\gui\images\loadscreen\clearsky.jpg",
				"\armst_client\gui\images\loadscreen\dutty.jpg",
				"\armst_client\gui\images\loadscreen\freedom.jpg",
				"\armst_client\gui\images\loadscreen\mercenary.jpg",
				"\armst_client\gui\images\loadscreen\military.jpg",
				"\armst_client\gui\images\loadscreen\monolith.jpg",
				"\armst_client\gui\images\loadscreen\scientist.jpg",
				"\armst_client\gui\images\loadscreen\stalker.jpg"
			};
		};
		
		class Player
		{
			log = true;
			saveInterval = 10;			//Минуты, интервал сохранения игрока
			hungerTime = 300;			//Минуты (2.5часа), как долго наступает полный голод
			thirstTime = 180;				//Минуты (1.5часа), как долго наступает полное обезвоживание
		};
		
		class Initialization
		{
			log = true;
		};
		
		class Trade
		{
			log = true;
		};
		
		class Rating
		{
			log = true;
		};
		
		class Terminal
		{
			log = true;
		};
		
		class Radiation
		{
			log = true;
		};
		
		class Paper
		{
			log = true;
		};
		
		class Camp
		{
			log = true;
		};
	};
		
	class CfgFunctions 
	{
		#include "\armst_client\CfgFunctions.h"
	};
	
	class CfgVehicles
	{
		#include "\armst_client\module_location\CfgVehicles.h"
	};
	
	class RscTitles 
	{
		titles[]={};
		
		#include "\armst_client\module_location\RscTitles.h"
		#include "\armst_client\modules\Radiation\RscTitles.h"
		#include "\armst_client\modules\Detectors\RscTitles.h"
	};
	
	class CfgNotifications
	{
		#include "\armst_client\CfgNotifications.h"
	};
	
	class CfgHints
	{
		#include "\armst_client\CfgHints.h"
	};	
	
	//GUI Base
	#include "\armst_client\GUI\Classes\common.hpp"
	#include "\armst_client\GUI\Classes\definitions.hpp"
	
	//Dialogs
	#include "\armst_client\GUI\Classes\loadscreen.hpp"
	#include "\armst_client\GUI\Classes\tradedialog.hpp"
	#include "\armst_client\GUI\Classes\terminaldialog.hpp"
	#include "\armst_client\GUI\Classes\selectfactiondialog.hpp"
	#include "\armst_client\GUI\Classes\denieddialog.hpp"
	#include "\armst_client\GUI\Classes\paper.hpp"
	#include "\armst_client\GUI\Classes\campviewer.hpp"
	
	
	class CfgSounds {
		#include "\armst_client\modules\Radiation\CfgSounds.h"
		#include "\armst_client\modules\Detectors\CfgSounds.h"
	};
	
	class CfgMusic {
		tracks[]={"armst_opener"};
		class armst_opener {
			name = "armst_opener";
			sound[] = {"\armst_client\GUI\Movies\armst_opener.ogg", db+10, 1.0};
		};
	};
