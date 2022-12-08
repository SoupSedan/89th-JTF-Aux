class cfgPatches
{
	class 89th_M52A_Legion_Buck
	{
		author="89th Mod Team";
		addonRootClass="89th_M52_patches";
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"89th_M52_patches"
		};
		weapons[]=
		{
			"89th_M52A_Buck",

		};
	};
};
class cfgWeapons
{
	class 89th_M52A_Rifleman;
	class ItemInfo;
	class VestItem;
	class 89th_M52A_Buck: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		author="Soup, Vespade";
		displayName="[89th] M52A (Buck)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Gear\M52_Custom\Legion\89th_SoftVest_Legion.paa",
			"89th_Gear\M52_Custom\Buck\89th_M52A_Buck.paa",
			"89th_Gear\M52_Custom\Legion\89th_M52_Underlay_Legion.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Custom\Buck\89th_M52D_Buck.paa"
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
				"A_KneesLeft",
				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTCQBRight",
			\\	"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
			\\	"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
			\\	"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
			\\	"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
			\\	"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
};