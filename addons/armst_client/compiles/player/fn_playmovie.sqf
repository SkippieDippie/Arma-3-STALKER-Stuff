	/*
	
	Author: Aloe
		
	Description:
	Play .ogv file and music for movie, with ability to skip movie (key eh)

	Parameter(s) (for Server only):
	_this select 0: <String> video. path to .ogv file
	_this select 1: <String> audio. class name in cfgMusic
	_this select 2: <Array> parameters for video, used in bis_fnc_playVideo
	*/
	
	private ["_moviePath", "_musicClass", "_introScriptHundle", "_skip"];
	
	_moviePath = [_this, 0, "", [""]] call BIS_fnc_param;
	_musicClass = [_this, 1, "", [""]] call BIS_fnc_param;
	_movieParams = [_this, 2, [[safezoneXAbs, safezoneY, safezoneWAbs, safezoneH], [1,1,1,1]], [[]]] call BIS_fnc_param;
	
	if(_moviePath != "" and _musicClass != "")then{
		0 fadeMusic 0.5;
		playMusic _musicClass;
		_introScriptHundle = [_moviePath, _movieParams select 0, _movieParams select 1, "ARMST_movieSkip"] spawn bis_fnc_playVideo;
	
		armst_playMovieKeyEH = (findDisplay 46) displayAddEventHandler ["KeyDown", {
			_skip = switch(_this select 1)do{
				case 1 : {false}; //(esc)
				case 57 : { //(space)
					ARMST_movieSkip = true;
					playMusic "";
					(_this select 0) displayRemoveEventHandler ["KeyDown", ARMST_playMovieKeyEH];
					true
				};
				default {true};
			};
		_skip
		}];
		
		_introScriptHundle spawn {
			waitUntil{scriptDone _this};
			ARMST_movieSkip = true;
			playMusic "";
			(findDisplay 46) displayRemoveEventHandler ["KeyDown", ARMST_playMovieKeyEH];
		};
	};
	
_introScriptHundle	