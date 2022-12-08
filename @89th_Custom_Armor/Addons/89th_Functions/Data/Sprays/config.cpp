class CfgPatches
{
	class 89th_Sprays_patch
	{
		author="89th Mod Team";
		name="A2D: Fireteam Zulu";
		requiredVersion=1;
		requiredAddons[]=
		{
			"89th_Core"
		};
	};
};
class CfgWeapons
{
	class ACE_SpraypaintBlack;
	class 89th_Spraycan: ACE_SpraypaintBlack
	{
		dlc="89thJTF";
		author="89th Mod Team";
		displayName="89th Spraycan";
	};
};
class ACE_Tags
{
	class 89th1_2
	{
		displayName="1-2";
		requiredItem="89th_Spraycan";
		textures[]=
		{
			"89th_Functions\Data\Sprays\1_2_ca"
		};
		icon="89th_Functions\Data\Sprays\1_2_ca";
	};
	class 89th1_3
	{
		displayName="1-3";
		requiredItem="89th_Spraycan";
		textures[]=
		{
			"89th_Functions\Data\Sprays\1_3_ca"
		};
		icon="89th_Functions\Data\Sprays\1_3_ca";
	};
	class 89thAnvil
	{
		displayName="Anvil";
		requiredItem="89th_Spraycan";
		textures[]=
		{
			"89th_Functions\Data\Sprays\Anvil_ca"
		};
		icon="89th_Functions\Data\Sprays\Anvil_ca";
	};
	class 89thGoliath
	{
		displayName="Goliath";
		requiredItem="89th_Spraycan";
		textures[]=
		{
			"89th_Functions\Data\Sprays\Goliath_Spray_ca"
		};
		icon="89th_Functions\Data\Sprays\Goliath_Spray_ca";
	};
	class 89thMonker
	{
		displayName="Monker";
		requiredItem="89th_Spraycan";
		textures[]=
		{
			"89th_Functions\Data\Sprays\monker_ca"
		};
		icon="89th_Functions\Data\Sprays\1_2_ca";
	};
};