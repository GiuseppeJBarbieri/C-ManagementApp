/*
* BuyVehicleController.cpp
* ManagementApp
*
*
* Created by Giuseppe Barbieri on 4/16/18
*
*/

#include "BuyVehicleController.h"

#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

void BuyVehicleController::addCarModel(int id, string make, string model, string year)
{
	ofstream fout;
	fout.open("CarModel.txt", ios::app);
	if (!fout)
	{
		cerr << "Error in opening CarModel\n";
	}

	fout << id << ":" << make << ":" << model << ":" << year << ":";
}

void BuyVehicleController::addCarInfoModel(int id, string type, string driveLine, string engineType, string engineSize)
{
	ofstream fout;
	fout.open("CarInfoModel.txt", ios::app);
	if (!fout)
	{
		cerr << "Error in opening CarInfoModel\n";
	}
	fout << id << ":" << type << ":" << driveLine << ":" << engineType << ":" << engineSize << ":";
}
void BuyVehicleController::addCarPriceInfoModel(int id, string pricePurchased, string setAskingPrice, string dateRecieved)
{
	ofstream fout;
	fout.open("CarPriceInfo.txt", ios::app);
	if (!fout)
	{
		cerr << "Error in opening CarPriceInfoModel\n";
	}
	fout << id << ":" << dateRecieved << ":" << pricePurchased << ":" << setAskingPrice << ":" << "0" << ":" << "0" << ":";
}
void BuyVehicleController::addCustomerInfoModel(int id, int carIdSold, string firstName, string lastName)
{
	ofstream fout;
	fout.open("CustomerInfoModel.txt", ios::app);
	if (!fout)
	{
		cerr << "Error in opening CustomerInfoModel\n";
	}
	fout << id << ":" << firstName << ":" << lastName << ":" << carIdSold << ":" << "0" << ":";
}


