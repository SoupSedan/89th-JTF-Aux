class CfgPatches
{
	class 89th_Custom_Flips
	{
		author="Flips";
		requiredAddons[]={};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgWeapons
{
	class H_Watchcap_khk;
	class 89th_woolhat_Flips: H_Watchcap_khk
	{
		author="Flips";
		displayName="Beanie (Flips)";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Flips\89th_woolhat_Flips.paa"
		};
	};
};