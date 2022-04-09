/*
    Author: Vladimir Vorobev <Dragster>
    E-mail:1dragsteron@gmail.com

    Description:
    Get rank

    Parameter(s):
        none

    Returns:
    	_rank [String] - rank text
*/
	private _rankVar = player getVariable ["Score",0];
	private _rank = "";
	switch (true) do { 
		case (_rankVar < 0) : 					{  _rank = localize "STR_DRG_rank_Garbage"; }; 
		case (_rankVar >= 0 && _rankVar < 40) : {  _rank = localize "STR_DRG_rank_Newbie"; }; 
		case (_rankVar >= 40 && _rankVar < 80) :{  _rank = localize "STR_DRG_rank_Experienced"; }; 
		case (_rankVar >= 80) : 				{  _rank = localize "STR_DRG_rank_Master"; }; 
		default 								{  _rank = localize "STR_DRG_rank_Garbage"; };
	};
	_rank