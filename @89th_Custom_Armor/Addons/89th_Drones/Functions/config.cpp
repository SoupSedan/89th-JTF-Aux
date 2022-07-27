class CfgPatches
{
	class OPTRE_89th_Functions
	{
		author = "89th Mod Team";
		name = "OPTRE 89th Functions";
		requiredAddons[]=
		{
			"A3_Functions_F"
		};
		requiredVersion = 0.1;
		units[]=
		{

		};
		weapons[]=
		{

		};
	};
};
class cfgFunctions
{
	class OPTRE_89th
	{
		class 89th_Drone
		{
			file="89th_Drones\Functions\drone";
			class 89th_Recon_Drone{};
			class 89th_Recon_Drone_Placed{};
		};
		class 89th_Init
		{
			file="89th_Drones\Functions\init";
			class Init
			{
				PostInit=1;
			};
	};
 };
};
