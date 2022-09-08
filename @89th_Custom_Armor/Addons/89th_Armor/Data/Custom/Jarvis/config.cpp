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
	class Jarvis_CH252D: VES_CH252D
	{
		dlc="89thJTF";
		author="Tas, Geek, Vespade";
		displayName="[89th] CH252D (Jarvis)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Jarvis\89th_ODST_Jarvis_ARD_CO.paa",
			"89th_Armor\Data\Visors\89th_Goliath_V_CO.paa"};
			class HitpointsProtectionInfo
			{
				class Head {armor=75; hitpointName="HitHead"; passThrough=0.1;};
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Jarvis\89th_ODST_Jarvis_ARD_CO.paa",
				"89th_Armor\Data\Visors\89th_Goliath_V_CO.paa"
			};
		};
	};
	class Jarvis_CH252D_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, Vespade";
		displayName="[89th] CH252D (Jarvis)(ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Jarvis\89th_ODST_Jarvis_ARD_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
			class HitpointsProtectionInfo
			{
				class Head {armor=75; hitpointName="HitHead"; passThrough=0.1;};
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Jarvis\89th_ODST_Jarvis_ARD_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class Jarvis_DES_CH252D: VES_CH252D
	{
		dlc="89thJTF";
		author="Tas, Geek, Vespade";
		displayName="[89th] CH252D (Jarvis)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Jarvis\89th_ODST_Jarvis_DES_CO.paa",
			"89th_Armor\Data\Visors\89th_Goliath_V_CO.paa"};
			class HitpointsProtectionInfo
			{
				class Head {armor=75; hitpointName="HitHead"; passThrough=0.1;};
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Jarvis\89th_ODST_Jarvis_DES_CO.paa",
				"89th_Armor\Data\Visors\89th_Goliath_V_CO.paa"
			};
		};
	};
	class Jarvis_DES_CH252D_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, Vespade";
		displayName="[89th] CH252D (Jarvis)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Jarvis\89th_ODST_Jarvis_DES_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
			class HitpointsProtectionInfo
			{
				class Head {armor=75; hitpointName="HitHead"; passThrough=0.1;};
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Jarvis\89th_ODST_Jarvis_DES_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class Jarvis_SNW_CH252D: VES_CH252D
	{
		dlc="89thJTF";
		author="Tas, Geek, Vespade";
		displayName="[89th] CH252D (Jarvis)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Jarvis\89th_ODST_Jarvis_SNW_CO.paa",
			"89th_Armor\Data\Visors\89th_Goliath_V_CO.paa"};
			class HitpointsProtectionInfo
			{
				class Head {armor=75; hitpointName="HitHead"; passThrough=0.1;};
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Jarvis\89th_ODST_Jarvis_SNW_CO.paa",
				"89th_Armor\Data\Visors\89th_Goliath_V_CO.paa"
			};
		};
	};
	class Jarvis_SNW_CH252D_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, Vespade";
		displayName="[89th] CH252D (Jarvis)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Jarvis\89th_ODST_Jarvis_SNW_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
			class HitpointsProtectionInfo
			{
				class Head {armor=75; hitpointName="HitHead"; passThrough=0.1;};
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Jarvis\89th_ODST_Jarvis_SNW_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class Jarvis_URB_CH252D: VES_CH252D
	{
		dlc="89thJTF";
		author="Tas, Geek, Vespade";
		displayName="[89th] CH252D (Jarvis)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Jarvis\89th_ODST_Jarvis_URB_CO.paa",
			"89th_Armor\Data\Visors\89th_Goliath_V_CO.paa"};
			class HitpointsProtectionInfo
			{
				class Head {armor=75; hitpointName="HitHead"; passThrough=0.1;};
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Jarvis\89th_ODST_Jarvis_URB_CO.paa",
				"89th_Armor\Data\Visors\89th_Goliath_V_CO.paa"
			};
		};
	};
	class Jarvis_URB_CH252D_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, Vespade";
		displayName="[89th] CH252D (Jarvis)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Jarvis\89th_ODST_Jarvis_URB_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
			class HitpointsProtectionInfo
			{
				class Head {armor=75; hitpointName="HitHead"; passThrough=0.1;};
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Jarvis\89th_ODST_Jarvis_URB_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class Jarvis_WDL_CH252D: VES_CH252D
	{
		dlc="89thJTF";
		author="Tas, Geek, Vespade";
		displayName="[89th] CH252D (Jarvis)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Jarvis\89th_ODST_Jarvis_WDL_CO.paa",
			"89th_Armor\Data\Visors\89th_Goliath_V_CO.paa"};
			class HitpointsProtectionInfo
			{
				class Head {armor=75; hitpointName="HitHead"; passThrough=0.1;};
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Jarvis\89th_ODST_Jarvis_WDL_CO.paa",
				"89th_Armor\Data\Visors\89th_Goliath_V_CO.paa"
			};
		};
	};
	class Jarvis_WDL_CH252D_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, Vespade";
		displayName="[89th] CH252D (Jarvis)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Jarvis\89th_ODST_Jarvis_WDL_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
			class HitpointsProtectionInfo
			{
				class Head {armor=75; hitpointName="HitHead"; passThrough=0.1;};
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Jarvis\89th_ODST_Jarvis_WDL_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	//Vest
	class 89th_M52D_Jarvis: VES_M52D_Rifleman
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] M52D (Jarvis) (WDL)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\WDL\89th_Soft_Vest_WDL.paa",
			"89th_Armor\Data\Basic\WDL\89th_M52_BLANK_WDL_co.paa",
			"89th_Armor\Data\Basic\WDL\89th_M52_WDL_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Jarvis\89th_M52D_Jarvis_WDL_CO.paa"};
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
			\\	"A_TacPad",
			\\	"A_ThighArmorLeft",
			\\	"A_ThighArmorRight",
			\\	"AS_BaseLeft",
			\\	"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
			\\	"AS_ODSTRight",
			\\	"AS_ODSTSniperLeft",
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
			\\	"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
			\\	"AP_Thigh",
			\\	"AP_Frag",
			\\	"AP_Smoke",
				"APO_AR",
			\\	"APO_BR",
			\\	"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class 89th_M52D_Jarvis_DES: 89th_M52D_Jarvis
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] M52D (Jarvis) (DES)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\DES\89th_Soft_Vest_DES.paa",
			"89th_Armor\Data\Basic\DES\89th_M52_BLANK_DES_co.paa",
			"89th_Armor\Data\Basic\DES\89th_M52_DES_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Jarvis\89th_M52D_Jarvis_DES_CO.paa"
		};
	};
	class 89th_M52D_Jarvis_URB: 89th_M52D_Jarvis
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] M52D (Jarvis) (URB)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\URB\89th_Soft_Vest_URB.paa",
			"89th_Armor\Data\Basic\URB\89th_M52_BLANK_URB_co.paa",
			"89th_Armor\Data\Basic\URB\89th_M52_URB_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Jarvis\89th_M52D_Jarvis_URB_CO.paa"
};
	};
	class 89th_M52D_Jarvis_ARD: 89th_M52D_Jarvis
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] M52D (Jarvis) (ARD)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\ARD\89th_Soft_Vest_ARD.paa",
			"89th_Armor\Data\Basic\ARD\89th_M52_BLANK_ARD_CO.paa",
			"89th_Armor\Data\Basic\ARD\89th_M52_ARD_Underlay_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Jarvis\89th_M52D_Jarvis_ARD_CO.paa"
		};
	};
	class 89th_M52D_Jarvis_SNW: 89th_M52D_Jarvis
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] M52D (Jarvis) (SNW)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\SNW\89th_Soft_Vest_SNW.paa",
			"89th_Armor\Data\Basic\SNW\89th_M52_BLANK_SNW_co.paa",
			"89th_Armor\Data\Basic\SNW\89th_M52_SNW_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Jarvis\89th_M52D_Jarvis_SNW_CO.paa"
		};
	};
};