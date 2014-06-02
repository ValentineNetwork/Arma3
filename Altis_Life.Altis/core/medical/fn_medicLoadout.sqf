/*
	File: fn_medicLoadout.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Loads the medic out with the default gear.
*/
RemoveAllWeapons player;
{player removeMagazine _x;} foreach (magazines player);
removeVest player;
removeBackpack player;
removeGoggles player;
removeHeadGear player;
if(hmd player != "") then {
	player unlinkItem (hmd player);
};

{
	player unassignItem _x;
	player removeItem _x;
} foreach (assignedItems player);

//Load player with default Medic Gear
player addVest "V_Press_F";
palyer addUniform "U_Rangemaster";
player addBackpack "B_Carryall_cbr";
player addItem "ItemGPS";
player addItem "ToolKit";
player addItem "MediKit";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "NVGoggles";
player assignItem "NVGoggles";
player addItem "H_Watchcap_blk";

player setObjectTextureGlobal [0,"textures\medic_uniform.jpg"];
