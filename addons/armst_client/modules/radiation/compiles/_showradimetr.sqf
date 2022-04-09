/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Отображает радиметр
	
	Parameter(s):
	Return: String - ключ
	
*/

	#include "..\module.sqf";
	
	private _radimetr = call module(GetRadimetr);
	
	if !(_radimetr isEqualTo "") then {
		
		disableSerialization;
		16 cutRsc [_radimetr, "PLAIN"];
		
		switch (_radimetr) do {
		
			case "DETECTOR_DBG06M": {
				private _radLevelFormat = [module(Terrain), 2] call module(DecimalNumber);
				with uiNamespace do {
					DETECTOR_FIELD ctrlSetText format ["%1", _radLevelFormat];
				};
			};
			
			case "DETECTOR_RKS20": {
				private _radLevelFormat = [module(Terrain), 4] call module(DecimalNumber);
				with uiNamespace do {
					DETECTOR_FIELD ctrlSetText format ["%1", _radLevelFormat];
				};
			};
			
			case "DETECTOR_MKS1009": {
				private _radLevelFormat = [module(Terrain), 4] call module(DecimalNumber);
				private _radLevelTime = [module(SpentTime)] call module(TimeToString);
				with uiNamespace do {
					DETECTOR_FIELD ctrlSetStructuredText parseText (format ["%1<br/><t size='0.05'>%2</t>", _radLevelFormat, _radLevelTime]);
				};
			};
		};
	};