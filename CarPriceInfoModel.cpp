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

CarPriceInfoModel::CarPriceInfoModel() { }

CarPriceInfoModel::CarPriceInfoModel(int id, int customerId, double askingPrice, double pricePurchased, double priceSold, string dateRecieved, string dateSold) : id(id), customerId(customerId), askingPrice(askingPrice), pricePurchased(pricePurchased), priceSold(priceSold), dateRecieved(dateRecieved), dateSold(dateSold) { }

void CarPriceInfoModel::showCarPriceInfo()
{
	cout << "ID: " << id << " Customer ID: " << customerId << " Asking Price: " << askingPrice << " Price Purchased: " << pricePurchased
		<< " Price Sold: " << priceSold << " Date Recieved: " << dateRecieved << " Date Sold: " << dateSold << endl;
}
