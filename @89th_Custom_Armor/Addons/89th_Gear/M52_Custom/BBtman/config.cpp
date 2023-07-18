class cfgPatches
{
	class 89th_M52D_Custom
	{
		author="89th Mod Team";
		addonRootClass="89th_M52_patches";
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"89th_M52_patches"
		};
		units[] = {};
		weapons[]=
		{
			"89th_M52D_BBtman_ARD",
			"89th_M52D_BBtman_DES",
			"89th_M52D_BBtman_SNW",
			"89th_M52D_BBtman_URB",
			"89th_M52D_BBtman_WDL"
		};
	};
};
class cfgWeapons
{
	class 89th_M52D_R;
	class ItemInfo;
	class VestItem;
	class 89th_M52D_BBtman_ARD: 89th_M52D_R
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] M52D (BBtman)(ARD)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_BLANK_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Custom\BBtman\89th_M52D_BBtman_ARD.paa"
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
	class 89th_M52D_BBtman_DES: 89th_M52D_BBtman_ARD
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] M52D (BBtman)(DES)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_BLANK_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Custom\BBtman\89th_M52D_BBtman_DES.paa"
		};
	};
	class 89th_M52D_BBtman_SNW: 89th_M52D_BBtman_ARD
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] M52D (BBtman)(SNW)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Gear\M52_Basic\SNW\89th_SoftVest_SNW.paa",
			"89th_Gear\M52_Basic\SNW\89th_M52_BLANK_SNW.paa",
			"89th_Gear\M52_Basic\SNW\89th_M52_Underlay_SNW.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Custom\BBtman\89th_M52D_BBtman_SNW.paa"
		};
	};
	class 89th_M52D_BBtman_URB: 89th_M52D_BBtman_ARD
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] M52D (BBtman)(URB)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_BLANK_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Custom\BBtman\89th_M52D_BBtman_URB.paa"
		};
	};
	class 89th_M52D_BBtman_WDL: 89th_M52D_BBtman_ARD
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] M52D (BBtman)(WDL)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Gear\M52_Basic\WDL\89th_SoftVest_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_BLANK_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_Underlay_WDL.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Custom\BBtman\89th_M52D_BBtman_WDL.paa"
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class 89th_BBtman_M52D
		{
			label="[89th] BBtman M52D";
			author="89th Mod Team";
			options[]=
			{
				"camo"
			};
			class camo
			{
				label="Camo";
				alwaysSelectable=1;
				values[]=
				{
					"ARD",
					"DES",
					"SNW",
					"URB",
					"WDL"
				};
				class ARD
				{
					label="Arid";
					image="#(rgb,8,8,3)color(0.278,0.243,0.149,1)";
				};
				class DES
				{
					label="Desert";
					image="#(rgb,8,8,3)color(0.431,0.369,0.302,1)";
				};
				class SNW
				{
					label="Snow";
					image="#(rgb,8,8,3)color(0.882,0.894,0.902,1)";
				};
				class URB
				{
					label="Urban";
					image="#(rgb,8,8,3)color(0.192,0.212,0.259,1)";
				};
				class WDL
				{
					label="Woodland";
					image="#(rgb,8,8,3)color(0.118,0.137,0.020,1)";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class 89th_M52D_BBtman_ARD
		{
			model="89th_BBtman_M52D";
			camo="ARD";
		};
		class 89th_M52D_BBtman_DES
		{
			model="89th_BBtman_M52D";
			camo="DES";
		};
		class 89th_M52D_BBtman_SNW
		{
			model="89th_BBtman_M52D";
			camo="SNW";
		};
		class 89th_M52D_BBtman_URB
		{
			model="89th_BBtman_M52D";
			camo="URB";
		};
		class 89th_M52D_BBtman_WDL
		{
			model="89th_BBtman_M52D";
			camo="WDL";
		};
	};
};
