class cfgPatches
{
	class 89th_Commopack_patch
	{
		author="89th Mod Team";
		name="89th JTF Mod";
		units[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core"
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
		maximumLoad=520;
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
		dlc="89thJTF";
		author="89th JTF Mod Team";
		displayName="[89th] Rucksack LR WDL";
		picture="\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		maximumLoad=520;
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
			"89th_Gear\Commopack\Commopack_WDL.paa"
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
		dlc="89thJTF";
		author="89th JTF Mod Team";
		displayName="[89th] Rucksack LR URB";
		picture="\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		maximumLoad=520;
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
			"89th_Gear\Commopack\Commopack_URB.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
	class Ruck_LR4: OPTRE_UNSC_Rucksack
	{
		dlc="89thJTF";
		author="Flips";
		displayName="[89th] Rucksack LR ARD";
		picture="\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		maximumLoad=520;
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
			"89th_Gear\Commopack\Commopack_ARD.paa"
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
		dlc="89thJTF";
		author="89th JTF Mod Team";
		displayName="[89th] Rucksack LR DES";
		picture="\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		maximumLoad=520;
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
			"89th_Gear\Commopack\Commopack_DES.paa"
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
		dlc="89thJTF";
		author="89th JTF Mod Team";
		displayName="[89th] Rucksack LR SNW";
		picture="\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		maximumLoad=520;
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
			"89th_Gear\Commopack\Commopack_SNW.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
};
