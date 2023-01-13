class cfgPatches
{
	class 89th_Armor_Custom
	{
		author="89th Mod Team";
		name="89th JTF Mod";
		units[]={};
		weapons[]={};
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
	class OPTRE_UNSC_M52D_Armor_Light;
	class ItemInfo;
	class VestItem;
	//Vest
	class 89th_M52D_Joker: OPTRE_UNSC_M52D_Armor_Light
    {
        dlc="89thJTF";
        author="Nikkolas, Article 2 Studios";
        displayName="[89th] M52D (Joker)";
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\M52_Custom\Joker\vest_odst_jkr_co.paa",
            "89th_Gear\M52_Custom\Joker\armor_odst_jkr_co.paa",
            "89th_Gear\M52_Custom\Joker\legs_odst_jkr_co.paa",
            "89th_Gear\M52_Custom\Joker\ghillie_woodland_co.paa",
            "89th_Gear\M52_Custom\Joker\odst_armor_jkr_co.paa"
        };
        class ItemInfo: VestItem
        {
            mass=75;
            containerClass="Supply250";
            uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
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
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTLeft",
                "AS_ODSTRight",
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
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
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
};