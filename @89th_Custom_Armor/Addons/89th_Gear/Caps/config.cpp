class cfgPatches
{
	class 89th_Caps_patch
	{
		author="89th Mod Team";
		name="89th JTF Mod";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"89th_Boonie_ARD",
			"89th_Boonie_DES",
			"89th_Boonie_SNW",
			"89th_Boonie_URB",
			"89th_Boonie_WDL"
		};
	};
};
class cfgWeapons
{
	class H_Booniehat_khk;
	class ItemInfo;
	class 89th_Boonie_WDL: H_Booniehat_khk
	{
		author="Flips"
		displayName="[89th] Boonie Hat (WDL)";
		hiddenSelectionsTextures[]=
		{
		"89th_Gear\Caps\89th_Boonie_WDL.paa"
		};
	};
	class 89th_Boonie_URB: H_Booniehat_khk
	{
		author="Flips"
		displayName="[89th] Boonie Hat (URB)";
		hiddenSelectionsTextures[]=
		{
		"89th_Gear\Caps\89th_Boonie_URB.paa"
		};
	};
	class 89th_Boonie_SNW: H_Booniehat_khk
	{
		author="Flips"
		displayName="[89th] Boonie Hat  (SNW)";
		hiddenSelectionsTextures[]=
		{
		"89th_Gear\Caps\89th_Boonie_SNW.paa"
		};
	};class 89th_Boonie_ARD: H_Booniehat_khk
	{
		author="Flips"
		displayName="[89th] Boonie Hat (ARD)";
		hiddenSelectionsTextures[]=
		{
		"89th_Gear\Caps\89th_Boonie_ARD.paa"
		};
	};
	class 89th_Boonie_DES: H_Booniehat_khk
	{
		author="Flips"
		displayName="[89th] Boonie Hat (DES)";
		hiddenSelectionsTextures[]=
		{
		"89th_Gear\Caps\89th_Boonie_DES.paa"
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class 89th_Boonie
		{
			label="[89th] Boonie Hat";
			author="89th Mod Team";
			options[]=
			{
				"camo"
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
		class 89th_8point
		{
			label="[89th] 8-Point Hat";
			author="89th Mod Team";
			options[]=
			{
				"style",
				"camo"
			};
			class style
			{
				label="Style";
				alwaysSelectable=1;
				values[]=
				{
					"stand",
					"corp"
				};
				class stand
				{
					label="Standard";
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
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class 89th_Boonie_ARD
		{
			model="89th_Boonie";
			camo="ARD";
		};
		class 89th_Boonie_DES
		{
			model="89th_Boonie";
			camo="DES";
		};
		class 89th_Boonie_SNW
		{
			model="89th_Boonie";
			camo="SNW";
		};
		class 89th_Boonie_URB
		{
			model="89th_Boonie";
			camo="URB";
		};
		class 89th_Boonie_WDL
		{
			model="89th_Boonie";
			camo="WDL";
		};
		class 89th8point_ARD
		{
			model="89th_8point";
			style="stand";
			camo="ARD";
		};
		class 89th8point_DES
		{
			model="89th_8point";
			style="stand";
			camo="DES";
		};
		class 89th8point_SNW
		{
			model="89th_8point";
			style="stand";
			camo="SNW";
		};
		class 89th8point_URB
		{
			model="89th_8point";
			style="stand";
			camo="URB";
		};
		class 89th8point_WDL
		{
			model="89th_8point";
			style="stand";
			camo="WDL";
		};
		class 89th8point_M_ARD
		{
			model="89th_8point";
			style="corp";
			camo="ARD";
		};
		class 89th8point_M_DES
		{
			model="89th_8point";
			style="corp";
			camo="DES";
		};
		class 89th8point_M_SNW
		{
			model="89th_8point";
			style="corp";
			camo="SNW";
		};
		class 89th8point_M_URB
		{
			model="89th_8point";
			style="corp";
			camo="URB";
		};
		class 89th8point_M_WDL
		{
			model="89th_8point";
			style="corp";
			camo="WDL";
		};
	};
};