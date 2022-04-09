//////////////////////////////////////////////////////////////////////////
//                            Script Made By                            //
//                                MacRae                                //
//                                                                      //
//                                                                      //
//1.Place a Camping Chair on the map.                                   //
//                                                                      //
//2.Add this to the Camping chair Init:                                 //
//this addAction ["<t color='#0099FF'>Сесть</t>","Scripts\sitdown.sqf"]//
//                              4D6163526165                            //
//////////////////////////////////////////////////////////////////////////


_chair = _this select 0; 
_unit = _this select 1; 
ARMST_ANIM= [
"HubSittingChairA_move1","HubSittingChairB_idle1","HubSittingChairB_idle2","HubSittingChairB_idle3",
"HubSittingChairUA_idle1","HubSittingChairUA_idle2","HubSittingChairUA_idle3","HubSittingChairUA_move1",
"HubSittingChairUB_idle1","HubSittingChairUB_idle2","HubSittingChairUB_idle3","HubSittingChairUB_move1",
"HubSittingChairUC_idle1","HubSittingChairUC_idle2","HubSittingChairUC_idle3"
];	
_ARMST_ANIM = selectRandom ARMST_ANIM;	
[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;
[[_unit, _ARMST_ANIM], "switchMove"] spawn BIS_fnc_MP; 
_unit setpos [getpos _chair select 0, getpos _chair select 1,((getpos _unit select 2) +1)];
_unit setPos (getPos _chair); 
_unit setDir ((getDir _chair) - 180); 
[
player,
"Встать",
"",
"",
"true",
"true",
{["Встаю..."] call AGM_Core_fnc_displayTextStructured;},
{},
{ [[player, ""], "switchMove"] call bis_fnc_mp;},
{},
[],4,nil,true,false] call BIS_fnc_holdActionAdd;


