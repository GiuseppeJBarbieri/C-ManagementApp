#include "TotalSalesController.h"
#include "CarPriceInfoModel.h"

#include <fstream>
#include <iostream>
#include <vector>
#include <string>


using namespace std;
double TotalSalesController::getTotalSales()
{
	vector<CarPriceInfoModel> salesList = TotalSalesController::getPriceDB();
	double salesTotal = 0;
	for (const auto& car : salesList) {
		if (stod(car.priceSold) > 0)
		{
			salesTotal = salesTotal + stod(car.priceSold);
		}
	}
	return salesTotal;
}

vector<CarPriceInfoModel> TotalSalesController::getPriceDB()
{
	ifstream fin;
	fin.open("CarInfoPrice.txt");
	if (!fin) {
		cerr << "Error in opening the file" << endl;
	}
	vector<CarPriceInfoModel> salesList;
	CarPriceInfoModel tempInfo;
	string str;
	int i = 0;
	while (getline(fin, str, ':'))
	{
		if (i == 0)
		{
			tempInfo.id = str;
			i++;
		}
		else if (i == 1)
		{
			tempInfo.dateRecieved = str;
			i++;
		}
		else if (i == 2)
		{
			tempInfo.pricePurchased = str;
			i++;
		}
		else if (i == 3)
		{
			tempInfo.askingPrice = str;
			i++;
		}
		else if (i == 4)
		{
			tempInfo.dateSold = str;
			i++;
		}
		else if (i == 5)
		{
			tempInfo.priceSold = str;
			salesList.push_back(tempInfo);
			i = 0;
		}
	}
	return salesList;
}
