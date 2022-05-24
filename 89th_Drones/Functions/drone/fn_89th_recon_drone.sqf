_droneitem = "OPTRE_89th_UAVDroneItem";
_playerItems1 = uniformItems player;
_playerItems2 = vestItems player;
_playerItems3 = backpackItems player;
_playerItems = _playerItems1 + _playerItems2 + _playerItems3;
sleep 0.15;
if ( _droneitem in _playerItems ) then {
	player addAction ["Deploy Compact Recon Drone", {
		_deploydroneid = _this select 2;
		player removeAction _deploydroneid;
		_droneitem = "OPTRE_89th_UAVDroneItem";
		_playerItems1 = uniformItems player;
		_playerItems2 = vestItems player;
		_playerItems3 = backpackItems player;
		_playerItems = _playerItems1 + _playerItems2 + _playerItems3;
		if ( _droneitem in _playerItems ) then {
			player removeItem "OPTRE_89th_UAVDroneItem";
			player playAction "PutDown";
			_drone = createVehicle ["OPTRE_89th_Recon_Drone", position player, [], 0, "NONE"];
			createVehicleCrew _drone;
		};
	}];
};
