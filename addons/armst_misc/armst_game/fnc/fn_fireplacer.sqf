/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
  
		sleep 1;
		disableUserInput true;
        player playMove "AinvPknlMstpSnonWnonDnon_medic_1";    
		sleep 3; 
		[localize "str_fireplace_1"] call ace_common_fnc_displayTextStructured;  
        player playMove "AinvPknlMstpSnonWnonDnon_medic_1";    
		sleep 3;
		[localize "str_fireplace_2"] call ace_common_fnc_displayTextStructured; 
        player playMove "AinvPknlMstpSnonWnonDnon_medic_1";    
		sleep 3;
		[localize "str_fireplace_3"] call ace_common_fnc_displayTextStructured;
		sleep 3;
		player playMove "AinvPknlMstpSnonWnonDnon_medic_1";    
		[localize "str_fireplace_4"] call ace_common_fnc_displayTextStructured;
		disableUserInput false;
		[player] spawn armst_fnc_fireplaced;