class cfgPatches
{
	class OPTRE_89th_UNSC_Units
	{
		units[]=
		{

		};
		weapons[]=
		{
			"OPTRE_89th_UAVDroneItem"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Weapons_F"
		};
		author="89th Mod Team";
	};
};
class cfgWeapons
{
	class ItemCore;
	class ToolKitItem;
	class OPTRE_89th_UAVDroneItem: ItemCore
	{
		dlc="OPTRE 89th";
		scope=2;
		author="89th Mod Team";
		displayName="UNSC Prototype Compact Deployable UAV";
		descriptionShort="Compact Deployable UAV";
		picture="\A3\Drones_F\Air_F_Gamma\UAV_01\Data\UI\UAV_01_CA.paa";
		model="\A3\Drones_F\Air_F_Gamma\UAV_01\UAV_01_F.p3d";
		class ItemInfo: ToolKitItem
		{
			mass=50;
			uniformModel="\A3\Weapons_F\Items\Toolkit";
		};
	};
};
