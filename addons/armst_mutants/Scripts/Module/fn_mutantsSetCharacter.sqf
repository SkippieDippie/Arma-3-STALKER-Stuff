	/*
	Author: Aloe
		
	Description:
	Set Character settings for mutant
		
	Parameter(s):
	_unit           <Object>          unit
	_character    <Formatted Array>   array in format fn_mutantsOrderGetCharacter
    */
	
    params ["_unit", "_character"];
    
    if !(_character isEqualTo []) then {
    
        _character params [
            "_habitatRadius",
            "_detectionRadius",
            "_coverRadius",
            "_escapeRadius",
            "_dammage",
            "_agressive",
            "_curious",
            "_secrecy",
            "_cowardice",
            "_societal",
            "_courage",
            "_tactiful",
            "_debugType"
        ];
        
        waitUntil {uiSleep 0.1; _unit getVariable ["ARM_InitalizedAI", false]};
        
        _unit setVariable ["ARM_Radius", _habitatRadius];
        _unit setVariable ["ARM_Detection", _detectionRadius];
        _unit setVariable ["ARM_Chase", _detectionRadius + 1];
        _unit setVariable ["ARM_CoverRadius", _coverRadius];
        _unit setVariable ["ARM_EscapeRadius", _escapeRadius];

        _unit setVariable ["ARM_Cowardice", _cowardice];
        _unit setVariable ["ARM_Secrecy", _secrecy];
        _unit setVariable ["ARM_Aggressive", _agressive];
        _unit setVariable ["ARM_Curious", _curious];
        _unit setVariable ["ARM_Societal", _societal];
        _unit setVariable ["ARM_Courage", _courage];
        _unit setVariable ["ARM_Tactful", _tactiful];
        
        _unit setVariable ["ARM_Damage", _dammage, true];
        
        _unit setVariable ["ARM_DebugType", _debugType];
        
    };
    
    