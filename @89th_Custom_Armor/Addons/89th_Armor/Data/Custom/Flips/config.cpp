class CfgPatches
{
	class 89th_Custom_Flips
	{
		author="Flips";
		requiredAddons[]={
			"V_FZ_Armor",
			"OPTRE_Core",
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgWeapons
{
	class H_Watchcap_khk;
	class VES_CH252_MAR_Light;
	class VES_M52D_Rifleman;
	class ItemInfo;
	class VestItem;
	//Helmet
	class 89th_Marine_Flips_ARD: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Vespade";
		displayName="[89th] CH252 (Flips)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Flips\89th_marine_Flips_ARD.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Flips\89th_marine_Flips_ARD.paa",
				""
			};
		};
	};
	class 89th_Marine_Flips_DES: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Vespade";
		displayName="[89th] CH252 (Flips)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Flips\89th_marine_Flips_DES.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Flips\89th_marine_Flips_DES.paa",
				""
			};
		};
	};
	class 89th_Marine_Flips_SNW: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Vespade";
		displayName="[89th] CH252 (Flips)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Flips\89th_marine_Flips_SNW.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Flips\89th_marine_Flips_SNW.paa",
				""
			};
		};
	};
	class 89th_Marine_Flips_WDL: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Vespade";
		displayName="[89th] CH252 (Flips)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Flips\89th_marine_Flips_WDL.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Flips\89th_marine_Flips_WDL.paa",
				""
			};
		};
	};
	class 89th_Marine_Flips_URB: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Vespade";
		displayName="[89th] CH252 (Flips)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Flips\89th_marine_Flips_URB.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Flips\89th_marine_Flips_URB.paa",
				""
			};
		};
	};
	//Vest
	class 89th_M52A_Flips_ARD: VES_M52D_Rifleman
	{
		dlc="89thJTF";
		author="Flips, Vespade";
		displayName="[89th] M52A (Flips) (ARD)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\ARD\89th_Soft_Vest_ARD.paa",
			"89th_Armor\Data\Custom\Flips\89th_M52_Flips_ARD.paa",
			"89th_Armor\Data\Custom\Flips\89th_M52_UNDERLAY_Flips_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"\89th_Armor\Data\Basic\ARD\89th_M52D_ARD_CO.paa"
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
			\\	"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
			\\	"A_ShinArmorRight",
				"A_TacPad",
			\\	"A_ThighArmorLeft",
			\\	"A_ThighArmorRight",
			\\	"AS_BaseLeft",
			\\	"AS_BaseRight",
			\\	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			\\	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
			\\	"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
			\\	"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
			\\	"AP_Sniper",
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
	class 89th_M52A_Flips_DES: 89th_M52A_Flips_ARD
	{
		dlc="89thJTF";
		author="Flips, Vespade";
		displayName="[89th] M52A (Flips) (DES)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\DES\89th_Soft_Vest_DES.paa",
			"89th_Armor\Data\Custom\Flips\89th_M52_Flips_DES.paa",
			"89th_Armor\Data\Custom\Flips\89th_M52_UNDERLAY_Flips_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Basic\DES\89th_M52D_DES_CO.paa"
		};
	};
	class 89th_M52A_Flips_SNW: 89th_M52A_Flips_ARD
	{
		dlc="89thJTF";
		author="Flips, Vespade";
		displayName="[89th] M52A (Flips) (SNW)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\SNW\89th_Soft_Vest_SNW.paa",
			"89th_Armor\Data\Custom\Flips\89th_M52_Flips_SNW.paa",
			"89th_Armor\Data\Custom\Flips\89th_M52_UNDERLAY_Flips_SNW.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Basic\SNW\89th_M52D_SNW_CO.paa"
		};
	};
	class 89th_M52A_Flips_URB: 89th_M52A_Flips_ARD
	{
		dlc="89thJTF";
		author="Flips, Vespade";
		displayName="[89th] M52A (Flips) (URB)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\URB\89th_Soft_Vest_URB.paa",
			"89th_Armor\Data\Custom\Flips\89th_M52_Flips_URB.paa",
			"89th_Armor\Data\Custom\Flips\89th_M52_UNDERLAY_Flips_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Basic\URB\89th_M52D_URB_CO.paa"
		};
	};
	class 89th_M52A_Flips_WDL: 89th_M52A_Flips_ARD
	{
		dlc="89thJTF";
		author="Flips, Vespade";
		displayName="[89th] M52A (Flips) (WDL)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\WDL\89th_Soft_Vest_WDL.paa",
			"89th_Armor\Data\Custom\Flips\89th_M52_Flips_WDL.paa",
			"89th_Armor\Data\Custom\Flips\89th_M52_UNDERLAY_Flips_WDL.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Basic\WDL\89th_M52D_WDL_CO.paa"
		};
	};
	//Misc
	class 89th_woolhat_Flips: H_Watchcap_khk
	{
		author="Flips";
		displayName="Beanie (Flips)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Flips\89th_woolhat_Flips.paa"
		};
	};
};