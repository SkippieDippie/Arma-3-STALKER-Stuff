/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Создания представления лагеря
	
	Parameter(s):
		_mode 				(String) - режим
		_this 				(Anything)(Optional) - параметры

	Return: (Nothing)
*/

	#include "..\..\module.sqf";

	disableserialization;
	
	if (_this isEqualType objNull) exitwith {
		
		module(MainBox) = _this;
		
		with uiNamespace do {
			
			if (if (isnil {module(Camera)}) then {false} else {!isnull module(Camera)}) exitwith {};
			
			_displayMission = [] call (uinamespace getvariable "bis_fnc_displayMission");
			_displayMission createDisplay "DisplayCampViewer";
		};
	};
	
	_mode = _this param [0,"Init",[displaynull,""]];
	_this = _this param [1,[]];
	
	switch (_mode) do {
		
		case "Init" : {
			
			module(MainBox) setVariable ["ARM_BoxIsBusy", true, true];
			startloadingscreen [""];
			
			private _display = _this;

			_display displayaddeventhandler ["mousebuttondown","with uinamespace do {['MouseButtonDown',_this] call ARMST_Camp_ViewCreate;};"];
			_display displayaddeventhandler ["mousebuttonup","with uinamespace do {['MouseButtonUp',_this] call ARMST_Camp_ViewCreate;};"];
			_display displayaddeventhandler ["mousezchanged","with uinamespace do {['MouseZChanged',_this] call ARMST_Camp_ViewCreate;};"];
			_display displayaddeventhandler ["keydown","with (uinamespace) do {['KeyDown',_this] call ARMST_Camp_ViewCreate;};"];
			_display displayaddeventhandler ["keyup","with (uinamespace) do {['KeyUp',_this] call ARMST_Camp_ViewCreate;};"];

			_ctrlMouseArea = _display displayctrl IDC_RSCDISPLAYCAMPVIEWER_MOUSEAREA;
			_ctrlMouseArea ctrladdeventhandler ["mousemoving","with uinamespace do {['Mouse',_this] call ARMST_Camp_ViewCreate;};"];
			_ctrlMouseArea ctrladdeventhandler ["mouseholding","with uinamespace do {['Mouse',_this] call ARMST_Camp_ViewCreate;};"];
			ctrlsetfocus _ctrlMouseArea;
			
			with uiNamespace do {
			
				module(ViewRadius) = (missionNamespace getVariable [stringify(module(ViewRadius)), 2]) / 2;
				module(CameraPos) = [20, 90, 30];
				module(CameraButtons) = [[],[]];
				module(CameraKeyPress) = [];
				module(AddinationKeys) = [];
				module(MousePosition) = [0,0];
				module(MouseWorldPos) = [0,0,0];
				module(MouseObject) = objNull;
				
				private _logicPos = getPosATL (missionNamespace getVariable [stringify(module(MainBox)), objNull]);
				_logicPos set [2, missionNamespace getVariable [stringify(module(ViewHeight)), 0]];
				
				module(CameraLogic) = createagent ["Logic",_logicPos,[],0,"none"];
				module(CameraLogic) setpos _logicPos;
				module(CameraLogic) setdir 180;

				module(CameraTarget) = createagent ["Logic",_logicPos,[],0,"none"];
				module(CameraTarget) setpos _logicPos;
				
				module(TargetObject) = createagent ["Logic",_logicPos,[],0,"none"];
				module(TargetObject) setpos _logicPos;
				
				setviewdistance 1;
				module(Camera) = "camera" camcreate  position module(CameraLogic);
				module(Camera) cameraeffect ["internal","back"];
				module(Camera) campreparefocus [-1,-1];
				module(Camera) camcommitprepared 0;
				cameraEffectEnableHUD true;
				showcinemaborder false;
				
			};
			
			if !(_display isEqualTo displayNull) then {
				
				module(_ResponseReceived) = false;
				module(_ReceivedResources) = false;
				module(_ReceivedObjects) = false;
				module(_ReceivedParty) = false;
				
				player switchMove "AmovPercMstpSlowWrflDnon";
				
				[] spawn {
					
					["getObjects"] call module(ServerSync);
					["getResources"] call module(ServerSync);
					["getParty"] call module(ServerSync);
						
					//Ответ сервера: Ресурсы
					waitUntil {module(_ReceivedResources)};
					
					//Перемещение ресурсов из ящика
					[] call module(ReplaceBoxResources);
					
					//Построение GUI
					'resources' call module(Ui_Create);
					
				};
				
			};
			
			endloadingscreen;
			
		};
		
		///////////////////////////////////////////////////////////////////////////////////////////
		case "Exit": {

			deletevehicle (uinamespace getvariable [stringify(module(CameraLogic)),objnull]);
			deletevehicle (uinamespace getvariable [stringify(module(CameraTarget)),objnull]);

			setviewdistance -1;
			_cam = uinamespace getvariable [stringify(module(Camera)),objnull];
			_cam cameraeffect ["terminate","back"];
			camdestroy _cam;

			module(CameraLogic) = nil;
			module(CameraTarget) = nil;
			module(Camera) = nil;
			module(CameraPos) = nil;
			module(CameraButtons) = nil;
			module(CameraKeyPress) = nil;
			module(AddinationKeys) = nil;
			module(MousePosition) = nil;
			module(MouseWorldPos) = nil;
			module(TargetObject) = nil;
			module(MouseObject) = nil;
			
			[] call module(ViewDestroy);
		};
		
		///////////////////////////////////////////////////////////////////////////////////////////
		case "Mouse": {
			
			params ["_control", "_mX", "_mY", "_over"];
		
			_cam = uinamespace getvariable [stringify(module(Camera)),objnull];
			_logic = uinamespace getvariable [stringify(module(CameraLogic)),objnull];
			_target = uinamespace getvariable [stringify(module(CameraTarget)),objnull];
			
			_dis = module(CameraPos) select 0;
			_dirH = module(CameraPos) select 1;
			_dirV = module(CameraPos) select 2;
			_disLocal = _dis;

			_LMB = module(CameraButtons) select 0;
			_RMB = module(CameraButtons) select 1;
			
			module(MousePosition) = [_mX, _mY];
			module(MouseWorldPos) = screenToWorld module(MousePosition);
			
			if (count _LMB > 0) then {
				
				if !(isNull module(MouseObject)) then {
					
					with missionNamespace do {
						if (isNull module(_ObjectIsMoving)) then {
				
							uiNamespace setVariable [stringify(module(CameraButtons)), [[],[]]];
							
							[
								uiNamespace getVariable [stringify(module(MouseObject)), objNull]
							] spawn module(V_ObjectMove);
						
						};
					};
				
				};
				
				/*
				_cX = _LMB select 0;
				_cY = _LMB select 1;
				_dX = (_cX - _mX) * 10;
				_dY = (_cY - _mY) * 10;
				module(CameraButtons) set [0,[_mX,_mY]];

				_targetPos = position _target;
				_logicPos = position _logic;
				_targetPos = [
					 (_logicPos select 0) - (_targetPos select 0),
					 (_logicPos select 1) - (_targetPos select 1),
					0
				];
				_targetPos = [_targetPos,_dY,_dirH + 00] call bis_fnc_relpos;
				_targetPos = [_targetPos,_dX,_dirH - 90] call bis_fnc_relpos;
				_targetPos set [0,(_targetPos select 0) max (-module(ViewRadius)) min (+module(ViewRadius))];
				_targetPos set [1,(_targetPos select 1) max (-module(ViewRadius)) min (+module(ViewRadius))];
				_target attachto [_logic,_targetPos,""];
				*/
				
			};

			if (count _RMB > 0) then {
			
				_cX = _RMB select 0;
				_cY = _RMB select 1;
				_dX = (_cX - _mX);
				_dY = (_cY - _mY);

				_dirH = (_dirH - _dX * 180) % 360;
				_dirV = (_dirV - _dY * 100) max -89 min 89;

				module(CameraPos) set [1,_dirH];
				module(CameraPos) set [2,_dirV];
				module(CameraButtons) set [1,[_mX,_mY]];
				
			};
			
			_x = cos _dirV * _dis;
			_z = sin _dirV * _dis;
			_campos = [[0,0,_z],_x,_dirH] call bis_fnc_relpos;
			_cam attachto [_target,_campos,""];
			_cam campreparetarget _target;
			_cam camcommitprepared 0;
			
			if (module(AddinationKeys) isEqualTo [false, false, false, false]) then {
				
				module(TargetObject) setPosASL AGLToASL module(MouseWorldPos);
				
			};
			
			private _objects = lineIntersectsWith [
				AGLToASL module(MouseWorldPos),
				ATLTOASL position _cam,
				objNull,
				objNull,
				true
			];
			module(MouseObject) = if !(_objects isEqualTo []) then {
				_objects select 0
			} else {
				objNull
			};
			
		};

		///////////////////////////////////////////////////////////////////////////////////////////
		case "MouseButtonDown": {
			
			module(CameraButtons) set [_this select 1,[_this select 2,_this select 3]];
		};

		///////////////////////////////////////////////////////////////////////////////////////////
		case "MouseButtonUp": {
			module(CameraButtons) set [_this select 1,[]];
		};

		///////////////////////////////////////////////////////////////////////////////////////////
		case "MouseZChanged": {
		
			_z = _this select 1;
			_dis = module(CameraPos) select 0;
			_dis = _dis - (_z / 4);
			_dis = _dis max 1 min 30;
			module(CameraPos) set [0,_dis];
			
		};
			
		///////////////////////////////////////////////////////////////////////////////////////////
		case "KeyDown": {
			
			params ["_display", "_key", "_shift", "_ctrl", "_alt"];

			_return = false;
			
			module(AddinationKeys) = [_shift, _ctrl, _alt, _key isEqualTo DIK_ESCAPE];
			
			switch (true) do {
				case (_key in [DIK_W, DIK_S, DIK_A, DIK_D]): {
					_return = true;
							
					_cam = uinamespace getvariable [stringify(module(Camera)),objnull];
					_logic = uinamespace getvariable [stringify(module(CameraLogic)),objnull];
					_target = uinamespace getvariable [stringify(module(CameraTarget)),objnull];
					
					_dis = module(CameraPos) select 0;
					_dirH = module(CameraPos) select 1;
					_dirV = module(CameraPos) select 2;
			
					_targetPos = position _target;
					_logicPos = position _logic;
					_targetPos = [
						 (_logicPos select 0) - (_targetPos select 0),
						 (_logicPos select 1) - (_targetPos select 1),
						0
					];
					
					switch (_key) do {
						case DIK_W: {
							_targetPos = [_targetPos, 0.5, _dirH + 180] call bis_fnc_relpos;
						};
						case DIK_S: {
							_targetPos = [_targetPos, 0.5, _dirH] call bis_fnc_relpos;
						};
						case DIK_A: {
							_targetPos = [_targetPos, 0.5, _dirH + 90] call bis_fnc_relpos;
						};
						case DIK_D: {
							_targetPos = [_targetPos, 0.5, _dirH - 90] call bis_fnc_relpos;
						};
					};
					
					_targetPos set [0,(_targetPos select 0) max (-module(ViewRadius)) min (+module(ViewRadius))];
					_targetPos set [1,(_targetPos select 1) max (-module(ViewRadius)) min (+module(ViewRadius))];

					_target attachto [_logic, _targetPos, ""];
					
					_x = cos _dirV * _dis;
					_z = sin _dirV * _dis;
					_campos = [[0,0,_z],_x,_dirH] call bis_fnc_relpos;
					_cam attachto [_target,_campos,""];
					_cam campreparetarget _target;
					_cam camcommitprepared 0;
					
				};
				
				case (_key isEqualTo DIK_ESCAPE): {
					_return = true;
					_this spawn {
						disableserialization;
						_display = _this select 0;
						
						if (["Вы действительно хотите выйти?", "Великолепный лагерь", nil, true, _display] call bis_fnc_guimessage) then {
							_display closedisplay 2;
						};
					};
				};
			};
			_return
		};
		
		///////////////////////////////////////////////////////////////////////////////////////////
				///////////////////////////////////////////////////////////////////////////////////////////
		case "KeyUp": {
			
			params ["_display", "_key", "_shift", "_ctrl", "_alt"];
			
			module(AddinationKeys) = [false, false, false, false];
		};
	};