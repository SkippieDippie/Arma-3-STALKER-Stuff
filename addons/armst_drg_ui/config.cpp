class CfgPatches
{
	class drg_ui
	{
		author="Dragster";
		version=1;
		units[]={};
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_UI_F",
			"A3_Modules_F"
		};
	};
};
class RscText;
class RscStructuredText;
class RscPicture;
class RscEdit;
class RscCombo;
class RscButton;
class RscListBox;
class RscShortcutButton;
class RscShortcutButtonMain;
class RscFrame;
class RscSlider;
class RscXSliderH;
class IGUIBack;
class RscCheckBox;
class RscTextCheckBox;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscControlsGroup;
class RscMapControl;
class RscPictureButton;
class RscActivePicture;
class RscStandardDisplay;
class RscPictureKeepAspect;
class RscMainMenuSpotlight;
class Controls;
class GroupPicture;
class Video;
class CfgFunctions
{
	class DRG
	{
		class Bootstrap
		{
			file="\drg_ui\bootstrap";
			class preInitClient
			{
				preInit=1;
			};
			class postInitClient
			{
				postInit=1;
			};
		};
		class Pda
		{
			file="\drg_ui\functions\pda";
			class addChFriend
			{
			};
			class getFriendByUID
			{
			};
			class getIdFromUID
			{
			};
			class getIdWithName
			{
			};
			class pdaOpen
			{
			};
			class pdaSendMessage
			{
			};
			class pdaTab
			{
			};
			class getBackgroundByPdaItem
			{
			};
			class getPdaItemFromAssign
			{
			};
		};
		class Trade
		{
			file="\drg_ui\functions\trade";
			class changeLB
			{
			};
			class getBaseConfig
			{
			};
			class checkCountAddItemVB
			{
			};
			class countItemInVB
			{
			};
			class removeItemCargoGlobal
			{
			};
			class removeWeaponCargoGlobal
			{
			};
			class removeMagazineCargoGlobal
			{
			};
			class openTrade
			{
			};
			class tradeBtnBuy
			{
			};
			class tradeBtnSell
			{
			};
		};
		class Craft
		{
			file="\drg_ui\functions\craft";
			class openCraft
			{
			};
			class startCraft
			{
			};
		};
		class Functions
		{
			file="\drg_ui\functions\other";
			class findOwnIDInFaction
			{
			};
			class findPlayerByName
			{
			};
			class findPlayerByUID
			{
			};
			class findPlayersInFaction
			{
			};
			class findRadio
			{
			};
			class findRadioWithType
			{
			};
			class getAvatar
			{
			};
			class getEmblem
			{
			};
			class getLogoFaction
			{
			};
			class getNewEmblem
			{
			};
			class getRank
			{
			};
			class posToString
			{
			};
			class remoteMessageServer
			{
			};
			class remoteMessageClient
			{
			};
			class getPapperMessage
			{
			};
		};
		class Functions_ui
		{
			file="\drg_ui\functions\ui";
			class makeButton
			{
			};
			class makeComboBox
			{
			};
			class makeEditBox
			{
			};
			class makeEditBoxMulti
			{
			};
			class makeListBox
			{
			};
			class makePicture
			{
			};
			class makeStructuredText
			{
			};
			class makeText
			{
			};
			class makeTextMulti
			{
			};
			class makeSlider
			{
			};
			class makeXSliderH
			{
			};
			class makeXListBox
			{
			};
			class makePdaListBox
			{
			};
			class makeDRGListBox
			{
			};
			class makeDRGCraftListBox
			{
			};
			class makeTree
			{
			};
			class makeDrgTree
			{
			};
			class makeDrgTradeCategoryListBox
			{
			};
		};
	};
};
class CfgFontFamilies
{
	class MatterhornCTT
	{
		fonts[]=
		{
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT6",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT7",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT8",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT9",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT10",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT11",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT12",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT13",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT14",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT15",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT16",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT17",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT18",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT19",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT20",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT21",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT22",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT23",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT24",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT25",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT26",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT27",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT28",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT29",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT30",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT31",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT34",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT35",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT37",
			"drg_ui\Fonts\MatterhornCTT\MatterhornCTT46"
		};
		spaceWidth=0.69999999;
		spacing=0.23999999;
	};
	class Roboto
	{
		fonts[]=
		{
			"drg_ui\Fonts\Roboto\Roboto6",
			"drg_ui\Fonts\Roboto\Roboto7",
			"drg_ui\Fonts\Roboto\Roboto8",
			"drg_ui\Fonts\Roboto\Roboto9",
			"drg_ui\Fonts\Roboto\Roboto10",
			"drg_ui\Fonts\Roboto\Roboto11",
			"drg_ui\Fonts\Roboto\Roboto12",
			"drg_ui\Fonts\Roboto\Roboto13",
			"drg_ui\Fonts\Roboto\Roboto14",
			"drg_ui\Fonts\Roboto\Roboto15",
			"drg_ui\Fonts\Roboto\Roboto16",
			"drg_ui\Fonts\Roboto\Roboto17",
			"drg_ui\Fonts\Roboto\Roboto18",
			"drg_ui\Fonts\Roboto\Roboto19",
			"drg_ui\Fonts\Roboto\Roboto20",
			"drg_ui\Fonts\Roboto\Roboto21",
			"drg_ui\Fonts\Roboto\Roboto22",
			"drg_ui\Fonts\Roboto\Roboto23",
			"drg_ui\Fonts\Roboto\Roboto24",
			"drg_ui\Fonts\Roboto\Roboto25",
			"drg_ui\Fonts\Roboto\Roboto26",
			"drg_ui\Fonts\Roboto\Roboto27",
			"drg_ui\Fonts\Roboto\Roboto28",
			"drg_ui\Fonts\Roboto\Roboto29",
			"drg_ui\Fonts\Roboto\Roboto30",
			"drg_ui\Fonts\Roboto\Roboto31",
			"drg_ui\Fonts\Roboto\Roboto34",
			"drg_ui\Fonts\Roboto\Roboto35",
			"drg_ui\Fonts\Roboto\Roboto37",
			"drg_ui\Fonts\Roboto\Roboto46"
		};
	};
	class RobotoBold
	{
		fonts[]=
		{
			"drg_ui\Fonts\Roboto-bold\Roboto-bold6",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold7",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold8",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold9",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold10",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold11",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold12",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold13",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold14",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold15",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold16",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold17",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold18",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold19",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold20",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold21",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold22",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold23",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold24",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold25",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold26",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold27",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold28",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold29",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold30",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold31",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold34",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold35",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold37",
			"drg_ui\Fonts\Roboto-bold\Roboto-bold46"
		};
	};
	class RobotoItalic
	{
		fonts[]=
		{
			"drg_ui\Fonts\Roboto-italic\Roboto-italic6",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic7",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic8",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic9",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic10",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic11",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic12",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic13",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic14",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic15",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic16",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic17",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic18",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic19",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic20",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic21",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic22",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic23",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic24",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic25",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic26",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic27",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic28",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic29",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic30",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic31",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic34",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic35",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic37",
			"drg_ui\Fonts\Roboto-italic\Roboto-italic46"
		};
	};
	class OpenSansSemibold
	{
		fonts[]=
		{
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold6",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold7",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold8",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold9",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold10",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold11",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold12",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold13",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold14",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold15",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold16",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold17",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold18",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold19",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold20",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold21",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold22",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold23",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold24",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold25",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold26",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold27",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold28",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold29",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold30",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold31",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold34",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold35",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold37",
			"drg_ui\Fonts\OpenSansSemibold\OpenSansSemibold46"
		};
	};
	class TimesNewRoman
	{
		fonts[]=
		{
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman6",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman7",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman8",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman9",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman10",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman11",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman12",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman13",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman14",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman15",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman16",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman17",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman18",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman19",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman20",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman21",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman22",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman23",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman24",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman25",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman26",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman27",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman28",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman29",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman30",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman31",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman34",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman35",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman37",
			"drg_ui\Fonts\TimesNewRoman\TimesNewRoman46"
		};
	};
	class TimesNewRomanBold
	{
		fonts[]=
		{
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold6",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold7",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold8",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold9",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold10",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold11",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold12",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold13",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold14",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold15",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold16",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold17",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold18",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold19",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold20",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold21",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold22",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold23",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold24",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold25",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold26",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold27",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold28",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold29",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold30",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold31",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold34",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold35",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold37",
			"drg_ui\Fonts\TimesNewRoman-bold\TimesNewRoman-bold46"
		};
	};
	class TimesNewRomanItalic
	{
		fonts[]=
		{
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic6",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic7",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic8",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic9",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic10",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic11",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic12",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic13",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic14",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic15",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic16",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic17",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic18",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic19",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic20",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic21",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic22",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic23",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic24",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic25",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic26",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic27",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic28",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic29",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic30",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic31",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic34",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic35",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic37",
			"drg_ui\Fonts\TimesNewRoman-italic\TimesNewRoman-italic46"
		};
	};
	class DisneyPark
	{
		fonts[]=
		{
			"drg_ui\Fonts\DisneyPark\DisneyPark6",
			"drg_ui\Fonts\DisneyPark\DisneyPark7",
			"drg_ui\Fonts\DisneyPark\DisneyPark8",
			"drg_ui\Fonts\DisneyPark\DisneyPark9",
			"drg_ui\Fonts\DisneyPark\DisneyPark10",
			"drg_ui\Fonts\DisneyPark\DisneyPark11",
			"drg_ui\Fonts\DisneyPark\DisneyPark12",
			"drg_ui\Fonts\DisneyPark\DisneyPark13",
			"drg_ui\Fonts\DisneyPark\DisneyPark14",
			"drg_ui\Fonts\DisneyPark\DisneyPark15",
			"drg_ui\Fonts\DisneyPark\DisneyPark16",
			"drg_ui\Fonts\DisneyPark\DisneyPark17",
			"drg_ui\Fonts\DisneyPark\DisneyPark18",
			"drg_ui\Fonts\DisneyPark\DisneyPark19",
			"drg_ui\Fonts\DisneyPark\DisneyPark20",
			"drg_ui\Fonts\DisneyPark\DisneyPark21",
			"drg_ui\Fonts\DisneyPark\DisneyPark22",
			"drg_ui\Fonts\DisneyPark\DisneyPark23",
			"drg_ui\Fonts\DisneyPark\DisneyPark24",
			"drg_ui\Fonts\DisneyPark\DisneyPark25",
			"drg_ui\Fonts\DisneyPark\DisneyPark26",
			"drg_ui\Fonts\DisneyPark\DisneyPark27",
			"drg_ui\Fonts\DisneyPark\DisneyPark28",
			"drg_ui\Fonts\DisneyPark\DisneyPark29",
			"drg_ui\Fonts\DisneyPark\DisneyPark30",
			"drg_ui\Fonts\DisneyPark\DisneyPark31",
			"drg_ui\Fonts\DisneyPark\DisneyPark34",
			"drg_ui\Fonts\DisneyPark\DisneyPark35",
			"drg_ui\Fonts\DisneyPark\DisneyPark37",
			"drg_ui\Fonts\DisneyPark\DisneyPark46"
		};
	};
	class EpsilonCTT
	{
		fonts[]=
		{
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT6",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT7",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT8",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT9",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT10",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT11",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT12",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT13",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT14",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT15",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT16",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT17",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT18",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT19",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT20",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT21",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT22",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT23",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT24",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT25",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT26",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT27",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT28",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT29",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT30",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT31",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT34",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT35",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT37",
			"drg_ui\Fonts\EpsilonCTT\EpsilonCTT46"
		};
	};
	class CenturyGothic
	{
		fonts[]=
		{
			"drg_ui\Fonts\CenturyGothic\CenturyGothic6",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic7",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic8",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic9",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic10",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic11",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic12",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic13",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic14",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic15",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic16",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic17",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic18",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic19",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic20",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic21",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic22",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic23",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic24",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic25",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic26",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic27",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic28",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic29",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic30",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic31",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic34",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic35",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic37",
			"drg_ui\Fonts\CenturyGothic\CenturyGothic46"
		};
	};
	class CenturyGothicBold
	{
		fonts[]=
		{
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold6",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold7",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold8",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold9",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold10",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold11",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold12",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold13",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold14",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold15",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold16",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold17",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold18",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold19",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold20",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold21",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold22",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold23",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold24",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold25",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold26",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold27",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold28",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold29",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold30",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold31",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold34",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold35",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold37",
			"drg_ui\Fonts\CenturyGothic-bold\CenturyGothic-bold46"
		};
	};
	class CenturyGothicItalic
	{
		fonts[]=
		{
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic6",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic7",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic8",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic9",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic10",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic11",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic12",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic13",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic14",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic15",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic16",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic17",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic18",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic19",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic20",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic21",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic22",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic23",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic24",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic25",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic26",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic27",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic28",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic29",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic30",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic31",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic34",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic35",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic37",
			"drg_ui\Fonts\CenturyGothic-italic\CenturyGothic-italic46"
		};
	};
	class Captureit
	{
		fonts[]=
		{
			"drg_ui\Fonts\Captureit\Captureit6",
			"drg_ui\Fonts\Captureit\Captureit7",
			"drg_ui\Fonts\Captureit\Captureit8",
			"drg_ui\Fonts\Captureit\Captureit9",
			"drg_ui\Fonts\Captureit\Captureit10",
			"drg_ui\Fonts\Captureit\Captureit11",
			"drg_ui\Fonts\Captureit\Captureit12",
			"drg_ui\Fonts\Captureit\Captureit13",
			"drg_ui\Fonts\Captureit\Captureit14",
			"drg_ui\Fonts\Captureit\Captureit15",
			"drg_ui\Fonts\Captureit\Captureit16",
			"drg_ui\Fonts\Captureit\Captureit17",
			"drg_ui\Fonts\Captureit\Captureit18",
			"drg_ui\Fonts\Captureit\Captureit19",
			"drg_ui\Fonts\Captureit\Captureit20",
			"drg_ui\Fonts\Captureit\Captureit21",
			"drg_ui\Fonts\Captureit\Captureit22",
			"drg_ui\Fonts\Captureit\Captureit23",
			"drg_ui\Fonts\Captureit\Captureit24",
			"drg_ui\Fonts\Captureit\Captureit25",
			"drg_ui\Fonts\Captureit\Captureit26",
			"drg_ui\Fonts\Captureit\Captureit27",
			"drg_ui\Fonts\Captureit\Captureit28",
			"drg_ui\Fonts\Captureit\Captureit29",
			"drg_ui\Fonts\Captureit\Captureit30",
			"drg_ui\Fonts\Captureit\Captureit31",
			"drg_ui\Fonts\Captureit\Captureit34",
			"drg_ui\Fonts\Captureit\Captureit35",
			"drg_ui\Fonts\Captureit\Captureit37",
			"drg_ui\Fonts\Captureit\Captureit46"
		};
	};
	class Helvetica
	{
		fonts[]=
		{
			"drg_ui\Fonts\Helvetica\Helvetica6",
			"drg_ui\Fonts\Helvetica\Helvetica7",
			"drg_ui\Fonts\Helvetica\Helvetica8",
			"drg_ui\Fonts\Helvetica\Helvetica9",
			"drg_ui\Fonts\Helvetica\Helvetica10",
			"drg_ui\Fonts\Helvetica\Helvetica11",
			"drg_ui\Fonts\Helvetica\Helvetica12",
			"drg_ui\Fonts\Helvetica\Helvetica13",
			"drg_ui\Fonts\Helvetica\Helvetica14",
			"drg_ui\Fonts\Helvetica\Helvetica15",
			"drg_ui\Fonts\Helvetica\Helvetica16",
			"drg_ui\Fonts\Helvetica\Helvetica17",
			"drg_ui\Fonts\Helvetica\Helvetica18",
			"drg_ui\Fonts\Helvetica\Helvetica19",
			"drg_ui\Fonts\Helvetica\Helvetica20",
			"drg_ui\Fonts\Helvetica\Helvetica21",
			"drg_ui\Fonts\Helvetica\Helvetica22",
			"drg_ui\Fonts\Helvetica\Helvetica23",
			"drg_ui\Fonts\Helvetica\Helvetica24",
			"drg_ui\Fonts\Helvetica\Helvetica25",
			"drg_ui\Fonts\Helvetica\Helvetica26",
			"drg_ui\Fonts\Helvetica\Helvetica27",
			"drg_ui\Fonts\Helvetica\Helvetica28",
			"drg_ui\Fonts\Helvetica\Helvetica29",
			"drg_ui\Fonts\Helvetica\Helvetica30",
			"drg_ui\Fonts\Helvetica\Helvetica31",
			"drg_ui\Fonts\Helvetica\Helvetica34",
			"drg_ui\Fonts\Helvetica\Helvetica35",
			"drg_ui\Fonts\Helvetica\Helvetica37",
			"drg_ui\Fonts\Helvetica\Helvetica46"
		};
	};
	class RussianRailGProExtended
	{
		fonts[]=
		{
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended6",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended7",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended8",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended9",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended10",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended11",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended12",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended13",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended14",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended15",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended16",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended17",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended18",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended19",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended20",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended21",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended22",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended23",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended24",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended25",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended26",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended27",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended28",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended29",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended30",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended31",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended34",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended35",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended37",
			"drg_ui\Fonts\RussianRailGProExtended\RussianRailGProExtended46"
		};
	};
};
class dragster_empty_dialog
{
	name="dragster_empty_dialog";
	idd=67000;
	movingEnable="false";
	enableSimulation="true";
	class controls
	{
	};
	class controlsBackground
	{
	};
};
class dragster_pda_dialog
{
	name="dragster_pda_dialog";
	idd=72600;
	movingEnable="false";
	enableSimulation="true";
	class controls
	{
	};
	class controlsBackground
	{
	};
};
class DRGMapPlain: RscMapControl
{
	idc=45800;
	x=0;
	y=0;
	w=1;
	h=1;
	text="drg_ui\pda\textures\mapzonemain.paa";
	scaleMin=0.0049999999;
	scaleMax=10;
	drawObjects=0;
	maxSatelliteAlpha=0;
	alphaFadeStartScale=100;
	alphaFadeEndScale=100;
	colorSea[]={0.46700001,0.63099998,0.85100001,0.25};
	colorCountlinesWater[]={0.491,0.57700002,0.70200002,0.30000001};
	colorMainCountlinesWater[]={0.491,0.57700002,0.70200002,0.60000002};
	colorGrid[]={0,0,0,0.15000001};
	colorGridMap[]={0,0,0,0.2};
	sizeExLabel=0;
	sizeExGrid=0.050000001;
	sizeExUnits=0;
	sizeExNames=0.2;
	sizeExInfo=0;
	sizeExLevel=0;
	sizeEx=0.1;
	ptsPerSquareRoad=0.75;
	ptsPerSquareObj=2000;
	showCountourInterval=0;
	colorTracks[]={1,0,0,1};
	colorTracksFill[]={1,1,0,1};
	colorRoads[]={0,0,0,1};
	colorRoadsFill[]={1,1,0,1};
	colorMainRoads[]={0,0,0,1};
	colorMainRoadsFill[]={1,0.60000002,0.40000001,1};
	colorRailWay[]={0.80000001,0.2,0,1};
	colorBackground[]={0.92941201,0.92941201,0.92941201,1};
	colorOutside[]={0.92941201,0.92941201,0.92941201,1};
	colorCountlines[]={0.64705902,0.533333,0.286275,0.5};
	colorMainCountlines[]={0.85882401,0,0,0.5};
	colorForest[]={0.60000002,0.80000001,0.2,0.1};
	colorForestBorder[]={0,1,0,0.25};
	colorLevels[]={0,0,0,0.5};
	colorRocks[]={0.5,0.5,0.5,0};
};
class DrgRscListBox: RscListBox
{
	rowHeight="12.46 * (pixelH * 5 * (getResolution select 1) / 1080)";
	colorSelectBackground[]={0.94999999,0.94999999,0.94999999,0.40000001};
	colorSelectBackground2[]={1,1,1,0.40000001};
	colorBackground[]={0,0,0,0};
};
class DrgRscTradeCategoryListBox: RscListBox
{
	rowHeight="8 * (pixelH * 5 * (getResolution select 1) / 1080)";
	colorSelectBackground[]={0.94999999,0.94999999,0.94999999,0};
	colorSelectBackground2[]={1,1,1,0};
	colorSelect[]={1,0.5,0,1};
	colorSelect2[]={1,0.44999999,0,1};
	colorBackground[]={0,0,0,0};
};
class RscPdaListBox: RscListBox
{
	font="OpenSansSemibold";
	colorBackground[]={0.2,0.2,0.2,0.40000001};
};
class DRG_CraftListBox: RscListBox
{
	rowHeight="12.46 * (pixelH * 5 * (getResolution select 1) / 1080)";
	colorSelectBackground[]={0.94999999,0.94999999,0.94999999,0};
	colorSelectBackground2[]={1,1,1,0};
	colorBackground[]={0,0,0,0};
	colorText[]={0,0,0,1};
	colorTextRight[]={0,0,0,1};
	colorSelect[]={0.60000002,0.60000002,0.60000002,1};
	colorSelect2[]={0,0,0,1};
	colorSelectRight[]={0.60000002,0.60000002,0.60000002,1};
	colorSelect2Right[]={0,0,0,1};
};
class DRG_PdaPlayerListBox
{
	blinkingPeriod=0;
	colorBackground[]={0.2,0.2,0.2,0};
	colorSelectBackground[]={1,0.5,0,1};
	colorSelectBackground2[]={0,0,0,1};
	period=0;
	rowHeight="0.7 * (pixelH * 5 * (getResolution select 1) / 1080)";
};
class DrgScrollBar
{
	color[]={1,1,1,0.60000002};
	colorActive[]={1,1,1,1};
	colorDisabled[]={1,1,1,0.30000001};
	thumb="\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
	arrowEmpty="\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
	arrowFull="\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
	border="\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
	shadow=0;
	scrollSpeed=0.059999999;
	width=0;
	height=0;
	autoScrollEnabled=0;
	autoScrollSpeed=-1;
	autoScrollDelay=5;
	autoScrollRewind=0;
};
class DrgRscTree
{
	style=0;
	type=12;
	font="RobotoCondensed";
	sizeEx="(           (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	expandedTexture="A3\ui_f\data\gui\rsccommon\rsctree\expandedTexture_ca.paa";
	hiddenTexture="A3\ui_f\data\gui\rsccommon\rsctree\hiddenTexture_ca.paa";
	x=0;
	y=0;
	w=0.1;
	h=0.2;
	rowHeight=0.043909099;
	colorText[]={1,1,1,1};
	colorSearch[]=
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"
	};
	colorSelect[]={1,1,1,0.69999999};
	colorSelectText[]={0,0,0,1};
	colorBackground[]={0,0,0,0};
	colorSelectBackground[]={0,0,0,0.5};
	colorBorder[]={0,0,0,0};
	colorDisabled[]={1,1,1,0.25};
	colorLines[]={0,0,0,0};
	borderSize=0;
	expandOnDoubleclick=1;
	colorPicture[]={1,1,1,1};
	colorPictureSelected[]={0,0,0,1};
	colorPictureDisabled[]={1,1,1,0.25};
	colorPictureRight[]={1,1,1,1};
	colorPictureRightSelected[]={0,0,0,1};
	colorPictureRightDisabled[]={1,1,1,0.25};
	class ScrollBar: DrgScrollBar
	{
	};
	colorArrow[]={0,0,0,0};
	multiselectEnabled=0;
	blinkingPeriod=0;
	colorMarked[]={1,0.5,0,0.5};
	colorMarkedSelected[]={1,0.5,0,1};
	maxHistoryDelay=1;
	shadow=0;
	colorMarkedText[]={1,1,1,1};
};
class CfgMarkerColors
{
	class ColorLightOrange
	{
		name="ColorLightOrange";
		color[]={1,0.61199999,0.11,1};
		scope=1;
	};
};
class RscDisplayOptionsVideo
{
	class controls
	{
		class QualityGroup: RscControlsGroup
		{
			class controls
			{
				class CA_SliderBrightness: RscXSliderH
				{
					text="Заблокировано";
					type=0;
					style=0;
					shadow=0;
					colorBackground[]={0,0,0,0};
					colorText[]={1,1,1,1};
					linespacing=1;
					font="RobotoCondensed";
					SizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				};
				class CA_SliderGamma: CA_SliderBrightness
				{
				};
				class CA_ValueBrightness: RscEdit
				{
					text="";
					type=0;
					style=0;
					shadow=0;
					colorBackground[]={0,0,0,0};
					colorText[]={1,1,1,1};
					linespacing=1;
					font="RobotoCondensed";
					SizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				};
				class CA_ValueGamma: RscEdit
				{
					text="";
					type=0;
					style=0;
					shadow=0;
					colorBackground[]={0,0,0,0};
					colorText[]={1,1,1,1};
					linespacing=1;
					font="RobotoCondensed";
					SizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				};
			};
		};
		class RenderingGroup: RscControlsGroup
		{
			class controls
			{
				class ValueImageAdjustments: RscCombo
				{
					text="Заблокировано";
					type=0;
					style=0;
					shadow=0;
					colorBackground[]={0,0,0,0};
					colorText[]={1,1,1,1};
					linespacing=1;
					font="RobotoCondensed";
					SizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				};
				class SliderBrightnessPP: RscXSliderH
				{
					text="Заблокировано";
					type=0;
					style=0;
					shadow=0;
					colorBackground[]={0,0,0,0};
					colorText[]={1,1,1,1};
					linespacing=1;
					font="RobotoCondensed";
					SizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				};
				class ValueBrightnessPP: RscEdit
				{
					text="";
					type=0;
					style=0;
					shadow=0;
					colorBackground[]={0,0,0,0};
					colorText[]={1,1,1,1};
					linespacing=1;
					font="RobotoCondensed";
					SizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				};
				class SliderContrast: RscXSliderH
				{
					text="Заблокировано";
					type=0;
					style=0;
					shadow=0;
					colorBackground[]={0,0,0,0};
					colorText[]={1,1,1,1};
					linespacing=1;
					font="RobotoCondensed";
					SizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				};
				class ValueContrast: RscEdit
				{
					text="";
					type=0;
					style=0;
					shadow=0;
					colorBackground[]={0,0,0,0};
					colorText[]={1,1,1,1};
					linespacing=1;
					font="RobotoCondensed";
					SizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				};
				class SliderSaturation: RscXSliderH
				{
					text="Заблокировано";
					type=0;
					style=0;
					shadow=0;
					colorBackground[]={0,0,0,0};
					colorText[]={1,1,1,1};
					linespacing=1;
					font="RobotoCondensed";
					SizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				};
				class ValueSaturation: RscEdit
				{
					text="";
					type=0;
					style=0;
					shadow=0;
					colorBackground[]={0,0,0,0};
					colorText[]={1,1,1,1};
					linespacing=1;
					font="RobotoCondensed";
					SizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				};
			};
		};
	};
};
class RscDisplayMain: RscStandardDisplay
{
	class Controls
	{
		class LogoApex
		{
		};
		class SpotlightPrev
		{
		};
		class SpotlightNext
		{
		};
		delete Logo;
	};
};
class cfgDrgPdaWiki
{
	class mainSection1
	{
		nameSection="SectionTest2";
		description="";
		class section1
		{
			nameSection="Р’С‹Р±СЂРѕСЃ";
			description="<t font='Do you think that the zone... Dreams?</t>";
		};
		class section2
		{
			nameSection="РђРЅРѕРјР°Р»РёРё";
			description="<t font='CenturyGothicBold'>РђРЅРѕРјР°Р»РёРё</t><br /><t font='CenturyGothic'>РЎРјРµСЂС‚РµР»СЊРЅРѕ РѕРїР°СЃРЅС‹Рµ Р»РѕРІСѓС€РєРё, РєРѕС‚РѕСЂС‹Рµ СЂР°Р·Р±СЂРѕСЃР°РЅС‹ РїРѕ РІСЃРµР№ С‚РµСЂСЂРёС‚РѕСЂРёРё Р—РѕРЅС‹, Рё Р·Р°Р±СЂР°РІС€РёРµ Р·Р° РІСЃСЋ РµС‘ РёСЃС‚РѕСЂРёСЋ РЅРµРјР°Р»Рѕ Р¶РёР·РЅРµР№. Р­С‚Рѕ РѕРіСЂР°РЅРёС‡РµРЅРЅС‹Рµ РѕР±Р»Р°СЃС‚Рё, Р·Р°РєРѕРЅС‹ С„РёР·РёРєРё РІ РєРѕС‚РѕСЂС‹С… РЅР°СЂСѓС€РµРЅС‹ Р°РЅРѕРјР°Р»СЊРЅРѕР№ СЌРЅРµСЂРіРёРµР№, РІСЃР»РµРґСЃС‚РІРёРё С‡РµРіРѕ РїРѕРїР°РґР°РЅРёРµ РІ РЅРёС… РїРѕС‡С‚Рё РІСЃРµРіРґР° Р·Р°РєР°РЅС‡РёРІР°РµС‚СЃСЏ СЃРјРµСЂС‚СЊСЋ. РўРµСЂРјРёС‡РµСЃРєРёРµ, РіСЂР°РІРёС‚Р°С†РёРѕРЅРЅС‹Рµ, СЌР»РµРєС‚СЂРёС‡РµСЃРєРёРµ - Р°РЅРѕРјР°Р»РёР№ РґРѕСЃС‚Р°С‚РѕС‡РЅРѕ РјРЅРѕРіРѕ, РЅРµРєРѕС‚РѕСЂС‹Рµ РёР· РЅРёС… РІРѕРІСЃРµ РЅРµ РїРѕРґРґР°СЋС‚СЃСЏ РєР»Р°СЃСЃРёС„РёРєР°С†РёРё, РёР±Рѕ РїСЂРµРґСЃС‚Р°РІР»СЏСЋС‚ СЃРѕР±РѕР№ РєР°РєРѕР№-Р»РёР±Рѕ РѕС‚РґРµР»СЊРЅС‹Р№ РїСЂРµРґРјРµС‚. РќР°РїСЂРёРјРµСЂ - СЃС‚Р°Р»РєРµСЂСЃРєР°СЏ Р»РµРіРµРЅРґР° Рѕ РљСЂР°СЃРЅРѕРј Р’РµР»РѕСЃРёРїРµРґРµ, С‚СЂРѕРіР°С‚СЊ РєРѕС‚РѕСЂС‹Р№ РєР°С‚РµРіРѕСЂРёС‡РµСЃРєРё РЅРµР»СЊР·СЏ, РЅРѕ РІ РѕСЃС‚Р°Р»СЊРЅРѕРј РѕРЅ СЃРѕРІРµСЂС€РµРЅРЅРѕ Р±РµР·РѕРїР°СЃРµРЅ.<br />Р’РѕРІСЂРµРјСЏ РѕР±РЅР°СЂСѓР¶РёС‚СЊ Рё РЅР°Р№С‚Рё РїСѓС‚СЊ РѕР±С…РѕРґР° Р°РЅРѕРјР°Р»РёРё - РѕРґРЅРѕ РёР· РіР»Р°РІРЅС‹С… СѓРјРµРЅРёР№ Р»СЋР±РѕРіРѕ СЃС‚Р°Р»РєРµСЂР°. РЎРЅР°С‡Р°Р»Р° РЅРµРѕР±С…РѕРґРёРјРѕ СЂР°Р·РІРµРґР°С‚СЊ СЂР°РґРёСѓСЃ РѕРїР°СЃРЅРѕРіРѕ СѓС‡Р°СЃС‚РєР°, РєР°Рє РїСЂР°РІРёР»Рѕ РїСЂРё РїРѕРјРѕС‰Рё СЂР°Р·Р»РёС‡РЅРѕРіРѕ РјСѓСЃРѕСЂР° - РєРѕРЅСЃРµСЂРІРЅС‹С… Р±Р°РЅРѕРє, Р±РѕР»С‚РѕРІ, РєР°РјРЅРµР№. РђРЅРѕРјР°Р»РёСЋ С‚Р°РєР¶Рµ РјРѕР¶РЅРѕ РѕР±РЅР°СЂСѓР¶РёС‚СЊ РїРѕ Р·РІСѓРєСѓ РёР»Рё С‚РµР»РµСЃРЅС‹Рј РѕС‰СѓС‰РµРЅРёСЏРј - РёР·Р»РёС€РЅРµРјСѓ С‚РµРїР»Сѓ РёР»Рё РЅР°РѕР±РѕСЂРѕС‚, С…РѕР»РѕРґСѓ. Р•СЃР»Рё Р°РЅРѕРјР°Р»РёСЋ РЅРµ РѕР±РѕР№С‚Рё, РёРјРµСЋС‚СЃСЏ СЃРѕРјРЅРµРЅРёСЏ РёР»Рё Р¶Рµ РЅРµ СѓРґР°С‘С‚СЃСЏ РѕРїСЂРµРґРµР»РёС‚СЊ РµС‘ РіР°Р±Р°СЂРёС‚С‹, Р»СѓС‡С€Рµ СЃРґРµР»Р°С‚СЊ РєСЂСЋРє Рё РѕР±РѕР№С‚Рё РѕРїР°СЃРЅС‹Р№ СѓС‡Р°СЃС‚РѕРє - Р¶РёР·РЅСЊ РґРѕСЂРѕР¶Рµ РїРѕС‚РµСЂСЏРЅРЅРѕРіРѕ РІСЂРµРјРµРЅРё. Рљ СЃРѕР¶Р°Р»РµРЅРёСЋ, РЅРµ РІСЃРµ СЌС‚Рѕ РїРѕРЅРёРјР°СЋС‚, РёР·-Р·Р° С‡РµРіРѕ РІ Р°РЅРѕРјР°Р»РёСЏС… СЂРµРіСѓР»СЏСЂРЅРѕ РіРёР±РЅРµС‚ Рё РїСЂРѕРїР°РґР°РµС‚ Р±РµР· СЃР»РµРґР° РѕС‡РµРЅСЊ РјРЅРѕРіРѕ СЃС‚Р°Р»РєРµСЂРѕРІ. РРЅРѕР№ СЂР°Р· РґР°Р¶Рµ РјСѓС‚Р°РЅС‚С‹, СЃ РёС… РІСЂРѕР¶РґРµРЅРЅС‹Рј С‡СѓС‚СЊРµРј, Р±С‹РІР°СЋС‚ РЅРµСЃРїРѕСЃРѕР±РЅС‹ РёР·Р±РµР¶Р°С‚СЊ СЃРјРµСЂС‚РµР»СЊРЅРѕР№ Р»РѕРІСѓС€РєРё, С‚Р°Рє С‡С‚Рѕ РµС‰С‘ РѕРґРёРЅ РїСЂРёР·РЅР°Рє, РїРѕ РєРѕС‚РѕСЂРѕРјСѓ РјРѕР¶РЅРѕ РѕР±РЅР°СЂСѓР¶РёС‚СЊ Р°РЅРѕРјР°Р»РёСЋ - Р·Р°РїР°С… РјРµСЂС‚РІРµС‡РёРЅС‹ РёР»Рё С‚СЂСѓРїС‹ СЃ С…Р°СЂР°РєС‚РµСЂРЅС‹РјРё РїРѕРІСЂРµР¶РґРµРЅРёСЏРјРё. РЎСѓС‰РµСЃС‚РІСѓРµС‚ С‚Р°РєР¶Рµ РёРЅС„РѕСЂРјР°С†РёСЏ РѕР± Р°РЅРѕРјР°Р»РёСЏС…, РІР»РёСЏСЋС‰РёС… РЅР° СЃР°РјРѕ РїСЂРѕСЃС‚СЂР°РЅСЃС‚РІРѕ Рё РґР°Р¶Рµ РІСЂРµРјСЏ, РЅРѕ РїРѕРґС‚РІРµСЂР¶РґРµРЅРёСЏ СЌС‚Рё СЃР»СѓС…Рё РЅРµ РёРјРµСЋС‚. РўРµРј РЅРµ РјРµРЅРµРµ, РІРЅРёРјР°С‚РµР»СЊРЅРѕСЃС‚СЊ - РіР»Р°РІРЅР°СЏ Р·Р°С‰РёС‚Р° СЃС‚Р°Р»РєРµСЂР° РѕС‚ Р»СЋР±РѕР№ Р°РЅРѕРјР°Р»РёРё.</t>";
		};
		class section3
		{
			nameSection="РђСЂС‚РµС„Р°РєС‚С‹";
			description="<t font='CenturyGothicBold'>РђСЂС‚РµС„Р°РєС‚С‹</t><br /><t font='CenturyGothic'>РўРѕ, Р·Р° С‡РµРј РѕС…РѕС‚РёС‚СЃСЏ РµРґРІР° Р»Рё РЅРµ РєР°Р¶РґС‹Р№ С‡РµР»РѕРІРµРє РІ Р—РѕРЅРµ - РђСЂС‚РµС„Р°РєС‚С‹, (РЅР°СѓС‡. - РђРЅРѕРјР°Р»СЊРЅС‹Рµ РѕР±СЂР°Р·РѕРІР°РЅРёСЏ) СЌС‚Рѕ СЃС‚СЂР°РЅРЅС‹Рµ РѕР±СЉРµРєС‚С‹, РєРѕС‚РѕСЂС‹Рµ РёРЅРѕРіРґР° РјРѕР¶РЅРѕ РЅР°Р№С‚Рё РІ РјРµСЃС‚Р°С… СЃРєРѕРїР»РµРЅРёСЏ Р°РЅРѕРјР°Р»РёР№. РС… С„РёР·РёС‡РµСЃРєР°СЏ Рё СЌРЅРµСЂРіРµС‚РёС‡РµСЃРєР°СЏ РїСЂРёСЂРѕРґС‹ РґРѕ РєРѕРЅС†Р° РЅРµРїРѕРЅСЏС‚РЅС‹, Р° СЂРµРґРєРѕСЃС‚СЊ Рё СЃРїРѕСЃРѕР±РЅРѕСЃС‚СЊ РІР»РёСЏС‚СЊ РЅР° РѕРєСЂСѓР¶Р°СЋС‰РёР№ РјРёСЂ РІ РёС‚РѕРіРµ РїСЂРёРґР°СЋС‚ СЌС‚РёРј РѕР±СЂР°Р·РѕРІР°РЅРёСЏРј РґРѕСЃС‚Р°С‚РѕС‡РЅРѕ РІС‹СЃРѕРєСѓСЋ С†РµРЅРЅРѕСЃС‚СЊ, РѕСЃРѕР±РµРЅРЅРѕ РІ СЃСЂРµРґРµ РЅР°СѓС‡РЅС‹С… РіСЂСѓРїРї.<br />РџРѕ РґР°РЅРЅС‹Рј СѓС‡РµРЅС‹С… Р°СЂС‚РµС„Р°РєС‚С‹ РјРѕР¶РЅРѕ РїРѕРґРµР»РёС‚СЊ РЅР° 5 СѓСЃР»РѕРІРЅС‹С… РїРѕРґРіСЂСѓРїРї РїРѕ РїСЂРёСЂРѕРґРµ РёС… РїСЂРѕРёСЃС…РѕР¶РґРµРЅРёСЏ: РўРµСЂРјРёС‡РµСЃРєРёРµ, Р“СЂР°РІРёС‚Р°С†РёРѕРЅРЅС‹Рµ, Р­Р»РµРєС‚СЂРёС‡РµСЃРєРёРµ, РҐРёРјРёС‡РµСЃРєРёРµ Рё РџСЂРµРґРјРµС‚РЅС‹Рµ. РР· РЅР°Р·РІР°РЅРёР№ РІРїРѕР»РЅРµ РїРѕРЅСЏС‚РЅРѕ, РєР°РєРёРµ С‚РёРїС‹ Р°РЅРѕРјР°Р»РёР№ РїРѕСЂРѕР¶РґР°СЋС‚ СѓРєР°Р·Р°РЅРЅС‹Рµ С‚РёРїС‹ Р°СЂС‚РµС„Р°РєС‚РѕРІ, РЅРѕ Рё Р·РґРµСЃСЊ РІСЃС‘ РґР°Р»РµРєРѕ РЅРµ С‚Р°Рє РїСЂРѕСЃС‚Рѕ, РєР°Рє РєР°Р¶РµС‚СЃСЏ РЅР° РїРµСЂРІС‹Р№ РІР·РіР»СЏРґ. РџСЂРѕС†РµСЃСЃ С„РѕСЂРјРёСЂРѕРІР°РЅРёСЏ Р°СЂС‚РµС„Р°РєС‚Р° РІ Р°РЅРѕРјР°Р»РёРё РѕС‡РµРЅСЊ РјР°Р»Рѕ РёР·СѓС‡РµРЅ, РёР·-Р·Р° С‡РµРіРѕ РЅРµРІРѕР·РјРѕР¶РЅРѕ РѕРїСЂРµРґРµР»РёС‚СЊ - РєР°РєРѕР№ Р°СЂС‚РµС„Р°РєС‚ Р°РЅРѕРјР°Р»РёСЏ вЂњРІС‹РїР»СЋРЅРµС‚вЂќ РІ Р±Р»РёР¶Р°Р№С€РµРµ РІСЂРµРјСЏ. РџРѕСЂРѕР№ СЃС‚Р°Р»РєРµСЂР°Рј РїСЂРёС…РѕРґРёР»РѕСЃСЊ Р±СѓРєРІР°Р»СЊРЅРѕ Р¶РґР°С‚СЊ РІРѕР·Р»Рµ Р°РЅРѕРјР°Р»СЊРЅС‹С… РїРѕР»РµР№ РґРЅСЏРјРё, РїРѕРєР° РЅРµРѕР±С…РѕРґРёРјС‹Р№ Р°СЂС‚РµС„Р°РєС‚ РЅР°РєРѕРЅРµС†-С‚Рѕ РЅР°С…РѕРґРёР»СЃСЏ.<br />РЎРїРѕСЃРѕР±РЅРѕСЃС‚СЊ Р°СЂС‚РµС„Р°РєС‚РѕРІ РІР»РёСЏС‚СЊ РЅР° РѕРєСЂСѓР¶Р°СЋС‰РёР№ РјРёСЂ С‚Р°РєР¶Рµ РїРѕРєР° РёР·СѓС‡РµРЅР° РјР°Р»Рѕ, РѕРґРЅР°РєРѕ РїСЂР°РєС‚РёС‡РµСЃРєРѕРµ РїСЂРёРјРµРЅРµРЅРёРµ СѓР¶Рµ РёРјРµРµС‚. РЎС‚Р°Р»РєРµСЂС‹, РЅРѕСЃРёРІС€РёРµ СЃ СЃРѕР±РѕР№ РѕРїСЂРµРґРµР»РµРЅРЅС‹Рµ Р°СЂС‚РµС„Р°РєС‚С‹, РЅРµСЂРµРґРєРѕ РѕС‚РјРµС‡Р°Р»Рё РєР°РєРёРµ Р»РёР±Рѕ РѕС‰СѓС‰РµРЅРёСЏ, СЃРІСЏР·Р°РЅРЅС‹Рµ СЃ СЌС‚РёРј. РќРµРєРѕС‚РѕСЂС‹Рµ Р°СЂС‚РµС„Р°РєС‚С‹, РїРѕРјРёРјРѕ РµСЃС‚РµСЃС‚РІРµРЅРЅРѕРіРѕ С„РѕРЅР°, РїРѕ РЅРµРёР·РІРµСЃС‚РЅРѕР№ РїСЂРёС‡РёРЅРµ СЃРїРѕСЃРѕР±РЅС‹ РїРѕРЅРёР¶Р°С‚СЊ СЂРµРіРµРЅРµСЂР°С‚РёРІРЅС‹Рµ СЃРїРѕСЃРѕР±РЅРѕСЃС‚Рё РѕСЂРіР°РЅРёР·РјР°, РЅРµРєРѕС‚РѕСЂС‹Рµ РІС‹Р·С‹РІР°СЋС‚ РіРѕР»РѕРІРЅС‹Рµ Р±РѕР»Рё, СѓСЃС‚Р°Р»РѕСЃС‚СЊ РёР»Рё РґР°Р¶Рµ РїРѕС‚РµСЂСЋ СЃРѕР·РЅР°РЅРёСЏ РїСЂРё РґР»РёС‚РµР»СЊРЅРѕРј РЅРѕС€РµРЅРёРё. РћРґРЅР°РєРѕ Сѓ РЅРµРєРѕС‚РѕСЂС‹С… РѕС‚РјРµС‡Р°Р»РёСЃСЊ Рё РїРѕР»РѕР¶РёС‚РµР»СЊРЅС‹Рµ СЃС‚РѕСЂРѕРЅС‹, РЅР°РїСЂРёРјРµСЂ С‚РµРїР»Рѕ, РІС‹РґРµР»СЏРµРјРѕРµ Р°СЂС‚РµС„Р°РєС‚РѕРј, СЃРѕРіСЂРµРІР°СЋС‰РµРµ РІ С…РѕР»РѕРґРЅС‹Рµ РЅРѕС‡Рё, РёР»Рё СѓСЃРєРѕСЂРµРЅРёРµ РѕР±РјРµРЅР° РІРµС‰РµСЃС‚РІ, С‡С‚Рѕ СЃРїРѕСЃРѕР±РЅРѕ РґР°С‚СЊ РїСЂРёР»РёРІ СЃРёР». РћРґРЅР°РєРѕ СЌС‚Рѕ Р»РёС€СЊ РїСЂРёРјРµСЂРЅС‹Рµ Р·Р°РјРµС‚РєРё СЃС‚Р°Р»РєРµСЂРѕРІ, Рё РїРѕРґСЂРѕР±РЅСѓСЋ РёРЅС„РѕСЂРјР°С†РёСЋ Рѕ СЃРІРѕР№СЃС‚РІР°С… С‚РµС… РёР»Рё РёРЅС‹С… Р°СЂС‚РµС„Р°РєС‚РѕРІ РІ Р±СѓРґСѓС‰РµРј СЃРјРѕРіСѓС‚ РґР°С‚СЊ Р»РёС€СЊ СѓС‡С‘РЅС‹Рµ.</t>";
		};
	};
	class mainSection2
	{
		nameSection="SectionTest2";
		description="<t font='CenturyGothic'>Р”Р°РЅРЅС‹Рµ СЃРѕРІРµС‚С‹ РїРѕРјРѕРіСѓС‚ РІР°Рј РґРѕР»СЊС€Рµ РїСЂРѕРґРµСЂР¶Р°С‚СЊСЃСЏ РІ Р—РѕРЅРµ Рё РЅРµ РґРІРёРЅСѓС‚СЊ РєРѕРїС‹С‚Р°.</t>";
		class section1
		{
			nameSection="РЎРЅР°СЂСЏР¶РµРЅРёРµ";
			description="<t font='CenturyGothicBold'>РЎРЅР°СЂСЏР¶РµРЅРёРµ</t><br /><t font='CenturyGothic'>Р—РѕРЅР°, СЌС‚Рѕ РѕРїР°СЃРЅРѕРµ РјРµСЃС‚Рѕ. РЎС‚Р°Р»РєРµСЂС‹ РґРµСЃСЏС‚РєР°РјРё СѓРјРёСЂР°СЋС‚ РєР°Р¶РґС‹Р№ РґРµРЅСЊ, РїСЂРёС‡РµРј РІ Р±РѕР»СЊС€РёРЅСЃС‚РІРµ СЃРІРѕС‘Рј - РїРѕ СЃРІРѕРµР№ Р¶Рµ РІРёРЅРµ. Р•СЃР»Рё С‚С‹ РЅРµ С…РѕС‡РµС€СЊ РѕРєР°Р·Р°С‚СЊСЃСЏ РІ РёС… С‡РёСЃР»Рµ - РїСЂРёСЃР»СѓС€Р°Р№СЃСЏ Рє РјРѕРёРј РЅР°СЃС‚Р°РІР»РµРЅРёСЏРј, СЌС‚Рѕ РјРѕР¶РµС‚ СЃРѕС…СЂР°РЅРёС‚СЊ С‚РµР±Рµ Р¶РёР·РЅСЊ.<br />Р§С‚РѕР±С‹ СЃРѕР±СЂР°С‚СЊСЃСЏ РІ С…РѕРґРєСѓ СЃ Р»СЋР±РѕРіРѕ РЅР°СЃРёР¶РµРЅРЅРѕРіРѕ РјРµСЃС‚Р°, РїСЂРѕРІРµСЂСЊ С‡С‚Рѕ С‚С‹ СЃРѕР±СЂР°Р» РІРµС‰Рё РїРµСЂРІРѕР№ РЅРµРѕР±С…РѕРґРёРјРѕСЃС‚Рё: РґРѕР·РёРјРµС‚СЂ, РїСЂРѕС‚РёРІРѕРіР°Р· РёР»Рё СЂР°СЃРїРёСЂР°С‚РѕСЂ СЃРѕ СЃРІРµР¶РёРј РєРѕРјРїР»РµРєС‚РѕРј С„РёР»СЊС‚СЂРѕРІ, РїРѕР±РѕР»СЊС€Рµ Р±РёРЅС‚РѕРІ, РѕР±РµР·Р±РѕР»РёРІР°СЋС‰РёРµ, Р±СѓС‚С‹Р»РєР° РІРѕРґРєРё РёР»Рё РјРµРґРёРєР°РјРµРЅС‚С‹, РїРѕРЅРёР¶Р°СЋС‰РёРµ РґРµР№СЃС‚РІРёСЏ СЂР°РґРёР°С†РёРѕРЅРЅРѕРіРѕ Р·Р°СЂР°Р¶РµРЅРёСЏ, СЂР°С†РёСЏ, Р±РѕР»С‚С‹, СЃРїРёС‡РєРё, РџР”Рђ, РєРѕРјРїР°СЃ, РїР°СЂСѓ С„Р»СЏР¶РµРє РІРѕРґС‹ Рё РєРѕРЅСЃРµСЂРІРѕРІ, РЅРµ Р·Р°Р±СѓРґСЊ РІР·СЏС‚СЊ С…РѕС‚СЏ Р±С‹ РґСЂРѕР±РѕРІРёРє СЃ С…РѕСЂРѕС€РёРј Р·Р°РїР°СЃРѕРј РїР°С‚СЂРѕРЅ, СЃ РїРёСЃС‚РѕР»РµС‚РѕРј РјРѕР¶РµС€СЊ С‚РѕР»СЊРєРѕ СЃС‚Р°Р»РєРµСЂРЅСЋ Сѓ РєРѕСЃС‚СЂР° РїСѓРіР°С‚СЊ, Р±СЂР°С‚СЊ РµРіРѕ СЃ СЃРѕР±РѕР№ РєР°Рє РѕСЃРЅРѕРІРЅРѕРµ РѕСЂСѓР¶РёРµ РЅРµ СЃС‚РѕРёС‚ - РјСѓС‚Р°РЅС‚Р° РЅРµ РѕСЃС‚Р°РЅРѕРІРёС‚СЊ С‚Р°РєРёРј РѕСЂСѓР¶РёРµРј.</t>";
		};
		class section2
		{
			nameSection="РџРµСЂРµРґРІРёР¶РµРЅРёРµ";
			description="<t font='CenturyGothicBold'>РџРµСЂРµРґРІРёР¶РµРЅРёРµ</t><br /><t font='CenturyGothic'>Р’СЃРµРіРґР° РёР·СѓС‡Р°Р№ РјР°СЂС€СЂСѓС‚С‹, РєСѓРґР° СЃРѕР±РёСЂР°РµС€СЊСЃСЏ РЅР°РїСЂР°РІРёС‚СЊСЃСЏ. Р Р°СЃСЃРїСЂР°С€РёРІР°Р№ Сѓ СЃС‚Р°Р»РєРµСЂРѕРІ, СЃРґРµР»Р°Р№ СЂР°СЃСЃС‹Р»РєСѓ РІ РџР”Рђ, РјРѕР¶РµС‚ РєС‚Рѕ РїРѕРґРµР»РёС‚СЃСЏ Р±РµР·РѕРїР°СЃРЅС‹Рј РјР°СЂС€СЂСѓС‚РѕРј. РРґС‚Рё Рё РЅРµ Р·РЅР°С‚СЊ РїСѓС‚Рё - СЌС‚Рѕ С‡С‚Рѕ РёРґС‚Рё РІ РїР°СЃС‚СЊ Рє РҐРёРјРµСЂРµ - СЂР°РЅРѕ РёР»Рё РїРѕР·РґРЅРѕ РїРѕРґРѕС…РЅРµС€СЊ. РќРѕ РЅРёРєРѕРіРґР° РЅРµ С…РѕРґРё РїРѕ РїСЂСЏРјРѕР№...РєСЂРёРІРѕ С…РѕРґРёС€СЊ - РґР°Р»СЊС€Рµ Р±СѓРґРµС€СЊ, РєР°Рє РіР»Р°СЃРёС‚ СЃС‚Р°Р»РєРµСЂСЃРєР°СЏ РїРѕРіРѕРІРѕСЂРєР°. РЎ РєР°Р¶РґС‹Рј РІС‹Р±СЂРѕСЃРѕРј Р°РЅРѕРјР°Р»СЊРЅС‹Рµ РїРѕР»СЏ СЃРјРµС‰Р°СЋС‚СЃСЏ, СЂР°РґРёР°С†РёРѕРЅРЅС‹Р№ С„РѕРЅ С‚Рѕ Р·Р°С‚РёС…Р°РµС‚ РІ РѕРґРЅРѕРј РјРµСЃС‚Рµ, С‚Рѕ РїРѕРґРЅРёРјР°РµС‚СЃСЏ - С‚Р°Рє С‡С‚Рѕ Р±СѓРґСЊ РіРѕС‚РѕРІ РєРѕ РІСЃРµРјСѓ. Р’СЃРµРіРґР° СЂР°СЃСЃС‡РёС‚С‹РІР°Р№ РїСЂРѕРІРёР·РёСЋ Рё РїР°С‚СЂРѕРЅС‹ РЅР° РѕР±СЂР°С‚РЅСѓСЋ РґРѕСЂРѕРіСѓ. РҐР°Р±Р°СЂ-С…Р°Р±Р°СЂРѕРј, РЅРѕ РёРј РіРѕР»РѕРґ Рё Р¶Р°Р¶РґСѓ РЅРµ СѓС‚РѕР»РёС€СЊ, СЂР°РЅСѓ РЅРµ РїРµСЂРµРІСЏР¶РµС€СЊ. РРґСЏ РїРѕ РЅРµР·РЅР°РєРѕРјС‹Рј С‚РµР±Рµ РјРµСЃС‚Р°Рј Р·Р°РїРѕРјРёРЅР°Р№ РѕСЂРёРµРЅС‚РёСЂС‹, СЌС‚Рѕ РїРѕРјРѕР¶РµС‚ РІРµСЂРЅСѓС‚СЊСЃСЏ РѕР±СЂР°С‚РЅРѕР№ РґРѕСЂРѕРіРѕР№, РµСЃР»Рё Р·Р°Р№РґРµС€СЊ РІ С‚СѓРїРёРє. РџРѕ СЌС‚РёРј Р¶Рµ РѕСЂРёРµРЅС‚РёСЂР°Рј С‚С‹ РІ РџР”Рђ СЃРјРѕР¶РµС€СЊ РїРѕРїСЂРѕСЃРёС‚СЊ РїРѕРјРѕС‰Рё Сѓ РЅР°С…РѕРґСЏС‰РёС…СЃСЏ СЂСЏРґРѕРј СЃС‚Р°Р»РєРµСЂРѕРІ. <br />Р—РЅР°РµС€СЊ РїРѕРіРѕРІРѕСЂРєСѓ, РЅРµ Р·РЅР°СЏ Р±СЂРѕРґСѓ - РЅРµ СЃСѓР№СЃСЏ РІ РІРѕРґСѓ? Рђ РІ Р—РѕРЅРµ РЅРµ СЃСѓР№СЃСЏ РІ РІРѕРґСѓ РЅРёРєРѕРіРґР° Рё РЅРёРіРґРµ! РљР°Рє РіРѕРІРѕСЂРёР» РѕРґРёРЅ РїРѕР»РµРІРѕР№ СЃРѕС‚СЂСѓРґРЅРёРє, РёР·СѓС‡Р°СЋС‰РёР№ РІРѕРґРЅС‹Рµ СЂРµСЃСѓСЂСЃС‹ Р—РѕРЅС‹, СЂР°РґРёР°С†РёСЏ СЃРёР»СЊРЅРѕ РїРѕРІР»РёСЏР»Р° РЅР° РІРѕРґРЅСѓСЋ СЃСЂРµРґСѓ. РњРёРєСЂРѕРѕСЂРіР°РЅРёР·РјС‹, РєРѕС‚РѕСЂС‹Рµ С‚Р°Рј РѕР±РёС‚Р°СЋС‚, РєР°Рє РІРѕС€ РёР»Рё РѕС‡РµРЅСЊ РјР°Р»РµРЅСЊРєРёРµ РїРёСЂР°РЅСЊРµ РІРїРёРІР°СЋС‚СЃСЏ РІ РїР»РѕС‚СЊ С‡РµР»РѕРІРµРєР°. РўСѓС‚ РґР°Р¶Рµ С…РѕСЂРѕС€РёР№ РєРѕСЃС‚СЋРј С…РёРјРёС‡РµСЃРєРѕР№ Р·Р°С‰РёС‚С‹ РЅРµ РїРѕРјРѕР¶РµС‚, РѕРЅРё Рё РµРіРѕ РїСЂРѕР¶РёСЂР°СЋС‚. Рђ С‡С‚Рѕ С‚РІРѕСЂРёС‚СЃСЏ РЅР° РіР»СѓР±РёРЅР°С… СЂРµРє Рё Р±РѕР»РѕС‚ - С‚РµР±Рµ РЅРµ СЃРЅРёР»РѕСЃСЊ РґР°Р¶Рµ РІ СЃР°РјС‹С… СЃС‚СЂР°С€РЅС‹С… РєРѕС€РјР°СЂР°С…, СЃРїР°СЃРёР±Рѕ Р—РѕРЅРµ, С‡С‚Рѕ РѕРЅРё РЅР° Р±РµСЂРµРі РµС‰Рµ РІС‹РїРѕР»Р·Р°С‚СЊ РЅРµ РЅР°СѓС‡РёР»РёСЃСЊ. Р•СЃР»Рё РЅР°С‡РёРЅР°РµС€СЊ С‡СѓРІСЃС‚РІРѕРІР°С‚СЊ, С‡С‚Рѕ СЃРґР°РІР»РёРІР°РµС‚ РѕС‚ РґР°РІР»РµРЅРёСЏ РіРѕР»РѕРІСѓ, РІ РіР»Р°Р·Р°С… РІСЃС‘ СЂСЏР±РёС‚ Рё РІ СѓС€Р°С… С€СѓРј - РїРѕС…РѕР¶Рµ С‚С‹ Р·Р°Р±СЂРµР» РЅР° РїСЃРё-РїРѕР»Рµ, РІС‹Р»Р°Р·СЊ РѕС‚С‚СѓРґР° РєР°Рє РјРѕР¶РЅРѕ Р±С‹СЃС‚СЂРµРµ Рё РёС‰Рё РѕР±С…РѕРґ. Р’ РґР°РЅРЅРѕРј РїРѕР»Рµ РјРѕР·РіРё СЃРІР°СЂРёРІР°СЋС‚СЃСЏ Р±С‹СЃС‚СЂРµРµ, С‡РµРј РїРµР»СЊРјРµРЅРё РЅР° Р±С‹СЃС‚СЂРѕРј РѕРіРЅРµ. РџРѕР»СЊР·СѓР№СЃСЏ СЂРµР»СЊРµС„РѕРј РјРµСЃС‚РЅРѕСЃС‚Рё. РҐРѕС‡РµС€СЊ РїРѕ С‚РёС…РѕР№ РїСЂРѕР№С‚Рё Рё Р±РµР· Р»РёС€РЅРёС… РіР»Р°Р· - РІС‹Р±РёСЂР°Р№ РЅРёР·РёРЅС‹, Рё СЃС‚Р°СЂР°Р№СЃСЏ РЅРµ С€СѓРјРµС‚СЊ. РЁСѓРјРµС‚СЊ РІ Р—РѕРЅРµ - СѓРґРµР» РіР»СѓРїС‹С…. РџРѕС‡Р°С‰Рµ РѕСЃС‚Р°РЅР°РІР»РёРІР°Р№СЃСЏ РІ РіСѓСЃС‚РѕР№ СЂР°СЃС‚РёС‚РµР»СЊРЅРѕСЃС‚Рё Рё РїСЂРёСЃР»СѓС€РёРІР°Р№СЃСЏ, РґР° РїСЂРёСЃРјР°С‚СЂРёРІР°Р№СЃСЏ - РЅРµС‚ Р»Рё С…РІРѕСЃС‚Р°? Р•СЃР»Рё Сѓ РІР°СЃ СЃРѕР±СЂР°Р»Р°СЃСЊ Р±РѕР»СЊС€Р°СЏ РіСЂСѓРїРїР°, С‚Рѕ СЂРµР·РѕРЅРЅРѕ РѕС‚РїСЂР°РІР»СЏС‚СЊ РЅР° РІС‹СЃРѕС‚С‹ Р»СЋРґРµР№ - С‚СѓС‚ РёРј РїРѕРјРѕРіСѓС‚ Р±РёРЅРѕРєР»Рё РїРѕСЃС‚СЂРѕРёС‚СЊ РјР°СЂС€СЂСѓС‚ СЃРєРІРѕР·СЊ Р°РЅРѕРјР°Р»СЊРЅС‹Рµ РїРѕР»СЏ, Р° С‚Р°РєР¶Рµ СЂР°СЃСЃРјРѕС‚СЂРµС‚СЊ - РЅРµС‚ Р»Рё РіРґРµ Р·Р°СЃР°РґС‹ РЅР° РїСѓС‚Рё. Р РЅРµ РѕСЃС‚Р°РІР»СЏР№ Р·Р° СЃРѕР±РѕР№ РѕРєСЂРѕРІР°РІР»РµРЅРЅС‹Рµ Р±РёРЅС‚С‹ Рё РѕСЃС‚Р°С‚РєРё РѕС‚ РµРґС‹ - РїРѕ СЌС‚РёРј СЃР»РµРґР°Рј С‚РµР±СЏ РјРѕРіСѓС‚ РЅР°Р№С‚Рё РјСѓС‚Р°РЅС‚С‹.</t>";
		};
		class section3
		{
			nameSection="РњСѓС‚Р°РЅС‚С‹";
			description="<t font='CenturyGothicBold'>РњСѓС‚Р°РЅС‚С‹</t><br /><t font='CenturyGothic'>РџРѕ РїРѕРІРѕРґСѓ РјСѓС‚Р°РЅС‚РѕРІ - РѕС‡РµРЅСЊ РѕРїР°СЃРЅС‹Рµ СЌС‚Рѕ С‚РІР°СЂРё. Р”Р°Р¶Рµ СЃР°РјС‹Р№ РјР°Р»РµРЅСЊРєРёР№, С‚РёРїР° РєСЂС‹СЃС‹ РёР»Рё С‚СѓС€РєР°РЅС‡РёРєР°, РјРѕР¶РµС‚ Р·Р°РіСЂС‹Р·С‚СЊ Р·Р°Р·РµРІР°РІС€РµРіРѕСЃСЏ СЃС‚Р°Р»РєРµСЂР°. РќРµ СЃС‚РѕРёС‚ РёС… РЅРµРґРѕРѕС†РµРЅРёРІР°С‚СЊ Рё РїС‹С‚Р°С‚СЊСЃСЏ СЃСЌРєРѕРЅРѕРјРёС‚СЊ РїР°С‚СЂРѕРЅС‹ РґСЂРѕР±РѕРІРёРєР° Рё Р»РµР·С‚СЊ РЅР° РЅРёС… СЃ С‚РѕРїРѕСЂРѕРј РёР»Рё РЅРѕР¶РѕРј. РўР°Рє Р’Р°СЃСЊРєР° РљРѕСЃРѕР№ Р»РёС€РёР»СЃСЏ СЃРЅР°С‡Р°Р»Р° С‚СЂРµС… РїР°Р»СЊС†РµРІ, Р° РїРѕС‚РѕРј Р”РѕРє РµРјСѓ Рё СЂСѓРєСѓ Р»РµРІСѓСЋ Р°РјРїСѓС‚РёСЂРѕРІР°Р» - Р·Р°СЂР°Р¶РµРЅРёРµ РїРѕС€Р»Рѕ РІ РєСЂРѕРІСЊ. РҐРѕРґРёС‚СЊ РЅР° РѕС…РѕС‚Сѓ РЅР° РјСѓС‚Р°РЅС‚РѕРІ Р·Р° С‚СЂРѕС„РµСЏРјРё СЃС‚РѕРёС‚ РјРёРЅРёРјСѓРј РІРґРІРѕРµРј - РІРѕ РїРµСЂРІС‹С… РїСЂРё РїРµСЂРµР·Р°СЂСЏРґРєРµ С‚РѕРІР°СЂРёС‰ РїРѕРґСЃС‚СЂР°С…СѓРµС‚, РІ СЃР»СѓС‡Р°Рµ СЂР°РЅРµРЅРёСЏ РїРѕРјРѕР¶РµС‚ РІС‹С‚Р°С‰РёС‚СЊ РІ Р±РµР·РѕРїР°СЃРЅРѕРµ РјРµСЃС‚Рѕ, Р° РєРѕРіРґР° Р±СѓРґРµС€СЊ Р·Р°РЅРёРјР°С‚СЊСЃСЏ СЃСЂРµР·Р°РЅРёРµРј С‚СЂРѕС„РµСЏ - РїСЂРёРєСЂРѕРµС‚ СЃРїРёРЅСѓ, С‡С‚РѕР±С‹ РЅРµ Р±С‹Р»Рѕ РЅРµРїСЂРёСЏС‚РЅС‹С… РіРѕСЃС‚РµР№ РЅР° РІР°С€Рё РІС‹СЃС‚СЂРµР»С‹. РџРѕРјРЅРё СЃС‚Р°Р»РєРµСЂ, РѕРґРЅР° РіРѕР»РѕРІР° - С…РѕСЂРѕС€Рѕ, Р° РґРІРµ - РҐРёРјРµСЂР°.<br />РўР°РєРёРµ РјСѓС‚Р°РЅС‚С‹ РєР°Рє СЃРѕР±Р°РєРё РёР»Рё РєР°Р±Р°РЅС‹ - СЃС‚Р°Р№РЅС‹Рµ, СЃС‚Р°СЂР°Р№СЃСЏ РЅРµ РґР°РІР°С‚СЊ РёРј РѕРєСЂСѓР¶РёС‚СЊ С‚РµР±СЏ, СЂР°Р·РґРµСЂСѓС‚ РІРјРёРі.<br />РљРѕРіРґР° РІСЃС‚СЂРµС‚РёС€СЊ РЅР° СЃРІРѕРµРј РїСѓС‚Рё РїСЃРёРѕРЅРёРєР° - РЅР°Р±РµСЂРёСЃСЊ СЃРёР» Рё РіРѕС‚РѕРІСЊ РІ Р»СѓС‡С€РµРј СЃР»СѓС‡Р°Рµ Р°РЅР°Р»СЊРіРёРЅ РѕС‚ РіРѕР»РѕРІРЅРѕР№ Р±РѕР»Рё. Р‘С‹СЃС‚СЂРѕ СЂР°СЃСЃС‚СЂРµР»РёРІР°Р№ РёРј РіРѕР»РѕРІСѓ - С‚СЂРѕС„РµР№ СЃРєРѕСЂРµРµ РІСЃРµРіРѕ РїРѕРІСЂРµРґРёС€СЊ, РЅРѕ Р¶РёРІС‹Рј СѓР№РґРµС€СЊ. РРЅР°С‡Рµ РІРѕР·СЊРјРµС‚ РїРѕРґ РєРѕРЅС‚СЂРѕР»СЊ С‚РµР±СЏ, Рё Р±СѓРґРµС€СЊ РєР°Рє Р·РѕРјР±РёСЂРѕРІР°РЅРЅС‹Р№ РїРѕ РµРіРѕ РІРѕР»Рµ Р¶РёС‚СЊ.<br />РЎ РєСЂРѕРІРѕСЃРѕСЃР°РјРё РІРѕРѕР±С‰Рµ С€СѓС‚РєРё РїР»РѕС…Рё. Р’ РѕРґРёРЅРѕС‡РєСѓ РµСЃР»Рё РІСЃС‚СЂРµС‚РёР» - Р»СѓС‡С€Рµ Р±РµРіРё...Р±РµРіРё РїРѕРєР° С…РІР°С‚Р°РµС‚ СЃРёР», Р·РѕРІРё РЅР° РїРѕРјРѕС‰СЊ Рё РЅРµ РѕР±РѕСЂР°С‡РёРІР°Р№СЃСЏ. Р‘С‹Р»Рё РєРѕРЅРµС‡РЅРѕ СЃР»СѓС‡Р°Рё, РєРѕРіРґР° С‚Р°РєРѕР№ РјСѓС‚Р°РЅС‚ С‚РµСЂСЏР» СЃРІРѕСЋ РґРѕР±С‹С‡Сѓ, РЅРѕ С‡Р°С‰Рµ РІСЃРµРіРѕ РѕРЅ РґРѕРіРѕРЅСЏР» СЃРІРѕСЋ С†РµР»СЊ - РіР»Р°РІРЅРѕРµ Рє СЌС‚РѕРјСѓ РІСЂРµРјРµРЅРё РЅР°Р№С‚Рё С‚РѕРіРѕ, РєС‚Рѕ РїСЂРёРєСЂРѕРµС‚ С‚РµР±СЏ.<br />РљРѕРіРґР° РІРёРґРёС€СЊ, С‡С‚Рѕ РЅРµСЃРєРѕР»СЊРєРѕ РІРёРґРѕРІ РјСѓС‚Р°РЅС‚РѕРІ РЅРµСЃСѓС‚СЃСЏ СЃР»РѕРјСЏ РіРѕР»РѕРІСѓ РїРѕ РѕРґРЅРѕРјСѓ РїСѓС‚Рё - С‚СЂСѓР±Рё С‚СЂРµРІРѕРіСѓ РІ РџР”Рђ. РќР°С‡Р°Р»СЃСЏ РіРѕРЅ РјСѓС‚Р°РЅС‚РѕРІ, Р° СЌС‚Рѕ РїРµСЂРІС‹Р№ РїСЂРёР·РЅР°Рє РїСЂРµРґСЃС‚РѕСЏС‰РµРіРѕ РІС‹Р±СЂРѕСЃР°.</t>";
		};
		class section4
		{
			nameSection="РђСЂС‚РµС„Р°РєС‚С‹ Рё Р°РЅРѕРјР°Р»СЊРЅС‹Рµ РїРѕР»СЏ";
			description="<t font='CenturyGothicBold'>РђСЂС‚РµС„Р°РєС‚С‹ Рё Р°РЅРѕРјР°Р»СЊРЅС‹Рµ РїРѕР»СЏ</t><br /><t font='CenturyGothic'>Р•СЃР»Рё Р¶Рµ СЃРѕР±СЂР°Р»СЃСЏ РїРѕРёСЃРєР°С‚СЊ Р°СЂС‚РµС„Р°РєС‚РѕРІ - СЃРјРѕС‚СЂРё РІРЅРёРјР°С‚РµР»СЊРЅРѕ РїРѕРґ РЅРѕРіРё Рё СЃР»СѓС€Р°Р№. РљС‚Рѕ-С‚Рѕ РіРѕРІРѕСЂРёС‚, С‡С‚Рѕ СЃР°РјРѕРµ РѕРїР°СЃРЅРѕРµ СЌС‚Рѕ РјСѓС‚Р°РЅС‚, РЅРѕ Р°РЅРѕРјР°Р»РёРё РѕРїР°СЃРЅРµРµ. РћРЅРё Р¶РґСѓС‚ Р·Р°Р·РµРІР°РІС€РµРіРѕСЃСЏ СЃС‚Р°Р»РєРµСЂР°, С‡С‚РѕР±С‹ РѕС‚РїСЂР°РІРёС‚СЊ РµРіРѕ РЅР° С‚РѕС‚ СЃРІРµС‚. Р‘РѕР»СЊС€РёРЅСЃС‚РІРѕ Р°РЅРѕРјР°Р»РёР№ РІРёРґРЅРѕ РЅРµРІРѕРѕСЂСѓР¶РµРЅРЅС‹Рј РіР»Р°Р·РѕРј, РЅРѕ РµСЃС‚СЊ Рё С‚Рµ, С‡С‚Рѕ Р»РёС€СЊ СЃР»С‹С€РЅРѕ, РЅРѕ РЅРµ РІРёРґРЅРѕ. РўР°Рє С‡С‚Рѕ РїСЂРѕР±РёСЂР°СЏСЃСЊ С‡РµСЂРµР· Р—РѕРЅСѓ РѕРґРЅРёРј СѓС…РѕРј РІСЃРµРіРґР° СЃР»СѓС€Р°Р№ РїРѕСЃС‚РѕСЂРѕРЅРЅРёРµ Р·РІСѓРєРё. Р§Р°С‰Рµ РІСЃРµРіРѕ Р°СЂС‚РµС„Р°РєС‚С‹ Р»РµР¶Р°С‚ РЅРµРґР°Р»РµРєРѕ РѕС‚ Р°РЅРѕРјР°Р»РёР№ Рё РјР°РЅСЏС‚ Рє СЃРµР±Рµ СЃС‚Р°Р»РєРµСЂРѕРІ, РЅРѕ РЅРµ СЃС‚РѕРёС‚ РїС‹С‚Р°С‚СЊСЃСЏ Р»РµР·С‚СЊ Р·Р° РЅРёРј РІ СЃР°РјРѕРµ Р¶РµСЂР»Рѕ Р°РЅРѕРјР°Р»РёРё, РІ РЅР°РґРµР¶РґРµ, С‡С‚Рѕ СѓСЃРїРµРµС€СЊ РµРіРѕ РІС‹С‚Р°С‰РёС‚СЊ. Р—РѕРЅР° Р»СЋР±РёС‚ СЂР°СЃСЃС‚Р°РІР»СЏС‚СЊ Р»РѕРІСѓС€РєРё РґР»СЏ РіР»СѓРїС‹С… Р»СЋРґРµР№. РЈРІРёРґРµР» С‚Р°РєРѕР№ Р°СЂС‚РµС„Р°РєС‚ - СЃРјРёСЂРёСЃСЊ, СЃРµРіРѕРґРЅСЏ СЌС‚Рѕ РЅРµ С‚РІРѕР№ С…Р°Р±Р°СЂ - РїРѕРІРµР·РµС‚ РІ СЃР»РµРґСѓСЋС‰РёР№ СЂР°Р·. РђСЂС‚РµС„Р°РєС‚ Рё РІ РіСЂСЏР·Рё Р±Р»РµСЃС‚РёС‚. РҐСЂР°РЅРё Р°СЂС‚РµС„Р°РєС‚С‹ РїРѕРґР°Р»СЊС€Рµ РѕС‚ Р»РёС‡РЅС‹С… РІРµС‰РµР№ Рё РѕС‚ С‚РµР»Р° - РєС‚Рѕ Р·РЅР°РµС‚, С‡С‚Рѕ СЌС‚Рё С€С‚СѓРєРё РјРѕРіСѓС‚ СЃРґРµР»Р°С‚СЊ СЃ С‚РѕР±РѕР№, Р° С„РѕРЅСЏС‚ РѕРЅРё РЅРµ СЃР»Р°Р±Рѕ.<br />Р›СѓС‡С€РёР№ РґСЂСѓРі СЃС‚Р°Р»РєРµСЂР° - СЌС‚Рѕ Р±РѕР»С‚. РћР±С‹С‡РЅС‹Р№ РјРµС‚Р°Р»Р»РёС‡РµСЃРєРёР№ Р±РѕР»С‚. РРј Р»СЋР±СѓСЋ Р°РЅРѕРјР°Р»РёСЋ РїСЂРѕС‰СѓРїР°С‚СЊ РјРѕР¶РЅРѕ, С‚СЂРѕРїРёРЅРєСѓ РїСЂРѕР»РѕР¶РёС‚СЊ РґР°Р¶Рµ РІ РѕС‡РµРЅСЊ РіСѓСЃС‚РѕРј Р°РЅРѕРјР°Р»СЊРЅРѕРј РїРѕР»Рµ - РЅРµ Р·Р°Р±С‹РІР°Р№ РїРѕС‡Р°С‰Рµ РєРёРґР°С‚СЊ Р±РѕР»С‚ РІ С‚Рѕ РјРµСЃС‚Рѕ, РєСѓРґР° С…РѕС‡РµС€СЊ РЅР°СЃС‚СѓРїРёС‚СЊ.</t>";
		};
		class section5
		{
			nameSection="РќРµРїСЂРµРґРІРёРґРµРЅРЅС‹Рµ СЃРёС‚СѓР°С†РёРё";
			description="<t font='CenturyGothicBold'>РќРµРїСЂРµРґРІРёРґРµРЅРЅС‹Рµ СЃРёС‚СѓР°С†РёРё</t><br /><t font='CenturyGothic'>Р•СЃР»Рё РІРґСЂСѓРі С‚РµР±Рµ РєСЂРёС‡Р°С‚ С‡С‚РѕР± РїРѕРґРЅСЏР» СЂСѓРєРё, РєРёРЅСѓР» СЃС‚РІРѕР» Рё РїСЂРѕСЃС‚Рѕ РЅРµ РґРІРёРіР°Р»СЃСЏ - Р»СѓС‡С€Рµ СЃРґРµР»Р°Р№ РєР°Рє С‚СЂРµР±СѓСЋС‚. Р’РµРґСЊ РµСЃР»Рё С‚С‹ Сѓ РЅРёС… РЅР° РїСЂРёС†РµР»Рµ - С‚Рѕ РѕРЅРё РјРѕРіР»Рё Р±С‹ РґР°РІРЅРѕ С‚РµР±СЏ Р·Р°РјР°СЃР»РёС‚СЊ, РЅРѕ РЅРµ СЃС‚Р°Р»Рё. РќРµ СЂРёСЃРєСѓР№ Рё РЅРµ РёРіСЂР°Р№ РІ РіРµСЂРѕСЏ...Р»СѓС‡С€Рµ РїРѕС‚РµСЂСЏС‚СЊ С‡Р°СЃС‚СЊ С…Р°Р±Р°СЂР°, С‡РµРј РїРѕС‚РµСЂСЏС‚СЊ Р¶РёР·РЅСЊ. Р”Р° Рё СЃР°Рј РЅРµ РјР°СЃР»Рё РєРѕРіРѕ-РїРѕРїР°Р»Рѕ, С‚С‹ Р¶Рµ РЅРµ СѓР±РёР№С†Р° РєР°РєРѕР№-С‚Рѕ. Р—РѕРЅР° С…РѕС‚СЊ Рё Р±РѕР»СЊС€Р°СЏ, РЅРѕ С‚СѓС‚, РјРѕР¶РЅРѕ СЃРєР°Р·Р°С‚СЊ, РґСЂСѓРі РґСЂСѓРіР° РІСЃРµ Р·РЅР°СЋС‚...РІ РґРµСЂРµРІРЅРµ Р·Р° СЌС‚Рѕ С‚РµР±СЏ Рё РІР·РґРµСЂРЅСѓС‚ РёР»Рё РјСѓС‚Р°РЅС‚Р°Рј РЅР° СЃСЉРµРґРµРЅРёРµ РѕС‚РїСЂР°РІСЏС‚.<br />РЎС‚Р°СЂР°Р№СЃСЏ СЌРєРѕРЅРѕРјРёС‚СЊ СЃРёР»С‹ Рё Р»РёС€РЅРёР№ СЂР°Р· РЅРµ Р±РµРіР°С‚СЊ, Р·Р°РїР°СЃ СЃРёР» РјРѕР¶РµС‚ РїСЂРёРіРѕРґРёС‚СЊСЃСЏ С‚РµР±Рµ РІ РїРµСЂРµСЃС‚СЂРµР»РєРµ, РїРѕР±РµРіР° РѕС‚ РѕРїР°СЃРЅРѕРіРѕ РјСѓС‚Р°РЅС‚Р° РёР»Рё РІРѕ РІСЂРµРјСЏ РЅР°СЃС‚СѓРїР°СЋС‰РµРіРѕ РІС‹Р±СЂРѕСЃР°.<br />Р’Рѕ РІСЂРµРјСЏ РІС‹Р±СЂРѕСЃР° СЃС‚Р°СЂР°Р№СЃСЏ РЅР°Р№С‚Рё РїРѕРјРµС‰РµРЅРёРµ РїРѕРіР»СѓР±Р¶Рµ РїРѕРґ Р·РµРјР»РµР№ СЃ Р¶РµР»РµР·РѕР±РµС‚РѕРЅРЅС‹РјРё СЃС‚РµРЅР°РјРё, Р° РµСЃР»Рё СЃРѕРІСЃРµРј РїСЂРёР¶Р°Р»Рѕ - РёС‰Рё Р»СЋР±РѕРµ Р·РґР°РЅРёРµ СЃ РєСЂС‹С€РµР№...РЅРѕ РіРѕС‚РѕРІСЊ РІРѕРґРєСѓ Рё РјРµРґРёРєР°РјРµРЅС‚С‹, РїРѕ СЃР°РјРѕС‡СѓРІСЃС‚РІРёСЋ С‚Р°РєР°СЏ С€С‚СѓРєР° РІРґР°СЂРёС‚ С‚РµР±Рµ РЅРµРїР»РѕС…Рѕ. РЎР°РЅСЊРєР° РњР°Р»С‹Р№ РїРѕРјРЅРёС‚СЃСЏ РїРµСЂРµР¶РёР» С‚СЂРё РІС‹Р±СЂРѕСЃР° РІРЅРµ СѓРєСЂС‹С‚РёСЏ, С…РІР°Р»РёР»СЃСЏ РІСЃРµРј, С‡С‚Рѕ Р—РѕРЅР° РµРіРѕ РїРѕР»СЋР±РёР»Р°. РќР° С‡РµС‚РІРµСЂС‚С‹Р№ СЂР°Р· СѓРјРѕРј РїРѕРµС…Р°Р» - РїСЂРѕСЃС‚Рѕ РІ РїСѓСЃС‚С‹С€РєСѓ РїСЂРµРІСЂР°С‚РёР»СЃСЏ, РІ Р·РѕРјР±РёСЂРѕРІР°РЅРЅРѕРіРѕ.<br />РџРѕС‡Р°С‰Рµ РїСЂРѕРІРµСЂСЏР№, РЅРµ РѕС‚РєСЂС‹Р»РёСЃСЊ Р»Рё СЃС‚Р°СЂС‹Рµ СЂР°РЅС‹ - СЂР°РґРёР°С†РёСЏ С‚СѓС‚ РґР°РµС‚ Рѕ СЃРµР±Рµ Р·РЅР°С‚СЊ, С€РІС‹ РєСЂРѕРІРѕС‚РѕС‡Р°С‚, СЃС‚Р°СЂС‹Рµ СЃСЃР°РґРёРЅС‹ РЅР°С‡РёРЅР°СЋС‚ РїРѕРєСЂС‹РІР°С‚СЊСЃСЏ РіРЅРѕР№РЅРёРєР°РјРё. РџСЂРѕР·РµРІР°РµС€СЊ Рё РІСЃС‘ - РіРѕС‚РѕРІСЊСЃСЏ Рє С…СѓРґС€РµРјСѓ.<br />РўР°РєР¶Рµ РЅРµ СЃРѕРІРµС‚СѓСЋ С‚РµР±Рµ СЃРѕРІР°С‚СЊСЃСЏ РІ РїРѕРёСЃРєР°С… С…Р°Р±Р°СЂР° РЅР° РѕС…СЂР°РЅСЏРµРјС‹Рµ РѕР±СЉРµРєС‚С‹, РєР°Рє Р±Р»РѕРєРїРѕСЃС‚С‹ РІРѕРµРЅРЅС‹С… РёР»Рё Р±Р°Р·С‹ РєР°РєРёС…-Р»РёР±Рѕ РіСЂСѓРїРїРёСЂРѕРІРѕРє. Р•СЃР»Рё С‚С‹ РЅРµ РІРёРґРёС€СЊ РґРѕР·РѕСЂРЅРѕРіРѕ, СЌС‚Рѕ РЅРµ Р·РЅР°С‡РёС‚, С‡С‚Рѕ РґРѕР·РѕСЂРЅС‹Р№ РЅРµ РІРёРґРёС‚ С‚РµР±СЏ - РїСѓР»СЋ РїРѕР№РјР°С‚СЊ С‚Р°Рє РЅР° СЂР°Р·-РґРІР° РІС‹Р№РґРµС‚, Р° РѕРЅРѕ С‚РѕРіРѕ СЃС‚РѕРёР»Рѕ? Р’РѕС‚ Рё СЏ РґСѓРјР°СЋ, С‡С‚Рѕ РЅРµС‚.<br />Р•СЃР»Рё СЃРѕРІСЃРµРј РЅР° РјРµР»Рё РїРѕ РґРµРЅСЊРіР°Рј, РёС‰Рё РіСЂСѓРїРїС‹ СЃС‚Р°Р»РєРµСЂРѕРІ, РїСЂРµРґР»Р°РіР°Р№ РїРѕРјРѕС‰СЊ РІ РїРµСЂРµРЅРѕСЃРµ РїСЂРѕРІРёР·РёРё Рё РЅР°Р№РґРµРЅРЅРѕРіРѕ С…Р°Р±Р°СЂР°, РїСЂРѕС†РµРЅС‚ РѕС‚ РЅР°Р№РґРµРЅРЅРѕРіРѕ С‚РѕС‡РЅРѕ РґР°РґСѓС‚, Р° С‚Р°Рє РјРѕР¶РµС‚ Рё РґСЂСѓР·РµР№ Р±РѕР»СЊС€Рµ Р·Р°РІРµРґРµС€СЊ. <br />Р•СЃР»Рё РїРѕСЃР»Рµ СЂР°РЅРµРЅРёСЏ С‚РІРѕРё РґСЂСѓР·СЊСЏ РїСЂРёРЅРµСЃР»Рё С‚РµР±СЏ РїРѕРґР»Р°С‚Р°С‚СЊ РІ Р±РµР·РѕРїР°СЃРЅРѕРµ РјРµСЃС‚Рѕ - РЅРµ Р±РµРіРё РїРѕС‚РѕРј СЃР»РѕРјСЏ РіРѕР»РѕРІСѓ РЅР° РјРµСЃС‚Рѕ, РіРґРµ С‚РµР±Рµ РїРѕС…РµСЂРѕРІРµР»Рѕ. РҐР°Р±Р°СЂ РїРѕС‚РµСЂСЏРІС€РёР№СЃСЏ РґРѕР»РіРѕ РЅРµ Р·Р°Р»РµР¶РёРІР°РµС‚СЃСЏ, Р° С‚С‹ СЂРёСЃРєСѓРµС€СЊ С‚РµРј СЃР°РјС‹Рј РІРѕРѕР±С‰Рµ РЅРµ РІРµСЂРЅСѓС‚СЊСЃСЏ РѕР±СЂР°С‚РЅРѕ...<br />Р’ РѕР±С‰РµРј СЃС‚Р°Р»РєРµСЂ, РїСЂРёРјРё Рє СЃРІРµРґРµРЅРёСЋ РјРѕРё Р·Р°РїРёСЃРё, СЌС‚Рѕ С…РѕС‚СЊ РЅР° СЃСѓС‚РєРё, РЅРѕ РїСЂРѕРґР»РёС‚ С‚РµР±Рµ Р¶РёР·РЅСЊ РІ Р—РѕРЅРµ. РџРѕРґРЅРёРјРё С‚Р°Рј Сѓ РЎРёРґРѕСЂРѕРІРёС‡Р° Р·Р° РјРµРЅСЏ СЃС‚Р°РєР°РЅ, Р° СЏ РїРѕС€РµР» РЅР° СЃРµРІРµСЂ...РіРѕРІРѕСЂСЏС‚ С‚Р°Рј С…Р°Р±Р°СЂР° РјРЅРѕРіРѕ.</t>";
		};
		class section6
		{
			nameSection="РЎРµРІРµСЂ";
			description="<t font='CenturyGothicBold'>РЎРµРІРµСЂ</t><br /><t font='CenturyGothic'>Рђ РµСЃР»Рё СЃРѕР±СЂР°Р»СЃСЏ РїРѕ РјРѕРёРј СЃС‚РѕРїР°Рј РЅР° СЃРµРІРµСЂ РёРґС‚Рё...С‚Рѕ РїСЂРѕС€Р»С‹С… РјРѕРёС… Р·Р°РїРёСЃРµР№ С‚РµР±Рµ Р±СѓРґРµС‚ РЅРµ РґРѕСЃС‚Р°С‚РѕС‡РЅРѕ. РЎРµРІРµСЂ РЅРµ Р»СЋР±РёС‚ РѕС€РёР±РѕРє, СЃРµРІРµСЂ РЅРµ РїСЂРѕС‰Р°РµС‚ Рё РЅРµ РѕС‚РїСѓСЃРєР°РµС‚. Р‘РµР· СЃРµСЂСЊРµР·РЅРѕРіРѕ СЃРЅР°СЂСЏР¶РµРЅРёСЏ, РІ РІРёРґРµ С…РѕСЂРѕС€РµРіРѕ РІРµСЂРЅРѕРіРѕ Р°РІС‚РѕРјР°С‚Р°, РїСЂРёС†РµР»Р°, РєР°С‡РµСЃС‚РІРµРЅРЅРѕРіРѕ РїСЂРѕС‚РёРІРѕРіР°Р·Р° РёР»Рё РєРѕСЃС‚СЋРјР° СЃ Р·Р°РјРєРЅСѓС‚РѕР№ СЃРёСЃС‚РµРјРѕР№ РґС‹С…Р°РЅРёСЏ, СЃРѕРІР°С‚СЊСЃСЏ РЅРµ СЃС‚РѕРёС‚. Р СЌС‚Рѕ Р»РёС€СЊ РјРёРЅРёРјСѓРј. Р’РµРґСЊ РЅСѓР¶РµРЅ Рё Р±СЂРѕРЅРµР¶РёР»РµС‚ СЃ Р·Р°С‰РёС‚РЅС‹РјРё РїР»Р°СЃС‚РёРЅР°РјРё - РЅР° СЃРµРІРµСЂРµ С‡Р°СЃС‚С‹Рµ РїРµСЂРµСЃС‚СЂРµР»РєРё Р·Р° С…Р°Р±Р°СЂ Рё Р·Р° С‚РµСЂСЂРёС‚РѕСЂРёРё. РњРµРґРёРєР°РјРµРЅС‚РѕРІ Рё РїСЂРѕРІРёР·РёРё СЃ СЃРѕР±РѕР№ РЅР° РЅРµРґРµР»СЋ РІРїРµСЂРµРґ РЅР°РґРѕ, РІРµРґСЊ РїРѕРїРѕР»РЅРёС‚СЊ С‚Р°Рј РЅРµРіРґРµ РёС…, СЂР°Р·РІРµ С‡С‚Рѕ Сѓ РјРµСЂС‚РІРѕРіРѕ СЃС‚Р°Р»РєРµСЂР° РЅР°Р№РґРµС€СЊ - РµРјСѓ С‚Рѕ СѓР¶Рµ РЅРµР·Р°С‡РµРј. РЎС‚Р°СЂР°Р№СЃСЏ РЅР° СЃРµРІРµСЂРµ РІСЃС‘ С…РѕСЂРѕС€РµРЅСЊРєРѕ Р·Р°РїРѕРјРЅРёС‚СЊ, Р·Р°РїРёСЃР°С‚СЊ, СЃС„РѕС‚РѕРіСЂР°С„РёСЂРѕРІР°С‚СЊ - РІ Р—РѕРЅРµ РµСЃС‚СЊ Р»СЋРґРё, РіРѕС‚РѕРІС‹Рµ РєСѓРїРёС‚СЊ РІСЃСЋ СЌС‚Сѓ РёРЅС„РѕСЂРјР°С†РёСЋ РїРѕ РѕС‡РµРЅСЊ С…РѕСЂРѕС€РёРј РґРµРЅСЊРіР°Рј. Рђ РµСЃР»Рё С‚СЂРѕРїС‹ С‚Р°Рј С…РѕСЂРѕС€РµРЅСЊРєРѕ РёР·СѓС‡РёС€СЊ - РјРѕР¶РµС€СЊ РїРѕРїСЂРѕР±РѕРІР°С‚СЊ РїСЂРѕРІРѕРґРЅРёРєРѕРј РЅР° СЃРµРІРµСЂ РїРѕРґСЂР°Р±РѕС‚Р°С‚СЊ.<br />РҐРѕРґСЏС‚ Р»РµРіРµРЅРґС‹ РѕР± РѕС‡РµРЅСЊ СЃС‚СЂР°С€РЅС‹С…, РіСЂРѕР·РЅС‹С… Рё РѕРїР°СЃРЅС‹С… РјСѓС‚Р°РЅС‚РѕРІ СЃРµРІРµСЂР°. РќР° РёС… СѓРЅРёС‡С‚РѕР¶РµРЅРёРµ СЃРѕР±РёСЂР°Р»РёСЃСЊ Р±РѕР»СЊС€РёРµ РіСЂСѓРїРїС‹ РїСЂРѕС„РµСЃСЃРёРѕРЅР°Р»СЊРЅС‹С… РѕС…РѕС‚РЅРёРєРѕРІ, Рё С‚Рµ РЅРµ РІСЃРµ РІРѕР·РІСЂР°С‰Р°Р»РёСЃСЊ РѕР±СЂР°С‚РЅРѕ.</t>";
		};
	};
	class mainSection3
	{
		nameSection="SectionTest3";
		description="";
		class section1
		{
			nameSection="Р—Р°РїРѕР»СЊРµ";
			description="<t font='CenturyGothicBold'>Р—Р°РїРѕР»СЊРµ</t><br /><t font='CenturyGothic'>РЎС‚Р°СЂР°СЏ РґРµСЂРµРІСѓС€РєР° РЅР° СЋРіРµ Р§РµСЂРЅРѕР±С‹Р»СЊСЃРєРѕР№ Р—РѕРЅС‹ РћС‚С‡СѓР¶РґРµРЅРёСЏ. Р•С‰Рµ РґРѕ РџРµСЂРІРѕРіРѕ Р’Р·СЂС‹РІР° Р¶РёР·РЅСЊ Р·РґРµСЃСЊ Р±С‹Р»Р° РїРѕ-РґРµСЂРµРІРµРЅСЃРєРё С…РѕСЂРѕС€Р°. РќРѕ Рё РІ РЅР°С€Рё РґРЅРё РѕРЅР° РЅРµ РїСѓСЃС‚СѓРµС‚. РњРµСЃС‚РЅС‹Р№ Р±Р°СЂС‹РіР° РІРµРґРµС‚ С‚РѕСЂРіРѕРІР»СЋ РЅР° С‚РµСЂСЂРёС‚РѕСЂРёРё Р—Р°РїРѕР»СЊСЏ, РѕР±РѕСЃРЅРѕРІР°РІ РІ РЅРµРј Р”РµСЂРµРІРЅСЋ РќРѕРІРёС‡РєРѕРІ. РћРїС‹С‚РЅС‹Рµ СЃС‚Р°Р»РєРµСЂС‹ РїСЂРёРІРѕРґСЏС‚ СЃСЋРґР° РЅРµСѓРјРµС…, С‡С‚РѕР±С‹ РѕРЅРё РЅР°СѓС‡РёР»РёСЃСЊ Р·РґРµСЃСЊ РІС‹Р¶РёРІР°С‚СЊ Рё РЅР°Р±СЂР°Р»РёСЃСЊ С…РѕС‚СЊ РєР°РєРѕРіРѕ-С‚Рѕ РѕРїС‹С‚Р°.</t>";
		};
		class section2
		{
			nameSection="РќРР вЂњРђРіСЂРѕРїСЂРѕРјвЂќ";
			description="<t font='CenturyGothicBold'>РќРР вЂњРђРіСЂРѕРїСЂРѕРјвЂќ</t><br /><t font='CenturyGothic'>РќР°СѓС‡РЅРѕ-РёСЃСЃР»РµРґРѕРІР°С‚РµР»СЊСЃРєРёР№ РёРЅСЃС‚РёС‚СѓС‚ вЂњРђРіСЂРѕРїСЂРѕРјвЂќ. РњРЅРѕРіРѕ СЃР»СѓС…РѕРІ С…РѕРґРёС‚ РѕР± СЌС‚РѕРј РјРµСЃС‚Рµ. РћРґРЅРё РіРѕРІРѕСЂСЏС‚, РµСЃР»Рё РїСЂРѕСЃРёРґРµС‚СЊ РІ Р·РґР°РЅРёРё РёРЅСЃС‚РёС‚СѓС‚Р° С…РѕС‚СЏ Р±С‹ РѕРґРЅСѓ РЅРѕС‡СЊ, С‚Рѕ РјРѕР¶РЅРѕ СѓСЃР»С‹С€Р°С‚СЊ, РєР°Рє РґСѓС€Рё РјРµСЂС‚РІС‹С… РЅР°С€РµРїС‚С‹РІР°СЋС‚ Рѕ СЃРІРѕРµР№ РїСЂРѕС€Р»РѕР№ Р¶РёР·РЅРё. Р”СЂСѓРіРёРµ СЂР°СЃСЃРєР°Р·С‹РІР°СЋС‚, С‡С‚Рѕ РІ РїРѕРґР·РµРјРµР»СЊСЏС… РђРіСЂРѕРїСЂРѕРјР° Р¶РёРІСѓС‚ РјСѓС‚Р°РЅС‚С‹ Рё РїРѕСЌС‚РѕРјСѓ РЅРѕС‡Р°РјРё РјРѕР¶РЅРѕ СѓСЃР»С‹С€Р°С‚СЊ РёС… Р¶Р°Р»РѕР±РЅС‹Рµ РІРѕРїР»Рё.</t>";
		};
		class section3
		{
			nameSection="РЎРІР°Р»РєР°";
			description="<t font='CenturyGothicBold'>РЎРІР°Р»РєР°</t><br /><t font='CenturyGothic'>РџРѕСЃР»Рµ Р°РІР°СЂРёРё РІ 1986 РіРѕРґСѓ, СЃСЋРґР° СЃС‚Р°Р»Рё СЃРІРѕР·РёС‚СЊ СЂР°Р·РЅСѓСЋ СЂР°РґРёРѕР°РєС‚РёРІРЅСѓСЋ С‚РµС…РЅРёРєСѓ. Р’ РіРѕСЂР°С… РјСѓСЃРѕСЂР° РјРѕР¶РЅРѕ РѕС‚С‹СЃРєР°С‚СЊ РјРЅРѕРіРѕ РїРѕР»РµР·РЅС‹С… РёРЅСЃС‚СЂСѓРјРµРЅС‚РѕРІ, Р° РјРѕР¶РµС‚ РґР°Р¶Рµ Рё РјР°С€РёРЅР° СЂР°Р±РѕС‡Р°СЏ РЅР°Р№РґРµС‚СЃСЏ, РёРЅРѕРіРґР° Рё Р°СЂС‚РµС„Р°РєС‚С‹ РІС‹РїСЂС‹РіРёРІР°СЋС‚. РўРѕР»СЊРєРѕ РѕСЃС‚Р°РІР°С‚СЊСЃСЏ Р·РґРµСЃСЊ РЅР°РґРѕР»РіРѕ РёР»Рё РІРіР»СѓР±СЊ СЃРѕРІР°С‚СЊСЃСЏ Р±РµР· С…РѕСЂРѕС€РµРіРѕ СЃРЅР°СЂСЏР¶РµРЅРёСЏ РґР°Р¶Рµ РіР»СѓРїС‹Р№ РЅРµ СЂРёСЃРєРЅРµС‚. РћС‡Р°РіРѕРІ СЂР°РґРёР°С†РёРё Р·РґРµСЃСЊ РјРЅРѕРіРѕ, РґР° Рё РјРµСЃС‚Р° РІ Р—РѕРЅРµ РµСЃС‚СЊ РїРѕРёРЅС‚РµСЂРµСЃРЅРµРµ.</t>";
		};
		class section4
		{
			nameSection="РЎС‚Р°СЂС‹Р№ РљРѕСЂРґРѕРЅ";
			description="<t font='CenturyGothicBold'>РЎС‚Р°СЂС‹Р№ РљРѕСЂРґРѕРЅ</t><br /><t font='CenturyGothic'>Р Р°РЅРµРµ РІ СЌС‚РёС… РјРµСЃС‚Р°С… РѕР±РёС‚Р°Р»Рё СЃС‚Р°Р»РєРµСЂС‹. Р—РґРµСЃСЊ Р±С‹Р»Р° Р”РµСЂРµРІРЅСЏ РќРѕРІРёС‡РєРѕРІ, РєСѓРґР° РїСЂРёРІРѕРґРёР»Рё РЅРµРѕРїС‹С‚РЅС‹С… Рё РЅРѕРІРµРЅСЊРєРёС…, С‡С‚РѕР±С‹ РѕРЅРё РїРѕР·РЅР°РІР°Р»Рё Р—РѕРЅСѓ Рё Р·Р°СЂР°Р±Р°С‚С‹РІР°Р»Рё СЃРµР±Рµ РЅР° СЃРЅР°СЂСЏР¶РµРЅРёРµ. РќРѕ РјСѓС‚Р°РЅС‚С‹ РІСЃС‘ Р±РѕР»СЊС€Рµ СЃС‚Р°Р»Рё Р·Р°СЃРµР»СЏС‚СЊ СЌС‚Сѓ РјРµСЃС‚РЅРѕСЃС‚СЊ, РІРµРґСЊ, РіРґРµ РµСЃС‚СЊ РЅРѕРІРёС‡РєРё, С‚Р°Рј РµСЃС‚СЊ Рё РµРґР°. РџРѕРєР° РѕРґРЅРѕР№ РЅРѕС‡СЊСЋ СЃС‚Р°СЏ РєР°Р±Р°РЅРѕРІ РЅРµ РІС‹РіРЅР°Р»Р° Р»СЋРґРµР№ РёР· РґРµСЂРµРІРЅРё, Р° РѕСЃС‚Р°РІС€РёС…СЃСЏ С‚Р°Рј Р·Р°С‚РѕРїС‚Р°Р»Рё РґРѕ СЃРјРµСЂС‚Рё. РРјРµРЅРЅРѕ Р·РґРµСЃСЊ РЅР° РљРџРџ РІРѕРµРЅРЅС‹С… Рё РїСЂРѕРёР·РѕС€РµР» РїСЂРѕСЂС‹РІ РїРµСЂРёРјРµС‚СЂР°, РїРѕСЃР»Рµ С‡РµРіРѕ Р±С‹Р»Рѕ РїСЂРёРЅСЏС‚Рѕ СЂР°СЃС„РѕСЂРјРёСЂРѕРІР°С‚СЊ Рё РїРµСЂРµРєСЂС‹С‚СЊ РІСЃС‘ РЎС‚РµРЅРѕР№ РѕС‚ Р‘РѕР»СЊС€РѕР№ Р—РµРјР»Рё. РўРµРїРµСЂСЊ Р·РґРµСЃСЊ РЅРµ РІСЃС‚СЂРµС‚РёС€СЊ Р»СЋРґРµР№, С‚РѕР»СЊРєРѕ РјСѓС‚Р°РЅС‚С‹, РѕР±Р»СЋР±РѕРІР°РІС€РёРµ РґРѕРјР° РїРѕРґ СЃРІРѕРё Р»РѕРіРѕРІР°.</t>";
		};
		class section5
		{
			nameSection="РљР»Р°РґР±РёС‰Рµ";
			description="<t font='CenturyGothicBold'>РљР»Р°РґР±РёС‰Рµ</t><br /><t font='CenturyGothic'>Рћ С†РµСЂРєРІРё РЅР° РѕС‚С€РёР±Рµ Р—РѕРЅС‹ РґР°РІРЅРѕ С…РѕРґСЏС‚ РЅРµРїСЂРёСЏС‚РЅС‹Рµ СЃР»СѓС…Рё. Р”Рѕ Р°РІР°СЂРёРё СЃСЋРґР° СЃСЉРµР·Р¶Р°Р»РёСЃСЊ Р»СЋРґРё СЃ СЂР°Р·РЅС‹С… РїРѕСЃРµР»РµРЅРёР№ РїРѕРјРѕР»РёС‚СЊСЃСЏ Р·Р° СѓРїРѕРєРѕР№. РўРµРїРµСЂСЊ СЃСЋРґР° РґР°Р¶Рµ РѕРїС‹С‚РЅС‹Р№ СЃС‚Р°Р»РєРµСЂ РЅРµ СЃСѓРЅРµС‚СЃСЏ. РњРЅРѕР¶РµСЃС‚РІРѕ РјРѕРіРёР» РЅР°СЃРїРµС… Р·Р°С…РѕСЂРѕРЅРµРЅРЅС‹С… Р»СЋРґРµР№ РЅР°РІРѕРґСЏС‚ СЃС‚СЂР°С… РґР°Р¶Рµ РЅР° РѕРїС‹С‚РЅС‹С… СЃС‚Р°Р»РєРµСЂРѕРІ, РїРѕС‚РѕРјСѓ РєР°Рє РјРѕРіРёР» СЌС‚РёС… СЃ РєР°Р¶РґС‹Рј РґРЅРµРј РІСЃС‘ Р±РѕР»СЊС€Рµ, Рё, РєС‚Рѕ РёС… РІРѕР·РІРѕРґРёС‚, С‚РѕР»СЊРєРѕ Р—РѕРЅРµ РёР·РІРµСЃС‚РЅРѕ. РЎР»СѓС…Рё РіСѓР»СЏСЋС‚, С‡С‚Рѕ СЌС‚Рё РјРµСЂС‚РІРµС†С‹ РїРѕ РЅРѕС‡Р°Рј РІС‹С…РѕРґСЏС‚ РёР· СЃРІРѕРёС… РјРѕРіРёР» Рё Р±РµСЃС†РµР»СЊРЅРѕ РїР»РµС‚СѓС‚СЃСЏ РІ СЃС‚РѕСЂРѕРЅСѓ РЎС‚Р°СЂРѕРіРѕ РљРѕСЂРґРѕРЅР°. Рђ РµСЃР»Рё РЅРѕС‡РµРІР°С‚СЊ РѕСЃС‚Р°РЅРµС€СЊСЃСЏ РІ СЌС‚РѕР№ С†РµСЂРєРІРё, С‚Рѕ РЅРµСѓРїРѕРєРѕРµРЅРЅС‹Рµ РїСЂРёРґСѓС‚ Р·Р° С‚РѕР±РѕР№ Рё РЅР° РєР»Р°РґР±РёС‰Рµ РїРѕСЏРІРёС‚СЃСЏ РµС‰Рµ РѕРґРЅР° РјРѕРіРёР»Р°.</t>";
		};
		class section6
		{
			nameSection="РљРѕСЂРѕРіРѕРґ";
			description="<t font='CenturyGothicBold'>РљРѕСЂРѕРіРѕРґ</t><br /><t font='CenturyGothic'>Р”Рѕ Р°РІР°СЂРёРё СЃРµР»Рѕ Р±С‹Р»Рѕ С†РµРЅС‚СЂРѕРј СЃРµР»СЊСЃРѕРІРµС‚Р°. РЎРµР№С‡Р°СЃ Р¶Рµ РјРЅРѕРіРёРµ СЃС‚Р°Р»РєРµСЂС‹ РґРµР»Р°СЋС‚ РІ РљРѕСЂРѕРіРѕРґРµ РїСЂРёРІР°Р»С‹ Рё РЅР°Р·РЅР°С‡Р°СЋС‚ РІСЃС‚СЂРµС‡Рё. Р СЏРґРѕРј СЃ СЃРµР»РѕРј РЅР°С…РѕРґРёС‚СЃСЏ Р·Р°РІРѕРґСЃРєРѕР№ РєРѕРјРїР»РµРєСЃ, РєРѕС‚РѕСЂС‹Р№ РѕР±Р»СЋР±РѕРІР°Р»Рё РјСѓС‚Р°РЅС‚С‹.</t>";
		};
		class section7
		{
			nameSection="Р—Р°СЃРѕС…С€РµРµ РѕР·РµСЂРѕ";
			description="<t font='CenturyGothicBold'>Р—Р°СЃРѕС…С€РµРµ РѕР·РµСЂРѕ</t><br /><t font='CenturyGothic'>РљРѕРіРґР°-С‚Рѕ Р·РґРµСЃСЊ РґРµР№СЃС‚РІРёС‚РµР»СЊРЅРѕ Р±С‹Р»Рѕ РѕР·РµСЂРѕ, РєСѓРґР° СЃРѕР±РёСЂР°Р»РёСЃСЊ Р»СЋРґРё СЃ СЂР°Р·РЅС‹С… РґРµСЂРµРІРµРЅСЊ РѕС‚РґРѕС…РЅСѓС‚СЊ Рё РїРѕРєСѓРїР°С‚СЊСЃСЏ. РќРѕ СЃРѕ РІСЂРµРјРµРЅРµРј РѕРЅРѕ РІС‹СЃРѕС…Р»Рѕ, Р° РїРѕСЃР»Рµ Р°РІР°СЂРёРё СѓС‡РµРЅС‹Рµ РїСЂРѕРІРѕРґРёР»Рё Р·РґРµСЃСЊ РїРѕР»РµРІС‹Рµ РёСЃРїС‹С‚Р°РЅРёСЏ. Р“РѕРІРѕСЂСЏС‚, С‡С‚Рѕ Р—РѕРЅР° СЂР°Р·РіРЅРµРІР°Р»Р°СЃСЊ РЅР° СѓС‡РµРЅС‹С… Рё Р·РµРјР»РµС‚СЂСЏСЃРµРЅРёРµ СЂР°Р·СЂСѓС€РёР»Рѕ Р»Р°РіРµСЂСЊ. Рђ РЅР°РїРѕРјРёРЅР°РЅРёРµРј РѕР± СЌС‚РѕРј СЃР»СѓР¶Р°С‚ Р·РµРјР»СЏРЅС‹Рµ РїР»Р°СЃС‚С‹, Р±СѓРґС‚Рѕ РєР»С‹РєРё РјСѓС‚Р°РЅС‚Р°, РЅР°РІРёСЃС€РёРµ РЅР°Рґ Р±СѓРЅРєРµСЂР°РјРё.</t>";
		};
		class section8
		{
			nameSection="РЎС‚РµС‡Р°РЅРєР°";
			description="<t font='CenturyGothicBold'>РЎС‚РµС‡Р°РЅРєР°</t><br /><t font='CenturyGothic'>РђРєС‚РёРІРЅРѕРµ СЃРµР»СЊСЃРєРѕРµ С…РѕР·СЏР№СЃС‚РІРѕ, С€РєРѕР»Р° Рё, РґР°Р¶Рµ, Р¶РµР»РµР·РЅРѕРґРѕСЂРѕР¶РЅР°СЏ СЃС‚Р°РЅС†РёСЏ СЂСЏРґРѕРј. Р“РѕРІРѕСЂСЏС‚, РІ РЎС‚РµС‡Р°РЅРєРµ Р¶РёР» СЃС‡Р°СЃС‚Р»РёРІС‹Р№ РЅР°СЂРѕРґ. РЎРµР№С‡Р°СЃ Р¶Рµ С‚Р°Рј Р¶РёРІСѓС‚ РјСѓС‚Р°РЅС‚С‹ Рё РїСЂРёР·СЂР°РєРё, РєРѕС‚РѕСЂС‹С… РїРѕ РЅРѕС‡Р°Рј СЃР»С‹С€Р°С‚ Р·Р°РїР»СѓС‚Р°РІС€РёРµ СЃС‚Р°Р»РєРµСЂС‹. РљР°Р¶РґС‹Р№ РѕРїС‹С‚РЅС‹Р№ СЃС‚Р°Р»РєРµСЂ, РµСЃР»Рё СЃРїСЂРѕСЃРёС‚СЊ РµРіРѕ РѕР± СЌС‚РѕРј СЃРµР»Рµ, СЃРєР°Р¶РµС‚ РѕРґРЅСѓ С„СЂР°Р·Сѓ - РЅРё РІ РєРѕРµРј СЃР»СѓС‡Р°Рµ РЅРµ С…РѕРґРё РІ СЃРѕР¶Р¶РµРЅРЅСѓСЋ С†РµСЂРєРѕРІСЊ! РќРµРєРѕРіРґР° СЌС‚Сѓ С†РµСЂРєРѕРІСЊ СЃРѕР¶РіР»Рё РІ СЂР°РјРєР°С… Р±РѕСЂСЊР±С‹ СЃ СЂРµР»РёРіРёРѕР·РЅС‹РјРё РєСѓР»СЊС‚Р°РјРё. Р’ СЃР°РјСѓСЋ С‚РёС…СѓСЋ Рё, РєР°Р·Р°Р»РѕСЃСЊ Р±С‹, СЏСЃРЅСѓСЋ РЅРѕС‡СЊ, РјРѕР¶РЅРѕ РЅР°Р±Р»СЋРґР°С‚СЊ РєР°Рє СЌС‚Р° С†РµСЂРєРѕРІСЊ РІРЅРѕРІСЊ Рё РІРЅРѕРІСЊ СЃРіРѕСЂР°РµС‚ РІ СЏР·С‹РєР°С… РїР»Р°РјРµРЅРё, Р° Р»СЋРґРё РєСЂРёС‡Р°С‚, Р·Р°РїРµСЂС‚С‹Рµ РІ СЃРІСЏС‚РѕРј РјРµСЃС‚Рµ.</t>";
		};
		class section9
		{
			nameSection="Р—Р°РІРѕРґ вЂњР РѕСЃС‚РѕРєвЂќ";
			description="<t font='CenturyGothicBold'>Р—Р°РІРѕРґ вЂњР РѕСЃС‚РѕРєвЂќ</t><br /><t font='CenturyGothic'>РћРіСЂРѕРјРЅС‹Р№ Р·Р°РІРѕРґСЃРєРѕР№ РєРѕРјРїР»РµРєСЃ, РєРѕС‚РѕСЂС‹Р№ РѕР±Р»СЋР±РѕРІР°Р»Рё СЃС‚Р°Р»РєРµСЂС‹ Рё РѕС‚РєСЂС‹Р»Рё С‚Р°Рј СЃРІРѕР№ РЅРµР№С‚СЂР°Р»СЊРЅС‹Р№ Р±Р°СЂ. Р­С‚Рѕ РјРµСЃС‚Рѕ СЃС‡РёС‚Р°РµС‚СЃСЏ РѕС‚РЅРѕСЃРёС‚РµР»СЊРЅРѕ Р±РµР·РѕРїР°СЃРЅС‹Рј, РЅРѕ С‚РѕР»СЊРєРѕ СЃ РІРѕСЃС‚РѕС‡РЅРѕР№ СЃС‚РѕСЂРѕРЅС‹. Р—Р°РїР°Рґ Р¶Рµ Р·Р°РЅРёРјР°РµС‚ Р”РёРєР°СЏ С‚РµСЂСЂРёС‚РѕСЂРёСЏ, РєСѓРґР° РЅРµ РєР°Р¶РґС‹Р№ СЃС‚Р°Р»РєРµСЂ СЃСѓРЅРµС‚СЃСЏ. РџСЂРёС‡РёРЅР° СЌС‚РѕРјСѓ - РјСѓС‚Р°РЅС‚С‹, РєРѕС‚РѕСЂС‹Рµ РѕР±РѕСЃРЅРѕРІР°Р»РёСЃСЊ С‚Р°Рј РµС‰Рµ РґРѕ РїРѕСЏРІР»РµРЅРёСЏ РЅР° С‚РµСЂСЂРёС‚РѕСЂРёРё Р·Р°РІРѕРґР° Р»СЋРґРµР№. Р Р°РЅСЊС€Рµ СЃС‚Р°Р»РєРµСЂС‹ РµС‰Рµ РїС‹С‚Р°Р»РёСЃСЊ РІС‹РіРЅР°С‚СЊ СЃ С‚РѕР№ С‚РµСЂСЂРёС‚РѕСЂРёРё РјСѓС‚Р°РЅС‚РѕРІ, РЅРѕ СЃРѕ РІСЂРµРјРµРЅРµРј РѕСЃС‚Р°РІРёР»Рё РёС… РІ РїРѕРєРѕРµ. РљР°Рє РіРѕРІРѕСЂРёС‚ РјРµСЃС‚РЅС‹Р№ Р±Р°СЂС‹РіР° вЂњРѕРЅРё РЅР°СЃ РЅРµ С‚СЂРѕРіР°СЋС‚ Рё РјС‹ РёС… СѓР»РµР№ РЅРµ РІРѕСЂРѕС€РёРј, С‡С‚РѕР±С‹ Р±РµРґСѓ РЅРµ РЅР°РєР»РёРєР°С‚СЊвЂќ.</t>";
		};
		class section10
		{
			nameSection="Р Р›РЎ вЂњР”СѓРіР°вЂќ";
			description="<t font='CenturyGothicBold'>Р Р›РЎ вЂњР”СѓРіР°вЂќ</t><br /><t font='CenturyGothic'>Р—Р°РіРѕСЂРёР·РѕРЅС‚РЅР°СЏ Р Р°РґРёРѕР»РѕРєР°С†РёРѕРЅРЅР°СЏ СЃС‚Р°РЅС†РёСЏ вЂњР”СѓРіР°вЂќ. Р Р°РЅСЊС€Рµ СЌС‚Р° СЃС‚Р°РЅС†РёСЏ РјРѕРіР»Р° РѕР±РЅР°СЂСѓР¶РёС‚СЊ РїСѓСЃРєРё Р±Р°Р»Р»РёСЃС‚РёС‡РµСЃРєРёС… СЂР°РєРµС‚. РўРµРїРµСЂСЊ РѕР± СЌС‚РѕРј РјРµСЃС‚Рµ СЃС‚Р°Р»РєРµСЂС‹ РјРЅРѕРіРѕ СЂР°СЃСЃРєР°Р·С‹РІР°СЋС‚. Р“РѕРІРѕСЂСЏС‚, РѕРЅР° РјРѕР¶РµС‚ СЃРІРµСЃС‚Рё РїСЂРёР±Р»РёР¶Р°СЋС‰РµРіРѕСЃСЏ СЃ СѓРјР°. Р“СѓР» РІ СѓС€Р°С…, РЅРµСЃРєРѕРЅС‡Р°РµРјС‹Рµ РіРѕР»РѕРІРЅС‹Рµ Р±РѕР»Рё. РўРµ, РєС‚Рѕ С…РѕС‚СЊ СЂР°Р· РЅРѕС‡СЊСЋ РІРёРґРµР» вЂњР”СѓРіСѓвЂќ, СЂР°СЃСЃРєР°Р·С‹РІР°Р»Рё Рѕ РЅРµРєРѕРµРј РЎРµРІРµСЂРЅРѕРј РЎРёСЏРЅРёРё. РћРЅРѕ Р·Р°РІРѕСЂР°Р¶РёРІР°РµС‚ Рё РїСЂРёС‚СЏРіРёРІР°РµС‚ Рє СЃРµР±Рµ, Р±СѓРґС‚Рѕ РіРёРїРЅРѕР·РѕРј. РќРѕ РїСЂРёР±Р»РёР¶Р°С‚СЊСЃСЏ Рє РЅРµР№ РµС‰Рµ РЅРёРєС‚Рѕ РЅРµ СЂРёСЃРєРЅСѓР». Рђ РµСЃР»Рё Рё СЂРёСЃРєРЅСѓР», С‚Рѕ СѓР¶Рµ РЅРµ СЂР°СЃСЃРєР°Р¶РµС‚ РѕР± СЌС‚РѕРј.</t>";
		};
		class section11
		{
			nameSection="Р›РёРјР°РЅСЃРє";
			description="<t font='CenturyGothicBold'>Р›РёРјР°РЅСЃРє</t><br /><t font='CenturyGothic'>РЎС‚Р°Р»РєРµСЂС‹ С‡Р°СЃС‚Рѕ РІ СЂР°СЃСЃРєР°Р·Р°С… РЅР°Р·С‹РІР°СЋС‚ РµРіРѕ Р“РѕСЂРѕРґРѕРј РїСЂРёР·СЂР°РєРѕРІ. РџСѓСЃС‚С‹Рµ РіР°СЂР°Р¶Рё, Р±СЂРѕС€РµРЅРЅС‹Рµ РєРІР°СЂС‚РёСЂС‹, СѓР·РєРёРµ Рё РЅРµ РїСЂСЏРјС‹Рµ СѓР»РѕС‡РєРё. РљРѕРіРґР°-С‚Рѕ Р·РґРµСЃСЊ РєРёРїРµР»Р° Р¶РёР·РЅСЊ. РР·СЂРµРґРєР° РµРµ РјРѕР¶РЅРѕ СѓСЃР»С‹С€Р°С‚СЊ. РЎС‚Р°Р»РєРµСЂС‹ РіРѕРІРѕСЂСЏС‚, РµСЃР»Рё РїСЂРёСЃРµСЃС‚СЊ РЅР° СЃРєР°РјРµР№РєСѓ Рё РїСЂРёСЃР»СѓС€Р°С‚СЊСЃСЏ, С‚Рѕ СЃРїСѓСЃС‚СЏ РЅРµРєРѕС‚РѕСЂРѕРµ РІСЂРµРјСЏ РјРѕР¶РЅРѕ СѓСЃР»С‹С€Р°С‚СЊ РіРѕР»РѕСЃР° СЃРїРµС€Р°С‰РёС… Р»СЋРґРµР№, СЃРјРµС… РґРµС‚РµР№ РЅР° РїР»РѕС‰Р°РґРєРµ, РіСѓР» РёР·СЂРµРґРєР° РїСЂРѕРµР·Р¶Р°СЋС‰РёС… РјР°С€РёРЅ. РќРѕ СЃС‚РѕРёС‚ РЅР°СЂСѓС€РёС‚СЊ СЌС‚РѕС‚ РїРѕРєРѕР№, РєР°Рє РіРѕСЂРѕРґ РѕР±СЂСѓС€РёС‚СЃСЏ РЅР° С‚РµР±СЏ РіР°Р»Р»СЋС†РёРЅР°С†РёСЏРјРё. РњРЅРѕРіРёРµ РїРѕРіРѕРІР°СЂРёРІР°СЋС‚, С‡С‚Рѕ Р·РґРµСЃСЊ РѕР±РёС‚Р°РµС‚ РєРѕРЅС‚СЂРѕР»РµСЂ, РєРѕС‚РѕСЂС‹Р№ С‚Р°РєРёРјРё СЃРїРѕСЃРѕР±Р°РјРё РїСѓРіР°РµС‚ РїСЂРёС€РµРґС€РёС… РІ РµРіРѕ Р»РѕРіРѕРІРѕ.</t>";
		};
		class section12
		{
			nameSection="Р›РµСЃ-Р›Р°Р±РёСЂРёРЅС‚";
			description="<t font='CenturyGothicBold'>Р›РµСЃ-Р›Р°Р±РёСЂРёРЅС‚</t><br /><t font='CenturyGothic'>РћРїС‹С‚РЅС‹Рµ СЃС‚Р°Р»РєРµСЂС‹ СЃС‚Р°СЂР°СЋС‚СЃСЏ РґРµСЂР¶Р°С‚СЊСЃСЏ РѕС‚ СЌС‚РѕРіРѕ Р»РµСЃР° РїРѕРґР°Р»СЊС€Рµ. РћРЅРё РіРѕРІРѕСЂСЏС‚ Рѕ С‚РѕРј, С‡С‚Рѕ СЃРѕ СЃС‚РѕСЂРѕРЅС‹ РѕРЅ Рё РјРѕР¶РµС‚ РєР°Р·Р°С‚СЊСЃСЏ РѕР±С‹С‡РЅС‹Рј Р»РµСЃРѕРј, РЅРѕ РєР°Рє С‚РѕР»СЊРєРѕ С‚С‹ Р·Р°С…РѕРґРёС€СЊ РІ РµРіРѕ РіСЂР°РЅРёС†С‹, РґРµСЂРµРІСЊСЏ Р±СѓРґС‚Рѕ РІС‹СЃС‚СЂР°РёРІР°СЋС‚СЃСЏ СЃРїР»РѕС€РЅС‹Рј РЅРµ РїСЂРѕРіР»СЏРґРЅС‹Рј СЂСЏРґРѕРј. Р РІРѕС‚ РІСЂРѕРґРµ С‚С‹ РІС‹С€РµР» РЅР° С‚СЂРѕРїРёРЅРєСѓ, РЅРѕ РІС‹С…РѕРґ РЅР°Р№С‚Рё РЅРµ РјРѕР¶РµС€СЊ. Р”РѕР»РіРѕ Р±СѓРґРµС€СЊ РїР»СѓС‚Р°С‚СЊ РїРѕ Р»РµСЃСѓ, РґР°Р¶Рµ РїРѕРїСЂРѕР±СѓРµС€СЊ РІРµСЂРЅСѓС‚СЊСЃСЏ РЅР°Р·Р°Рґ - Р° РІС‹С…РѕРґР° РЅРµС‚. РљСЂСѓРіРѕРј РѕРґРЅРё РґРµСЂРµРІСЊСЏ. РњРЅРѕРіРѕ С‡РµРіРѕ РµС‰Рµ РіРѕРІРѕСЂСЏС‚ РѕР± СЌС‚РѕРј СЃС‚Р°Р»РєРµСЂС‹. Р’РѕС‚ С‚РѕР»СЊРєРѕ РЅРёРєС‚Рѕ РёР· РЅРёС… С‚Р°Рј Рё РЅРµ Р±С‹Р». Рђ РєС‚Рѕ Р±С‹Р», С‚РѕРіРѕ СѓР¶Рµ РґР°РІРЅРѕ РЅРµ РІРёРґРµР»Рё.</t>";
		};
		class section13
		{
			nameSection="РљР°СЂСЊРµСЂ";
			description="<t font='CenturyGothicBold'>РљР°СЂСЊРµСЂ</t><br /><t font='CenturyGothic'>Р Р°РЅСЊС€Рµ РІ СЌС‚РѕРј РјРµСЃС‚Рµ РґРѕР±С‹РІР°Р»Рё РёР·РІРµСЃС‚РЅСЏРє. РўРµРїРµСЂСЊ Р·РґРµСЃСЊ С‚РѕР»СЊРєРѕ РѕРіСЂРѕРјРЅС‹Рµ Р±СЂРѕС€РµРЅРЅС‹Рµ РјР°С€РёРЅС‹ Рё РІРµС‚РµСЂ, Р¶Р°Р»РѕР±РЅРѕ Р·Р°РІС‹РІР°СЋС‰РёР№ РјРµР¶РґСѓ РѕРіСЂРѕРјРЅС‹РјРё РєР°РјРЅСЏРјРё. РќР°С…РѕРґРёС‚СЊСЃСЏ Р·РґРµСЃСЊ РЅР°СЃС‚РѕР»СЊРєРѕ Р¶СѓС‚РєРѕ Рё РЅРµРїСЂРёСЏС‚РЅРѕ, С‡С‚Рѕ РґР°Р¶Рµ СЃР»РµРїРѕР№ РїРµСЃ Р»РёС€РЅРёР№ СЂР°Р· СЃСЋРґР° РјРѕСЂРґСѓ РЅРµ СЃСѓРЅРµС‚.</t>";
		};
		class section14
		{
			nameSection="РҐРёРјРёС‡РµСЃРєРёР№ Р·Р°РІРѕРґ";
			description="<t font='CenturyGothicBold'>РҐРёРјРёС‡РµСЃРєРёР№ Р·Р°РІРѕРґ</t><br /><t font='CenturyGothic'>РљРѕРіРґР°-С‚Рѕ СЌС‚РѕС‚ Р·Р°РІРѕРґ РїСЂРѕРёР·РІРѕРґРёР» РїР°С‚СЂРѕРЅС‹ РґР»СЏ РіР»Р°РґРєРѕСЃС‚РІРѕР»СЊРЅС‹С… СЂСѓР¶РµР№, РїРёСЂРѕС‚РµС…РЅРёС‡РµСЃРєРёРµ РёРіСЂСѓС€РєРё, С„РµР№РµСЂРІРµСЂРєРё. РЎС‚Р°Р»РєРµСЂС‹ РґСѓРјР°СЋС‚, С‡С‚Рѕ, РµСЃР»Рё РІСЃРєСЂС‹С‚СЊ Р·Р°РєСЂС‹С‚С‹Рµ РїРѕРјРµС‰РµРЅРёСЏ, С‚Рѕ РёРј РѕС‚РєСЂРѕРµС‚СЃСЏ С†РµР»С‹Р№ СЃРєР»Р°Рґ СЃ Р±РѕРµРїСЂРёРїР°СЃР°РјРё, Р°, РјРѕР¶РµС‚, Рё СЃ РѕСЂСѓР¶РёРµРј. РћРґРЅР°РєРѕ РјРЅРѕРіРёРµ СѓРІРµСЂСЏСЋС‚, С‡С‚Рѕ РїС‹С‚Р°Р»РёСЃСЊ СЌС‚Рѕ СЃРґРµР»Р°С‚СЊ, РЅРѕ РѕСЃС‚Р°РЅР°РІР»РёРІР°Р»Рё РёС… С€РѕСЂРѕС…Рё Р·Р° РґРІРµСЂСЊСЋ Рё С‚РёС…РѕРµ РјС‹С‡Р°РЅРёРµ.</t>";
		};
		class section15
		{
			nameSection="Р§РёСЃС‚РѕРіР°Р»РѕРІРєР°";
			description="<t font='CenturyGothicBold'>Р§РёСЃС‚РѕРіР°Р»РѕРІРєР°</t><br /><t font='CenturyGothic'>РќРµР±РѕР»СЊС€РѕРµ Р±СЂРѕС€РµРЅРЅРѕРµ СЃРµР»Рѕ, РїРѕСЃС‚СЂР°РґР°РІС€РµРµ РѕС‚ Р°РІР°СЂРёРё РІ 1986 РіРѕРґСѓ Р±РѕР»СЊС€Рµ РІСЃРµРіРѕ. РћРЅРѕ РѕРєР°Р·Р°Р»РѕСЃСЊ РІ С†РµРЅС‚СЂРµ СЂР°РґРёРѕР°РєС‚РёРІРЅРѕРіРѕ Р·Р°РіСЂСЏР·РЅРµРЅРёСЏ. РЎРїСѓСЃС‚СЏ РґРµСЃСЏС‚РєРё Р»РµС‚ С„РѕРЅ СЃРЅРёР·РёР»СЃСЏ, РЅРѕ СЃРµР»Рѕ РѕРєР°Р·Р°Р»РѕСЃСЊ РёР·Р»СЋР±Р»РµРЅРЅС‹Рј РјРµСЃС‚РѕРј РјСѓС‚Р°РЅС‚РѕРІ СЂР°Р·РЅС‹С… РјР°СЃС‚РµР№.</t>";
		};
		class section16
		{
			nameSection="РњРµСЂС‚РІС‹Р№ РіРѕСЂРѕРґ";
			description="<t font='CenturyGothicBold'>РњРµСЂС‚РІС‹Р№ РіРѕСЂРѕРґ</t><br /><t font='CenturyGothic'>РќРµР±РѕР»СЊС€РѕР№ РіРѕСЂРѕРґРѕРє, РІ РєРѕС‚РѕСЂРѕРј СЂР°РЅСЊС€Рµ Р¶РёР»Рё СЌРЅРµСЂРіРµС‚РёРєРё. РќР°Р·РІР°РЅРёРµ РµРјСѓ РґР°Р»Рё СЃС‚Р°Р»РєРµСЂС‹, С‚Р°Рє РєР°Рє РЅР° РєР°СЂС‚Р°С… РњС‘СЂС‚РІС‹Р№ РіРѕСЂРѕРґ РЅРµ Р±С‹Р» РѕС‚РјРµС‡РµРЅ. Рђ РіР»Р°РІРЅРѕРµ, С‚Р°Рј РЅРµС‚ РЅРё РґСѓС€Рё. РџРѕРіРѕРІР°СЂРёРІР°СЋС‚, С‡С‚Рѕ РЅРѕС‡СЊСЋ РјРѕР¶РЅРѕ СѓСЃР»С‹С€Р°С‚СЊ Р·РІСѓРєРё РєРѕР»РѕРєРѕР»СЊРЅРё, С…РѕС‚СЏ Р·РґР°РЅРёСЏ РЅРµС‚ РІ РњРµСЂС‚РІРѕРј РіРѕСЂРѕРґРµ. РўР°Рє Р¶Рµ, РµСЃС‚СЊ РїСЂРёРјРµС‚Р°: РµСЃР»Рё РїРѕРґРѕР№С‚Рё Рє РєРѕРѕРїС‚РѕСЂРіСѓ Рё РїСЂРѕ СЃРµР±СЏ РїСЂРѕС‡РёС‚Р°С‚СЊ С‚СЂРё СЂР°Р·Р° РЅР°РґРїРёСЃСЊ РЅР° Р·РґР°РЅРёРё, С‚Рѕ СЃР»РµРґСѓСЋС‰РёР№ РґРµРЅСЊ Р±СѓРґРµС‚ СЃС‡Р°СЃС‚Р»РёРІС‹Рј РЅР° С…Р°Р±Р°СЂ.</t>";
		};
		class section17
		{
			nameSection="Р—Р°С‚РѕРЅ";
			description="<t font='CenturyGothicBold'>Р—Р°С‚РѕРЅ</t><br /><t font='CenturyGothic'>Р СѓСЃР»Рѕ РІС‹СЃРѕС…С€РµР№ СЂРµРєРё. РџРѕРІСЃСЋРґСѓ Р»РµР¶Р°С‚ СЃС‚Р°СЂС‹Рµ РѕСЃРµРІС€РёРµ Р±Р°СЂР¶Рё, Р»РѕРґРєРё, СЃСѓС…РѕРіСЂСѓР·С‹. Р СЏРґРѕРј СЃ СЂСѓСЃР»РѕРј РЅР°С…РѕРґРёС‚СЃСЏ РЎС‚Р°РЅС†РёСЏ Р’РѕР·РІСЂР°С‚РЅРѕ-РќР°РєР»РѕРЅРЅРѕРіРѕ Р—РѕРЅРґРёСЂРѕРІР°РЅРёСЏ вЂњРљСЂСѓРівЂќ. РЎС‚Р°Р»РєРµСЂС‹ СЂР°СЃСЃРєР°Р·С‹РІР°СЋС‚, С‡С‚Рѕ РЅР° Р—Р°С‚РѕРЅРµ Р¶РёРІРµС‚ СЃС‚Р°СЂР°СЏ С…РёРјРµСЂР°. РЎС‚Р°СЂР°СЏ, РЅРѕ РІСЃРµ С‚Р°РєР°СЏ Р¶Рµ Р»РѕРІРєР°СЏ Рё СЃРёР»СЊРЅР°СЏ. Р”РЅРµРј РѕРЅР° СЃРїРёС‚ РІ РѕРґРЅРѕРј РёР· РїРѕСЃС‚СЂРѕРµРє, Р° РЅРѕС‡СЊСЋ РІС‹С…РѕРґРёС‚ РЅР° РѕС…РѕС‚Сѓ. Р РґР°Р№ Р—РѕРЅР° РЅРµ РѕРєР°Р·Р°С‚СЊСЃСЏ С‚РµР±Рµ РЅРѕС‡СЊСЋ РІ РµРµ РѕС…РѕС‚РЅРёС‡СЊРёС… СѓРіРѕРґСЊСЏС….</t>";
		};
		class section18
		{
			nameSection="РЎС‚Р°РЅС†РёСЏ РЇРЅРѕРІ";
			description="<t font='CenturyGothicBold'>РЎС‚Р°РЅС†РёСЏ РЇРЅРѕРІ</t><br /><t font='CenturyGothic'>Р–РµР»РµР·РЅРѕРґРѕСЂРѕР¶РЅР°СЏ СЃС‚Р°РЅС†РёСЏ СЋР¶РЅРµРµ РџСЂРёРїСЏС‚Рё. Р”Рѕ С‚РѕРіРѕ, РєР°Рє Р—РѕРЅР° РїРµСЂРµРєСЂС‹Р»Р° РїСѓС‚Рё СЃ Р‘РѕР»СЊС€РѕР№ Р—РµРјР»Рё, СЃС‚Р°Р»РєРµСЂС‹ РѕС‚РєСЂС‹Р»Рё Р·РґРµСЃСЊ РїРµСЂРµРІР°Р»РѕС‡РЅС‹Р№ РїСѓРЅРєС‚. РќРѕ РїСЂРѕРёР·РѕС€Р»Рѕ С‚Рѕ, С‡С‚Рѕ РґРѕ СЃРёС… РїРѕСЂ РѕС‚РїСѓРіРёРІР°РµС‚ РІСЃРµС… РѕС‚ СЌС‚РѕРіРѕ РјРµСЃС‚Р°. Р’ РѕРґРЅСѓ РёР· РЅРѕС‡РµР№ СЃС‚Р°Р»РєРµСЂС‹ СѓСЃР»С‹С€Р°Р»Рё РіСѓР» РїРѕРµР·РґР°. РЎС‚Р°РЅС†РёСЋ РѕР·Р°СЂРёР» РѕСЃР»РµРїР»СЏСЋС‰РёР№ СЃРІРµС‚ Рё РЅР° РѕРґРЅРѕРј РёР· РїСѓС‚РµР№ РѕСЃС‚Р°РЅРѕРІРёР»СЃСЏ РїРѕРµР·Рґ-РїСЂРёР·СЂР°Рє. РўРµ, РєС‚Рѕ РїРѕ РіР»СѓРїРѕСЃС‚Рё СЂРµС€РёР» Р·Р°Р№С‚Рё РІРЅСѓС‚СЂСЊ, РѕР±СЂР°С‚РЅРѕ СѓР¶Рµ РЅРµ РІС‹С€Р»Рё. РџРѕРµР·Рґ СѓРµС…Р°Р» СЃ РЅРµСЃС‡Р°СЃС‚РЅС‹РјРё, С‡С‚Рѕ РѕСЃС‚Р°Р»РёСЃСЊ РІРЅСѓС‚СЂРё Рё Р±РѕР»СЊС€Рµ РёС… РЅРёРєС‚Рѕ РЅРµ РІРёРґРµР». Рљ СѓС‚СЂСѓ РЅР° СЃС‚Р°РЅС†РёРё СѓР¶Рµ РЅРёРєРѕРіРѕ РЅРµ Р±С‹Р»Рѕ, С‚Р°Рє РєР°Рє РІСЃРµ РѕСЃС‚Р°РІС€РёРµСЃСЏ СЃС‚Р°Р»РєРµСЂС‹ Р±С‹СЃС‚СЂРѕ СЃРѕР±СЂР°Р»Рё СЃРІРѕРё РІРµС‰Рё Рё СѓС€Р»Рё СЃ СЌС‚РѕР№ РїСЂРѕРєР»СЏС‚РѕР№ СЃС‚Р°РЅС†РёРё.</t>";
		};
		class section19
		{
			nameSection="Р—Р°РІРѕРґ Р®РїРёС‚РµСЂ";
			description="<t font='CenturyGothicBold'>Р—Р°РІРѕРґ Р®РїРёС‚РµСЂ</t><br /><t font='CenturyGothic'>РљРѕРіРґР°-С‚Рѕ СЌС‚Рѕ Р±С‹Р» Р·Р°РІРѕРґ СЂР°РґРёРѕРїСЂРёР±РѕСЂРѕРІ. РЎС‚Р°Р»РєРµСЂС‹ РѕР±С…РѕРґСЏС‚ СЌС‚Рѕ РјРµСЃС‚Рѕ СЃС‚РѕСЂРѕРЅРѕР№. Р“РѕРІРѕСЂСЏС‚, С‡С‚Рѕ СЂР°РЅРµРµ Р·РґРµСЃСЊ СЂР°Р·СЂР°Р±Р°С‚С‹РІР°Р»Рё РєР°РєРѕРµ-С‚Рѕ РЅРµРёР·РІРµСЃС‚РЅРѕРµ РѕСЂСѓР¶РёРµ, РјРѕР¶РµС‚ РґР°Р¶Рµ РєР°РєСѓСЋ-С‚Рѕ РјР°СЃС€С‚Р°Р±РЅСѓСЋ Р±РѕРјР±Сѓ. РќРѕ С‚РµРїРµСЂСЊ СЌС‚Рѕ РјРµСЃС‚Рѕ РѕР±Р»СЋР±РѕРІР°Р»Рё РјСѓС‚Р°РЅС‚С‹, Р° СЃС‚СЂРµР»СЏС‚СЊ РїРѕ С‚РІР°СЂСЏРј СЂСЏРґРѕРј СЃ РџСЂРёРїСЏС‚СЊСЋ РЅРёРєС‚Рѕ РЅРµ С…РѕС‚РµР» Р±С‹.</t>";
		};
		class section20
		{
			nameSection="РќРѕРІР°СЏ РљСЂР°СЃРЅРёС†Р°";
			description="<t font='CenturyGothicBold'>РќРѕРІР°СЏ РљСЂР°СЃРЅРёС†Р°</t><br /><t font='CenturyGothic'>Р•С‰Рµ РґРѕ Р°РІР°СЂРёРё РІ 1986 РіРѕРґСѓ СЃРµР»Рѕ РїРѕРґРІРµСЂРіР»РѕСЃСЊ РїРѕР¶Р°СЂСѓ. РќРµ РІСЃРµ РґРѕРјР° СѓРґР°Р»РѕСЃСЊ РІРѕСЃСЃС‚Р°РЅРѕРІРёС‚СЊ. РўРµ СЃС‚Р°Р»РєРµСЂС‹, С‡С‚Рѕ РЅРѕС‡РµРІР°Р»Рё РІ СЌС‚РѕРј СЃРµР»Рµ, СЂР°СЃСЃРєР°Р·С‹РІР°СЋС‚, С‡С‚Рѕ РїРѕ РЅРѕС‡Р°Рј СЃРµР»Рѕ РѕР·Р°СЂСЏРµС‚СЃСЏ СЏСЂРєРѕР№ РІСЃРїС‹С€РєРѕР№ Рё РѕС…РІР°С‚С‹РІР°РµС‚СЃСЏ СЏР·С‹РєР°РјРё РїР»Р°РјРµРЅРё, Р±СѓРґС‚Рѕ РІСЃРїРѕРјРёРЅР°СЏ РїСЂРѕС€Р»РѕРµ.</t>";
		};
		class section21
		{
			nameSection="РЎС‚Р°СЂС‹Рµ РЁРµРїРµР»РёС‡Рё";
			description="<t font='CenturyGothicBold'>РЎС‚Р°СЂС‹Рµ РЁРµРїРµР»РёС‡Рё</t><br /><t font='CenturyGothic'>РљРѕРіРґР°-С‚Рѕ СЌС‚Рѕ СЃРµР»Рѕ Р±С‹Р»Рѕ С†РµРЅС‚СЂРѕРј СЃРµР»СЊСЃРєРѕРіРѕ С…РѕР·СЏР№СЃС‚РІР°. Р”РѕРјР°С€РЅРёР№ СЃРєРѕС‚, РѕРІРѕС‰РµРІРѕРґСЃС‚РІРѕ. РћРґРёРЅ СЃС‚Р°Р»РєРµСЂ СЂРµС€РёР» РїРѕРїСЂРѕР±РѕРІР°С‚СЊ, РєР°РєР°СЏ С‚Р°Рј РєР°СЂС‚РѕС€РєР°. РќРµРґРµР»СЋ РёР· РєСѓСЃС‚РѕРІ РЅРµ РІС‹Р»РµР·Р°Р». Р—Р°С‚Рѕ С‚РµРїРµСЂСЊ, РЅРµ РїСЂРѕРІРµСЂРёРІ, РіР°РґРѕСЃС‚СЊ РІ СЂРѕС‚ РЅРµ РІРѕР·СЊРјРµС‚.</t>";
		};
		class section22
		{
			nameSection="РќРѕРІРѕС€РµРїРµР»РёС‡Рё";
			description="<t font='CenturyGothicBold'>РќРѕРІРѕС€РµРїРµР»РёС‡Рё</t><br /><t font='CenturyGothic'>РџРѕСЃР»Рµ РџРµСЂРІРѕРіРѕ Р’Р·СЂС‹РІР° СѓС‡РµРЅС‹Рµ СѓСЃС‚СЂРѕРёР»Рё Р·РґРµСЃСЊ СЌРєСЃРїРµСЂРёРјРµРЅС‚Р°Р»СЊРЅСѓСЋ С„РµСЂРјСѓ, РЅР° РєРѕС‚РѕСЂРѕР№ РїСЂРѕРІРѕРґРёР»Рё РѕРїС‹С‚С‹ РїРѕ РѕС‡РёСЃС‚РєРµ РїРѕС‡РІС‹ РѕС‚ СЂР°РґРёРѕР°РєС‚РёРІРЅРѕРіРѕ Р·Р°РіСЂСЏР·РЅРµРЅРёСЏ Рё РІС‹СЂР°С‰РёРІР°Р»Рё СЃРєРѕС‚. РўРµРїРµСЂСЊ Р¶Рµ С…РѕРґСЏС‚ СЃР»СѓС…Рё, С‡С‚Рѕ РІ СЌС‚РѕРј СЃРµР»Рµ РѕР±РёС‚Р°СЋС‚ РјСѓС‚Р°РЅС‚С‹, РґРѕСЃРµР»Рµ РЅРµРІРёРґР°РЅРЅС‹Рµ. РћРЅРё РЅР°РјРЅРѕРіРѕ РѕРїР°СЃРЅРµРµ РєСЂРѕРІРѕСЃРѕСЃР° Рё Р±РѕР»РµРµ Р»РѕРІРєРёРµ, С‡РµРј С…РёРјРµСЂР°. РќРµ РєР°Р¶РґС‹Р№ СЃС‚Р°Р»РєРµСЂ СЃСѓРЅРµС‚СЃСЏ РїСЂРѕРІРµСЂСЏС‚СЊ СЌС‚Рё СЃР»СѓС…Рё.</t>";
		};
		class section23
		{
			nameSection="Р“РµРЅРµСЂР°С‚РѕСЂС‹";
			description="<t font='CenturyGothicBold'>Р“РµРЅРµСЂР°С‚РѕСЂС‹</t><br /><t font='CenturyGothic'>РџРѕРіРѕРІР°СЂРёРІР°СЋС‚, С‡С‚Рѕ РёРјРµРЅРЅРѕ РёР·-Р·Р° РіРµРЅРµСЂР°С‚РѕСЂРѕРІ РїСЂРѕРёР·РѕС€РµР» Р’С‚РѕСЂРѕР№ Р’Р·СЂС‹РІ, РёР·РјРµРЅРёРІС€РёР№ Р—РѕРЅСѓ. РћС‚РєСѓРґР° РїРѕС€Р»Рё СЌС‚Рё СЃР»СѓС…Рё - РЅРёРєРѕРјСѓ РЅРµРёР·РІРµСЃС‚РЅРѕ. РџСЂРёР±Р»РёР¶Р°С‚СЊСЃСЏ Рє РіРµРЅРµСЂР°С‚РѕСЂР°Рј РЅРёРєС‚Рѕ РЅРµ СЂРёСЃРєРѕРІР°Р». РЎРёР»СЊРЅС‹Р№ РіСѓР», РґР°РІСЏС‰РёР№ РЅР° РјРѕР·РіРё, РјРµСЂС‚РІР°СЏ Р·РµРјР»СЏ РІРѕРєСЂСѓРі, СЌС‚РѕРіРѕ РґРѕСЃС‚Р°С‚РѕС‡РЅРѕ, С‡С‚РѕР±С‹ РѕС‚РїСѓРіРЅСѓС‚СЊ Р»СЋР±РѕРіРѕ, РґР°Р¶Рµ Р±С‹РІР°Р»РѕРіРѕ СЃС‚Р°Р»РєРµСЂР°.</t>";
		};
		class section24
		{
			nameSection="РљРѕРїР°С‡Рё";
			description="<t font='CenturyGothicBold'>РљРѕРїР°С‡Рё</t><br /><t font='CenturyGothic'>РҐРѕРґРёР»Рё СЃР»СѓС…Рё, С‡С‚Рѕ РїРѕСЃР»Рµ РџРµСЂРІРѕРіРѕ Р’Р·СЂС‹РІР° СЌС‚Рѕ СЃРµР»Рѕ СЃСЂР°РІРЅСЏР»Рё СЃ Р·РµРјР»РµР№. РџСЂРёС‡РёРЅРѕР№ С‚РѕРјСѓ Р±С‹Р»Рѕ СЃРёР»СЊРЅРѕРµ СЂР°РґРёРѕР°РєС‚РёРІРЅРѕРµ Р·Р°РіСЂСЏР·РЅРµРЅРёРµ. РќРѕ, РєРѕРіРґР° СЃС‚Р°Р»РєРµСЂС‹ РїСЂРёС…РѕРґРёР»Рё СЃСЋРґР° РїРѕСЃР»Рµ Р’С‚РѕСЂРѕРіРѕ Р’Р·СЂС‹РІР°, СЌС‚Рѕ СЃРµР»Рѕ РїСЂРёРІРµС‚СЃС‚РІРµРЅРЅРѕ РѕС‚РєСЂС‹РІР°Р»Рѕ СЃРІРѕРё РїСѓСЃС‚С‹Рµ РґРѕРјР° РЅР°РІСЃС‚СЂРµС‡Сѓ РїСѓС‚РЅРёРєР°Рј. РњРЅРѕРіРёРµ РґРѕ СЃРёС… РїРѕСЂ РіР°РґР°СЋС‚, РґРµР№СЃС‚РІРёС‚РµР»СЊРЅРѕ Р»Рё СЃРµР»Рѕ Р±С‹Р»Рѕ РїРѕРіСЂРµР±РµРЅРЅРѕ РёР»Рё СЌС‚Рѕ РЅРµРёР·РІРµСЃС‚РЅР°СЏ Р°РЅРѕРјР°Р»РёСЏ, С€СѓС‚РєР° Р—РѕРЅС‹?</t>";
		};
		class section25
		{
			nameSection="Р”РµС‚СЃРєРёР№ Р»Р°РіРµСЂСЊ вЂњРР·СѓРјСЂСѓРґвЂќ";
			description="<t font='CenturyGothicBold'>Р”РµС‚СЃРєРёР№ Р»Р°РіРµСЂСЊ вЂњРР·СѓРјСЂСѓРґвЂќ</t><br /><t font='CenturyGothic'>РњРµСЃС‚Рѕ, РєРѕС‚РѕСЂРѕРµ СЂР°РЅРµРµ РґР°СЂРёР»Рѕ СЂР°РґРѕСЃС‚СЊ РјРЅРѕРіРёРј РґРµС‚СЏРј. РљРѕРіРґР°-С‚Рѕ СЌС‚РёРјРё РёРіСЂСѓС€РєР°РјРё, СЂР°Р·Р±СЂРѕСЃР°РЅРЅС‹РјРё РїРѕ РІСЃРµР№ Р·РµРјР»Рµ, РёРіСЂР°Р»Рё РґРµС‚Рё. РўРµРїРµСЂСЊ РѕРЅРё РЅРµ РґР°СЂСЏС‚ СЂР°РґРѕСЃС‚СЊ, Р° Р»РёС€СЊ РЅР°РіРѕРЅСЏСЋС‚ СѓР¶Р°СЃ РѕРґРЅРёРј СЃРІРѕРёРј РІРёРґРѕРј. РљР°Р¶РґС‹Р№ РїРѕСЂС‹РІ РІРµС‚СЂР° РѕС‚РґР°С‘С‚СЃСЏ РІ СЃС‚Р°СЂС‹С… СЂР¶Р°РІС‹С… РєР°С‡РµР»СЏС… РіСЂРѕРјРєРёРј Рё Р¶Р°Р»РѕР±РЅС‹Рј СЃРєСЂРёРїРѕРј, Р±СѓРґС‚Рѕ СѓРјРѕР»СЏСЏ РїСѓС‚РЅРёРєР° СЃРµСЃС‚СЊ Рё РІСЃРїРѕРјРЅРёС‚СЊ РґРµС‚СЃС‚РІРѕ. Р•СЃР»Рё РѕСЃС‚Р°С‚СЊСЃСЏ РІ СЌС‚РѕРј РјРµСЃС‚Рµ РЅР° РґРѕР»РіРѕ Рё РїСЂРёСЃР»СѓС€Р°С‚СЊСЃСЏ, С‚Рѕ РјРѕР¶РЅРѕ СѓСЃР»С‹С€Р°С‚СЊ СЃРјРµС… Рё РєСЂРёРєРё РёРіСЂР°СЋС‰РёС… РґРµС‚РµР№ СЂСЏРґРѕРј.</t>";
		};
		class section26
		{
			nameSection="Р›РµР»РµРІ";
			description="<t font='CenturyGothicBold'>Р›РµР»РµРІ</t><br /><t font='CenturyGothic'>РџРѕСЃР»Рµ Р°РІР°СЂРёРё РІ Р›РµР»РµРІ СЃРІРѕР·РёР»Рё РІСЃРµС… РѕС‚СЃС‚СЂРµР»СЏРЅРЅС‹С… РґРѕРјР°С€РЅРёС… Р¶РёРІРѕС‚РЅС‹С…, СЃРґРµР»Р°РІ РёР· СЃРµР»Р° Р±РёРѕР»РѕРіРёС‡РµСЃРєРёР№ РјРѕРіРёР»СЊРЅРёРє. РўРµ СЃС‚Р°Р»РєРµСЂС‹, РєРѕС‚РѕСЂС‹Рµ РѕСЃС‚Р°РІР°Р»РёСЃСЊ Р·РґРµСЃСЊ, СЂР°СЃСЃРєР°Р·С‹РІР°Р»Рё, С‡С‚Рѕ РЅРѕС‡СЊСЋ РјРµСЃС‚РЅРѕСЃС‚СЊ РѕР¶РёРІР°РµС‚. РџРѕРІСЃСЋРґСѓ СЃР»С‹С€Р°С‚СЃСЏ Р·РІСѓРєРё Р¶РёРІРѕР№ РїСЂРёСЂРѕРґС‹. Р›Р°Р№ СЃРѕР±Р°Рє, РјС‹С‡Р°РЅРёРµ РєРѕСЂРѕРІ, С†РѕРєР°РЅСЊРµ РєРѕРїС‹С‚ Р»РѕС€Р°РґРµР№. Р’РѕС‚ С‚РѕР»СЊРєРѕ РІС‹С…РѕРґРёС‚СЊ РёР· РґРѕРјР° РІ С‚Р°РєРёРµ РјРѕРјРµРЅС‚С‹ РЅРёРєС‚Рѕ РЅРµ СЃРѕРІРµС‚СѓРµС‚. Р“РѕРІРѕСЂСЏС‚, СЌС‚Рѕ Р—РѕРЅР° РёРіСЂР°РµС‚ СЃ Р»СЋРґСЊРјРё Рё РІС‹РјР°РЅРёРІР°РµС‚ РёС…, С‡С‚РѕР±С‹ РїРѕС‚РѕРј Р·Р°Р±СЂР°С‚СЊ РµРіРѕ СЃ СЃРѕР±РѕР№. РџРѕ РєСЂР°Р№РЅРµР№ РјРµСЂРµ С‚Рµ, РєС‚Рѕ РІС‹С…РѕРґРёР» РїРѕСЃРјРѕС‚СЂРµС‚СЊ РЅР° РѕР¶РёРІС€РµРµ СЃРµР»Рѕ, РѕР±СЂР°С‚РЅРѕ РІ РґРѕРј СѓР¶Рµ РЅРµ РІРѕР·РІСЂР°С‰Р°Р»РёСЃСЊ. Р Р±РѕР»СЊС€Рµ РёС… РЅРёРіРґРµ РЅРµ РІРёРґРµР»Рё.</t>";
		};
		class section27
		{
			nameSection="Р§РµСЂРЅРѕР±С‹Р»СЊ";
			description="<t font='CenturyGothicBold'>Р§РµСЂРЅРѕР±С‹Р»СЊ</t><br /><t font='CenturyGothic'>РџРѕСЃР»Рµ РџРµСЂРІРѕРіРѕ Р’Р·СЂС‹РІР° РІ РіРѕСЂРѕРґРµ СЂР°СЃРїРѕР»Р°РіР°Р»СЃСЏ С€С‚Р°Р± РІРѕРµРЅРЅС‹С…, РєРѕС‚РѕСЂС‹Рµ РєРѕРЅС‚СЂРѕР»РёСЂРѕРІР°Р»Рё РїСЂРѕС…РѕРґ РІ РіРѕСЂРѕРґ РѕС‚ РЅРµР»РµРіР°Р»СЊРЅС‹С… Р»РёС†. Р­РІР°РєСѓРёСЂРѕРІР°С‚СЊСЃСЏ СЌС‚Рё Р»СЋРґРё С‚Р°Рє Рё РЅРµ СЃРјРѕРіР»Рё - Р’С‚РѕСЂРѕР№ Р’Р·СЂС‹РІ Р·Р°СЃС‚Р°Р» РёС… РІСЂР°СЃРїР»РѕС…, СЃРґРµР»Р°РІ Р§РµСЂРЅРѕР±С‹Р»СЊ РёС… РјРѕРіРёР»РѕР№. Р“РѕРІРѕСЂСЏС‚, С‡С‚Рѕ, СЂР°СЃСЃРјР°С‚СЂРёРІР°СЏ РіРѕСЂРѕРґ РёР· Р±РёРЅРѕРєР»СЏ, РјРѕР¶РЅРѕ РЅР° РјРіРЅРѕРІРµРЅРёРµ Р·Р°РјРµС‚РёС‚СЊ РїРѕСЃС‚РѕРІРѕРіРѕ, РїСЂРѕРґРѕР»Р¶Р°СЋС‰РµРіРѕ РѕС…СЂР°РЅСЏС‚СЊ С‚РµСЂСЂРёС‚РѕСЂРёСЋ РѕС‚ РЅРµРїСЂРѕС€РµРЅРЅС‹С… РіРѕСЃС‚РµР№. РћРґРёРЅ РёР· СЃС‚Р°Р»РєРµСЂРѕРІ РєР°Р¶РґС‹Р№ РґРµРЅСЊ С…РѕРґРёР» Рє РіРѕСЂРѕРґСѓ, С‡С‚РѕР±С‹ СѓРІРёРґРµС‚СЊ РїСЂРёР·СЂР°Рє РїРѕСЃС‚РѕРІРѕРіРѕ. РџРѕРєР° РѕРґРЅР°Р¶РґС‹ РЅРµ РІРµСЂРЅСѓР»СЃСЏ РІРµСЃСЊ СЃРµРґРѕР№ Рё РёСЃРїСѓРіР°РЅРЅС‹Р№. РЎР»РѕРІР° СЃРєР°Р·Р°С‚СЊ РЅРµ РјРѕРі. РџРѕС‚РѕРј СѓР·РЅР°Р»Рё, С‡С‚Рѕ РѕРЅ СЂР°Р·РіР»СЏРґС‹РІР°Р» РѕРєРЅР° РІ Р±РёРЅРѕРєР»СЊ, Р° РІ РѕРґРЅРѕРј РёР· РЅРёС… СѓРІРёРґРµР» РґР°РІРЅРѕ РїРѕРєРѕР№РЅСѓСЋ Р±Р°Р±РєСѓ, РєРѕС‚РѕСЂР°СЏ РїСЂРёРІРµС‚Р»РёРІРѕ РїРѕРјР°С…Р°Р»Р° РµРјСѓ СЂСѓРєРѕР№.</t>";
		};
		class section28
		{
			nameSection="РџСЂРёРїСЏС‚СЊ";
			description="<t font='CenturyGothicBold'>РџСЂРёРїСЏС‚СЊ</t><br /><t font='CenturyGothic'>Р“РѕСЂРѕРґ-Р·РѕРјР±Рё, С‚Р°Рє РµРіРѕ РЅР°Р·С‹РІР°СЋС‚ СЃС‚Р°Р»РєРµСЂС‹. РћРїСѓСЃС‚РµРІС€РёРµ РјРЅРѕРіРѕСЌС‚Р°Р¶РєРё РіСЂСѓСЃС‚РЅРѕ РІС‹СЃСЏС‚СЃСЏ РЅР°Рґ РґРѕСЂРѕРіР°РјРё, Р±СЂРѕС€РµРЅРЅС‹Р№ С‚СЂР°РЅСЃРїРѕСЂС‚ СЃ РѕС‚РєСЂС‹С‚С‹РјРё РґРІРµСЂСЊРјРё РЅР° СѓР»РёС†Р°С… С‚Р°Рє Рё РїСЂРёРіР»Р°С€Р°РµС‚ РїСЂРёСЃРµСЃС‚СЊ Рё СѓРµС…Р°С‚СЊ РѕС‚СЃСЋРґР°. Р“РѕСЂРѕРґ, РєРѕС‚РѕСЂС‹Р№ РЅРµРєРѕРіРґР° Р·Р°С…Р»РµР±С‹РІР°Р»СЃСЏ РІ РїРѕС‚РѕРєР°С… Р»СЋРґСЃРєРѕР№ Р¶РёР·РЅРё, С‚РµРїРµСЂСЊ РЅР°РіРѕРЅСЏРµС‚ СѓР¶Р°СЃ СЃРІРѕРµР№ РїСѓСЃС‚РѕС‚РѕР№ Рё Р±РµР·РјРѕР»РІРЅРѕСЃС‚СЊСЋ. Рћ РџСЂРёРїСЏС‚Рё С…РѕРґРёС‚ СЃР»РёС€РєРѕРј РјРЅРѕРіРѕ СЃР»СѓС…РѕРІ, РЅРѕ РЅРµРєРѕС‚РѕСЂС‹Рµ СЃС‚Р°Р»РєРµСЂС‹ РІС‹РґРµР»СЏСЋС‚. РњРЅРѕРіРёРµ С…РѕРґРѕРєРё РЅР° РЎРµРІРµСЂ СЂР°СЃСЃРєР°Р·С‹РІР°СЋС‚, С‡С‚Рѕ СЃС‚РѕРёС‚ С‚РѕР»СЊРєРѕ РїСЂРёСЃР»СѓС€Р°С‚СЊСЃСЏ Рё РјРѕР¶РЅРѕ СѓСЃР»С‹С€Р°С‚СЊ, РєР°Рє РіРѕСЂРѕРґ РЅР°С‡РёРЅР°РµС‚ Р±РµСЃРїРѕСЂСЏРґРѕС‡РЅРѕ РЅР°С€РµРїС‚С‹РІР°С‚СЊ С‚РµР±Рµ СЃР»РѕРІР°. РќРµРєРѕС‚РѕСЂС‹Рµ РґР°Р¶Рµ СЃС…РѕРґРёР»Рё РѕС‚ СЌС‚РѕРіРѕ СЃ СѓРјР° Рё РІС‹СЃС‚СЂРµР»РёРІР°Р»Рё РїСѓР»СЋ СЃРµР±Рµ РІ Р»РѕР±. РўР°Рє Р¶Рµ РґСѓСЂРЅР°СЏ СЃР»Р°РІР° РёРґРµС‚ РѕР± РёР·РІРµСЃС‚РЅРѕРј РљРѕР»РµСЃРµ РѕР±РѕР·СЂРµРЅРёСЏ. Р•СЃР»Рё РґРѕР»РіРѕ СЃРјРѕС‚СЂРµС‚СЊ, РєР°Рє РїРѕРґ РїРѕСЂС‹РІР°РјРё РІРµС‚СЂР° РїРѕС€Р°С‚С‹РІР°СЋС‚СЃСЏ РєР°Р±РёРЅРєРё, С‚Рѕ СЃР°Рј РЅРµ Р·Р°РјРµС‚РёС€СЊ, РєР°Рє РЅР°С‡РЅРµС€СЊ РїСЂРёР±Р»РёР¶Р°С‚СЊСЃСЏ Рє РєРѕР»РµСЃСѓ, РїРѕРґ РєРѕС‚РѕСЂС‹Рј С‚РµР±СЏ СѓР¶Рµ Р¶РґРµС‚ РЅРµР·Р°РјРµС‚РЅР°СЏ Р°РЅРѕРјР°Р»РёСЏ, РіРѕС‚РѕРІР°СЏ Рє РїРёСЂС€РµСЃС‚РІСѓ.</t>";
		};
		class section29
		{
			nameSection="Р—Р°РїР°РґРЅС‹Р№ Рё Р’РѕСЃС‚РѕС‡РЅС‹Р№ Р Р°РґР°СЂС‹";
			description="<t font='CenturyGothicBold'>Р—Р°РїР°РґРЅС‹Р№ Рё Р’РѕСЃС‚РѕС‡РЅС‹Р№ Р Р°РґР°СЂС‹</t><br /><t font='CenturyGothic'>РўРµ СЃС‚Р°Р»РєРµСЂС‹, РєРѕС‚РѕСЂС‹Рµ СЂРµС€РёР»Рё РїСЂРёР±Р»РёР·РёС‚СЊСЃСЏ Рє СЌС‚РѕРјСѓ РјРµСЃС‚Сѓ, РЅР°С‡РёРЅР°Р»Рё Р¶Р°Р»РѕРІР°С‚СЊСЃСЏ РЅР° СЃРёР»СЊРЅС‹Рµ РіРѕР»РѕРІРЅС‹Рµ Р±РѕР»Рё Рё РіР°Р»Р»СЋС†РёРЅР°С†РёРё. Р§РµРј РґРѕР»СЊС€Рµ С‚С‹ СЃС‚РѕРёС€СЊ РЅР° РѕРґРЅРѕРј РјРµСЃС‚Рµ, С‚РµРј СЃРёР»СЊРЅРµРµ РїР»Р°РІСЏС‚СЃСЏ С‚РІРѕРё РјРѕР·РіРё. РњРЅРѕРіРёРµ РёР· С‚РµС…, РєС‚Рѕ РЅРµ СЃСѓРјРµР» РІС‹Р№С‚Рё СЃ С‚РµСЂСЂРёС‚РѕСЂРёРё, Р±С‹СЃС‚СЂРѕ СЃС…РѕРґРёР»Рё СЃ СѓРјР°. Р‘СѓРґС‚Рѕ Р·РѕРјР±РёСЂРѕРІР°РЅРЅС‹Рµ, РѕРЅРё РЅР°С‡РёРЅР°Р»Рё РЅРµС‡Р»РµРЅРѕСЂР°Р·РґРµР»СЊРЅРѕ СЂР°Р·РіРѕРІР°СЂРёРІР°С‚СЊ Рё СЃС‚СЂРµР»СЏС‚СЊ РІРѕ РІСЃРµ, С‡С‚Рѕ РґРІРёР¶РµС‚СЃСЏ.</t>";
		};
	};
	class mainSection4
	{
		nameSection="SectionTest4";
		description="";
		class section2
		{
			nameSection="РЎР»РёР·СЊ";
			description="<t font='CenturyGothicBold'>РЎР»РёР·СЊ</t><br /><t font='CenturyGothic'>РџРѕРІРµСЂС…РЅРѕСЃС‚СЊ Р°СЂС‚РµС„Р°РєС‚Р° РїРѕРєСЂС‹С‚Р° С‚РѕР»СЃС‚С‹Рј СЃР»РѕРµРј РЅРµРїРѕРЅСЏС‚РЅРѕР№ СЃР»РёР·Рё, РІС‹Р·С‹РІР°СЏ РЅР° РєРѕР¶Рµ РїСЂРёРєРѕСЃРЅСѓРІС€РµРіРѕСЃСЏ РЅРµР·РЅР°С‡РёС‚РµР»СЊРЅРѕ СЂР°Р·РґСЂР°Р¶РµРЅРёРµ. Р’РїСЂРѕС‡РµРј, РµРіРѕ РјРѕР¶РЅРѕ СЃРјРµР»Рѕ РєР»Р°СЃС‚СЊ Рє РґСЂСѓРіРёРј РїСЂРµРґРјРµС‚Р°Рј - РЅРµРїРѕРЅСЏС‚РЅР°СЏ СЃР»РёР·СЊ Р±С‹СЃС‚СЂРѕ РёСЃРїР°СЂСЏРµС‚СЃСЏ, РѕС‚РґР°Р»СЏСЏСЃСЊ РѕС‚ СЃР°РјРѕРіРѕ Р°СЂС‚РµС„Р°РєС‚Р°. Р’ СЂСѓРєРё РµРіРѕ Р»СѓС‡С€Рµ РЅРµ Р±СЂР°С‚СЊ - РєСЂРѕРјРµ РЅРµРїСЂРёСЏС‚РЅС‹С… РѕС‰СѓС‰РµРЅРёР№ РµРіРѕ РјРѕР¶РЅРѕ РїСЂРѕСЃС‚Рѕ СѓСЂРѕРЅРёС‚СЊ, Р±Р»Р°РіРѕ РѕРЅ РѕС‡РµРЅСЊ СЃРєРѕР»СЊР·РєРёР№. РџРёС‚Р°С‚СЊСЃСЏ РїРѕРґРѕР±РЅРѕР№ Р¶РёР¶РµР№ РєСЂР°Р№РЅРµ РЅРµ СЂРµРєРѕРјРµРЅРґСѓРµС‚СЃСЏ. </t>";
		};
		class section3
		{
			nameSection="Р–РµР»СѓРґРѕРє";
			description="<t font='CenturyGothicBold'>Р–РµР»СѓРґРѕРє</t><br /><t font='CenturyGothic'>РњСЏРіРєРёР№ Рё РїРѕРґР°С‚Р»РёРІС‹Р№, СЌС‚РѕС‚ Р°СЂС‚РµС„Р°РєС‚ РїРѕРґРѕР·СЂРёС‚РµР»СЊРЅРѕ РЅР°РїРѕРјРёРЅР°РµС‚ С‡РµР»РѕРІРµС‡РµСЃРєРёР№ Р¶РµР»СѓРґРѕРє, РїРѕРєСЂС‹С‚С‹Р№ Р·РµР»РµРЅС‹Рј РјС…РѕРј. РЎС‚СЂР°С€РЅРѕ РїСЂРµРґСЃС‚Р°РІРёС‚СЊ РїСЂРё РєР°РєРёС… СѓСЃР»РѕРІРёСЏС… РјРѕР¶РЅРѕ РїРѕР»СѓС‡РёС‚СЊ РЅРµС‡С‚Рѕ РїРѕРґРѕР±РЅРѕРµ. Р•СЃР»Рё Р·Р°Р¶Р°С‚СЊ РµРіРѕ РІ СЂСѓРєРµ, С‚Рѕ РјРѕР¶РЅРѕ РЅР°С‰СѓРїР°С‚СЊ СЂР°Р·Р»РёС‡РЅС‹Рµ РїСЂРµРґРјРµС‚С‹ РІРЅСѓС‚СЂРё, РїРѕСЂРѕР№ СЃР°РјРѕР№ РЅРµРѕР±С‹С‡РЅРѕР№ С„РѕСЂРјС‹. Р Р°Р·СЂРµР·Р°С‚СЊ РѕР±С‹С‡РЅС‹Рј РЅРѕР¶РѕРј Р°СЂС‚РµС„Р°РєС‚ РЅРµ РїРѕР»СѓС‡РёС‚СЊСЃСЏ, С‚Р°Рє С‡С‚Рѕ РµРіРѕ СЃРѕРґРµСЂР¶РёРјРѕРµ РѕСЃС‚Р°РµС‚СЃСЏ С‚Р°Р№РЅРѕР№. Р“РѕРІРѕСЂСЏС‚ РѕРґРЅСѓ СѓРјРµР»СЊС†Сѓ СЌС‚Рѕ СѓРґР°Р»РѕСЃСЊ, С‡С‚Рѕ РїСЂРёРІРµР»Рѕ Рє СѓРЅРёС‡С‚РѕР¶РµРЅРёСЋ РѕР±СЂР°Р·С†Р° Рё РјРЅРѕРіРѕС‡РёСЃР»РµРЅРЅС‹Рј С‚СЂР°РІРјР°Рј РЅРµСѓРґР°С‡РЅРѕРіРѕ СЌРєСЃРїРµСЂРёРјРµРЅС‚Р°С‚РѕСЂР°. </t>";
		};
		class section4
		{
			nameSection="Р–РµРјС‡СѓРі";
			description="<t font='CenturyGothicBold'>Р–РµРјС‡СѓРі</t><br /><t font='CenturyGothic'>Р”РІРµ РЅРµР±РѕР»СЊС€РёРµ СЂР°РєРѕРІРёРЅС‹, РѕРєСЂСѓР¶Р°СЋС‰РёРµ Р°СЂС‚РµС„Р°РєС‚Р°, РЅР°РїРѕРјРёРЅР°СЋС‚ РѕР±С‹С‡РЅС‹С… РјРѕР»Р»СЋСЃРєРѕРІ. РћР±Р»Р°РґР°С‚РµР»СЏРј С…РѕСЂРѕС€РµРіРѕ РѕР±РѕРЅСЏРЅРёСЏ РёРЅРѕРіРґР° СѓРґР°РµС‚СЃСЏ СѓС‡СѓСЏС‚СЊ Р»РµРіРєРёР№ РјРѕСЂСЃРєРѕР№ Р·Р°РїР°С…, С‡С‚Рѕ РѕРєСЂСѓР¶Р°РµС‚ СЌС‚Рѕ РѕР±СЂР°Р·РѕРІР°РЅРёРµ. Р’РѕР·РјРѕР¶РЅРѕ СЌС‚Рѕ Р±С‹ РїРѕРјРѕРіР»Рѕ РІ РїРѕРёСЃРєР°С…, РµСЃР»Рё РЅРµ Р»РµРіРєРёР№ СЃРІРµС‚, РёРґСѓС‰РёР№ РёР· СЃР°РјРѕРіРѕ С†РµРЅС‚СЂР°, РїРѕСЌС‚РѕРјСѓ РѕР±С‹С‡РЅРѕ РґРѕСЃС‚Р°С‚РѕС‡РЅРѕ Р»РёС€СЊ С…РѕСЂРѕС€РµРЅСЊРєРѕ РїСЂРёРіР»СЏРґРµС‚СЊСЃСЏ. РЈРІРµСЂСЏСЋС‚, С‡С‚Рѕ РµСЃР»Рё РµРіРѕ РѕРєСѓРЅСѓС‚СЊ РІ РІРѕРґСѓ. С‚Рѕ РјРѕР¶РЅРѕ СЃРґРµР»Р°С‚СЊ РµС‘ СЃРѕР»РµРЅРѕР№. Р’РїСЂРѕС‡РµРј, РІР»РёСЏРЅРёРµ РѕР±СЂР°Р·С†Р° С†РµР»РёРєРѕРј РµС‰Рµ РЅРµ РёР·СѓС‡РµРЅРѕ, РїРѕСЌС‚РѕРјСѓ РґР»СЏ С‚Р°РєРёС… С†РµР»РµР№ Р»СѓС‡С€Рµ РїРѕРґРѕР№РґРµС‚ РѕР±С‹С‡РЅР°СЏ СЃРѕР»СЊ. </t>";
		};
		class section7
		{
			nameSection="Р“РЅРёР»СЊ";
			description="<t font='CenturyGothicBold'>Р“РЅРёР»СЊ</t><br /><t font='CenturyGothic'>РќРµСЃРјРѕС‚СЂСЏ РЅР° С†РµРЅРЅРѕСЃС‚СЊ Р°СЂС‚РµС„Р°РєС‚РѕРІ, Р·Р°РїР°С… СЌС‚РѕРіРѕ РѕР±СЂР°Р·С†Р° РёРЅРѕРіРґР° РІС‹РЅСѓР¶РґР°РµС‚ РёР·Р±Р°РІР»СЏС‚СЊСЃСЏ РѕС‚ РїРѕРґРѕР±РЅРѕР№ РЅР°С…РѕРґРєРё. РџРѕСЂРѕР№ РІ РїРѕРґРѕР±РЅРѕРј Р°СЂС‚РµС„Р°РєС‚Рµ РІРёРґРЅРµСЋС‚СЃСЏ С‡РµР»РѕРІРµС‡РµСЃРєРёРµ РєРѕСЃС‚Рё, РїРѕСЌС‚РѕРјСѓ РЅРѕСЃРёС‚СЊ РїРѕРґРѕР±РЅРѕРµ РїСЂРѕСЃС‚Рѕ Р°РјРѕСЂР°Р»СЊРЅРѕ. РўРѕСЂРіРѕРІР°С‚СЊ С‚РµР»Р°РјРё РїРѕРіРёР±С€РёС… - Р·Р° РїРѕРґРѕР±РЅРѕРµ РјРѕР¶РµС‚ СѓРіСЂРѕР¶Р°С‚СЊ СЃРєРѕСЂР°СЏ СЂР°СЃРїР»Р°С‚Р°. Р’РїСЂРѕС‡РµРј, РґРµРјРѕРЅСЃС‚СЂР°С†РёСЏ Р“РЅРёР»Рё РјРѕР¶РµС‚ РёРјРµС‚СЊ Рё РїРѕР»РѕР¶РёС‚РµР»СЊРЅС‹Рµ СЂРµР·СѓР»СЊС‚Р°С‚С‹. Р’Р»Р°РґРµР»РµС† РѕР±СЂР°Р·С†Р° РєР°Рє Р±С‹ РїРѕРєР°Р·С‹РІР°РµС‚, С‡С‚Рѕ РµРіРѕ РЅРµ РёРЅС‚РµСЂРµСЃСѓСЋС‚ С‚Р°РєРёРµ РјРµР»РѕС‡Рё, РєР°Рє РєР°РєРѕР№-С‚Рѕ Р·Р°РїР°С… Рё С‡СѓР¶РёРµ РјРѕСЂР°Р»СЊРЅС‹Рµ РїСЂРёРЅС†РёРїС‹. </t>";
		};
		class section9
		{
			nameSection="РњР°РјРёРЅС‹ Р‘СѓСЃС‹";
			description="<t font='CenturyGothicBold'>РњР°РјРёРЅС‹ Р‘СѓСЃС‹</t><br /><t font='CenturyGothic'>РР·-Р·Р° СЃРІРѕРµР№ С„РѕСЂРјС‹ СЃС‚Р°Р»РєРµСЂС‹ С‡Р°СЃС‚Рѕ РїС‹С‚Р°СЋС‚СЃСЏ РЅР°РґРµС‚СЊ Р‘СѓСЃС‹ С‚Рѕ РЅР° СЂСѓРєРё. С‚Рѕ РЅР° С€РµСЋ. РРЅРѕРіРґР° РґР°Р¶Рµ РёСЃРїРѕР»СЊР·СѓСЋС‚ РєР°Рє С‡РµС‚РєРё. Рљ СЃРѕР¶Р°Р»РµРЅРёСЋ РїРѕРґРѕР±РЅС‹Рµ РІС‹С…РѕРґРєРё РјРѕРіСѓС‚ СЃС‚Р°С‚СЊ РїСЂРёС‡РёРЅРѕР№ С‡Р°СЃС‚РёС‡РЅРѕРіРѕ РїР°СЂР°Р»РёС‡Р°, РєРѕС‚РѕСЂС‹Р№, РІРїСЂРѕС‡РµРј, Р±С‹СЃС‚СЂРѕ РїСЂРѕС…РѕРґРёС‚. РџРѕРїС‹С‚РєРё РёСЃРїРѕР»СЊР·РѕРІР°С‚СЊ Р°СЂС‚РµС„Р°РєС‚ РІ РєР°С‡РµСЃС‚РІРµ РѕР±РµР·Р±РѕР»РёРІР°СЋС‰РµРіРѕ РёР»Рё СЃРїРѕСЃРѕР±Р° РѕРіР»СѓС€РёС‚СЊ РїСЂРѕС‚РёРІРЅРёРєР° РїРѕР»РЅРѕСЃС‚СЊСЋ РїСЂРѕРІР°Р»РёР»РёСЃСЊ, РїРѕСЃРєРѕР»СЊРєСѓ СЌС„С„РµРєС‚ РїР°СЂР°Р»РёС‡Р° СЃР»РёС€РєРѕРј СЃР»Р°Р±.  РРґРµР°Р»СЊРЅР°СЏ С„РѕСЂРјР° вЂњР±СѓСЃРёРЅРѕРєвЂќ Рё РѕР±С‰РёР№ РЅРµРѕР±С‹С‡РЅС‹Р№ РІРёРґ РїРѕРґРґРµСЂР¶РёРІР°СЋС‚ РёРЅС‚РµСЂРµСЃ РІРЅРµ Р—РѕРЅС‹, РїРѕСЌС‚РѕРјСѓ РЅР° Р°СЂС‚РµС„Р°РєС‚ СЃС‚Р°Р±РёР»СЊРЅС‹Р№ СЃРїСЂРѕСЃ. </t>";
		};
		class section10
		{
			nameSection="РљРѕРєРѕРЅ";
			description="<t font='CenturyGothicBold'>РљРѕРєРѕРЅ</t><br /><t font='CenturyGothic'>РџРѕРєСЂС‹С‚С‹Р№ РІСЏР·РєРѕР№ РїР°СѓС‚РёРЅРѕР№, Р°СЂС‚РµС„Р°РєС‚ СЃРІСЏР·С‹РІР°СЋС‚ СЃ РїР°СѓРєР°РјРё, С‡С‚Рѕ РёРЅРѕРіРґР° РІСЃС‚СЂРµС‡Р°СЋС‚СЃСЏ РІ Р—РѕРЅРµ. РСЃС‚РёРЅРЅС‹Рµ РїСЂРёС‡РёРЅС‹ РїРѕСЏРІР»РµРЅРёСЏ Р°СЂС‚РµС„Р°РєС‚Р° РѕСЃС‚Р°СЋС‚СЃСЏ Р·Р°РіР°РґРєРѕР№, РѕРґРЅР°РєРѕ С‡Р°СЃС‚Рѕ РЅР° РїРѕРІРµСЂС…РЅРѕСЃС‚Рё РѕР±СЂР°Р·С†РѕРІ РјРѕР¶РЅРѕ СѓРІРёРґРµС‚СЊ РјРµСЂС‚РІС‹С… РЅР°СЃРµРєРѕРјС‹С… Рё СЂР°Р·РЅС‹Р№ РјСѓСЃРѕСЂ. РќРµРєРѕС‚РѕСЂС‹Рµ РѕР±СЂР°Р·С†С‹ РЅР°СЃС‚РѕР»СЊРєРѕ РїР»РѕС‚РЅРѕ РїСЂРёР»РёРїР°СЋС‚ Рє СЂСѓРєР°Рј, С‡С‚Рѕ РјРѕРіСѓС‚ СЃС‚Р°С‚СЊ СЃРµСЂСЊРµР·РЅРѕР№ РїСЂРѕР±Р»РµРјРѕР№. Р‘С‹Р»Рё РїРѕРїС‹С‚РєРё РёСЃРїРѕР»СЊР·РѕРІР°С‚СЊ Р°СЂС‚РµС„Р°РєС‚ РєР°Рє Р»РёРїСѓС‡РєСѓ, РЅРѕ РїРѕСЃР»Рµ РІС‹Р±СЂРѕСЃР° СЃРІРѕР№СЃС‚РІРѕ Р±С‹СЃС‚СЂРѕ С‚РµСЂСЏРµС‚СЃСЏ. РђСЂС‚РµС„Р°РєС‚ Р»РµРіРєРѕ СЂР°Р·СЂСѓС€РёС‚СЊ, РїРѕСЌС‚РѕРјСѓ РѕР±СЂР°С‰Р°С‚СЊСЃСЏ СЃ РЅРёРј СЃР»РµРґСѓРµС‚ РєСЂР°Р№РЅРµ РѕСЃС‚РѕСЂРѕР¶РЅРѕ. </t>";
		};
		class section16
		{
			nameSection="РњР°РіРјР°";
			description="<t font='CenturyGothicBold'>РњР°РіРјР°</t><br /><t font='CenturyGothic'>РЎР°РјР° СЃРµСЂРґС†РµРІРёРЅР° РѕРіРЅРµРЅРЅС‹С… Р°РЅРѕРјР°Р»РёР№. РР·-Р·Р° РІС‹Р±СЂРѕСЃРѕРІ РѕРЅРё С‡Р°СЃС‚Рѕ С‚РµСЂСЏСЋС‚ СЃРІРѕСЋ СЃРёР»Сѓ, РґРѕ С‚РµС… РїРѕСЂ РїРѕРєР° РѕС‚ РјРѕРіСѓС‡РµРіРѕ Р±РµСЃРєРѕРЅРµС‡РЅРѕРіРѕ РѕРіРЅРµРЅРЅРѕРіРѕ РїРѕС‚РѕРєР° РЅРµ РѕСЃС‚Р°РЅРµС‚СЃСЏ СЌС‚РѕС‚ СЂР°СЃРєР°Р»РµРЅРЅС‹Р№ РѕР±СЂР°Р·РµС†. РџРѕСЃР»Рµ РґРѕР¶РґРµР№ Р°СЂС‚РµС„Р°РєС‚ РѕСЃС‚С‹РІР°РµС‚. Рё СЃС‚Р°РЅРѕРІРёС‚СЃСЏ РјРµРЅРµРµ Р·Р°РјРµС‚РЅС‹Рј. РљСѓРїР°С‚СЊСЃСЏ, РґРµСЂР¶Р° РµРіРѕ РІ РѕР±С‹С‡РЅРѕРј СЂСЋРєР·Р°РєРµ РЅРµР¶РµР»Р°С‚РµР»СЊРЅРѕ, РїРѕСЃРєРѕР»СЊРєСѓ РјРѕР¶РµС‚ РїСЂРёР№С‚Рё РІ РЅРµРіРѕРґРЅРѕСЃС‚СЊ. РћРєРѕРЅС‡Р°С‚РµР»СЊРЅРѕ РѕСЃС‚С‹РІС€РёР№ Р°СЂС‚РµС„Р°РєС‚ СЂР°Р·РІР°Р»РёРІР°С‚СЊСЃСЏ РЅР° С‡Р°СЃС‚Рё, РєРѕС‚РѕСЂС‹Рµ РЅРµ РїСЂРµРґСЃС‚Р°РІР»СЏСЋС‚ РЅРёРєР°РєРѕР№ С†РµРЅРЅРѕСЃС‚Рё.</t>";
		};
		class section17
		{
			nameSection="РџСЂСѓР¶РёРЅР°";
			description="<t font='CenturyGothicBold'>РџСЂСѓР¶РёРЅР°</t><br /><t font='CenturyGothic'>Р”РѕСЃС‚Р°С‚РѕС‡РЅРѕ СЃРёР»СЊРЅС‹Р№ С‡РµР»РѕРІРµРє РјРѕР¶РµС‚ СЃР¶Р°С‚СЊ Р°СЂС‚РµС„Р°РєС‚, СЃРјРµС‰Р°СЏ РѕР±Р° РґРёСЃРєР° Рє РґСЂСѓРі РґСЂСѓРіСѓ. РР·-Р·Р° РґР°РІР»РµРЅРёСЏ Р°СЂС‚РµС„Р°РєС‚ РЅР°С‡РёРЅР°РµС‚ РїСЂРёСЏС‚РЅРѕ РІРёР±СЂРёСЂРѕРІР°С‚СЊ, Рё СЃР»РµРіРєР° РјРµРЅСЏРµС‚ СЃРІРѕР№ С†РІРµС‚, СЃС‚Р°РЅРѕРІСЏСЃСЊ СЃРµСЂРѕ-С‡РµСЂРЅС‹Рј. РќР°СѓС‡РЅС‹Рµ СѓРјС‹ СЃС‡РёС‚Р°СЋС‚ СЌС‚Рѕ С‡СѓРґРµСЃРЅС‹Рј СЏРІР»РµРЅРёРµРј, РґР»СЏ РѕР±С‹С‡РЅРѕРіРѕ Р¶Рµ С‡РµР»РѕРІРµРєР° СЌС‚Рѕ С‚РѕР»СЊРєРѕ Р±Р°Р»РѕРІСЃС‚РІРѕ. РџРѕРґРѕР±РЅС‹Рµ РѕРїС‹С‚С‹ СЃС‚Р°РІРёС‚СЊ РЅРµ СЂРµРєРѕРјРµРЅРґСѓРµС‚СЃСЏ, РїРѕСЃРєРѕР»СЊРєСѓ РІ СЃР¶Р°С‚РѕРј СЃРѕСЃС‚РѕСЏРЅРёРё РџСЂСѓР¶РёРЅР° РјРѕР¶РµС‚ РІРЅРµР·Р°РїРЅРѕ СЂР°СЃРїСЂСЏРјРёС‚СЊСЃСЏ, Р»РѕРјР°СЏ РІСЃРµ РЅР° СЃРІРѕРµРј РїСѓС‚Рё, РІРєР»СЋС‡Р°СЏ СЂСѓРєРё РЅРµСЃС‡Р°СЃС‚РЅРѕРіРѕ. </t>";
		};
		class section18
		{
			nameSection="Р’РµСЂРјРёС€РµР»СЊ";
			description="<t font='CenturyGothicBold'>Р’РµСЂРјРёС€РµР»СЊ</t><br /><t font='CenturyGothic'>РќРµР»РµРїС‹Р№ РІРёРґ Рё РјРЅРѕРіРѕС‡РёСЃР»РµРЅРЅС‹Рµ РѕС‚СЂРѕСЃС‚РєРё, РЅР°РїРѕРјРёРЅР°СЋС‰РёРµ РјР°РєР°СЂРѕРЅС‹ Рё СЃС‚Р°Р»Рё РїСЂРёС‡РёРЅРѕР№ РґР°РЅРЅРѕРіРѕ РЅР°РёРјРµРЅРѕРІР°РЅРёСЏ. РљС‚Рѕ-С‚Рѕ РїС‹С‚Р°Р»СЃСЏ РЅР°Р·РІР°С‚СЊ РµС‘ РґРѕС€РёСЂР°РєРѕРј, РЅРѕ РЅР°Р·РІР°РЅРёРµ РЅРµ РїСЂРёР¶РёР»РѕСЃСЊ. Р‘Р»РёР¶Рµ Рє С†РµРЅС‚СЂСѓ Р»СѓС‡РёРєРё СЃРјРёРЅР°СЋС‚СЃСЏ, РѕР±СЂР°Р·СѓСЏ РЅРµРїРѕРЅСЏС‚РЅСѓСЋ РјРµС€Р°РЅРёРЅСѓ РёР· Р¶РµР»С‚С‹С… РїРѕР»РѕСЃРѕРє. </t>";
		};
		class section19
		{
			nameSection="Р’СЃРїС‹С€РєР°";
			description="<t font='CenturyGothicBold'>Р’СЃРїС‹С€РєР°</t><br /><t font='CenturyGothic'>РќРµРјРЅРѕРіРѕС‡РёСЃР»РµРЅРЅС‹Рµ СЃРІРёРґРµС‚РµР»Рё СѓРІРµСЂСЏСЋС‚, С‡С‚Рѕ РєСЂР°Р№РЅРµ СЂРµРґРєРѕ, РїРѕСЃР»Рµ Р°РєС‚РёРІР°С†РёРё, СЌР»РµРєС‚СЂРёС‡РµСЃРєРёРµ Р°РЅРѕРјР°Р»РёРё РѕСЃС‚Р°РІР»СЏСЋС‚ РїРѕСЃР»Рµ СЃРµР±СЏ СЌС‚РѕС‚ Р°СЂС‚РµС„Р°РєС‚. РћСЃР»РµРїР»СЏСЋС‰Р°СЏ РІСЃРїС‹С€РєР°, Рё РёР· СЃР°РјРѕРіРѕ С†РµРЅС‚СЂР° СЃРІРµСЂРєР°СЋС‰РµРіРѕ РјР°СЃСЃРёРІР° РІС‹СЃРєР°РєРёРІР°РµС‚ Р°РЅРѕРјР°Р»СЊРЅС‹Р№ РѕР±СЂР°Р·РµС†. РЎС‚РѕРёС‚ СѓС‡РёС‚С‹РІР°С‚СЊ, С‡С‚Рѕ РїРѕРґРѕР±РЅС‹Рµ Р°РЅРѕРјР°Р»РёРё Р°РєС‚РёРІРёСЂСѓРµС‚ С‡СѓР¶РѕРµ РґРІРёР¶РµРЅРёРµ, С‚Р°Рє С‡С‚Рѕ С‡Р°СЃС‚Рѕ Р’СЃРїС‹С€РєР° СЂРµР·СѓР»СЊС‚Р°С‚ С‡РµР№-С‚Рѕ СЃРјРµСЂС‚Рё. РќРѕ РЅРµ СЃС‚РѕРёС‚ С‚РѕСЂРѕРїРёС‚СЊСЃСЏ Р·Р°С‚Р°СЃРєРёРІР°С‚СЊ СЃРІРѕРёС… РЅРµРґСЂСѓРіРѕРІ, РѕРєРѕРЅС‡Р°С‚РµР»СЊРЅРѕ СѓСЃР»РѕРІРёСЏ РїРѕСЏРІР»РµРЅРёСЏ Р°СЂС‚РµС„Р°РєС‚Р° РµС‰Рµ РЅРµ РёР·СѓС‡РµРЅС‹. </t>";
		};
		class section20
		{
			nameSection="Р­Р»РµРєС‚СЂРѕРЅ";
			description="<t font='CenturyGothicBold'>Р­Р»РµРєС‚СЂРѕРЅ</t><br /><t font='CenturyGothic'>Р­Р»РµРєС‚СЂРёС‡РµСЃРєРёРµ Р°РЅРѕРјР°Р»РёРё, РІ РѕС‚Р»РёС‡РёРё РѕС‚ С‚РµРјРїРµСЂР°С‚СѓСЂРЅС‹С…, РЅРµ СЃРїРѕСЃРѕР±РЅС‹ СѓРЅРёС‡С‚РѕР¶Р°С‚СЊ Р±РѕР»СЊС€РёРЅСЃС‚РІРѕ РјР°С‚РµСЂРёР°Р»РѕРІ. РїРѕСЌС‚РѕРјСѓ РёРЅРѕРіРґР° РїРѕРїР°РІС€РёР№ РІРЅСѓС‚СЂСЊ Р°РЅРѕРјР°Р»РёРё РјСѓСЃРѕСЂ РїСЂРµРІСЂР°С‰Р°РµС‚СЃСЏ РІ РїРѕРґРѕР±РЅС‹Р№ Р°СЂС‚РµС„Р°РєС‚. РџР°СЂСѓ СЂР°Р· РЅР° РїРѕРІРµСЂС…РЅРѕСЃС‚Рё РЅР°С…РѕРґРёР»Рё РЅРµР±РѕР»СЊС€РёРµ РґС‹СЂРѕС‡РєРё, СѓРїРѕРјРёРЅР°СЏ СЃС…РѕРґСЃС‚РІРѕ СЃ РїС‡РµР»РёРЅС‹Р№ СѓР»РµР№. Р’РѕР·РјРѕР¶РЅРѕ Рё СЃСѓС‰РµСЃС‚РІСѓРµС‚ РєР°РєРѕРµ-С‚Рѕ РЅР°СЃРµРєРѕРјРѕРµ, РѕР±РёС‚Р°СЋС‰РµРµ РІРЅСѓС‚СЂРё, РЅРѕ РµРіРѕ С‚Р°Рє Рё РЅРµ РЅР°С€Р»Рё. </t>";
		};
		class section21
		{
			nameSection="Р“Р»Р°Р·";
			description="<t font='CenturyGothicBold'>Р“Р»Р°Р·</t><br /><t font='CenturyGothic'>РќРµСЃРјРѕС‚СЂСЏ РЅР° РЅР°Р·РІР°РЅРёРµ, РІ СЃРѕСЃС‚Р°РІРµ Р“Р»Р°Р·Р° РЅРµС‚ РѕСЂРіР°РЅРёРєРё, РІСЃРµ РґРµР»Рѕ РІ РµРіРѕ С„РѕСЂРјРµ. Р—Р°РєР°РЅС‡РёРІР°СЏСЃСЊ С…Р°СЂР°РєС‚РµСЂРЅС‹Рј Р·СЂР°С‡РєРѕРј, Р°СЂС‚РµС„Р°РєС‚ РїСЂРёРєРѕРІС‹РІР°РµС‚ РІРЅРёРјР°РЅРёРµ. Р·Р°СЃС‚Р°РІР»СЏСЏ СЂР°Р· Р·Р° СЂР°Р·РѕРј РІРіР»СЏРґС‹РІР°С‚СЊСЃСЏ РІРЅСѓС‚СЂСЊ. РџРѕРґРѕР±РЅС‹Рµ РґРµР№СЃС‚РІРёР№ РїРѕСЂРѕР¶РґР°СЋС‚ РїР°РЅРёС‡РµСЃРєРёРµ РјС‹СЃР»Рё Рё СЃР°РјСѓСЋ РЅР°СЃС‚РѕСЏС‰СѓСЋ РїР°СЂР°РЅРѕР№СЋ. Р‘С‹РІР°Р»Рё СЃР»СѓС‡Р°Рё, РєРѕРіРґР° Р“Р»Р°Р· РґР°Р¶Рµ РјРѕСЂРіР°Р». РЎСѓС‰РµСЃС‚РІСѓРµС‚ С‚РµРѕСЂРёСЏ, С‡С‚Рѕ Р“Р»Р°Р· СЃРѕР·РґР°Р»Рё РЅРµРєРёРµ СЃСѓС‰РµСЃС‚РІР°, С‡С‚РѕР±С‹ СЃ РїРѕРјРѕС‰СЊСЋ РЅРµРіРѕ РЅР°Р±Р»СЋРґР°С‚СЊ Р·Р° С‡РµР»РѕРІРµС‡РµСЃРєРёРј РѕР±С‰РµСЃС‚РІРѕРј. Р•СЃР»Рё СЌС‚Рѕ РїСЂР°РІРґР°, С‚РѕРіРґР° Р°СЂС‚РµС„Р°РєС‚ Р±С‹ РїРѕРєР°Р·С‹РІР°Р»  РїСЂРµРёРјСѓС‰РµСЃС‚РІРµРЅРЅРѕ С‚РµРјРЅРѕС‚Сѓ РєРѕРЅС‚РµР№РЅРµСЂРѕРІ Рё СЂСЋРєР·Р°РєРѕРІ. </t>";
		};
		class section23
		{
			nameSection="РџРµС‚Р»СЏ";
			description="<t font='CenturyGothicBold'>РџРµС‚Р»СЏ</t><br /><t font='CenturyGothic'>РЇРІР»СЏСЏСЃСЊ С‡Р°СЃС‚СЊСЋ РјРЅРѕРіРѕС‡РёСЃР»РµРЅРЅРѕРіРѕ СЃРµРјРµР№СЃС‚РІР° РѕРіРЅРµРЅРЅС‹С… Р°СЂС‚РµС„Р°РєС‚РѕРІ, СЌС‚РѕС‚ РѕР±СЂР°Р·РµС† РёРјРµРµС‚ С…Р°СЂР°РєС‚РµСЂРЅС‹Р№ РєСЂР°СЃРЅС‹Р№ С†РІРµС‚. Р§С‚Рѕ РёРЅС‚РµСЂРµСЃРЅРѕ, РёРЅРѕРіРґР° СЌС‚РѕС‚ Р°СЂС‚РµС„Р°РєС‚ РјРѕР¶РЅРѕ СѓРІРёРґРµС‚СЊ РІ С‚СЂРµС… РјРµСЃС‚Р°С… РѕРґРЅРѕРІСЂРµРјРµРЅРЅРѕ. Р‘С‹Р»Рё СЃР»СѓС‡Р°Рё, РєРѕРіРґР° СЃС‚Р°Р»РєРµСЂ. СѓРІРµСЂРµРЅРЅС‹Р№ С‡С‚Рѕ РІР·СЏР» Р°СЂС‚РµС„Р°РєС‚, РїСЂРѕС…РѕРґРёР» РїР°СЂСѓ РјРёР»СЊ Рё РѕР±РЅР°СЂСѓР¶РёРІР°Р», С‡С‚Рѕ РІ СЂСЋРєР·Р°РєРµ РЅРёС‡РµРіРѕ РЅРµС‚. Р’РѕР·РјРѕР¶РЅРѕ, РѕРґРЅРѕ РёР· СЃРІРѕР№СЃС‚РІ Р°СЂС‚РµС„Р°РєС‚Р° РґРµР№СЃС‚РІРёС‚РµР»СЊРЅРѕ РІР»РёСЏРµС‚ РЅР° РїСЂРѕСЃС‚СЂР°РЅСЃС‚РІРѕ Рё РІСЂРµРјСЏ. РЎС‚Р°Р»РєРµСЂС‹ Р¶Рµ С€СѓС‚СЏС‚ - СѓРґРѕР±РЅС‹Р№ Р°СЂС‚РµС„Р°РєС‚, РґР°Р¶Рµ РґРІРµ СЂСѓС‡РєРё РµСЃС‚СЊ, РЅРѕСЃРёС‚СЊ СѓРґРѕР±РЅРѕ.</t>";
		};
		class section24
		{
			nameSection="РћРіРЅРµРЅРЅС‹Р№ РЁР°СЂ";
			description="<t font='CenturyGothicBold'>РћРіРЅРµРЅРЅС‹Р№ РЁР°СЂ</t><br /><t font='CenturyGothic'>РҐРѕС‚СЊ Р°СЂС‚РµС„Р°РєС‚ РІСЃС‚СЂРµС‡Р°РµС‚СЃСЏ Рё РЅРµ С‡Р°СЃС‚Рѕ, РѕРЅ РІСЃРµ СЂР°РІРЅРѕ РїРѕР»СѓС‡РёР» С€РёСЂРѕРєСѓСЋ РёР·РІРµСЃС‚РЅРѕСЃС‚СЊ. РҐРѕР»РѕРґРЅС‹РјРё РІРµС‡РµСЂР°РјРё, РєРѕРіРґР° РєРѕСЃС‚РµСЂ СЂР°Р·РІРѕРґРёС‚СЊ РѕРїР°СЃРЅРѕ, Р° С‚РµРїР»Р°СЏ РѕРґРµР¶РґР° СѓР¶Рµ РЅРµ РїРѕРјРѕРіР°РµС‚, РћРіРЅРµРЅРЅС‹Р№ РЁР°СЂ РёСЃРїРѕР»СЊР·СѓСЋС‚ РєР°Рє РѕР±С‹С‡РЅСѓСЋ РіСЂРµР»РєСѓ. Р РѕРІРЅРѕРµ, СѓРјРµСЂРµРЅРЅРѕРµ С‚РµРїР»Рѕ, РёР·Р»СѓС‡Р°РµРјРѕРµ СЌС‚РёРј Р°СЂС‚РµС„Р°РєС‚РѕРј, РїРѕРјРѕРіР°РµС‚ РёР·Р±РµР¶Р°С‚СЊ РїСЂРѕСЃС‚СѓРґС‹. РЈС‡РµРЅС‹Рµ СЃС‡РёС‚Р°СЋС‚, С‡С‚Рѕ РїРѕРґРѕР±РЅС‹С… РґРµР№СЃС‚РІРёР№ Р»СѓС‡С€Рµ РёР·Р±РµРіР°С‚СЊ. РќРµРіР°С‚РёРІРЅС‹Рµ РїРѕСЃР»РµРґСЃС‚РІРёСЏ РѕР±Р»СѓС‡РµРЅРёСЏ РјРѕРіСѓС‚ РїСЂРѕСЏРІРёС‚СЊСЃСЏ С‡РµСЂРµР· РґРµСЃСЏС‚РєРё Р»РµС‚, Рё РґР°Р¶Рµ РѕС‚СЂР°Р·РёС‚СЊСЃСЏ РЅР° РґРµС‚СЏС…. РћРґРЅР°РєРѕ Р±СЂРѕРґСЏРіРё РІСЃРµ СЂР°РІРЅРѕ РёС… РЅРµ СЃР»СѓС€Р°СЋС‚, РїРѕСЃРєРѕР»СЊРєСѓ РґРѕ РґРµС‚РµР№ РµС‰Рµ РґРѕР¶РёС‚СЊ РЅР°РґРѕ, Р° С…РѕР»РѕРґРЅРѕ Р·РґРµСЃСЊ Рё СЃРµР№С‡Р°СЃ. </t>";
		};
		class section25
		{
			nameSection="Р СѓРїРѕСЂ";
			description="<t font='CenturyGothicBold'>Р СѓРїРѕСЂ</t><br /><t font='CenturyGothic'>РќР° РїРµСЂРІС‹Р№ РІР·РіР»СЏРґ Р СѓРїРѕСЂ РјРѕР¶РЅРѕ РїСЂРёРЅСЏС‚СЊ Р·Р° РѕР±С‹С‡РЅРѕРµ РѕРґРЅРѕРёРјРµРЅРЅРѕРµ СѓСЃС‚СЂРѕР№СЃС‚РІРѕ. Р•СЃС‚СЊ РґР°Р¶Рµ РЅРµР±РѕР»СЊС€РѕРµ СѓРіР»СѓР±Р»РµРЅРёРµ, РІ РєРѕС‚РѕСЂРѕРµ РјРѕР¶РЅРѕ РіРѕРІРѕСЂРёС‚СЊ, Рё РєСЂРѕС€РµС‡РЅР°СЏ РєРЅРѕРїРєР° РЅР° РїРѕРІРµСЂС…РЅРѕСЃС‚Рё, СЂР°Р·РІРµ С‡С‚Рѕ СЂСѓС‡РєРё РЅРµС‚. РћРґРЅР°РєРѕ РїРѕРїС‹С‚РєРё РёСЃРїРѕР»СЊР·РѕРІР°С‚СЊ СЌС‚Рѕ РѕР±СЂР°Р·РѕРІР°РЅРёРµ РїРѕ РЅР°Р·РЅР°С‡РµРЅРёСЋ РїСЂРѕРІР°Р»РёР»РёСЃСЊ, Р±РѕР»РµРµ С‚РѕРіРѕ, Р±С‹Р»Рё СЃР»СѓС‡Р°Рё РєРѕРіРґР° Р°СЂС‚РµС„Р°РєС‚ СЃР°Рј РїРѕ СЃРµР±Рµ РёР·РґР°РІР°Р» Р·Р°РіР°РґРѕС‡РЅС‹Рµ Р·РІСѓРєРё, РЅР°РїРѕРјРёРЅР°СЋС‰РёРµ РёРЅРѕСЃС‚СЂР°РЅРЅСѓСЋ СЂРµС‡СЊ. РљРѕРіРґР° РїРѕРґРѕР±РЅРѕРµ РїСЂРѕРёР·РѕС€Р»Рѕ РїРµСЂРµРґ Р»РёРЅРіРІРёСЃС‚РѕРј, С‡СѓРґРѕРј РїРѕРїР°РІС€РёРј РІ Р—РѕРЅСѓ, РѕРЅ СЃСЂР°Р·Сѓ РєСѓРїРёР» Р°СЂС‚РµС„Р°РєС‚ Сѓ  РµРіРѕ РІР»Р°РґРµР»СЊС†Р°, Рё РїСЂРѕРїР°Р» РІ РЅРµРёР·РІРµСЃС‚РЅРѕРј РЅР°РїСЂР°РІР»РµРЅРёРё. </t>";
		};
		class section26
		{
			nameSection="РџРѕРґСЃРЅРµР¶РЅРёРє";
			description="<t font='CenturyGothicBold'>РџРѕРґСЃРЅРµР¶РЅРёРє</t><br /><t font='CenturyGothic'>РќР° РїРµСЂРІС‹Р№ РІР·РіР»СЏРґ РєР°Р¶РµС‚СЃСЏ, СЃР»РѕРІРЅРѕ  РёР· РєСѓСЃРѕС‡РєРѕРІ Р»СЊРґР° РІС‹РіР»СЏРґС‹РІР°РµС‚ СЃРЅРµР¶РЅС‹Р№ РєРѕРј, РЅРѕ, С‡С‚Рѕ СѓРґРёРІРёС‚РµР»СЊРЅРѕ, РґР°РЅРЅС‹Р№ РѕР±СЂР°Р·РµС† СЃРѕРІРµСЂС€РµРЅРЅРѕ РЅРµ С…РѕР»РѕРґРЅС‹Р№. РЈС‡РёС‚С‹РІР°СЏ, С‡С‚Рѕ Р±РѕР»СЊС€РёРЅСЃС‚РІРѕ Р°СЂС‚РµС„Р°РєС‚РѕРІ РѕС‚Р»РёС‡Р°СЋС‚СЃСЏ С„РµРЅРѕРјРµРЅР°Р»СЊРЅРѕР№ РїСЂРѕС‡РЅРѕСЃС‚СЊСЋ, РџРѕРґСЃРЅРµР¶РЅРёРє РЅР°РѕР±РѕСЂРѕС‚, РјРѕР¶РµС‚ СЂР°Р·РІР°Р»РёС‚СЊСЃСЏ РЅР° РґРІРµ С‡Р°СЃС‚Рё. Р”Р°Р»СЊС€Рµ РєР°Рє РїРѕРІРµР·РµС‚ - РёР»Рё РѕР±Р»РѕРјРєРё Р±С‹СЃС‚СЂРѕ СЂР°СЃС‚Р°СЋС‚, РёР»Рё Р¶Рµ РЅР°РѕР±РѕСЂРѕС‚, РєР°Р¶РґС‹Р№ РїСЂРёРѕР±СЂРµС‚Р°РµС‚ СЃРІРѕРё, СѓРЅРёРєР°Р»СЊРЅС‹Рµ СЃРІРѕР№СЃС‚РІР°. РЎР°РјРѕРјСѓ Р»СѓС‡С€Рµ РЅРµ РїС‹С‚Р°С‚СЊСЃСЏ.</t>";
		};
		class section29
		{
			nameSection="Р’СЃРїР»РµСЃРє";
			description="<t font='CenturyGothicBold'>Р’СЃРїР»РµСЃРє</t><br /><t font='CenturyGothic'>Р‘Р»РёР·РєРёР№ СЂРѕРґСЃС‚РІРµРЅРЅРёРє Р’СЃРїС‹С€РєРё, СЌС‚РѕС‚ Р°СЂС‚РµС„Р°РєС‚ СЏРІР»СЏРµС‚СЃСЏ СЂРµР·СѓР»СЊС‚Р°С‚РѕРј РІР·Р°РёРјРѕРґРµР№СЃС‚РІРёР№ СЌР»РµРєС‚СЂРёС‡РµСЃРєРёС… Рё С…РёРјРёС‡РµСЃРєРёС… Р°РЅРѕРјР°Р»РёР№. РЇРІР»СЏСЏСЃСЊ РїСЂРѕРґСѓРєС‚РѕРј РѕР±РѕРёС… СЏРІР»РµРЅРёР№, РѕР±СЂР°Р·РµС† РЅР°РІРѕРґРёС‚ РЅР° РјС‹СЃР»СЊ, С‡С‚Рѕ РјРЅРѕРіРёРµ Р°СЂС‚РµС„Р°РєС‚С‹ РёРјРµСЋС‚ СЃС…РѕР¶РёРµ СЃРІРѕР№СЃС‚РІР° Рё РїСЂРёС‡РёРЅС‹ РїРѕСЏРІР»РµРЅРёСЏ. РќРµРѕРїС‹С‚РЅС‹Р№ СЃС‚Р°Р»РєРµСЂ РјРѕР¶РµС‚ СЃРїСѓС‚Р°С‚СЊ Р’СЃРїР»РµСЃРє СЃ Р’СЃРїС‹С€РєРѕР№, РЅР° С‡РµРј Р»СЋР±СЏС‚ РЅР°Р¶РёРІР°С‚СЊСЃСЏ РјРЅРѕРіРѕС‡РёСЃР»РµРЅРЅС‹Рµ С‚РѕСЂРіРѕРІС†С‹, С‚Р°Рє РєР°Рє СЃС‚РѕРёРјРѕСЃС‚СЊ Р°СЂС‚РµС„Р°РєС‚РѕРІ СЂР°Р·Р»РёС‡Р°РµС‚СЃСЏ. </t>";
		};
		class section30
		{
			nameSection="РљР°Р»РµРЅР°СЏ Р¦РµРїСЊ";
			description="<t font='CenturyGothicBold'>РљР°Р»РµРЅР°СЏ Р¦РµРїСЊ</t><br /><t font='CenturyGothic'>РџСЂРѕРёСЃС…РѕР¶РґРµРЅРёРµ СЌС‚РѕРіРѕ Р°СЂС‚РµС„Р°РєС‚Р° С‚Р°Рє Рё РѕСЃС‚Р°РµС‚СЃСЏ РЅРµРёР·РІРµСЃС‚РЅС‹Рј, Рё РІ РїРµСЂРІСѓСЋ РѕС‡РµСЂРµРґСЊ РїСЂРѕР±Р»РµРјР° РІ РёР·РЅР°С‡Р°Р»СЊРЅРѕРј СЃРѕСЃС‚Р°РІРµ. РџРѕРїС‹С‚РєРё РёР·СѓС‡РёС‚СЊ Р°СЂС‚РµС„Р°РєС‚ СЃ С‚СЂРµСЃРєРѕРј РїСЂРѕРІР°Р»РёРІР°Р»РёСЃСЊ, СЂР°Р· Р·Р° СЂР°Р·РѕРј РІС‹СЏРІР»СЏСЏ СЂР°Р·РЅС‹Рµ СЃРІРѕР№СЃС‚РІР°. Р’ СЂРµР·СѓР»СЊС‚Р°С‚Рµ РёСЃСЃР»РµРґРѕРІР°С‚РµР»Рё РїСЂРёС€Р»Рё Рє РѕР±С‰РµРјСѓ РІС‹РІРѕРґСѓ, С‡С‚Рѕ РєР°Р¶РґР°СЏ Р¦РµРїСЊ РёРјРµРµС‚ СЃРІРѕР№, СѓРЅРёРєР°Р»СЊРЅС‹Р№ СЃРѕСЃС‚Р°РІ. </t>";
		};
		class section31
		{
			nameSection="Р—РѕР»РѕС‚Р°СЏ Р С‹Р±РєР°";
			description="<t font='CenturyGothicBold'>Р—РѕР»РѕС‚Р°СЏ Р С‹Р±РєР°</t><br /><t font='CenturyGothic'>СЃРєР°Р·РєР° Рѕ Р·РѕР»РѕС‚РѕР№ СЂС‹Р±РєРµ РёР·РІРµСЃС‚РЅР°СЏ РєР°Р¶РґРѕРјСѓ СЂРµР±РµРЅРєСѓ, РЅРѕ С‚РѕР»СЊРєРѕ РІ Р—РѕРЅРµ Рє СЌС‚РѕР№ СЃРєР°Р·РєРµ РјРѕР¶РЅРѕ РїСЂРёР±Р»РёР·РёС‚СЊСЃСЏ Рё РѕС‰СѓС‚РёС‚СЊ СЃРµР±СЏ С‚РµРј СЃР°РјС‹Рј Р·Р»РѕРїРѕР»СѓС‡РЅС‹Рј СЃС‚Р°СЂРёРєРѕРј. Р–РµР»Р°РЅРёСЏ Р°СЂС‚РµС„Р°РєС‚ РІСЂРѕРґРµ РєР°Рє РЅРµ РёСЃРїРѕР»РЅСЏРµС‚, РЅРѕ РЅР° С‚Сѓ СЃСѓРјРјСѓ, С‡С‚Рѕ РіРѕС‚РѕРІ РІС‹РґР°С‚СЊ СЃРєСѓРїС‰РёРє, РєРѕРµ-С‡С‚Рѕ РІРѕРїР»РѕС‚РёС‚СЊ РІСЃРµ Р¶Рµ РјРѕР¶РЅРѕ. РЎС‚РѕРёС‚ РѕС‚РјРµС‚РёС‚СЊ СѓРґРёРІРёС‚РµР»СЊРЅСѓСЋ С„РѕСЂРјСѓ Р°СЂС‚РµС„Р°РєС‚Р°, РїРѕС‚РѕРјСѓ С‡С‚Рѕ РЅРµРєРѕС‚РѕСЂС‹Рµ СЌРєР·РµРјРїР»СЏСЂС‹ РІ С‚РѕС‡РЅРѕСЃС‚Рё РїРѕРІС‚РѕСЂСЏСЋС‚ РєРѕРЅС‚СѓСЂС‹ СЃР°РјРѕРіРѕ РЅР°СЃС‚РѕСЏС‰РµРіРѕ РєР°СЂР°СЃСЏ. Р’РѕР·РјРѕР¶РЅРѕ, СЌС‚Рѕ СЂРµР·СѓР»СЊС‚Р°С‚ РІРѕР·РґРµР№СЃС‚РІРёСЏ РїРѕРґРІРѕРґРЅС‹С… Р°РЅРѕРјР°Р»РёР№.  </t>";
		};
		class section32
		{
			nameSection="Р’РѕР»РЅР°";
			description="<t font='CenturyGothicBold'>Р’РѕР»РЅР°</t><br /><t font='CenturyGothic'>Р§Р°СЃС‚Рѕ РјРѕР¶РЅРѕ РЅР°Р±Р»СЋРґР°С‚СЊ РЅР° РїРѕРІРµСЂС…РЅРѕСЃС‚Рё РѕР·РµСЂ РёР»Рё СЂРµРє РЅРµР±РѕР»СЊС€СѓСЋ РїРµРЅСѓ. Р’РµС‚РµСЂ РїРѕРґСѓР», РёР»Рё Р¶Рµ РЅРµРѕСЃС‚РѕСЂРѕР¶РЅС‹Р№ РїР»РѕРІРµС† РјРёРјРѕ РїСЂРѕРїР»С‹Р» - Рё РІРѕС‚ СѓР¶Рµ РѕС‚ РїРµРЅС‹ Рё СЃР»РµРґР° РЅРµС‚. РќРѕ РґРµР№СЃС‚РІРёС‚РµР»СЊРЅРѕ СЃС‚РѕРёС‚ СѓРґРёРІРёС‚СЊСЃСЏ, РµСЃР»Рё РїРѕРґРѕР±РЅР°СЏ Р±РµР»Р°СЏ РІРѕР»РЅР° РєРѕР»С‹С€РµС‚СЃСЏ РІ РєСѓСЃС‚Р°С…, РёР»Рё РІРѕРІСЃРµ РЅР° Р±РµС‚РѕРЅРЅРѕР№ РїР»РёС‚Рµ. Р’РїСЂРѕС‡РµРј, Р±С‹РІР°Р»Рё СЃР»СѓС‡Р°Рё РЅР°СЃС‚РѕСЏС‰РµРіРѕ вЂњРєР»РѕРЅРґР°Р№РєР°вЂќ РєРѕРіРґР° РёР· РѕР·РµСЂР° РІС‹Р»Р°РІР»РёРІР°Р»Рё РЅРµСЃРєРѕР»СЊРєРѕ С‚Р°РєРёС… РѕР±СЂР°Р·С†РѕРІ. РЎС‚РѕРёС‚ С‚РѕР»СЊРєРѕ РїРѕРіР»СЏРґС‹РІР°С‚СЊ РЅР° РІРѕРґРЅСѓСЋ РіР»Р°РґСЊ Рё РЅР°РґРµСЏС‚СЃСЏ РЅР° СѓРґР°С‡Сѓ. </t>";
		};
		class section33
		{
			nameSection="Р“СЂР°РІРё";
			description="<t font='CenturyGothicBold'>Р“СЂР°РІРё</t><br /><t font='CenturyGothic'>РѕРґРёРЅ РёР· РїРµСЂРІС‹С… РЅР°Р№РґРµРЅРЅС‹С… РІ Р—РѕРЅРµ Р°СЂС‚РµС„Р°РєС‚РѕРІ. РџРѕРєР° РєС‚Рѕ-С‚Рѕ Р·Р°СѓРјРЅРѕ РЅР°Р·С‹РІР°Р» РЅР°С…РѕРґРєСѓ вЂњР РµР·СѓР»СЊС‚Р°С‚ РІР·Р°РёРјРѕРґРµР№СЃС‚РІРёСЏ РіСЂР°РІРёС‚Р°С†РёРѕРЅРЅС‹С… Р°РЅРѕРјР°Р»РёР№вЂќ Р»СЋРґРё РїСЂР°РєС‚РёС‡РЅС‹Рµ, С‡С‚Рѕ С†РµРЅСЏС‚ СЃРІРѕРµ РІСЂРµРјСЏ, РЅР°Р·РІР°Р»Рё РµС‘ РїСЂРѕСЃС‚Рѕ - Р“СЂР°РІРё. РџРµСЂРІС‹Р№ РѕР±СЂР°Р·С†С‹ РЅРµРІРµСЂРѕСЏС‚РЅРѕ С„РѕРЅРёР»Рё. Р“РѕРІРѕСЂСЏС‚ РµСЃР»Рё РІРµСЂРЅСѓС‚СЊ Р“СЂР°РІРё РІ СЃРІРѕСЋ РїРµСЂРІРѕРЅР°С‡Р°Р»СЊРЅСѓСЋ СЃСЂРµРґСѓ. С‚.Рµ. РїРѕРјРµСЃС‚РёС‚СЊ Р°СЂС‚РµС„Р°РєС‚ РІ РіСЂР°РІРёС‚Р°С†РёРѕРЅРЅСѓСЋ Р°РЅРѕРјР°Р»РёСЋ, С‚Рѕ РјРѕР¶РЅРѕ РµС‘ РѕР±РµР·РІСЂРµРґРёС‚СЊ. РџСЂР°РІРґР° РїРѕСЃР»Рµ РґРµСЃСЏС‚РєР° РІС‹РєРёРЅСѓС‚С‹С… Р°СЂС‚РµС„Р°РєС‚РѕРІ Р¶РµР»Р°СЋС‰РёС… РїСЂРѕРІРµСЂСЏС‚СЊ С‡СѓР¶РёРµ СЃРїР»РµС‚РЅРё РїРѕСѓР±Р°РІРёР»РѕСЃСЊ. </t>";
		};
		class section34
		{
			nameSection="РљР°РїР»СЏ";
			description="<t font='CenturyGothicBold'>РљР°РїР»СЏ</t><br /><t font='CenturyGothic'>РјР°Р»РµРЅСЊРєР°СЏ, РЅРµРІР·СЂР°С‡РЅР°СЏ РљР°РїР»СЏ СЂРµРґРєРѕ СЃС‚Р°РЅРѕРІРёС‚СЊСЃСЏ РїСЂРµРґРјРµС‚РѕРј РѕР±СЃСѓР¶РґРµРЅРёСЏ СЃСЂРµРґРё СЃС‚Р°Р»РєРµСЂРѕРІ. Р¦РµРЅРЅРѕСЃС‚СЊ РјР°Р»РµРЅСЊРєР°СЏ, РЅР°Р№С‚Рё СЃР»РѕР¶РЅРѕ, РѕСЃРѕР±Рѕ С†РµРЅРЅС‹С… СЃРІРѕР№СЃС‚РІ РЅРµ РІРёРґРЅРѕ. РћРґРЅР°РєРѕ Сѓ РјРЅРѕРіРёС… РЅР° СЃР»СѓС…Сѓ СЃР»СѓС‡Р°Р№, РєРѕРіРґР° РЅРµРєС‚Рѕ РєСЂР°С‚РєРѕРІСЂРµРјРµРЅРЅРѕ СЃРєСѓРїР°Р» РёС… РїРѕ Р±Р°СЃРЅРѕСЃР»РѕРІРЅРѕР№ С†РµРЅРµ. Р•СЃР»Рё РїРѕРєСѓРїР°СЋС‚, Р·РЅР°С‡РёС‚ РµСЃС‚СЊ Р·Р° С‡С‚Рѕ, РґСѓРјР°Р»Рё Р±СЂРѕРґСЏРіРё Рё СЃ СѓРґРІРѕРµРЅРЅРѕР№ СЃРёР»РѕР№ РёСЃРєР°Р»Рё С‚СЂРµР±СѓРµРјРѕРµ. РЎ С‚РµС… РїРѕСЂ РєРѕРµ-РєС‚Рѕ РґРѕ СЃРёС… РїРѕСЂ РґРµСЂР¶РёС‚ РїР°СЂСѓ РєР°РїРµР»СЊ РІ СЃС…СЂРѕРЅРµ - РІРґСЂСѓРі СЃРЅРѕРІР° РІР·Р»РµС‚РёС‚? </t>";
		};
		class section35
		{
			nameSection="РљРёСЃР»РёРЅРєР°";
			description="<t font='CenturyGothicBold'>РљРёСЃР»РёРЅРєР°</t><br /><t font='CenturyGothic'>РєРёСЃР»С‹Рµ РєРѕРЅС„РµС‚С‹ РІСЃРµРіРґР° РёРјРµР»Рё СЃРІРѕСЋ С…РѕС‚СЊ Рё РЅРµР±РѕР»СЊС€СѓСЋ, РЅРѕ РїРѕСЃС‚РѕСЏРЅРЅСѓСЋ Р°СѓРґРёС‚РѕСЂРёСЋ СЃСЂРµРґРё РґРµС‚РµР№. РџРѕСЌС‚РѕРјСѓ РєРѕРіРґР° Р°СЂС‚РµС„Р°РєС‚ РїРѕРїР°Р» РІ СЂСѓРєРё С‡РµР»РѕРІРµРєСѓ, РЅР°Р·РІР°РЅРёРµ РїСЂРёРєСЂРµРїРёР»РѕСЃСЊ СЃСЂР°Р·Сѓ. Р—РµР»РµРЅРѕ-РєСЂР°СЃРЅС‹Р№ С†РІРµС‚ РїСЂРѕС‡РЅРѕ РІС‹Р·С‹РІР°Р» Р°СЃСЃРѕС†РёР°С†РёРё СЃ Р»Р°РєРѕРјСЃС‚РІРѕРј РёР· РґРµС‚СЃС‚РІР°, РґР° С‚Р°Рє СЃРёР»СЊРЅРѕ. С‡С‚Рѕ РєРѕРµ-РєС‚Рѕ Р±РµР·Р±Р°С€РµРЅРЅС‹Р№ РґР°Р¶Рµ РїС‹С‚Р°Р»СЃСЏ СЌС‚РѕС‚ Р°СЂС‚РµС„Р°РєС‚ РѕР±Р»РёР·С‹РІР°С‚СЊ. РќРё Рє С‡РµРјСѓ С…РѕСЂРѕС€РµРјСѓ СЌС‚Рѕ, СЂР°Р·СѓРјРµРµС‚СЃСЏ, РЅРµ РїСЂРёРІРѕРґРёР»Рѕ. </t>";
		};
		class section36
		{
			nameSection="РљСѓРїРѕР»";
			description="<t font='CenturyGothicBold'>РљСѓРїРѕР»</t><br /><t font='CenturyGothic'>РќРµРєРѕС‚РѕСЂРѕРµ РІСЂРµРјСЏ СЌС‚РѕС‚ Р°СЂС‚РµС„Р°РєС‚ РЅР°Р·С‹РІР°Р»Рё С€Р»СЏРїРѕР№, РёР·-Р·Р° С…Р°СЂР°РєС‚РµСЂРЅРѕРіРѕ РІРёРґР° Рё РјСЏРіРєРѕР№ СЃС‚СЂСѓРєС‚СѓСЂС‹. РЎС‚Р°СЂР°СЏСЃСЊ РІС‹Р·РІР°С‚СЊ С‡СѓР¶РѕРµ РІРЅРёРјР°РЅРёРµ. РЅРѕРІРёС‡РєРё РёРЅРѕРіРґР° РЅР°РґРµРІР°Р»Рё РµРіРѕ РЅР° РіРѕР»РѕРІСѓ, РѕР±СЂРµРєР°СЏ СЃРµР±СЏ РЅР° РїРѕСЃС‚РѕСЏРЅРЅС‹Рµ РіРѕР»РѕРІРЅС‹Рµ Р±РѕР»Рё. Р§С‚РѕР±С‹ РёР·Р±РµР¶Р°С‚СЊ С‚СЂР°РІРј СЃСЂРµРґРё СЃРІРѕРёС… Р¶Рµ, Р°СЂС‚РµС„Р°РєС‚ РїРµСЂРµРёРјРµРЅРѕРІР°Р»Рё РІ РєСѓРїРѕР». Р”РµР№СЃС‚РІРёС‚РµР»СЊРЅРѕ, РµСЃР»Рё РїСЂРёРіР»СЏРґРµС‚СЊСЃСЏ, РјРѕР¶РЅРѕ РїСЂРёРЅСЏС‚СЊ Р°СЂС‚РµС„Р°РєС‚ Р·Р° РјР°Р»РµРЅСЊРєСѓСЋ РєРѕРїРёСЋ РєР°РєРѕР№-С‚Рѕ С†РµСЂРєРѕРІРЅРѕР№ РєСЂС‹С€Рё. </t>";
		};
		class section37
		{
			nameSection="РљРѕР»РѕР±РѕРє";
			description="<t font='CenturyGothicBold'>РљРѕР»РѕР±РѕРє</t><br /><t font='CenturyGothic'>РРґРµР°Р»СЊРЅР°СЏ С„РѕСЂРјР° Рё РґР»РёРЅР° РєРѕР»СЋС‡РµРє РљРѕР»РѕР±РєР° С‡Р°СЃС‚Рѕ РїСЂРёРІРѕРґСЏС‚ Рє РґРѕРІРѕР»СЊРЅРѕ РЅРµР»РµРїС‹Рј СЃР»СѓС‡Р°СЏРј, РєРѕРіРґР° РЅР°Р№РґРµРЅРЅС‹Р№ Р°СЂС‚РµС„Р°РєС‚ РїСЂРѕСЃС‚Рѕ СѓРєР°С‚С‹РІР°РµС‚СЃСЏ РѕС‚ СЂР°СЃРєРѕС‚Р°РІС€РµРіРѕ РіСѓР±Сѓ СЃС‚Р°Р»РєРµСЂР°. вЂњРЇ РѕС‚ СѓС‡РµРЅС‹С… СѓС€РµР», РѕС‚ СЃРІРѕР±РѕРґС‹ СѓС€РµР», Рё РѕС‚ С‚РµР±СЏ, СЃС‚Р°Р»РєРµСЂ, СѓРєР°С‡СѓСЃСЊвЂќ. РќР°РІРµСЂРЅРѕРµ РїРѕСЌС‚РѕРјСѓ РѕРїС‹С‚РЅС‹Рµ РёСЃРєР°С‚РµР»Рё Р°СЂС‚РµС„Р°РєС‚РѕРІ СЃСЂР°Р·Сѓ Р±РµРіСѓС‚ Р°СЂС‚РµС„Р°РєС‚Сѓ РЅР°РїРµСЂРµСЂРµР·. РїСЂРµРґРІР°СЂРёС‚РµР»СЊРЅРѕ РѕР±РјРѕС‚Р°РІ СЂСѓРєРё С‚СЂСЏРїРєР°РјРё, С‡С‚РѕР±С‹ РЅРµ СѓРєРѕР»РѕС‚СЊСЃСЏ. </t>";
		};
		class section38
		{
			nameSection="Р’РѕРґРѕСЂРѕСЃР»СЊ";
			description="<t font='CenturyGothicBold'>Р’РѕРґРѕСЂРѕСЃР»СЊ</t><br /><t font='CenturyGothic'>СѓС‡РёС‚С‹РІР°СЏ РѕР±РёР»РёРµ РґРѕР¶РґРµР№ РІ Р—РѕРЅРµ. РЅРµ СѓРґРёРІРёС‚РµР»СЊРЅРѕ С‡С‚Рѕ РїРѕСЃР»Рµ РЅРёС… Р»СѓР¶Рё РїРѕРїР°РґР°СЋС‚СЃСЏ Р±СѓРєРІР°Р»СЊРЅРѕ РЅР° РєР°Р¶РґРѕРј С€Р°РіСѓ. РџРѕСЌС‚РѕРјСѓ Р°СЂС‚РµС„Р°РєС‚ РјРѕР¶РЅРѕ РЅР°Р№С‚Рё РІ СЃР°РјС‹С… РЅРµРѕР¶РёРґР°РЅРЅС‹С… РјРµСЃС‚Р°С…, С…РѕС‚СЏ РїРѕРґСЂР°Р·СѓРјРµРІР°РµС‚СЃСЏ, С‡С‚Рѕ РїРѕРґРѕР±РЅРѕРµ РґРѕР»Р¶РЅРѕ Р±С‹С‚СЊ С‚РѕР»СЊРєРѕ РѕРєРѕР»Рѕ РєСЂСѓРїРЅС‹С… РёСЃС‚РѕС‡РЅРёРєРѕРІ РІРѕРґС‹. РќРµ СЃС‚РѕРёС‚ Р·Р°Р±С‹РІР°С‚СЊ Рё РїСЂРѕ РїРѕРґР·РµРјРЅС‹Рµ РєР»СЋС‡Рё, РїРѕСЂРѕР№ Р±СЊСЋС‰РёРµ РїСЂСЏРјРѕ РёР· РїРѕРґ Р·РµРјР»Рё. </t>";
		};
		class section40
		{
			nameSection="РњРµРґСѓР·Р°";
			description="<t font='CenturyGothicBold'>РњРµРґСѓР·Р°</t><br /><t font='CenturyGothic'>РџРѕР»СѓС‡РёРІ СЃРІРѕРµ РЅР°Р·РІР°РЅРёРµ РІ С‡РµСЃС‚СЊ РѕРґРЅРѕРёРјРµРЅРЅРѕР№ РѕР±РёС‚Р°С‚РµР»СЊРЅРёС†С‹ РјРѕСЂСЃРєРёС… РїСЂРѕСЃС‚РѕСЂРѕРІ, РњРµРґСѓР·Р° РёР·РІРµСЃС‚РЅР° РєР°Рє СЂР°СЃРїСЂРѕСЃС‚СЂР°РЅРµРЅРЅС‹Р№, Рё РїРѕСЌС‚РѕРјСѓ РЅРµ РґРѕСЂРѕРіРѕР№ Р°СЂС‚РµС„Р°РєС‚. РРјРµРЅРЅРѕ РЅРѕРІРёС‡РєРё РЅР°С…РѕРґСЏС‚ РµС‘ РІ РЅР°С‡Р°Р»Рµ СЃРІРѕР№ СЃС‚Р°Р»РєРµСЂСЃРєРѕР№ РєР°СЂСЊРµСЂС‹. РСЂРѕРЅРёС‡РЅР°СЏ С„СЂР°Р·Р° вЂњРћРїСЏС‚СЊ РњРµРґСѓР·С‹ РїСЂРёРІРѕР»РѕРє?вЂќ СѓРєР°Р·С‹РІР°РµС‚ РЅР° РЅРµСЃРїРѕСЃРѕР±РЅРѕСЃС‚СЊ СѓС…РѕРґРёС‚СЊ РІ РіР»СѓР±РёРЅС‹ Р—РѕРЅС‹. РРјРµРЅРЅРѕ РњРµРґСѓР·Р° РѕР±РµСЃРїРµС‡РёРІР°Р»Р° РЅР°С‡Р°Р»СЊРЅС‹Р№ РєР°РїРёС‚Р°Р» РјРЅРѕРіРёС… РёРјРµРЅРёС‚С‹С… СЃС‚Р°Р»РєРµСЂРѕРІ. </t>";
		};
		class section41
		{
			nameSection="РЎР»СЋРґР°";
			description="<t font='CenturyGothicBold'>РЎР»СЋРґР°</t><br /><t font='CenturyGothic'>РњР°Р»Рѕ РєС‚Рѕ Р·РЅР°РµС‚, РЅРѕ РІ РїРµСЂРІС‹Рµ РјРёРЅСѓС‚С‹ РЎР»СЋРґР° СЃРІРѕРёРј РІРёРґРѕРј РЅР°РїРѕРјРёРЅР°РµС‚ РѕР±С‹С‡РЅС‹Р№ РєРѕСЂРёС‡РЅРµРІС‹Р№ РјСЏС‡РёРє. Р’С‹РїСЂС‹РіРёРІР°СЏ РёР· Р°РЅРѕРјР°Р»РёРё, РѕРЅ СЃРїРѕС‚С‹РєР°РµС‚СЃСЏ РѕР± РЅРµСЂРѕРІРЅРѕСЃС‚Рё, Рё, СЃР»РѕРІРЅРѕ РїР»Р°СЃС‚РёР»РёРЅ, РїСЂРѕРјРёРЅР°РµС‚СЃСЏ РІРЅСѓС‚СЂСЊ, РјРµРЅСЏСЏ СЃРІРѕР№ С†РІРµС‚ РЅР° СЃРёРЅРёР№. РЎРїСѓСЃС‚СЏ РїР°СЂР° РјРіРЅРѕРІРµРЅРёР№ РјСЏРіРєРёР№ Рё РїРѕРґР°С‚Р»РёРІС‹Р№ Р°СЂС‚РµС„Р°РєС‚ СЃС‚Р°РЅРѕРІРёС‚СЃСЏ РєСЂРµРїС‡Рµ РєР°РјРЅСЏ, РЅР°РІСЃРµРіРґР° Р·Р°СЃС‚С‹РІР°СЏ РІ СЃРІРѕРµР№ РїСЂРёРѕР±СЂРµС‚РµРЅРЅРѕР№ С„РѕСЂРјРµ. </t>";
		};
		class section42
		{
			nameSection="Р›РѕРјРѕС‚СЊ РњСЏСЃР°";
			description="<t font='CenturyGothicBold'>Р›РѕРјРѕС‚СЊ РњСЏСЃР°</t><br /><t font='CenturyGothic'>РІ РѕС‚Р»РёС‡РёРё РѕС‚ Р“РЅРёР»Рё, Р›РѕРјРѕС‚СЊ РЅРµ РёРјРµРµС‚ РєР°РєРѕРіРѕ-Р»РёР±Рѕ Р·Р°РїР°С…Р°, Рё РІРЅСѓС‚СЂРё С‡РµР»РѕРІРµС‡РµСЃРєРёС… РєРѕСЃС‚РµР№ РЅРµ РЅР°Р±Р»СЋРґР°РµС‚СЃСЏ. Р•СЃР»Рё РѕСЃС‚Р°РІРёС‚СЊ Р›РѕРјРѕС‚СЊ РЅР° РґРѕР»РіРѕРµ РІСЂРµРјСЏ РІ С…РёРјРёС‡РµСЃРєРѕР№ Р°РЅРѕРјР°Р»РёРё, Р›РѕРјРѕС‚СЊ РјРѕР¶РµС‚ СЃС‚Р°С‚СЊ Р“РЅРёР»СЊСЋ, РїСЂРёРѕР±СЂРµС‚СЏ РёРЅС‹Рµ СЃРІРѕР№СЃС‚РІР°. Рљ СЃРѕР¶Р°Р»РµРЅРёСЋ РїРѕРґРѕР±РЅС‹Рµ РјР°РЅРёРїСѓР»СЏС†РёРё РїРѕРґ РІРѕРїСЂРѕСЃРѕРј, РїРѕСЃРєРѕР»СЊРєСѓ РґРѕСЃС‚Р°С‚СЊ Р°СЂС‚РµС„Р°РєС‚ РїСЂР°РєС‚РёС‡РµСЃРєРё РЅРµРІРѕР·РјРѕР¶РЅРѕ. РЎРєРѕСЂРµРµ РІСЃРµРіРѕ СЏРІР»СЏРµС‚СЃСЏ СЂРµР·СѓР»СЊС‚Р°С‚РѕРј РїРѕРїР°РґР°РЅРёСЏ РјСѓС‚Р°РЅС‚Р° РІ Р°РЅРѕРјР°Р»РёСЋ РіСЂР°РІРёС‚Р°С†РёРѕРЅРЅРѕРіРѕ РёР»Рё С…РёРјРёС‡РµСЃРєРѕРіРѕ СЃРІРѕР№СЃС‚РІР°. </t>";
		};
		class section43
		{
			nameSection="РљСѓСЃС‚Р°СЂРЅРёРє";
			description="<t font='CenturyGothicBold'>РљСѓСЃС‚Р°СЂРЅРёРє</t><br /><t font='CenturyGothic'>РљР°Рє РЅР°Р№С‚Рё Р°СЂС‚РµС„Р°РєС‚ РІ С‚СЂР°РІРµ. РєРѕС‚РѕСЂС‹Р№ СЃР°Рј РїРѕ СЃРµР±Рµ РІС‹РіР»СЏРґРёС‚ РєР°Рє С‚СЂР°РІР°? РљСѓСЃС‚Р°СЂРЅРёРє РїРѕСЃС‚РµРїРµРЅРЅРѕ СЃС‚Р°РЅРѕРІРёС‚СЊСЃСЏ РїСЂРёС‚С‡РµР№, РёР·-Р·Р° СЃРІРѕРµРіРѕ РІРЅРµС€РЅРµРіРѕ РІРёРґР°. РўРѕР»СЊРєРѕ С‡СѓРґРѕ РјРѕР¶РµС‚ РїРѕРјРѕС‡СЊ, РїРѕСЃРєРѕР»СЊРєСѓ СЃР°Рј РїРѕ СЃРµР±Рµ Р°СЂС‚РµС„Р°РєС‚ РґРѕРІРѕР»СЊРЅРѕ РїСЂРѕС‡РЅС‹Р№, Рё РЅР° РѕС‰СѓРїСЊ СЃРїСѓС‚Р°С‚СЊ СЃ РѕР±С‹С‡РЅС‹Рј РєСѓСЃС‚РѕРј РЅРµРІРѕР·РјРѕР¶РЅРѕ. РћР±С‹С‡РЅРѕ РѕС‚С‹СЃРєР°С‚СЊ РµРіРѕ РјРѕР¶РЅРѕ РїСЂРѕСЃС‚Рѕ РЅР°СЃС‚СѓРїРёРІ. </t>";
		};
		class section45
		{
			nameSection="РЈС€РЅР°СЏ РЎРµСЂР°";
			description="<t font='CenturyGothicBold'>РЈС€РЅР°СЏ РЎРµСЂР°</t><br /><t font='CenturyGothic'>РЎС‚РѕР»СЊ РЅРµ Р°РїРїРµС‚РёС‚РЅРѕРµ РЅР°Р·РІР°РЅРёРµ Р°СЂС‚РµС„Р°РєС‚ Р·Р°СЃР»СѓР¶РёР» РёР·-Р·Р° РјРµСЂР·РєРѕРіРѕ Р·Р°РїР°С…Р°, С‡С‚Рѕ РЅР°С‡РёРЅР°РµС‚ СЂР°СЃРїСЂРѕСЃС‚СЂР°РЅСЏС‚СЊ РїРѕСЃР»Рµ РёР·СЉСЏС‚РёСЏ РёР· РµСЃС‚РµСЃС‚РІРµРЅРЅРѕРµ СЃСЂРµРґС‹. Р’Рѕ РІСЂРµРјСЏ СЃР°РјРѕРіРѕ РїРѕРёСЃРєР° РїСЂРёС…РѕРґРёС‚СЃСЏ РёСЃРєР°С‚СЊ РєР°Рє Рё РѕСЃС‚Р°Р»СЊРЅС‹Рµ Р°СЂС‚РµС„Р°РєС‚С‹. Р‘С‹РІР°Р»Рё СЃР»СѓС‡Р°Рё, РєРѕРіРґР° РЅР° Р·Р°РїР°С… СЃР±РµРіР°Р»РёСЃСЊ РјСѓС‚Р°РЅС‚С‹, РїРѕСЌС‚РѕРјСѓ РІРµС‚РµСЂР°РЅС‹ РїСЂРµРґРїРѕС‡РёС‚Р°СЋС‚ РїСЂСЏС‚Р°С‚СЊ РЅР°Р№РґРµРЅРЅРѕРµ РіР»СѓР±РѕРєРѕ РІ СЂСЋРєР·Р°Рє. </t>";
		};
		class section46
		{
			nameSection="РљРѕР»СЋС‡РєР°";
			description="<t font='CenturyGothicBold'>РљРѕР»СЋС‡РєР°</t><br /><t font='CenturyGothic'>Р•СЃР»Рё Р±С‹ СЌС‚РѕС‚ Р°СЂС‚РµС„Р°РєС‚ Р±С‹Р» Р±С‹ С€РёСЂРѕРєРѕ СЂР°СЃРїСЂРѕСЃС‚СЂР°РЅРµРЅ, Рё РЅРµ РёРјРµР» РѕСЃРѕР±РѕР№ С†РµРЅРЅРѕСЃС‚Рё, РµРіРѕ РјРѕР¶РЅРѕ Р±С‹Р»Рѕ Р±С‹ РёСЃРїРѕР»СЊР·РѕРІР°С‚СЊ РєР°Рє РєР°РїРєР°РЅ РёР»Рё Р·Р°РіСЂР°РґРёС‚РµР»СЊРЅРѕРµ СЃРѕРѕСЂСѓР¶РµРЅРёРµ. РЈРєРѕР»С‹ СЌС‚РѕРіРѕ РѕР±СЂР°Р·С†Р° РїСЂРёС‡РёРЅСЏСЋС‚ РЅРµСЃРѕРёР·РјРµСЂРёРјРѕ С‡СѓРґРѕРІРёС‰РЅСѓСЋ Р±РѕР»СЊ. РњРѕР¶РµС‚ СЃС‚Р°С‚СЊ РёРЅСЃС‚СЂСѓРјРµРЅС‚РѕРј РґР»СЏ РїС‹С‚РѕРє. РћРїР°СЃРµРЅ С‚РѕР»СЊРєРѕ РґР»СЏ Р¶РёРІС‹С… СЃСѓС‰РµСЃС‚РІ, РїРѕСЃРєРѕР»СЊРєСѓ СЃР°Рј РїРѕ СЃРµР±Рµ СЃ С‚СЂСѓРґРѕРј РјРѕР¶РµС‚ РїСЂРѕР±РёС‚СЊ РґР°Р¶Рµ Р»РёСЃС‚ Р±СѓРјР°РіРё. Р Р°РЅС‹ РѕС‚ РїРѕРґРѕР±РЅРѕРіРѕ Р°СЂС‚РµС„Р°РєС‚Р° Р·Р°Р»РµС‡РёРІР°СЋС‚СЃСЏ РѕС‡РµРЅСЊ РјРµРґР»РµРЅРЅРѕ, РґР°Р¶Рµ РїСЂРё РёСЃРїРѕР»СЊР·РѕРІР°РЅРёРё СЃР°РјРѕР№ СЃРѕРІСЂРµРјРµРЅРЅРѕР№ РјРµРґРµС†РёРЅС‹. </t>";
		};
		class section48
		{
			nameSection="РџР»РµРЅРєР°";
			description="<t font='CenturyGothicBold'>РџР»РµРЅРєР°</t><br /><t font='CenturyGothic'>РўРѕРЅРєР°СЏ Рё С…СЂСѓРїРєР°СЏ, СЌС‚Р° СЃСѓР±СЃС‚Р°РЅС†РёСЏ СЃРІРѕРµР№ РЅРµРѕР±С‹С‡РЅРѕР№ С„РѕСЂРјРѕР№ РІС‹РґРµР»СЏРµС‚СЃСЏ СЃСЂРµРґРё РѕСЃС‚Р°Р»СЊРЅС‹С… Р°СЂС‚РµС„Р°РєС‚РѕРІ. Р’ С‚РµРјРЅРѕС‚Рµ СЌС‚РѕС‚ РїР»РѕСЃРєРёР№ Р°СЂС‚РµС„Р°РєС‚ СЃР»РёРІР°РµС‚СЃСЏ СЃ РїРѕРІРµСЂС…РЅРѕСЃС‚СЊСЋ, Рё С‚РѕР»СЊРєРѕ РІРЅРёРјР°С‚РµР»СЊРЅРѕРµ РёР·СѓС‡РµРЅРёРµ РјРµСЃС‚РЅРѕСЃС‚Рё РїРѕРјРѕР¶РµС‚ РЅР°Р№С‚Рё РµРіРѕ. РҐРѕРґРёР»Рё СЃР»СѓС…Рё, С‡С‚Рѕ РџР»РµРЅРєСѓ РјРѕР¶РЅРѕ СЃРѕР·РґР°С‚СЊ СЃР°РјРѕСЃС‚РѕСЏС‚РµР»СЊРЅРѕ, РЅРѕ РЅРµРјРЅРѕРіРѕС‡РёСЃР»РµРЅРЅС‹Рµ СЌРєСЃРїРµСЂРёРјРµРЅС‚Р°С‚РѕСЂС‹ СЂР°Р· Р·Р° СЂР°Р·РѕРј С‚РµСЂРїРµР»Рё РЅРµСѓРґР°С‡Сѓ. Р§Р°СЃС‚Рѕ Р°СЂС‚РµС„Р°РєС‚ РЅР°С…РѕРґСЏС‚ РѕРєРѕР»Рѕ РІРѕРґРЅС‹С… РёСЃС‚РѕС‡РЅРёРєРѕРІ, Рё СЃС‚Р°Р»РєРµСЂС‹ СѓРІРµСЂРµРЅС‹ - СЌС‚РѕС‚ РѕР±СЂР°Р·РµС† РјРѕР¶РµС‚ РѕС‚СЂР°РІРёС‚СЊ С†РµР»С‹Рµ РѕР·РµСЂР°. Р’ Р»СЋР±РѕРј СЃР»СѓС‡Р°Рµ РёСЃРїРѕР»СЊР·РѕРІР°С‚СЊ РџР»РµРЅРєСѓ РєР°Рє С„РёР»СЊС‚СЂ РЅРµ СЂРµРєРѕРјРµРЅРґСѓРµС‚СЃСЏ. </t>";
		};
		class section50
		{
			nameSection="Р РµРїРµР№";
			description="<t font='CenturyGothicBold'>Р РµРїРµР№</t><br /><t font='CenturyGothic'>РЎРѕРіР»Р°СЃРЅРѕ РѕР±С‰РµРјСѓ РјРЅРµРЅРёСЋ, СЌС‚РѕС‚ Р°СЂС‚РµС„Р°РєС‚ РјРѕР¶РµС‚ РІС‹СЂР°СЃС‚Р°С‚СЊ РєР°Рє СЃР°РјРѕРµ РѕР±С‹С‡РЅРѕРµ СЂР°СЃС‚РµРЅРёРµ. РњРЅРѕРіРѕС‡РёСЃР»РµРЅРЅС‹Рµ РєРѕР»СЋС‡РєРё РїРѕСЃС‚РѕСЏРЅРЅРѕ С†РµРїР»СЏСЋС‚СЃСЏ РЅР° РѕРґРµР¶РґСѓ, РёРЅРѕРіРґР° РїСЂРѕРєР°Р»С‹РІР°СЏ СЃР°РјС‹Рµ С‚РІРµСЂРґС‹Рµ РјР°С‚РµСЂРёР°Р»С‹. РҐСѓР¶Рµ РІСЃРµРіРѕ, РµСЃР»Рё РїРѕРґРѕР±РЅР°СЏ РЅР°С…РѕРґРєР° РїРѕРїР°РґР°РµС‚ С‡РµР»РѕРІРµРєСѓ РІ РІРѕР»РѕСЃС‹, СЃ РїСЂРёС‡РµСЃРєРѕР№ РјРѕР¶РЅРѕ РїРѕРїСЂРѕС‰Р°С‚СЊСЃСЏ СЃСЂР°Р·Сѓ. РРЅРѕРіРґР°, РІРѕР·РІСЂР°С‰Р°СЏСЃСЊ СЃ РґР°Р»СЊРЅРёС… СЂРµР№РґРѕРІ, СЃС‚Р°Р»РєРµСЂС‹ РјРѕРіСѓС‚ РѕР±РЅР°СЂСѓР¶РёС‚СЊ СЌС‚РѕС‚ Р°СЂС‚РµС„Р°РєС‚ РЅР° СЃРѕР±СЃС‚РІРµРЅРЅРѕРј РєРѕСЃС‚СЋРјРµ. Р Р°РґРѕСЃС‚СЊ РѕС‚ РЅРµРѕР¶РёРґР°РЅРЅРѕР№ РЅР°С…РѕРґРєРё РїРѕСЂС‚РёС‚СЃСЏ РёР·-Р·Р° РІС‹РЅСѓР¶РґРµРЅРЅС‹С… РїРѕС…РѕРґРѕРІ Рє СЂРµРјРѕРЅС‚РЅРёРєСѓ, РїРѕСЃРєРѕР»СЊРєСѓ РґР°Р»СЊС€Рµ РїРѕР»СЊР·РѕРІР°С‚СЊСЃСЏ РґС‹СЂСЏРІРѕР№ Р±СЂРѕРЅРµР№ СЃРјС‹СЃР»Р° РЅРµС‚.  </t>";
		};
		class section51
		{
			nameSection="Р‘Р°РєС‚РµСЂРёСЏ";
			description="<t font='CenturyGothicBold'>Р‘Р°РєС‚РµСЂРёСЏ</t><br /><t font='CenturyGothic'>Р­С‚РѕС‚ Р°СЂС‚РµС„Р°РєС‚ РїРѕС‡РµРјСѓ-С‚Рѕ СЃС‡РёС‚Р°РµС‚СЃСЏ Р·Р°СЂР°Р·РЅС‹Рј, С…РѕС‚СЏ Р·Р°РґРѕРєСѓРјРµРЅС‚РёСЂРѕРІР°РЅРЅС‹С… СЃР»СѓС‡Р°РµРІ СЂРµР°Р»СЊРЅРѕР№ Р±РѕР»РµР·РЅРё РЅРµ СЃСѓС‰РµСЃС‚РІСѓРµС‚. Р’С‹Р·С‹РІР°РµС‚ РїСЂРёСЃС‚СѓРїС‹ С‚СЂРёРїРѕС„РѕР±РёРё. РРЅРѕРіРґР° РєР°Р¶РµС‚СЃСЏ, С‡С‚Рѕ РїРѕСЂС‹ Сѓ Р°СЂС‚РµС„Р°РєС‚Р° РЅР° СЃР°РјРѕРј РґРµР»Рµ СЏРІР»СЏСЋС‚СЃСЏ РјР°Р»РµРЅСЊРєРёРјРё РіР»Р°Р·Р°РјРё, РЅР°Р±Р»СЋРґР°СЋС‰РёРјРё Р·Р° РІР»Р°РґРµР»СЊС†РµРј. Р’ Р»СЋР±РѕРј СЃР»СѓС‡Р°Рµ РЅРѕСЃРёС‚СЊ РїРѕРґРѕР±РЅРѕРµ РґРѕР»РіРѕРµ РІСЂРµРјСЏ РЅРµ СЂРµРєРѕРјРµРЅРґСѓРµС‚СЃСЏ.. </t>";
		};
		class section54
		{
			nameSection="РЎР»РёР·РЅСЏРє";
			description="<t font='CenturyGothicBold'>РЎР»РёР·РЅСЏРє</t><br /><t font='CenturyGothic'>РџРµСЂРµС…РѕРґРЅР°СЏ С„РѕСЂРјР° РјРµР¶РґСѓ РЎР»РёР·СЊСЋ Рё РЎР»СЋРґРѕР№.  Р•СЃР»Рё РїРѕР»РѕР¶РёС‚СЊ Р°СЂС‚РµС„Р°РєС‚ РЅР° СЂРѕРІРЅСѓСЋ РїРѕРІРµСЂС…РЅРѕСЃС‚СЊ, РјРѕР¶РЅРѕ Р·Р°РјРµС‚РёС‚СЊ С‡С‚Рѕ РѕРЅ РјРµРґР»РµРЅРЅРѕ РґРІРёР¶СѓС‚СЃСЏ, РѕСЃС‚Р°РІР»СЏСЏ Р·Р° СЃРѕР±РѕР№ СЃРєР»РёР·РєРёР№ СЃР»РµРґ. РџСЂРё С‚РѕРј РµСЃР»Рё РїРѕРІС‚РѕСЂРёС‚СЊ СЌРєСЃРїРµСЂРёРјРµРЅС‚ СЃ РЅРµСЃРєРѕР»СЊРєРёРјРё РѕР±СЂР°Р·С†Р°РјРё, СЃС‚РѕСЂРѕРЅР° РґРІРёР¶РµРЅРёСЏ Р±СѓРґРµС‚ РѕРґРёРЅР°РєРѕРІРѕР№. Р•СЃС‚СЊ РјРёС„, С‡С‚Рѕ РѕРЅРё РґРІРёР¶СѓС‚СЃСЏ РІ СЃС‚РѕСЂРѕРЅСѓ РєР»РѕРЅРґР°Р№РєР° Р°СЂС‚РµС„Р°РєС‚РѕРІ, РЅРѕ РёР·-Р·Р° РјРµРґР»РµРЅРЅРѕР№ СЃРєРѕСЂРѕСЃС‚Рё С‚РµСЂРїРµРЅРёСЏ РїСЂРѕРІРµСЂРёС‚СЊ РјРёС„ РґРѕ РєРѕРЅС†Р° РЅРµ РІС‹С…РѕРґРёР»Рѕ.  </t>";
		};
		class section55
		{
			nameSection="РЎРЅРµР¶РёРЅРєР°";
			description="<t font='CenturyGothicBold'>РЎРЅРµР¶РёРЅРєР°</t><br /><t font='CenturyGothic'>Р“РѕРІРѕСЂСЏС‚ С‡С‚Рѕ РѕРґРёРЅР°РєРѕРІРѕР№ СЃРЅРµР¶РёРЅРєРё РЅРµ СЃСѓС‰РµСЃС‚РІСѓРµС‚ - СЌС‚Рѕ СѓС‚РІРµСЂР¶РґРµРЅРёРµ РјРѕР¶РЅРѕ СЃРјРµР»Рѕ РїСЂРёРјРµРЅРёС‚СЊ Рє РЎРЅРµР¶РёРЅРєРµ. Р’ РѕС‚Р»РёС‡РёРё РѕС‚ РљРѕР»РѕР±РєР°, Р°СЂС‚РµС„Р°РєС‚ РЅРµ РїСЂС‹РіСѓС‡, Р° РµРіРѕ  РєРѕР»СЋС‡РєРё РѕС‡РµРЅСЊ Р»РµРіРєРѕ СЃР»РѕРјР°С‚СЊ. Р•СЃС‚СЊ СѓРјРµР»СЊС†С‹, СЃРїРѕСЃРѕР±РЅС‹Рµ РЅР° РѕСЃРЅРѕРІРµ Р°СЂС‚РµС„Р°РєС‚ СЃРѕР±СЂР°С‚СЊ С†РµР»С‹Р№ С…РѕР»РѕРґРёР»СЊРЅРёРє. РћС‚ РѕР±СЂР°Р·С†Р° РёСЃС…РѕРґРёС‚ РїСЂРёСЏС‚РЅС‹Р№ С…РѕР»РѕРґ, РєРѕС‚РѕСЂС‹Р№ РјРѕР¶РµС‚ СѓСЃРёР»РёРІР°С‚СЊСЃСЏ Р±Р»РёР¶Рµ Рє РІС‹Р±СЂРѕСЃСѓ, РѕРґРЅР°РєРѕ РЅР° СЌС‚Рѕ РїРѕР»Р°РіР°С‚СЊСЃСЏ РЅРµР»СЊР·СЏ - Р±С‹РІР°Р»Рё РЅРµСЃС‡Р°СЃС‚РЅС‹Рµ СЃР»СѓС‡Р°Рё. </t>";
		};
		class section58
		{
			nameSection="РљРѕСЂРєР°";
			description="<t font='CenturyGothicBold'>РљРѕСЂРєР°</t><br /><t font='CenturyGothic'>РџСЂР°РєС‚РёС‡РµСЃРєРё РёРґРµРЅС‚РёС‡РЅС‹Р№ Р’С‹РІРµСЂС‚Сѓ Р°СЂС‚РµС„Р°РєС‚ С‚РµРј РЅРµ РјРµРЅРµРµ РѕР±Р»Р°РґР°РµС‚ СЃРІРѕРёРјРё, СѓРЅРёРєР°Р»СЊРЅС‹РјРё СЃРІРѕР№СЃС‚РІР°РјРё. Р’СЃРµ РґРµР»Рѕ РІ СЂРµРґС‡Р°Р№С€РµР№ СЃРЅРµР¶РЅРѕР№ Р°РЅРѕРјР°Р»РёРё, РєРѕС‚РѕСЂР°СЏ РІСЃС‚СЂРµС‡Р°РµС‚СЃСЏ С‚РѕР»СЊРєРѕ РЅРѕС‡СЊСЋ, РѕСЃС‚Р°РІР°СЏСЃСЊ РїСЂРё С‚РѕРј СЃРѕРІРµСЂС€РµРЅРЅРѕ РЅРµРІРёРґРёРјРѕР№. Р•С‘ СЃРїРѕСЃРѕР±РЅРѕСЃС‚СЊ Р·Р° РїР°СЂСѓ РјРёРЅСѓС‚ Р·Р°РјРѕСЂРѕР·РёС‚СЊ С‡РµР»РѕРІРµРєР° РѕСЃС‚Р°РµС‚СЃСЏ РІСЃРµРіРѕ Р»РёС€СЊ СЃР»СѓС…РѕРј, Р° РІРѕС‚ РµС‘ РІРѕР·РґРµР№СЃС‚РІРёРµ РЅР° Р’С‹РІРµСЂС‚ С‡СѓС‚СЊ Р»Рё РЅРµ РїРѕРґС‚РІРµСЂР¶РґРµРЅРЅС‹Р№ С„Р°РєС‚. РџРѕРїР°РґР°СЏ РІ РЅРµРµ Р’С‹РІРµСЂС‚ С‚СѓСЃРєРЅРµРµС‚, СЃС‚Р°РЅРѕРІСЏСЃСЊ С‡РµРј С‚Рѕ СЃРѕРІСЃРµРј РёРЅС‹Рј. </t>";
		};
		class section59
		{
			nameSection="РљР»СѓР±РѕРє";
			description="<t font='CenturyGothicBold'>РљР»СѓР±РѕРє</t><br /><t font='CenturyGothic'>РќР° РїРµСЂРІС‹Р№ РІР·РіР»СЏРґ РљР»СѓР±РѕРє РїРѕС…РѕР¶ РЅР° РіСЂСѓРґСѓ РјРµС‚Р°Р»Р»РѕР»РѕРјР°. РўРѕРЅРєРёРµ СЃС‚Р°Р»СЊРЅС‹Рµ РїСЂСѓС‚СЊСЏ С‚Р°Рє РїР»РѕС‚РЅРѕ РїРµСЂРµРїР»РµР»РёСЃСЊ РјРµР¶РґСѓ СЃРѕР±РѕР№, С‡С‚Рѕ СЂР°Р·РґРµР»РёС‚СЊ РёС… СѓР¶Рµ РЅРµРІРѕР·РјРѕР¶РЅРѕ. Р­С‚Р° РіСЂРѕРјРѕР·РґРєР°СЏ СЃСѓР±СЃС‚Р°РЅС†РёСЏ РёРЅРѕРіРґР° РІСЃС‚СЂРµС‡Р°РµС‚СЃСЏ РЅР° СЃРІР°Р»РєР°С… С‚РµС…РЅРёРєРё, РѕРґРЅР°РєРѕ РёР·-Р·Р° СЃРІРѕРµР№ С„РѕСЂРјС‹ С‡Р°СЃС‚Рѕ РѕСЃС‚Р°РµС‚СЃСЏ РЅРµСѓР·РЅР°РЅРЅРѕР№. РР·Р±РµРіР°СЏ РІСЂРµРґРѕРЅРѕСЃРЅРѕРіРѕ РёР·Р»СѓС‡РµРЅРёСЏ, СЃС‚Р°Р»РєРµСЂС‹ СЃС‚Р°СЂР°СЋС‚СЃСЏ РёР·Р±РµРіР°С‚СЊ РїРѕРґРѕР±РЅС‹С… РјРµСЃС‚, РїРѕСЌС‚РѕРјСѓ РљР»СѓР±РєРё РЅРµРґРµР»СЏРјРё РѕСЃС‚Р°СЋС‚СЃСЏ Р»РµР¶Р°С‚СЊ РјРµР¶РґСѓ СЃС‚Р°СЂС‹Рј С…Р»Р°РјРѕРј. </t>";
		};
		class section61
		{
			nameSection="РљСЂРѕРІСЊ";
			description="<t font='CenturyGothicBold'>РљСЂРѕРІСЊ</t><br /><t font='CenturyGothic'>РџРµСЂРµСЃС‚СЂРµР»РєРё Рё Р±РѕРё СЃ РјСѓС‚Р°РЅС‚Р°РјРё С‡Р°СЃС‚Рѕ РїСЂРѕРёСЃС…РѕРґСЏС‚ СЂСЏРґРѕРј СЃ Р°РЅРѕРјР°Р»РёСЏРјРё, Рё РєСЂРѕРІСЊ РїРѕСЃС‚РѕСЏРЅРЅРѕ РїРѕРїР°РґР°РµС‚ РІ Р°РЅРѕРјР°Р»РёРё. РџРѕСЂРѕР№ РµС‘ РѕР±СЉРµРјС‹ СЃС‚РѕР»СЊ РІС‹СЃРѕРєРё, С‡С‚Рѕ СЃРІРµСЂРЅСѓРІС€Р°СЏСЃСЏ РєСЂРѕРІСЊ РѕР±СЂР°Р·СѓРµС‚ РјР°СЃСЃРёРІРЅС‹Р№ РѕР±СЉРµРєС‚. РљСЂРѕРІР°РІРѕ РєСЂР°СЃРЅС‹Р№ С†РІРµС‚, РєР°РїР»РµРІРёРґРЅР°СЏ С„РѕСЂРјР°, РіР»Р°РґРєР°СЏ РїРѕРІРµСЂС…РЅРѕСЃС‚СЊ - СЌС‚РѕС‚ Р°СЂС‚РµС„Р°РєС‚ СЃР»РѕР¶РЅРѕ РїРµСЂРµРїСѓС‚Р°С‚СЊ СЃ С‡РµРј-С‚Рѕ РґСЂСѓРіРёРј.  РљС‚Рѕ-С‚Рѕ СЃС‡РёС‚Р°Р», С‡С‚Рѕ РµСЃР»Рё Р°СЂС‚РµС„Р°РєС‚ РѕР±СЂР°Р·РѕРІР°Р»СЃСЏ РёР· РєСЂРѕРІРё, Р·РЅР°С‡РёС‚ РѕРЅ РґРѕР»Р¶РµРЅ РµС‘ РІРѕСЃСЃС‚Р°РЅР°РІР»РёРІР°С‚СЊ, РЅРѕ РЅР° РїСЂР°РєС‚РёРєРµ СЌС‚Рѕ С‚Р°Рє Рё РЅРµ РїРѕРґС‚РІРµСЂРґРёР»РѕСЃСЊ. </t>";
		};
		class section62
		{
			nameSection="Р’С‹РІРµСЂС‚";
			description="<t font='CenturyGothicBold'>Р’С‹РІРµСЂС‚</t><br /><t font='CenturyGothic'>РљРѕРіРґР° СЃС‚Р°Р»РєРµСЂС‹ С‚РµСЂСЏСЋС‚ СЃРЅР°СЂСЏР¶РµРЅРёРµ Рё Р¶РёР·РЅРё, РїРѕРїР°РґР°СЏ РІ РіСЂР°РІРёС‚Р°С†РёРѕРЅРЅС‹Рµ Р°РЅРѕРјР°Р»РёРё, РїРѕР»СѓС‡Р°РµС‚СЃСЏ РЅРµС‡С‚Рѕ РїРѕРґРѕР±РЅРѕРµ. РџРµСЂРµРєСЂСѓС‡РµРЅРЅР°СЏ С„РѕСЂРјР°, Р·РёСЏСЋС‰Р°СЏ РјРЅРѕРіРѕС‡РёСЃР»РµРЅРЅС‹РјРё РїРѕР»РѕСЃС‚СЏРјРё, РёРјРµРµС‚ СЃРІРѕСЋ, СѓРЅРёРєР°Р»СЊРЅСѓСЋ С„РѕСЂРјСѓ. Р•СЃР»Рё РІР°Рј СѓРґР°Р»РѕСЃСЊ РЅР°Р№С‚Рё РЅРµСЃРєРѕР»СЊРєРѕ Р’С‹РІРµСЂС‚РѕРІ, РїСЂРёРіР»СЏРґРёС‚РµСЃСЊ - РѕРЅРё РёРјРµСЋС‚ СЂР°Р·Р»РёС‡РёСЏ. РЎС‚СЂР°РЅРЅС‹Р№, РїРµСЂРµР»РёРІР°СЋС‰РёР№СЃСЏ Р±Р»РµСЃРє РІРЅСѓС‚СЂРё Рё РєСЂРѕС€РµС‡РЅС‹Рµ РєР°РїР»Рё РјР°СЃР»Р° СѓРєР°Р·С‹РІР°СЋС‚ РЅР° СЂРѕРґСЃС‚РІРѕ СЃ РџР»РµРЅРєРѕР№. </t>";
		};
	};
	class mainSection5
	{
		nameSection="SectionTest5";
		description="";
		class section1
		{
			nameSection="РўСѓС€РєР°РЅ";
			description="<t font='CenturyGothicBold'>РўСѓС€РєР°РЅ</t><br /><t font='CenturyGothic'>Р Р°Р·РјРµСЂ РЅРµ РёРјРµРµС‚ Р·РЅР°С‡РµРЅРёСЏ - СЌС‚Р° С„СЂР°Р·Р° РєР°Рє РЅРµР»СЊР·СЏ Р»СѓС‡С€Рµ РїРѕРґС…РѕРґРёС‚ РґР»СЏ С…Р°СЂР°РєС‚РµСЂРёСЃС‚РёРєРё РўСѓС€РєР°РЅРѕРІ. Р”Р°Р¶Рµ РѕРїС‹С‚РЅС‹Рµ СЃС‚Р°Р»РєРµСЂС‹ РїСЂРµРґРїРѕС‡РёС‚Р°СЋС‚ РѕР±С…РѕРґРёС‚СЊ РјРµСЃС‚Р° РёС… РѕР±РёС‚Р°РЅРёСЏ СЃС‚РѕСЂРѕРЅРѕР№ РёР·-Р·Р° РЅРµРІРµСЂРѕСЏС‚РЅРѕР№ Р°РіСЂРµСЃСЃРёРІРЅРѕСЃС‚Рё СЌС‚РёС… СЃСѓС‰РµСЃС‚РІ. РћРґРёРЅРѕС‡РЅР°СЏ РѕСЃРѕР±СЊ Р±СѓРґРµС‚ СЏСЂРѕСЃС‚РЅРѕ Р·Р°С‰РёС‰Р°С‚СЊ СЃРІРѕСЋ С‚РµСЂСЂРёС‚РѕСЂРёСЋ РѕС‚ РІС‚РѕСЂРіС€РµРіРѕСЃСЏ РЅР° РЅРµС‘ С‡СѓР¶Р°РєР°, СЃС‚Р°СЏ - Р±СѓРґРµС‚ РіРЅР°С‚СЊ РµРіРѕ РµС‰С‘ РґРѕР»РіРѕРµ РІСЂРµРјСЏ. Р’ РѕС…РѕС‚Рµ СЌС‚Рё СЃСѓС‰РµСЃС‚РІР° С‚РѕР¶Рµ РїСЂРѕСЏРІР»СЏСЋС‚ РЅРµРІРёРґР°РЅРЅСѓСЋ РєСЂРѕРІРѕР¶Р°РґРЅРѕСЃС‚СЊ. РћРїРёСЃР°РЅС‹ СЃР»СѓС‡Р°Рё РЅР°РїР°РґРµРЅРёСЏ РѕСЃРѕР±Рѕ РєСЂСѓРїРЅС‹С… СЃС‚Р°Р№ РўСѓС€РєР°РЅРѕРІ РЅР° РљР°Р±Р°РЅРѕРІ Рё РґР°Р¶Рµ РЅР° РЎРЅРѕСЂРєРѕРІ, С‡С‚Рѕ С‚РѕР»СЊРєРѕ РїРѕРґС‚РІРµСЂР¶РґР°РµС‚ РєСЂР°Р№РЅРµ РІС‹СЃРѕРєСѓСЋ Р°РіСЂРµСЃСЃРёРІРЅРѕСЃС‚СЊ СЌС‚РѕРіРѕ РјСѓС‚Р°РЅС‚Р°. Р’ С…РѕР»РєРµ РўСѓС€РєР°РЅ РґРѕСЃС‚РёРіР°РµС‚ СЂР°Р·РјРµСЂРѕРІ РЅРµР±РѕР»СЊС€РѕР№ СЃРѕР±Р°РєРё, Р° РµРіРѕ РєР»С‹РєРё СЃРїРѕСЃРѕР±РЅС‹ РїСЂРѕРєСѓСЃРёС‚СЊ РїСЂРѕС‡РЅСѓСЋ Р°СЂРјРµР№СЃРєСѓСЋ РѕР±СѓРІСЊ. РџРµСЂРµРґРІРёРіР°СЋС‚СЃСЏ РЅР° Р·Р°РґРЅРёС… Р»Р°РїР°С… СЃ РѕРіСЂРѕРјРЅРѕР№ РїСЂРѕРІРѕСЂРЅРѕСЃС‚СЊСЋ, РїРµСЂРµРґРЅРёРµ РёСЃРїРѕР»СЊР·СѓСЋС‚ РґР»СЏ СѓРґРµСЂР¶Р°РЅРёСЏ РґРѕР±С‹С‡Рё. РћР±СЂР°Р· Р¶РёР·РЅРё - СЃС‚Р°Р№РЅС‹Р№. РќРµСЃРјРѕС‚СЂСЏ РЅР° СЃС…РѕР¶РµСЃС‚СЊ СЃ РЅРµ РјСѓС‚РёСЂРѕРІР°РІС€РёРјРё РІРёРґР°РјРё С‚СѓС€РєР°РЅРѕРІ, РјСѓС‚Р°РЅС‚ РЅРµ СЃРѕСЃС‚РѕРёС‚ СЃ РЅРёРјРё РІ СЂРѕРґСЃС‚РІРµ. Р’РёРґ, РѕС‚ РєРѕС‚РѕСЂРѕРіРѕ РїСЂРѕРёР·РѕС€Р»Рё РўСѓС€РєР°РЅС‹, РЅРµ СѓСЃС‚Р°РЅРѕРІР»РµРЅ.<br />РћР±РёС‚Р°СЋС‚ РїРѕРІСЃРµРјРµСЃС‚РЅРѕ, РЅРѕ РїСЂРµРґРїРѕС‡РёС‚Р°СЋС‚ Р±СЂРѕС€РµРЅРЅС‹Рµ С‡РµР»РѕРІРµС‡РµСЃРєРёРµ Р¶РёР»РёС‰Р°, РєРѕР»Р»РµРєС‚РѕСЂС‹ РєР°РЅР°Р»РёР·Р°С†РёР№ Рё РїРѕРґРІР°Р»С‹, РїРѕРєРёРґР°СЏ СЃРІРѕРё Р¶РёР»РёС‰Р° С‚РѕР»СЊРєРѕ РїСЂРё СЃРёР»СЊРЅРѕРј РіРѕР»РѕРґРµ. Р’ РѕРґРЅРѕР№ СЃС‚Р°Рµ РЅР°СЃС‡РёС‚С‹РІР°РµС‚СЃСЏ, РєР°Рє РїСЂР°РІРёР»Рѕ, РѕС‚ 4-5 РґРѕ 7-8 РўСѓС€РєР°РЅРѕРІ, РЅРѕ РІСЃС‚СЂРµС‡Р°СЋС‚СЃСЏ Рё Р±РѕР»РµРµ РєСЂСѓРїРЅС‹Рµ СЃРєРѕРїР»РµРЅРёСЏ, РІРїР»РѕС‚СЊ РґРѕ РЅРµСЃРєРѕР»СЊРєРёС… РґРµСЃСЏС‚РєРѕРІ. РћРґРёРЅ РўСѓС€РєР°РЅ РїСЂРѕР±Р»РµРјС‹ РЅРµ СЃРѕР·РґР°СЃС‚, РѕРґРЅР°РєРѕ РїСЂРё РІСЃС‚СЂРµС‡Рµ СЃРѕ СЃС‚Р°РµР№ СЃР»РµРґСѓРµС‚ РёСЃРєР°С‚СЊ РІРѕР·РІС‹С€РµРЅРЅРѕСЃС‚Рё, РЅРµРґРѕСЃСЏРіР°РµРјС‹Рµ РґР»СЏ РёС… С‡РµР»СЋСЃС‚РµР№, РёР»Рё Р¶Рµ РѕС‚СЃС‚СЂРµР»РёРІР°С‚СЊ РёС… РёР· РґСЂРѕР±РѕРІРёРєР°, СЃС‚Р°СЂР°СЏСЃСЊ РґРµСЂР¶Р°С‚СЊ РґРёСЃС‚Р°РЅС†РёСЋ. РђРІС‚РѕРјР°С‚РёС‡РµСЃРєРѕРµ РѕСЂСѓР¶РёРµ РІ С‚Р°РєРѕРј СЃСЂР°Р¶РµРЅРёРё - РЅРµ Р»СѓС‡С€РёР№ РІС‹Р±РѕСЂ, РёР·-Р·Р° РµРіРѕ Р±РѕР»СЊС€РѕР№ РєСѓС‡РЅРѕСЃС‚Рё СЃС‚СЂРµР»СЊР±С‹ Рё РјРѕР±РёР»СЊРЅРѕСЃС‚Рё РјСѓС‚Р°РЅС‚РѕРІ. РћРґРЅРѕ С…РѕСЂРѕС€Рѕ - Р¶РёРІСѓС‡РµСЃС‚СЊСЋ С‚СѓС€РєР°РЅС‹ РЅРµ РѕС‚Р»РёС‡Р°СЋС‚СЃСЏ, С…РѕС‚СЊ Рё СЃС‚СЂР°С…Р° РЅРµ С‡СѓРІСЃС‚РІСѓСЋС‚.</t>";
		};
		class section2
		{
			nameSection="РЎР»РµРїРѕР№ РїС‘СЃ";
			description="<t font='CenturyGothicBold'>РЎР»РµРїРѕР№ РїС‘СЃ</t><br /><t font='CenturyGothic'>РўР°Рє РїСЂРёРІС‹С‡РЅС‹Р№ Р»СЋРґСЏРј Р·Р° РџРµСЂРёРјРµС‚СЂРѕРј Р»Р°Р№ СЃРѕР±Р°Рє, Р±СѓРґСѓС‡Рё СѓСЃР»С‹С€Р°РЅРЅС‹Рј РІ Р—РѕРЅРµ, РЅРµРІРѕР»СЊРЅРѕ Р·Р°СЃС‚Р°РІРёС‚ РЅРµСЂРІРЅРёС‡Р°С‚СЊ Р»СЋР±РѕРіРѕ СЃС‚Р°Р»РєРµСЂР°. РЎР»РµРїС‹Рµ СЃРѕР±Р°РєРё С‚РѕР»СЊРєРѕ РёР·РґР°Р»Рё РЅР°РїРѕРјРёРЅР°СЋС‚ СЃРІРѕРёС… СЂРѕРґРёС‡РµР№ СЃ Р‘РѕР»СЊС€РѕР№ Р—РµРјР»Рё, РЅР° РґРµР»Рµ Р¶Рµ СЃ РЅРёРјРё Сѓ РЅРёС… РѕСЃС‚Р°Р»РѕСЃСЊ РјР°Р»Рѕ РѕР±С‰РµРіРѕ. Р­С‚Рё РїСЃС‹ - СЃР°РјС‹Рµ СЂР°СЃРїСЂРѕСЃС‚СЂР°РЅРµРЅРЅС‹Рµ С…РёС‰РЅРёРєРё Р—РѕРЅС‹. РљР°Рє Рё РёС… РїСЂРµРґРєРё, РґРёРєРёРµ РґРІРѕСЂРЅСЏРіРё, РІРµРґСѓС‚ СЌС‚Рё РјСѓС‚Р°РЅС‚С‹ СЃС‚Р°Р№РЅС‹Р№ РѕР±СЂР°Р· Р¶РёР·РЅРё. Р’ С‚Р°РєРёС… СЃС‚Р°СЏС… РІСЃРµРіРґР° РјРѕР¶РЅРѕ РІС‹РґРµР»РёС‚СЊ Р»РёРґРµСЂР°, С‡С‚Рѕ СѓРєР°Р·С‹РІР°РµС‚ РЅР° РЅР°Р»РёС‡РёРµ С‡С‘С‚РєРѕР№ РІРЅСѓС‚СЂРµРЅРЅРµР№ РёРµСЂР°СЂС…РёРё. РўР°РєР¶Рµ СЃСѓС‰РµСЃС‚РІСѓСЋС‚ СЃРІРёРґРµС‚РµР»СЊСЃС‚РІР° С‚РѕРіРѕ, С‡С‚Рѕ РІРѕ РіР»Р°РІРµ СЃС‚Р°Рё РёРЅРѕРіРґР° РјРѕРіСѓС‚ СЃС‚РѕСЏС‚СЊ РџСЃРµРІРґРѕСЃРѕР±Р°РєРё.<br />Р”Рѕ СЃРёС… РїРѕСЂ РґРѕ РєРѕРЅС†Р° РЅРµРїРѕРЅСЏС‚РЅРѕ - РєР°Рє РёРјРµРЅРЅРѕ РЎР»РµРїС‹Рµ РЎРѕР±Р°РєРё РЅР°СѓС‡РёР»РёСЃСЊ РІС‹Р¶РёРІР°С‚СЊ РІ Р—РѕРЅРµ. РЈС‡С‘РЅС‹Рµ СЃС…РѕРґСЏС‚СЃСЏ РІРѕ РјРЅРµРЅРёРё, С‡С‚Рѕ Сѓ СЌС‚РёС… РїСЃРѕРІ СЃ РїРѕС‚РµСЂРµР№ Р·СЂРµРЅРёСЏ РЅРµ С‚РѕР»СЊРєРѕ СѓСЃРёР»РёР»РёСЃСЊ РІСЃРµ РѕСЃС‚Р°Р»СЊРЅС‹Рµ С‡СѓРІСЃС‚РІР°, РЅРѕ Рё СЂР°Р·РІРёР»РѕСЃСЊ РµС‰Рµ РѕРґРЅРѕ, РЅРѕРІРѕРµ, РѕРїСЂРµРґРµР»РµРЅРЅС‹Рј РѕР±СЂР°Р·РѕРј СЃРІСЏР·Р°РЅРЅРѕРµ СЃ С‚РµР»РµРїР°С‚РёРµР№. Р­С‚Рѕ РѕР±СЉСЏСЃРЅСЏРµС‚ РёС… РµРґРІР° Р»Рё РЅРµ СЃРІРµСЂС…СЉРµСЃС‚РµСЃС‚РІРµРЅРЅРѕРµ С‡СѓС‚СЊС‘, РїРѕР·РІРѕР»СЏСЋС‰РµРµ РѕР±РЅР°СЂСѓР¶РёРІР°С‚СЊ РґРѕР±С‹С‡Сѓ РёР»Рё РёР·Р±РµРіР°С‚СЊ СѓРіСЂРѕР·С‹ Р·Р°РґРѕР»РіРѕ РґРѕ СЃР±Р»РёР¶РµРЅРёСЏ СЃ РЅРµР№. РЎР»РµРїС‹Рµ РЎРѕР±Р°РєРё СѓРІРµСЂРµРЅРЅРѕ СЂР°СЃРїРѕР·РЅР°СЋС‚ Рё РѕР±С…РѕРґСЏС‚ Р°РЅРѕРјР°Р»РёРё, СЂР°РґРёР°С†РёСЋ Рё РёРЅС‹Рµ СЃРєСЂС‹С‚С‹Рµ РѕРїР°СЃРЅРѕСЃС‚Рё Р—РѕРЅС‹, С‡С‚Рѕ РїРѕР·РІРѕР»СЏРµС‚ РёРј РѕР±РёС‚Р°С‚СЊ РїРѕС‡С‚Рё РЅР° РІСЃРµР№ РµС‘ С‚РµСЂСЂРёС‚РѕСЂРёРё, РєСЂРѕРјРµ СЃРѕРІСЃРµРј СѓР¶ РіРёР±Р»С‹С… РјРµСЃС‚.<br />РћРґРёРЅРѕС‡РЅС‹Рµ СЃРѕР±Р°РєРё РїРѕС‡С‚Рё РЅРµ РѕРїР°СЃРЅС‹ - РёС… РґРѕРІРѕР»СЊРЅРѕ Р»РµРіРєРѕ РїСЂРёСЃС‚СЂРµР»РёС‚СЊ РєР°Рє РёР· Р°РІС‚РѕРјР°С‚РёС‡РµСЃРєРѕРіРѕ РѕСЂСѓР¶РёСЏ, С‚Р°Рє Рё РёР· РґСЂРѕР±РѕРІРёРєРѕРІ. Рљ С‚РѕРјСѓ Р¶Рµ Р±РµР· РїРѕРґРґРµСЂР¶РєРё СЃРѕСЂРѕРґРёС‡РµР№ РѕРЅРё РґРѕРІРѕР»СЊРЅРѕ С‚СЂСѓСЃР»РёРІС‹, Рё РЅР° Р°С‚Р°РєСѓ СЂРµС€Р°С‚СЃСЏ С‚РѕР»СЊРєРѕ РµСЃР»Рё СЃРёР»СЊРЅРѕ РіРѕР»РѕРґРЅС‹. РљРѕРіРґР° РІ Р±РѕР№ РІСЃС‚СѓРїР°РµС‚ СЃС‚Р°СЏ - СЃРёС‚СѓР°С†РёСЏ РїСЂРёРЅРёРјР°РµС‚ СЃРѕРІСЃРµРј РёРЅРѕР№ РѕР±РѕСЂРѕС‚. Р“СЂСѓРїРїРµ СЃС‚Р°Р»РєРµСЂРѕРІ Р»СѓС‡С€Рµ РІСЃРµРіРѕ Р·Р°РЅСЏС‚СЊ РїР»РѕС‚РЅСѓСЋ РєСЂСѓРіРѕРІСѓСЋ РѕР±РѕСЂРѕРЅСѓ, РѕС‚СЃС‚СЂРµР»РёРІР°СЏ РЅР°Р±СЂР°СЃС‹РІР°СЋС‰РёС…СЃСЏ СЃРѕР±Р°Рє Рё РїСЂРёРєСЂС‹РІР°СЏ С‚РѕРІР°СЂРёС‰РµР№. Р•СЃР»Рё Р¶Рµ СЃРѕР±Р°РєРё РЅР°РїР°Р»Рё РЅР° СЃС‚Р°Р»РєРµСЂР°-РѕРґРёРЅРѕС‡РєСѓ, РєР°Рє РїСЂР°РІРёР»Рѕ РІСЃС‘ Р·Р°РєР°РЅС‡РёРІР°РµС‚СЃСЏ РЅРµ РІ РµРіРѕ РїРѕР»СЊР·Сѓ. Р•РґРёРЅСЃС‚РІРµРЅРЅС‹Рј РІР°СЂРёР°РЅС‚РѕРј СЃРїР°СЃРµРЅРёСЏ Р±СѓРґРµС‚ РЅРµРґРѕСЃС‚СѓРїРЅР°СЏ РґР»СЏ РїСЃРѕРІ РІРѕР·РІС‹С€РµРЅРЅРѕСЃС‚СЊ, РѕС‚РєСѓРґР° РјРѕР¶РЅРѕ РІРµСЃС‚Рё РѕРіРѕРЅСЊ РёР»Рё РїСЂРѕСЃС‚Рѕ Р¶РґР°С‚СЊ РєРѕРіРґР° вЂњСЃР»РµРїРЅРёвЂќ РїРѕС‚РµСЂСЏСЋС‚ РёРЅС‚РµСЂРµСЃ. РќРѕ РµСЃР»Рё СЃРѕР±Р°РєРё РіРѕР»РѕРґРЅС‹ - Р¶РґР°С‚СЊ РѕРЅРё Р±СѓРґСѓС‚ РґРѕР»РіРѕ.</t>";
		};
		class section3
		{
			nameSection="РљРѕРЅС‚СЂРѕР»С‘СЂ";
			description="<t font='CenturyGothicBold'>РљРѕРЅС‚СЂРѕР»С‘СЂ</t><br /><t font='CenturyGothic'>Р§СЂРµР·РІС‹С‡Р°Р№РЅРѕ РѕРїР°СЃРЅС‹Р№ РјСѓС‚Р°РЅС‚, РІСЃС‚СЂРµС‡Р°СЋС‰РёР№СЃСЏ РІ РѕСЃРЅРѕРІРЅРѕРј Р±Р»РёР¶Рµ Рє СЃРµРІРµСЂСѓ Р—РѕРЅС‹. РР·РґР°Р»РµРєР° РµРіРѕ С‡Р°СЃС‚Рѕ РјРѕР¶РЅРѕ СЃРїСѓС‚Р°С‚СЊ СЃ РѕР±С‹С‡РЅС‹Рј С‡РµР»РѕРІРµРєРѕРј РІ Р»РѕС…РјРѕС‚СЊСЏС…, РЅРѕ РІР±Р»РёР·Рё Р·Р°РјРµС‚РЅС‹ Р·РЅР°С‡РёС‚РµР»СЊРЅС‹Рµ РѕС‚Р»РёС‡РёСЏ: РЅРµРїСЂРѕРїРѕСЂС†РёРѕРЅР°Р»СЊРЅРѕ Р±РѕР»СЊС€Р°СЏ, Р»С‹СЃР°СЏ РіРѕР»РѕРІР°, РІС‹РїСѓС‡РµРЅРЅС‹Рµ РіР»Р°Р·Р°, РјСѓС‚РёСЂРѕРІР°РІС€РёРµ РІРµСЂС…РЅРёРµ Рё РЅРёР¶РЅРёРµ РєРѕРЅРµС‡РЅРѕСЃС‚Рё, РїРѕРєСЂС‹С‚Р°СЏ РІРѕР»РґС‹СЂСЏРјРё Рё СЏР·РІР°РјРё РєРѕР¶Р°. РћРїР°СЃРµРЅ РІ РѕСЃРЅРѕРІРЅРѕРј РёР·-Р·Р° РїСЃРё-СЃРїРѕСЃРѕР±РЅРѕСЃС‚РµР№, РІР»РёСЏСЋС‰РёС… РЅР° РјРѕР·Рі Р¶РµСЂС‚РІС‹. Р СЏРґРѕРј СЃ РљРѕРЅС‚СЂРѕР»С‘СЂРѕРј С‡Р°СЃС‚Рѕ РјРѕР¶РЅРѕ СѓРІРёРґРµС‚СЊ РґСЂСѓРіРёС… РјСѓС‚Р°РЅС‚РѕРІ, РІР·СЏС‚С‹С… РїРѕРґ РєРѕРЅС‚СЂРѕР»СЊ, Р° РѕСЃРѕР±Рѕ РјР°С‚РµСЂС‹Рµ РѕСЃРѕР±Рё РјРѕРіСѓС‚ РїРѕРґС‡РёРЅРёС‚СЊ СЃРµР±Рµ РґР°Р¶Рµ Р»СЋРґРµР№. РџРѕР±С‹РІР°РІС€РёРµ РїРѕРґ РµРіРѕ РІРѕР·РґРµР№СЃС‚РІРёРµРј РіРѕРІРѕСЂСЏС‚ Рѕ СЃРёР»СЊРЅРѕР№ РґРµР·РѕСЂРёРµРЅС‚Р°С†РёРё, РЅРµСЃРїРѕСЃРѕР±РЅРѕСЃС‚Рё СЏСЃРЅРѕ РјС‹СЃР»РёС‚СЊ Рё РїР°РЅРёС‡РµСЃРєРѕРј СЃС‚СЂР°С…Рµ, РєРѕС‚РѕСЂС‹Р№ РјСѓС‚Р°РЅС‚ РІРЅСѓС€Р°РµС‚ СЃРІРѕРµР№ Р¶РµСЂС‚РІРµ. РџРѕРїР°РІС€РёРµ Р¶Рµ РїРѕРґ РєРѕРЅС‚СЂРѕР»СЊ Р»СЋРґРё РїРѕР»РЅРѕСЃС‚СЊСЋ С‚РµСЂСЏСЋС‚ РІРѕР»СЋ, РїРѕРґС‡РёРЅСЏСЏСЃСЊ РјРµРЅС‚Р°Р»СЊРЅС‹Рј РєРѕРјР°РЅРґР°Рј РјСѓС‚Р°РЅС‚Р°. РўРѕС‚, С‡СЊРµ СЃРѕР·РЅР°РЅРёРµ РїСЂРµР±С‹РІР°Р»Рѕ РїРѕРґ РєРѕРЅС‚СЂРѕР»РµРј СЃР»РёС€РєРѕРј РґРѕР»РіРѕ, РїРѕСЃР»Рµ РѕСЃРІРѕР±РѕР¶РґРµРЅРёСЏ РІРµРґС‘С‚ СЃРµР±СЏ РєР°Рє Р·РѕРјР±РёСЂРѕРІР°РЅРЅС‹Р№, С‚Р°Рє РєР°Рє РјРѕР·РіСѓ Р±С‹Р» РїСЂРёС‡РёРЅРµРЅ РЅРµРїРѕРїСЂР°РІРёРјС‹Р№ СѓС‰РµСЂР±.<br />Р’ РєР°С‡РµСЃС‚РІРµ Р»РѕРіРѕРІР° РјСѓС‚Р°РЅС‚ РІС‹Р±РёСЂР°РµС‚ РїРѕРґРІР°Р»С‹, РїРѕРґР·РµРјРµР»СЊСЏ Рё С‚РѕРЅРЅРµР»Рё, РѕРґРЅР°РєРѕ РІСЃС‚СЂРµС‡Р°РµС‚СЃСЏ Рё РЅР° РїРѕРІРµСЂС…РЅРѕСЃС‚Рё, РѕР±С‹С‡РЅРѕ РІР±Р»РёР·Рё Р·Р°Р±СЂРѕС€РµРЅРЅС‹С… Р·РґР°РЅРёР№. Р’РµРґС‘С‚ РѕРґРёРЅРѕС‡РЅС‹Р№ Рё СЃРєСЂС‹С‚РЅС‹Р№ РѕР±СЂР°Р· Р¶РёР·РЅРё, РІРѕ РІСЂРµРјСЏ РѕС…РѕС‚С‹ РЅРµ РѕС‚С…РѕРґРёС‚ РґР°Р»РµРєРѕ РѕС‚ Р»РѕРіРѕРІР°, С‡С‚Рѕ РїРѕР·РІРѕР»СЏРµС‚ РёР·Р±РµР¶Р°С‚СЊ РІСЃС‚СЂРµС‡Рё СЃ РЅРёРј РїСЂРё РїР»Р°РЅРёСЂРѕРІР°РЅРёРё РјР°СЂС€СЂСѓС‚Р°. РЎР°РјРѕРµ РіР»Р°РІРЅРѕРµ РїСЂРё РІСЃС‚СЂРµС‡Рµ СЃ РљРѕРЅС‚СЂРѕР»С‘СЂРѕРј - Р·Р°РјРµС‚РёС‚СЊ РµРіРѕ Р±С‹СЃС‚СЂРµРµ, С‡РµРј РѕРЅ РїРѕС‡СѓРІСЃС‚РІСѓРµС‚ РІС‚РѕСЂР¶РµРЅРёРµ РЅР° СЃРІРѕСЋ С‚РµСЂСЂРёС‚РѕСЂРёСЋ. РћРґРёРЅРѕС‡РєРµ РІ СЌС‚РѕРј СЃР»СѓС‡Р°Рµ Р»СѓС‡С€Рµ РІСЃРµРіРѕ РѕС‚СЃС‚СѓРїРёС‚СЊ Рё РѕР±РѕР№С‚Рё РѕРїР°СЃРЅС‹Р№ СѓС‡Р°СЃС‚РѕРє - РјР°Р»Рѕ РєР°РєРѕР№ РѕРїС‹С‚РЅС‹Р№ РѕС…РѕС‚РЅРёРє СЃРѕРіР»Р°СЃРёС‚СЃСЏ СЃСЂР°Р¶Р°С‚СЊСЃСЏ СЃ РљРѕРЅС‚СЂРѕР»С‘СЂРѕРј РЅР° РµРіРѕ Р¶Рµ С‚РµСЂСЂРёС‚РѕСЂРёРё. Р“СЂСѓРїРїР° Р¶Рµ РјРѕР¶РµС‚ РїРѕРїС‹С‚Р°С‚СЊСЃСЏ Р·Р°СЃС‚Р°С‚СЊ РјСѓС‚Р°РЅС‚Р° РІСЂР°СЃРїР»РѕС…, РѕС‚РєСЂС‹РІ РІ РµРіРѕ СЃС‚РѕСЂРѕРЅСѓ РєРѕРЅС†РµРЅС‚СЂРёСЂРѕРІР°РЅРЅС‹Р№ РѕРіРѕРЅСЊ Рё РЅРµ РїРѕР·РІРѕР»СЏСЏ РµРјСѓ СЃРєРѕРЅС†РµРЅС‚СЂРёСЂРѕРІР°С‚СЊСЃСЏ РґР»СЏ РєРѕРЅС‚СЂР°С‚Р°РєРё. РќРѕ РґР°Р¶Рµ РґР»СЏ С…РѕСЂРѕС€Рѕ РІРѕРѕСЂСѓР¶С‘РЅРЅРѕРіРѕ РѕС‚СЂСЏРґР° РєРѕРЅС‚СЂРѕР»С‘СЂ - РѕРїР°СЃРЅС‹Р№ Рё РЅРµРїСЂРµРґСЃРєР°Р·СѓРµРјС‹Р№ РїСЂРѕС‚РёРІРЅРёРє.<br />РЎСЂРµРґРё СЃС‚Р°Р»РєРµСЂРѕРІ С…РѕРґРёС‚ РЅРµРјР°Р»Рѕ Р±Р°РµРє Рѕ СЂР°Р·СѓРјРЅС‹С… РљРѕРЅС‚СЂРѕР»С‘СЂР°С…, РѕРґРЅР°РєРѕ РґРѕСЃС‚РѕРІРµСЂРЅС‹С… РїРѕРґС‚РІРµСЂР¶РґРµРЅРёР№ РґР°РЅРЅС‹Рј СЃР»СѓС…Р°Рј РЅРµС‚.</t>";
		};
		class section4
		{
			nameSection="РљСЂРѕРІРѕСЃРѕСЃ";
			description="<t font='CenturyGothicBold'>РљСЂРѕРІРѕСЃРѕСЃ</t><br /><t font='CenturyGothic'>Р С‘РІ РєСЂРѕРІРѕСЃРѕСЃР° - РѕРґРёРЅ РёР· РЅР°РёР±РѕР»РµРµ Р¶СѓС‚РєРёС… Р·РІСѓРєРѕРІ, С‡С‚Рѕ РєРѕРіРґР° Р»РёР±Рѕ РѕРіР»Р°С€Р°Р»Рё Р—РѕРЅСѓ. РРјРµРЅРЅРѕ СЌС‚РѕС‚ РјРѕРЅСЃС‚СЂ СЏРІР»СЏРµС‚СЃСЏ СЃР°РјС‹Рј СЃС‚СЂР°С€РЅС‹Рј РєРѕС€РјР°СЂРѕРј Р»СЋР±РѕРіРѕ СЃС‚Р°Р»РєРµСЂР°, Р·Р°С€РµРґС€РµРіРѕ СЃР»РёС€РєРѕРј РіР»СѓР±РѕРєРѕ РІ Р§Р—Рћ. Р’С‹РіР»СЏРґРёС‚ РєР°Рє РІС‹СЃРѕРєРёР№, РѕРєРѕР»Рѕ РґРІСѓС… РјРµС‚СЂРѕРІ, РіСѓРјР°РЅРѕРёРґ, СЃ С‚С‘РјРЅРѕР№ РєРѕР¶РµР№, СЃРІРµС‚СЏС‰РёРјРёСЃСЏ РіР»Р°Р·Р°РјРё, РІС‹СЂР°Р¶РµРЅРЅРѕР№ РјСѓСЃРєСѓР»Р°С‚СѓСЂРѕР№ Рё С‰СѓРїР°Р»СЊС†Р°РјРё РЅР° РјРµСЃС‚Рµ СЂС‚Р°, РїСЂРё РїРѕРјРѕС‰Рё РєРѕС‚РѕСЂС‹С… РјСѓС‚Р°РЅС‚ РїРёС‚Р°РµС‚СЃСЏ. РљРёСЃС‚Рё РІРµСЂС…РЅРёС… РєРѕРЅРµС‡РЅРѕСЃС‚РµР№ СѓРІРµРЅС‡Р°РЅС‹ РєСЂСѓРїРЅС‹РјРё РєРѕРіС‚СЏРјРё, Р° С„РёР·РёС‡РµСЃРєРѕР№ СЃРёР»С‹ РјРѕРЅСЃС‚СЂР° С…РІР°С‚РёС‚, С‡С‚РѕР±С‹ РїСЂРё СѓСЃРёР»РёРё СЂР°Р·РѕСЂРІР°С‚СЊ С‡РµР»РѕРІРµРєР° РЅР° С‡Р°СЃС‚Рё. Р•СЃР»Рё РєСЂРѕРІРѕСЃРѕСЃСѓ СѓРґР°Р»РѕСЃСЊ РЅР°РЅРµСЃС‚Рё СѓРґР°СЂ, С‚Рѕ РѕРЅ, РІРµСЂРѕСЏС‚РЅРѕ, Р±СѓРґРµС‚ СЃРјРµСЂС‚РµР»СЊРЅС‹Рј, С‚Р°Рє РєР°Рє РјРѕРЅСЃС‚СЂСѓ РІРїРѕР»РЅРµ С…РІР°С‚РёС‚ СЃРёР» СЌС‚РёРј СѓРґР°СЂРѕРј РїРµСЂРµР»РѕРјР°С‚СЊ Р¶РµСЂС‚РІРµ РєРѕСЃС‚Рё РёР»Рё РґР°Р¶Рµ РІС‹СЂРІР°С‚СЊ РёР· РµС‘ С‚РµР»Р° РєСѓСЃРѕРє. <br />РќРµРІРµСЂРѕСЏС‚РЅР°СЏ СЃРёР»Р° - РґР°Р»РµРєРѕ РЅРµ СЃР°РјС‹Р№ РіР»Р°РІРЅС‹Р№ РєРѕР·С‹СЂСЊ РєСЂРѕРІРѕСЃРѕСЃР°. РќР°РёР±РѕР»РµРµ СѓРґРёРІРёС‚РµР»СЊРЅР° Рё РѕРїР°СЃРЅР° РµРіРѕ СЃРїРѕСЃРѕР±РЅРѕСЃС‚СЊ СЃС‚Р°РЅРѕРІРёС‚СЊСЃСЏ РЅРµРІРёРґРёРјС‹Рј РґР»СЏ СЃС‚РѕСЂРѕРЅРЅРµРіРѕ РЅР°Р±Р»СЋРґР°С‚РµР»СЏ. РСЃРїРѕР»СЊР·СѓСЏ СЌС‚Рѕ РїСЂРµРёРјСѓС‰РµСЃС‚РІРѕ, РјРѕРЅСЃС‚СЂ СЃС‚Р°СЂР°РµС‚СЃСЏ Р°С‚Р°РєРѕРІР°С‚СЊ СЃРѕ СЃРїРёРЅС‹ РёР»Рё СЃР±РѕРєСѓ, РЅРµ РґР°РІР°СЏ Р¶РµСЂС‚РІРµ С€Р°РЅСЃР° РѕРїРѕРјРЅРёС‚СЊСЃСЏ Рё РѕРєР°Р·Р°С‚СЊ СЃРѕРїСЂРѕС‚РёРІР»РµРЅРёРµ. Р РёРјРµРЅРЅРѕ РІ СЌС‚РѕС‚ РјРѕРјРµРЅС‚ РєСЂРѕРІРѕСЃРѕСЃ СЃС‚Р°РЅРѕРІРёС‚СЃСЏ РІРёРґРёРјС‹Рј, С‚Р°Рє РєР°Рє РјР°СЃРєРёСЂРѕРІРєР°, СЃСѓРґСЏ РїРѕ РІСЃРµРјСѓ, С‚СЂРµР±СѓРµС‚ РїРѕСЃС‚РѕСЏРЅРЅРѕР№ РєРѕРЅС†РµРЅС‚СЂР°С†РёРё. Р•СЃР»Рё Р¶РµСЂС‚РІР° РІСЃС‘ Р¶Рµ СЃРјРѕРіР»Р° РґР°С‚СЊ РѕС‚РїРѕСЂ РёР»Рё РґР°Р¶Рµ СЂР°РЅРёС‚СЊ РјСѓС‚Р°РЅС‚Р°, С‚Рѕ СЌС‚Рѕ РЅРµ СЃРёР»СЊРЅРѕ РЅР°РІСЂРµРґРёС‚ РµРјСѓ. РњРµС‚Р°Р±РѕР»РёР·Рј РїРѕР·РІРѕР»СЏРµС‚ Р·Р°РєСЂС‹РІР°С‚СЊ РїСѓР»РµРІС‹Рµ СЂР°РЅРµРЅРёСЏ Р·Р° СЃС‡РёС‚Р°РЅРЅС‹Рµ РјРёРЅСѓС‚С‹, Р° РѕР±С‰Р°СЏ Р¶РёРІСѓС‡РµСЃС‚СЊ С‚Р°РєРѕРІР°, С‡С‚Рѕ РїСЂРё РЅРµРєРѕС‚РѕСЂРѕРј РІРµР·РµРЅРёРё РјРѕРЅСЃС‚СЂ РјРѕР¶РµС‚ РїРµСЂРµР¶РёС‚СЊ РґР°Р¶Рµ РїРѕРїР°РґР°РЅРёРµ РёР· РєСЂСѓРїРЅРѕРєР°Р»РёР±РµСЂРЅРѕРіРѕ РїСѓР»РµРјС‘С‚Р°. РџРѕС‚РѕРјСѓ РґР°Р¶Рµ РѕС‚СЃС‚СѓРїРёРІС€РёР№ РёР·-Р·Р° СЂР°РЅ РєСЂРѕРІРѕСЃРѕСЃ, РєР°Рє РїСЂР°РІРёР»Рѕ, РІРѕР·РІСЂР°С‰Р°РµС‚СЃСЏ. <br />РљСЂРѕРІРѕСЃРѕСЃС‹ РѕР±РёС‚Р°СЋС‚ РІ РѕСЃРЅРѕРІРЅРѕРј РЅР° Р±РѕР»РѕС‚Р°С…, РІ СЃС‹СЂС‹С… РїРѕРґР·РµРјРµР»СЊСЏС…, РїРѕРґРІР°Р»Р°С… Рё СЃС…РѕР¶РёС… С‚С‘РјРЅС‹С… РјРµСЃС‚Р°С… СЃ РїРѕРІС‹С€РµРЅРЅРѕР№ РІР»Р°Р¶РЅРѕСЃС‚СЊСЋ, РїСЂРёС‡РµРј РєР°Рє РїРѕРѕРґРёРЅРѕС‡РєРµ, С‚Р°Рє Рё РіСЂСѓРїРїР°РјРё РґРѕ 4-5 РѕСЃРѕР±РµР№. РћС…РѕС‚СЏС‚СЃСЏ РїРѕ РЅРѕС‡Р°Рј. Р“СЂСѓРїРїРµ СЃС‚Р°Р»РєРµСЂРѕРІ, РїРѕРґРІРµСЂРіРЅСѓРІС€РµР№СЃСЏ Р°С‚Р°РєРµ РєСЂРѕРІРѕСЃРѕСЃР°, Р»СѓС‡С€Рµ РІСЃРµРіРѕ Р·Р°РЅСЏС‚СЊ РєР°РєРѕРµ Р»РёР±Рѕ СЃС‚СЂРѕРµРЅРёРµ, РєРѕРЅС‚СЂРѕР»РёСЂСѓСЏ РІС‹С…РѕРґС‹, РёР»Рё Р¶Рµ РІСЃС‚Р°С‚СЊ РІ РєСЂСѓРіРѕРІСѓСЋ РѕР±РѕСЂРѕРЅСѓ. РЎС‚Р°Р»РєРµСЂСѓ-РѕРґРёРЅРѕС‡РєРµ, РІСЃС‚СЂРµС‚РёРІС€РµРіРѕ РѕРґРЅРѕРіРѕ РёР»Рё РЅРµСЃРєРѕР»СЊРєРёС… РєСЂРѕРІРѕСЃРѕСЃРѕРІ, РґР»СЏ СЃРїР°СЃРµРЅРёСЏ Р¶РёР·РЅРё РґРѕСЃС‚СѓРїРЅРѕ РґРІР° РїСѓС‚Рё. РџРµСЂРІС‹Р№ - Р·Р°Р±СЂР°С‚СЊСЃСЏ РєСѓРґР° Р»РёР±Рѕ, РєСѓРґР° РєСЂРѕРІРѕСЃРѕСЃ Р·Р°Р»РµР·С‚СЊ РЅРµ СЃРјРѕР¶РµС‚, Рё Р¶РґР°С‚СЊ РїРѕРєР° РјСѓС‚Р°РЅС‚С‹ СѓР№РґСѓС‚. Р’С‚РѕСЂРѕР№ - Р±РµР¶Р°С‚СЊ.</t>";
		};
		class section5
		{
			nameSection="РљР°Р±Р°РЅ";
			description="<t font='CenturyGothicBold'>РљР°Р±Р°РЅ</t><br /><t font='CenturyGothic'>РџСѓСЃС‚СЊ СЃС‚РѕР»СЊ РїСЂРѕСЃС‚РѕРµ РЅР°Р·РІР°РЅРёРµ РЅРµ РѕР±РјР°РЅС‹РІР°РµС‚ С‡РёС‚Р°С‚РµР»СЏ - РµСЃР»Рё РѕР±С‹С‡РЅС‹Р№ РґРёРєРёР№ РєР°Р±Р°РЅ РІ С…РѕР»РєРµ Р±С‹РІР°РµС‚ РґРѕ РјРµС‚СЂР°, Рё РІРµСЃРёС‚ РІ СЃСЂРµРґРЅРµРј РѕРєРѕР»Рѕ С†РµРЅС‚РЅРµСЂР°-РїРѕР»С‚РѕСЂР°, С‚Рѕ РљР°Р±Р°РЅС‹ Р§Р—Рћ - РЅР°СЃС‚РѕСЏС‰РёРµ РјРѕРЅСЃС‚СЂС‹ РЅР° РёС… С„РѕРЅРµ. Р’С‹СЂР°СЃС‚Р°СЏ РґРѕ РїРѕР»СѓС‚РѕСЂР° РјРµС‚СЂРѕРІ РІ С…РѕР»РєРµ Рё РёРјРµСЏ РІРµСЃ РґРѕ РїРѕР»СѓС‚РѕРЅРЅС‹, РљР°Р±Р°РЅС‹ СЏРІР»СЏСЋС‚ СЃРѕР±РѕР№ СЃРµСЂСЊС‘Р·РЅСѓСЋ СѓРіСЂРѕР·Сѓ РґР»СЏ С‡РµР»РѕРІРµРєР°, РѕСЃРѕР±РµРЅРЅРѕ СѓС‡РёС‚С‹РІР°СЏ РёС… СЃС‚Р°РґРЅС‹Рµ РёРЅСЃС‚РёРЅРєС‚С‹. РњСѓС‚Р°С†РёРё РёР·РјРµРЅРёР»Рё СЃС‚СЂРѕРµРЅРёРµ РёС… РјРѕСЂРґС‹, СѓРІРµР»РёС‡РёР»РёСЃСЊ РєР»С‹РєРё, РѕР±СЂР°Р·РѕРІР°Р»Р°СЃСЊ РґРѕРїРѕР»РЅРёС‚РµР»СЊРЅР°СЏ РїР°СЂР° СѓС€РµР№, РєРѕРїС‹С‚Р° СѓРґР»РёРЅРёР»РёСЃСЊ, Рё РїРѕ С„РѕСЂРјРµ СЃС‚Р°Р»Рё РЅР°РїРѕРјРёРЅР°С‚СЊ РєРѕРіС‚Рё. РўР°РєР¶Рµ РёР·РјРµРЅРёР»РѕСЃСЊ РїРѕРІРµРґРµРЅРёРµ - РљР°Р±Р°РЅС‹ СЃС‚Р°Р»Рё РІРµСЃС‚Рё СЃРµР±СЏ РІ СЂР°Р·С‹ Р°РіСЂРµСЃСЃРёРІРЅРµРµ РґР°Р¶Рµ РїРѕ РѕС‚РЅРѕС€РµРЅРёСЋ РґСЂСѓРі Рє РґСЂСѓРіСѓ - РЅРµСЂРµРґРєРѕ РѕС‚РјРµС‡Р°Р»РёСЃСЊ СЃР»СѓС‡Р°Рё РєР°РЅРЅРёР±Р°Р»РёР·РјР°.<br />РР·РЅР°С‡Р°Р»СЊРЅРѕ СЃС‚Р°РґРЅС‹Рµ Р¶РёРІРѕС‚РЅС‹Рµ, РѕРЅРё РґРѕ СЃРёС… РїРѕСЂ РґРµСЂР¶Р°С‚СЃСЏ РіСЂСѓРїРїР°РјРё РґРѕ 10, СЂРµР¶Рµ 15 РѕСЃРѕР±РµР№, РІРѕ РіР»Р°РІРµ РєРѕС‚РѕСЂС‹С… РІСЃРµРіРґР° СЃС‚РѕРёС‚ РІРѕР¶Р°Рє - РЅР°РёР±РѕР»РµРµ РєСЂСѓРїРЅС‹Р№, СЃРёР»СЊРЅС‹Р№ Рё Р°РіСЂРµСЃСЃРёРІРЅС‹Р№ СЃР°РјРµС†. РљР°Р±Р°РЅС‹ С‚РµСЂСЂРёС‚РѕСЂРёР°Р»СЊРЅС‹ - РїСЂРѕРЅРёРєРЅСѓРІС€РёР№ РЅР° С‚РµСЂСЂРёС‚РѕСЂРёСЋ СЃС‚Р°РґР° Р±СѓРґРµС‚ РЅРµРјРµРґР»РµРЅРЅРѕ Р°С‚Р°РєРѕРІР°РЅ, Рё, СЃРєРѕСЂРµРµ РІСЃРµРіРѕ, СЂР°СЃС‚РѕРїС‚Р°РЅ. РР·РІРµСЃС‚РЅС‹ СЃР»СѓС‡Р°Рё СЃС‚С‹С‡РµРє РјРµР¶РґСѓ РљР°Р±Р°РЅР°РјРё Рё РљСЂРѕРІРѕСЃРѕСЃР°РјРё, РїРѕР±РµРґРёС‚РµР»СЏРјРё РІ РєРѕС‚РѕСЂС‹С… РїРѕСЃР»РµРґРЅРёРµ РІС‹С…РѕРґРёР»Рё РґР°Р»РµРєРѕ РЅРµ РІСЃРµРіРґР°. РђС‚Р°РєСѓСЋС‚ РљР°Р±Р°РЅС‹ С‚Р°Рє Р¶Рµ, РєР°Рє Рё РёС… РґРёРєРёРµ СЃРѕСЂРѕРґРёС‡Рё Р·Р° РїРµСЂРёРјРµС‚СЂРѕРј - СЃС‚Р°СЂР°СЋС‚СЃСЏ СЃ СЂР°Р·Р±РµРіР° СЂР°СЃРїРѕСЂРѕС‚СЊ Р¶РµСЂС‚РІРµ Р±СЂСЋС…Рѕ, РёР»Рё РІРѕРІСЃРµ РїРѕРґРЅСЏС‚СЊ РµС‘ РЅР° РєР»С‹РєРё, СЃР±РёРІ СЃ РЅРѕРі. Р—Р°С‚РµРј РѕРіР»СѓС€С‘РЅРЅРѕРіРѕ Рё РґРµР·РѕСЂРёРµРЅС‚РёСЂРѕРІР°РЅРЅРѕРіРѕ РїСЂРѕС‚РёРІРЅРёРєР° Р·Р°Р±РёРІР°СЋС‚ РєСЂСѓРїРЅС‹РјРё Рё РѕСЃС‚СЂС‹РјРё РєРѕРїС‹С‚Р°РјРё.<br />Р’СЃС‚СЂРµС‚РёС‚СЊ РљР°Р±Р°РЅР° РјРѕР¶РЅРѕ РїРѕС‡С‚Рё РіРґРµ СѓРіРѕРґРЅРѕ РЅР° СЋРіРµ Р—РѕРЅС‹. Р’ РѕСЃРЅРѕРІРЅРѕРј Р¶РёРІСѓС‚ РЅР° СЂР°РІРЅРёРЅР°С…, СЃРІР°Р»РєР°С… РјСѓСЃРѕСЂР° Рё РѕРєРѕР»Рѕ Р±РѕР»РѕС‚, С‚Р°РєР¶Рµ РІСЃС‚СЂРµС‡Р°СЋС‚СЃСЏ РІ Р»РµСЃР°С…. РСЃРєР»СЋС‡РёС‚РµР»СЊРЅР°СЏ Р°РіСЂРµСЃСЃРёСЏ, СЂР°Р·РјРµСЂС‹ Рё СЃРєРѕСЂРѕСЃС‚СЊ СЌС‚РёС… РјСѓС‚Р°РЅС‚РѕРІ РґРµР»Р°СЋС‚ РёС… РЅР°РёР±РѕР»РµРµ РѕРїР°СЃРЅС‹РјРё РїСЂРѕС‚РёРІРЅРёРєР°РјРё РІРѕ РІСЂРµРјСЏ РіРѕРЅР°. РЎС‚Р°Р»РєРµСЂСѓ-РѕРґРёРЅРѕС‡РєРµ СЃС‚Р°РґРѕ РљР°Р±Р°РЅРѕРІ Р»СѓС‡С€Рµ РѕР±РѕР№С‚Рё, РёР»Рё Р¶Рµ РёР·РјРµРЅРёС‚СЊ РІРµРєС‚РѕСЂ РґРІРёР¶РµРЅРёСЏ, РґР°Р±С‹ РЅРµ Р·Р°Р№С‚Рё РЅР° РёС… С‚РµСЂСЂРёС‚РѕСЂРёСЋ. Р•СЃР»Рё Р¶Рµ РљР°Р±Р°РЅС‹ Р°С‚Р°РєСѓСЋС‚ - СЃРїР°СЃС‚Рё РјРѕР¶РµС‚ С…РѕСЂРѕС€РёР№ РґСЂРѕР±РѕРІРёРє Рё РєР°РєР°СЏ Р»РёР±Рѕ РїСЂРѕС‡РЅР°СЏ РІРѕР·РІС‹С€РµРЅРЅРѕСЃС‚СЊ, РєСѓРґР° РєР°Р±Р°РЅР°Рј РЅРµ Р·Р°Р±СЂР°С‚СЊСЃСЏ. </t>";
		};
		class section6
		{
			nameSection="Р—РѕРјР±Рё";
			description="<t font='CenturyGothicBold'>Р—РѕРјР±Рё</t><br /><t font='CenturyGothic'>Р‘Р»РёР¶Рµ Рє СЃРµРІРµСЂСѓ Р—РѕРЅС‹ С‡Р°СЃС‚Рѕ РјРѕР¶РЅРѕ РІСЃС‚СЂРµС‚РёС‚СЊ Р—РѕРјР±РёСЂРѕРІР°РЅРЅС‹С… - СЃС‚Р°Р»РєРµСЂРѕРІ, РІРѕРµРЅРЅС‹С… Рё РјРЅРѕРіРёС… РґСЂСѓРіРёС…, С‡РµР№ РјРѕР·Рі Р±С‹Р» РЅРµРѕР±СЂР°С‚РёРјРѕ РїРѕРІСЂРµР¶РґС‘РЅ. РЇРІР»СЏСЏСЃСЊ РїРѕ Р±РѕР»СЊС€РµР№ С‡Р°СЃС‚Рё Р¶РµСЂС‚РІР°РјРё РїСЃРё-СѓСЃС‚Р°РЅРѕРІРѕРє Рё РјСѓС‚Р°РЅС‚РѕРІ-РїСЃРёРѕРЅРёРєРѕРІ, СЌС‚Рё СЃСѓС‰РµСЃС‚РІР° РІРµРґСѓС‚ РєСЂР°Р№РЅРµ РїСЂРёРјРёС‚РёРІРЅС‹Р№ РѕР±СЂР°Р· СЃСѓС‰РµСЃС‚РІРѕРІР°РЅРёСЏ, СЃРІРѕРґСЏС‰РёС…СЃСЏ Рє СѓРґРѕРІР»РµС‚РІРѕСЂРµРЅРёСЋ СЃР°РјС‹С… Р±Р°Р·РѕРІС‹С…, Р¶РёРІРѕС‚РЅС‹С… РїРѕС‚СЂРµР±РЅРѕСЃС‚РµР№: РїРѕРёСЃРє РїСЂРѕРїРёС‚Р°РЅРёСЏ, РѕС…СЂР°РЅР° СЃРІРѕРµР№ С‚РµСЂСЂРёС‚РѕСЂРёРё Рё СѓРЅРёС‡С‚РѕР¶РµРЅРёРµ Р»СЋР±РѕРіРѕ РЅР°СЂСѓС€РёС‚РµР»СЏ. РћР±С‹С‡РЅРѕ Р—РѕРјР±РёСЂРѕРІР°РЅРЅС‹Рµ РЅРµ РїРѕРєРёРґР°СЋС‚ РјРµСЃС‚, РІ РєРѕС‚РѕСЂС‹С… РѕРЅРё СЃС‚Р°Р»Рё Р¶РµСЂС‚РІР°РјРё РїСЃРё-РёР·Р»СѓС‡РµРЅРёСЏ, РЅРѕ Р·Р°РґРѕРєСѓРјРµРЅС‚РёСЂРѕРІР°РЅС‹ СЃР»СѓС‡Р°Рё, РєРѕРіРґР° С†РµР»С‹Рµ РІРѕР»РЅС‹ Р—РѕРјР±РёСЂРѕРІР°РЅРЅС‹С… РїРѕ РЅРµРёР·РІРµСЃС‚РЅРѕР№ РїСЂРёС‡РёРЅРµ РјРёРіСЂРёСЂРѕРІР°Р»Рё РІ РґСЂСѓРіРёРµ СѓС‡Р°СЃС‚РєРё Р—РѕРЅС‹. <br />Р—РѕРјР±РёСЂРѕРІР°РЅРЅРѕРіРѕ РѕС‚ РЅРѕСЂРјР°Р»СЊРЅРѕРіРѕ С‡РµР»РѕРІРµРєР° РѕС‚Р»РёС‡Р°РµС‚ РєР°Рє РєСЂР°Р№РЅРµ РЅРµСѓРєР»СЋР¶Р°СЏ РїРѕС…РѕРґРєР°, С‚Р°Рє Рё РЅРµСЃРІСЏР·РЅР°СЏ СЂРµС‡СЊ. РЇРІР»СЏСЏСЃСЊ РїСЂРµРёРјСѓС‰РµСЃС‚РІРµРЅРЅРѕ Р±С‹РІС€РёРјРё РїСЂРµРґСЃС‚Р°РІРёС‚РµР»СЏРјРё СЃС‚Р°Р»РєРµСЂСЃРєРёС…, РёР»Рё РёРЅС‹С… РІРѕРµРЅРЅС‹С… С„РѕСЂРјРёСЂРѕРІР°РЅРёР№, Р—РѕРјР±РёСЂРѕРІР°РЅРЅС‹Рµ С‚Р°РєР¶Рµ РјРѕРіСѓС‚ РІС‹РіР»СЏРґРµС‚СЊ РєР°Рє Рё РіСЂР°Р¶РґР°РЅСЃРєРёРµ Р»РёС†Р° - СЌС‚Рѕ Р±С‹РІС€РёРµ Р¶РёС‚РµР»Рё РјРЅРѕРіРѕС‡РёСЃР»РµРЅРЅС‹С… РґРµСЂРµРІРµРЅСЊ, С‡Р»РµРЅС‹ РёСЃСЃР»РµРґРѕРІР°С‚РµР»СЊСЃРєРёС… СЌРєСЃРїРµРґРёС†РёР№ Рё РїСЂРѕС‡РёРµ СЃР»СѓС‡Р°Р№РЅРѕ РїРѕРїР°РІС€РёРµ РїРѕРґ РїСЃРё-РІРѕР·РґРµР№СЃС‚РІРёРµ Р»РёС‡РЅРѕСЃС‚Рё. <br />Р“СЂСѓРїРїС‹ Р—РѕРјР±РёСЂРѕРІР°РЅРЅС‹С… С‚Р°РєР¶Рµ РјРѕРіСѓС‚ РІС‹СЃС‚СѓРїР°С‚СЊ РІ РєР°С‡РµСЃС‚РІРµ РѕС…СЂР°РЅС‹ С‚РµСЂСЂРёС‚РѕСЂРёРё РїСЃРё-РјСѓС‚Р°РЅС‚РѕРІ, РєРѕС‚РѕСЂС‹Рј РѕРЅРё РїРѕРґС‡РёРЅСЏСЋС‚СЃСЏ. <br />Р’ СЂРµРґРєРёС… СЃР»СѓС‡Р°СЏС… Р—РѕРјР±РёСЂРѕРІР°РЅРЅС‹Рµ СЃРѕС…СЂР°РЅСЏСЋС‚ СЃРїРѕСЃРѕР±РЅРѕСЃС‚СЊ Рє РІР»Р°РґРµРЅРёСЋ РѕСЂСѓР¶РёРµРј, РєРѕС‚РѕСЂРѕРµ РѕСЃС‚Р°Р»РѕСЃСЊ РїСЂРё РЅРёС…. РўР°РєРёС… РѕСЃРѕР±РµР№ СЃР»РµРґСѓРµС‚ СѓРЅРёС‡С‚РѕР¶Р°С‚СЊ РїРµСЂРІС‹РјРё, Р¶РµР»Р°С‚РµР»СЊРЅРѕ СЃ Р±РµР·РѕРїР°СЃРЅРѕР№ РґРёСЃС‚Р°РЅС†РёРё. РўР°РєС‚РёРєР° Р±РѕСЏ СЃ РґР°РЅРЅС‹РјРё РјСѓС‚Р°РЅС‚Р°РјРё РїСЂРѕСЃС‚Р° - РЅРµ РїРѕРґРїСѓСЃРєР°С‚СЊ Рє СЃРµР±Рµ, СЃС‚Р°СЂР°С‚СЊСЃСЏ СЃС‚СЂРµР»СЏС‚СЊ РІ РіРѕР»РѕРІСѓ. РљСЂР°Р№РЅСЏСЏ РјРµРґР»РёС‚РµР»СЊРЅРѕСЃС‚СЊ Рё РЅРµСѓРєР»СЋР¶РµСЃС‚СЊ Р—РѕРјР±РёСЂРѕРІР°РЅРЅС‹С… Р»РёС€Р°РµС‚ РёС… РІРѕР·РјРѕР¶РЅРѕСЃС‚Рё РІРµСЃС‚Рё РїСЂРёС†РµР»СЊРЅС‹Р№ РѕРіРѕРЅСЊ, С‡С‚Рѕ РїРѕР·РІРѕР»СЏРµС‚ Р¶РµСЂС‚РІРµ РІРѕРІСЂРµРјСЏ СЂРµС‚РёСЂРѕРІР°С‚СЊСЃСЏ, РґР°Р±С‹ Р·Р°РЅСЏС‚СЊ Р±РѕР»РµРµ РІС‹РіРѕРґРЅСѓСЋ РїРѕР·РёС†РёСЋ РґР»СЏ СѓРЅРёС‡С‚РѕР¶РµРЅРёСЏ РјСѓС‚Р°РЅС‚РѕРІ.  </t>";
		};
		class section7
		{
			nameSection="РџСЃРµРІРґРѕСЃРѕР±Р°РєР°";
			description="<t font='CenturyGothicBold'>РџСЃРµРІРґРѕСЃРѕР±Р°РєР°</t><br /><t font='CenturyGothic'>РЇРІР»СЏСЏСЃСЊ РјСѓС‚РёСЂРѕРІР°РІС€РёРјРё РїРѕС‚РѕРјРєР°РјРё РґРёРєРёС… РІРѕР»РєРѕРІ, РџСЃРµРІРґРѕСЃРѕР±Р°РєРё - РѕРґРЅРё РёР· СЃР°РјС‹С… РѕРїР°СЃРЅС‹С… РјСѓС‚Р°РЅС‚РѕРІ Р—РѕРЅС‹. РќРµРІРµСЂРѕСЏС‚РЅРѕ С…РёС‚СЂС‹Рµ, Р»РѕРІРєРёРµ Рё Р±С‹СЃС‚СЂС‹Рµ С…РёС‰РЅРёРєРё, РІ СЃС‚Р°Рµ РѕРЅРё СЏРІР»СЏСЋС‚ СЃРѕР±РѕР№ СЃРµСЂСЊС‘Р·РЅСѓСЋ СѓРіСЂРѕР·Сѓ РґР»СЏ Р»СЋР±РѕРіРѕ РІСЂР°РіР°. Р’РЅРµС€РЅРµ РџСЃРµРІРґРѕРїС‘СЃ РЅР°РїРѕРјРёРЅР°РµС‚ РІРѕР»РєР° Р»РёС€СЊ СЃС‚СЂРѕРµРЅРёРµРј С‚РµР»Р° Рё С€РµСЂСЃС‚СЊСЋ, РѕРґРЅР°РєРѕ РіРѕР»РѕРІР° РјСѓС‚Р°РЅС‚Р° Р»С‹СЃР°СЏ Рё РЅРµРІРµСЂРѕСЏС‚РЅС‹Рј РѕР±СЂР°Р·РѕРј РґРµС„РѕСЂРјРёСЂРѕРІР°РЅР°, РїСЂРёРґР°РІР°СЏ РјРѕСЂРґРµ РїСѓРіР°СЋС‰РёРµ, Р°РЅС‚СЂРѕРїРѕРјРѕСЂС„РЅС‹Рµ РѕС‡РµСЂС‚Р°РЅРёСЏ. РќРµРІРµСЂРѕСЏС‚РЅРѕ РјРѕС‰РЅС‹Рµ Р»Р°РїС‹ РїРѕР·РІРѕР»СЏСЋС‚ РџСЃРµРІРґРѕСЃРѕР±Р°РєР°Рј СЃРѕРІРµСЂС€Р°С‚СЊ СЃС‚СЂРµРјРёС‚РµР»СЊРЅС‹Рµ СЂС‹РІРєРё, РјРіРЅРѕРІРµРЅРЅРѕ СЃРѕРєСЂР°С‰Р°СЏ РґРёСЃС‚Р°РЅС†РёСЋ РґРѕ Р¶РµСЂС‚РІС‹, Р° Р±СЂРёС‚РІРµРЅРЅРѕ РѕСЃС‚СЂС‹Рµ РєР»С‹РєРё, РєРѕС‚РѕСЂС‹Рµ Сѓ РјСѓС‚Р°РЅС‚Р° СЂР°СЃС‚СѓС‚ Рё Р·Р°С‚Р°С‡РёРІР°СЋС‚СЃСЏ РІСЃСЋ Р¶РёР·РЅСЊ, СЃРїРѕСЃРѕР±РЅС‹ РїСЂРѕР±РёС‚СЊ РґР°Р¶Рµ Р°СЂРјРµР№СЃРєРёР№ Р±СЂРѕРЅРµР¶РёР»РµС‚.<br />РџСЃРµРІРґРѕСЃРѕР±Р°РєРё РІРµРґСѓС‚ С‚РµСЂСЂРёС‚РѕСЂРёР°Р»СЊРЅС‹Р№ РѕР±СЂР°Р· Р¶РёР·РЅРё РєР°Рє СЃС‚Р°СЏРјРё РґРѕ 5-6 РѕСЃРѕР±РµР№, С‚Р°Рє Рё РїРѕРѕРґРёРЅРѕС‡РєРµ. РџСЂРё РѕС…РѕС‚Рµ РѕС‚С…РѕРґСЏС‚ РѕС‚ Р»РѕРіРѕРІР° РЅР° РѕРіСЂРѕРјРЅС‹Рµ СЂР°СЃСЃС‚РѕСЏРЅРёСЏ, Р° РѕР±РЅР°СЂСѓР¶РёРІ Р¶РµСЂС‚РІСѓ СЃРїРѕСЃРѕР±РЅС‹ Р±РµР· СѓСЃС‚Р°Р»Рё РїСЂРµСЃР»РµРґРѕРІР°С‚СЊ РµС‘ РµС‰С‘ РЅРµСЃРєРѕР»СЊРєРѕ РґРЅРµР№. РЎР»СѓС… Рё С‡СѓС‚СЊС‘ РІРµР»РёРєРѕР»РµРїРЅРѕ СЂР°Р·РІРёС‚С‹, РЅРµРёР·РјРµРЅРЅС‹Рј РѕС‚РЅРѕСЃРёС‚РµР»СЊРЅРѕ РґРёРєРѕРіРѕ РїСЂРµРґРєР° РѕСЃС‚Р°Р»РѕСЃСЊ Р»РёС€СЊ Р·СЂРµРЅРёРµ. РћС…РѕС‚РЅРёС‡СЊРё РёРЅСЃС‚РёРЅРєС‚С‹ Рё РЅР°РІС‹РєРё РџСЃРµРІРґРѕСЃРѕР±Р°Рє РѕС‡РµРЅСЊ СЂР°Р·РІРёС‚С‹ - РјСѓС‚Р°РЅС‚С‹ РјРѕРіСѓС‚ РїСЂРµРґСѓРіР°РґС‹РІР°С‚СЊ РјР°СЂС€СЂСѓС‚ РґРІРёР¶РµРЅРёСЏ РґРѕР±С‹С‡Рё Рё РґР°Р¶Рµ РёСЃРїРѕР»СЊР·РѕРІР°С‚СЊ РјРµСЃС‚РЅРѕСЃС‚СЊ РґР»СЏ РѕР±Р»Р°РІС‹ РЅР° РєСЂСѓРїРЅРѕРіРѕ Р·РІРµСЂСЏ. РЎСѓС‰РµСЃС‚РІСѓСЋС‚ СЃР»СѓС…Рё Рѕ РџСЃРµРІРґРѕРїСЃР°С…, РєРѕС‚РѕСЂС‹С… СЃС‚Р°Р»РєРµСЂР°Рј СѓРґР°РІР°Р»РѕСЃСЊ РїРѕРґРєР°СЂРјР»РёРІР°С‚СЊ, РЅРѕ РїРѕРґС‚РІРµСЂР¶РґРµРЅРёСЏ РѕРЅРё РЅРµ РёРјРµСЋС‚.<br />Р’СЃС‚СЂРµС‚РёС‚СЊ РџСЃРµРІРґРѕСЃРѕР±Р°РєСѓ РјРѕР¶РЅРѕ С„Р°РєС‚РёС‡РµСЃРєРё РЅР° РІСЃРµР№ С‚РµСЂСЂРёС‚РѕСЂРёРё Р—РѕРЅС‹ - С‡СѓС‚СЊС‘ РїРѕР·РІРѕР»СЏРµС‚ РµР№ РёР·Р±РµРіР°С‚СЊ Р°РЅРѕРјР°Р»РёРё Рё СЃР»РёС€РєРѕРј РѕРїР°СЃРЅС‹С… РїСЂРѕС‚РёРІРЅРёРєРѕРІ, Р° СЂР°РґРёР°С†РёСЏ РІРѕРІСЃРµ РЅРµ РїСЂРёРЅРѕСЃРёС‚ РІСЂРµРґР°. РЎС‚Р°Р»РєРµСЂ-РѕРґРёРЅРѕС‡РєР° РёРјРµРµС‚ С…РѕСЂРѕС€РёРµ С€Р°РЅСЃС‹ РїСЂРѕС‚РёРІ РџСЃРµРІРґРѕСЃРѕР±Р°РєРё РІ С‚РѕРј СЃР»СѓС‡Р°Рµ, РµСЃР»Рё СѓСЃРїРµРµС‚ РІРѕРІСЂРµРјСЏ Р·Р°РјРµС‚РёС‚СЊ РµС‘ - Р¶РёРІСѓС‡РµСЃС‚СЊСЋ РјСѓС‚Р°РЅС‚ РЅРµ РѕС‚Р»РёС‡Р°РµС‚СЃСЏ. Р•СЃР»Рё Р¶Рµ Р°С‚Р°РєСѓРµС‚ СЃС‚Р°СЏ - СЃРёС‚СѓР°С†РёСЏ СЂРµР·РєРѕ РјРµРЅСЏРµС‚СЃСЏ, Рё РѕРґРёРЅРѕС‡РєРµ С‚Р°РєРѕРіРѕ Р±РѕСЏ Р»СѓС‡С€Рµ РёР·Р±РµРіР°С‚СЊ. РќР° РіСЂСѓРїРїСѓ СЃС‚Р°Р»РєРµСЂРѕРІ РџСЃРµРІРґРѕРїСЃС‹ Р±СѓРґСѓС‚ РЅР°РїР°РґР°С‚СЊ С‚РѕР»СЊРєРѕ РµСЃР»Рё РёРјРµСЋС‚ С‡РёСЃР»РµРЅРЅРѕРµ РїСЂРµРёРјСѓС‰РµСЃС‚РІРѕ, РїСЂРё РѕР±РѕСЂРѕРЅРµ Р»РѕРіРѕРІР° РёР»Рё РёР· Р·Р°СЃР°РґС‹.</t>";
		};
		class section8
		{
			nameSection="РџСЃРµРІРґРѕРїР»РѕС‚СЊ";
			description="<t font='CenturyGothicBold'>РџСЃРµРІРґРѕРїР»РѕС‚СЊ</t><br /><t font='CenturyGothic'>Р”Р°Р¶Рµ СѓС‡С‘РЅС‹Рµ РЅРµ РјРѕРіСѓС‚ С‚РѕС‡РЅРѕ СЃРєР°Р·Р°С‚СЊ, С‡РµРј СЌС‚Р° РєСѓС‡Р° РјСЏСЃР° Рё Р¶РёСЂР° Р±С‹Р»Р° РІ РїСЂРѕС€Р»РѕРј, РїСЂРµРґРїРѕР»РѕР¶РёС‚РµР»СЊРЅРѕ - РґРѕРјР°С€РЅРµР№ СЃРІРёРЅСЊС‘Р№ РёР»Рё РѕРІС†РѕР№. Р­С‚РѕС‚ РјСѓС‚Р°РЅС‚ РЅР°СЃС‚РѕР»СЊРєРѕ РѕС‚РґР°Р»РёР»СЃСЏ РѕС‚ РІРЅРµС€РЅРѕСЃС‚Рё СЃРІРѕРµРіРѕ РїСЂРµРґРєР°, С‡С‚Рѕ СѓР·РЅР°С‚СЊ РІ РЅС‘Рј РєР°РєРѕРµ-Р»РёР±Рѕ РґРѕРјР°С€РЅРµРµ Р¶РёРІРѕС‚РЅРѕРµ РїРѕРїСЂРѕСЃС‚Сѓ РЅРµРІРѕР·РјРѕР¶РЅРѕ. РџСЃРµРІРґРѕРїР»РѕС‚СЊ РёРјРµРµС‚ РѕРґСѓС‚Р»РѕРІР°С‚РѕРµ, РѕРіСЂРѕРјРЅРѕРµ С‚РµР»Рѕ РЅР° РёР·РјРµРЅРµРЅРЅС‹С…, Р·Р°РѕСЃС‚СЂС‘РЅРЅС‹С… Р»Р°РїР°С… СЃ С…РёС‚РёРЅРѕРІС‹Рј РїРѕРєСЂС‹С‚РёРµРј, СЃРїР»СЋСЃРЅСѓС‚СѓСЋ РјРѕСЂРґСѓ СЃ РѕРіСЂРѕРјРЅРѕР№ РїР°СЃС‚СЊСЋ Рё С‚СЂРµРјСЏ РјСѓС‚РёСЂРѕРІР°РІС€РёРјРё РіР»Р°Р·Р°РјРё, РєР°Р¶РґС‹Р№ РёР· РєРѕС‚РѕСЂС‹С… СЃРјРѕС‚СЂРёС‚ РІ СЂР°Р·РЅСѓСЋ СЃС‚РѕСЂРѕРЅСѓ. РћСЃРЅРѕРІРЅРѕРµ РѕСЂСѓР¶РёРµ РџР»РѕС‚Рё - РїРµСЂРµРґРЅРёРµ РєРѕРЅРµС‡РЅРѕСЃС‚Рё, РїРѕРєСЂС‹С‚С‹Рµ РїСЂРѕС‡РЅС‹Рј С…РёС‚РёРЅРѕРј Рё С‡РµРј-С‚Рѕ РїРѕС…РѕР¶РёРµ РЅР° Р»Р°РїС‹ РєСЂР°Р±Р°. <br />РЇРІР»СЏСЏСЃСЊ СЃС‚Р°РґРЅС‹Рј РјСѓС‚Р°РЅС‚РѕРј, РџСЃРµРІРґРѕРїР»РѕС‚СЊ С‡Р°СЃС‚Рѕ РјРёРіСЂРёСЂСѓРµС‚ СЃ РјРµСЃС‚Р° РЅР° РјРµСЃС‚Рѕ, РїРѕСЃС‚РѕСЏРЅРЅРѕ РёС‰Р° Р±РµР·РѕРїР°СЃРЅС‹Рµ СЂР°Р№РѕРЅС‹ РґР»СЏ РѕР±РёС‚Р°РЅРёСЏ. Р’ СЃС‚Р°РґРµ РџР»РѕС‚РµР№ СЂРµРґРєРѕ РјРѕР¶РЅРѕ РЅР°СЃС‡РёС‚Р°С‚СЊ Р±РѕР»РµРµ 6-7 РјСѓС‚Р°РЅС‚РѕРІ, РІСЃС‚СЂРµС‡Р°СЋС‚СЃСЏ Рё РІРѕРІСЃРµ РѕРґРёРЅРѕС‡РЅС‹Рµ РѕСЃРѕР±Рё. РР·СЂРµРґРєР° РІ СЃС‚Р°РґРµ РїР»РѕС‚РµР№ РјРѕР¶РЅРѕ СѓРІРёРґРµС‚СЊ РєР°Р±Р°РЅРѕРІ - РѕРЅРё РјРѕРіСѓС‚ Р±СЂР°С‚СЊ РЅР° СЃРµР±СЏ СЂРѕР»СЊ РІРѕР¶Р°РєР° СЃС‚Р°РґР°. РњСѓС‚Р°РЅС‚ РµСЃС‚ РІСЃС‘, С‡С‚Рѕ РєР°Р¶РµС‚СЃСЏ РµРјСѓ СЃСЉРµРґРѕР±РЅС‹Рј, РІ С‚РѕРј С‡РёСЃР»Рµ Рё РІСЃСЏРєРёР№ РјСѓСЃРѕСЂ - РЅР°РїСЂРёРјРµСЂ Р°РІС‚РѕРјРѕР±РёР»СЊРЅС‹Рµ РїРѕРєСЂС‹С€РєРё. РЎС‚Р°Р»РєРµСЂС‹ С‚РѕР¶Рµ РІС…РѕРґСЏС‚ РІ РјРµРЅСЋ РџСЃРµРІРґРѕРїР»РѕС‚Рё (РєР°Рє, РІРїСЂРѕС‡РµРј, Рё РЅР°РѕР±РѕСЂРѕС‚), РЅРѕ С‚РѕР»СЊРєРѕ РІ СЃР»СѓС‡Р°Рµ, РµСЃР»Рё РјСѓС‚Р°РЅС‚ С‡СѓРІСЃС‚РІСѓРµС‚ Р·Р° СЃРѕР±РѕР№ РїСЂРµРёРјСѓС‰РµСЃС‚РІРѕ. РћР±С‹С‡РЅРѕ РџСЃРµРІРґРѕРїР»РѕС‚Рё РґРѕСЃС‚Р°С‚РѕС‡РЅРѕ С‚СЂСѓСЃР»РёРІС‹, Рё РїСЂРё РїРµСЂРІС‹С… РїСЂРёР·РЅР°РєР°С… РѕРїР°СЃРЅРѕСЃС‚Рё СЃС‚Р°СЂР°СЋС‚СЃСЏ СЃР±РµР¶Р°С‚СЊ, РѕРґРЅР°РєРѕ РіРѕР»РѕРґ РјРѕР¶РµС‚ РІС‹РЅСѓРґРёС‚СЊ РёС… РЅР° СЃР°РјС‹Рµ Р±РµР·СЂР°СЃСЃСѓРґРЅС‹Рµ РґРµР№СЃС‚РІРёСЏ.<br />РђСЂРµР°Р» РѕР±РёС‚Р°РЅРёСЏ РџР»РѕС‚РµР№ СЃС…РѕР¶ СЃ РљР°Р±Р°РЅР°РјРё - РѕРЅРё Р»СЋР±СЏС‚ СЃРµР»РёС‚СЃСЏ РЅР° СЂР°РІРЅРёРЅР°С…, Р»РµСЃР°С…, Р±Р»РёР·СЊ Р±РѕР»РѕС‚ Р° С‚Р°РєР¶Рµ РІ СЃС‚Р°СЂС‹С… РґРµСЂРµРІРЅСЏС…, РѕСЃРѕР±РµРЅРЅРѕ РµСЃР»Рё С‚Р°Рј РµСЃС‚СЊ РєРѕСЂРѕРІРЅРёРєРё. РћРґРёРЅРѕС‡РЅСѓСЋ РїСЃРµРІРґРѕРїР»РѕС‚СЊ Р»РµРіРєРѕ СЃРїСѓРіРЅСѓС‚СЊ РґР°Р¶Рµ РіСЂРѕРјРєРёРј РєСЂРёРєРѕРј, РЅРѕ РёРЅРѕРіРґР° РіРѕР»РѕРґ РІСЃС‘ Р¶Рµ РјРѕР¶РµС‚ РІС‹РЅСѓРґРёС‚СЊ РµС‘ РЅР°РїР°СЃС‚СЊ РЅР° СЃС‚Р°Р»РєРµСЂР°, РєРѕС‚РѕСЂРѕРјСѓ, РІРїСЂРѕС‡РµРј, РЅРµ СЃРѕСЃС‚Р°РІРёС‚ С‚СЂСѓРґР° РѕС‚Р±РёС‚СЊСЃСЏ. Рђ РІРѕС‚ СЃС‚Р°РґРѕ РџР»РѕС‚РµР№ РєСЂРёРєРѕРј СѓР¶Рµ РЅРµ РЅР°РїСѓРіР°С‚СЊ. РџРѕС‡СѓРІСЃС‚РІРѕРІР°РІ Р·Р° СЃРѕР±РѕР№ СЃРёР»Сѓ, РјСѓС‚Р°РЅС‚С‹ СЃРїРѕСЃРѕР±РЅС‹ Р°С‚Р°РєРѕРІР°С‚СЊ РґР°Р¶Рµ РєСЂСѓРїРЅС‹Рµ СЃС‚Р°Рё СЃР»РµРїС‹С… РїСЃРѕРІ, РЅРµ РіРѕРІРѕСЂСЏ СѓР¶Рµ Рѕ Р»СЋРґСЏС…. РЎС‚Р°Р»РєРµСЂСѓ СЃР»РµРґСѓРµС‚ РґРµСЂР¶Р°С‚СЊ СѓС…Рѕ РІРѕСЃС‚СЂРѕ - РіРґРµ РµСЃС‚СЊ РѕРґРЅР° РџР»РѕС‚СЊ, С‚Р°Рј РјРѕРіСѓС‚ Р±С‹С‚СЊ РµС‰С‘ РїСЏС‚СЊ.</t>";
		};
		class section9
		{
			nameSection="РџСЃРµРІРґРѕРіРёРіР°РЅС‚";
			description="<t font='CenturyGothicBold'>РџСЃРµРІРґРѕРіРёРіР°РЅС‚</t><br /><t font='CenturyGothic'>РР·-Р·Р° Р±РѕР»СЊС€РѕР№ СЂРµРґРєРѕСЃС‚Рё Рё РѕРїР°СЃРЅРѕСЃС‚Рё СЌС‚РѕРіРѕ РјСѓС‚Р°РЅС‚Р°, РёРЅС„РѕСЂРјР°С†РёРё Рѕ РЅС‘Рј РѕС‡РµРЅСЊ РЅРµРјРЅРѕРіРѕ. РЇРІР»СЏСЏСЃСЊ РѕРіСЂРѕРјРЅРѕР№, РґРѕ РґРІСѓС… РјРµС‚СЂРѕРІ СЂРѕСЃС‚РѕРј Рё РґРѕ С‚СЂРµС… С‚РѕРЅРЅ РІРµСЃРѕРј, РјР°СЃСЃРёРІРЅРѕР№ С‚СѓС€РµР№, РџСЃРµРІРґРѕРіРёРіР°РЅС‚ СЃРїРѕСЃРѕР±РµРЅ Р±С‹С‚СЊ С‡СЂРµР·РІС‹С‡Р°Р№РЅРѕ Р±С‹СЃС‚СЂС‹Рј Р·Р° СЃС‡РµС‚ РґРІСѓС… РЅРµРІРµСЂРѕСЏС‚РЅРѕ РјСѓСЃРєСѓР»РёСЃС‚С‹С… РєРѕРЅРµС‡РЅРѕСЃС‚РµР№, РєРѕС‚РѕСЂС‹Рµ СЃ Р»РµРіРєРѕСЃС‚СЊСЋ РІС‹РґРµСЂР¶РёРІР°СЋС‚ РІРµСЃ РјСѓС‚Р°РЅС‚Р°. РћР±Р»Р°РґР°СЏ РЅРµРІРµСЂРѕСЏС‚РЅРѕР№ СЃРїРѕСЃРѕР±РЅРѕСЃС‚СЊСЋ Рє СЂРµРіРµРЅРµСЂР°С†РёРё Рё С‚РѕР»СЃС‚С‹Рј (РґРѕ 100РјРј) С‡РµСЂРµРїРѕРј, СЌС‚РѕС‚ РјРѕРЅСЃС‚СЂ СЃС‚Р°РЅРѕРІРёС‚СЃСЏ РєСЂР°Р№РЅРµ РѕРїР°СЃРЅС‹Рј РѕР±СЉРµРєС‚РѕРј РґР»СЏ РѕС…РѕС‚С‹ - РѕРіРѕРЅСЊ РёР· РєСЂСѓРїРЅРѕРєР°Р»РёР±РµСЂРЅРѕРіРѕ РѕСЂСѓР¶РёСЏ РґР°Р»РµРєРѕ РЅРµ СЃСЂР°Р·Сѓ РѕСЃС‚Р°РЅРѕРІРёС‚ СЌС‚Рѕ С‡СѓРґРёС‰Рµ. РџСЂРѕС‡РЅРѕСЃС‚СЊ СЃРєРµР»РµС‚Р° РџСЃРµРІРґРѕРіРёРіР°РЅС‚Р° С‚Р°РєРѕРІР°, С‡С‚Рѕ РґР°Р¶Рµ СЃС‚РѕР»РєРЅРѕРІРµРЅРёРµ СЃ С‚СЏР¶РµР»РѕР№ Р±СЂРѕРЅРµС‚РµС…РЅРёРєРѕР№ РЅРµ СЃРїРѕСЃРѕР±РЅРѕ РїСЂРёС‡РёРЅРёС‚СЊ РµРјСѓ СЃСѓС‰РµСЃС‚РІРµРЅРЅРѕРіРѕ РІСЂРµРґР°, РІ С‚Рѕ РІСЂРµРјСЏ РєР°Рє СЃР°Рј РјСѓС‚Р°РЅС‚ РІРїРѕР»РЅРµ СЃРїРѕСЃРѕР±РµРЅ РµСЃР»Рё РЅРµ РїРµСЂРµРІРµСЂРЅСѓС‚СЊ, С‚Рѕ РєР°Рє РјРёРЅРёРјСѓРј СЃРґРІРёРЅСѓС‚СЊ С‚Р°РЅРє.<br />РћР± РѕСЃРѕР±РµРЅРЅРѕСЃС‚СЏС… РїРѕРІРµРґРµРЅРёСЏ РџСЃРµРІРґРѕРіРёРіР°РЅС‚Р° РёР·РІРµСЃС‚РЅРѕ РµС‰С‘ РјРµРЅСЊС€Рµ. РЇРІР»СЏСЏСЃСЊ С…РёС‰РЅРёРєР°РјРё, РџСЃРµРІРґРѕРіРёРіР°РЅС‚С‹ РѕС…РѕС‚СЏС‚СЃСЏ Рё СѓР±РёРІР°СЋС‚ РІСЃС‘, С‡С‚Рѕ РјРѕР¶РЅРѕ СЃСЉРµСЃС‚СЊ - РѕС‚ РјСѓС‚Р°РЅС‚РѕРІ РґРѕ С‡РµР»РѕРІРµРєР°, С‡Р°СЃС‚Рѕ РЅРµ Р±СЂРµР·РіСѓСЏ Рё РїР°РґР°Р»СЊСЋ. РђС‚Р°РєСѓСЋС‚ РѕРЅРё Р°Р±СЃРѕР»СЋС‚РЅРѕ Р±РµСЃСЃС‚СЂР°С€РЅРѕ, СЃ РЅРµСѓРјРѕР»РёРјРѕР№ СЏСЂРѕСЃС‚СЊСЋ Р±СЂРѕСЃР°СЏСЃСЊ РґР°Р¶Рµ РЅР° РІРѕРµРЅРЅС‹Рµ РєРѕСЂРґРѕРЅС‹, РїСЂРё СЌС‚РѕРј Р°РєС‚РёРІРЅРѕ РїРѕР»СЊР·СѓСЏСЃСЊ СЃРІРѕРёРјРё РјРѕС‰РЅС‹РјРё РєРѕРЅРµС‡РЅРѕСЃС‚СЏРјРё, РєРѕС‚РѕСЂС‹РјРё СЃРїРѕРєРѕР№РЅРѕ РјРѕРіСѓС‚ СЂР°Р·РѕСЂРІР°С‚СЊ С‡РµР»РѕРІРµРєР° РЅР°РґРІРѕРµ. РС… РјРѕС‰СЊ С‚Р°Рє РІРµР»РёРєР°, С‡С‚Рѕ РјСѓС‚Р°РЅС‚ СЃРїРѕСЃРѕР±РµРЅ СЃРѕР·РґР°РІР°С‚СЊ РЅР° Р·РµРјР»Рµ Р»РѕРєР°Р»СЊРЅС‹Рµ СѓРґР°СЂРЅС‹Рµ РІРѕР»РЅС‹, СЃРѕС‚СЂСЏСЃР°СЋС‰РёРµ РІСЃС‘ РІ РѕРіСЂР°РЅРёС‡РµРЅРЅРѕРј СЂР°РґРёСѓСЃРµ, С‚Р°Рє С‡С‚Рѕ СѓР·РЅР°С‚СЊ Рѕ РїСЂРёР±Р»РёР¶РµРЅРёРё РџСЃРµРІРґРѕРіРёРіР°РЅС‚Р° РЅРµ СЃР»РѕР¶РЅРѕ.<br />РџСЃРµРІРґРѕРіРёРіР°РЅС‚С‹ РѕР±РёС‚Р°СЋС‚ РЅР° СЃРµРІРµСЂРµ Р—РѕРЅС‹,  РёР·СЂРµРґРєР° Р·Р°С…РѕРґСЏ РЅР° СЋРі С‚РѕР»СЊРєРѕ РІРѕ РІСЂРµРјСЏ РіРѕРЅР° РјСѓС‚Р°РЅС‚РѕРІ. РўРѕС‡РЅС‹Рµ РјРµСЃС‚Р° РёС… РѕР±РёС‚Р°РЅРёСЏ РЅРµРёР·РІРµСЃС‚РЅС‹, РЅРѕ СЃРєРѕСЂРµРµ РІСЃРµРіРѕ РјСѓС‚Р°РЅС‚С‹ РѕР±РёС‚Р°СЋС‚ РІ Р·Р°Р±СЂРѕС€РµРЅРЅС‹С… РІРѕРµРЅРЅС‹С… Р±Р°Р·Р°С…, РѕСЃС‚Р°РІР»РµРЅРЅС‹С… РїСЂРѕРјС‹С€Р»РµРЅРЅС‹С… РєРѕРјРїР»РµРєСЃР°С… Рё СЃРёСЃС‚РµРјР°С… С‚СѓРЅРЅРµР»РµР№. Р­С‚Рѕ РєСЂР°Р№РЅРµ РѕРїР°СЃРЅС‹Р№ РјРѕРЅСЃС‚СЂ, РѕРґРѕР»РµС‚СЊ РєРѕС‚РѕСЂРѕРіРѕ СЃС‚Р°Р»РєРµСЂСѓ-РѕРґРёРЅРѕС‡РєРµ, СЃРєРѕСЂРµРµ РІСЃРµРіРѕ, РЅРµ РїРѕРґ СЃРёР»Сѓ, РїРѕС‚РѕРјСѓ СЃР»РµРґСѓРµС‚ РІСЃРµРјРё СЃРёР»Р°РјРё РёР·Р±РµРіР°С‚СЊ СЃС‚РѕР»РєРЅРѕРІРµРЅРёСЏ СЃ РЅРёРј. Р•СЃР»Рё Р¶Рµ РІСЃС‚СЂРµС‡Рё РЅРµ РјРёРЅРѕРІР°С‚СЊ, СЃР»РµРґСѓРµС‚ РёСЃРєР°С‚СЊ Р»СЋР±СѓСЋ РґРѕСЃС‚Р°С‚РѕС‡РЅРѕ РїСЂРѕС‡РЅСѓСЋ РІРѕР·РІС‹С€РµРЅРЅРѕСЃС‚СЊ, РєРѕС‚РѕСЂСѓСЋ РџСЃРµРІРґРѕРіРёРіР°РЅС‚ РЅРµ СЃРјРѕР¶РµС‚ СЃРЅРµСЃС‚Рё, РіРґРµ РјРѕР¶РЅРѕ РґРѕР¶РґР°С‚СЊСЃСЏ РїРѕРєР° С‚РІР°СЂСЊ СѓР№РґС‘С‚. РўР°РєР¶Рµ РїРѕРґРѕР№РґС‘С‚ Р»СЋР±РѕРµ РјРµСЃС‚Рѕ, РєСѓРґР° РјСѓС‚Р°РЅС‚ РЅРµ СЃРјРѕРі Р±С‹ РїСЂРѕР»РµР·С‚СЊ РёР»Рё РґРѕС‚СЏРЅСѓС‚СЊСЃСЏ СЃРІРѕРµР№ РєРѕРЅРµС‡РЅРѕСЃС‚СЊСЋ. РР·-Р·Р° РІС‹СЃРѕРєРѕР№ Р¶РёРІСѓС‡РµСЃС‚Рё Рё Р±РѕР»СЊС€РёС… РіР°Р±Р°СЂРёС‚РѕРІ, РїСЂРѕС‚РёРІ СЌС‚РѕРіРѕ РјРѕРЅСЃС‚СЂР° Р»СѓС‡С€Рµ РІСЃРµРіРѕ РёСЃРїРѕР»СЊР·РѕРІР°С‚СЊ РІР·СЂС‹РІС‡Р°С‚РєСѓ.</t>";
		};
		class section10
		{
			nameSection="РҐРёРјРµСЂР°";
			description="<t font='CenturyGothicBold'>РҐРёРјРµСЂР°</t><br /><t font='CenturyGothic'>РџРµСЂРµР¶РёС‚СЊ РІСЃС‚СЂРµС‡Сѓ СЃ РҐРёРјРµСЂРѕР№ СЃРјРѕРіР»Рё РѕС‡РµРЅСЊ РЅРµРјРЅРѕРіРёРµ. РЈР±РёС‚СЊ РҐРёРјРµСЂСѓ - СѓРґР°Р»РѕСЃСЊ РµРґРёРЅРёС†Р°Рј. Р’РµСЂРѕСЏС‚РЅРѕ, СЌС‚Рѕ РѕРґРёРЅ РёР· СЃР°РјС‹С… РѕРїР°СЃРЅС‹С… РјСѓС‚Р°РЅС‚РѕРІ Р—РѕРЅС‹, РїРѕСЃРїРѕСЂРёС‚СЊ СЃ РєРѕС‚РѕСЂС‹Рј СЃРјРѕРі Р±С‹ СЂР°Р·РІРµ С‡С‚Рѕ РџСЃРµРІРґРѕРіРёРіР°РЅС‚. РќРµРІРµСЂРѕСЏС‚РЅР°СЏ СЃРёР»Р°, СЃРєРѕСЂРѕСЃС‚СЊ, РіРёР±РєРѕСЃС‚СЊ Рё С…РёС‚СЂРѕСЃС‚СЊ - Р—РѕРЅР° СЃРѕР·РґР°Р»Р° РїРѕС‡С‚Рё РёРґРµР°Р»СЊРЅРѕРіРѕ С…РёС‰РЅРёРєР°. Р”Р°Р¶Рµ РјР°С‚С‘СЂС‹Рµ РљРѕРЅС‚СЂРѕР»С‘СЂС‹ РёР·Р±РµРіР°СЋС‚ РјРµСЃС‚ РіРґРµ РјРѕР¶РµС‚ РѕР±РёС‚Р°С‚СЊ РҐРёРјРµСЂР°, РїРѕРЅРёРјР°СЏ, С‡С‚Рѕ РїСЂРё С‚Р°РєРѕР№ РІСЃС‚СЂРµС‡Рµ Сѓ РЅРёС… РЅРµС‚ С€Р°РЅСЃРѕРІ - РїРѕРґ РєРѕРЅС‚СЂРѕР»СЊ РµС‘ РЅРµ РІР·СЏС‚СЊ. Р’РЅРµС€РЅРѕСЃС‚СЊ РҐРёРјРµСЂС‹ РѕС‡РµРЅСЊ РїСЂРёРјРµС‡Р°С‚РµР»СЊРЅР° - СЃСѓС‰РµСЃС‚РІРѕ РёРјРµРµС‚ РґРІРµ РіРѕР»РѕРІС‹, РѕРґРЅСѓ РЅРѕСЂРјР°Р»СЊРЅСѓСЋ Рё РѕРґРЅСѓ РЅРµРґРѕСЂР°Р·РІРёС‚СѓСЋ, РїРµСЂРµРґРІРёРіР°РµС‚СЃСЏ РЅР° С‡РµС‚С‹СЂС‘С… Р»Р°РїР°С…, РёРјРµРµС‚ РєРѕСЂРѕС‚РєСѓСЋ С€РµСЂСЃС‚СЊ Рё РїРѕР»РЅРѕСЃС‚СЊСЋ С‡С‘СЂРЅС‹Рµ РіР»Р°Р·Р°. Р’СЃРµ С‡РµС‚С‹СЂРµ РєРѕРЅРµС‡РЅРѕСЃС‚Рё Р·Р°РєР°РЅС‡РёРІР°СЋС‚СЃСЏ РѕРіСЂРѕРјРЅС‹РјРё РєРѕРіС‚СЏРјРё, РєРѕС‚РѕСЂС‹РјРё РҐРёРјРµСЂР° РІ СЃРѕСЃС‚РѕСЏРЅРёРё РїРѕСЂРІР°С‚СЊ РґР°Р¶Рµ РјРµС‚Р°Р»Р» - С‡РµР»РѕРІРµРєР° РѕРЅР° РјРѕР¶РµС‚ СЂР°СЃСЃРµС‡СЊ РЅР°РґРІРѕРµ Р±СѓРєРІР°Р»СЊРЅРѕ РѕРґРЅРёРј РґРІРёР¶РµРЅРёРµРј.<br />Р‘СѓРґСѓС‡Рё РІ РѕСЃРЅРѕРІРЅРѕРј РЅРѕС‡РЅС‹Рј С…РёС‰РЅРёРєРѕРј, РҐРёРјРµСЂР° РѕС‚Р»РёС‡РЅРѕ РІРёРґРёС‚ РІ С‚РµРјРЅРѕС‚Рµ, Р° РЅРµРІРµСЂРѕСЏС‚РЅР°СЏ СЃРёР»Р° Рё Р»РѕРІРєРѕСЃС‚СЊ РЅРµ РґР°СЋС‚ РїРѕС‚РµРЅС†РёР°Р»СЊРЅРѕР№ РґРѕР±С‹С‡Рµ С€Р°РЅСЃР°. Р“РёР±РєРѕРµ С‚РµР»Рѕ РёРґРµР°Р»СЊРЅРѕ РїРѕРґС…РѕРґРёС‚ РґР»СЏ СЃРєСЂС‹С‚РЅРѕРіРѕ РїРµСЂРµРјРµС‰РµРЅРёСЏ Рё Р·Р°СЃР°РґС‹,  РјРѕС‰РЅС‹Рµ Р·Р°РґРЅРёРµ Р»Р°РїС‹ РїРѕР·РІРѕР»СЏСЋС‚ РјСѓС‚Р°РЅС‚Сѓ СЃРѕРІРµСЂС€Р°С‚СЊ РєРѕР»РѕСЃСЃР°Р»СЊРЅРѕР№ РґР»РёРЅС‹ РїСЂС‹Р¶РєРё. РЎРєРѕСЂРѕСЃС‚СЊ РҐРёРјРµСЂС‹ С‚Р°РєРѕРІР°, С‡С‚Рѕ РЅРµ РІСЃСЏРєРёР№ СЃС‚Р°Р»РєРµСЂ СЃРјРѕР¶РµС‚ СѓСЃРїРµС‚СЊ РїРѕРІРµСЂРЅСѓС‚СЊСЃСЏ РІ РµС‘ СЃС‚РѕСЂРѕРЅСѓ, РЅРµ С‚Рѕ С‡С‚Рѕ РІСЃРєРёРЅСѓС‚СЊ РѕСЂСѓР¶РёРµ. РЎСѓС‰РµСЃС‚РІСѓСЋС‚ СЃРІРёРґРµС‚РµР»СЊСЃС‚РІР° Рѕ С†РµР»С‹С… СЃС‚Р°Р»РєРµСЂСЃРєРёС… СЃС‚РѕСЏРЅРєР°С…, РїСЂРµРєСЂР°С‚РёРІС€РёС… СЃРІРѕС‘ СЃСѓС‰РµСЃС‚РІРѕРІР°РЅРёРµ РїРѕСЃР»Рµ РїСЂРёС€РµСЃС‚РІРёСЏ СЌС‚РѕР№ Р±РµСЃС‚РёРё. РќРµСЂРµРґРєРѕ Р·Р° РЅРµР№ СЃР»РµРґСѓСЋС‚ Рё РґСЂСѓРіРёРµ РјСѓС‚Р°РЅС‚С‹, С‡С‚РѕР±С‹ РїРѕР»Р°РєРѕРјРёС‚СЊСЃСЏ РѕСЃС‚Р°С‚РєР°РјРё СЃ РµС‘ СЃС‚РѕР»Р°. РўР°РєР¶Рµ РҐРёРјРµСЂР° РјРѕР¶РµС‚ РІРѕРІСЃРµ РЅРµ С‚СЂРѕРЅСѓС‚СЊ С‚РµР»Р° - РїСЂРѕСЃС‚Рѕ СѓР±РёС‚СЊ, РІРѕР·РјРѕР¶РЅРѕ РёР·-Р·Р° СЃРІРѕРµР№ РєСЂРѕРІРѕР¶Р°РґРЅРѕСЃС‚Рё, РІРѕР·РјРѕР¶РЅРѕ РїСЂРѕСЃС‚Рѕ СЂР°РґРё СЂР°Р·РІР»РµС‡РµРЅРёСЏ.<br />РҐРёРјРµСЂР° - РѕС‡РµРЅСЊ РѕРїР°СЃРЅРѕРµ СЃСѓС‰РµСЃС‚РІРѕ, СЃ РЅРµРїСЂРµРґСЃРєР°Р·СѓРµРјС‹Рј РїРѕРІРµРґРµРЅРёРµРј Рё РјСЂР°С‡РЅС‹Рј РЅСЂР°РІРѕРј. Р’СЃС‚СЂРµС‡Р°РµС‚СЃСЏ С‚РѕР»СЊРєРѕ РЅР° СЃРµРІРµСЂРЅС‹С… СѓС‡Р°СЃС‚РєР°С… Р—РѕРЅС‹, РЅР° Р®Рі Р·Р°С…РѕРґРёС‚ РѕС‡РµРЅСЊ СЂРµРґРєРѕ. РњРЅРѕРіРёРµ СЃС‚Р°Р»РєРµСЂСЃРєРёРµ Р»РµРіРµРЅРґС‹ РЅР°РґРµР»СЏСЋС‚ СЌС‚РѕРіРѕ РјСѓС‚Р°РЅС‚Р° РµРґРІР° Р»Рё РЅРµ СЃРІРµСЂС…СЉРµСЃС‚РµСЃС‚РІРµРЅРЅРѕР№ СЃРёР»РѕР№, СЃРїРѕСЃРѕР±РЅРѕСЃС‚СЊСЋ С‡РёС‚Р°С‚СЊ РјС‹СЃР»Рё Рё РґР°Р¶Рµ СЂР°Р·РіРѕРІР°СЂРёРІР°С‚СЊ. РҐРѕС‚СЊ СѓС‡С‘РЅС‹Рµ Рё РѕС‚РјРµС‡Р°Р»Рё РєСЂР°Р№РЅРµ РІС‹СЃРѕРєРёР№ СѓСЂРѕРІРµРЅСЊ СЂР°Р·РІРёС‚РёСЏ РјРѕР·РіР° Сѓ РҐРёРјРµСЂ, РЅРѕ РїРѕРґС‚РІРµСЂР¶РґРµРЅРёСЏ СЌС‚РёРј СЃР»СѓС…Р°Рј, РєРѕРЅРµС‡РЅРѕ Р¶Рµ, РЅРµС‚. Р•С‰С‘ РѕРґРЅР° СЃС‚Р°Р»РєРµСЂСЃРєР°СЏ Р±Р°Р№РєР° РіР»Р°СЃРёС‚ - Р±СѓРґС‚Рѕ РІСЃРµ СѓРЅРёС‡С‚РѕР¶РµРЅРЅС‹Рµ РҐРёРјРµСЂС‹ Р±С‹Р»Рё СЃР°РјРєР°РјРё, Рё С‡С‚Рѕ СЃР°РјРµС† РҐРёРјРµСЂС‹ РІ СЂР°Р·С‹ РєСЂСѓРїРЅРµРµ Рё Р·Р»РµРµ. РўР°Рє РёР»Рё РёРЅР°С‡Рµ - СЌС‚Рѕ РѕРїР°СЃРЅРµР№С€РёР№ РІРёРґ РјСѓС‚Р°РЅС‚РѕРІ, РІСЃС‚СЂРµС‡Р° СЃ РєРѕС‚РѕСЂС‹Рј Р±РµР· СЃРјРµСЂС‚РµР№ РЅРµ Р·Р°РєРѕРЅС‡РёС‚СЃСЏ.</t>";
		};
		class section11
		{
			nameSection="РР·Р»РѕРј";
			description="<t font='CenturyGothicBold'>РР·Р»РѕРј</t><br /><t font='CenturyGothic'>Р­С‚Рѕ РіСѓРјР°РЅРѕРёРґРЅС‹Р№ РјСѓС‚Р°РЅС‚, РІ С‡СЊРµР№ РІРЅРµС€РЅРѕСЃС‚Рё РІСЃС‘ РµС‰С‘ РјРѕР¶РЅРѕ СѓР·РЅР°С‚СЊ С‡РµР»РѕРІРµРєР°, РѕСЃРѕР±РµРЅРЅРѕ СЃ СЂР°СЃСЃС‚РѕСЏРЅРёСЏ. РЎСѓС‚СѓР»С‹Р№, РІС‹СЃРѕРєРёР№ СЃС‚Р°СЂРёРє СЃ РіРёРїРµСЂС‚СЂРѕС„РёСЂРѕРІР°РЅРЅС‹РјРё СЂСѓРєР°РјРё, РїСЂРё РїРѕРјРѕС‰Рё РєРѕС‚РѕСЂС‹С… РѕРЅ С‚Р°РєР¶Рµ РїРѕРјРѕРіР°РµС‚ СЃРµР±Рµ Р±РµРіР°С‚СЊ, РЅРѕ РІСЃС‘ РµС‰С‘ СЃРїРѕСЃРѕР±РЅС‹Р№ Рє РїСЂСЏРјРѕС…РѕР¶РґРµРЅРёСЋ. Рћ С‡РµР»РѕРІРµС‡РµСЃРєРѕРј РїСЂРѕС€Р»РѕРј РР·Р»РѕРјР° С‚Р°РєР¶Рµ РіРѕРІРѕСЂСЏС‚ РѕР±СЂС‹РІРєРё РѕРґРµР¶РґС‹ Рё СЃРїРѕСЃРѕР±РЅРѕСЃС‚СЊ РѕСЃРјС‹СЃР»РµРЅРЅРѕ СЂР°Р·РіРѕРІР°СЂРёРІР°С‚СЊ, РїСѓСЃРєР°Р№ С‡РµР»РѕРІРµС‡РµСЃРєРёР№ СЏР·С‹Рє РµРјСѓ РґР°С‘С‚СЃСЏ РѕС‡РµРЅСЊ РїР»РѕС…Рѕ. РЎР°РјР°СЏ СЂР°СЃРїСЂРѕСЃС‚СЂР°РЅРµРЅРЅР°СЏ РІРµСЂСЃРёСЏ РїРѕСЏРІР»РµРЅРёСЏ РґР°РЅРЅРѕРіРѕ РјСѓС‚Р°РЅС‚Р° - СЌС‚Рѕ Р±С‹РІС€РёРµ РјРµСЃС‚РЅС‹Рµ Р¶РёС‚РµР»Рё РџСЂРёРїСЏС‚Рё Рё РµРµ РѕРєСЂРµСЃС‚РЅРѕСЃС‚РµР№, РїРѕРїР°РІС€РёРµ РїРѕРґ РіСѓР±РёС‚РµР»СЊРЅРѕРµ РІР»РёСЏРЅРёРµ Р—РѕРЅС‹. Р”Р°Р»РµРєРѕ РЅРµ РІСЃРµ Р»СЋРґРё СЃРѕРіР»Р°СЃРёР»РёСЃСЊ РЅР° СЌРІР°РєСѓР°С†РёСЋ РІРѕ РІСЂРµРјСЏ Р°РІР°СЂРёРё - РјРЅРѕРіРёРµ РїСЂСЏС‚Р°Р»РёСЃСЊ, РѕС‚РєР°Р·С‹РІР°Р»РёСЃСЊ РёР»Рё РїРѕРїСЂРѕСЃС‚Сѓ РЅРµ СѓСЃРїРµР»Рё. <br />РќРµСЃРјРѕС‚СЂСЏ РЅР° СЃРІРѕР№ РёСЃС…СѓРґР°Р»С‹Р№ Рё РЅРµРєР°Р·РёСЃС‚С‹Р№ РІРЅРµС€РЅРёР№ РІРёРґ, РІ РјСѓС‚РёСЂРѕРІР°РІС€РёС… РєРѕРЅРµС‡РЅРѕСЃС‚СЏС… РР·Р»РѕРјР° СЃРєСЂС‹С‚Р° СЃРµСЂСЊС‘Р·Р°СЏ СЃРёР»Р°. РњСѓС‚Р°РЅС‚ СѓСЃРёР»РёРµРј СЂСѓРє СЃРїРѕСЃРѕР±РµРЅ СЂР°Р·РѕСЂРІР°С‚СЊ РїСЃРµРІРґРѕСЃРѕР±Р°РєСѓ, РѕС‚РѕСЂРІР°С‚СЊ С‡РµР»РѕРІРµРєСѓ РєРѕРЅРµС‡РЅРѕСЃС‚СЊ РёР»Рё РїСЂРѕР±РёС‚СЊ РІРѕРµРЅРЅС‹Р№ Р±СЂРѕРЅРµР¶РёР»РµС‚, СЃР»РѕРјР°РІ РµРіРѕ РѕР±Р»Р°РґР°С‚РµР»СЋ СЂС‘Р±СЂР°. РћРґРЅР°РєРѕ, Р·Р°РІРёРґРµРІ СЌС‚РѕРіРѕ РјСѓС‚Р°РЅС‚Р°, РЅРµ СЃР»РµРґСѓРµС‚ РѕС‚РєСЂС‹РІР°С‚СЊ РѕРіРѕРЅСЊ СЃСЂР°Р·Сѓ. РР·Р»РѕРјС‹ СЂР°Р·СѓРјРЅС‹, С…РѕС‚СЊ Рё СЃ С‚СЂСѓРґРѕРј СЃРїРѕСЃРѕР±РЅС‹ С„РѕСЂРјРёСЂРѕРІР°С‚СЊ СЃРІРѕРё РјС‹СЃР»Рё Рё СЂРµС‡СЊ, Рё Р°С‚Р°РєСѓСЋС‚ СЃС‚Р°Р»РєРµСЂРѕРІ РѕРЅРё РЅРµ С‡Р°СЃС‚Рѕ. РњРЅРѕРіРёРј СѓРґР°РІР°Р»РѕСЃСЊ РЅР°Р»Р°РґРёС‚СЊ РєРѕРЅС‚Р°РєС‚ СЃ СЌС‚РёРјРё РјСѓС‚Р°РЅС‚Р°РјРё, Рё РґР°Р¶Рµ РїРѕР»СѓС‡Р°С‚СЊ РѕС‚ РЅРёС… С‡С‚Рѕ-Р»РёР±Рѕ РІР·Р°РјРµРЅ, РєР°Рє РїСЂР°РІРёР»Рѕ СЌС‚Рѕ РёРЅС„РѕСЂРјР°С†РёСЏ РёР»Рё Р°СЂС‚РµС„Р°РєС‚.<br />Р”Р°РЅРЅС‹Р№ РјСѓС‚Р°РЅС‚ РѕР±РёС‚Р°РµС‚ СЂСЏРґРѕРј СЃ РїРѕСЃС‚СЂРѕР№РєР°РјРё, Р¶РёРІРµС‚ РІ СЃС‚РѕР№Р»Р°С…, СЃР°СЂР°СЏС…, Р·Р°Р±СЂРѕС€РµРЅРЅС‹С… РґРѕРјР°С…, СЃС‚Р°СЂР°СЋС‚СЃСЏ РґРµСЂР¶Р°С‚СЊСЃСЏ РёР»Рё РїРѕР±Р»РёР¶Рµ Рє  Р»СЋРґСЏРј, РёР»Рё Р¶Рµ РІ РјРµСЃС‚Р°С…, РіРґРµ Р¶РёР»Рё СЂР°РЅСЊС€Рµ. Р§Р°С‰Рµ РІСЃРµРіРѕ РѕРґРёРЅРѕС‡РєРё, РЅРѕ С…РѕРґСЏС‚ СЃР»СѓС…Рµ Рѕ С†РµР»РѕРј РїРѕСЃРµР»РµРЅРёРё РР·Р»РѕРјРѕРІ, С‡С‚Рѕ Р±С‹Р»Рѕ РЅР°Р№РґРµРЅРѕ РЅР° СЃРµРІРµСЂРµ Р—РѕРЅС‹. РЎСЂРµРґРё РЅРёС… Р±С‹Р»Рё РѕС…РѕС‚РЅРёРєРё, РґРѕР±С‹РІР°СЋС‰РёРµ РїСЂРѕРїРёС‚Р°РЅРёРµ, РѕС…СЂР°РЅРЅРёРєРё РїРѕСЃРµР»РµРЅРёСЏ Рё РґР°Р¶Рµ С‚Рµ, РєС‚Рѕ РїС‹С‚Р°Р»СЃСЏ Р·Р°РЅРёРјР°С‚СЊСЃСЏ Р·РµРјР»РµРґРµР»РёРµРј. РћРґРЅР°РєРѕ РЅРёРєР°РєРѕРіРѕ СЂРµР°Р»СЊРЅРѕРіРѕ РїРѕРґС‚РІРµСЂР¶РґРµРЅРёСЏ СЌС‚РѕС‚ СЃР»СѓС… РЅРµ РёРјРµРµС‚ - РёРЅР°С‡Рµ Р±С‹ СЌС‚Р° РґРµСЂРµРІРЅСЏ Рё РµС‘ РјРµСЃС‚РѕРїРѕР»РѕР¶РµРЅРёСЏ РґР°РІРЅРѕ СЃС‚Р°Р»Рё РёР·РІРµСЃС‚РЅС‹ РІСЃРµРј Р»СЋРґСЏРј РІ Р—РѕРЅРµ. Р”Р»СЏ СЃС‚Р°Р»РєРµСЂР° РІСЃС‚СЂРµС‡Р° СЃ РР·Р»РѕРјРѕРј, С‡С‚Рѕ РЅРµ РЅР°РїР°Р» СЃСЂР°Р·Сѓ, РЅРµ РЅРµСЃС‘С‚ РЅРёРєР°РєРѕР№ РѕРїР°СЃРЅРѕСЃС‚Рё, СЂР°Р·РІРµ С‡С‚Рѕ РјСѓС‚Р°РЅС‚Р° РЅРµ СЃС‚Р°РЅСѓС‚ РїСЂРѕРІРѕС†РёСЂРѕРІР°С‚СЊ РёР»Рё РїСѓРіР°С‚СЊ. Р”РѕСЃС‚Р°С‚РѕС‡РЅРѕ Р»РёС€СЊ РїРѕРґРµР»РёС‚СЊСЃСЏ СЃ РЅРёРј РµРґРѕР№ Рё, РІРѕР·РјРѕР¶РЅРѕ, РР·Р»РѕРј СЃРјРѕР¶РµС‚ РґР°С‚СЊ С‡С‚Рѕ-Р»РёР±Рѕ РІР·Р°РјРµРЅ - Р±Р»Р°РіРѕРґР°СЂРЅРѕСЃС‚СЊ РёРј РЅРµ С‡СѓР¶РґР°, РЅРµСЃРјРѕС‚СЂСЏ РЅР° РїРѕС‚РµСЂСЏРЅРЅС‹Р№ С‡РµР»РѕРІРµС‡РµСЃРєРёР№ РѕР±Р»РёРє.</t>";
		};
		class section12
		{
			nameSection="РљРѕС‚";
			description="<t font='CenturyGothicBold'>РљРѕС‚</t><br /><t font='CenturyGothic'>РљРѕС‚С‹ Р§Р—Рћ, РїСЂРµРґРїРѕР»РѕР¶РёС‚РµР»СЊРЅРѕ, РїСЂРѕРёР·РѕС€Р»Рё РѕС‚ СЂС‹СЃРё РёР»Рё СЃС‚РµРїРЅС‹С… РєРѕС‚РѕРІ. РћР±С‹С‡РЅРѕ РљРѕС‚ СЂР°Р·РјРµСЂРѕРј С‡СѓС‚СЊ Р±РѕР»СЊС€Рµ СЃР»РµРїРѕРіРѕ РїСЃР°, РЅРѕ РІСЃС‚СЂРµС‡Р°СЋС‚СЃСЏ Рё РјР°С‚С‘СЂС‹Рµ РјСѓС‚Р°РЅС‚С‹ РїРѕР±РѕР»СЊС€Рµ. РўСѓР»РѕРІРёС‰Рµ РєРѕСЂРѕС‚РєРѕРµ, РїР»РѕС‚РЅРѕРµ, С€РµСЂСЃС‚СЊ РјРµСЃС‚Р°РјРё СЃ РїСЂРѕРїР»РµС€РёРЅР°РјРё, РјРµСЃС‚Р°РјРё РЅР°РѕР±РѕСЂРѕС‚ - Р°РЅРѕРјР°Р»СЊРЅРѕ РіСѓСЃС‚Р°СЏ Рё РїР»РѕС‚РЅР°СЏ. РљРѕРіС‚Рё РЅР° СЃРёР»СЊРЅС‹С… Р»Р°РїР°С… Р°РЅРѕРјР°Р»СЊРЅРѕ Р±С‹СЃС‚СЂРѕ СЂР°СЃС‚СѓС‚, Рё РїРѕ РѕСЃС‚СЂРѕС‚Рµ СЃРІРѕРµР№ РЅРµ СѓСЃС‚СѓРїР°СЋС‚ РѕС…РѕС‚РЅРёС‡СЊРёРј РЅРѕР¶Р°Рј. РћС‚Р»РёС‡РёС‚РµР»СЊРЅР°СЏ РѕСЃРѕР±РµРЅРЅРѕСЃС‚СЊ РїРѕ СЃСЂР°РІРЅРµРЅРёСЋ СЃ РґСЂСѓРіРёРјРё РєРѕС€Р°С‡СЊРёРјРё вЂ“ В«РІС‹РїРёСЂР°СЋС‰РёРµ С‰РµРєРёВ» вЂ“ СЂР°СЃРїСѓС…С€Р°СЏ РѕС‚ СЂР°РґРёР°С†РёРё С‰РёС‚РѕРІРёРґРЅР°СЏ Р¶РµР»РµР·Р°. Р’ РѕСЃС‚Р°Р»СЊРЅРѕРј РјР°Р»Рѕ С‡РµРј РѕС‚Р»РёС‡РµРЅ РѕС‚ СЃРІРѕРёС… РїСЂРµРґРєРѕРІ.<br />РљРѕС‚С‹ Р—РѕРЅС‹ РІ РѕСЃРЅРѕРІРЅРѕРј РѕС…РѕС‚СЏС‚СЃСЏ РЅР° РєСЂС‹СЃ СЃ С‚СѓС€РєР°РЅР°РјРё, Рё РѕС…РѕС‚СЏС‚СЊСЃСЏ СѓСЃРїРµС€РЅРѕ, Р° РІ СЃР»СѓС‡Р°Рµ РЅРµС…РІР°С‚РєРё РїРёС‰Рё, РјРѕР¶РµС‚ Р°С‚Р°РєРѕРІР°С‚СЊ Рё Р±РѕР»РµРµ РєСЂСѓРїРЅРѕРµ СЃСѓС‰РµСЃС‚РІРѕ. РћР±РѕСЂРѕРЅРёС‚РµР»СЊРЅРѕ-Р°РіСЂРµСЃСЃРёРІРЅС‹ РїРѕ РѕС‚РЅРѕС€РµРЅРёСЋ Рє С‡РµР»РѕРІРµРєСѓ, РІРѕС€РµРґС€РµРјСѓ РЅР° РёС… С‚РµСЂСЂРёС‚РѕСЂРёСЋ, Рё РІРїРѕР»РЅРµ СЃРїРѕСЃРѕР±РЅС‹ РЅР°РїР°СЃС‚СЊ РЅР° РІС‚РѕСЂР¶РµРЅС†Р°. РќРµ СЂР°СЃСЃРјР°С‚СЂРёРІР°СЋС‚ С‡РµР»РѕРІРµРєР° РєР°Рє РїРёС‰Сѓ, РѕРґРЅР°РєРѕ, РµСЃР»Рё СѓР±СЊСЋС‚, РІРїРѕР»РЅРµ СЃРїРѕРєРѕР№РЅРѕ РјРѕРіСѓС‚ РµСЃС‚СЊ Рё С‡РµР»РѕРІРµС‡РёРЅСѓ. Р“Р»Р°РІРЅРѕРµ РѕСЂСѓР¶РёРµ РјСѓС‚РёСЂРѕРІР°РІС€РµРіРѕ РєРѕС‚Р° - РµРіРѕ СЃРєРѕСЂРѕСЃС‚СЊ, Р»РѕРІРєРѕСЃС‚СЊ Рё РґРѕ СѓР¶Р°СЃР° РѕСЃС‚СЂС‹Рµ РєРѕРіС‚Рё. Р•СЃР»Рё Р¶Рµ РєРѕС‚ Р°С‚Р°РєСѓРµС‚ РіСЂСѓРїРїСѓ СЃС‚Р°Р»РєРµСЂРѕРІ, РїСЂРѕР±Р»РµРј СЃС‚Р°РЅРѕРІРёС‚СЃСЏ РІРґРІРѕРµ Р±РѕР»СЊС€Рµ - РёР·-Р·Р° СЃРєРѕСЂРѕСЃС‚Рё РјСѓС‚Р°РЅС‚Р° РїРѕ РЅРµРјСѓ С‡СЂРµР·РІС‹С‡Р°Р№РЅРѕ С‚СЂСѓРґРЅРѕ РїРѕРїР°СЃС‚СЊ, Рё РІРѕР·СЂР°СЃС‚Р°РµС‚ СЂРёСЃРє СЃР»СѓС‡Р°Р№РЅРѕ РїРѕРґСЃС‚СЂРµР»РёС‚СЊ С‚РѕРІР°СЂРёС‰Р°.  <br />РћС…РѕС‚СЏС‚СЃСЏ, РєР°Рє РїСЂР°РІРёР»Рѕ, РїРѕРѕРґРёРЅРѕС‡РєРµ, РѕРґРЅР°РєРѕ СЂРµРґРєРѕ РјРѕР¶РЅРѕ РЅР°Р±Р»СЋРґР°С‚СЊ РЅРµР±РѕР»СЊС€РёРµ СЃРµРјРµР№СЃС‚РІР° - РїРѕ 3-4 РѕСЃРѕР±Рё. Р’СЂРµРјСЏ РѕС…РѕС‚С‹ - СЃСѓРјРµСЂРєРё Рё РЅРѕС‡СЊ, С‚Р°Рє-РєР°Рє Рё Р±РµР· С‚РѕРіРѕ РѕС‚Р»РёС‡РЅРѕРµ Р·СЂРµРЅРёРµ Рё РЅСЋС… РљРѕС‚РѕРІ СЃ РјСѓС‚Р°С†РёРµР№ СЃС‚Р°Р»Рѕ С‚РѕР»СЊРєРѕ Р»СѓС‡С€Рµ. Р‘РѕР»РµРµ С…РёС‚СЂС‹, Р±С‹СЃС‚СЂС‹ Рё РёСЃРєСѓСЃРЅС‹ РїРѕ СЃСЂР°РІРЅРµРЅРёСЋ СЃРѕ СЃР»РµРїС‹РјРё РїСЃР°РјРё, РЅР° РєРѕС‚РѕСЂС‹С… С‚РѕР¶Рµ РёРЅРѕРіРґР° РІРµРґСѓС‚ РѕС…РѕС‚Сѓ. РЎ РіРѕР»РѕРґСѓС…Рё РјРѕРіСѓС‚ РїСЂРёР±Р»РёР·РёС‚СЊСЃСЏ Рє Р»СЋРґСЏРј, РїС‹С‚Р°СЏСЃСЊ СѓРєСЂР°СЃС‚СЊ РёР»Рё, С‡С‚Рѕ СЂРµР¶Рµ, РІС‹РїСЂРѕСЃРёС‚СЊ С‡С‚Рѕ-РЅРёР±СѓРґСЊ РІРєСѓСЃРЅРѕРµ. РџСЂРёСЂСѓС‡РµРЅРёСЋ РїРѕРґРґР°СЋС‚СЃСЏ РЅР°СЃС‚РѕР»СЊРєРѕ, РЅР°СЃРєРѕР»СЊРєРѕ РёРј РЅР°РґРѕ СЃР°РјРёРј - РґР°Р¶Рµ РїРѕСЃР»Рµ РјСѓС‚Р°С†РёРё СЃРІРѕРµРіРѕ РІРѕР»СЊРЅРѕРіРѕ РЅСЂР°РІР° РљРѕС‚С‹ РЅРµ СѓС‚СЂР°С‚РёР»Рё. РЎС‚Р°Р»РєРµСЂ, РїРѕРІСЃС‚СЂРµС‡Р°РІС€РёР№ РљРѕС‚Р°, РґР°Р»РµРєРѕ РЅРµ СЃСЂР°Р·Сѓ РјРѕР¶РµС‚ РїРѕРґРІРµСЂРіРЅСѓС‚СЊСЃСЏ РЅР°РїР°РґРµРЅРёСЋ - СЃРєРѕСЂРµРµ РІСЃРµРіРѕ С‡РµР»РѕРІРµРє РІС‚РѕСЂРіСЃСЏ РЅР° С‚РµСЂСЂРёС‚РѕСЂРёСЋ РјСѓС‚Р°РЅС‚Р°, Рё СЃРЅР°С‡Р°Р»Р° РµРіРѕ РїРѕРїС‹С‚Р°СЋС‚СЃСЏ РїСЂРѕРіРЅР°С‚СЊ, СѓРіСЂРѕР¶Р°СЋС‰Рµ С€РёРїСЏ РёР»Рё Р±РµРіР°СЏ РІРѕРєСЂСѓРі, РІС‹РЅСѓР¶РґР°СЏ РѕС‚СЃС‚СѓРїРёС‚СЊ. Р•СЃР»Рё Р¶Рµ С‡РµР»РѕРІРµРє РЅРµ СѓСЃРїРµР» РІРѕРІСЂРµРјСЏ СѓР№С‚Рё, РєРѕС‚ СЃ РЅРµРІРµСЂРѕСЏС‚РЅРѕР№ СЃРєРѕСЂРѕСЃС‚СЊСЋ Р±СЂРѕСЃРёС‚СЃСЏ РЅР° РІС‚РѕСЂР¶РµРЅС†Р°, Рё С‚СѓС‚ СѓР¶ СЃРїР°СЃС‚Рё РјРѕРіСѓС‚ С‚РѕР»СЊРєРѕ Р±С‹СЃС‚СЂР°СЏ СЂРµР°РєС†РёСЏ Рё С…РѕСЂРѕС€РµРµ РѕСЂСѓР¶РёРµ, СѓР±РµР¶Р°С‚СЊ РѕС‚ РљРѕС‚Р° РЅРµ РїРѕР»СѓС‡РёС‚СЃСЏ.</t>";
		};
		class section13
		{
			nameSection="РЎРЅРѕСЂРє";
			description="<t font='CenturyGothicBold'>РЎРЅРѕСЂРє</t><br /><t font='CenturyGothic'>РЎР»РѕР¶РЅРѕ РїСЂРµРґСЃС‚Р°РІРёС‚СЊ С‡РµСЂРµР· С‡С‚Рѕ РЅСѓР¶РЅРѕ РїСЂРѕР№С‚Рё, С‡С‚РѕР±С‹ РїСЂРµРІСЂР°С‚РёС‚СЊСЃСЏ РІ РЅР°СЃС‚РѕР»СЊРєРѕ Р¶СѓС‚РєРѕРµ СЃРѕР·РґР°РЅРёРµ. Р‘СѓРґСѓС‡Рё СЂР°РЅРµРµ С‡РµР»РѕРІРµРєРѕРј, РЎРЅРѕСЂРє РІСЃС‘ РµС‰С‘ РїРѕС…РѕР¶ РЅР° РЅРµРіРѕ, РЅРѕ Р»РёС€СЊ РІРЅРµС€РЅРµ - С‚РµР»Рѕ РїРѕРєСЂС‹С‚Рѕ СЂР°РЅР°РјРё Рё СЃСЃР°РґРёРЅР°РјРё, РІРѕР»РѕСЃСЏРЅРѕРіРѕ РїРѕРєСЂРѕРІР° РЅРµС‚, РїРµСЂРµРґРІРёРіР°РµС‚СЃСЏ РёСЃРєР»СЋС‡РёС‚РµР»СЊРЅРѕ РЅР° С‡РµС‚С‹СЂС‘С… РєРѕРЅРµС‡РЅРѕСЃС‚СЏС…, РЅР° РіРѕР»РѕРІРµ РїРѕ РЅРµРёР·РІРµСЃС‚РЅРѕР№ РїСЂРёС‡РёРЅРµ РІСЃРµРіРґР° СЃРґРІРёРЅСѓС‚С‹Р№ РІРІРµСЂС… РїСЂРѕС‚РёРІРѕРіР°Р·. Р’РѕР·РјРѕР¶РЅРѕ, СЌС‚Рѕ СЃР»РµРґСѓСЋС‰Р°СЏ СЃС‚Р°РґРёСЏ РґРµРіСЂР°РґР°С†РёРё Р—РѕРјР±РёСЂРѕРІР°РЅРЅС‹С…, РЅРѕ РµСЃР»Рё РІ РїРѕСЃР»РµРґРЅРёС… РµС‰С‘ РµСЃС‚СЊ С‡С‚Рѕ-С‚Рѕ РѕС‚ РїСЂРµРґС‹РґСѓС‰РµР№ Р»РёС‡РЅРѕСЃС‚Рё, С‚Рѕ СЂР°Р·СѓРј РЎРЅРѕСЂРєР° РїРѕРґРѕР±РµРЅ Р·РІРµСЂРёРЅРѕРјСѓ, РІ РєРѕС‚РѕСЂРѕРј РЅРµ РѕСЃС‚Р°Р»РѕСЃСЊ РЅРёС‡РµРіРѕ С‡РµР»РѕРІРµС‡РµСЃРєРѕРіРѕ.<br />РЎРЅРѕСЂРєРё СЃС‚Р°Р№РЅС‹Рµ РјСѓС‚Р°РЅС‚С‹ Рё РЅР° РѕС…РѕС‚Сѓ РІС‹С…РѕРґСЏС‚ С‚РѕР¶Рµ СЃС‚Р°РµР№, С‡РёСЃР»РµРЅРЅРѕСЃС‚СЊ РєРѕС‚РѕСЂРѕР№ РІСЃРµРіРґР° РєРѕР»РµР±Р»РµС‚СЃСЏ РѕС‚ РЅРµСЃРєРѕР»СЊРєРёС… РѕСЃРѕР±РµР№ РґРѕ РїРѕР»СѓС‚РѕСЂР°-РґРІСѓС… РґРµСЃСЏС‚РєРѕРІ. Р’ РёС… РјРµРЅСЋ РІС…РѕРґРёС‚ РјСЏСЃРѕ Р»СЋР±РѕРіРѕ РїСЂРѕРёСЃС…РѕР¶РґРµРЅРёСЏ Рё СЃСЂРѕРєР° РіРѕРґРЅРѕСЃС‚Рё, РЅРµ Р±СЂРµР·РіСѓСЏ РґР°Р¶Рµ СЂР°Р·РѕСЂСЏС‚СЊ СЃС‚Р°СЂС‹Рµ РєР»Р°РґР±РёС‰Р° Рё СЃС‚Р°Р»РєРµСЂСЃРєРёРµ РјРѕРіРёР»С‹, РїРѕРµРґР°СЏ РјС‘СЂС‚РІСѓСЋ РїР»РѕС‚СЊ. Р’ Р±РѕСЋ РїРѕР»Р°РіР°СЋС‚СЃСЏ РЅР° СЃРІРѕСЋ РІРЅРµР·Р°РїРЅРѕСЃС‚СЊ Рё СЃРёР»Сѓ, РёСЃРїРѕР»СЊР·СѓСЏ РІСЃРµ С‡РµС‚С‹СЂРµ РєРѕРЅРµС‡РЅРѕСЃС‚Рё С‡С‚РѕР±С‹ РІ СЃРІРёСЂРµРїРѕРј РїСЂС‹Р¶РєРµ СЃР±РёС‚СЊ Р¶РµСЂС‚РІСѓ РЅР° Р·РµРјР»СЋ Рё СЂР°Р·РѕСЂРІР°С‚СЊ РµС‘ РЅР° С‡Р°СЃС‚Рё РІСЃРµР№ СЃС‚Р°РµР№. РЎРёР»Р° РёС… РјСѓС‚РёСЂРѕРІР°РІС€РёС… РЅРѕРі СЃРїРѕСЃРѕР±РЅР° Р·Р° РѕРґРёРЅ СѓРґР°СЂ СѓР±РёС‚СЊ РІР·СЂРѕСЃР»РѕРіРѕ С‡РµР»РѕРІРµРєР°, РёР»Рё РєР°Рє РјРёРЅРёРјСѓРј СЃР»РѕРјР°С‚СЊ РµРјСѓ РјРЅРѕР¶РµСЃС‚РІРѕ РєРѕСЃС‚РµР№, РёР· С‡РµРіРѕ СЃР»РµРґСѓРµС‚ РІС‹РІРѕРґ - РЅРµРѕР±С…РѕРґРёРјРѕ РІСЃРµРіРґР° РґРµСЂР¶Р°С‚СЊ РјРµР¶РґСѓ СЃРѕР±РѕР№ Рё РЎРЅРѕСЂРєРѕРј РґРёСЃС‚Р°РЅС†РёСЋ.<br />РЎРЅРѕСЂРєРё РѕР±РёС‚Р°СЋС‚ РїСЂРµРёРјСѓС‰РµСЃС‚РІРµРЅРЅРѕ Р±Р»РёР¶Рµ Рє С†РµРЅС‚СЂСѓ Р—РѕРЅС‹ Рё РґР°Р»СЊС€Рµ РЅР° СЃРµРІРµСЂ, Р»РѕРіРѕРІР° СЃРІРѕРё РґРµР»Р°СЋС‚ РІРµР·РґРµ, РіРґРµ РјРѕР¶РЅРѕ С…РѕС‚СЊ РєР°Рє С‚Рѕ СѓРєСЂС‹С‚СЊСЃСЏ, РєР°Рє СЃСЂРµРґРё Р±СЂРѕС€РµРЅРЅС‹С… РїРѕСЃС‚СЂРѕРµРє, С‚Р°Рє Рё СЃСЂРµРґРё РєР°РјРЅРµР№ РІ РєР°РєРѕРј-Р»РёР±Рѕ РїРѕР»Рµ - РІС‹СЂС‹С‚СЊ РЅРѕСЂСѓ РѕРЅРё СЃРјРѕРіСѓС‚ РІРµР·РґРµ. РС… РїРѕС‡С‚Рё РЅРёРєРѕРіРґР° РЅРµР»СЊР·СЏ СѓРІРёРґРµС‚СЊ РїРѕРѕРґРёРЅРѕС‡РєРµ, РіРґРµ РѕРґРёРЅ СЃРЅРѕСЂРє - С‚Р°Рј РµС‰С‘ РїСЏС‚СЊ, РґРµСЃСЏС‚СЊ, Р° С‚Рѕ Рё РґРІР°РґС†Р°С‚СЊ. РџРѕСЌС‚РѕРјСѓ СЃС‚Р°Р»РєРµСЂ-РѕРґРёРЅРѕС‡РєР°, РѕР±РЅР°СЂСѓР¶РёРІС€РёР№ РїСЂРёСЃСѓС‚СЃС‚РІРёРµ РЎРЅРѕСЂРєРѕРІ РЅРµРїРѕРґР°Р»С‘РєСѓ, РїСЂРё РёС… РЅР°РїР°РґРµРЅРёРё С€Р°РЅСЃРѕРІ РїРѕС‡С‚Рё РЅРµ РёРјРµРµС‚, Рё Р»СѓС‡С€РёРј РІС‹С…РѕРґРѕРј Р±СѓРґРµС‚ РѕС‚СЃС‚СѓРїР»РµРЅРёРµ. РџС‹С‚Р°С‚СЊСЃСЏ СЃРїСЂСЏС‚Р°С‚СЊСЃСЏ РѕС‚ РЅРёС… РїРѕС‡С‚Рё Р±РµСЃРїРѕР»РµР·РЅРѕ - РЎРЅРѕСЂРєРё РёРјРµСЋС‚ РѕС‚Р»РёС‡РЅРѕРµ РѕР±РѕРЅСЏРЅРёРµ, Рё СЃСЂР°Р·Сѓ РїРѕС‡СѓСЋС‚ РґРѕР±С‹С‡Сѓ, Р° РёС… Р»РѕРІРєРѕСЃС‚Рё С…РІР°С‚РёС‚ С‡С‚РѕР±С‹ Р·Р°Р»РµР·С‚СЊ РїРѕС‡С‚Рё РєСѓРґР° СѓРіРѕРґРЅРѕ. Р’РѕРѕСЂСѓР¶С‘РЅРЅР°СЏ РіСЂСѓРїРїР° СѓР¶Рµ РёРјРµРµС‚ Р±РѕР»СЊС€Рµ С€Р°РЅСЃРѕРІ РѕС‚Р±РёС‚СЊСЃСЏ РѕС‚ СЌС‚РёС… РјСѓС‚Р°РЅС‚РѕРІ, РµСЃР»Рё Р±СѓРґРµС‚ Р·РЅР°С‚СЊ РѕС‚РєСѓРґР° РїРѕР№РґС‘С‚ Р°С‚Р°РєР°, РЅРѕ Рё СЌС‚Рѕ РЅРµ РґР°СЃС‚ РіР°СЂР°РЅС‚РёР№ - РЎРЅРѕСЂРєРѕРІ РјРѕР¶РµС‚ РѕРєР°Р·Р°С‚СЊСЃСЏ РїСЂРѕСЃС‚Рѕ СЃР»РёС€РєРѕРј РјРЅРѕРіРѕ.</t>";
		};
		class section14
		{
			nameSection="Р‘СЋСЂРµСЂ";
			description="<t font='CenturyGothicBold'>Р‘СЋСЂРµСЂ</t><br /><t font='CenturyGothic'>РњРЅРѕРіРёРµ СЃС‚Р°Р»РєРµСЂС‹, РІРїРµСЂРІС‹Рµ СѓРІРёРґРµРІС€РёРµ Р‘СЋСЂРµСЂР°, РёР·-Р·Р° РЅРёР·РєРѕРіРѕ СЂРѕСЃС‚Р° Рё РїРѕР»РЅРѕС‚С‹ РјСѓС‚Р°РЅС‚Р° Р°СЃСЃРѕС†РёРёСЂСѓСЋС‚ РµРіРѕ СЃ РіРЅРѕРјРѕРј РёР· РјРЅРѕР¶РµСЃС‚РІР° С„РѕР»СЊРєР»РѕСЂРЅС‹С… СЃРєР°Р·РѕРє Рё Р»РµРіРµРЅРґ, РІРѕС‚ С‚РѕР»СЊРєРѕ С‚Р°РєРёРµ вЂњРіРЅРѕРјС‹вЂќ РІ Р§Р—Рћ РёРјРµСЋС‚ РѕС‚РЅСЋРґСЊ РЅРµ РґРѕР±СЂРѕРґСѓС€РЅС‹Р№ С…Р°СЂР°РєС‚РµСЂ. Р’РЅРµС€РЅРѕСЃС‚СЊ СЌС‚РѕРіРѕ РјСѓС‚Р°РЅС‚Р° РєСЂР°Р№РЅРµ РѕС‚С‚Р°Р»РєРёРІР°СЋС‰Р°СЏ - РїР»РѕС‚РЅРѕРµ С‚РµР»РѕСЃР»РѕР¶РµРЅРёРµ, РЅРёР·РєРёР№ СЂРѕСЃС‚, СЃРјРѕСЂС‰РµРЅРЅР°СЏ Рё РіСЂСѓР±Р°СЏ РєРѕР¶Р°, РїРѕРєСЂС‹С‚Р°СЏ РјРЅРѕР¶РµСЃС‚РІРѕРј СЏР·РІ Рё РЅР°СЂС‹РІРѕРІ, С‡Р°СЃС‚Рѕ РЅРѕСЃРёС‚ СЃС‚Р°СЂРѕРµ СЂР°РґРёРѕР°РєС‚РёРІРЅРѕРµ С‚СЂСЏРїСЊС‘ С‚С‘РјРЅС‹С… РѕС‚С‚РµРЅРєРѕРІ. РЈРІРёРґРµС‚СЊ РёС… РѕС‡РµРЅСЊ СЃР»РѕР¶РЅРѕ РёР·-Р·Р° СЃРєСЂС‹С‚РЅРѕРіРѕ РѕР±СЂР°Р·Р° Р¶РёР·РЅРё Рё РЅРµР»СЋР±РІРё Рє СЏСЂРєРѕРјСѓ СЃРІРµС‚Сѓ - Р·Р°СЃС‚Р°РІРёС‚СЊ Р‘СЋСЂРµСЂР° РїРѕРєРёРЅСѓС‚СЊ СѓРєСЂС‹С‚РёРµ РґРЅС‘Рј РјРѕР¶РЅРѕ С‚РѕР»СЊРєРѕ СЂР°Р·РѕР·Р»РёРІ РµРіРѕ, РёР»Рё РїСЂРёР±Р»РёР·РёРІС€РёСЃСЊ РєРѕ РІС…РѕРґСѓ РІ РёС… Р»РѕРіРѕРІРѕ. Р’РѕС‚ С‚РѕР»СЊРєРѕ РїРѕРґРѕР±РЅРѕРµ Р·СЂРµР»РёС‰Рµ, СЃРєРѕСЂРµРµ РІСЃРµРіРѕ, РЅРµ СЃС‚РѕРёС‚ СѓСЃРёР»РёР№ - РІСЃС‚СЂРµРІРѕР¶РёРІС€РёР№ Р‘СЋСЂРµСЂРѕРІ СЃС‚Р°Р»РєРµСЂ РЅР°РІР»РµРєР°РµС‚ РЅР° СЃРµР±СЏ РѕС‡РµРЅСЊ СЃРµСЂСЊС‘Р·РЅСѓСЋ РѕРїР°СЃРЅРѕСЃС‚СЊ. <br />РќРµСЃРјРѕС‚СЂСЏ РЅР° Р·Р°РјРєРЅСѓС‚С‹Р№ РѕР±СЂР°Р· Р¶РёР·РЅРё РёР·РІРµСЃС‚РЅРѕ, С‡С‚Рѕ РІРЅСѓС‚СЂРё РіСЂСѓРїРїС‹ РїРѕРґРґРµСЂР¶РёРІР°СЋС‚СЃСЏ РѕС‚РЅРѕС€РµРЅРёСЏ, СЃС…РѕР¶РёРµ СЃ РїРµСЂРІРѕР±С‹С‚РЅРѕ-РѕР±С‰РёРЅРЅС‹Рј СЃС‚СЂРѕРµРј, Рё РґР°Р¶Рµ РµСЃС‚СЊ РЅРµРєРѕРµ РїРѕРґРѕР±РёРµ СЂРµР»РёРіРёРё РЅРµСЏСЃРЅРѕР№ РЅР°РїСЂР°РІР»РµРЅРЅРѕСЃС‚Рё. Р›СЋР±РѕРµ РІС‚РѕСЂР¶РµРЅРёРµ РЅР° С‚РµСЂСЂРёС‚РѕСЂРёСЋ СЌС‚РѕР№ РѕР±С‰РёРЅС‹ Р±СѓРґРµС‚ РІСЃС‚СЂРµС‡РµРЅРѕ СЃРїР»РѕС‡С‘РЅРЅРѕР№ С‚РѕР»РїРѕР№ РєР°СЂР»РёРєРѕРІ, РєР°Р¶РґС‹Р№ РёР· РєРѕС‚РѕСЂС‹С… РІР»Р°РґРµРµС‚ С‚РµР»РµРєРёРЅРµС‚РёС‡РµСЃРєРёРјРё СЃРїРѕСЃРѕР±РЅРѕСЃС‚СЏРјРё. Р’ СЃС‚Р°Р»РєРµСЂР°-РЅР°СЂСѓС€РёС‚РµР»СЏ РїРѕР»РµС‚РёС‚ РІСЃС‘, С‡С‚Рѕ С‚РѕР»СЊРєРѕ РјРѕР¶РЅРѕ РѕС‚РѕСЂРІР°С‚СЊ РѕС‚ Р·РµРјР»Рё - СЏС‰РёРєРё, РґРѕСЃРєРё, РєР°РјРЅРё, РІРµС‚РєРё, Р»СЋР±РѕР№ РјСѓСЃРѕСЂ. Р•СЃР»Рё Р‘СЋСЂРµСЂ РѕРєР°Р¶РµС‚СЃСЏ РґРѕСЃС‚Р°С‚РѕС‡РЅРѕ Р±Р»РёР·РєРѕ, РѕРЅ СЃРјРѕР¶РµС‚ РґР°Р¶Рµ РІС‹СЂРІР°С‚СЊ РёР· СЂСѓРє СЃС‚Р°Р»РєРµСЂР° РѕСЂСѓР¶РёРµ, Р° СЃР°РјРѕРіРѕ РµРіРѕ РѕС‚РєРёРЅСѓС‚СЊ РЅР° РЅРµСЃРєРѕР»СЊРєРѕ РјРµС‚СЂРѕРІ РЅР°Р·Р°Рґ. РЎСѓС‰РµСЃС‚РІСѓСЋС‚ РґР°РЅРЅС‹Рµ Рѕ РјР°С‚С‘СЂС‹С… Р±СЋСЂРµСЂР°С…, СЃРїРѕСЃРѕР±РЅС‹С… РїРѕРґРЅСЏС‚СЊ С‚СЂР°РєС‚РѕСЂ РёР»Рё РґР°Р¶Рµ Р¶РµР»РµР·РЅРѕРґРѕСЂРѕР¶РЅС‹Р№ РІР°РіРѕРЅ.<br />Р‘СЋСЂРµСЂС‹ Р¶РёРІСѓС‚ РєРѕР»РѕРЅРёСЏРјРё РґРѕ РѕРґРЅРѕРіРѕ-РґРІСѓС… РґРµСЃСЏС‚РєРѕРІ РѕСЃРѕР±РµР№, РЅР° СЃРµРІРµСЂРµ Р—РѕРЅС‹, РїРѕС‡С‚Рё РЅРµ РїРѕРєР°Р·С‹РІР°СЏСЃСЊ РЅР° СЋРіРµ. Р’ РєР°С‡РµСЃС‚РІРµ СѓР±РµР¶РёС‰Р° РїСЂРµРґРїРѕС‡РёС‚Р°СЋС‚ РІС‹Р±РёСЂР°С‚СЊ СЃС‚Р°СЂС‹Рµ РєРѕР»Р»РµРєС‚РѕСЂС‹, С‚РѕРЅРЅРµР»Рё Рё С€Р°С…С‚С‹, СЂРµР¶Рµ - Р·Р°Р±СЂРѕС€РµРЅРЅС‹Рµ СЃРєР»Р°РґС‹ Рё Р·Р°РІРѕРґСЃРєРёРµ РєРѕРјРїР»РµРєСЃС‹. РљР°СЂР»РёРєРё РїР»РѕС‚РѕСЏРґРЅС‹, РїРёС‚Р°СЋС‚СЃСЏ РІ РѕСЃРЅРѕРІРЅРѕРј РїР°РґР°Р»СЊСЋ, РѕРґРЅР°РєРѕ РµСЃР»Рё РІРѕР·РЅРёРєРЅРµС‚ РЅСѓР¶РґР° - РјРѕРіСѓС‚ РѕС…РѕС‚РёС‚СЊСЃСЏ, Рё С‡РµР»РѕРІРµРє С‚РѕР¶Рµ РІС…РѕРґРёС‚ РІ СЃРїРёСЃРѕРє РґРѕР±С‹С‡Рё. РЎС‚Р°Р»РєРµСЂ-РѕРґРёРЅРѕС‡РєР° РґРѕР»Р¶РµРЅ РёР·Р±РµРіР°С‚СЊ РјРµСЃС‚Р° РѕР±РёС‚Р°РЅРёСЏ Р‘СЋСЂРµСЂРѕРІ, С‚Р°Рє-РєР°Рє РїРѕС‡С‚Рё РЅРµ РёРјРµРµС‚ С€Р°РЅСЃРѕРІ СЃРїСЂР°РІРёС‚СЊСЃСЏ СЃ РЅРёРјРё. Р’РѕРѕСЂСѓР¶С‘РЅРЅР°СЏ РіСЂСѓРїРїР° РёРјРµРµС‚ С€Р°РЅСЃС‹ РµСЃР»Рё Р±СѓРґРµС‚ РІРµСЃС‚Рё РЅР°РїСЂР°РІР»РµРЅРЅС‹Р№ РѕРіРѕРЅСЊ Рё РЅРµ РґР°СЃС‚ РєР°СЂР»РёРєР°Рј СЃС„РѕСЂРјРёСЂРѕРІР°С‚СЊ СЃР»Р°Р¶РµРЅРЅСѓСЋ РѕР±РѕСЂРѕРЅСѓ. Р’Р°Р¶РЅРѕ РїРѕРјРЅРёС‚СЊ - РіСЂР°РЅР°С‚С‹ Р±РµСЃРїРѕР»РµР·РЅС‹ РїСЂРѕС‚РёРІ Р‘СЋСЂРµСЂРѕРІ, С‚Р°Рє-РєР°Рє РєР°СЂР»РёРєРё РїСЂРѕСЃС‚Рѕ РѕС‚Р±СЂРѕСЃСЏС‚ РёС… РѕР±СЂР°С‚РЅРѕ.</t>";
		};
		class section15
		{
			nameSection="РџР°СѓРє";
			description="<t font='CenturyGothicBold'>РџР°СѓРє</t><br /><t font='CenturyGothic'>Р­С‚Рѕ РѕРґРёРЅ РёР· СЃР°РјС‹С… СЃС‚СЂР°РЅРЅС‹С… РјСѓС‚Р°РЅС‚РѕРІ РІ Р—РѕРЅРµ, Рё РІРјРµСЃС‚Рµ СЃ С‚РµРј РµРґРІР° Р»Рё РЅРµ СЃР°РјС‹Р№ СЂРµРґРєРёР№. РљС‚Рѕ Рё РєРѕРіРґР° РІРїРµСЂРІС‹Рµ РѕРїРёСЃР°Р» РјСѓС‚РёСЂРѕРІР°РІС€РµРіРѕ РїР°СѓРєР° - РЅРµРёР·РІРµСЃС‚РЅРѕ, РѕРґРЅР°РєРѕ РІ РґРѕСЃС‚РѕРІРµСЂРЅРѕСЃС‚Рё РёРЅС„РѕСЂРјР°С†РёРё Рѕ РЅРёС… РЅРµ РїСЂРёС…РѕРґРёС‚СЃСЏ СЃРѕРјРЅРµРІР°С‚СЊСЃСЏ, С‚Р°Рє-РєР°Рє РїСЂРµРґРѕСЃС‚Р°РІРёР»Рё РµС‘ РЅР°СѓС‡РЅС‹Рµ РіСЂСѓРїРїС‹ РЅР°С…РѕРґСЏС‰РёРµСЃСЏ РЅР° С‚РµСЂСЂРёС‚РѕСЂРёРё Р§Р—Рћ. РџРѕ СЌС‚РёРј РґР°РЅРЅС‹Рј, Р°РЅРѕРјР°Р»СЊРЅС‹С… СЂР°Р·РјРµСЂРѕРІ РџР°СѓРєРё РІ Р§Р—Рћ РїСЂРѕРёР·РѕС€Р»Рё РѕС‚ СЃРµРјРµР№СЃС‚РІР° РїС‚РёС†РµРµРґРѕРІ, РїСЂРёС‡С‘Рј СЂРµС‡СЊ РёРґС‘С‚ Рѕ РјРёРЅРёРјР°Р»СЊРЅРѕ СЏРґРѕРІРёС‚С‹С… РѕСЃРѕР±СЏС…. РР· СЌС‚РѕРіРѕ СЃР»РµРґСѓРµС‚ С‡С‚Рѕ, РІРµСЂРѕСЏС‚РЅРѕ, СЌС‚Рё РїР°СѓРєРё - СЂРµР·СѓР»СЊС‚Р°С‚ РєР°РєРёС…-С‚Рѕ РЅР°СѓС‡РЅС‹С… РѕРїС‹С‚РѕРІ, РёР»Рё Р¶Рµ РїРѕСЃР»РµРґСЃС‚РІРёСЏ РІР»РёСЏРЅРёСЏ Р—РѕРЅС‹ РЅР° СЌС‚Рё СЃР°РјС‹Рµ РѕРїС‹С‚С‹. Рћ РјР°РєСЃРёРјР°Р»СЊРЅС‹С… СЂР°Р·РјРµСЂР°С… Р§РµСЂРЅРѕР±С‹Р»СЊСЃРєРѕРіРѕ РџР°СѓРєР° РЅРёС‡РµРіРѕ РЅРµРёР·РІРµСЃС‚РЅРѕ, РїСЂРµРґРїРѕР»Р°РіР°РµС‚СЃСЏ СЃСЂРµРґРЅРёР№ СЂР°Р·РјРµСЂ РѕСЃРѕР±Рё РІРёРґР° РїСЂРёРјРµСЂРЅРѕ СЂР°РІРЅС‹Р№ РјРµСЃС‚РЅС‹Рј РљР°Р±Р°РЅР°Рј.<br />РћР±РёС‚Р°СЋС‚ РџР°СѓРєРё РёСЃРєР»СЋС‡РёС‚РµР»СЊРЅРѕ РІ РїРѕРґР·РµРјРЅС‹С… С‚РѕРЅРЅРµР»СЏС…, РїРµС‰РµСЂР°С…, Р·Р°Р±СЂРѕС€РµРЅРЅС‹С… Р»Р°Р±РѕСЂР°С‚РѕСЂРёСЏС… Рё РїРѕРґРІР°Р»Р°С… Рё РїРѕРґР·РµРјРЅС‹С… РєРѕРјРїР»РµРєСЃР°С… - РїРѕ РєСЂР°Р№РЅРµР№ РјРµСЂРµ, РїРѕРєР° С‡С‚Рѕ РёС… РІРёРґРµР»Рё РёСЃРєР»СЋС‡РёС‚РµР»СЊРЅРѕ РїРѕРґ Р·РµРјР»С‘Р№. РўР°РєР¶Рµ РЅРµРёР·РІРµСЃС‚РЅРѕ - Р¶РёРІСѓС‚ Р»Рё СЌС‚Рё РїР°СѓРєРё РєРѕР»РѕРЅРёСЏРјРё, РёР»Рё Р¶Рµ СЏРІР»СЏСЋС‚СЃСЏ РѕРґРёРЅРѕС‡РЅС‹РјРё РѕСЃРѕР±СЏРјРё, Рё РґРѕР±СЂРѕРІРѕР»СЊС†РµРІ РїСЂРѕРІРµСЂРёС‚СЊ СЌС‚Рѕ РїРѕРєР°-С‡С‚Рѕ РЅРµ РЅР°С€Р»РѕСЃСЊ. Рћ РїРѕРІРµРґРµРЅРёРё РїСЂРё РѕС…РѕС‚Рµ С‚РѕР¶Рµ РЅРёС‡РµРіРѕ РЅРµРёР·РІРµСЃС‚РЅРѕ. Р•РґРёРЅСЃС‚РІРµРЅРЅРѕРµ, С‡С‚Рѕ РјРѕР¶РЅРѕ С‚РѕС‡РЅРѕ СЃРєР°Р·Р°С‚СЊ - РїСЂРѕС‚РёРІ РїРѕРґРѕР±РЅРѕРіРѕ РїР°СѓРєР° С…РѕСЂРѕС€Рѕ СЂР°Р±РѕС‚Р°РµС‚ РєСЂСѓРїРЅРѕРєР°Р»РёР±РµСЂРЅРѕРµ РІРѕРѕСЂСѓР¶РµРЅРёРµ, Р° С‚Р°РєР¶Рµ РґСЂРѕР±РѕРІРёРєРё Рё РіСЂР°РЅР°С‚РѕРјС‘С‚С‹. Р’РµСЂРѕСЏС‚РЅРѕ, С‚РµСЂРјРёС‡РµСЃРєРёРµ СЃСЂРµРґСЃС‚РІР° РїРѕСЂР°Р¶РµРЅРёСЏ С‚РѕР¶Рµ РѕРєР°Р¶СѓС‚СЃСЏ РєСЂР°Р№РЅРµ СЌС„С„РµРєС‚РёРІРЅС‹РјРё.</t>";
		};
		class section16
		{
			nameSection="РњРµРґРІРµРґСЊ";
			description="<t font='CenturyGothicBold'>РњРµРґРІРµРґСЊ</t><br /><t font='CenturyGothic'>Р’ РґСЂРµРІРЅРµР№ РјРёС„РѕР»РѕРіРёРё РјРµРґРІРµРґСЊ РёРјРµР» СЃС‚Р°С‚СѓСЃ РґСѓС…Р°-С…СЂР°РЅРёС‚РµР»СЏ РёР»Рё РІРѕРІСЃРµ РѕР»РёС†РµС‚РІРѕСЂСЏР» Р±РѕР¶РµСЃС‚РІРѕ. Р’ Р—РѕРЅРµ СЌС‚Рё РїРѕСЂСЏРґРєРё РЅРµРјРЅРѕРіРѕ РёР·РјРµРЅРёР»РёСЃСЊ, РґР° С‚Р°Рє, С‡С‚Рѕ РІСЃС‚СЂРµС‚РёС‚СЊ РјРµРґРІРµРґСЏ РЅР° РїСЂРѕСЃС‚РѕСЂР°С… Р§Р—Рћ - СЃС‚Р°С‚СЊ Р·Р°РёРєРѕР№ РЅР° РІСЃСЋ Р¶РёР·РЅСЊ. РќРёРєР°РєРёС… СЃСѓС‰РµСЃС‚РІРµРЅРЅРѕ РјРµРЅСЏСЋС‰РёС… С„РёР·РёРѕР»РѕРіРёСЋ РјСѓС‚Р°С†РёР№ СЃ РЅРёРј РЅРµ РїСЂРѕРёР·РѕС€Р»Рѕ, РЅР°РѕР±РѕСЂРѕС‚ - РіР°Р±Р°СЂРёС‚Р°РјРё РѕРЅ РґР°Р¶Рµ РїСЂРёР±Р»РёР·РёР»СЃСЏ Рє РѕРґРЅРѕРјСѓ РёР· СЃРІРѕРёС… РїСЂРµРґРєРѕРІ, РіРёРіР°РЅС‚СЃРєРѕРјСѓ РєРѕСЂРѕС‚РєРѕРјРѕСЂРґРѕРјСѓ РјРµРґРІРµРґСЋ, Р° С‚Рѕ Рё РїСЂРµРІР·РѕС€С‘Р» РµРіРѕ. Р”РѕСЃС‚РёРіР°СЏ РІ С…РѕР»РєРµ РґРІСѓС… РјРµС‚СЂРѕРІ РёР»Рё РІС‹С€Рµ, РІ СЃС‚РѕР№РєРµ РЅР° Р·Р°РґРЅРёС… Р»Р°РїР°С… РњСѓС‚РёСЂРѕРІР°РІС€РёР№ РњРµРґРІРµРґСЊ СЃРїРѕСЃРѕР±РµРЅ РґРѕСЃС‚Р°С‚СЊ РґРѕ РѕС‚РјРµС‚РєРё РІ 4 - 4.5 РјРµС‚СЂР°, Рё Р·СЂРµР»РёС‰Рµ СЌС‚Рѕ РЅРµ РґР»СЏ СЃР»Р°Р±РѕРЅРµСЂРІРЅС‹С… - Р“СѓСЃС‚Р°СЏ С€РµСЂСЃС‚СЊ С‡Р°СЃС‚Рѕ Р»РёРЅСЏРµС‚ Рё РїР°С‡РєР°РµС‚СЃСЏ, РјРѕСЂРґР° РїРѕС‡С‚Рё РІСЃРµРіРґР° РїРѕРєСЂС‹С‚Р° РјРЅРѕРіРѕС‡РёСЃР»РµРЅРЅС‹РјРё С€СЂР°РјР°РјРё РѕС‚ СЃС…РІР°С‚РѕРє СЃ РґСЂСѓРіРёРјРё РјСѓС‚Р°РЅС‚Р°РјРё, РЅР° РјРѕС‰РЅС‹С… Р»Р°РїР°С… С‚Р°РєР¶Рµ РѕРіСЂРѕРјРЅС‹Рµ РєРѕРіС‚Рё, Рё РІСЃСЏ СЌС‚Р° РјР°С…РёРЅР° РґРѕСЃС‚РёРіР°РµС‚ РІРµСЃР° Р±РѕР»СЊС€Рµ С‚РѕРЅРЅС‹. РЈ СЃС‚Р°Р»РєРµСЂРѕРІ С…РѕРґРёС‚ СЃР»СѓС…, С‡С‚Рѕ РѕСЃРѕР±Рѕ РјР°С‚С‘СЂС‹Рµ Р§РµСЂРЅРѕР±С‹Р»СЊСЃРєРёРµ РњРµРґРІРµРґРё РјРѕРіСѓС‚ РЅР° СЂР°РІРЅС‹С… Р±РѕСЂРѕС‚СЊСЃСЏ СЃ РџСЃРµРІРґРѕРіРёРіР°РЅС‚РѕРј. РўР°Рє Р»Рё СЌС‚Рѕ РЅР° СЃР°РјРѕРј РґРµР»Рµ - РµС‰С‘ РЅРёРєС‚Рѕ РЅРµ РІРёРґРµР».<br />РћРїС‹С‚РЅС‹Рµ РѕС…РѕС‚РЅРёРєРё, РїРѕРІРµРґР°РІС€РёРµ Рѕ РІСЃС‚СЂРµС‡Рµ СЃ РњРµРґРІРµРґРµРј, СЂР°СЃСЃРєР°Р·С‹РІР°СЋС‚, С‡С‚Рѕ РЅРµСЃРјРѕС‚СЂСЏ РЅР° РєР°Р¶СѓС‰СѓСЋСЃСЏ РЅРµСѓРєР»СЋР¶РµСЃС‚СЊ Р·РІРµСЂСЊ СЃРїРѕСЃРѕР±РµРЅ СЂР°Р·РІРёРІР°С‚СЊ РѕРіСЂРѕРјРЅСѓСЋ СЃРєРѕСЂРѕСЃС‚СЊ, РїСЂРё СЌС‚РѕРј Р»РµРіРєРѕ РјРµРЅСЏСЏ С‚СЂР°РµРєС‚РѕСЂРёСЋ РґРІРёР¶РµРЅРёСЏ. Р§РµСЂРЅРѕР±С‹Р»СЊСЃРєРёР№ РњРµРґРІРµРґСЊ РІСЃРµСЏРґРµРЅ Рё СЃРІРёСЂРµРї, РїРѕС‚РѕРјСѓ Р±РµР· РїСЂРѕРјРµРґР»РµРЅРёСЏ Р°С‚Р°РєСѓРµС‚ Р»СЋР±РѕРµ РѕР±РЅР°СЂСѓР¶РµРЅРЅРѕРµ СЃСѓС‰РµСЃС‚РІРѕ, РёСЃРєР»СЋС‡Р°СЏ СЂР°Р·РІРµ С‡С‚Рѕ СЃРѕРІСЃРµРј СѓР¶ РјР°Р»РµРЅСЊРєРёС… РѕР±РёС‚Р°С‚РµР»РµР№ Р—РѕРЅС‹ Рё СЃС‚РѕР»СЊ Р¶Рµ СЃРІРёСЂРµРїС‹С… РџСЃРµРІРґРѕРіРёРіР°РЅС‚РѕРІ - РёС… Р§РµСЂРЅРѕР±С‹Р»СЊСЃРєРёР№ РњРёС€РєР° РїСЂРµРґРїРѕС‡РёС‚Р°РµС‚ РѕР±С…РѕРґРёС‚СЊ. РќРµ Р±СЂРµР·РіСѓРµС‚ Рё РїР°РґР°Р»СЊСЋ. <br />РњРµРґРІРµРґСЊ С‚С‰Р°С‚РµР»СЊРЅРѕ СЃР»РµРґРёС‚ Р·Р° СЃРІРѕРµР№ С‚РµСЂСЂРёС‚РѕСЂРёРµР№, Рё СЃРµР»РёС‚СЃСЏ РїСЂРµРёРјСѓС‰РµСЃС‚РІРµРЅРЅРѕ РІ Р»РµСЃР°С…, РѕРґРЅР°РєРѕ С‚РѕС‡РЅС‹Р№ Р°СЂРµР°Р» РµРіРѕ РѕР±РёС‚Р°РЅРёСЏ СѓСЃС‚Р°РЅРѕРІРёС‚СЊ СЃР»РѕР¶РЅРѕ, Рё РІСЃС‚СЂРµС‚РёС‚СЊ РµРіРѕ, РІРµСЂРѕСЏС‚РЅРѕ, РјРѕР¶РЅРѕ РІ Р»СЋР±РѕРј Р»РµСЃСѓ РЅР° С‚РµСЂСЂРёС‚РѕСЂРёРё Р§Р—Рћ. РљСЂР°Р№РЅРµ СЂРµРґРєРѕ РјРёРіСЂРёСЂСѓРµС‚ РІ РґСЂСѓРіРёРµ СЂР°Р№РѕРЅС‹, РІ РѕСЃРЅРѕРІРЅРѕРј РёР·-Р·Р° РїСЂРѕР±Р»РµРј СЃ РєРѕСЂРјРѕРІРѕР№ Р±Р°Р·РѕР№. РЎС‚Р°Р»РєРµСЂР°Рј-РѕРґРёРЅРѕС‡РєР°Рј РІСЃС‚СЂРµС‡Р° СЃ Р§РµСЂРЅРѕР±С‹Р»СЊСЃРєРёРј РњРµРґРІРµРґРµРј РЅРµ СЃСѓР»РёС‚ РЅРёС‡РµРіРѕ РїСЂРёСЏС‚РЅРѕРіРѕ, Рё СЃРїР°СЃС‚РёСЃСЊ РѕС‚ РЅРµРіРѕ РјРѕР¶РЅРѕ Р»РёС€СЊ Р±РµРіСЃС‚РІРѕРј СЃ РїРѕСЃР»РµРґСѓСЋС‰РёРј СѓРєСЂС‹С‚РёРµРј РІ РЅРµРґРѕСЃСЏРіР°РµРјРѕРј РґР»СЏ С…РёС‰РЅРёРєР° РјРµСЃС‚Рµ. Р’РѕРѕСЂСѓР¶С‘РЅРЅР°СЏ РіСЂСѓРїРїР° РјРѕР¶РµС‚ РїРѕРїСЂРѕР±РѕРІР°С‚СЊ СЃРІР°Р»РёС‚СЊ РјСѓС‚Р°РЅС‚Р° С€РєРІР°Р»СЊРЅС‹Рј РѕРіРЅС‘Рј, РѕРґРЅР°РєРѕ РґР°Р¶Рµ С‚Р°РєРёС… СЃРёР» РјРѕР¶РµС‚ РЅРµ С…РІР°С‚РёС‚СЊ, С‡С‚РѕР±С‹ РѕСЃС‚Р°РЅРѕРІРёС‚СЊ СЂР°Р·СЉСЏСЂС‘РЅРЅРѕРіРѕ РјРµРґРІРµРґСЏ.</t>";
		};
		class section17
		{
			nameSection="РўР°СЂРє";
			description="<t font='CenturyGothicBold'>РўР°СЂРє</t><br /><t font='CenturyGothic'>РњР°Р»Рѕ С‡С‚Рѕ СЃРїРѕСЃРѕР±РЅРѕ РІРЅСѓС€РёС‚СЊ С‚Р°РєРѕР№ СѓР¶Р°СЃ Рё РѕС‚РІСЂР°С‰РµРЅРёРµ, РєР°РєРёРµ РІРЅСѓС€Р°РµС‚ РўР°СЂРє. Р­С‚РѕС‚ РјСѓС‚Р°РЅС‚ СЏРІР»СЏРµС‚СЃСЏ С‡РµРј-С‚Рѕ РІСЂРѕРґРµ РєРѕРЅС†РµРЅС‚СЂР°С†РёРё РІСЃРµРіРѕ РЅРµРІРѕРѕР±СЂР°Р·РёРјРѕРіРѕ Р±РµР·СѓРјРёСЏ, С‡С‚Рѕ Р—РѕРЅР° РІС‹РїР»С‘СЃРєРёРІР°РµС‚ РЅР°СЂСѓР¶Сѓ. РљРѕРіРґР°-С‚Рѕ РўР°СЂРє Р±С‹Р» РѕР±С‹С‡РЅРѕР№ Р»РѕС€Р°РґСЊСЋ, РґРёРєРѕР№ РёР»Рё РґРѕРјР°С€РЅРµР№, РЅРѕ Сѓ Р°РЅРѕРјР°Р»СЊРЅРѕР№ СЌРЅРµСЂРіРёРё Р—РѕРЅС‹ РЅР° СЌС‚РёС… Р¶РёРІРѕС‚РЅС‹С… Р±С‹Р»Рё СЃРІРѕРё РїР»Р°РЅС‹. РџРѕРєРѕР»РµРЅРёРµ Р·Р° РїРѕРєРѕР»РµРЅРёРµРј, РёС… РІРЅРµС€РЅРѕСЃС‚СЊ Рё РїРѕРІРµРґРµРЅРёРµ РїСЂРµРѕР±СЂР°Р·РѕРІС‹РІР°Р»РёСЃСЊ, РІ РёС‚РѕРіРµ РїСЂРµРІСЂР°С‚РёРІ РѕР±С‹С‡РЅСѓСЋ Р»РѕС€Р°РґСЊ РІ СѓР¶Р°СЃР°СЋС‰РµРіРѕ РјРѕРЅСЃС‚СЂР° СЃ РјРµСЂС‚РІРµРЅРЅРѕ-С‚С‘РјРЅРѕР№ РєРѕР¶РµР№, РѕР±Р»РµР·С€РµР№ РґРѕ РєРѕСЃС‚РµР№ РјРѕСЂРґРѕР№, РІС‹РїСѓС‡РµРЅРЅС‹РјРё РіР»Р°Р·Р°РјРё Рё РјРЅРѕР¶РµСЃС‚РІРµРЅРЅС‹РјРё РіРµРјР°С‚РѕРјР°РјРё РїРѕ РІСЃРµРјСѓ С‚РµР»Сѓ. РџРµСЂРµРґРЅРёРµ РєРѕРЅРµС‡РЅРѕСЃС‚Рё РјСѓС‚РёСЂРѕРІР°Р»Рё, Рё РѕР±Р·Р°РІРµР»РёСЃСЊ С…РёС‚РёРЅРѕРІС‹РјРё РЅР°СЂРѕСЃС‚Р°РјРё, РєРѕРїС‹С‚Р° СЃС‚Р°Р»Рё Р±РѕР»СЊС€Рµ РїРѕС…РѕРґРёС‚СЊ РЅР° РєРѕРіС‚Рё, Р° Р·СѓР±С‹ РїСЂРёРѕР±СЂРµР»Рё Р±РѕР»РµРµ С‚РѕРЅРєСѓСЋ Рё Р·Р°РѕСЃС‚СЂС‘РЅРЅСѓСЋ С„РѕСЂРјСѓ.<br />РР·-Р·Р° СЂРµРґРєРѕСЃС‚Рё СЌС‚РѕРіРѕ РјСѓС‚Р°РЅС‚Р° СЃР»РѕР¶РЅРѕ СЃРєР°Р·Р°С‚СЊ, СЃС‚Р°РґРЅС‹Р№ РѕРЅ РёР»Рё РІСЃС‘ Р¶Рµ РѕРґРёРЅРѕС‡РєР°, РѕРґРЅР°РєРѕ РЅРµСЃРєРѕР»СЊРєРѕ СЂР°Р· СЃС‚Р°Р»РєРµСЂР°Рј СѓРґР°РІР°Р»РѕСЃСЊ РІРёРґРµС‚СЊ РіСЂСѓРїРїС‹ РёР· 3-4 РѕСЃРѕР±РµР№. РџРѕ РёС… РѕРїРёСЃР°РЅРёСЏРјРё РўР°СЂРєРё - РєСЂР°Р№РЅРµ Р¶РµСЃС‚РѕРєРё РґР°Р¶Рµ РїРѕ РѕС‚РЅРѕС€РµРЅРёСЋ РґСЂСѓРі Рє РґСЂСѓРіСѓ, РµСЃС‚СЊ СЃРІРёРґРµС‚РµР»СЊСЃС‚РІР° РєР°РЅРЅРёР±Р°Р»РёР·РјР° Рё РґРµС‚РѕСѓР±РёР№СЃС‚РІР°. Рљ Р»СЋР±РѕРјСѓ РґСЂСѓРіРѕРјСѓ Р¶РёРІРѕРјСѓ СЃСѓС‰РµСЃС‚РІСѓ РѕРЅРё С‚Р°РєР¶Рµ РёСЃРїС‹С‚С‹РІР°СЋС‚ Р±РµСЃРїСЂРёС‡РёРЅРЅСѓСЋ Р°РіСЂРµСЃСЃРёСЋ, Рё Р±СЂРѕСЃР°СЋС‚СЃСЏ РµРґРІР° Р·Р°РІРёРґРµРІ. РџРѕ РґР°РЅРЅС‹Рј СѓС‡С‘РЅС‹С… Рё СЃРІРёРґРµС‚РµР»СЊСЃС‚РІР°Рј РЅРµРєРѕС‚РѕСЂС‹С… СЃС‚Р°Р»РєРµСЂРѕРІ, РґР°Р¶Рµ РљРѕРЅС‚СЂРѕР»С‘СЂС‹ РёР·Р±РµРіР°СЋС‚ СЌС‚РёС… Р»РѕС€Р°РґРµР№, С‚Р°Рє-РєР°Рє РЅРµ РІ СЃРѕСЃС‚РѕСЏРЅРёРё СѓРґРµСЂР¶Р°С‚СЊ РёС… РїРѕРґ РєРѕРЅС‚СЂРѕР»РµРј. Р­С‚Рѕ РґРµР»Р°РµС‚ РўР°СЂРєР° РЅРµРІРµСЂРѕСЏС‚РЅРѕ РѕРїР°СЃРЅС‹Рј С‡СѓРґРѕРІРёС‰РµРј, С‡С‚Рѕ РѕРґРЅРёРј СЃРІРѕРёРј РІРёРґРѕРј РјРѕР¶РµС‚ Р·Р°СЃС‚Р°РІРёС‚СЊ РЅРµРєРѕС‚РѕСЂС‹С… РѕСЃРѕР±Рѕ С‡СѓРІСЃС‚РІРёС‚РµР»СЊРЅС‹С… СЃС‚Р°Р»РєРµСЂРѕРІ РІРµСЂРЅСѓС‚СЊ СЃРІРѕР№ Р·Р°РІС‚СЂР°Рє РІРѕ РІРЅРµС€РЅРёР№ РјРёСЂ.<br />РћР±РёС‚Р°СЋС‚ РўР°СЂРєРё РїСЂРµРёРјСѓС‰РµСЃС‚РІРµРЅРЅРѕ РЅР° СЂР°РІРЅРёРЅР°С… СЃРµРІРµСЂР° Р—РѕРЅС‹, С‚Р°РєР¶Рµ РјРѕР¶РЅРѕ РІСЃС‚СЂРµС‚РёС‚СЊ Р±Р»РёР¶Рµ Рє Р±РѕР»РѕС‚Р°Рј Рё РІРѕРґРµ, Р° РµС‰С‘ Р»СѓС‡С€Рµ - РЅРµ РІСЃС‚СЂРµС‡Р°С‚СЊ. РЎР»РѕР¶РЅРѕ РїСЂРµРґСЃС‚Р°РІРёС‚СЊ СЃРµР±Рµ РєРѕРіРѕ-Р»РёР±Рѕ, РєС‚Рѕ РїРѕ Р±РµР·СЂР°СЃСЃСѓРґРЅРѕСЃС‚Рё, Р±РµСЃСЃС‚СЂР°С€РёСЋ Рё Р°РіСЂРµСЃСЃРёРІРЅРѕСЃС‚Рё РїРѕРІРµРґРµРЅРёСЏ РїСЂРµРІР·РѕС€С‘Р» Р±С‹ РўР°СЂРєР°. Р•СЃР»Рё СЃС‚Р°Р»РєРµСЂСѓ РїРѕРІРµР·Р»Рѕ РѕР±РЅР°СЂСѓР¶РёС‚СЊ  СЌС‚РѕРіРѕ РјСѓС‚Р°РЅС‚Р° РїРµСЂРІС‹Рј, Р»СѓС‡С€Рµ РІСЃРµРіРѕ Р±СѓРґРµС‚ РѕС‚СЃС‚СѓРїРёС‚СЊ Рё РѕР±РѕР№С‚Рё РѕРїР°СЃРЅСѓСЋ РѕР±Р»Р°СЃС‚СЊ, РЅРµ СЃС‚РѕРёС‚ РїС‹С‚Р°С‚СЊСЃСЏ СѓР±РёС‚СЊ РµРіРѕ. Р“СЂСѓРїРїР° РјРѕР¶РµС‚ РїРѕРїСЂРѕР±РѕРІР°С‚СЊ Р°С‚Р°РєРѕРІР°С‚СЊ РўР°СЂРєР° РµСЃР»Рё Сѓ РЅРёС… РµСЃС‚СЊ РґРѕСЃС‚Р°С‚РѕС‡РЅРѕ РѕСЂСѓР¶РёСЏ, С‡С‘С‚РєРёР№ РїР»Р°РЅ Рё СЃС‚Р°Р»СЊРЅС‹Рµ РЅРµСЂРІС‹ - РЅРµ РєР°Р¶РґС‹Р№ СЃРїРѕСЃРѕР±РµРЅ РїРµСЂРµРЅРµСЃС‚Рё РІРЅРµС€РЅРёР№ РІРёРґ РўР°СЂРєР°, СЃ РґРёРєРёРјРё РІРѕРїР»СЏРјРё РЅРµСЃСѓС‰РµРіРѕСЃСЏ РІ Р°С‚Р°РєСѓ. </t>";
		};
		class section18
		{
			nameSection="РџР°Р»РѕС‡РЅРёРє";
			description="<t font='CenturyGothicBold'>РџР°Р»РѕС‡РЅРёРє</t><br /><t font='CenturyGothic'>РњРѕР¶РЅРѕ Р»РёС€СЊ РіР°РґР°С‚СЊ, СЏРІР»СЏРµС‚СЃСЏ Р»Рё РјСѓС‚Р°РЅС‚ РѕРіСЂРѕРјРЅС‹Рј РЅР°СЃРµРєРѕРјС‹Рј РёР»Рё Р¶Рµ СЌС‚Рѕ РёР·СѓРІРµС‡РµРЅРЅРѕРµ РјСѓС‚Р°С†РёСЏРјРё Р¶РёРІРѕС‚РЅРѕРµ, РЅРѕ Р±РѕР»СЊС€РёРЅСЃС‚РІРѕ РѕРїС‹С‚РЅС‹С… СЃС‚Р°Р»РєРµСЂРѕРІ СЃРєР»РѕРЅСЏРµС‚СЃСЏ Рє С‚РѕРјСѓ, С‡С‚Рѕ Сѓ СЃРѕРѕР±С‰РёРІС€РёС… Рѕ РІСЃС‚СЂРµС‡Рё СЃ РџР°Р»РѕС‡РЅРёРєРѕРј Р»СЋРґРµР№ РїСЂРѕСЃС‚Рѕ СЂР°Р·С‹РіСЂР°Р»РѕСЃСЊ РІРѕРѕР±СЂР°Р¶РµРЅРёРµ. Р—РѕРЅР° - РєСЂР°Р№РЅРµ РѕРїР°СЃРЅРѕРµ РјРµСЃС‚Рѕ, Рё РѕС‚ РїРѕСЃС‚РѕСЏРЅРЅРѕРіРѕ РЅР°РїСЂСЏР¶РµРЅРёСЏ Р»СЋР±РѕР№ СЂР°РЅРѕ РёР»Рё РїРѕР·РґРЅРѕ РЅР°С‡РЅС‘С‚ РІРёРґРµС‚СЊ СѓРіСЂРѕР·Сѓ РїРѕРІСЃСЋРґСѓ. РћРґРЅР°РєРѕ СЃР»РµРґСѓРµС‚ РїРѕРјРЅРёС‚СЊ, С‡С‚Рѕ РІ Р—РѕРЅРµ СЃР»СѓС…Рё РЅРµ СЂРѕР¶РґР°СЋС‚СЃСЏ РЅР° РїСѓСЃС‚РѕРј РјРµСЃС‚Рµ, РєР°Рє РѕРєР°Р·Р°Р»РѕСЃСЊ Рё Р·РґРµСЃСЊ. Р’СЃРєРѕСЂРµ СЂР°СЃСЃРєР°Р·С‹ Рѕ РїРѕРґРѕР±РЅС‹С… СЃСѓС‰РµСЃС‚РІР°С… СЃС‚Р°Р»Рё РІСЃС‘ С‡Р°С‰Рµ РІСЃРїР»С‹РІР°С‚СЊ РІ Р±Р°СЂР°С… Рё РЅР° СЃС‚РѕСЏРЅРєР°С…, Р° РїРѕР·РґРЅРµРµ РїРѕСЏРІРёР»РёСЃСЊ РїРµСЂРІС‹Рµ Р·Р°С„РёРєСЃРёСЂРѕРІР°РЅРЅС‹Рµ РїРѕРґС‚РІРµСЂР¶РґРµРЅРёСЏ - РџР°Р»РѕС‡РЅРёРє РЅРµ Р±С‹Р» РјРёС„РѕРј. <br />Р•РіРѕ РѕРїРёСЃС‹РІР°СЋС‚ РЅРµ РёРЅР°С‡Рµ РєР°Рє РѕР±С‹РєРЅРѕРІРµРЅРЅРѕРµ, СЃ РІРёРґСѓ, СЂР°СЃС‚РµРЅРёРµ, РЅРёРєР°Рє РЅРµ РѕС‚Р»РёС‡РёРјРѕРµ РѕС‚ РїСЂРѕСЃС‚РѕРіРѕ РєСѓСЃС‚Р°. РќРѕ СЃС‚РѕРёС‚ РЅРµР·Р°РґР°С‡Р»РёРІРѕР№ Р¶РµСЂС‚РІРµ РїСЂРёР±Р»РёР·РёС‚СЊСЃСЏ Рє РЅРµРјСѓ - РјСѓС‚Р°РЅС‚ РїСЂРёС…РѕРґРёС‚ РІ РґРІРёР¶РµРЅРёРµ, Рё СЃС‚СЂРµРјРёС‚РµР»СЊРЅРѕ Р±СЂРѕСЃР°РµС‚СЃСЏ РЅР° СЃРІРѕСЋ РґРѕР±С‹С‡Сѓ. Р”РѕСЃРєРѕРЅР°Р»СЊРЅРѕ РѕРїРёСЃР°С‚СЊ РїСЂРѕРёСЃС…РѕРґСЏС‰РµРµ РїСЂРё СЌС‚РѕРј РјР°Р»Рѕ РєС‚Рѕ СЂРµС€РёР»СЃСЏ, Рё С‚Рѕ - СЃРІРёРґРµС‚РµР»Рё Р±С‹Р»Рё СЃР»РёС€РєРѕРј РЅР°РїСѓРіР°РЅС‹, Рё РЅРµРєРѕС‚РѕСЂС‹Рµ РјРѕРјРµРЅС‚С‹ СЃРїРµС†РёР°Р»СЊРЅРѕ СЃС‚Р°СЂР°Р»РёСЃСЊ Р·Р°Р±С‹РІР°С‚СЊ. Р’ С†РµР»РѕРј, РёРЅС„РѕСЂРјР°С†РёРё РїРѕ СЌС‚РѕРјСѓ РјСѓС‚Р°РЅС‚Сѓ РµС‰С‘ СЃР»РёС€РєРѕРј РјР°Р»Рѕ, С‡С‚РѕР±С‹ С‚РѕС‡РЅРѕ СѓС‚РІРµСЂР¶РґР°С‚СЊ С‡С‚Рѕ-Р»РёР±Рѕ, РЅРѕ РІСЃС‘ Р¶Рµ С„Р°РєС‚ - Р—РѕРЅР° РґРµР№СЃС‚РІРёС‚РµР»СЊРЅРѕ РїРѕСЂРѕРґРёР»Р° РЅРµС‡С‚Рѕ РЅРѕРІРѕРµ Рё РѕС‡РµРЅСЊ РѕРїР°СЃРЅРѕРµ.</t>";
		};
		class section19
		{
			nameSection="Р”РІСѓС…РіРѕР»РѕРІС‹Р№ РѕР»РµРЅСЊ";
			description="<t font='CenturyGothicBold'>Р”РІСѓС…РіРѕР»РѕРІС‹Р№ РѕР»РµРЅСЊ</t><br /><t font='CenturyGothic'>РћР»РµРЅРё - Р±Р»Р°РіРѕСЂРѕРґРЅС‹Рµ Р¶РёРІРѕС‚РЅС‹Рµ, РЅРѕ С‚РѕР»СЊРєРѕ РЅРµ РІ Р—РѕРЅРµ. РћС‡РµРЅСЊ СЂРµРґРєРѕ СЃС‚Р°Р»РєРµСЂР°Рј РЅР° РіР»Р°Р·Р° РїРѕРїР°РґР°СЋС‚СЃСЏ, РІРµСЂРѕСЏС‚РЅРѕ, РјСѓС‚РёСЂРѕРІР°РІС€РёРµ Р»РѕСЃРё РёР»Рё РєРѕСЃСѓР»Рё, РєРѕС‚РѕСЂС‹Рµ, РїРѕС‡СѓСЏРІ С‡РµР»РѕРІРµРєР°, СЃСЂР°Р·Сѓ Р¶Рµ СѓР±РµРіР°СЋС‚. Р Р°СЃСЃРєР°Р·С‹РІР°СЋС‚, С‡С‚Рѕ СЌС‚Рѕ Р¶РёРІРѕС‚РЅРѕРµ РїРѕС…РѕР¶Рµ РЅР° СЃРІРѕРµРіРѕ РЅРѕСЂРјР°Р»СЊРЅРѕРіРѕ СЃРѕСЂРѕРґРёС‡Р°, РЅРѕ РёРјРµРµС‚ СЂР°Р·РґРІРѕРµРЅРЅСѓСЋ С€РµСЋ СЃ РґРІСѓРјСЏ РіРѕР»РѕРІР°РјРё, Р° РёР· РіСЂСѓРґРёРЅС‹ С‚РѕСЂС‡РёС‚ РїР°СЂР° СЂСѓРґРёРјРµРЅС‚Р°СЂРЅС‹С… РєРѕРЅРµС‡РЅРѕСЃС‚РµР№. РњСѓС‚Р°РЅС‚ Р±С‹Р» Р·Р°РјРµС‡РµРЅ РІ РіСѓСЃС‚С‹С… Р»РµСЃР°С… РїРѕ РІСЃРµР№ Р§Р—Рћ, Рё РІСЃС‚СЂРµС‚РёС‚СЊ РµРіРѕ СЃС‡РёС‚Р°РµС‚СЃСЏ Сѓ СЃС‚Р°Р»РєРµСЂРѕРІ Р±РѕР»СЊС€РѕР№ СѓРґР°С‡РµР№ Рё РґРѕР±СЂС‹Рј Р·РЅР°РєРѕРј - РІ РІРёРґСѓ СЃРІРѕРµР№ РёСЃРєР»СЋС‡РёС‚РµР»СЊРЅРѕР№ РїСѓРіР»РёРІРѕСЃС‚Рё Рё РѕСЃС‚РѕСЂРѕР¶РЅРѕСЃС‚Рё, Р”РІСѓС…РіРѕР»РѕРІС‹Р№ СЃС‚Р°СЂР°С‚РµР»СЊРЅРѕ РёР·Р±РµРіР°РµС‚ РІСЃС‚СЂРµС‡Рё СЃ Р»СЋРґСЊРјРё. РЇРІР»СЏРµС‚СЃСЏ СЌС‚Рѕ СЃСѓС‰РµСЃС‚РІРѕ С…РёС‰РЅРёРєРѕРј РёР»Рё С‚СЂР°РІРѕСЏРґРЅС‹Рј - РЅРµРёР·РІРµСЃС‚РЅРѕ, РѕРґРЅР°РєРѕ СЃРІРёРґРµС‚РµР»СЊСЃС‚РІ РЅР°РїР°РґРµРЅРёР№ Р”РІСѓС…РіРѕР»РѕРІРѕРіРѕ РЅР° Р»СЋРґРµР№ РёР»Рё РґСЂСѓРіРёС… РјСѓС‚Р°РЅС‚РѕРІ РїРѕРєР° РЅРµ Р±С‹Р»Рѕ.</t>";
		};
		class section20
		{
			nameSection="РњСѓС‚РЅС‹Рµ РІРѕРґС‹ Р—РѕРЅС‹";
			description="<t font='CenturyGothicBold'>РњСѓС‚РЅС‹Рµ РІРѕРґС‹ Р—РѕРЅС‹</t><br /><t font='CenturyGothic'>Р—Р° РІСЃСЋ РёСЃС‚РѕСЂРёСЋ Р—РѕРЅС‹ РћС‚С‡СѓР¶РґРµРЅРёСЏ РјР°Р»Рѕ РєС‚Рѕ СЂРµС€Р°Р»СЃСЏ РїСЂРѕРІРµСЂРёС‚СЊ РЅР° РЅР°Р»РёС‡РёРµ С‡РµРіРѕ-Р»РёР±Рѕ С†РµРЅРЅРѕРіРѕ РµС‘ РІРѕРґРѕС‘РјС‹, С…РѕС‚СЏ РєР°Р·Р°Р»РѕСЃСЊ Р±С‹ - РµСЃР»Рё Р°СЂС‚РµС„Р°РєС‚С‹ Рё Р°РЅРѕРјР°Р»РёРё РµСЃС‚СЊ РЅР° Р·РµРјР»Рµ, С‚Рѕ Р·РЅР°С‡РёС‚ РґРѕР»Р¶РЅС‹ Р±С‹С‚СЊ Рё РІ РІРѕРґРµ. РќР° СЃР»РѕРІР°С… СЌС‚Рѕ Р·РІСѓС‡Р°Р»Рѕ РІРїРѕР»РЅРµ Р»РѕРіРёС‡РЅРѕ, Р° РІРѕС‚ РЅР° РїСЂР°РєС‚РёРєРµ - РєР°Рє РІСЃРµРіРґР°. РЎРјРµР»СЊС‡Р°РєРѕРІ, С‡С‚Рѕ СЂРёСЃРєРѕРІР°Р»Рё СЃРІРѕРёРјРё Р¶РёР·РЅСЏРјРё Рё С‚СЂР°С‚РёР»Рё РЅР° РІРѕРґРѕР»Р°Р·РЅРѕРµ СЃРЅР°СЂСЏР¶РµРЅРёРµ РєСѓС‡Рё РґРµРЅРµРі, РІ СЂР°СЃС‡С‘С‚Рµ РѕРєСѓРїРёС‚СЊ РёС…, РїРѕР·Р¶Рµ РЅР°С…РѕРґРёР»Рё РїР»Р°РІР°СЋС‰РёС… РЅР° РїРѕРІРµСЂС…РЅРѕСЃС‚Рё Р»РёР±Рѕ С‡Р°СЃС‚РёС‡РЅРѕ С†РµР»С‹РјРё, Р»РёР±Рѕ РїРѕ С‡Р°СЃС‚СЏРј, Р»РёР±Рѕ РІРѕРѕР±С‰Рµ РІ РІРёРґРµ РїР°СЂС‹ РєСѓСЃРѕС‡РєРѕРІ РїР»РѕС‚Рё СЃ РѕР±СЂС‹РІРєР°РјРё РѕРґРµР¶РґС‹. РљС‚Рѕ РёР»Рё С‡С‚Рѕ Р±С‹ РІ СЂР°РґРёРѕР°РєС‚РёРІРЅС‹С… РІРѕРґРѕС‘РјР°С… Р§Р—Рћ РЅРё Р¶РёР»Рѕ, РѕРЅРѕ СЏРІРЅРѕ РЅРµ СЂР°РґСѓРµС‚СЃСЏ РІС‚РѕСЂР¶РµРЅРёСЋ РІ СЃРІРѕР№ РјРёСЂ РєРѕРіРѕ-С‚Рѕ СЃ РїРѕРІРµСЂС…РЅРѕСЃС‚Рё. Р’РїРѕР»РЅРµ РІРѕР·РјРѕР¶РЅРѕ С‡С‚Рѕ РїРѕРґ РІРѕРґРѕР№ РґРµР№СЃС‚РІРёС‚РµР»СЊРЅРѕ СЃРєСЂС‹С‚С‹ РЅРµРёР·РІРµСЃС‚РЅС‹Рµ Р°РЅРѕРјР°Р»СЊРЅС‹Рµ РѕР±СЂР°Р·РѕРІР°РЅРёСЏ, РёР»Рё Р¶Рµ С‚Р°Рј Р¶РёРІСѓС‚ С‚РІР°СЂРё, РєРѕС‚РѕСЂС‹Рµ Рё РЅР°Р·РµРјРЅС‹С… РјСѓС‚Р°РЅС‚РѕРІ СЃРјРѕРіР»Рё Р±С‹ РѕР±СЂР°С‚РёС‚СЊ РІ Р±РµРіСЃС‚РІРѕ, РЅРѕ С‚РѕС‡РЅРѕ СЏСЃРЅРѕ РѕРґРЅРѕ - РІРѕРґС‹ Р§РµСЂРЅРѕР±С‹Р»СЊСЃРєРѕР№ Р—РѕРЅС‹ РѕС‚С‡СѓР¶РґРµРЅРёСЏ РґР»СЏ РїРѕРіСЂСѓР¶РµРЅРёСЏ РІ РЅРёС… РЅРµРїСЂРёРіРѕРґРЅС‹ Р°Р±СЃРѕР»СЋС‚РЅРѕ.<br />РЎРІРёРґРµС‚РµР»СЊСЃС‚РІР° Рѕ РЅР°Р»РёС‡РёРё РјСѓС‚РёСЂРѕРІР°РІС€РёС… Р¶РёРІС‹С… СЃСѓС‰РµСЃС‚РІ РІ РѕР·С‘СЂР°С… Рё СЂРµРєР°С… РїРѕСЏРІРёР»РёСЃСЊ РѕС‚РЅРѕСЃРёС‚РµР»СЊРЅРѕ РЅРµРґР°РІРЅРѕ, Рё Р·Р° СЌС‚Рѕ РІСЃС‘ СЃС‚Р°Р»РєРµСЂСЃРєРѕРµ СЃРѕРѕР±С‰РµСЃС‚РІРѕ РґРѕР»Р¶РЅРѕ Р±Р»Р°РіРѕРґР°СЂРёС‚СЊ РЅС‹РЅРµ РїРѕРєРѕР№РЅРѕРіРѕ СЃС‚Р°Р»РєРµСЂР° РЁРїР°С‚РµР»СЏ - РѕРЅ РїРµСЂРІС‹Рј СЃРјРѕРі РІС‹С‚Р°С‰РёС‚СЊ РёР· РІРѕРґС‹ РЅРµС‡С‚Рѕ РЅРѕРІРѕРµ, Рё РІ С‚Рѕ Р¶Рµ РІСЂРµРјСЏ СЃРјРµСЂС‚РµР»СЊРЅРѕ РѕРїР°СЃРЅРѕРµ. Р‘СѓРґСѓС‡Рё РѕРґРЅРёРј РёР· С‚РµС…, РєС‚Рѕ РёСЃРїС‹С‚С‹РІР°Р» СЃСѓРґСЊР±Сѓ Рё РЅС‹СЂСЏР» РІ СЂР°Р·Р»РёС‡РЅС‹Рµ РІРѕРґРѕС‘РјС‹ Р—РѕРЅС‹, СѓРґР°С‡Р° Р±Р»Р°РіРѕРІРѕР»РёР»Р° РµРјСѓ РґРѕРІРѕР»СЊРЅРѕ РґРѕР»РіРѕ - РѕРЅ РІСЃРµРіРґР° РІРѕР·РІСЂР°С‰Р°Р»СЃСЏ РїСѓСЃС‚СЊ Рё РЅРё СЃ С‡РµРј, Р·Р°С‚Рѕ С†РµР» Рё РЅРµРІСЂРµРґРёРј. РќРѕ Р»СЋР±РѕРµ РІРµР·РµРЅРёРµ СЂР°РЅРѕ РёР»Рё РїРѕР·РґРЅРѕ РєРѕРЅС‡Р°РµС‚СЃСЏ - РѕРґРЅР°Р¶РґС‹ РѕРЅ Р±СѓРєРІР°Р»СЊРЅРѕ РІС‹РїРѕР»Р· РЅР° Р±РµСЂРµРі Рє СЃРІРѕРёРј С‚РѕРІР°СЂРёС‰Р°Рј, СѓР¶Рµ РёСЃС‚РµРєР°СЏ РєСЂРѕРІСЊСЋ, РЅРѕ С‡С‚Рѕ-С‚Рѕ СЃР¶РёРјР°СЏ РІ СЂСѓРєР°С…. РЎРЅР°СЂСЏР¶РµРЅРёРµ РЁРїР°С‚РµР»СЏ Р±С‹Р»Рѕ РїРѕРєСЂС‹С‚Рѕ РјРЅРѕР¶РµСЃС‚РІРѕРј РјРµР»РєРёС… РѕС‚РјРµС‚РёРЅ, РєР°Рє РѕС‚ РєСѓСЃР°С‡РµРє, Р° РєРѕСЃС‚СЋРј РЅР° РЅС‘Рј С„Р°РєС‚РёС‡РµСЃРєРё СЃРІРёСЃР°Р» Р»РѕСЃРєСѓС‚Р°РјРё, СЃ РєРѕС‚РѕСЂС‹С… СЃРѕС‡РёР»Р°СЃСЊ РєСЂРѕРІСЊ. РЎРїР°СЃС‚Рё СЃС‚Р°Р»РєРµСЂР°, Рє СЃРѕР¶Р°Р»РµРЅРёСЋ, РЅРµ СѓСЃРїРµР»Рё - РѕРЅ СѓРјРµСЂ РѕС‚ РїРѕС‚РµСЂРё РєСЂРѕРІРё, РЅРѕ РґРѕР±С‹С‚РѕРµ РёРј РёР· РІРѕРґ С‚РѕР№ СЂРµРєРё РѕС‚РєСЂС‹Р»Рѕ РґР»СЏ СЃС‚Р°Р»РєРµСЂРѕРІ РЅРѕРІСѓСЋ РѕРїР°СЃРЅРѕСЃС‚СЊ Р—РѕРЅС‹, РёРјСЏ РєРѕС‚РѕСЂРѕР№ РµС‰С‘ РЅРµ РґР°Р»Рё.<br />Р’РЅРµС€РЅРёР№ РІРёРґ СЌС‚РѕР№ С‚РІР°СЂРё РІРїРѕСЃР»РµРґСЃС‚РІРёРё РёСЃРєР°Р¶Р°Р»СЃСЏ РјРЅРѕР¶РµСЃС‚РІРѕРј СЃС‚Р°Р»РєРµСЂРѕРІ РїРѕ СЃРІРѕРµРјСѓ - РєС‚Рѕ РєР°Рє СѓСЃР»С‹С€Р°Р» Рё РїСЂРµРґСЃС‚Р°РІРёР». РЎР°РјСѓ С‚СѓС€РєСѓ С‚РѕРІР°СЂРёС‰Рё РЁРїР°С‚РµР»СЏ РѕС‚РЅРµСЃР»Рё Рє СѓС‡С‘РЅС‹Рј, Рё РїРѕРєР° С‡С‚Рѕ РЅРёРєР°РєРѕР№ РёРЅС„РѕСЂРјР°С†РёРё РєСЂРѕРјРµ РїРѕРґС‚РІРµСЂР¶РґРµРЅРёСЏ СЃР°РјРѕРіРѕ С„Р°РєС‚Р° РЅР°Р»РёС‡РёСЏ СЌС‚РѕРіРѕ СЃСѓС‰РµСЃС‚РІР°, РІ СЃС‚Р°Р»РєРµСЂСЃРєРѕРµ СЃРѕРѕР±С‰РµСЃС‚РІРѕ РѕС‚ РЅРёС… РЅРµ РїСЂРѕСЃР°С‡РёРІР°Р»РѕСЃСЊ. РћРґРЅР°РєРѕ СЃРѕР±СЂР°РІ РІРѕРµРґРёРЅРѕ РІСЃРµ РІРµСЂСЃРёРё, РјРѕР¶РЅРѕ РїРѕР»СѓС‡РёС‚СЊ РїСЂРёРјРµСЂРЅС‹Р№ РѕР±СЂР°Р· С‚РѕРіРѕ, С‡С‚Рѕ Р±С‹Р»Рѕ РёР·РІР»РµС‡РµРЅРѕ РёР· РІРѕРґС‹ - РґР»РёРЅРѕР№ РїСЂРёРјРµСЂРЅРѕ 20-30 СЃР°РЅС‚РёРјРµС‚СЂРѕРІ, СЃСѓС‰РµСЃС‚РІРѕ РѕРіСЂРѕРјРЅС‹Рј СЂС‚РѕРј РѕС‚РґР°Р»С‘РЅРЅРѕ РЅР°РїРѕРјРёРЅР°Р»Рѕ РјРёРЅРѕРіСѓ РёР»Рё РїРёСЏРІРєСѓ, РЅРѕ СЃРІРµСЂС…Сѓ РїРѕРєСЂС‹С‚РѕРµ Р¶С‘СЃС‚РєРёРј РєРѕР¶РёСЃС‚С‹Рј РїР°РЅС†РёСЂРµРј, РёРјРµСЋС‰РµРµ С‡РµС‚С‹СЂРµ РёР»Рё С€РµСЃС‚СЊ РєРѕРЅРµС‡РЅРѕСЃС‚РµР№, РґРІРµ РёР· РєРѕС‚РѕСЂС‹С… Р·Р°РєР°РЅС‡РёРІР°СЋС‚СЃСЏ РєР»РµС€РЅСЏРјРё. РСЃС‚РёРЅРЅС‹Р№ РѕР±Р»РёРє СЃСѓС‰РµСЃС‚РІР°, СЃРєРѕСЂРµРµ РІСЃРµРіРѕ, РѕС‚Р»РёС‡Р°РµС‚СЃСЏ РѕС‚ СЌС‚РѕРіРѕ РѕРїРёСЃР°РЅРёСЏ - С‚РѕС‡РЅРѕ СѓСЃС‚Р°РЅРѕРІРёС‚СЊ РµРіРѕ РїРѕ РїСЂРѕС€РµСЃС‚РІРёРё СЃС‚РѕР»СЊ РґР»РёС‚РµР»СЊРЅРѕРіРѕ вЂњРёСЃРїРѕСЂС‡РµРЅРЅРѕРіРѕ С‚РµР»РµС„РѕРЅР°вЂќ РЅРµРІРѕР·РјРѕР¶РЅРѕ, РЅРѕ РґР°Р¶Рµ С‚Р°РєРѕРµ РѕРїРёСЃР°РЅРёРµ Рё СЂРµР°Р»СЊРЅС‹Рµ СЃРІРёРґРµС‚РµР»СЊСЃС‚РІР° РѕС‡РµРІРёРґС†РµРІ, РІРєСѓРїРµ СЃ РїРѕРґС‚РІРµСЂР¶РґРµРЅРёСЏРјРё СѓС‡С‘РЅС‹С… РґР°СЋС‚ РїРѕРЅСЏС‚СЊ - РІ Р—РѕРЅРµ Р»СѓС‡С€Рµ РёР·Р±РµРіР°С‚СЊ РїРѕРіСЂСѓР¶РµРЅРёСЏ РІ С…РѕС‚СЊ СЃРєРѕР»СЊ РЅРёР±СѓРґСЊ РѕР±С€РёСЂРЅС‹Рµ РІРѕРґРѕС‘РјС‹.</t>";
		};
	};
};
class cfgMods
{
	author="Dragster";
	timepacked="1576943408";
};
