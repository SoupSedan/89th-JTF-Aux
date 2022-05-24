class cfgPatches
{
	class 89th_Armor_patches
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
	class OPTRE_UNSC_M52A_Armor_Rifleman_MAR;
	class VES_CH252D;
	class VES_CH252D_dp;
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_MAR_Vacuum_dp;
	class VES_M52D_Demolitions;
	class VES_CH252_MAR_Light;
	class ItemInfo;
	class VestItem;
		//Crimson Vests
	class Crimson_M52A_Class3_Hvy: OPTRE_UNSC_M52A_Armor_Rifleman_MAR
	{
		dlc="FZ";
		author="Vespade";
		displayName="Crimson M52A C3 (Heavy)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_UNDERLAY_BLK_CO.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Shoulders_BLK_co.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Legs_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Armor_BLK_CO.paa"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","",""};
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
			\\	"AP_GL",
				"AP_Knife",
			\\	"AP_MGThigh",
			\\	"AP_AR",
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
	class Crimson_M52A_Class3_Ldr: OPTRE_UNSC_M52A_Armor_Rifleman_MAR
	{
		dlc="FZ";
		author="Vespade";
		displayName="Crimson M52A C3 (Leader)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_UNDERLAY_BLK_CO.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Shoulders_BLK_co.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Legs_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Armor_BLK_CO.paa"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","",""};
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
				"AP_Knife",
			\\	"AP_MGThigh",
			\\	"AP_AR",
				"AP_BR",
			\\	"AP_Pack",
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
	class Crimson_M52A_Class3_Rfl: OPTRE_UNSC_M52A_Armor_Rifleman_MAR
	{
		dlc="FZ";
		author="Vespade";
		displayName="Crimson M52A C3 (Rifleman)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_UNDERLAY_BLK_CO.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Shoulders_BLK_co.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Legs_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Armor_BLK_CO.paa"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","",""};
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
			\\	"AP_MGThigh",
			\\	"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
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
	class Crimson_M52A_Class2_Rfl: OPTRE_UNSC_M52A_Armor_Rifleman_MAR
	{
		dlc="FZ";
		author="Vespade";
		displayName="Crimson M52A C2 (Rifleman)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_UNDERLAY_BLK_CO.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Shoulders_BLK_co.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Legs_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Armor_BLK_CO.paa"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","",""};
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
				"A_KneesLeft",
				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
			\\	"A_ShinArmorLeft",
			\\	"A_ShinArmorRight",
				"A_TacPad",
			\\	"A_ThighArmorLeft",
			\\	"A_ThighArmorRight",
			\\	"AS_BaseLeft",
			\\	"AS_BaseRight",
			\\	"AS_LargeLeft",
			\\	"AS_LargeRight",
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
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
			\\	"AP_AR",
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
	class Crimson_M52A_Class2_Ldr: OPTRE_UNSC_M52A_Armor_Rifleman_MAR
	{
		dlc="FZ";
		author="Vespade";
		displayName="Crimson M52A C2 (Leader)";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_UNDERLAY_BLK_CO.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Shoulders_BLK_co.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Legs_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Armor_BLK_CO.paa"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","",""};
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
				"A_KneesMarLeft",
				"A_KneesMarRight",
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
			\\	"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
			\\	"AP_AR",
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
	class Crimson_M52A_Class1_Rfl: OPTRE_UNSC_M52A_Armor_Rifleman_MAR
	{
		dlc="FZ";
		author="Vespade";
		displayName="Crimson M52A C1";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_UNDERLAY_BLK_CO.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Shoulders_BLK_co.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Legs_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Armor_BLK_CO.paa"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","",""};
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
				"A_ChestArmor",
				"A_KneesLeft",
				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
			\\	"A_ShinArmorLeft",
			\\	"A_ShinArmorRight",
				"A_TacPad",
			\\	"A_ThighArmorLeft",
			\\	"A_ThighArmorRight",
			\\	"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
			\\	"AS_SmallLeft",
			\\	"AS_SmallRight",
			\\	"AP_Canteen",
				"AP_GL",
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
			\\	"AP_Thigh",
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
	class Crimson_M52D_Hvy: VES_M52D_Demolitions
	{
		dlc="FZ";
		author="Vespade";
		displayName="Crimson M52D Heavy";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_UNDERLAY_BLK_CO.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Shoulders_BLK_co.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Legs_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Armor_BLK_CO.paa"};
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
			\\	"A_KneesRight",
			\\	"A_KneesMarLeft",
			\\	"A_KneesMarRight",
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
				"AS_ODSTRight",
			\\	"AS_ODSTSniperLeft",
			\\	"AS_ODSTSniperRight",
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
			\\	"AP_Thigh",
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
	class Crimson_M52D_Spr: VES_M52D_Demolitions
	{
		dlc="FZ";
		author="Vespade";
		displayName="Crimson M52D Sniper";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_UNDERLAY_BLK_CO.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Shoulders_BLK_co.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Legs_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Armor_BLK_CO.paa"};
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
				"A_KneesLeft",
			\\	"A_KneesRight",
			\\	"A_KneesMarLeft",
			\\	"A_KneesMarRight",
			\\	"A_ODST",
				"A_ShinArmorLeft",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
			\\	"AS_ODSTSniperRight",
			\\	"AS_SmallLeft",
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
	class Crimson_M52D_Mks: VES_M52D_Demolitions
	{
		dlc="FZ";
		author="Vespade";
		displayName="Crimson M52D Rifleman";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_UNDERLAY_BLK_CO.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Shoulders_BLK_co.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Legs_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Armor_BLK_CO.paa"};
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
			\\	"A_KneesRight",
			\\	"A_KneesMarLeft",
			\\	"A_KneesMarRight",
			\\	"A_ODST",
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
			\\	"AP_Thigh",
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
	class Crimson_M52D_Ord: VES_M52D_Demolitions
	{
		dlc="FZ";
		author="Vespade";
		displayName="Crimson M52D Ordinance";
		hiddenSelectionsTextures[]=
		{	
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_UNDERLAY_BLK_CO.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Shoulders_BLK_co.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Legs_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_Armor_BLK_CO.paa"};
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
			\\	"A_KneesRight",
			\\	"A_KneesMarLeft",
			\\	"A_KneesMarRight",
			\\	"A_ODST",
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
			\\	"AS_ODSTCQBLeft",
			\\	"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
			\\	"AP_GL",
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
			\\	"AP_Thigh",
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
		//Crimson Helmets
	class Crimson_CH252_NonVac: VES_CH252_MAR_Light
	{
		dlc="89thCUArmor";
		scope=2;
		author="Vespade";
		displayName="Crimson CH252 Half";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_BLK_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Crimson\Crimson_M52D_BLK_CO.paa",
				""
			};
		};
	};
	class Crimson_Marine_VAC_B_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thCUArmor";
		author="Tas, Jake, and Vespade";
		displayName="Crimson CH252 Helmet";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Crimson\Crimson_M52A_BLK_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Crimson\Crimson_M52A_BLK_CO.paa",
				"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class Crimson_Marine_VAC_B_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thCUArmor";
		author="Tas, Jake, and Vespade";
		displayName="Crimson CH252 Helmet [OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Crimson\Crimson_M52A_BLK_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Crimson\Crimson_M52A_BLK_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
		//Crimson ODST Helmet
	class Crimson_CH252D: VES_CH252D
	{
		dlc="89thCUArmor";
		author="Tas, Geek, and Vespade";
		displayName="Crimson CH252D";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_BLK_CO.paa",
			"89th_Armor\Data\Visors\89th_Goliath_V_CO.paa"};
			class HitpointsProtectionInfo
			{
				class Head {armor=75; hitpointName="HitHead"; passThrough=0.1;};
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Crimson\Crimson_M52D_BLK_CO.paa",
				"89th_Armor\Data\Visors\89th_Goliath_V_CO.paa"
			};
		};
	};
	class Crimson_CH252D_dp: VES_CH252D_dp
	{
		dlc="89thCUArmor";
		author="Tas, Geek, and Vespade";
		displayName="Crimson CH252D [OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Crimson\Crimson_M52D_BLK_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
			class HitpointsProtectionInfo
			{
				class Head {armor=75; hitpointName="HitHead"; passThrough=0.1;};
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Crimson\Crimson_M52D_BLK_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
};
class cfgVehicles
{
	class B_FieldPack_Base;
	class OPTRE_UNSC_Rucksack;
	class OPTRE_ILCS_Rucksack_Black;
	class Ruck_LR: OPTRE_UNSC_Rucksack
	{
		author="Tas";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		isbackpack=1;
		displayName="[89th] Invisible Rucksack LR";
		picture="\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		model="\89th_Redx_Files\backpacks\89_Invis_pack.p3d";
		maximumLoad=400;
		allowedSlots[]={901};
		mass=50;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Medic",
			"B_Addons"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\soft_backpack_co.paa",
			"optre_unsc_units\army\data\commopack_blk_co.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		transportMaxWeapons=10;
		transportMaxMagazines=100;
		class DestructionEffects
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class Ruck_LR1: OPTRE_UNSC_Rucksack
	{
		author="Tas";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		isbackpack=1;
		displayName="[89th] Invisible Rucksack";
		picture="\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		model="\89th_Redux_Files\backpacks\89_Invis_pack.p3d";
		maximumLoad=400;
		allowedSlots[]={901};
		mass=50;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Medic",
			"B_Addons"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\soft_backpack_co.paa",
			"optre_unsc_units\army\data\commopack_blk_co.paa"
		};
		class DestructionEffects
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class Ruck_LR2: OPTRE_UNSC_Rucksack
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="[89th] Rucksack LR WDL";
		picture="\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		maximumLoad=400;
		allowedSlots[]={901};
		mass=50;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Medic",
			"B_Addons"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\soft_backpack_co.paa",
			"89th_Armor\Data\Commopack_WDL_CO.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
	class Ruck_LR3: OPTRE_UNSC_Rucksack
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="[89th] Rucksack LR URB";
		picture="\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		maximumLoad=400;
		allowedSlots[]={901};
		mass=50;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Medic",
			"B_Addons"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\soft_backpack_co.paa",
			"89th_Armor\Data\Commopack_URB_CO.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
	class Ruck_LR5: OPTRE_UNSC_Rucksack
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="[89th] Rucksack LR DES";
		picture="\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		maximumLoad=400;
		allowedSlots[]={901};
		mass=50;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Medic",
			"B_Addons"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\soft_backpack_co.paa",
			"89th_Armor\Data\Commopack_DES_CO.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
	class Ruck_LR6: OPTRE_UNSC_Rucksack
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="[89th] Rucksack LR SNW";
		picture="\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		maximumLoad=400;
		allowedSlots[]={901};
		mass=50;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Medic",
			"B_Addons"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\soft_backpack_co.paa",
			"89th_Armor\Data\Commopack_SNW_CO.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
	class Weapon_Bag_Base;
	class 89th_AQ21_Pack_Sniper: Weapon_Bag_Base
	{
		dlc="89thCUArmor";
		scope=2;
		scopeCurator=2;
		author="Vespade and Shelly";
		displayName="[89th] ILCS Rucksack [AQ-21] Sniper Varient";
		picture="\OPTRE_weapons\backpacks\icons\rucksack_black";
		model="\OPTRE_weapons\backpacks\ODST_ruck";
		hiddenSelections[]=
		{
			"camo1",
			"biofoam"
		};
		hiddenSelectionsMaterials[]={};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Backpacks\V_ILCS_UAV_CO"
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="89th_JTF_AQ21_SD_Sniper";
			displayName="AQ-21 Support Drone Sniper";
			dissasembleTo[]={};
		};
	};
	class 89th_MQ49_Pack_Boom: Weapon_Bag_Base
	{
		dlc="89thCUArmor";
		scope=2;
		scopeCurator=2;
		author="Vespade and Shelly";
		displayName="[89th] ILCS Rucksack [AQ-21] Gauss Varient";
		picture="\OPTRE_weapons\backpacks\icons\rucksack_black";
		model="\OPTRE_weapons\backpacks\ODST_ruck";
		hiddenSelections[]=
		{
			"camo1",
			"biofoam"
		};
		hiddenSelectionsMaterials[]={};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Backpacks\V_ILCS_UAV_CO"
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="89th_JTF_AQ21_SD_Rocket";
			displayName="AQ-21 Support Drone Gauss";
			dissasembleTo[]={};
		};
	};
};
class cfgMods
{
	author="SPARTAN010824";
	timepacked="1602421568";
};
class ACE_Tags
{
	class 89th12
	{
		displayName="1-2";
		requiredItem="VES_TacSpraycan";
		textures[]=
		{
			"89th_Armor\Data\1_2_ca"
		};
		icon="89th_Armor\Data\1_2_ca";
	};
	class 89thAnvil
	{
		displayName="Anvil";
		requiredItem="VES_TacSpraycan";
		textures[]=
		{
			"89th_Armor\Data\Anvil_ca"
		};
		icon="89th_Armor\Data\Anvil_ca";
	};
	class 89thGoliath
	{
		displayName="Goliath";
		requiredItem="VES_TacSpraycan";
		textures[]=
		{
			"89th_Armor\Data\Goliath_Spray_ca"
		};
		icon="89th_Armor\Data\Goliath_Spray_ca";
	};
	class CrimsonSun
	{
		displayName="Crimson";
		requiredItem="VES_TacSpraycan";
		textures[]=
		{
			"89th_Armor\Data\Crimson_ca"
		};
		icon="89th_Armor\Data\Crimson_ca";
	};
};
