class cfgPatches
{
	class 89th_Armor_Noncombat
	{
		author="89th Mod Team";
		name="89th JTF Mod";
		units[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
		};
	};
};
class cfgWeapons
{
	class H_Booniehat_khk;
	class OPTRE_UNSC_PatrolCap_Marines;
	class ItemInfo;
		//Boonie Hat
	class 89th_Boonie_WDL: H_Booniehat_khk
	{
		author="Flips"
		displayName="[89th] Boonie Hat (WDL)";
		hiddenSelectionsTextures[]=
		{
		"89th_Armor\Data\Non-Combat\89th_Boonie_WDL.paa"
		};
	};
	class 89th_Boonie_URB: H_Booniehat_khk
	{
		author="Flips"
		displayName="[89th] Boonie Hat (URB)";
		hiddenSelectionsTextures[]=
		{
		"89th_Armor\Data\Non-Combat\89th_Boonie_URB.paa"
		};
	};
	class 89th_Boonie_SNW: H_Booniehat_khk
	{
		author="Flips"
		displayName="[89th] Boonie Hat  (SNW)";
		hiddenSelectionsTextures[]=
		{
		"89th_Armor\Data\Non-Combat\89th_Boonie_SNW.paa"
		};
	};class 89th_Boonie_ARD: H_Booniehat_khk
	{
		author="Flips"
		displayName="[89th] Boonie Hat (ARD)";
		hiddenSelectionsTextures[]=
		{
		"89th_Armor\Data\Non-Combat\89th_Boonie_ARD.paa"
		};
	};
	class 89th_Boonie_DES: H_Booniehat_khk
	{
		author="Flips"
		displayName="[89th] Boonie Hat (DES)";
		hiddenSelectionsTextures[]=
		{
		"89th_Armor\Data\Non-Combat\89th_Boonie_DES.paa"
		};
	};
};
