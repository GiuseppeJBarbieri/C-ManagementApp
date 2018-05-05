#include "SellVehicleController.h"
#include "CarPriceInfoModel.h"

#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<CarPriceInfoModel> SellVehicleController::getCarPriceDB()
{
	ifstream fin;
	fin.open("CarPriceInfo.txt");
	if (!fin) {
		cerr << "Error in opening the file" << endl;
	}
	vector<CarPriceInfoModel> car;
	CarPriceInfoModel temp;
	string str;
	int i = 0;
	while (getline(fin, str, ':'))
	{
		if (i == 0)
		{
			temp.id = str;
			i++;
		}
		else if (i == 1)
		{
			temp.dateRecieved = str;
			i++;
		}
		else if (i == 2)
		{
			temp.pricePurchased = str;
			i++;
		}
		else if (i == 3)
		{
			temp.askingPrice = str;
			i++;
		}
		else if (i == 4)
		{
			temp.dateSold = str;
			i++;
		}
		else if (i == 5)
		{
			temp.priceSold = str;
			car.push_back(temp);
			i = 0;		
		}
	}
	return car;
}

void SellVehicleController::sellVehicle(string id, string date, string priceSold)
{
	vector<CarPriceInfoModel> vehicleList = getCarPriceDB();
	int i = 0;
	for (const auto& car : vehicleList) {

		string id2 = car.id;
		
		if (id.compare(id2) == 0)
		{
			vehicleList[i].dateSold = date;
			vehicleList[i].priceSold = priceSold;
			break;
		}
		i++;
	}
	rewriteFile(vehicleList);
}

void SellVehicleController::rewriteFile(vector<CarPriceInfoModel> vehicleList)
{
	ofstream fout;
	fout.open("CarPriceInfo.txt");
	if (!fout)
	{
		cerr << "Error in opening file\n";
	}
	for (const auto& car : vehicleList) 
	{
		fout << car.id << ":" << car.dateRecieved << ":" << car.pricePurchased << ":" << car.askingPrice << ":" << car.dateSold << ":" << car.priceSold << ":";
	}
	
}

int SellVehicleController::findID(string id)
{
	vector<CarPriceInfoModel> vehicleList = getCarPriceDB();
	int i = 0;
	for (const auto& car : vehicleList) {
		string id2 = car.id;
		if (id.compare(id2) == 0)
		{
			return 1;
			break;
		}
		i++;
	}
	return 0;
}
