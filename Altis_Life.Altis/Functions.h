class Socket_Reciever
{
	tag = "SOCK";
	class SQL_Socket
	{
		file = "core\session";
		class requestReceived {};
		class dataQuery {};
		class insertPlayerInfo {};
		class updateRequest {};
		class syncData {};
	};
};

class Life_Client_Core
{
	tag = "life";
	
	class Master_Directory
	{
		file = "core";
		class setupActions {};
		class setupEVH {};
		class initCiv {};
		class initCop {};
		class initMedic {};
		class initOpf {};
		class welcomeNotification {};
	};
	
	class Admin
	{
		file = "core\admin";
		class admininfo {};
		class adminid {};
		class admingetID {};
		class adminMenu {};
		class adminQuery {};
	};
	
	class Medical_System
	{
		file = "core\medical";
		class onPlayerKilled {};
		class onPlayerRespawn {};
		class respawned {};
		class revivePlayer {};
		class revived {};
		class medicMarkers {};
		class requestMedic {};
		class medicRequest {};
		class deathScreen {};
		class medicLoadout {};
	};
	
	class Actions
	{
		file = "core\actions";
		class buyLicense {};
		class chemlightUse {};
		class heal {};
		class healHospital {};
		class pushVehicle {};
		class repairTruck {};
		class serviceChopper {};
		class serviceTruck {};
		class catchFish {};
		class catchTurtle {};
		class dpFinish {};
		class dropFishingNet {};
		class gatherApples {};
		class gatherCannabis {};
		class gatherHeroin {};
		class gatherOil {};
		class getDPMission {};
		class postBail {};
		class processAction {};
		class robBankAction {};
		class sellOil {};
		class suicideBomb {};
		class arrestAction {};
		class escortAction {};
		class impoundAction {};
		class pulloutAction {};
		class putInCar {};
		class stopEscorting {};
		class restrainAction {};
		class searchAction {};
		class searchVehAction {};
		class unrestrain {};
		class pickupItem {};
		class pickupMoney {};
		class ticketAction {};
		class gatherPeaches {};
		class gatherCocaine {};
		class pumpRepair {};
		class packupSpikes {};
		class robFederal {};
		class storeVehicle {};
		class robAction {};
		class sellTurtle {};
	};
	
	class Config
	{
		file = "core\config";
		class licensePrice {};
		class vehicleColorCfg {};
		class vehicleColorStr {};
		class vehicleListCfg {};
		class licenseType {};
		class eatFood {};
		class varHandle {};
		class varToStr {};
		class copDefault {};
		class impoundPrice {};
		class itemWeight {};
		class taxRate {};
		class virt_shops {};
		class vehShopLicenses {};
		class vehicleAnimate {};
		class weaponShopCfg {};
		class vehicleWeightCfg {};
		class OpforDefault {};
		
		//Clothing Store Configs
		class clothing_cop {};
		class clothing_bruce {};
		class clothing_reb {};
		class clothing_dive {};
	};

	class Player_Menu
	{
		file = "core\pmenu";
		class wantedList {};
		class wantedInfo {};
		class wantedMenu {};
		class pardon {};
		class giveItem {};
		class giveMoney {};
		class p_openMenu {};
		class p_updateMenu {};
		class removeItem {};
		class useItem {};
		class cellphone {};
		class keyMenu {};
		class keyGive {};
		class keyDrop {};
		class s_onSliderChange {};
		class updateViewDistance {};
		class settingsMenu {};
		class settingsInit {};
	};
	
