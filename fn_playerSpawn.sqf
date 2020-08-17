//fn_playerSpawn

scopeName "main";
private ["_Player", "_markers", "_numOfMarkers"];


_player = param[0];

_markers = allMapMarkers;
_numOfMarkers = count _markers;

removeAllWeapons _player;

_player addAction ["Do Damage", "[(_this select 0)] call Slim_fnc_doDamage;"];

_player addAction ["Do Heal", "[(_this select 0)] call Slim_fnc_heal;"];

_player addAction ["Gun Shop", "[] spawn Slim_fnc_showGunShopDialog;"]; //Gun Shop GUI

while {countDown > -1} do{
	hint str(countDown);
	sleep 1;
}