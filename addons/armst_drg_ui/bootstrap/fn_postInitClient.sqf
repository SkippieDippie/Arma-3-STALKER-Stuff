[] spawn {
	if (isDedicated) then {
		"drg_remoteMessageServer" addPublicVariableEventHandler {(_this select 1) spawn drg_fnc_remoteMessageServer;diag_log str (_this select 1)};
	};
	"drg_remoteMessageClient" addPublicVariableEventHandler {(_this select 1) spawn drg_fnc_remoteMessageClient;diag_log str (_this select 1)};
};