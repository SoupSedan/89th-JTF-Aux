class CfgPatches
{
	class OPTRE_89th_UNSC_Vehicles_Drone
	{
		units[]=
		{
			"OPTRE_89th_Recon_Drone",
		};
		weapons[]=
		{

		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Armor_F",
		};
		author="89th Mod Team";
	};
};
class CfgVehicles
{
	class B_UAV_01_F;
	class OPTRE_89th_Recon_Drone: B_UAV_01_F
	{
		author="89th Mod Team";
		dlc="89th JTF";
		displayName="Prototype Compact Recon Drone";
		scope=2;
		side=1;
		faction="89th_JTF";
		extCameraPosition[] = {0,0,-2};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			disassembleTo[]= {"OPTRE_89th_UAVDroneItem"};
		};
		class Eventhandlers
		{
			init="(_this select 0) execVM ""89th_Drones\Functions\drone\fn_89th_recon_drone_placed.sqf""";
		};
	};
}
