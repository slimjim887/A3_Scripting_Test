class Slim_GunShop_Dialog
{
	idd = 9999;
	movingEnabled = false;
	
	class controls
	{

		class Slim_rscPicture: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(0,0,1,.5)";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.257813 * safezoneW;
			h = 0.495 * safezoneH;
		};
		class Slim_rscButton_1: RscButton
		{
			idc = 1600;
			text = "Equip"; //--- ToDo: Localize;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class Slim_rscButton_2: RscButton
		{
			idc = 1601;
			text = "Close"; //--- ToDo: Localize;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.055 * safezoneH;
			action = "closeDialog 0";
		};
		class Slim_rscListBox: RscListbox
		{
			idc = 1500;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.231 * safezoneH;
		};


	};
};