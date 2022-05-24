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
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_MAR_Vacuum_dp;
	class VES_S1ONIR;
	class VES_S1ONIR_dp;
	class VES_M52D_Rifleman;
	class VES_M52D_Demolitions;
	class VES_M52A_MAR_Rifleman_C;
	class VES_CH252D;
	class VES_CH252D_dp;
	class OPTRE_UNSC_M52A_Armor_Rifleman_MAR;
	class 89th_M52A_TeamLeader;
	class 89th_M52A_MAR_Sniper;
	class ItemInfo;
	class VestItem;
		//Buck Vest
	class 89th_M52_Buck_Vest: VES_M52D_Demolitions
	{
		dlc="FZ";
		author="Soup";
		displayName="[89th] M52A (Buck)";
		hiddenSelectionsTextures[]=
		{	
		"89th_Armor\Data\Custom\Buck\89th_Soft_Vest_Buck.paa",
		"89th_Armor\Data\Custom\Buck\89th_M52_Buck_CO.paa",
     	"89th_Armor\Data\Custom\Buck\89th_M52_Buck_Underlay_CO.paa",
		"optre_unsc_units\army\data\ghillie_woodland_co.paa",
		"89th_Armor\Data\Custom\Buck\89th_M52D_Buck_CO.paa"	
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
		//Bler Vest
	class 89th_M52D_Bler: VES_M52D_Rifleman
	{
		dlc="FZ";
		author="Vespade";
		displayName="[89th] M52D (Bler) (WDL)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\WDL\89th_Soft_Vest_WDL.paa",
			"89th_Armor\Data\Basic\WDL\89th_M52_BLANK_WDL_co.paa",
			"89th_Armor\Data\Basic\WDL\89th_M52_WDL_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Bler\89th_M52D_WDL_Bler_CO.paa"};
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
			\\	"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
			\\	"AS_ODSTRight",
				"AS_ODSTSniperLeft",
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
			\\	"AP_Pistol",
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
	class 89th_M52D_Bler_DES: 89th_M52D_Bler
	{
		dlc="FZ";
		author="Vespade";
		displayName="[89th] M52D (Bler) (DES)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\DES\89th_Soft_Vest_DES.paa",
			"89th_Armor\Data\Basic\DES\89th_M52_BLANK_DES_co.paa",
			"89th_Armor\Data\Basic\DES\89th_M52_DES_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Bler\89th_M52D_DES_BLER_CO.paa"
		};
	};
	class 89th_M52D_Bler_SNW: 89th_M52D_Bler
	{
		dlc="FZ";
		author="Vespade";
		displayName="[89th] M52D (Bler) (SNW)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\SNW\89th_Soft_Vest_SNW.paa",
			"89th_Armor\Data\Basic\SNW\89th_M52_BLANK_SNW_co.paa",
			"89th_Armor\Data\Basic\SNW\89th_M52_SNW_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Bler\89th_M52D_SNW_BLER_CO.paa"
		};
	};
	class 89th_M52D_Bler_ARD: 89th_M52D_Bler
	{
		dlc="FZ";
		author="Vespade";
		displayName="[89th] M52D (Bler) (ARD)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\ARD\89th_Soft_Vest_ARD.paa",
			"89th_Armor\Data\Basic\ARD\89th_M52_BLANK_ARD_CO.paa",
			"89th_Armor\Data\Basic\ARD\89th_M52_ARD_Underlay_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Bler\89th_M52D_ARD_Bler_CO.paa"

		};
	};
	class 89th_M52D_Bler_URB: 89th_M52D_Bler
	{
		dlc="FZ";
		author="Vespade";
		displayName="[89th] M52D (Bler) (URB)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\URB\89th_Soft_Vest_URB.paa",
			"89th_Armor\Data\Vests\89th_M52_BLANK_URB_co.paa",
			"89th_Armor\Data\Basic\URB\89th_M52_URB_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Bler\89th_M52D_URB_BLER_CO.paa"
		};
	};	
		//Bread Vest
	class 89th_M52D_Bread: VES_M52D_Demolitions
	{
		dlc="FZ";
		author="Vespade";
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
		dlc="FZ";
		author="Vespade";
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
		dlc="FZ";
		author="Vespade";
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
		dlc="FZ";
		author="Vespade";
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
		dlc="FZ";
		author="Vespade";
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

		//Jarvis Vest
	class 89th_M52D_Jarvis: VES_M52D_Demolitions
	{
		dlc="FZ";
		author="Vespade";
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
		dlc="FZ";
		author="Vespade";
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
		dlc="FZ";
		author="Vespade";
		displayName="[89th] M52D (Jarvis) (URB)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\URB\89th_Soft_Vest_URB.paa",
			"89th_Armor\Data\Vests\89th_M52_BLANK_URB_co.paa",
			"89th_Armor\Data\Basic\URB\89th_M52_URB_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Jarvis\89th_M52D_Jarvis_URB_CO.paa"
};
	};
	class 89th_M52D_Jarvis_ARD: 89th_M52D_Jarvis
	{
		dlc="FZ";
		author="Vespade";
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
		dlc="FZ";
		author="Vespade";
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
		//Firefly Vest
	class 89th_M52D_Firefly: VES_M52D_Demolitions
	{
		dlc="FZ";
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
		author="Tas, Geek, and Vespade";
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
		author="Tas, Geek, and Vespade";
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
		author="Tas, Geek, and Vespade";
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
		author="Tas, Geek, and Vespade";
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
		author="Tas, Geek, and Vespade";
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

		//Legate Vest
	class 89th_Marine_Legate: 89th_M52A_TeamLeader
	{
		dlc="FZ";
		author="Vespade";
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
		author="Soup";
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
		author="Soup";
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
		author="Soup";
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
		author="Soup";
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
		author="Soup";
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
		//Mark Vest
	class 89th_M52A_Mark_ARD: VES_M52A_MAR_Rifleman_C
	{
		dlc="FZ";
		author="Flips";
		displayName="[89th] M52A (Mark) (ARD)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\ARD\89th_Soft_Vest_ARD.paa",
			"89th_Armor\Data\Custom\Mark\89th_M52_MARK_ARD_CO.paa",
			"89th_Armor\Data\Basic\ARD\89th_M52_ARD_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Mark\89th_M52A_MARK_ARD.paa"
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
			\\	"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
			\\	"AP_Frag",
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
	class 89th_M52A_Mark_DES: 89th_M52A_Mark_ARD
	{
		dlc="FZ";
		author="Flips";
		displayName="[89th] M52A (Mark) (DES)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\DES\89th_Soft_Vest_DES.paa",
			"89th_Armor\Data\Custom\Mark\89th_M52_MARK_DES_CO.paa",
			"89th_Armor\Data\Basic\DES\89th_M52_DES_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Mark\89th_M52A_MARK_DES.paa"
		};
	};
	class 89th_M52A_Mark_SNW: 89th_M52A_Mark_ARD
	{
		dlc="FZ";
		author="Flips";
		displayName="[89th] M52A (Mark) (SNW)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\SNW\89th_Soft_Vest_SNW.paa",
			"89th_Armor\Data\Custom\Mark\89th_M52_MARK_SNW_CO.paa",
			"89th_Armor\Data\Basic\SNW\89th_M52_SNW_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Mark\89th_M52A_MARK_SNW.paa"
		};
	};
	class 89th_M52A_Mark_URB: 89th_M52A_Mark_ARD
	{
		dlc="FZ";
		author="Flips";
		displayName="[89th] M52A (Mark) (URB)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\URB\89th_Soft_Vest_URB.paa",
			"89th_Armor\Data\Custom\Mark\89th_M52_MARK_URB_CO.paa",
			"89th_Armor\Data\Basic\URB\89th_M52_URB_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Mark\89th_M52A_MARK_URB.paa"
		};
	};
	class 89th_M52A_Mark_WDL: 89th_M52A_Mark_ARD
	{
		dlc="FZ";
		author="Flips";
		displayName="[89th] M52A (Mark) (WDL)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\WDL\89th_Soft_Vest_WDL.paa",
			"89th_Armor\Data\Custom\Mark\89th_M52_MARK_WDL_CO.paa",
			"89th_Armor\Data\Basic\WDL\89th_M52_WDL_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Mark\89th_M52A_MARK_WDL.paa"
		};
	};
		//Dragon Vest
	class 89th_Marine_Dragon: 89th_M52A_TeamLeader
	{
		dlc="FZ";
		author="Christmas";
		displayName="89th Marine Dragon M52A";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\URB\89th_Soft_Vest_URB.paa",
			"89th_Armor\Data\Custom\Dragon\89th_M52_DRAGON_URB.paa",
			"89th_Armor\Data\Basic\URB\89th_M52_URB_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Dragon\89th_M52A_DRAGON_URB.paa"};
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
			\\	"AP_Frag",
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
	class 89th_Marine_M52A_Dragon_WDL: 89th_Marine_Dragon
	{
		dlc="89thJTF";
		author="Christmas";
		displayName="[89th] M52A (Dragon)(WDL)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\WDL\89th_Soft_Vest_WDL.paa",
			"89th_Armor\Data\Custom\Dragon\89th_M52_DRAGON_WDL.paa",
			"89th_Armor\Data\Basic\WDL\89th_M52_WDL_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Dragon\89th_M52A_DRAGON_WDL.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
		};
	};
	class 89th_Marine_M52A_Dragon_URB: 89th_Marine_Dragon	
	{
		dlc="89thJTF";
		author="Soup";
		displayName="[89th] M52A (Dragon)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\URB\89th_Soft_Vest_URB.paa",
			"89th_Armor\Data\Custom\Dragon\89th_M52_DRAGON_URB.paa",
			"89th_Armor\Data\Basic\URB\89th_M52_URB_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Dragon\89th_M52A_DRAGON_URB.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
		};
	};
	class 89th_Marine_M52A_Dragon_DES: 89th_Marine_Dragon
	{
		dlc="89thJTF";
		author="Soup";
		displayName="[89th] M52A (Dragon)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\DES\89th_Soft_Vest_DES.paa",
			"89th_Armor\Data\Custom\Dragon\89th_M52_DRAGON_DES.paa",
			"89th_Armor\Data\Basic\DES\89th_M52_DES_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Dragon\89th_M52A_DRAGON_DES.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
		};
	};	
	class 89th_Marine_M52A_Dragon_ARD: 89th_Marine_Dragon
	{
		dlc="89thJTF";
		author="Christmas";
		displayName="[89th] M52A (Dragon)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\ARD\89th_Soft_Vest_ARD.paa",
			"89th_Armor\Data\Custom\Dragon\89th_M52_DRAGON_ARD.paa",
			"89th_Armor\Data\Basic\ARD\89th_M52_ARD_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Dragon\89th_M52A_DRAGON_ARD.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
		};
	};	
	class 89th_Marine_M52A_Dragon_SNW: 89th_Marine_Dragon	
	{
		dlc="89thJTF";
		author="Christmas";
		displayName="[89th] M52A (Dragon)(SNW)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\SNW\89th_Soft_Vest_SNW.paa",
			"89th_Armor\Data\Custom\Dragon\89th_M52_DRAGON_SNW.paa",
			"89th_Armor\Data\Basic\SNW\89th_M52_SNW_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Dragon\89th_M52A_DRAGON_SNW.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
		};
	};
	//Syndicate Vest
	class 89th_M52A_Syndicate_ARD: VES_M52A_MAR_Rifleman_C
	{
		dlc="FZ";
		author="Flips";
		displayName="[89th] M52A (Syndicate) (ARD)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\ARD\89th_Soft_Vest_ARD.paa",
			"89th_Armor\Data\Custom\Syndicate\89th_M52_BLANK_Syndicate_ARD_co.paa",
			"89th_Armor\Data\Basic\ARD\89th_M52_ARD_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Syndicate\89th_M52D_Syndicate_ARD_CO.paa"
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
				"AS_MediumLeft",
			\\	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
			\\	"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
			\\	"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
			\\	"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
			\\	"AP_Frag",
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
	class 89th_M52A_Syndicate_DES: 89th_M52A_Syndicate_ARD
	{
		dlc="FZ";
		author="Flips";
		displayName="[89th] M52A (Syndicate) (DES)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\DES\89th_Soft_Vest_DES.paa",
			"89th_Armor\Data\Custom\Syndicate\89th_M52_BLANK_Syndicate_DES_co.paa",
			"89th_Armor\Data\Basic\DES\89th_M52_DES_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Syndicate\89th_M52D_Syndicate_DES_CO.paa"
		};
	};
	class 89th_M52A_Syndicate_SNW: 89th_M52A_Syndicate_ARD
	{
		dlc="FZ";
		author="Flips";
		displayName="[89th] M52A (Syndicate) (SNW)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\SNW\89th_Soft_Vest_SNW.paa",
			"89th_Armor\Data\Custom\Syndicate\89th_M52_BLANK_Syndicate_SNW_co.paa",
			"89th_Armor\Data\Basic\SNW\89th_M52_SNW_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Syndicate\89th_M52D_Syndicate_SNW_CO.paa"
		};
	};
	class 89th_M52A_Syndicate_URB: 89th_M52A_Syndicate_ARD
	{
		dlc="FZ";
		author="Flips";
		displayName="[89th] M52A (Syndicate) (URB)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\URB\89th_Soft_Vest_URB.paa",
			"89th_Armor\Data\Custom\Syndicate\89th_M52_BLANK_Syndicate_URB_co.paa",
			"89th_Armor\Data\Basic\URB\89th_M52_URB_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Syndicate\89th_M52D_Syndicate_URB_CO.paa"
		};
	};
	class 89th_M52A_Syndicate_WDL: 89th_M52A_Syndicate_ARD
	{
		dlc="FZ";
		author="Flips";
		displayName="[89th] M52A (Syndicate) (WDL)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\WDL\89th_Soft_Vest_WDL.paa",
			"89th_Armor\Data\Custom\Syndicate\89th_M52_BLANK_Syndicate_WDL_co.paa",
			"89th_Armor\Data\Basic\WDL\89th_M52_WDL_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Syndicate\89th_M52D_Syndicate_WDL_CO.paa"
		};
	};
		//Christmas Vest
	class 89th_Marine_Christmas: 89th_M52A_TeamLeader
	{
		dlc="FZ";
		author="";
		displayName="89th Marine Christmas M52A";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Basic\URB\89th_Soft_Vest_URB.paa",
			"89th_Armor\Data\Custom\Christmas\89th_M52_Christmas_URB.paa",
			"89th_Armor\Data\Basic\URB\89th_M52_URB_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Christmas\89th_M52A_Christmas_URB.paa"};
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
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
			\\	"AS_ODSTLeft",
			\\	"AS_ODSTRight",
				"AS_ODSTSniperLeft",
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
			\\	"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
			\\	"AP_Frag",
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
	class 89th_Marine_M52A_Christmas_WDL: 89th_Marine_Christmas
	{
		dlc="89thJTF";
		author="Christmas";
		displayName="[89th] M52A (Christmas)(WDL)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\WDL\89th_Soft_Vest_WDL.paa",
			"89th_Armor\Data\Custom\Christmas\89th_M52_Christmas_WDL.paa",
			"89th_Armor\Data\Basic\WDL\89th_M52_WDL_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Christmas\89th_M52A_Christmas_WDL.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
		};
	};
	class 89th_Marine_M52A_Christmas_URB: 89th_Marine_Christmas	
	{
		dlc="89thJTF";
		author="Soup";
		displayName="[89th] M52A (Christmas)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\URB\89th_Soft_Vest_URB.paa",
			"89th_Armor\Data\Custom\Christmas\89th_M52_Christmas_URB.paa",
			"89th_Armor\Data\Basic\URB\89th_M52_URB_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Christmas\89th_M52A_Christmas_URB.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
		};
	};
	class 89th_Marine_M52A_Christmas_DES: 89th_Marine_Christmas
	{
		dlc="89thJTF";
		author="Soup";
		displayName="[89th] M52A (Christmas)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\DES\89th_Soft_Vest_DES.paa",
			"89th_Armor\Data\Custom\Christmas\89th_M52_Christmas_DES.paa",
			"89th_Armor\Data\Basic\DES\89th_M52_DES_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Christmas\89th_M52A_Christmas_DES.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
		};
	};	
	class 89th_Marine_M52A_Christmas_ARD: 89th_Marine_Christmas
	{
		dlc="89thJTF";
		author="Christmas";
		displayName="[89th] M52A (Christmas)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\ARD\89th_Soft_Vest_ARD.paa",
			"89th_Armor\Data\Custom\Christmas\89th_M52_Christmas_ARD.paa",
			"89th_Armor\Data\Basic\ARD\89th_M52_ARD_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Christmas\89th_M52A_Christmas_ARD.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
		};
	};	
	class 89th_Marine_M52A_Christmas_SNW: 89th_Marine_Christmas	
	{
		dlc="89thJTF";
		author="Christmas";
		displayName="[89th] M52A (Christmas)(SNW)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\SNW\89th_Soft_Vest_SNW.paa",
			"89th_Armor\Data\Custom\Christmas\89th_M52_Christmas_SNW.paa",
			"89th_Armor\Data\Basic\SNW\89th_M52_SNW_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Christmas\89th_M52A_Christmas_SNW.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
		};
	};	

	//Ice Vest
	class 89th_M52A_MAR_Ice_WDL: OPTRE_UNSC_M52A_Armor_Rifleman_MAR
	{
		dlc="89thJTF";
		author="Ice and Spartanjackwar";
		displayName="[89th] M52A (Ice)(WDL)";
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
			"V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
			"V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
		};
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\WDL\89th_Soft_Vest_WDL.paa",
			"89th_Armor\Data\Custom\Ice\89th_M52_BLANK_ICE_WDL_co.paa",
			"89th_Armor\Data\Basic\WDL\89th_M52_WDL_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Basic\WDL\89th_M52A_ODST_WDL.paa"
		};
		class ItemInfo: VestItem
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
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
			\\	"A_TacPad",
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
			\\	"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
			\\	"AP_GL",
				"AP_Knife",
			\\	"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
			\\	"AP_Rounds",
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
	class 89th_M52A_MAR_Ice_DES: 89th_M52A_MAR_Ice_WDL
	{
		dlc="89thJTF";
		author="Ice and Spartanjackwar";
		displayName="[89th] M52A (Ice)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\DES\89th_Soft_Vest_DES.paa",
			"89th_Armor\Data\Custom\Ice\89th_M52_BLANK_ICE_DES_co.paa",
			"89th_Armor\Data\Basic\DES\89th_M52_DES_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Basic\DES\89th_M52D_DES_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
		};
	};
	class 89th_M52A_MAR_Ice_URB: 89th_M52A_MAR_Ice_WDL
	{
		dlc="89thJTF";
		author="Ice and Spartanjackwar";
		displayName="[89th] M52A (Ice)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\URB\89th_Soft_Vest_URB.paa",
			"89th_Armor\Data\Custom\Ice\89th_M52_BLANK_ICE_URB_co.paa",
			"89th_Armor\Data\Basic\URB\89th_M52_URB_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Basic\URB\89th_M52D_URB_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
		};
	};
	class 89th_M52A_MAR_Ice_SNW: 89th_M52A_MAR_Ice_WDL
	{
		dlc="89thJTF";
		author="Ice and Spartanjackwar";
		displayName="[89th] M52A (Ice)(SNW)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Basic\SNW\89th_Soft_Vest_SNW.paa",
			"89th_Armor\Data\Custom\Ice\89th_M52_BLANK_ICE_SNW_co.paa",
			"89th_Armor\Data\Basic\SNW\89th_M52_SNW_UNDERLAY_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Basic\SNW\89th_M52D_SNW_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
		};
	};
			//Ice Helmet
	class 89th_Marine_ICE_WDL_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="[89th] CH252 (Ice)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Ice\89th_Marine_Ice_Helmet_WDL_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Ice\89th_marine_Ice_helmet_WDL_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_ICE_WDL_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="CH252 (Ice)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Ice\89th_Marine_Ice_Helmet_WDL_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Ice\89th_marine_Ice_helmet_WDL_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_ICE_URB_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="[89th] CH252 (Ice)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Ice\89th_Marine_Ice_Helmet_URB_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Ice\89th_marine_Ice_helmet_URB_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_ICE_URB_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="CH252 (Ice)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Ice\89th_Marine_Ice_Helmet_URB_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Ice\89th_marine_Ice_helmet_URB_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_ICE_DES_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="[89th] CH252 (Ice)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Ice\89th_Marine_Ice_Helmet_DES_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Ice\89th_marine_Ice_helmet_DES_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_ICE_DES_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="CH252 (Ice)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Ice\89th_Marine_Ice_Helmet_DES_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Ice\89th_marine_Ice_helmet_DES_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_ICE_SNW_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="[89th] CH252 (Ice)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Ice\89th_Marine_Ice_Helmet_SNW_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Ice\89th_marine_Ice_helmet_SNW_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_ICE_SNW_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="CH252 (Ice)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Ice\89th_Marine_Ice_Helmet_SNW_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Ice\89th_marine_Ice_helmet_SNW_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
		//Mark Helmet
	class 89th_Marine_Mark_SNW_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="[89th] CH252 (Mark)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Mark\89th_Marine_Helmet_Mark_SNW_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Mark\89th_Marine_Helmet_Mark_SNW_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Mark_SNW_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="CH252 (Mark)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Mark\89th_Marine_Helmet_Mark_SNW_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Mark\89th_Marine_Helmet_Mark_SNW_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Mark_WDL_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="[89th] CH252 (Mark)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Mark\89th_Marine_Helmet_Mark_WDL_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Mark\89th_Marine_Helmet_Mark_WDL_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Mark_WDL_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="CH252 (Mark)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Mark\89th_Marine_Helmet_Mark_WDL_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Mark\89th_Marine_Helmet_Mark_WDL_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Mark_DES_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="[89th] CH252 (Mark)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Mark\89th_Marine_Helmet_Mark_DES_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Mark\89th_Marine_Helmet_Mark_DES_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Mark_DES_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="CH252 (Mark)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Mark\89th_Marine_Helmet_Mark_DES_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Mark\89th_Marine_Helmet_Mark_DES_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Mark_ARD_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="[89th] CH252 (Mark)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Mark\89th_Marine_Helmet_Mark_ARD_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Mark\89th_Marine_Helmet_Mark_ARD_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Mark_ARD_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="CH252 (Mark)(ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Mark\89th_Marine_Helmet_Mark_ARD_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Mark\89th_Marine_Helmet_Mark_ARD_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Mark_URB_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="[89th] CH252 (Mark)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Mark\89th_Marine_Helmet_Mark_URB_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Mark\89th_Marine_Helmet_Mark_URB_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Mark_URB_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="CH252 (Mark)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Mark\89th_Marine_Helmet_Mark_URB_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Mark\89th_Marine_Helmet_Mark_URB_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
		//Grim Helmet
	class 89th_CH252_Grim_WDL: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252 (Grim)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Grim\89th_marine_Grim_WDL.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Grim\89th_marine_Grim_WDL.paa",
			};
		};
	};
	class 89th_CH252D_Grim_DES: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252 (Grim)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Grim\89th_marine_Grim_DES.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Grim\89th_marine_Grim_DES.paa",
			};
		};
	};
	class 89th_CH252_Grim_URB: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252 (Grim)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Grim\89th_marine_Grim_URB.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Grim\89th_marine_Grim_URB.paa",
			};
		};
	};
	class 89th_CH252_Grim_SNW: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252 (Grim)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Grim\89th_marine_Grim_SNW.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Grim\89th_marine_Grim_SNW.paa",
			};
		};
	};
	class 89th_CH252_Grim_ARD: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252 (Grim)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Grim\89th_marine_Grim_ARD.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Grim\89th_marine_Grim_ARD.paa",
			};
		};
	};
		//Pineapple Helmet
	class 89th_Marine_WDL_VAC_Pineapple_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Pineapple)(WDL)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_WDL_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_WDL_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_Marine_WDL_VAC_Pineapple_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Pineapple)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_WDL_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_WDL_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_URB_VAC_Pineapple_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Pineapple)(URB)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_URB_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_URB_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_Marine_URB_VAC_Pineapple_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Pineapple)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_URB_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_URB_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_SNW_VAC_Pineapple_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Pineapple)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_SNW_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_SNW_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_Marine_SNW_VAC_Pineapple_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Pineapple)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_SNW_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_SNW_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_DES_VAC_Pineapple_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Pineapple)(DES)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_DES_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_DES_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_Marine_DES_VAC_Pineapple_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Pineapple)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_DES_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_DES_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_ARD_VAC_Pineapple_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Pineapple)(ARD)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_ARD_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_ARD_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_Marine_ARD_VAC_Pineapple_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Pineapple)(ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_ARD_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_ARD_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};

		//Cyllen Helmet
	class 89th_Marine_VAC_Cyllen_WDL_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Cyllen)(WDL)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_WDL.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_WDL.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_Marine_VAC_Cyllen_WDL_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Cyllen)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_VAC_Cyllen_URB_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Cyllen)(URB)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_URB.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_URB.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_Marine_VAC_Cyllen_URB_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Cyllen)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_URB.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_URB.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_VAC_Cyllen_SNW_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Cyllen)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_Marine_VAC_Cyllen_SNW_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Cyllen)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_VAC_Cyllen2_DES_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Cyllen)(DES)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_DES.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_DES.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_Marine_VAC_Cyllen2_DES_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Cyllen)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_VAC_Cyllen_ARD_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Cyllen)(ARD)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_ARD.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_ARD.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_Marine_VAC_Cyllen_ARD_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Cyllen)(ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_ARD.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_ARD.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
		//Epsi Helmet
	class 89th_Marine_DES_Epsilon_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252 (Epsi)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsi\89th_marine_helmet_Epsilon_DES_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsi\89th_marine_helmet_Epsilon_DES_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_URB_Epsilon_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252 (Epsi)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsi\89th_marine_helmet_Epsilon_URB_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsi\89th_marine_helmet_Epsilon_URB_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_WDL_Epsilon_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, Vespade and Smackles";
		displayName="[89th] CH252 (Epsi)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsi\89th_marine_helmet_Epsilon_WDL_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsi\89th_marine_helmet_Epsilon_WDL_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_SNW_Epsilon_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, Vespade and Smackles";
		displayName="[89th] CH252 (Epsi)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsi\89th_marine_helmet_Epsilon_SNW_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsi\89th_marine_helmet_Epsilon_SNW_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_ARD_Epsilon_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, Vespade and Smackles";
		displayName="[89th] CH252 (Epsi)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsi\89th_marine_helmet_Epsilon_ARD_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsi\89th_marine_helmet_Epsilon_ARD_CO.paa",
				""
			};
		};
	};
			//Carden Helmet
	class 89th_Marine_VAC_Carden_DES_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Carden)(DES)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Carden\89th_marine_helmet_Carden_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Carden\89th_marine_helmet_Carden_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_VAC_Carden_DES_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Carden)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Carden\89th_marine_helmet_Carden_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Carden\89th_marine_helmet_Carden_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_VAC_Carden_ARD_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Carden)(ARD)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Carden\89th_marine_helmet_Carden_ARD.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Carden\89th_marine_helmet_Carden_ARD.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_Marine_VAC_Carden_ARD_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Carden)(ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Carden\89th_marine_helmet_Carden_ARD.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Carden\89th_marine_helmet_Carden_ARD.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_WDL_Carden_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Carden)(WDL)";
		model="\optre_unsc_units\army\helmet";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Carden\89th_marine_helmet_Carden_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Carden\89th_marine_helmet_Carden_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_WDL_Carden_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Carden)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Carden\89th_marine_helmet_Carden_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Carden\89th_marine_helmet_Carden_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_VAC_Carden_URB_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Carden)(URB)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Carden\89th_marine_helmet_Carden_URB.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Carden\89th_marine_helmet_Carden_URB.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_VAC_Carden_URB_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Carden)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Carden\89th_marine_helmet_Carden_URB.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Carden\89th_marine_helmet_Carden_URB.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_VAC_Carden_SNW_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Carden)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Carden\89th_marine_helmet_Carden_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Carden\89th_marine_helmet_Carden_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_VAC_Carden_SNW_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] CH252 (Carden)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Carden\89th_marine_helmet_Carden_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Carden\89th_marine_helmet_Carden_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
		//Soup Helmet
	class 89th_Marine_Soup_WDL_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="[89th] CH252 (Soup)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Soup\89th_marine_helmet_Soup_WDL_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Soup\89th_marine_helmet_Soup_WDL_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Soup_WDL_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="CH252 (Soup)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Soup\89th_marine_helmet_Soup_WDL_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Soup\89th_marine_helmet_Soup_WDL_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Soup_URB_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="[89th] CH252 (Soup)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Soup\89th_marine_helmet_Soup_URB_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Soup\89th_marine_helmet_Soup_URB_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Soup_URB_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="CH252 (Soup)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Soup\89th_marine_helmet_Soup_URB_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Soup\89th_marine_helmet_Soup_URB_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Soup_DES_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="[89th] CH252 (Soup)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Soup\89th_marine_helmet_Soup_DES_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Soup\89th_marine_helmet_Soup_DES_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Soup_DES_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="CH252 (Soup)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Soup\89th_marine_helmet_Soup_DES_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Soup\89th_marine_helmet_Soup_DES_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Soup_ARD_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="[89th] CH252 (Soup)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Soup\89th_marine_helmet_Soup_ARD_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Soup\89th_marine_helmet_Soup_ARD_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Soup_ARD_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="CH252 (Soup)(ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Soup\89th_marine_helmet_Soup_ARD_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Soup\89th_marine_helmet_Soup_ARD_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};

	class 89th_Marine_Soup_SNW_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="[89th] CH252 (Soup)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Soup\89th_marine_helmet_Soup_SNW_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Soup\89th_marine_helmet_Soup_SNW_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Soup_SNW_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="CH252 (Soup)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Soup\89th_marine_helmet_Soup_SNW_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Soup\89th_marine_helmet_Soup_SNW_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
		//Syndicate Helmet
	class 89th_Marine_Syndicate_WDL_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="[89th] CH252 (Syndicate)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Syndicate\89th_Marine_Syndicate_Helmet_WDL_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Syndicate\89th_marine_Syndicate_helmet_WDL_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Syndicate_WDL_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="CH252 (Syndicate)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Syndicate\89th_Marine_Syndicate_Helmet_WDL_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Syndicate\89th_marine_Syndicate_helmet_WDL_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Syndicate_URB_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="[89th] CH252 (Syndicate)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Syndicate\89th_Marine_Syndicate_Helmet_URB_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Syndicate\89th_marine_Syndicate_helmet_URB_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Syndicate_URB_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="CH252 (Syndicate)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Syndicate\89th_Marine_Syndicate_Helmet_URB_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Syndicate\89th_marine_Syndicate_helmet_URB_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};	class 89th_Marine_Syndicate_DES_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="[89th] CH252 (Syndicate)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Syndicate\89th_Marine_Syndicate_Helmet_DES_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Syndicate\89th_marine_Syndicate_helmet_DES_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Syndicate_DES_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="CH252 (Syndicate)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Syndicate\89th_Marine_Syndicate_Helmet_DES_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Syndicate\89th_marine_Syndicate_helmet_DES_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};	class 89th_Marine_Syndicate_ARD_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="[89th] CH252 (Syndicate)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Syndicate\89th_Marine_Syndicate_Helmet_ARD_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Syndicate\89th_marine_Syndicate_helmet_ARD_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Syndicate_ARD_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="CH252 (Syndicate)(ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Syndicate\89th_Marine_Syndicate_Helmet_ARD_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Syndicate\89th_marine_Syndicate_helmet_ARD_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};	class 89th_Marine_Syndicate_SNW_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="[89th] CH252 (Syndicate)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Syndicate\89th_Marine_Syndicate_Helmet_SNW_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Syndicate\89th_marine_Syndicate_helmet_SNW_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Syndicate_SNW_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Ice";
		displayName="CH252 (Syndicate)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Syndicate\89th_Marine_Syndicate_Helmet_SNW_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Syndicate\89th_marine_Syndicate_helmet_SNW_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
		//Christmas Helmet
	class 89th_Marine_Christmas_WDL_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Christmas";
		displayName="[89th] CH252 (Christmas)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Christmas\89th_marine_helmet_Christmas_WDL_CO.paa",
			"89th_Armor\Data\Custom\Christmas\Visor_Red.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Christmas\89th_marine_helmet_Christmas_WDL_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Christmas_WDL_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Christmas";
		displayName="CH252 (Christmas)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Christmas\89th_marine_helmet_Christmas_WDL_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Christmas\89th_marine_helmet_Christmas_WDL_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Christmas_URB_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Christmas";
		displayName="[89th] CH252 (Christmas)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Christmas\89th_marine_helmet_Christmas_URB_CO.paa",
			"89th_Armor\Data\Custom\Christmas\Visor_Red.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Christmas\89th_marine_helmet_Christmas_URB_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Christmas_URB_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Christmas";
		displayName="CH252 (Christmas)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Christmas\89th_marine_helmet_Christmas_URB_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Christmas\89th_marine_helmet_Christmas_URB_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Christmas_DES_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Christmas";
		displayName="[89th] CH252 (Christmas)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Christmas\89th_marine_helmet_Christmas_DES_CO.paa",
			"89th_Armor\Data\Custom\Christmas\Visor_Red.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Christmas\89th_marine_helmet_Christmas_DES_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Christmas_DES_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Christmas";
		displayName="CH252 (Christmas)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Christmas\89th_marine_helmet_Christmas_DES_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Christmas\89th_marine_helmet_Christmas_DES_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Christmas_ARD_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Christmas";
		displayName="[89th] CH252 (Christmas)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Christmas\89th_marine_helmet_Christmas_ARD_CO.paa",
			"89th_Armor\Data\Custom\Christmas\Visor_Red.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Christmas\89th_marine_helmet_Christmas_ARD_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Christmas_ARD_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Christmas";
		displayName="CH252 (Christmas)(ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Christmas\89th_marine_helmet_Christmas_ARD_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Christmas\89th_marine_helmet_Christmas_ARD_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Christmas_SNW_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Christmas";
		displayName="[89th] CH252 (Christmas)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Christmas\89th_marine_helmet_Christmas_SNW_CO.paa",
			"89th_Armor\Data\Custom\Christmas\Visor_Red.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Christmas\89th_marine_helmet_Christmas_SNW_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Christmas_SNW_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Christmas";
		displayName="CH252 (Christmas)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Christmas\89th_marine_helmet_Christmas_SNW_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Christmas\89th_marine_helmet_Christmas_SNW_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
		//Dragon Helmet
    class 89th_Marine_Dragon_WDL_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Christmas, Soup";
		displayName="[89th] CH252 (Dragon)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Dragon\89th_marine_helmet_Dragon_WDL_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Dragon\89th_marine_helmet_Dragon_WDL_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Dragon_WDL_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Christmas, Soup";
		displayName="CH252 (Dragon)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Dragon\89th_marine_helmet_Dragon_WDL_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Dragon\89th_marine_helmet_Dragon_WDL_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Dragon_URB_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Christmas, Soup";
		displayName="[89th] CH252 (Dragon)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Dragon\89th_marine_helmet_Dragon_URB_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Dragon\89th_marine_helmet_Dragon_URB_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Dragon_URB_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Christmas, Soup";
		displayName="CH252 (Dragon)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Dragon\89th_marine_helmet_Dragon_URB_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Dragon\89th_marine_helmet_Dragon_URB_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Dragon_DES_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Christmas, Soup";
		displayName="[89th] CH252 (Dragon)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Dragon\89th_marine_helmet_Dragon_DES_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Dragon\89th_marine_helmet_Dragon_DES_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Dragon_DES_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Christmas, Soup";
		displayName="CH252 (Dragon)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Dragon\89th_marine_helmet_Dragon_DES_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Dragon\89th_marine_helmet_Dragon_DES_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Dragon_ARD_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Christmas, Soup";
		displayName="[89th] CH252 (Dragon)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Dragon\89th_marine_helmet_Dragon_ARD_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Dragon\89th_marine_helmet_Dragon_ARD_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Dragon_ARD_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Christmas, Soup";
		displayName="CH252 (Dragon)(ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Dragon\89th_marine_helmet_Dragon_ARD_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Dragon\89th_marine_helmet_Dragon_ARD_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"

			};
		};
	};
	class 89th_Marine_Dragon_SNW_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Christmas, Soup";
		displayName="[89th] CH252 (Dragon)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Dragon\89th_marine_helmet_Dragon_SNW_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Dragon\89th_marine_helmet_Dragon_SNW_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Dragon_SNW_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Christmas, Soup";
		displayName="CH252 (Dragon)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Dragon\89th_marine_helmet_Dragon_SNW_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Dragon\89th_marine_helmet_Dragon_SNW_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	//Battle Helmet 
    class 89th_Marine_Battle_BLK_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="[89th] CH252 (Battle)(BLK)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Battle\89th_Legion_Helmet_Battle.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Battle\89th_Legion_Helmet_Battle.paa",
				""
			};
		};
	};
	class 89th_Marine_Battle_BLK_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="CH252 (Battle)(BLK)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Battle\89th_Legion_Helmet_Battle.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Battle\89th_Legion_Helmet_Battle.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};

			//Buck helmet
    class 89th_Marine_Buck_BLK_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="[89th] CH252 (Buck)(BLK)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Buck\89th_Buck_Helmet_BLK.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Buck\89th_Buck_Helmet_BLK.paa",
				""
			};
		};
	};
	class 89th_Marine_Buck_BLK_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="CH252 (Buck)(BLK)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Buck\89th_Buck_Helmet_BLK.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Buck\89th_Buck_Helmet_BLK.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
		//Legion Helmet
	class 89th_Legion_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="[89th] CH252 (Legion)(BLK)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Legion\89th_Legion_Helmet_BLK.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
			"89th_Armor\Data\Custom\Legion\89th_Legion_Helmet_BLK.paa",
				""
			};
		};
	};
	class 89th_Legion_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="CH252 (Legion)(BLK)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Legion\89th_Legion_Helmet_BLK.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
			"89th_Armor\Data\Custom\Legion\89th_Legion_Helmet_BLK.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
		//Meszaros Helmet
	class 89th_Marine_URB_Meszaros_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252 (Meszaros)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Meszaros\89th_Meszaros_helmet_URB_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Meszaros\89th_Meszaros_helmet_URB_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_WDL_Meszaros_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, Vespade and Smackles";
		displayName="[89th] CH252 (Meszaros)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Meszaros\89th_Meszaros_helmet_WDL_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Meszaros\89th_Meszaros_helmet_WDL_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_SNW_Meszaros_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, Vespade and Smackles";
		displayName="[89th] CH252 (Meszaros)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Meszaros\89th_Meszaros_helmet_SNW_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Meszaros\89th_Meszaros_helmet_SNW_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_DES_Meszaros_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, Vespade and Smackles";
		displayName="[89th] CH252 (Meszaros)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Meszaros\89th_Meszaros_helmet_DES_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Meszaros\89th_Meszaros_helmet_DES_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_ARD_Meszaros_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, Vespade and Smackles";
		displayName="[89th] CH252 (Meszaros)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Meszaros\89th_Meszaros_helmet_ARD_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Meszaros\89th_Meszaros_helmet_ARD_CO.paa",
				""
			};
		};
	};
