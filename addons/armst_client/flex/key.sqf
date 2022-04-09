params["_display","_key","_shift","_ctrl"];
	
if !((player getVariable ["AGM_isUnconscious", false]) and (player getVariable ["AGM_isCaptive",false])) then 
{

	switch (_key) do {
		case 20: {
			call ARMST_Radiation_ShowRadimetr;
		};
		case 24: {	
			player playActionNow 'Gesturearmst_clockl';
            if(_shift) then {
                2 fadeSound 0.1;
                systemChat "Вы надели беруши. ((Снять - Ctrl+O))";
            };
            if(_ctrl) then {
                2 fadeSound 1;
                systemChat "Вы сняли беруши. ((Надеть - Shift+O))";
            };
		};
		case 37: 
		{
			if (player isEqualTo vehicle player) then
			{
				player playActionNow 'Gesturecompass';
			};
		};
		//case 58: {
		//	if (player isEqualTo vehicle player) then
		//	{
		//		player playActionNow 'GestureRadioTalk';
		//	};
		//};
		//case 59: {
		//	if (player isEqualTo vehicle player) then
		//	{
		//		ARMST_GAME = ["GestureGameKamen","GestureGamebumaga","GestureGamenojnice"];
		//		_ARMST_GAME = ARMST_GAME select floor random count ARMST_GAME;
		//		_anim = if(_ctrl) then {_ARMST_GAME}else{"GestureOUT"};
		//		player playActionNow _anim;
		//	};
		//};
		//case 60: {
		//	if (player isEqualTo vehicle player) then
		//	{
		//		player playActionNow 'GesturePrivet';
		//	};
		//};
		//case 61: {
		//	if (player isEqualTo vehicle player) then
		//	{
		//		player playActionnow "GestureUkaz";
		//	};
		//};
		//case 62: {
		//	if (player isEqualTo vehicle player) then
		//	{
		//		player playActionnow "GestureThumb";
		//	};
		//};
		//case 63: {
		//	if (player isEqualTo vehicle player) then
		//	{
		//		player playActionNow 'GestureFacepalm';
		//	};
		//};
		//case 64: {
		//	if (player isEqualTo vehicle player) then
		//	{
		//		_anim1 = if(_ctrl) then {"GestureFuck"}else{"Gestureugroza"};
		//		player playActionNow _anim1;
		//	};
		//};
		//case 65: {
		//	if (player isEqualTo vehicle player) then
		//	{
		//		player playActionNow 'GestureSilenced';
		//	};
		//};
		//case 66: {
		//	if (player isEqualTo vehicle player) then
		//	{
		//		player playActionNow 'GestureSdastsa';
		//	};
		//};
		default {};
	};
};