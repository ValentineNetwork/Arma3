/*
	File: fn_copDefault.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Default cop configuration.
*/
//Strip the player down
RemoveAllWeapons player;
{player removeMagazine _x;} foreach (magazines player);
removeUniform player;
removeVest player;
removeBackpack player;
removeGoggles player;
removeHeadGear player;
{
	player unassignItem _x;
	player removeItem _x;
} foreach (assignedItems player);

//Load player with default rebel gear.
player addUniform "U_O_SpecopsUniform_ocamo";
player addVest "V_HarnessOGL_brn";
player addMagazine "9Rnd_45ACP_Mag";
player addMagazine "9Rnd_45ACP_Mag";
player addMagazine "9Rnd_45ACP_Mag";
player addMagazine "9Rnd_45ACP_Mag";
player addMagazine "9Rnd_45ACP_Mag";
player addMagazine "9Rnd_45ACP_Mag";
player addWeapon "hgun_ACPC2_F";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";

[] call life_fnc_opforsaveGear;