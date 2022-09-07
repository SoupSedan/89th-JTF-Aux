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
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_MAR_Vacuum_dp;
	class VES_M52D_Rifleman;
	//Helmet
	class 89th_Marine_Bread_WDL_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Bread)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Bread\89th_Bread_helmet_WDL_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bread\89th_Bread_helmet_WDL_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Bread_WDL_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="CH252 (Bread)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Bread\89th_Bread_helmet_WDL_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bread\89th_Bread_helmet_WDL_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Bread_URB_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Bread)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Bread\89th_Bread_helmet_URB_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bread\89th_Bread_helmet_URB_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Bread_URB_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="CH252 (Bread)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Bread\89th_Bread_helmet_URB_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bread\89th_Bread_helmet_URB_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Bread_DES_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Bread)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Bread\89th_Bread_helmet_DES_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bread\89th_Bread_helmet_DES_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Bread_DES_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="CH252 (Bread)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Bread\89th_Bread_helmet_DES_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bread\89th_Bread_helmet_DES_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Bread_ARD_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Bread)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Bread\89th_Bread_helmet_ARD_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bread\89th_Bread_helmet_ARD_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Bread_ARD_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		scope=2;
		author="Bread";
		displayName="CH252 (Bread)(ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Bread\89th_Bread_helmet_ARD_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bread\89th_Bread_helmet_ARD_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Bread_SNW_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Bread";
		displayName="[89th] CH252 (Bread)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Bread\89th_Bread_helmet_SNW_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bread\89th_Bread_helmet_SNW_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Bread_SNW_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		scope=2;
		author="Bread";
		displayName="CH252 (Bread)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Bread\89th_Bread_helmet_SNW_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bread\89th_Bread_helmet_SNW_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	//Vest
	class 89th_M52D_Bread: VES_M52D_Rifleman
	{
		dlc="89thJTF";
		author="Soup, Vespade";
		displayName="[89th] M52 (Bread) (WDL)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\WDL\89th_Soft_Vest_WDL.paa",
			"89th_Armor\Data\Custom\Bread\89th_M52_Bread_WDL_CO.paa",
			"89th_Armor\Data\Basic\WDL\89th_M52_WDL_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Basic\WDL\89th_M52D_WDL_CO.paa"};
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
			\\	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
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
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
			\\	"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class 89th_M52D_Bread_DES: 89th_M52D_Bread
	{
		dlc="89thJTF";
		author="Soup, Vespade";
		displayName="[89th] M52 (Bread) (DES)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\DES\89th_Soft_Vest_DES.paa",
			"89th_Armor\Data\Custom\Bread\89th_M52_Bread_DES_CO.paa",
			"89th_Armor\Data\Basic\DES\89th_M52_DES_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Basic\DES\89th_M52D_DES_CO.paa"
		};
	};
	class 89th_M52D_Bread_URB: 89th_M52D_Bread
	{
		dlc="89thJTF";
		author="Soup, Vespade";
		displayName="[89th] M52 (Bread) (URB)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\URB\89th_Soft_Vest_URB.paa",
			"89th_Armor\Data\Custom\Bread\89th_M52_Bread_URB_CO.paa",
			"89th_Armor\Data\Basic\URB\89th_M52_URB_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Basic\URB\89th_M52D_URB_CO.paa"
		};
	};
	class 89th_M52D_Bread_SNW: 89th_M52D_Bread
	{
		dlc="89thJTF";
		author="Soup, Vespade";
		displayName="[89th] M52 (Bread) (SNW)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\SNW\89th_Soft_Vest_SNW.paa",
			"89th_Armor\Data\Custom\Bread\89th_M52_Bread_SNW_CO.paa",
			"89th_Armor\Data\Basic\SNW\89th_M52_SNW_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Basic\SNW\89th_M52D_SNW_CO.paa"
		};
	};
	class 89th_M52D_Bread_ARD: 89th_M52D_Bread
	{
		dlc="89thJTF";
		author="Soup, Vespade";
		displayName="[89th] M52 (Bread) (ARD)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\ARD\89th_Soft_Vest_ARD.paa",
			"89th_Armor\Data\Custom\Bread\89th_M52_Bread_ARD_CO.paa",
			"89th_Armor\Data\Basic\ARD\89th_M52_ARD_Underlay_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Basic\ARD\89th_M52D_ARD_CO.paa"
		};
	};
};