	class Functions
	{
		file = "core\functions";
		class calWeightDiff {};
		class fetchCfgDetails {};
		class handleInv {};
		class hudSetup {};
		class hudUpdate {};
		class fetchGear{};
		class tazeSound {};
		class animSync {};
		class simDisable {};
		class keyHandler {};
		class dropItems {};
		class handleDamage {};
		class numberText {};
		class handleItem {};
		class accType {};
		class onDeath {};
		class onRespawn {};
		class receiveItem {};
		class giveDiff {};
		class receiveMoney {};
		class playerTags {};
		class clearVehicleAmmo {};
		class pulloutVeh {};
		class nearUnits {};
		class fedSuccess {};
		class actionKeyHandler {};
		class playerCount {};
		class fetchDeadGear {};
		class loadDeadGear {};
		class isnumeric {};
		class escInterupt {};
		class onTakeItem {};
		class fetchVehInfo {};
	};
	
	class Network
	{
		file = "core\functions\network";
		class broadcast {};
		class MP {};
		class MPexec {};
		class netSetVar {};
		class corpse {};
		class jumpFnc {};
	};
	
	class Civilian
	{
		file = "core\civilian";
		class jailMe {};
		class jail {};
		class tazed {};
		class civFetchGear {};
		class civLoadGear {};
		class robReserve {};
		class knockedOut {};
		class robReceive {};
		class removeLicenses {};
		class zoneCreator {};
	};
	
	class Vehicle
	{
		file = "core\vehicle";
		class colorVehicle {};
		class openInventory {};
		class lockVehicle {};
		class vehicleOwners {};
		class vehStoreItem {};
		class vehTakeItem {};
		class vehInventory {};
		class vInteractionMenu {};
		class vehicleWeight {};
	};
	
	class Cop
	{
		file = "core\cop";
		class copMarkers {};
		class copLights {};
		class loadGear {};
		class saveGear {};
		class vehInvSearch {};
		class copSearch {};
		class bountyReceive {};
		class searchClient {};
		class restrain {};
		class ticketGive {};
		class ticketPay {};
		class ticketPrompt {};
		class copSiren {};
		class spikeStripEffect {};
		class radar {};
		class questionDealer {};
		class copInteractionMenu {};
		class sirenLights {};
		class licenseCheck {};
		class licensesRead {};
	};
	
	class Opfor
	{
		file = "core\opfor";
		class opforloadGear {};
		class opforsaveGear {};
		class vehInvSearch {};
		class searchClient {};
		class restrain {};
		class jailMe {};
		class jail {};
		class tazed {};
		class robReserve {};
		class knockedOut {};
		class knockoutAction {};
		class robReceive {};
		class robPerson {};
		class removeLicenses {};
		class zoneCreator {};
	
	};
		
	class Gangs
	{
		file = "core\gangs";
		class createGang {};
		class gangBrowser {};
		class gangManagement {};
		class gangMenu {};
		class joinGang {};
		class kickGang {};
		class leaveGang {};
		class setGangLeader {};
		class lockGang {};
		class unlockGang {};
	};
	
	class Shops
	{
		file = "core\shops";
		class atmMenu {};
		class buyClothes {};
		class changeClothes {};
		class clothingMenu {};
		class clothingFilter {};
		class vehicleShopMenu {};
		class vehicleShopLBChange {};
		class vehicleShopBuy {};
		class weaponShopFilter {};
		class weaponShopMenu {};
		class weaponShopSelection {};
		class weaponShopBuySell {};
		class virt_buy {};
		class virt_menu {};
		class virt_update {};
		class virt_sell {};
		class chopShopMenu {};
		class chopShopSelection {};
		class chopShopSell {};
	};
	
	class Items
	{
		file = "core\items";
		class pickaxeUse {};
		class lockpick {};
		class spikeStrip {};
		class jerryRefuel {};
	};
	
	class Dialog_Controls
	{
		file = "dialog\function";
		class setMapPosition {};
		class displayHandler {};
		class spawnConfirm {};
		class spawnMenu {};
		class spawnPointCfg {};
		class spawnPointSelected {};
		class progressBar {};
		class impoundMenu {};
		class unimpound {};
		class sellGarage {};
		class bankDeposit {};
		class bankWithdraw {};
		class bankTransfer {};
		class garageLBChange {};
	};
};