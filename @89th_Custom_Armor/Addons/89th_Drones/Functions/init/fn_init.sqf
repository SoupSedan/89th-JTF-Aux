/*
OPTRE_89th_Fnc_Init

Author: Shelly

Description: Adds Keybinds for Jetpack/Cloaking & Eventhandlers.

Command: Call
Return: Nothing
Syntax: N/A
Parameters:
Media: None

Example1:

Result:

Example2:

Result:

MP: Client, auto run post start
*/

// Time for CBA to Kick in
waitUntil {time > 0};

#include "\a3\editor_f\Data\Scripts\dikCodes.h"



// Drone deployable
player addEventHandler ["InventoryClosed", {
	player ExecVM "89th_Drones\Functions\drone\fn_89th_recon_drone.sqf";
}];

// Prevents SQFs files from being triggered by themselves
sleep 1;
player allowdamage true;
