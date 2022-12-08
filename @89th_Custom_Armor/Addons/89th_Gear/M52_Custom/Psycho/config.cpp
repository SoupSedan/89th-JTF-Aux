class cfgPatches
{
	class 89th_M52D_Psycho
	{
		author="89th Mod Team";
		addonRootClass="89th_M52_Patches";
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"89th_M52_Patches"
		};
		weapons[]=
		{
			"89th_M52D_Psycho_ARD",
			"89th_M52D_Psycho_DES",
			"89th_M52D_Psycho_SNW",
			"89th_M52D_Psycho_URB",
			"89th_M52D_Psycho_WDL"
		};
	};
};
class cfgWeapons
{
	class 89th_M52D_R;
	class ItemInfo;
	class VestItem;
	class 89th_M52D_Psycho_ARD: 89th_M52D_R
	{
		dlc="89thJTF";
		author="Soup, Vespade";
		displayName="[89th] M52D (Psycho)(ARD)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_BLANK_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Custom\Psycho\89th_M52D_Psycho_ARD.paa"
		};
		class ItemInfo: VestItem
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen {armor=35; hitpointName="HitAbdomen"; passThrough=0.1;};
				class Arms: Abdomen {hitpointName="HitArms";};
				class Body: Abdomen {hitpointName="HitBody";};
				class Chest: Abdomen {hitpointName="HitChest";};
				class Diaphragm: Abdomen {hitpointName="HitDiaphragm";};
				class Hands: Abdomen {hitpointName="HitHands";};
				class Legs: Abdomen {hitpointName="HitLegs";};
				class Neck: Abdomen {hitpointName="HitNeck";};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			\\	"A_ChestArmor",
			\\	"A_KneesLeft",
			\\	"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
			\\	"A_ODST",
			\\	"A_ShinArmorLeft",
			\\	"A_ShinArmorRight",
				"A_TacPad",
			\\	"A_ThighArmorLeft",
			\\	"A_ThighArmorRight",
			\\	"AS_BaseLeft",
			\\	"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
			\\	"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
			\\	"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
			\\	"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
			\\	"AP_Smoke",
				"APO_AR",
				"APO_BR",
			\\	"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class 89th_M52D_Psycho_DES: 89th_M52D_Psycho_ARD
	{
		dlc="89thJTF";
		author="Soup, Vespade";
		displayName="[89th] M52D (Psycho)(DES)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_BLANK_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Custom\Psycho\89th_M52D_Psycho_DES.paa"
		};
	};
	class 89th_M52D_Psycho_SNW: 89th_M52D_Psycho_ARD
	{
		dlc="89thJTF";
		author="Soup, Vespade";
		displayName="[89th] M52D (Psycho)(SNW)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Gear\M52_Basic\SNW\89th_SoftVest_SNW.paa",
			"89th_Gear\M52_Basic\SNW\89th_M52_BLANK_SNW.paa",
			"89th_Gear\M52_Basic\SNW\89th_M52_Underlay_SNW.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Custom\Psycho\89th_M52D_Psycho_SNW.paa"
		};
	};
	class 89th_M52D_Psycho_URB: 89th_M52D_Psycho_ARD
	{
		dlc="89thJTF";
		author="Soup, Vespade";
		displayName="[89th] M52D (Psycho)(URB)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_BLANK_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Custom\Psycho\89th_M52D_Psycho_URB.paa"
		};
	};
	class 89th_M52D_Psycho_WDL: 89th_M52D_Psycho_ARD
	{
		dlc="89thJTF";
		author="Soup, Vespade";
		displayName="[89th] M52D (Psycho)(WDL)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Gear\M52_Basic\WDL\89th_SoftVest_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_BLANK_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_Underlay_WDL.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Custom\Psycho\89th_M52D_Psycho_WDL.paa"
		};
	};
};