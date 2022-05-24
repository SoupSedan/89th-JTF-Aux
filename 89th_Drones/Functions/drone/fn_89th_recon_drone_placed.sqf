[_this, ["Pack Compact Recon Drone", {
	_placed = _this select 0;
	_caller = _this select 1;
	deleteVehicle _placed;
	_caller playAction "PutDown";
	if (_caller canAddItemToBackpack "OPTRE_89th_UAVDroneItem") then {
		_caller addItemToBackpack "OPTRE_89th_UAVDroneItem";
	} else {
		_holder = createVehicle ["GroundWeaponHolder", position player, [], 0, "CAN_COLLIDE"];
		_holder addItemCargoGlobal ["OPTRE_89th_UAVDroneItem", 1];
	};
}, [], 2, false, true, "", "true", 3]] remoteExec ["addAction", 2];
