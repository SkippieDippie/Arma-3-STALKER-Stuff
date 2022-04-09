/*
    Author: Vladimir Vorobev <Dragster>
    E-mail:1dragsteron@gmail.com

    Description:
    Get path to avatar from typeOf player 

    Parameter(s):
        none

    Returns:
    	_avatar [String] - path to avatar image
*/
	_skins=["armst_a2bandit_2","armst_a2bandit_3","armst_coat_1","armst_coat_2","armst_coat_3","armst_coat_4","armst_coat_5","armst_coat_6","armst_coat_7","armst_coat_8","armst_doctor","armst_doctor2","armst_doctor3","armst_hazmat","armst_newbiebandit","armst_newbiebandit2","armst_newbiebandit3","armst_novice","armst_novice1","armst_novice2","armst_novice3","armst_novice4","armst_novice5","armst_novice6","armst_novice7","armst_novice8","armst_novice9","army_b","army_l","bandit_elite","bandit_new_1","bandit_new_1_2","bandit_new_1_3","bandit_new_2","bandit_new_2_2","bandit_new_2_3","bandits_l","bandits_private","bandits_private2","clearsky_private","dolg_b","dolg_l","dolg_new_soldier","dolg_private","elite_clearsky","elite_dolg","elite_freedom","elite_loner1","elite_loner2","elite_merc","elite_voen","freedom_l","freedom_private","freedom_private2","hazmat_2","loner_b","loner_l","loner_private1","loner_private2","loner_private3","loner_private4","loner_private5","mercenaries_l","mercenaries_private","mercenaries_private2","monolith_l","monolith_private","neutral_private","stalkerBeta","voen_private"];
	_tp=toLower (typeOf player);
	_avatar = "";
	if (_tp in _skins) then {
	  _avatar = format ["armst\armst_uidata\skins\%1.paa",(typeOf player)];
	} else {
	  if (_tp == "armst_a2bandit") then {
	    _avatar = "armst\armst_uidata\skins\armst_a2bandit_2.paa";
	  } else {
	    _avatar = "drg_ui\textures\emblems\no_data.paa";
	  };
	};
	_avatar