//MadMike Helmet
	class 89th_Marine_MadMike_WDL_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Flips";
		displayName="[89th] CH252 (MadMike)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\MadMike\89th_Marine_MadMike_Helmet_WDL_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\MadMike\89th_marine_MadMike_helmet_WDL_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_MadMike_WDL_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Flips";
		displayName="CH252 (MadMike)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\MadMike\89th_Marine_MadMike_Helmet_WDL_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\MadMike\89th_marine_MadMike_helmet_WDL_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_MadMike_URB_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Flips";
		displayName="[89th] CH252 (MadMike)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\MadMike\89th_Marine_MadMike_Helmet_URB_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\MadMike\89th_marine_MadMike_helmet_URB_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_MadMike_URB_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Flips";
		displayName="CH252 (MadMike)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\MadMike\89th_Marine_MadMike_Helmet_URB_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\MadMike\89th_marine_MadMike_helmet_URB_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_MadMike_DES_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Flips";
		displayName="[89th] CH252 (MadMike)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\MadMike\89th_Marine_MadMike_Helmet_DES_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\MadMike\89th_marine_MadMike_helmet_DES_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_MadMike_DES_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Flips";
		displayName="CH252 (MadMike)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\MadMike\89th_Marine_MadMike_Helmet_DES_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\MadMike\89th_marine_MadMike_helmet_DES_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_MadMike_ARD_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Flips";
		displayName="[89th] CH252 (MadMike)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\MadMike\89th_Marine_MadMike_Helmet_ARD_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\MadMike\89th_marine_MadMike_helmet_ARD_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_MadMike_ARD_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Flips";
		displayName="CH252 (MadMike)(ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\MadMike\89th_Marine_MadMike_Helmet_ARD_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\MadMike\89th_marine_MadMike_helmet_ARD_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_MadMike_SNW_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Flips";
		displayName="[89th] CH252 (MadMike)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\MadMike\89th_Marine_MadMike_Helmet_SNW_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\MadMike\89th_marine_MadMike_helmet_SNW_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_MadMike_SNW_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Flips";
		displayName="CH252 (MadMike)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\MadMike\89th_Marine_MadMike_Helmet_SNW_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\MadMike\89th_marine_MadMike_helmet_SNW_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
		//Bler Helmet
	class 89th_CH252D_Bler_ARD: VES_CH252D
	{
		dlc="89thJTF";
		author="Ice";
		displayName="[89th] CH252D (Bler)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Bler\89th_BLER_ARD_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_BLU_V_CO"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bler\89th_BLER_ARD_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_BLU_V_CO"
			};
		};
	};
	class 89th_CH252D_Bler_ARD_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Ice";
		displayName="[89th] CH252D (ARD)(Bler)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Bler\89th_BLER_ARD_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bler\89th_BLER_ARD_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class 89th_CH252D_Bler_DES: VES_CH252D
	{
		dlc="89thJTF";
		author="Ice";
		displayName="[89th] CH252D (Bler)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Bler\89th_BLER_DES_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_BLU_V_CO"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bler\89th_BLER_DES_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_BLU_V_CO"
			};
		};
	};
	class 89th_CH252D_Bler_DES_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Ice";
		displayName="[89th] CH252D (Bler)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Bler\89th_BLER_DES_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bler\89th_BLER_DES_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class 89th_CH252D_Bler_SNW: VES_CH252D
	{
		dlc="89thJTF";
		author="Ice";
		displayName="[89th] CH252D (Bler)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Bler\89th_BLER_SNW_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_BLU_V_CO"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bler\89th_BLER_SNW_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_BLU_V_CO"
			};
		};
	};
	class 89th_CH252D_Bler_SNW_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Ice";
		displayName="[89th] CH252D (Bler)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Bler\89th_BLER_SNW_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bler\89th_BLER_SNW_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class 89th_CH252D_Bler_URB: VES_CH252D
	{
		dlc="89thJTF";
		author="Ice";
		displayName="[89th] CH252D (Bler)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Bler\89th_BLER_URB_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_BLU_V_CO"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bler\89th_BLER_URB_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_BLU_V_CO"
			};
		};
	};
	class 89th_CH252D_Bler_URB_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Ice";
		displayName="[89th] CH252D (Bler)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Bler\89th_BLER_URB_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bler\89th_BLER_URB_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class 89th_CH252D_Bler_WDL: VES_CH252D
	{
		dlc="89thJTF";
		author="Ice";
		displayName="[89th] CH252D (Bler)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Bler\89th_BLER_WDL_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_BLU_V_CO"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bler\89th_BLER_WDL_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_BLU_V_CO"
			};
		};
	};
	class 89th_CH252D_Bler_WDL_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Ice";
		displayName="[89th] CH252D (Bler)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Bler\89th_BLER_WDL_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Bler\89th_BLER_WDL_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
		//Epsilon Helmet
	class 89th_CH252D_Epsilon_ARD: VES_CH252D
	{
		dlc="89thJTF";
		author="Ice";
		displayName="[89th] CH252D (Epsilon)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_ARD_CO.paa",
			"89th_Armor\Data\Custom\Epsilon\89th_GoliathEpsi_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_ARD_CO.paa",
				"89th_Armor\Data\Custom\Epsilon\89th_GoliathEpsi_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_Epsilon_ARD_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Ice";
		displayName="[89th] CH252D (Epsilon)(ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_ARD_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_ARD_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"

			};
		};
	};

