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
	class VES_CH252D;
	class VES_CH252D_dp;
	class VES_M52D_Rifleman;
	class ItemInfo;
	class VestItem;
	//Helmet
	class 89th_CH252D_Firefly_ARD: VES_CH252D
	{
		dlc="89thJTF";
		author="Rojas, Vespade";
		displayName="[89th] CH252D (Firefly)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Firefly\ODST_CH252D_Firefly_ARD.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Firefly\ODST_CH252D_Firefly_ARD.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"
			};
		};
	};
	class 89th_CH252D_Firefly_ARD_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Rojas, Vespade";
		displayName="[89th] CH252D (ARD)(Firefly)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Firefly\ODST_CH252D_Firefly_ARD.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Firefly\ODST_CH252D_Firefly_ARD.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class 89th_CH252D_Firefly_DES: VES_CH252D
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] CH252D (Firefly)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Firefly\ODST_CH252D_Firefly_DES.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bler\89th_BLER_DES_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"
			};
		};
	};
	class 89th_CH252D_Firefly_DES_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] CH252D (Firefly)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Firefly\ODST_CH252D_Firefly_DES.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Firefly\ODST_CH252D_Firefly_DES.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class 89th_CH252D_Firefly_SNW: VES_CH252D
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] CH252D (Firefly)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Firefly\ODST_CH252D_Firefly_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bler\89th_BLER_SNW_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"
			};
		};
	};
	class 89th_CH252D_Firefly_SNW_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] CH252D (Firefly)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Firefly\ODST_CH252D_Firefly_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Firefly\ODST_CH252D_Firefly_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class 89th_CH252D_Firefly_URB: VES_CH252D
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] CH252D (Firefly)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Firefly\ODST_CH252D_Firefly_URB.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Firefly\ODST_CH252D_Firefly_URB.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"
			};
		};
	};
	class 89th_CH252D_Firefly_URB_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] CH252D (Firefly)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Firefly\ODST_CH252D_Firefly_URB.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Firefly\ODST_CH252D_Firefly_URB.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class 89th_CH252D_Firefly_WDL: VES_CH252D
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] CH252D (Firefly)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Firefly\ODST_CH252D_Firefly_WDL.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Firefly\ODST_CH252D_Firefly_WDL.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"
			};
		};
	};
	class 89th_CH252D_Firefly_WDL_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] CH252D (Firefly)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Firefly\ODST_CH252D_Firefly_WDL.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Firefly\ODST_CH252D_Firefly_WDL.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	//Vest
	class 89th_M52D_Firefly: VES_M52D_Rifleman
	{
		dlc="89thJTF";
		author="Vespade";
		displayName="M52D Firefly Basic";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\WDL\89th_Soft_Vest_WDL.paa",
			"89th_Armor\Data\Basic\WDL\89th_M52_BLANK_WDL_co.paa",
			"89th_Armor\Data\Basic\WDL\89th_M52_WDL_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Firefly\89th_M52A_ODST_firefly_WDL.paa"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","",""};
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
			\\	"AP_GL",
				"AP_Knife",
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
			\\	"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
		
	class 89th_Firefly_WDL: 89th_M52D_Firefly
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, Vespade";
		displayName="[89th] M52D (Firefly)(WDL)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\WDL\89th_Soft_Vest_WDL.paa",
			"89th_Armor\Data\Basic\WDL\89th_Soft_Vest_WDL.paa",
			"89th_Armor\Data\Basic\WDL\89th_M52_WDL_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Firefly\89th_M52A_ODST_firefly_WDL.paa"
		};
	};
	class 89th_Firefly_DES: 89th_M52D_Firefly
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, Vespade";
		displayName="[89th] M52D (Firefly)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\DES\89th_Soft_Vest_DES.paa",
			"89th_Armor\Data\Basic\DES\89th_Soft_Vest_DES.paa",
			"89th_Armor\Data\Basic\DES\89th_M52_DES_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Firefly\89th_M52A_ODST_firefly_DES.paa"
		};
	};
	class 89th_Firefly_ARD: 89th_M52D_Firefly
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, Vespade";
		displayName="[89th] M52D (Firefly)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\ARD\89th_Soft_Vest_ARD.paa",
			"89th_Armor\Data\Basic\ARD\89th_Soft_Vest_ARD.paa",
			"89th_Armor\Data\Basic\ARD\89th_M52_ARD_Underlay_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Firefly\89th_M52A_ODST_firefly_ARD.paa"
		};
	};
	class 89th_Firefly_URB: 89th_M52D_Firefly
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, Vespade";
		displayName="[89th] M52D (Firefly)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\URB\89th_Soft_Vest_URB.paa",
			"89th_Armor\Data\Basic\URB\89th_Soft_Vest_URB.paa",
			"89th_Armor\Data\Basic\URB\89th_M52_URB_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Firefly\89th_M52A_ODST_firefly_URB.paa"
		};
	};
	class 89th_Firefly_SNW: 89th_M52D_Firefly
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, Vespade";
		displayName="[89th] M52D (Firefly)(SNW)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\SNW\89th_Soft_Vest_SNW.paa",
			"89th_Armor\Data\Basic\SNW\89th_Soft_Vest_SNW.paa",
			"89th_Armor\Data\Basic\SNW\89th_M52_SNW_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Firefly\89th_M52A_ODST_firefly_SNW.paa"
		};
	};
};
