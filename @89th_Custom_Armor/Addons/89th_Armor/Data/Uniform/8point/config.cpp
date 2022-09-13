class cfgPatches
{
	class 89th_Headgear
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class cfgWeapons 
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem: InventoryItem_Base_F
	{
		allowedSlots[]={901,605};
		type=605
		hiddenSelections[]={};
		hitpointName="HitHead";
	};
	class 89th8point_Base: ItemCore
	{
		author = "Soup,Epsilon";
		scope = 0;
		displayName = "[89th] 8 point";
		model = "89th_Armor\Data\Uniform\8point\MarineCap1.p3d";
		hiddenSelections[]=
		{
			"camo",
		};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "89th_Armor\Data\Uniform\8point\MarineCap1.p3d";
			hiddenSelections[]=
			{
				"camo",
			};
			class HitpointsProtectionInfo
			{
				class HeadgearItem
				{
					hitpointName = "HitHead";
					armor = 1.5; // addition to armor of referenced hitpoint
					passThrough	= 0.8; // multiplier of base passThrough defined in referenced hitpoint
				};
			};
		};
	};
	class 89th8point_URB: 89th8point_Base
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Epsilon, Flips";
		displayName="[89th] 8 Point  (URB)";
		hiddenSelectionsTextures[]=
		{
		"89th_Armor\Data\Uniform\8point\MarineCap1_URB.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Uniform\8point\MarineCap1_URB.paa",
			};
		};
	};
	class 89th8point_WDL: 89th8point_Base
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Epsilon, Flips";
		displayName="[89th] 8 Point  (WDL)";
		hiddenSelectionsTextures[]=
		{
		"89th_Armor\Data\Uniform\8point\MarineCap1_WDL.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Uniform\8point\MarineCap1_WDL.paa",
			};
		};
	};
	class 89th8point_SNW: 89th8point_Base
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Epsilon, Flips";
		displayName="[89th] 8 Point  (SNW)";
		hiddenSelectionsTextures[]=
		{
		"89th_Armor\Data\Uniform\8point\MarineCap1_SNW.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Uniform\8point\MarineCap1_SNW.paa",
			};
		};
	};
	class 89th8point_ARD: 89th8point_Base
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Epsilon, Flips";
		displayName="[89th] 8 Point  (ARD)";
		hiddenSelectionsTextures[]=
		{
		"89th_Armor\Data\Uniform\8point\MarineCap1_ARD.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Uniform\8point\MarineCap1_ARD.paa",
			};
		};
	};
	class 89th8point_DES: 89th8point_Base
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Epsilon, Flips";
		displayName="[89th] 8 Point  (DES)";
		hiddenSelectionsTextures[]=
		{
		"89th_Armor\Data\Uniform\8point\MarineCap1_DES.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Uniform\8point\MarineCap1_DES.paa",
			};
		};
	};
	class 89th8point_M_Base: 89th8point_Base
	{
		author = "Soup, Epsilon, Flips";
		displayName = "[89th] 8 point Medic";
		model = "89th_Armor\Data\Uniform\8point\MarineCap1_M.p3d";
		hiddenSelections[]=
		{
			"camo",
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "89th_Armor\Data\Uniform\8point\MarineCap1_M.p3d";
			hiddenSelections[]=
			{
				"camo",
			};
		};
	};
	class 89th8point_M_URB: 89th8point_M_Base
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Epsilon, Flips";
		displayName="[89th] 8 Point (Medic)(URB)";
		hiddenSelectionsTextures[]=
		{
		"89th_Armor\Data\Uniform\8point\MarineCap1_M_URB.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Uniform\8point\MarineCap1_M_URB.paa",
			};
		};
	};
	class 89th8point_M_WDL: 89th8point_M_Base
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Epsilon, Flips";
		displayName="[89th] 8 Point (Medic)(WDL)";
		hiddenSelectionsTextures[]=
		{
		"89th_Armor\Data\Uniform\8point\MarineCap1_M_WDL.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Uniform\8point\MarineCap1_M_WDL.paa",
			};
		};
	};
	class 89th8point_M_SNW: 89th8point_M_Base
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Epsilon, Flips";
		displayName="[89th] 8 Point (Medic)(SNW)";
		hiddenSelectionsTextures[]=
		{
		"89th_Armor\Data\Uniform\8point\MarineCap1_M_SNW.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Uniform\8point\MarineCap1_M_SNW.paa",
			};
		};
	};
	class 89th8point_M_ARD: 89th8point_M_Base
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Epsilon, Flips";
		displayName="[89th] 8 Point (Medic)(ARD)";
		hiddenSelectionsTextures[]=
		{
		"89th_Armor\Data\Uniform\8point\MarineCap1_M_ARD.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Uniform\8point\MarineCap1_M_ARD.paa",
			};
		};
	};
	class 89th8point_M_DES: 89th8point_M_Base
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Epsilon, Flips";
		displayName="[89th] 8 Point (Medic)(DES)";
		hiddenSelectionsTextures[]=
		{
		"89th_Armor\Data\Uniform\8point\MarineCap1_M_DES.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Uniform\8point\MarineCap1_M_DES.paa",
			};
		};
	};
};