class 89th_CH252D_Epsilon_DES: VES_CH252D
	{
		dlc="89thJTF";
		author="Ice";
		displayName="[89th] CH252D (Epsilon)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_DES_CO.paa",
			"89th_Armor\Data\Custom\Epsilon\89th_GoliathEpsi_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_DES_CO.paa",
				"89th_Armor\Data\Custom\Epsilon\89th_GoliathEpsi_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_Epsilon_DES_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Ice";
		displayName="[89th] CH252D (Epsilon)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_DES_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_DES_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};

class 89th_CH252D_Epsilon_SNW: VES_CH252D
	{
		dlc="89thJTF";
		author="Ice";
		displayName="[89th] CH252D (Epsilon)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_SNW_CO.paa",
			"89th_Armor\Data\Custom\Epsilon\89th_GoliathEpsi_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_SNW_CO.paa",
				"89th_Armor\Data\Custom\Epsilon\89th_GoliathEpsi_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_Epsilon_SNW_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Ice";
		displayName="[89th] CH252D (Epsilon)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_SNW_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_SNW_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};

class 89th_CH252D_Epsilon_WDL: VES_CH252D
	{
		dlc="89thJTF";
		author="Ice";
		displayName="[89th] CH252D (Epsilon)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_WDL_CO.paa",
			"89th_Armor\Data\Custom\Epsilon\89th_GoliathEpsi_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_WDL_CO.paa",
				"89th_Armor\Data\Custom\Epsilon\89th_GoliathEpsi_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_Epsilon_WDL_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Ice";
		displayName="[89th] CH252D (Epsi)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_WDL_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_WDL_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};

class 89th_CH252D_Epsilon_URB: VES_CH252D
	{
		dlc="89thJTF";
		author="Ice";
		displayName="[89th] CH252D (Epsilon)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_URB_CO.paa",
			"89th_Armor\Data\Custom\Epsilon\89th_GoliathEpsi_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_URB_CO.paa",
				"89th_Armor\Data\Custom\Epsilon\89th_GoliathEpsi_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_Epsilon_URB_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Ice";
		displayName="[89th] CH252D (Epsilon)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_URB_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_URB_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};

	//Jarvis Helmet
	class Jarvis_CH252D: VES_CH252D
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
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
		author="Tas, Geek, and Vespade";
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
		author="Tas, Geek, and Vespade";
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
		author="Tas, Geek, and Vespade";
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
		author="Tas, Geek, and Vespade";
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
		author="Tas, Geek, and Vespade";
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
		author="Tas, Geek, and Vespade";
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
		author="Tas, Geek, and Vespade";
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
		author="Tas, Geek, and Vespade";
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
		author="Tas, Geek, and Vespade";
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
		//Joker Helmet
	class Joker_S1ONIR:	VES_S1ONIR
	{
		dlc="89thJTF";
		author="Flips";
		displayName="[89th] S1/ONI/R (Joker)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Joker\V_S1ONIR_JOKER_CO",
			"V_FZ_Armor\Data\Helmets\V_S1ONIR_GLD_V_CO"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Joker\V_S1ONIR_JOKER_CO",
				"V_FZ_Armor\Data\Helmets\V_S1ONIR_GLD_V_CO"
			};
		};
	};
	class Joker_S1ONIR_dp: VES_S1ONIR_dp
	{
		dlc="89thJTF";
		author="Flips";
		displayName="[89th] Joker S1/ONI/R [OFF}";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Joker\V_S1ONIR_JOKER_CO",
			"V_FZ_Armor\Data\Helmets\V_S1ONIR_GLD_V_CO"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Joker\V_S1ONIR_JOKER_CO",
				"V_FZ_Armor\Data\Helmets\V_S1ONIR_GLD_V_CO"
			};
		};
	};
		//Ziggy Helmet
	class 89th_Marine_Ziggy_WDL_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Flips";
		displayName="[89th] CH252 (Ziggy)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Ziggy\89th_Ziggy_helmet_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Ziggy\89th_Ziggy_helmet_WDL.paa",
				""
			};
		};
	};
	class 89th_Marine_Ziggy_WDL_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="CH252 (Ziggy)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Ziggy\89th_Ziggy_helmet_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Ziggy\89th_Ziggy_helmet_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Ziggy_URB_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Flips";
		displayName="[89th] CH252 (Ziggy)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Ziggy\89th_Ziggy_helmet_URB.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Ziggy\89th_Ziggy_helmet_URB.paa",
				""
			};
		};
	};
	class 89th_Marine_Ziggy_URB_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="CH252 (Ziggy)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Ziggy\89th_Ziggy_helmet_URB.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Ziggy\89th_Ziggy_helmet_URB.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Ziggy_DES_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Flips";
		displayName="[89th] CH252 (Ziggy)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Ziggy\89th_Ziggy_helmet_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Ziggy\89th_Ziggy_helmet_DES.paa",
				""
			};
		};
	};
	class 89th_Marine_Ziggy_DES_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="CH252 (Ziggy)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Ziggy\89th_Ziggy_helmet_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Ziggy\89th_Ziggy_helmet_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Ziggy_ARD_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Flips";
		displayName="[89th] CH252 (Ziggy)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Ziggy\89th_Ziggy_helmet_ARD.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Ziggy\89th_Ziggy_helmet_ARD.paa",
				""
			};
		};
	};
	class 89th_Marine_Ziggy_ARD_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="CH252 (Ziggy)(ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Ziggy\89th_Ziggy_helmet_ARD.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Ziggy\89th_Ziggy_helmet_ARD.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Ziggy_SNW_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Flips";
		displayName="[89th] CH252 (Ziggy)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Ziggy\89th_Ziggy_helmet_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Ziggy\89th_Ziggy_helmet_SNW.paa",
				""
			};
		};
	};
	class 89th_Marine_Ziggy_SNW_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
		displayName="CH252 (Ziggy)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Ziggy\89th_Ziggy_helmet_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Ziggy\89th_Ziggy_helmet_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
		// Bread Helmet
	class 89th_Marine_Bread_WDL_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
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
	class 89th_Marine_Bread_WDL_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
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
		author="Soup";
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
	class 89th_Marine_Bread_URB_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
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
		author="Soup";
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
	class 89th_Marine_Bread_DES_CH252_dp: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
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
		author="Soup";
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
	class 89th_Marine_Bread_ARD_CH252_dp: VES_CH252_MAR_Vacuum
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
	class 89th_Marine_Bread_SNW_CH252_dp: VES_CH252_MAR_Vacuum
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
		//Legate Helmet
	class 89th_Marine_URB_Legate_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Soup";
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
		author="Soup";
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
		author="Soup";
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
		author="Soup";
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
		author="Soup";
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
		//Cyborg Helmet
	class 89th_Marine_WDL_Cyborg_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] Cyborg CH252 Helmet (WDL)";
		model="\optre_unsc_units\army\helmet";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyborg\89th_marine_helmet_Cyborg_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyborg\89th_marine_helmet_Cyborg_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_WDL_Cyborg_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] Cyborg CH252 Helmet (WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyborg\89th_marine_helmet_Cyborg_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyborg\89th_marine_helmet_Cyborg_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_URB_Cyborg_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] Cyborg CH252 Helmet (URB)";
		model="\optre_unsc_units\army\helmet";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyborg\89th_marine_helmet_Cyborg_URB.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyborg\89th_marine_helmet_Cyborg_URB.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_URB_Cyborg_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] Cyborg CH252 Helmet (URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyborg\89th_marine_helmet_Cyborg_URB.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyborg\89th_marine_helmet_Cyborg_URB.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_SNW_Cyborg_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] Cyborg CH252 Helmet (SNW)";
		model="\optre_unsc_units\army\helmet";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyborg\89th_marine_helmet_Cyborg_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyborg\89th_marine_helmet_Cyborg_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_SNW_Cyborg_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] Cyborg CH252 Helmet (SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyborg\89th_marine_helmet_Cyborg_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyborg\89th_marine_helmet_Cyborg_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
		class 89th_Marine_ARD_Cyborg_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] Cyborg CH252 Helmet (ARD)";
		model="\optre_unsc_units\army\helmet";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyborg\89th_marine_helmet_Cyborg_ARD.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyborg\89th_marine_helmet_Cyborg_ARD.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_ARD_Cyborg_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] Cyborg CH252 Helmet (ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyborg\89th_marine_helmet_Cyborg_ARD.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyborg\89th_marine_helmet_Cyborg_ARD.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_DES_Cyborg_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] Cyborg CH252 Helmet (DES)";
		model="\optre_unsc_units\army\helmet";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyborg\89th_marine_helmet_Cyborg_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyborg\89th_marine_helmet_Cyborg_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_DES_Cyborg_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, and Vespade";
		displayName="[89th] Cyborg CH252 Helmet (DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyborg\89th_marine_helmet_Cyborg_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyborg\89th_marine_helmet_Cyborg_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
};
