/*
* CarPriceInfoModel.cpp
* ManagementApp
*
*
* Created by Giuseppe Barbieri on 4/15/18
*
*/

#include <iostream>
#include "CarPriceInfoModel.h"

using namespace std;

CarPriceInfoModel::CarPriceInfoModel() { }

CarPriceInfoModel::CarPriceInfoModel(string id, string dateRecieved, string pricePurchased, string askingPrice, string dateSold, string priceSold) : id(id), askingPrice(askingPrice), pricePurchased(pricePurchased), priceSold(priceSold), dateRecieved(dateRecieved), dateSold(dateSold) { }

void CarPriceInfoModel::showCarPriceInfo()
{
	cout << "ID: " << id << " Asking Price: " << askingPrice << " Price Purchased: " << pricePurchased
		<< " Price Sold: " << priceSold << " Date Recieved: " << dateRecieved << " Date Sold: " << dateSold << endl;
}
