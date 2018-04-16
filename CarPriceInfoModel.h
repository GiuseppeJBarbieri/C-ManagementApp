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
	int id, customerId;
	double askingPrice, pricePurchased, priceSold;
	string dateRecieved, dateSold;

public :
	CarPriceInfoModel();
	CarPriceInfoModel(int id, int customerId, double askingPrice, double pricePurchased, double priceSold, string dateRecieved, string datesold);
	void showCarPriceInfo();
};

#endif // !CarPriceInfoModel_h