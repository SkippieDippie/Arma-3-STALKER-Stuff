		
	class LocationCaptured
	{
		title = $STR_LOCATION_NOTIFI_CAPTURED_TITLE; // Tile displayed as text on black background. Filled by arguments.
		iconPicture = "%2"; // Small icon displayed in left part. Colored by "color", filled by arguments.
		iconText = ""; // Short text displayed over the icon. Colored by "color", filled by arguments.
		description = "%1"; // Brief description displayed as structured text. Colored by "color", filled by arguments.
		color[] = {1,1,1,1}; // Icon and text color
		duration = 10; // How many seconds will the notification be displayed
		priority = 0; // Priority; higher number = more important; tasks in queue are selected by priority
		difficulty[] = {}; // Required difficulty settings. All listed difficulties has to be enabled
	};
	
	class LocationLost
	{
		title = $STR_LOCATION_NOTIFI_LOST_TITLE; 
		iconPicture = "%2"; 
		iconText = "";
		description = "%1"; 
		color[] = {1,1,1,1};
		duration = 10;
		priority = 0;
		difficulty[] = {};
	};
	
	class FactionDeclareWar
	{
		title = "%1"; 
		iconPicture = ""; 
		iconText = "";
		description = "%2"; 
		color[] = {1,1,1,1};
		duration = 10;
		priority = 0;
		difficulty[] = {};
	};