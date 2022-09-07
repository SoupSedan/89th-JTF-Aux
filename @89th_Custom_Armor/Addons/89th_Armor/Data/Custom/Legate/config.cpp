class cfgPatches
{
	class 89th_Armor_Custom
	{
		author="89th Mod Team";
		name="89th JTF Mod";
		units[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"V_FZ_Armor",
			"OPTRE_Core",
		};
	};
};
class cfgWeapons
{
	class VES_CH252_MAR_Light;
	class VES_M52D_Rifleman;
	//Helmet 
	class 89th_Marine_URB_Legate_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Legate)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Legate\89th_marine_helmet_Legate_URB_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Legate\89th_marine_helmet_Legate_URB_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_WDL_Legate_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Legate)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Legate\89th_marine_helmet_Legate_WDL_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Legate\89th_marine_helmet_Legate_WDL_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_SNW_Legate_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Legate)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Legate\89th_marine_helmet_Legate_SNW_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Legate\89th_marine_helmet_Legate_SNW_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_DES_Legate_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Legate)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Legate\89th_marine_helmet_Legate_DES_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Legate\89th_marine_helmet_Legate_DES_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_ARD_Legate_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Legate)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Legate\89th_marine_helmet_Legate_ARD_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Legate\89th_marine_helmet_Legate_ARD_CO.paa",
				""
			};
		};
	};
	//Vest
	class 89th_Marine_Legate: VES_M52D_Rifleman
	{
		dlc="89thJTF";
		author="Soup, Vespade";
		displayName="89th Marine Legate M52A";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\URB\89th_Soft_Vest_URB.paa",
			"89th_Armor\Data\Custom\Legate\89th_M52_Legate_URB_CO.paa",
			"89th_Armor\Data\Basic\URB\89th_M52_URB_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Legate\89th_M52A_Legate_URB.paa"};
		class ItemInfo: VestItem
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen {armor=75; hitpointName="HitAbdomen"; passThrough=0.1;};
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
				"A_KneesRight",
			\\	"A_KneesMarLeft",
			\\	"A_KneesMarRight",
				"A_ODST",
			\\	"A_ShinArmorLeft",
			\\	"A_ShinArmorRight",
				"A_TacPad",
			\\	"A_ThighArmorLeft",
			\\	"A_ThighArmorRight",
			\\	"AS_BaseLeft",
			\\	"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
			\\	"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
			\\	"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
			\\	"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class 89th_Marine_M52A_Legate_WDL: 89th_Marine_Legate
	{
		dlc="89thJTF";
		author="Soup, Vespade";
		displayName="[89th] M52A (Legate)(WDL)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\WDL\89th_Soft_Vest_WDL.paa",
			"89th_Armor\Data\Custom\Legate\89th_M52_Legate_WDL_CO.paa",
			"89th_Armor\Data\Basic\WDL\89th_M52_WDL_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Legate\89th_M52A_Legate_WDL.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
		};
	};
	class 89th_Marine_M52A_Legate_URB: 89th_Marine_Legate	
	{
		dlc="89thJTF";
		author="Soup, Vespade";
		displayName="[89th] M52A (Legate)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\URB\89th_Soft_Vest_URB.paa",
			"89th_Armor\Data\Custom\Legate\89th_M52_Legate_URB_CO.paa",
			"89th_Armor\Data\Basic\URB\89th_M52_URB_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Legate\89th_M52A_Legate_URB.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
		};
	};
	class 89th_Marine_M52A_Legate_DES: 89th_Marine_Legate
	{
		dlc="89thJTF";
		author="Soup, Vespade";
		displayName="[89th] M52A (Legate)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\DES\89th_Soft_Vest_DES.paa",
			"89th_Armor\Data\Custom\Legate\89th_M52_Legate_DES_CO.paa",
			"89th_Armor\Data\Basic\DES\89th_M52_DES_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Legate\89th_M52A_Legate_DES.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
		};
	};	
	class 89th_Marine_M52A_Legate_ARD: 89th_Marine_Legate
	{
		dlc="89thJTF";
		author="Soup, Vespade";
		displayName="[89th] M52A (Legate)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\ARD\89th_Soft_Vest_ARD.paa",
			"89th_Armor\Data\Custom\Legate\89th_M52_Legate_ARD_CO.paa",
			"89th_Armor\Data\Basic\ARD\89th_M52_ARD_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Legate\89th_M52A_Legate_ARD.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
		};
	};	
	class 89th_Marine_M52A_Legate_SNW: 89th_Marine_Legate	
	{
		dlc="89thJTF";
		author="Soup, Vespade";
		displayName="[89th] M52A (Legate)(SNW)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\SNW\89th_Soft_Vest_SNW.paa",
			"89th_Armor\Data\Custom\Legate\89th_M52_Legate_SNW_CO.paa",
			"89th_Armor\Data\Basic\SNW\89th_M52_SNW_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Legate\89th_M52A_Legate_SNW.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
		};
	};	
};