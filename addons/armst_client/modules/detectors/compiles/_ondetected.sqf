/*
	Author: Aloe <itfruit@mail.ru>

	Description:  По активации детектора
	
	Parameter(s):
	
	_this select 0 (String) - Класс детектора
	_this select 1 (Object) - Обнаруженный объект 
	_this select 2 (Display) - Дисплей детектора
	_this select 3 (Control) - Контроллер детектора 

*/
	#include "..\module.sqf";
	
	params ["_detectorDialog", "_art", "_display", "_control"];

	switch (_detectorDialog) do {
		case "DETECTOR_A_RESPOND" : {

			_control ctrlSetText "\armst\armst_item\detectors\otklick\otklick_on.paa";
			playSound "detector_1";
			
		};
		
		case "DETECTOR_A_BEAR" : {

			private _relDir = player getRelDir _art;
			
			try {
				if ((_relDir >= 337.5 && _relDir <= 360) || (_relDir >= 0 && _relDir <= 22.5)) throw ("\armst\armst_item\detectors\bear\north.paa"); 
				if (_relDir > 292.5 && _relDir <= 337.5) throw ("\armst\armst_item\detectors\bear\northwest.paa");
				if (_relDir > 247.5 && _relDir <= 292.5) throw ("\armst\armst_item\detectors\bear\west.paa");
				if (_relDir > 202.5 && _relDir <= 247.5) throw ("\armst\armst_item\detectors\bear\southwest.paa");
				if (_relDir > 157.5 && _relDir <= 202.5) throw ("\armst\armst_item\detectors\bear\south.paa");
				if (_relDir > 112.5 && _relDir <= 157.5) throw ("\armst\armst_item\detectors\bear\southeast.paa");
				if (_relDir > 67.5 && _relDir <= 112.5) throw ("\armst\armst_item\detectors\bear\east.paa");
				if (_relDir > 22.5 && _relDir <= 67.5) throw ("\armst\armst_item\detectors\bear\northeast.paa");
			} catch {
				_control ctrlSetText _exception;
			};
			
			playSound "detector_2";
		};
		
		case "DETECTOR_TRLife_SVAROG" : {

			private _relDir = player getRelDir _art;
			private _relDist = player distance _art;
			
			try {
				if ((_relDir >= 270 && _relDir < 315) && (_relDist > 2 && _relDist <= 6)) throw   ("\armst_client\modules\detectors\images\TRLife\3_m90.paa"); 
				if ((_relDir >= 270 && _relDir < 315) && (_relDist > 7 && _relDist <= 15)) throw   ("\armst_client\modules\detectors\images\TRLife\6_m90.paa"); 
				if ((_relDir >= 270 && _relDir < 315) && (_relDist > 15 && _relDist <= 25)) throw   ("\armst_client\modules\detectors\images\TRLife\9_m90.paa"); 
				if ((_relDir >= 270 && _relDir < 315) && (_relDist > 25 && _relDist <= 35)) throw  ("\armst_client\modules\detectors\images\TRLife\12_m90.paa"); 
				if ((_relDir >= 270 && _relDir < 315) && (_relDist > 35 && _relDist <= 45)) throw ("\armst_client\modules\detectors\images\TRLife\15_m90.paa"); 
				if ((_relDir >= 270 && _relDir < 315) && (_relDist > 45 && _relDist <= 50)) throw ("\armst_client\modules\detectors\images\TRLife\18_m90.paa"); 
				if ((_relDir >= 270 && _relDir < 315) && (_relDist > 50 && _relDist <= 100)) throw ("\armst_client\modules\detectors\images\TRLife\20_m90.paa"); 

				if ((_relDir >= 315 && _relDir <= 360) && (_relDist > 2 && _relDist <= 6)) throw   ("\armst_client\modules\detectors\images\TRLife\3_m45.paa"); 
				if ((_relDir >= 315 && _relDir <= 360) && (_relDist > 6 && _relDist <= 15)) throw   ("\armst_client\modules\detectors\images\TRLife\6_m45.paa"); 
				if ((_relDir >= 315 && _relDir <= 360) && (_relDist > 15 && _relDist <= 25)) throw   ("\armst_client\modules\detectors\images\TRLife\9_m45.paa"); 
				if ((_relDir >= 315 && _relDir <= 360) && (_relDist > 25 && _relDist <= 35)) throw  ("\armst_client\modules\detectors\images\TRLife\12_m45.paa"); 
				if ((_relDir >= 315 && _relDir <= 360) && (_relDist > 35 && _relDist <= 45)) throw ("\armst_client\modules\detectors\images\TRLife\15_m45.paa"); 
				if ((_relDir >= 315 && _relDir <= 360) && (_relDist > 45 && _relDist <= 50)) throw ("\armst_client\modules\detectors\images\TRLife\18_m45.paa"); 
				if ((_relDir >= 315 && _relDir <= 360) && (_relDist > 50 && _relDist <= 100)) throw ("\armst_client\modules\detectors\images\TRLife\20_m45.paa"); 

				if ((_relDir >= 0 && _relDir < 45) && (_relDist > 2 && _relDist <= 6)) throw   ("\armst_client\modules\detectors\images\TRLife\3_p45.paa"); 
				if ((_relDir >= 0 && _relDir < 45) && (_relDist > 6 && _relDist <= 15)) throw   ("\armst_client\modules\detectors\images\TRLife\6_p45.paa"); 
				if ((_relDir >= 0 && _relDir < 45) && (_relDist > 15 && _relDist <= 25)) throw   ("\armst_client\modules\detectors\images\TRLife\9_p45.paa"); 
				if ((_relDir >= 0 && _relDir < 45) && (_relDist > 25 && _relDist <= 35)) throw  ("\armst_client\modules\detectors\images\TRLife\12_p45.paa"); 
				if ((_relDir >= 0 && _relDir < 45) && (_relDist > 35 && _relDist <= 45)) throw ("\armst_client\modules\detectors\images\TRLife\15_p45.paa"); 
				if ((_relDir >= 0 && _relDir < 45) && (_relDist > 45 && _relDist <= 50)) throw ("\armst_client\modules\detectors\images\TRLife\18_p45.paa"); 
				if ((_relDir >= 0 && _relDir < 45) && (_relDist > 50 && _relDist <= 100)) throw ("\armst_client\modules\detectors\images\TRLife\20_p45.paa"); 

				if ((_relDir >= 45 && _relDir <= 90) && (_relDist > 2 && _relDist <= 6)) throw   ("\armst_client\modules\detectors\images\TRLife\3_p90.paa"); 
				if ((_relDir >= 45 && _relDir <= 90) && (_relDist > 6 && _relDist <= 15)) throw   ("\armst_client\modules\detectors\images\TRLife\6_p90.paa"); 
				if ((_relDir >= 45 && _relDir <= 90) && (_relDist > 15 && _relDist <= 25)) throw   ("\armst_client\modules\detectors\images\TRLife\9_p90.paa"); 
				if ((_relDir >= 45 && _relDir <= 90) && (_relDist > 25 && _relDist <= 35)) throw  ("\armst_client\modules\detectors\images\TRLife\12_p90.paa"); 
				if ((_relDir >= 45 && _relDir <= 90) && (_relDist > 35 && _relDist <= 45)) throw ("\armst_client\modules\detectors\images\TRLife\15_p90.paa"); 
				if ((_relDir >= 45 && _relDir <= 90) && (_relDist > 45 && _relDist <= 50)) throw ("\armst_client\modules\detectors\images\TRLife\18_p90.paa"); 
				if ((_relDir >= 45 && _relDir <= 90) && (_relDist > 50 && _relDist <= 100)) throw ("\armst_client\modules\detectors\images\TRLife\20_p90.paa"); 


			} catch {
				_control ctrlSetText _exception;
			};
			
			playSound "detector_3";
		};
		
		case "DETECTOR_A_SVAROG" : {

			private _relDir = player getRelDir _art;
			private _relDist = player distance _art;
			
			try {
				if ((_relDir >= 270 && _relDir < 315) && (_relDist > 0 && _relDist <= 3)) throw   ("\armst_client\modules\detectors\images\svarog\3_m90.paa"); 
				if ((_relDir >= 270 && _relDir < 315) && (_relDist > 3 && _relDist <= 6)) throw   ("\armst_client\modules\detectors\images\svarog\6_m90.paa"); 
				if ((_relDir >= 270 && _relDir < 315) && (_relDist > 6 && _relDist <= 9)) throw   ("\armst_client\modules\detectors\images\svarog\9_m90.paa"); 
				if ((_relDir >= 270 && _relDir < 315) && (_relDist > 9 && _relDist <= 12)) throw  ("\armst_client\modules\detectors\images\svarog\12_m90.paa"); 
				if ((_relDir >= 270 && _relDir < 315) && (_relDist > 12 && _relDist <= 15)) throw ("\armst_client\modules\detectors\images\svarog\15_m90.paa"); 
				if ((_relDir >= 270 && _relDir < 315) && (_relDist > 15 && _relDist <= 18)) throw ("\armst_client\modules\detectors\images\svarog\18_m90.paa"); 
				if ((_relDir >= 270 && _relDir < 315) && (_relDist > 18 && _relDist <= 100)) throw ("\armst_client\modules\detectors\images\svarog\20_m90.paa"); 

				if ((_relDir >= 315 && _relDir <= 360) && (_relDist > 0 && _relDist <= 3)) throw   ("\armst_client\modules\detectors\images\svarog\3_m45.paa"); 
				if ((_relDir >= 315 && _relDir <= 360) && (_relDist > 3 && _relDist <= 6)) throw   ("\armst_client\modules\detectors\images\svarog\6_m45.paa"); 
				if ((_relDir >= 315 && _relDir <= 360) && (_relDist > 6 && _relDist <= 9)) throw   ("\armst_client\modules\detectors\images\svarog\9_m45.paa"); 
				if ((_relDir >= 315 && _relDir <= 360) && (_relDist > 9 && _relDist <= 12)) throw  ("\armst_client\modules\detectors\images\svarog\12_m45.paa"); 
				if ((_relDir >= 315 && _relDir <= 360) && (_relDist > 12 && _relDist <= 15)) throw ("\armst_client\modules\detectors\images\svarog\15_m45.paa"); 
				if ((_relDir >= 315 && _relDir <= 360) && (_relDist > 15 && _relDist <= 18)) throw ("\armst_client\modules\detectors\images\svarog\18_m45.paa"); 
				if ((_relDir >= 315 && _relDir <= 360) && (_relDist > 18 && _relDist <= 100)) throw ("\armst_client\modules\detectors\images\svarog\20_m45.paa"); 

				if ((_relDir >= 0 && _relDir < 45) && (_relDist > 0 && _relDist <= 3)) throw   ("\armst_client\modules\detectors\images\svarog\3_p45.paa"); 
				if ((_relDir >= 0 && _relDir < 45) && (_relDist > 3 && _relDist <= 6)) throw   ("\armst_client\modules\detectors\images\svarog\6_p45.paa"); 
				if ((_relDir >= 0 && _relDir < 45) && (_relDist > 6 && _relDist <= 9)) throw   ("\armst_client\modules\detectors\images\svarog\9_p45.paa"); 
				if ((_relDir >= 0 && _relDir < 45) && (_relDist > 9 && _relDist <= 12)) throw  ("\armst_client\modules\detectors\images\svarog\12_p45.paa"); 
				if ((_relDir >= 0 && _relDir < 45) && (_relDist > 12 && _relDist <= 15)) throw ("\armst_client\modules\detectors\images\svarog\15_p45.paa"); 
				if ((_relDir >= 0 && _relDir < 45) && (_relDist > 15 && _relDist <= 18)) throw ("\armst_client\modules\detectors\images\svarog\18_p45.paa"); 
				if ((_relDir >= 0 && _relDir < 45) && (_relDist > 18 && _relDist <= 100)) throw ("\armst_client\modules\detectors\images\svarog\20_p45.paa"); 

				if ((_relDir >= 45 && _relDir <= 90) && (_relDist > 0 && _relDist <= 3)) throw   ("\armst_client\modules\detectors\images\svarog\3_p90.paa"); 
				if ((_relDir >= 45 && _relDir <= 90) && (_relDist > 3 && _relDist <= 6)) throw   ("\armst_client\modules\detectors\images\svarog\6_p90.paa"); 
				if ((_relDir >= 45 && _relDir <= 90) && (_relDist > 6 && _relDist <= 9)) throw   ("\armst_client\modules\detectors\images\svarog\9_p90.paa"); 
				if ((_relDir >= 45 && _relDir <= 90) && (_relDist > 9 && _relDist <= 12)) throw  ("\armst_client\modules\detectors\images\svarog\12_p90.paa"); 
				if ((_relDir >= 45 && _relDir <= 90) && (_relDist > 12 && _relDist <= 15)) throw ("\armst_client\modules\detectors\images\svarog\15_p90.paa"); 
				if ((_relDir >= 45 && _relDir <= 90) && (_relDist > 15 && _relDist <= 18)) throw ("\armst_client\modules\detectors\images\svarog\18_p90.paa"); 
				if ((_relDir >= 45 && _relDir <= 90) && (_relDist > 18 && _relDist <= 100)) throw ("\armst_client\modules\detectors\images\svarog\20_p90.paa"); 


			} catch {
				_control ctrlSetText _exception;
			};
			
			playSound "detector_2";
		};
		
		default {};
	};
	