// initPlayerLocal.sqf
// File locally calls the players information with two arguments; object number, and did they join in progress

_unit = _this select 0;
_isJIP = _this select 1;

if (! _isJIP) then
{
	[_unit] call Slim_fnc_playerSpawn;
};

if (_isJIP) then
{
	hint "Why are you so late?";
};