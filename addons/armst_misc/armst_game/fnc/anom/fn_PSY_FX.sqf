/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

private "_counter";
_voices = ["psy_a","psy_b","psy_c"];

player setVariable ["ARMST_PSYEFFECT",1];
_counter=25;
_state = player getVariable "ARMST_PSYEFFECT";
While {(_state==1)} do 
{
_state = player getVariable "ARMST_PSYEFFECT";
_counter=_counter+1;
if (_counter>=5) then {_counter=0; PlaySound (_voices select (round(random 2)));};
sleep 1;
};
player setVariable ["ARMST_PSYEFFECT",nil,true];
player setVariable ["ARMST_PSYDAMAGE",nil,true];