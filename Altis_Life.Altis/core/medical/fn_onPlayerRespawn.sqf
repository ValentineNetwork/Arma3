/*
	File: fn_onPlayerRespawn.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Does something but I won't know till I write it...
*/
private["_unit","_corpse"];
_unit = _this select 0;
_corpse = _this select 1;
life_corpse = _corpse;
systemChat format["Entity: %1 | Player: %2",_corpse,_unit];

//Set some vars on our new body.
_unit setVariable["restrained",FALSE,TRUE];
_unit setVariable["Escorting",FALSE,TRUE];
_unit setVariable["transporting",FALSE,TRUE]; //Again why the fuck am I setting this? Can anyone tell me?

//Bad boy
if(life_is_arrested) then {
	hint localize "STR_Jail_Suicide";
	life_is_arrested = false;
	[_unit,TRUE] spawn life_fnc_jail;
};

//Load our gear as a cop incase something horrible happens
if(playerSide == west) then {
	[] spawn life_fnc_loadGear;
};

_unit addRating 9999999999999999; //Set our rating to a high value, this is for a ARMA engine thing.
player playMoveNow "amovppnemstpsraswrfldnon";