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
				"AS_LargeLeft",
				"\\ ""AS_LargeRight""",
				"\\ ""AS_MediumLeft""",
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
				"AS_LargeLeft",
				"AS_LargeRight",
				"\\ ""AS_MediumLeft""",
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
				"squad",
				"special",
				"camo"
			};
			class squad
			{
				label="Squads";
				alwaysSelectable=1;
				values[]=
				{
					"marine",
					"1_1",
					"1_2",
					"1_3",
					"2_1",
					"2_2",
					"2_3"
				};
				class marine
				{
					label="Standard";
					image="89th_Core\Emblems\Anvil.paa";
				};
				class 1_1
				{
					label="1-1";
					image="89th_Core\Emblems\Squads\11.paa";
				};
				class 1_2
				{
					label="1-2";
					image="89th_Core\Emblems\Squads\12.paa";
				};
				class 1_3
				{
					label="1-3";
					image="89th_Core\Emblems\Squads\13.paa";
				};
				class 2_1
				{
					label="2-1";
					image="89th_Core\Emblems\Squads\21.paa";
				};
				class 2_2
				{
					label="2-2";
					image="89th_Core\Emblems\Squads\22.paa";
				};
				class 2_3
				{
					label="2-3";
					image="89th_Core\Emblems\Squads\23.paa";
				};
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
					"corp"
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
			squad="marine";
			special="rifle";
			camo="ARD";
		};
		class 89th_M52A_TeamLeader_ARD
		{
			model="89th_M52A_Vests";
			squad="marine";
			special="teamlead";
			camo="ARD";
		};
		class 89th_M52A_Marksman_ARD
		{
			model="89th_M52A_Vests";
			squad="marine";
			special="marksman";
			camo="ARD";
		};
		class 89th_M52A_Assault_ARD
		{
			model="89th_M52A_Vests";
			squad="marine";
			special="assault";
			camo="ARD";
		};
		class 89th_M52A_Security_ARD
		{
			model="89th_M52A_Vests";
			squad="marine";
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
		class 89th_M52A_Rifleman_DES
		{
			model="89th_M52A_Vests";
			squad="marine";
			special="rifle";
			camo="DES";
		};
		class 89th_M52A_TeamLeader_DES
		{
			model="89th_M52A_Vests";
			squad="marine";
			special="teamlead";
			camo="DES";
		};
		class 89th_M52A_Marksman_DES
		{
			model="89th_M52A_Vests";
			squad="marine";
			special="marksman";
			camo="DES";
		};
		class 89th_M52A_Assault_DES
		{
			model="89th_M52A_Vests";
			squad="marine";
			special="assault";
			camo="DES";
		};
		class 89th_M52A_Security_DES
		{
			model="89th_M52A_Vests";
			squad="marine";
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
		class 89th_M52A_Rifleman_SNW
		{
			model="89th_M52A_Vests";
			squad="marine";
			special="rifle";
			camo="SNW";
		};
		class 89th_M52A_TeamLeader_SNW
		{
			model="89th_M52A_Vests";
			squad="marine";
			special="teamlead";
			camo="SNW";
		};
		class 89th_M52A_Marksman_SNW
		{
			model="89th_M52A_Vests";
			squad="marine";
			special="marksman";
			camo="SNW";
		};
		class 89th_M52A_Assault_SNW
		{
			model="89th_M52A_Vests";
			squad="marine";
			special="assault";
			camo="SNW";
		};
		class 89th_M52A_Security_SNW
		{
			model="89th_M52A_Vests";
			squad="marine";
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
		class 89th_M52A_Rifleman_URB
		{
			model="89th_M52A_Vests";
			squad="marine";
			special="rifle";
			camo="URB";
		};
		class 89th_M52A_TeamLeader_URB
		{
			model="89th_M52A_Vests";
			squad="marine";
			special="teamlead";
			camo="URB";
		};
		class 89th_M52A_Marksman_URB
		{
			model="89th_M52A_Vests";
			squad="marine";
			special="marksman";
			camo="URB";
		};
		class 89th_M52A_Assault_URB
		{
			model="89th_M52A_Vests";
			squad="marine";
			special="assault";
			camo="URB";
		};
		class 89th_M52A_Security_URB
		{
			model="89th_M52A_Vests";
			squad="marine";
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
		class 89th_M52A_Rifleman_WDL
		{
			model="89th_M52A_Vests";
			squad="marine";
			special="rifle";
			camo="WDL";
		};
		class 89th_M52A_TeamLeader_WDL
		{
			model="89th_M52A_Vests";
			squad="marine";
			special="teamlead";
			camo="WDL";
		};
		class 89th_M52A_Marksman_WDL
		{
			model="89th_M52A_Vests";
			squad="marine";
			special="marksman";
			camo="WDL";
		};
		class 89th_M52A_Assault_WDL
		{
			model="89th_M52A_Vests";
			squad="marine";
			special="assault";
			camo="WDL";
		};
		class 89th_M52A_Security_WDL
		{
			model="89th_M52A_Vests";
			squad="marine";
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
		//Squad Vests
		class 89th_M52A_Rifleman_11_ARD
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="rifle";
			camo="ARD";
		};
		class 89th_M52A_TeamLeader_11_ARD
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="teamlead";
			camo="ARD";
		};
		class 89th_M52A_Marksman_11_ARD
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="marksman";
			camo="ARD";
		};
		class 89th_M52A_Assault_11_ARD
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="assault";
			camo="ARD";
		};
		class 89th_M52A_Security_11_ARD
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="security";
			camo="ARD";
		};
		class 89th_M52A_Rifleman_11_DES
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="rifle";
			camo="DES";
		};
		class 89th_M52A_TeamLeader_11_DES
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="teamlead";
			camo="DES";
		};
		class 89th_M52A_Marksman_11_DES
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="marksman";
			camo="DES";
		};
		class 89th_M52A_Assault_11_DES
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="assault";
			camo="DES";
		};
		class 89th_M52A_Security_11_DES
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="security";
			camo="DES";
		};
		class 89th_M52A_Rifleman_11_SNW
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="rifle";
			camo="SNW";
		};
		class 89th_M52A_TeamLeader_11_SNW
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="teamlead";
			camo="SNW";
		};
		class 89th_M52A_Marksman_11_SNW
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="marksman";
			camo="SNW";
		};
		class 89th_M52A_Assault_11_SNW
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="assault";
			camo="SNW";
		};
		class 89th_M52A_Security_11_SNW
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="security";
			camo="SNW";
		};
		class 89th_M52A_Rifleman_11_URB
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="rifle";
			camo="URB";
		};
		class 89th_M52A_TeamLeader_11_URB
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="teamlead";
			camo="URB";
		};
		class 89th_M52A_Marksman_11_URB
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="marksman";
			camo="URB";
		};
		class 89th_M52A_Assault_11_URB
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="assault";
			camo="URB";
		};
		class 89th_M52A_Security_11_URB
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="security";
			camo="URB";
		};
		class 89th_M52A_Rifleman_11_WDL
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="rifle";
			camo="WDL";
		};
		class 89th_M52A_TeamLeader_11_WDL
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="teamlead";
			camo="WDL";
		};
		class 89th_M52A_Marksman_11_WDL
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="marksman";
			camo="WDL";
		};
		class 89th_M52A_Assault_11_WDL
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="assault";
			camo="WDL";
		};
		class 89th_M52A_Security_11_WDL
		{
			model="89th_M52A_Vests";
			squad="1_1";
			special="security";
			camo="WDL";
		};
		class 89th_M52A_Rifleman_12_ARD
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="rifle";
			camo="ARD";
		};
		class 89th_M52A_TeamLeader_12_ARD
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="teamlead";
			camo="ARD";
		};
		class 89th_M52A_Marksman_12_ARD
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="marksman";
			camo="ARD";
		};
		class 89th_M52A_Assault_12_ARD
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="assault";
			camo="ARD";
		};
		class 89th_M52A_Security_12_ARD
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="security";
			camo="ARD";
		};
		class 89th_M52A_Rifleman_12_DES
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="rifle";
			camo="DES";
		};
		class 89th_M52A_TeamLeader_12_DES
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="teamlead";
			camo="DES";
		};
		class 89th_M52A_Marksman_12_DES
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="marksman";
			camo="DES";
		};
		class 89th_M52A_Assault_12_DES
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="assault";
			camo="DES";
		};
		class 89th_M52A_Security_12_DES
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="security";
			camo="DES";
		};
		class 89th_M52A_Rifleman_12_SNW
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="rifle";
			camo="SNW";
		};
		class 89th_M52A_TeamLeader_12_SNW
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="teamlead";
			camo="SNW";
		};
		class 89th_M52A_Marksman_12_SNW
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="marksman";
			camo="SNW";
		};
		class 89th_M52A_Assault_12_SNW
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="assault";
			camo="SNW";
		};
		class 89th_M52A_Security_12_SNW
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="security";
			camo="SNW";
		};
		class 89th_M52A_Rifleman_12_URB
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="rifle";
			camo="URB";
		};
		class 89th_M52A_TeamLeader_12_URB
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="teamlead";
			camo="URB";
		};
		class 89th_M52A_Marksman_12_URB
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="marksman";
			camo="URB";
		};
		class 89th_M52A_Assault_12_URB
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="assault";
			camo="URB";
		};
		class 89th_M52A_Security_12_URB
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="security";
			camo="URB";
		};
		class 89th_M52A_Rifleman_12_WDL
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="rifle";
			camo="WDL";
		};
		class 89th_M52A_TeamLeader_12_WDL
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="teamlead";
			camo="WDL";
		};
		class 89th_M52A_Marksman_12_WDL
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="marksman";
			camo="WDL";
		};
		class 89th_M52A_Assault_12_WDL
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="assault";
			camo="WDL";
		};
		class 89th_M52A_Security_12_WDL
		{
			model="89th_M52A_Vests";
			squad="1_2";
			special="security";
			camo="WDL";
		};
		class 89th_M52A_Rifleman_13_ARD
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="rifle";
			camo="ARD";
		};
		class 89th_M52A_TeamLeader_13_ARD
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="teamlead";
			camo="ARD";
		};
		class 89th_M52A_Marksman_13_ARD
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="marksman";
			camo="ARD";
		};
		class 89th_M52A_Assault_13_ARD
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="assault";
			camo="ARD";
		};
		class 89th_M52A_Security_13_ARD
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="security";
			camo="ARD";
		};
		class 89th_M52A_Rifleman_13_DES
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="rifle";
			camo="DES";
		};
		class 89th_M52A_TeamLeader_13_DES
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="teamlead";
			camo="DES";
		};
		class 89th_M52A_Marksman_13_DES
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="marksman";
			camo="DES";
		};
		class 89th_M52A_Assault_13_DES
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="assault";
			camo="DES";
		};
		class 89th_M52A_Security_13_DES
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="security";
			camo="DES";
		};
		class 89th_M52A_Rifleman_13_SNW
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="rifle";
			camo="SNW";
		};
		class 89th_M52A_TeamLeader_13_SNW
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="teamlead";
			camo="SNW";
		};
		class 89th_M52A_Marksman_13_SNW
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="marksman";
			camo="SNW";
		};
		class 89th_M52A_Assault_13_SNW
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="assault";
			camo="SNW";
		};
		class 89th_M52A_Security_13_SNW
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="security";
			camo="SNW";
		};
		class 89th_M52A_Rifleman_13_URB
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="rifle";
			camo="URB";
		};
		class 89th_M52A_TeamLeader_13_URB
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="teamlead";
			camo="URB";
		};
		class 89th_M52A_Marksman_13_URB
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="marksman";
			camo="URB";
		};
		class 89th_M52A_Assault_13_URB
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="assault";
			camo="URB";
		};
		class 89th_M52A_Security_13_URB
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="security";
			camo="URB";
		};
		class 89th_M52A_Rifleman_13_WDL
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="rifle";
			camo="WDL";
		};
		class 89th_M52A_TeamLeader_13_WDL
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="teamlead";
			camo="WDL";
		};
		class 89th_M52A_Marksman_13_WDL
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="marksman";
			camo="WDL";
		};
		class 89th_M52A_Assault_13_WDL
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="assault";
			camo="WDL";
		};
		class 89th_M52A_Security_13_WDL
		{
			model="89th_M52A_Vests";
			squad="1_3";
			special="security";
			camo="WDL";
		};
		class 89th_M52A_Rifleman_21_ARD
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="rifle";
			camo="ARD";
		};
		class 89th_M52A_TeamLeader_21_ARD
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="teamlead";
			camo="ARD";
		};
		class 89th_M52A_Marksman_21_ARD
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="marksman";
			camo="ARD";
		};
		class 89th_M52A_Assault_21_ARD
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="assault";
			camo="ARD";
		};
		class 89th_M52A_Security_21_ARD
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="security";
			camo="ARD";
		};
		class 89th_M52A_Rifleman_21_DES
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="rifle";
			camo="DES";
		};
		class 89th_M52A_TeamLeader_21_DES
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="teamlead";
			camo="DES";
		};
		class 89th_M52A_Marksman_21_DES
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="marksman";
			camo="DES";
		};
		class 89th_M52A_Assault_21_DES
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="assault";
			camo="DES";
		};
		class 89th_M52A_Security_21_DES
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="security";
			camo="DES";
		};
		class 89th_M52A_Rifleman_21_SNW
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="rifle";
			camo="SNW";
		};
		class 89th_M52A_TeamLeader_21_SNW
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="teamlead";
			camo="SNW";
		};
		class 89th_M52A_Marksman_21_SNW
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="marksman";
			camo="SNW";
		};
		class 89th_M52A_Assault_21_SNW
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="assault";
			camo="SNW";
		};
		class 89th_M52A_Security_21_SNW
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="security";
			camo="SNW";
		};
		class 89th_M52A_Rifleman_21_URB
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="rifle";
			camo="URB";
		};
		class 89th_M52A_TeamLeader_21_URB
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="teamlead";
			camo="URB";
		};
		class 89th_M52A_Marksman_21_URB
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="marksman";
			camo="URB";
		};
		class 89th_M52A_Assault_21_URB
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="assault";
			camo="URB";
		};
		class 89th_M52A_Security_21_URB
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="security";
			camo="URB";
		};
		class 89th_M52A_Rifleman_21_WDL
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="rifle";
			camo="WDL";
		};
		class 89th_M52A_TeamLeader_21_WDL
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="teamlead";
			camo="WDL";
		};
		class 89th_M52A_Marksman_21_WDL
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="marksman";
			camo="WDL";
		};
		class 89th_M52A_Assault_21_WDL
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="assault";
			camo="WDL";
		};
		class 89th_M52A_Security_21_WDL
		{
			model="89th_M52A_Vests";
			squad="2_1";
			special="security";
			camo="WDL";
		};
		class 89th_M52A_Rifleman_22_ARD
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="rifle";
			camo="ARD";
		};
		class 89th_M52A_TeamLeader_22_ARD
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="teamlead";
			camo="ARD";
		};
		class 89th_M52A_Marksman_22_ARD
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="marksman";
			camo="ARD";
		};
		class 89th_M52A_Assault_22_ARD
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="assault";
			camo="ARD";
		};
		class 89th_M52A_Security_22_ARD
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="security";
			camo="ARD";
		};
		class 89th_M52A_Rifleman_22_DES
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="rifle";
			camo="DES";
		};
		class 89th_M52A_TeamLeader_22_DES
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="teamlead";
			camo="DES";
		};
		class 89th_M52A_Marksman_22_DES
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="marksman";
			camo="DES";
		};
		class 89th_M52A_Assault_22_DES
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="assault";
			camo="DES";
		};
		class 89th_M52A_Security_22_DES
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="security";
			camo="DES";
		};
		class 89th_M52A_Rifleman_22_SNW
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="rifle";
			camo="SNW";
		};
		class 89th_M52A_TeamLeader_22_SNW
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="teamlead";
			camo="SNW";
		};
		class 89th_M52A_Marksman_22_SNW
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="marksman";
			camo="SNW";
		};
		class 89th_M52A_Assault_22_SNW
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="assault";
			camo="SNW";
		};
		class 89th_M52A_Security_22_SNW
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="security";
			camo="SNW";
		};
		class 89th_M52A_Rifleman_22_URB
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="rifle";
			camo="URB";
		};
		class 89th_M52A_TeamLeader_22_URB
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="teamlead";
			camo="URB";
		};
		class 89th_M52A_Marksman_22_URB
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="marksman";
			camo="URB";
		};
		class 89th_M52A_Assault_22_URB
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="assault";
			camo="URB";
		};
		class 89th_M52A_Security_22_URB
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="security";
			camo="URB";
		};
		class 89th_M52A_Rifleman_22_WDL
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="rifle";
			camo="WDL";
		};
		class 89th_M52A_TeamLeader_22_WDL
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="teamlead";
			camo="WDL";
		};
		class 89th_M52A_Marksman_22_WDL
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="marksman";
			camo="WDL";
		};
		class 89th_M52A_Assault_22_WDL
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="assault";
			camo="WDL";
		};
		class 89th_M52A_Security_22_WDL
		{
			model="89th_M52A_Vests";
			squad="2_2";
			special="security";
			camo="WDL";
		};
		class 89th_M52A_Rifleman_23_ARD
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="rifle";
			camo="ARD";
		};
		class 89th_M52A_TeamLeader_23_ARD
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="teamlead";
			camo="ARD";
		};
		class 89th_M52A_Marksman_23_ARD
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="marksman";
			camo="ARD";
		};
		class 89th_M52A_Assault_23_ARD
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="assault";
			camo="ARD";
		};
		class 89th_M52A_Security_23_ARD
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="security";
			camo="ARD";
		};
		class 89th_M52A_Rifleman_23_DES
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="rifle";
			camo="DES";
		};
		class 89th_M52A_TeamLeader_23_DES
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="teamlead";
			camo="DES";
		};
		class 89th_M52A_Marksman_23_DES
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="marksman";
			camo="DES";
		};
		class 89th_M52A_Assault_23_DES
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="assault";
			camo="DES";
		};
		class 89th_M52A_Security_23_DES
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="security";
			camo="DES";
		};
		class 89th_M52A_Rifleman_23_SNW
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="rifle";
			camo="SNW";
		};
		class 89th_M52A_TeamLeader_23_SNW
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="teamlead";
			camo="SNW";
		};
		class 89th_M52A_Marksman_23_SNW
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="marksman";
			camo="SNW";
		};
		class 89th_M52A_Assault_23_SNW
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="assault";
			camo="SNW";
		};
		class 89th_M52A_Security_23_SNW
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="security";
			camo="SNW";
		};
		class 89th_M52A_Rifleman_23_URB
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="rifle";
			camo="URB";
		};
		class 89th_M52A_TeamLeader_23_URB
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="teamlead";
			camo="URB";
		};
		class 89th_M52A_Marksman_23_URB
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="marksman";
			camo="URB";
		};
		class 89th_M52A_Assault_23_URB
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="assault";
			camo="URB";
		};
		class 89th_M52A_Security_23_URB
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="security";
			camo="URB";
		};
		class 89th_M52A_Rifleman_23_WDL
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="rifle";
			camo="WDL";
		};
		class 89th_M52A_TeamLeader_23_WDL
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="teamlead";
			camo="WDL";
		};
		class 89th_M52A_Marksman_23_WDL
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="marksman";
			camo="WDL";
		};
		class 89th_M52A_Assault_23_WDL
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="assault";
			camo="WDL";
		};
		class 89th_M52A_Security_23_WDL
		{
			model="89th_M52A_Vests";
			squad="2_3";
			special="security";
			camo="WDL";
		};
	};
};
