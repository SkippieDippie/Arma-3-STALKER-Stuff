_nositel = _this select 0;
_gasMask = _this select 1;
2292 cutRsc ["Default", "PLAIN", 9999999, false];
while { (goggles player == _gasMask) and (alive _nositel) } do {
sleep 1.3;
if (goggles _nositel == _gasMask) then {
_rndIn = ["gas_breath_in_1","gas_breath_in_2","gas_breath_in_3","gas_breath_in_4"] call BIS_fnc_SelectRandom;
playSound _rndIn;
_rndBreath = ["hud_stalk_gasmask_breath","hud_stalk_gasmask_breath2","hud_stalk_gasmask_breath3"] call BIS_fnc_SelectRandom;
2292 cutRsc [_rndBreath, "PLAIN DOWN", 0.5, false];
}else{
2292 cutFadeOut 0;
};
sleep 1.3;
if (goggles _nositel == _gasMask) then {
_rndOut = ["gas_breath_out_1","gas_breath_out_2","gas_breath_out_3","gas_breath_out_4"] call BIS_fnc_SelectRandom;
playSound _rndOut;
2292 cutFadeOut 1;
};
};