class cfgPatches
{
	class 89th_CH252_Hawk
	{
		author="89th Mod Team";
		addonRootClass="89th_CH252_patches";
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"89th_CH252_patches",
			"V_FZ_Armor"
		};
		weapons[]=
		{
			"89th_CH252C_Hawk"
		};
	};
};
class cfgWeapons
{
	class VES_CH252_MAR_Crew;
	class ItemInfo;
	class 89th_CH252C_Hawk: VES_CH252_MAR_Crew
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Vespade";
		displayName="[89th] CH252C (Hawk)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Custom\Hawk\89th_CH252C_Hawk.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Custom\Hawk\89th_CH252C_Hawk.paa",
				""
			};
		};
	};
};