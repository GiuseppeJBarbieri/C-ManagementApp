/*
* CarPriceInfoModel.h
* ManagementApp
*
*
* Created by Giuseppe Barbieri on 4/15/18
*
*/

#pragma once
#ifndef CarPriceInfoModel_h
#define CarPriceInfoModel_h


#include <string>

using namespace std;

class CarPriceInfoModel
{
private:
	

public :
	string id;
	string askingPrice, pricePurchased, priceSold;
	string dateRecieved, dateSold;
	CarPriceInfoModel();
	CarPriceInfoModel(string id, string dateRecieved, string pricePurchased, string askingPrice, string dateSold, string priceSold);
	void showCarPriceInfo();
};

#endif // !CarPriceInfoModel_h