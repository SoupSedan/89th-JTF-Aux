class cfgPatches
{
	class 89th_CH252_patches
	{
		author="89th Mod Team";
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"V_FZ_Armor",
		};
	};
};
class cfgWeapons
{
	class VES_CH252D;
	class VES_CH252D_dp;
	class VES_CH252_MAR_Light;
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_MAR_Vacuum_dp;
	class ItemInfo;
	//Open-Faced Helmet
	class 89th_CH252A_Light: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=0;
		author="Tas, Shelly, Edford, Vespade and Smackles";
		displayName="[89th] CH252A Light";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\ARD\89th_CH252A_ARD.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\ARD\89th_CH252A_ARD.paa",
				""
			};
		};
	};
	class 89th_CH252A_M_Light: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=0;
		author="Tas, Jake, Shelly, Vespade and Smackles";
		displayName="[89th] CH252A Light (Medic)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\ARD\89th_CH252A_M_ARD.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\ARD\89th_CH252A_M_ARD.paa",
				""
			};
		};
	};
	//Closed Face Helmet
	class 89th_CH252A: VES_CH252_MAR_VACuum
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)";
		scope=0;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\AR\89th_CH252A.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\AR\89th_CH252A.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_dp: VES_CH252_MAR_VACuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\ARD\89th_CH252A_ARD.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\ARD\89th_CH252A_ARD.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M: VES_CH252_MAR_VACuum
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(Medic)";
		scope=0;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\ARD\89th_CH252A_M_ARD.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\ARD\89th_CH252A_M_ARD.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_M_dp: VES_CH252_MAR_VACuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(Medic)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\ARD\89th_CH252A_M_ARD.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\ARD\89th_CH252A_M_ARD.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	//ODST Helmet
	class 89th_CH252D: VES_CH252D
	{
		dlc="89thJTF";
		scope=0;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Silver)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\ARD\89th_CH252D_ARD.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\ARD\89th_CH252D_ARD.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Silver)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\ARD\89th_CH252D_ARD.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\ARD\89th_CH252D_ARD.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class 89th_CH252A_Helmets
		{
			label="[89th] CH252A";
			author="89th Mod Team";
			options[]=
			{
				"seal",
				"special",
				"camo",
				"color",
				"visor"
				
			};
			class seal
			{
				label="Vaccum Seal";
				alwaysSelectable=1;
				values[]=
				{
					"open",
					"vac"
				};
				class open
				{
					label="Open-faced";
				};
				class vac
				{
					label="Vac Sealed";
				};
			};
			class special
			{
				label="Specialization";
				alwaysSelectable=1;
				values[]=
				{
					"marine",
					"corp",
					"1_1",
					"1_2",
					"1_3",
					"2_1",
					"2_2",
					"2_3"
				};
				class marine
				{
					label="Standard";
					image="89th_Core\Emblems\Anvil.paa";
				};
				class corp
				{
					label="Corpsman";
					image="89th_Core\Emblems\Corpsman.paa";
				};
				class 1_1
				{
					label="1-1";
					image="89th_Core\Emblems\Squads\11.paa";
				};
				class 1_2
				{
					label="1-2";
					image="89th_Core\Emblems\Squads\12.paa";
				};
				class 1_3
				{
					label="1-3";
					image="89th_Core\Emblems\Squads\13.paa";
				};
				class 2_1
				{
					label="2-1";
					image="89th_Core\Emblems\Squads\21.paa";
				};
				class 2_2
				{
					label="2-2";
					image="89th_Core\Emblems\Squads\22.paa";
				};
				class 2_3
				{
					label="2-3";
					image="89th_Core\Emblems\Squads\23.paa";
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
			class color
			{
				label="Visor Color";
				alwaysSelectable=1;
				values[]=
				{
					"blue",
					"silver",
					"gold",
					"black"
				};
				class blue
				{
					label="Blue";
					image="#(rgb,8,8,3)color(0.282,0.298,0.396,1)";
				};
				class silver
				{
					label="Silver";
					image="#(rgb,8,8,3)color(0.600,0.600,0.729,1)";
				}
				class gold
				{
					label="Gold";
					image="#(rgb,8,8,3)color(0.624,0.569,0.467,1)";
				};
				class black
				{
					label="Black";
					image="#(rgb,8,8,3)color(0.220,0.220,0.231,1)";
				};
			};
			class visor
			{
				label="Visor";
				alwaysSelectable=1;
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="On";
				}
				class off
				{
					label="Off";
				};
			};
		};
		class 89th_CH252D_Helmets
		{
			label="[89th] CH252D";
			author="89th Mod Team";
			options[]=
			{
				"camo",
				"color",
				"visor"
				
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
			class color
			{
				label="Visor Color";
				alwaysSelectable=1;
				values[]=
				{
					"blue",
					"silver",
					"gold",
					"black"
				};
				class blue
				{
					label="Blue";
					image="#(rgb,8,8,3)color(0.282,0.298,0.396,1)";
				};
				class silver
				{
					label="Silver";
					image="#(rgb,8,8,3)color(0.600,0.600,0.729,1)";
				}
				class gold
				{
					label="Gold";
					image="#(rgb,8,8,3)color(0.624,0.569,0.467,1)";
				};
				class black
				{
					label="Black";
					image="#(rgb,8,8,3)color(0.220,0.220,0.231,1)";
				};
			};
			class visor
			{
				label="Visor";
				alwaysSelectable=1;
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="On";
				}
				class off
				{
					label="Off";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		//Marine Helmets
		class 89th_CH252A_SLV_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="ARD";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="ARD";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="ARD";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="ARD";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="ARD";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="ARD";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="ARD";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="ARD";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="DES";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="DES";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="DES";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="DES";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="DES";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="DES";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="DES";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="DES";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="SNW";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="SNW";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="SNW";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="SNW";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="SNW";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="SNW";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="SNW";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="SNW";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="URB";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="URB";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="URB";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="URB";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="URB";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="URB";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="URB";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="URB";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="WDL";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="WDL";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="WDL";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="WDL";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="WDL";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="WDL";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="WDL";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="WDL";
			color="black";
			visor="off";
		};
		//Corpsman Helmets
		class 89th_CH252A_M_SLV_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="ARD";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_M_SLV_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="ARD";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_M_GLD_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="ARD";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_M_GLD_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="ARD";
			color="gold";
			visor="off";
		};class 89th_CH252A_M_BLU_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="ARD";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_M_BLU_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="ARD";
			color="blue";
			visor="off";
		};class 89th_CH252A_M_BLK_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="ARD";
			color="black";
			visor="on";
		};
		class 89th_CH252A_M_BLK_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="ARD";
			color="black";
			visor="off";
		};
		class 89th_CH252A_M_SLV_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="DES";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_M_SLV_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="DES";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_M_GLD_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="DES";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_M_GLD_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="DES";
			color="gold";
			visor="off";
		};class 89th_CH252A_M_BLU_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="DES";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_M_BLU_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="DES";
			color="blue";
			visor="off";
		};class 89th_CH252A_M_BLK_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="DES";
			color="black";
			visor="on";
		};
		class 89th_CH252A_M_BLK_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="DES";
			color="black";
			visor="off";
		};
		class 89th_CH252A_M_SLV_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="SNW";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_M_SLV_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="SNW";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_M_GLD_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="SNW";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_M_GLD_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="SNW";
			color="gold";
			visor="off";
		};class 89th_CH252A_M_BLU_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="SNW";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_M_BLU_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="SNW";
			color="blue";
			visor="off";
		};class 89th_CH252A_M_BLK_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="SNW";
			color="black";
			visor="on";
		};
		class 89th_CH252A_M_BLK_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="SNW";
			color="black";
			visor="off";
		};
		class 89th_CH252A_M_SLV_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="URB";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_M_SLV_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="URB";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_M_GLD_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="URB";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_M_GLD_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="URB";
			color="gold";
			visor="off";
		};class 89th_CH252A_M_BLU_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="URB";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_M_BLU_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="URB";
			color="blue";
			visor="off";
		};class 89th_CH252A_M_BLK_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="URB";
			color="black";
			visor="on";
		};
		class 89th_CH252A_M_BLK_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="URB";
			color="black";
			visor="off";
		};
		class 89th_CH252A_M_SLV_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="WDL";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_M_SLV_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="WDL";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_M_GLD_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="WDL";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_M_GLD_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="WDL";
			color="gold";
			visor="off";
		};
		class 89th_CH252A_M_BLU_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="WDL";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_M_BLU_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="WDL";
			color="blue";
			visor="off";
		};
		class 89th_CH252A_M_BLK_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="WDL";
			color="black";
			visor="on";
		};
		class 89th_CH252A_M_BLK_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="WDL";
			color="black";
			visor="off";
		};
		//Marine Light Helmets
		class 89th_CH252A_Light_ARD
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="marine";
			camo="ARD";
		};
		class 89th_CH252A_Light_DES
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="marine";
			camo="DES";
		};
		class 89th_CH252A_Light_SNW
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="marine";
			camo="SNW";
		};
		class 89th_CH252A_Light_URB
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="marine";
			camo="URB";
		};
		class 89th_CH252A_Light_WDL
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="marine";
			camo="WDL";
		};
		//Corpsman Light Helmets
		class 89th_CH252A_M_Light_ARD
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="corp";
			camo="ARD";
		};
		class 89th_CH252A_M_Light_DES
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="corp";
			camo="DES";
		};
		class 89th_CH252A_M_Light_SNW
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="corp";
			camo="SNW";
		};
		class 89th_CH252A_M_Light_URB
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="corp";
			camo="URB";
		};
		class 89th_CH252A_M_Light_WDL
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="corp";
			camo="WDL";
		};
		//ODST Helmets
		class 89th_CH252D_SLV_ARD
		{
			model="89th_CH252D_Helmets";
			camo="ARD";
			color="silver";
			visor="on";
		};
		class 89th_CH252D_SLV_ARD_dp
		{
			model="89th_CH252D_Helmets";
			camo="ARD";
			color="silver";
			visor="off";
		};
		class 89th_CH252D_GLD_ARD
		{
			model="89th_CH252D_Helmets";
			
			camo="ARD";
			color="gold";
			visor="on";
		};
		class 89th_CH252D_GLD_ARD_dp
		{
			model="89th_CH252D_Helmets";
			camo="ARD";
			color="gold";
			visor="off";
		};
		class 89th_CH252D_BLU_ARD
		{
			model="89th_CH252D_Helmets";
			camo="ARD";
			color="blue";
			visor="on";
		};
		class 89th_CH252D_BLU_ARD_dp
		{
			model="89th_CH252D_Helmets";
			camo="ARD";
			color="blue";
			visor="off";
		};
		class 89th_CH252D_BLK_ARD
		{
			model="89th_CH252D_Helmets";
			camo="ARD";
			color="black";
			visor="on";
		};
		class 89th_CH252D_BLK_ARD_dp
		{
			model="89th_CH252D_Helmets";
			camo="ARD";
			color="black";
			visor="off";
		};
		class 89th_CH252D_SLV_DES
		{
			model="89th_CH252D_Helmets";
			camo="DES";
			color="silver";
			visor="on";
		};
		class 89th_CH252D_SLV_DES_dp
		{
			model="89th_CH252D_Helmets";
			camo="DES";
			color="silver";
			visor="off";
		};
		class 89th_CH252D_GLD_DES
		{
			model="89th_CH252D_Helmets";
			
			camo="DES";
			color="gold";
			visor="on";
		};
		class 89th_CH252D_GLD_DES_dp
		{
			model="89th_CH252D_Helmets";
			camo="DES";
			color="gold";
			visor="off";
		};
		class 89th_CH252D_BLU_DES
		{
			model="89th_CH252D_Helmets";
			camo="DES";
			color="blue";
			visor="on";
		};
		class 89th_CH252D_BLU_DES_dp
		{
			model="89th_CH252D_Helmets";
			camo="DES";
			color="blue";
			visor="off";
		};
		class 89th_CH252D_BLK_DES
		{
			model="89th_CH252D_Helmets";
			camo="DES";
			color="black";
			visor="on";
		};
		class 89th_CH252D_BLK_DES_dp
		{
			model="89th_CH252D_Helmets";
			camo="DES";
			color="black";
			visor="off";
		};
		class 89th_CH252D_SLV_SNW
		{
			model="89th_CH252D_Helmets";
			camo="SNW";
			color="silver";
			visor="on";
		};
		class 89th_CH252D_SLV_SNW_dp
		{
			model="89th_CH252D_Helmets";
			camo="SNW";
			color="silver";
			visor="off";
		};
		class 89th_CH252D_GLD_SNW
		{
			model="89th_CH252D_Helmets";
			
			camo="SNW";
			color="gold";
			visor="on";
		};
		class 89th_CH252D_GLD_SNW_dp
		{
			model="89th_CH252D_Helmets";
			camo="SNW";
			color="gold";
			visor="off";
		};
		class 89th_CH252D_BLU_SNW
		{
			model="89th_CH252D_Helmets";
			camo="SNW";
			color="blue";
			visor="on";
		};
		class 89th_CH252D_BLU_SNW_dp
		{
			model="89th_CH252D_Helmets";
			camo="SNW";
			color="blue";
			visor="off";
		};
		class 89th_CH252D_BLK_SNW
		{
			model="89th_CH252D_Helmets";
			camo="SNW";
			color="black";
			visor="on";
		};
		class 89th_CH252D_BLK_SNW_dp
		{
			model="89th_CH252D_Helmets";
			camo="SNW";
			color="black";
			visor="off";
		};
		class 89th_CH252D_SLV_URB
		{
			model="89th_CH252D_Helmets";
			camo="URB";
			color="silver";
			visor="on";
		};
		class 89th_CH252D_SLV_URB_dp
		{
			model="89th_CH252D_Helmets";
			camo="URB";
			color="silver";
			visor="off";
		};
		class 89th_CH252D_GLD_URB
		{
			model="89th_CH252D_Helmets";
			
			camo="URB";
			color="gold";
			visor="on";
		};
		class 89th_CH252D_GLD_URB_dp
		{
			model="89th_CH252D_Helmets";
			camo="URB";
			color="gold";
			visor="off";
		};
		class 89th_CH252D_BLU_URB
		{
			model="89th_CH252D_Helmets";
			camo="URB";
			color="blue";
			visor="on";
		};
		class 89th_CH252D_BLU_URB_dp
		{
			model="89th_CH252D_Helmets";
			camo="URB";
			color="blue";
			visor="off";
		};
		class 89th_CH252D_BLK_URB
		{
			model="89th_CH252D_Helmets";
			camo="URB";
			color="black";
			visor="on";
		};
		class 89th_CH252D_BLK_URB_dp
		{
			model="89th_CH252D_Helmets";
			camo="URB";
			color="black";
			visor="off";
		};
		class 89th_CH252D_SLV_WDL
		{
			model="89th_CH252D_Helmets";
			camo="WDL";
			color="silver";
			visor="on";
		};
		class 89th_CH252D_SLV_WDL_dp
		{
			model="89th_CH252D_Helmets";
			camo="WDL";
			color="silver";
			visor="off";
		};
		class 89th_CH252D_GLD_WDL
		{
			model="89th_CH252D_Helmets";
			
			camo="WDL";
			color="gold";
			visor="on";
		};
		class 89th_CH252D_GLD_WDL_dp
		{
			model="89th_CH252D_Helmets";
			camo="WDL";
			color="gold";
			visor="off";
		};
		class 89th_CH252D_BLU_WDL
		{
			model="89th_CH252D_Helmets";
			camo="WDL";
			color="blue";
			visor="on";
		};
		class 89th_CH252D_BLU_WDL_dp
		{
			model="89th_CH252D_Helmets";
			camo="WDL";
			color="blue";
			visor="off";
		};
		class 89th_CH252D_BLK_WDL
		{
			model="89th_CH252D_Helmets";
			camo="WDL";
			color="black";
			visor="on";
		};
		class 89th_CH252D_BLK_WDL_dp
		{
			model="89th_CH252D_Helmets";
			camo="WDL";
			color="black";
			visor="off";
		};
		//Squad Helmets
					//Vac 11
		class 89th_CH252A_SLV_11_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="ARD";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_11_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="ARD";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_11_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="ARD";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_11_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="ARD";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_11_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="ARD";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_11_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="ARD";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_11_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="ARD";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_11_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="ARD";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_11_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="DES";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_11_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="DES";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_11_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="DES";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_11_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="DES";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_11_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="DES";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_11_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="DES";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_11_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="DES";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_11_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="DES";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_11_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="SNW";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_11_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="SNW";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_11_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="SNW";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_11_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="SNW";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_11_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="SNW";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_11_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="SNW";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_11_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="SNW";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_11_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="SNW";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_11_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="URB";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_11_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="URB";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_11_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="URB";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_11_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="URB";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_11_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="URB";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_11_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="URB";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_11_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="URB";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_11_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="URB";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_11_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="WDL";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_11_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="WDL";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_11_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="WDL";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_11_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="WDL";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_11_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="WDL";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_11_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="WDL";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_11_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="WDL";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_11_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_1";
			camo="WDL";
			color="black";
			visor="off";
		};
			//Open 11
		class 89th_CH252A_Light_11_ARD
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="1_1";
			camo="ARD";
		};
		class 89th_CH252A_Light_11_DES
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="1_1";
			camo="DES";
		};
		class 89th_CH252A_Light_11_SNW
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="1_1";
			camo="SNW";
		};
		class 89th_CH252A_Light_11_URB
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="1_1";
			camo="URB";
		};
		class 89th_CH252A_Light_11_WDL
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="1_1";
			camo="WDL";
		};
					//Vac 12
		class 89th_CH252A_SLV_12_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="ARD";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_12_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="ARD";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_12_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="ARD";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_12_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="ARD";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_12_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="ARD";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_12_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="ARD";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_12_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="ARD";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_12_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="ARD";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_12_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="DES";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_12_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="DES";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_12_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="DES";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_12_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="DES";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_12_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="DES";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_12_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="DES";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_12_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="DES";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_12_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="DES";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_12_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="SNW";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_12_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="SNW";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_12_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="SNW";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_12_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="SNW";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_12_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="SNW";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_12_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="SNW";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_12_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="SNW";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_12_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="SNW";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_12_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="URB";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_12_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="URB";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_12_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="URB";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_12_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="URB";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_12_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="URB";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_12_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="URB";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_12_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="URB";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_12_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="URB";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_12_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="WDL";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_12_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="WDL";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_12_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="WDL";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_12_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="WDL";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_12_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="WDL";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_12_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="WDL";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_12_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="WDL";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_12_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_2";
			camo="WDL";
			color="black";
			visor="off";
		};
			//Open 12
		class 89th_CH252A_Light_12_ARD
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="1_2";
			camo="ARD";
		};
		class 89th_CH252A_Light_12_DES
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="1_2";
			camo="DES";
		};
		class 89th_CH252A_Light_12_SNW
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="1_2";
			camo="SNW";
		};
		class 89th_CH252A_Light_12_URB
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="1_2";
			camo="URB";
		};
		class 89th_CH252A_Light_12_WDL
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="1_2";
			camo="WDL";
		};
					//Vac 13
		class 89th_CH252A_SLV_13_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="ARD";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_13_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="ARD";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_13_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="ARD";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_13_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="ARD";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_13_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="ARD";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_13_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="ARD";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_13_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="ARD";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_13_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="ARD";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_13_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="DES";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_13_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="DES";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_13_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="DES";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_13_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="DES";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_13_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="DES";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_13_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="DES";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_13_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="DES";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_13_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="DES";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_13_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="SNW";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_13_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="SNW";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_13_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="SNW";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_13_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="SNW";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_13_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="SNW";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_13_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="SNW";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_13_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="SNW";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_13_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="SNW";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_13_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="URB";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_13_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="URB";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_13_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="URB";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_13_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="URB";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_13_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="URB";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_13_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="URB";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_13_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="URB";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_13_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="URB";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_13_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="WDL";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_13_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="WDL";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_13_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="WDL";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_13_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="WDL";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_13_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="WDL";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_13_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="WDL";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_13_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="WDL";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_13_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="1_3";
			camo="WDL";
			color="black";
			visor="off";
		};
			//Open 13
		class 89th_CH252A_Light_13_ARD
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="1_3";
			camo="ARD";
		};
		class 89th_CH252A_Light_13_DES
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="1_3";
			camo="DES";
		};
		class 89th_CH252A_Light_13_SNW
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="1_3";
			camo="SNW";
		};
		class 89th_CH252A_Light_13_URB
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="1_3";
			camo="URB";
		};
		class 89th_CH252A_Light_13_WDL
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="1_3";
			camo="WDL";
		};
					//Vac 21
		class 89th_CH252A_SLV_21_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="ARD";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_21_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="ARD";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_21_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="ARD";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_21_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="ARD";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_21_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="ARD";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_21_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="ARD";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_21_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="ARD";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_21_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="ARD";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_21_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="DES";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_21_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="DES";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_21_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="DES";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_21_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="DES";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_21_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="DES";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_21_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="DES";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_21_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="DES";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_21_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="DES";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_21_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="SNW";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_21_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="SNW";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_21_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="SNW";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_21_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="SNW";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_21_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="SNW";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_21_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="SNW";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_21_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="SNW";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_21_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="SNW";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_21_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="URB";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_21_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="URB";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_21_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="URB";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_21_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="URB";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_21_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="URB";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_21_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="URB";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_21_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="URB";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_21_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="URB";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_21_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="WDL";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_21_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="WDL";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_21_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="WDL";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_21_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="WDL";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_21_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="WDL";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_21_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="WDL";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_21_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="WDL";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_21_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_1";
			camo="WDL";
			color="black";
			visor="off";
		};
			//Open 21
		class 89th_CH252A_Light_21_ARD
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="2_1";
			camo="ARD";
		};
		class 89th_CH252A_Light_21_DES
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="2_1";
			camo="DES";
		};
		class 89th_CH252A_Light_21_SNW
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="2_1";
			camo="SNW";
		};
		class 89th_CH252A_Light_21_URB
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="2_1";
			camo="URB";
		};
		class 89th_CH252A_Light_21_WDL
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="2_1";
			camo="WDL";
		};
					//Vac 22
		class 89th_CH252A_SLV_22_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="ARD";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_22_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="ARD";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_22_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="ARD";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_22_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="ARD";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_22_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="ARD";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_22_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="ARD";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_22_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="ARD";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_22_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="ARD";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_22_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="DES";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_22_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="DES";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_22_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="DES";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_22_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="DES";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_22_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="DES";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_22_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="DES";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_22_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="DES";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_22_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="DES";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_22_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="SNW";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_22_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="SNW";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_22_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="SNW";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_22_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="SNW";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_22_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="SNW";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_22_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="SNW";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_22_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="SNW";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_22_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="SNW";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_22_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="URB";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_22_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="URB";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_22_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="URB";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_22_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="URB";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_22_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="URB";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_22_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="URB";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_22_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="URB";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_22_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="URB";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_22_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="WDL";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_22_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="WDL";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_22_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="WDL";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_22_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="WDL";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_22_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="WDL";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_22_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="WDL";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_22_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="WDL";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_22_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_2";
			camo="WDL";
			color="black";
			visor="off";
		};
			//Open 22
		class 89th_CH252A_Light_22_ARD
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="2_2";
			camo="ARD";
		};
		class 89th_CH252A_Light_22_DES
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="2_2";
			camo="DES";
		};
		class 89th_CH252A_Light_22_SNW
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="2_2";
			camo="SNW";
		};
		class 89th_CH252A_Light_22_URB
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="2_2";
			camo="URB";
		};
		class 89th_CH252A_Light_22_WDL
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="2_2";
			camo="WDL";
		};
					//Vac 23
		class 89th_CH252A_SLV_23_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="ARD";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_23_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="ARD";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_23_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="ARD";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_23_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="ARD";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_23_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="ARD";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_23_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="ARD";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_23_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="ARD";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_23_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="ARD";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_23_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="DES";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_23_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="DES";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_23_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="DES";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_23_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="DES";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_23_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="DES";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_23_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="DES";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_23_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="DES";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_23_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="DES";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_23_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="SNW";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_23_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="SNW";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_23_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="SNW";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_23_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="SNW";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_23_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="SNW";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_23_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="SNW";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_23_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="SNW";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_23_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="SNW";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_23_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="URB";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_23_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="URB";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_23_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="URB";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_23_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="URB";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_23_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="URB";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_23_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="URB";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_23_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="URB";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_23_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="URB";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_23_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="WDL";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_23_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="WDL";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_23_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="WDL";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_23_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="WDL";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_23_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="WDL";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_23_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="WDL";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_23_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="WDL";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_23_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="2_3";
			camo="WDL";
			color="black";
			visor="off";
		};
			//Open 23
		class 89th_CH252A_Light_23_ARD
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="2_3";
			camo="ARD";
		};
		class 89th_CH252A_Light_23_DES
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="2_3";
			camo="DES";
		};
		class 89th_CH252A_Light_23_SNW
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="2_3";
			camo="SNW";
		};
		class 89th_CH252A_Light_23_URB
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="2_3";
			camo="URB";
		};
		class 89th_CH252A_Light_23_WDL
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="2_3";
			camo="WDL";
		};
	};
};