class cfgPatches
{
	class 89th_M52_patches
	{
		author="89th Mod Team";
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"V_FZ_Armor"
		};
		units[] = {};
		weapons[]= {};
	};
};
class cfgWeapons
{
	class VES_M52A_MAR_Rifleman_C;
	class VES_M52A_MAR_Corpsman_A;
	class VES_M52D_Rifleman;
	class VES_M52D_Scout;
	class VES_M52D_Sniper;
	class VES_M52D_Demolitions;
	class VES_M52D_Marksman;
	class ItemInfo;
	class VestItem;
	class 89th_M52A_Rifleman: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		scope=2;
		author="Ice and Vespade";
		displayName="M52A (Rifleman)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_BLANK_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
		class ItemInfo: VestItem
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=35;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"\\	""A_ChestArmor""",
				"A_KneesLeft",
				"A_KneesRight",
				"\\	""A_KneesMarLeft""",
				"\\	""A_KneesMarRight""",
				"A_ODST",
				"\\	""A_ShinArmorLeft""",
				"\\	""A_ShinArmorRight""",
				"A_TacPad",
				"\\	""A_ThighArmorLeft""",
				"\\	""A_ThighArmorRight""",
				"\\	""AS_BaseLeft""",
				"\\	""AS_BaseRight""",
				"\\	""AS_LargeLeft""",
				"AS_LargeRight",
				"AS_MediumLeft",
				"\\	""AS_MediumRight""",
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
				"\\	""AP_Knife""",
				"AP_MGThigh",
				"\\	""AP_AR""",
				"AP_BR",
				"AP_Pack",
				"\\	""AP_Pistol""",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"\\	""AP_Frag""",
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
	class 89th_M52A_TeamLeader: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="M52A (Team Leader)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_BLANK_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
		class ItemInfo: VestItem
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=35;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"\\	""A_ChestArmor""",
				"\\	""A_KneesLeft""",
				"A_KneesRight",
				"\\	""A_KneesMarLeft""",
				"\\	""A_KneesMarRight""",
				"A_ODST",
				"\\	""A_ShinArmorLeft""",
				"\\	""A_ShinArmorRight""",
				"A_TacPad",
				"\\	""A_ThighArmorLeft""",
				"\\	""A_ThighArmorRight""",
				"\\	""AS_BaseLeft""",
				"\\	""AS_BaseRight""",
				"AS_LargeLeft",
				"AS_LargeRight",
				"\\	""AS_MediumLeft""",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"\\	""AS_ODSTRight""",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"\\	""AP_Canteen""",
				"AP_GL",
				"\\	""AP_Knife""",
				"AP_MGThigh",
				"\\	""AP_AR""",
				"AP_BR",
				"\\	""AP_Pack""",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"\\	""AP_Sniper""",
				"AP_Thigh",
				"AP_Frag",
				"\\	""AP_Smoke""",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class 89th_M52A_Marksman: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		scope=2;
		author="Ice and Vespade";
		displayName="M52A (Marksman)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_BLANK_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
		class ItemInfo: VestItem
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=35;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"\\	""A_ChestArmor""",
				"\\	""A_KneesLeft""",
				"A_KneesRight",
				"A_KneesMarLeft",
				"\\	""A_KneesMarRight""",
				"A_ODST",
				"A_ShinArmorLeft",
				"\\	""A_ShinArmorRight""",
				"A_TacPad",
				"\\	""A_ThighArmorLeft""",
				"\\	""A_ThighArmorRight""",
				"\\	""AS_BaseLeft""",
				"\\	""AS_BaseRight""",
				"AS_LargeLeft",
				"AS_LargeRight",
				"\\	""AS_MediumLeft""",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"\\	""AS_SmallRight""",
				"\\	""AP_Canteen""",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"\\	""AP_Pistol""",
				"\\	""AP_Rounds""",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"\\	""AP_Smoke""",
				"APO_AR",
				"APO_BR",
				"\\	""APO_Knife""",
				"APO_SMG",
				"\\	""APO_Sniper""",
				"CustomKit_Scorch"
			};
		};
	};
	class 89th_M52A_Assault: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		scope=2;
		author="Ice and Vespade";
		displayName="M52A (Assault)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_BLANK_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
		class ItemInfo: VestItem
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=35;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"\\	""A_ChestArmor""",
				"\\	""A_KneesLeft""",
				"A_KneesRight",
				"\\	""A_KneesMarLeft""",
				"\\	""A_KneesMarRight""",
				"A_ODST",
				"\\	""A_ShinArmorLeft""",
				"\\	""A_ShinArmorRight""",
				"A_TacPad",
				"\\	""A_ThighArmorLeft""",
				"\\	""A_ThighArmorRight""",
				"\\	""AS_BaseLeft""",
				"\\	""AS_BaseRight""",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"\\	""AS_ODSTLeft""",
				"\\	""AS_ODSTRight""",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"\\	""AP_MGThigh""",
				"AP_AR",
				"AP_BR",
				"\\	""AP_Pack""",
				"\\	""AP_Pistol""",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"\\	""AP_Frag""",
				"AP_Smoke",
				"\\	""APO_AR""",
				"APO_BR",
				"\\	""APO_Knife""",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class 89th_M52A_Security: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		scope=2;
		author="Ice and Vespade";
		displayName="M52A (Security)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_BLANK_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
		class ItemInfo: VestItem
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=35;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"\\	""A_ChestArmor""",
				"\\	""A_KneesLeft""",
				"A_KneesRight",
				"\\	""A_KneesMarLeft""",
				"\\	""A_KneesMarRight""",
				"A_ODST",
				"\\	""A_ShinArmorLeft""",
				"\\	""A_ShinArmorRight""",
				"A_TacPad",
				"\\	""A_ThighArmorLeft""",
				"\\	""A_ThighArmorRight""",
				"\\	""AS_BaseLeft""",
				"\\	""AS_BaseRight""",
				"\\	""AS_LargeLeft""",
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
				"\\	""AS_SmallRight""",
				"AP_Canteen",
				"AP_GL",
				"\\	""AP_Knife""",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"\\	""AP_SG""",
				"\\	""AP_SMG""",
				"AP_Sniper",
				"\\	""AP_Thigh""",
				"\\	""AP_Frag""",
				"\\	""AP_Smoke""",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class 89th_M52A_CLS: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="M52A (CLS)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_CLS_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
		class ItemInfo: VestItem
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=35;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"\\	""A_ChestArmor""",
				"\\	""A_KneesLeft""",
				"A_KneesRight",
				"\\	""A_KneesMarLeft""",
				"\\	""A_KneesMarRight""",
				"A_ODST",
				"\\	""A_ShinArmorLeft""",
				"\\	""A_ShinArmorRight""",
				"A_TacPad",
				"\\	""A_ThighArmorLeft""",
				"\\	""A_ThighArmorRight""",
				"\\	""AS_BaseLeft""",
				"\\	""AS_BaseRight""",
				"\\	""AS_LargeLeft""",
				"AS_LargeRight",
				"AS_MediumLeft",
				"\\	""AS_MediumRight""",
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
				"\\	""AP_Knife""",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"\\	""AP_SMG""",
				"AP_Sniper",
				"\\	""AP_Thigh""",
				"\\	""AP_Frag""",
				"\\	""AP_Smoke""",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class 89th_M52A_RTO: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Rojas, Vespade";
		displayName="M52A (RTO)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_BLANK_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_RTO_ARD.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
		class ItemInfo: VestItem
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=35;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"\\	""A_ChestArmor",
				"\\	""A_KneesLeft",
				"A_KneesRight",
				"\\	""A_KneesMarLeft",
				"\\	""A_KneesMarRight",
				"A_ODST",
				"\\	""A_ShinArmorLeft",
				"\\	""A_ShinArmorRight",
				"A_TacPad",
				"\\	""A_ThighArmorLeft",
				"\\	""A_ThighArmorRight",
				"\\	""AS_BaseLeft",
				"\\	""AS_BaseRight",
				"\\	""AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"\\	""AS_MediumRight",
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
				"\\	""AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"\\ ""AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"\\	""AP_Frag",
				"\\	""AP_Smoke",
				"\\ ""APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class 89th_M52A_M: VES_M52A_MAR_Corpsman_A
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="M52A (Medic)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_M_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
		};
	};
	class 89th_M52D_R: VES_M52D_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="M52D (Rifleman)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_M_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class 89th_M52D_SCT: VES_M52D_Scout
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="M52D (Scout)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_M_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"APO_AR",
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
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
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"APO_AR",
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class 89th_M52D_SNPR: VES_M52D_Sniper
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="M52D (Sniper)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_M_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_SMG",
			"CustomKit_Scorch"
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
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"CustomKit_Scorch"
			};
		};
	};
	class 89th_M52D_DEMO: VES_M52D_Demolitions
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="M52D (Demolition)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_M_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
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
			"APO_Sniper",
			"CustomKit_Scorch"
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
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
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
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class 89th_M52D_Marksman: VES_M52D_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="M52D (Marksman)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_M_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_AR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
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
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class 89th_M52A_Vests
		{
			label="[89th] M52A";
			author="89th Mod Team";
			options[]=
			{
				"special",
				"camo"
			};
			class special
			{
				label="Specialization";
				alwaysSelectable=1;
				values[]=
				{
					"rifle",
					"teamlead",
					"marksman",
					"assault",
					"security",
					"cls",
					"corp",
					"rto"
				};
				class rifle
				{
					label="Rifleman";
				};
				class teamlead
				{
					label="Team Lead";
				};
				class marksman
				{
					label="Marksman";
				};
				class assault
				{
					label="Assault";
				};
				class security
				{
					label="Security";
				};
				class cls
				{
					label="CLS";
					image="89th_Core\Emblems\CLS.paa";
				};
				class corp
				{
					label="Corpsman";
					image="89th_Core\Emblems\Corpsman.paa";
				};
				class rto
				{
					label="RTO";
					image="89th_Core\Emblems\RTP.paa";
				};
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
		class 89th_M52D_Vests
		{
			label="[89th] M52D";
			author="89th Mod Team";
			options[]=
			{
				"special",
				"camo"
			};
			class special
			{
				label="Specialization";
				alwaysSelectable=1;
				values[]=
				{
					"rifle",
					"scout",
					"marksman",
					"sniper",
					"demo"
				};
				class rifle
				{
					label="Rifleman";
				};
				class scout
				{
					label="Scout";
				};
				class marksman
				{
					label="Marksman";
				};
				class sniper
				{
					label="Sniper";
				};
				class demo
				{
					label="Demolitions";
				};
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
		class 89th_M52A_Rifleman_ARD
		{
			model="89th_M52A_Vests";
			special="rifle";
			camo="ARD";
		};
		class 89th_M52A_TeamLeader_ARD
		{
			model="89th_M52A_Vests";
			special="teamlead";
			camo="ARD";
		};
		class 89th_M52A_Marksman_ARD
		{
			model="89th_M52A_Vests";
			special="marksman";
			camo="ARD";
		};
		class 89th_M52A_Assault_ARD
		{
			model="89th_M52A_Vests";
			special="assault";
			camo="ARD";
		};
		class 89th_M52A_Security_ARD
		{
			model="89th_M52A_Vests";
			special="security";
			camo="ARD";
		};
		class 89th_M52A_CLS_ARD
		{
			model="89th_M52A_Vests";
			special="cls";
			camo="ARD";
		};
		class 89th_M52A_M_ARD
		{
			model="89th_M52A_Vests";
			special="corp";
			camo="ARD";
		};
		class 89th_M52A_RTO_ARD
		{
			model="89th_M52A_Vests";
			special="rto";
			camo="ARD";
		};
		class 89th_M52A_Rifleman_DES
		{
			model="89th_M52A_Vests";
			special="rifle";
			camo="DES";
		};
		class 89th_M52A_TeamLeader_DES
		{
			model="89th_M52A_Vests";
			special="teamlead";
			camo="DES";
		};
		class 89th_M52A_Marksman_DES
		{
			model="89th_M52A_Vests";
			special="marksman";
			camo="DES";
		};
		class 89th_M52A_Assault_DES
		{
			model="89th_M52A_Vests";
			special="assault";
			camo="DES";
		};
		class 89th_M52A_Security_DES
		{
			model="89th_M52A_Vests";
			special="security";
			camo="DES";
		};
		class 89th_M52A_CLS_DES
		{
			model="89th_M52A_Vests";
			special="cls";
			camo="DES";
		};
		class 89th_M52A_M_DES
		{
			model="89th_M52A_Vests";
			special="corp";
			camo="DES";
		};
		class 89th_M52A_RTO_DES
		{
			model="89th_M52A_Vests";
			special="rto";
			camo="DES";
		};
		class 89th_M52A_Rifleman_SNW
		{
			model="89th_M52A_Vests";
			special="rifle";
			camo="SNW";
		};
		class 89th_M52A_TeamLeader_SNW
		{
			model="89th_M52A_Vests";
			special="teamlead";
			camo="SNW";
		};
		class 89th_M52A_Marksman_SNW
		{
			model="89th_M52A_Vests";
			special="marksman";
			camo="SNW";
		};
		class 89th_M52A_Assault_SNW
		{
			model="89th_M52A_Vests";
			special="assault";
			camo="SNW";
		};
		class 89th_M52A_Security_SNW
		{
			model="89th_M52A_Vests";
			special="security";
			camo="SNW";
		};
		class 89th_M52A_CLS_SNW
		{
			model="89th_M52A_Vests";
			special="cls";
			camo="SNW";
		};
		class 89th_M52A_M_SNW
		{
			model="89th_M52A_Vests";
			special="corp";
			camo="SNW";
		};
		class 89th_M52A_RTO_SNW
		{
			model="89th_M52A_Vests";
			special="rto";
			camo="SNW";
		};
		class 89th_M52A_Rifleman_URB
		{
			model="89th_M52A_Vests";
			special="rifle";
			camo="URB";
		};
		class 89th_M52A_TeamLeader_URB
		{
			model="89th_M52A_Vests";
			special="teamlead";
			camo="URB";
		};
		class 89th_M52A_Marksman_URB
		{
			model="89th_M52A_Vests";
			special="marksman";
			camo="URB";
		};
		class 89th_M52A_Assault_URB
		{
			model="89th_M52A_Vests";
			special="assault";
			camo="URB";
		};
		class 89th_M52A_Security_URB
		{
			model="89th_M52A_Vests";
			special="security";
			camo="URB";
		};
		class 89th_M52A_CLS_URB
		{
			model="89th_M52A_Vests";
			special="cls";
			camo="URB";
		};
		class 89th_M52A_M_URB
		{
			model="89th_M52A_Vests";
			special="corp";
			camo="URB";
		};
		class 89th_M52A_RTO_URB
		{
			model="89th_M52A_Vests";
			special="rto";
			camo="URB";
		};
		class 89th_M52A_Rifleman_WDL
		{
			model="89th_M52A_Vests";
			special="rifle";
			camo="WDL";
		};
		class 89th_M52A_TeamLeader_WDL
		{
			model="89th_M52A_Vests";
			special="teamlead";
			camo="WDL";
		};
		class 89th_M52A_Marksman_WDL
		{
			model="89th_M52A_Vests";
			special="marksman";
			camo="WDL";
		};
		class 89th_M52A_Assault_WDL
		{
			model="89th_M52A_Vests";
			special="assault";
			camo="WDL";
		};
		class 89th_M52A_Security_WDL
		{
			model="89th_M52A_Vests";
			special="security";
			camo="WDL";
		};
		class 89th_M52A_CLS_WDL
		{
			model="89th_M52A_Vests";
			special="cls";
			camo="WDL";
		};
		class 89th_M52A_M_WDL
		{
			model="89th_M52A_Vests";
			special="corp";
			camo="WDL";
		};
		class 89th_M52A_RTO_WDL
		{
			model="89th_M52A_Vests";
			special="rto";
			camo="WDL";
		};
		class 89th_M52D_R_ARD
		{
			model="89th_M52D_Vests";
			special="rifle";
			camo="ARD";
		};
		class 89th_M52D_SCT_ARD
		{
			model="89th_M52D_Vests";
			special="scout";
			camo="ARD";
		};
		class 89th_M52D_SNPR_ARD
		{
			model="89th_M52D_Vests";
			special="sniper";
			camo="ARD";
		};
		class 89th_M52D_DEMO_ARD
		{
			model="89th_M52D_Vests";
			special="demo";
			camo="ARD";
		};
		class 89th_M52D_Marksman_ARD
		{
			model="89th_M52D_Vests";
			special="marksman";
			camo="ARD";
		};
		class 89th_M52D_R_DES
		{
			model="89th_M52D_Vests";
			special="rifle";
			camo="DES";
		};
		class 89th_M52D_SCT_DES
		{
			model="89th_M52D_Vests";
			special="scout";
			camo="DES";
		};
		class 89th_M52D_SNPR_DES
		{
			model="89th_M52D_Vests";
			special="sniper";
			camo="DES";
		};
		class 89th_M52D_DEMO_DES
		{
			model="89th_M52D_Vests";
			special="demo";
			camo="DES";
		};
		class 89th_M52D_Marksman_DES
		{
			model="89th_M52D_Vests";
			special="marksman";
			camo="DES";
		};
		class 89th_M52D_R_SNW
		{
			model="89th_M52D_Vests";
			special="rifle";
			camo="SNW";
		};
		class 89th_M52D_SCT_SNW
		{
			model="89th_M52D_Vests";
			special="scout";
			camo="SNW";
		};
		class 89th_M52D_SNPR_SNW
		{
			model="89th_M52D_Vests";
			special="sniper";
			camo="SNW";
		};
		class 89th_M52D_DEMO_SNW
		{
			model="89th_M52D_Vests";
			special="demo";
			camo="SNW";
		};
		class 89th_M52D_Marksman_SNW
		{
			model="89th_M52D_Vests";
			special="marksman";
			camo="SNW";
		};
		class 89th_M52D_R_URB
		{
			model="89th_M52D_Vests";
			special="rifle";
			camo="URB";
		};
		class 89th_M52D_SCT_URB
		{
			model="89th_M52D_Vests";
			special="scout";
			camo="URB";
		};
		class 89th_M52D_SNPR_URB
		{
			model="89th_M52D_Vests";
			special="sniper";
			camo="URB";
		};
		class 89th_M52D_DEMO_URB
		{
			model="89th_M52D_Vests";
			special="demo";
			camo="URB";
		};
		class 89th_M52D_Marksman_URB
		{
			model="89th_M52D_Vests";
			special="marksman";
			camo="URB";
		};
		class 89th_M52D_R_WDL
		{
			model="89th_M52D_Vests";
			special="rifle";
			camo="WDL";
		};
		class 89th_M52D_SCT_WDL
		{
			model="89th_M52D_Vests";
			special="scout";
			camo="WDL";
		};
		class 89th_M52D_SNPR_WDL
		{
			model="89th_M52D_Vests";
			special="sniper";
			camo="WDL";
		};
		class 89th_M52D_DEMO_WDL
		{
			model="89th_M52D_Vests";
			special="demo";
			camo="WDL";
		};
		class 89th_M52D_Marksman_WDL
		{
			model="89th_M52D_Vests";
			special="marksman";
			camo="WDL";
		};
	};
};