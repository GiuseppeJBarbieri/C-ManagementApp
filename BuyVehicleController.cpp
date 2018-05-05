/*
* BuyVehicleController.cpp
* ManagementApp
*
*
* Created by Giuseppe Barbieri on 4/16/18
*
*/

#include "BuyVehicleController.h"
#include "CarModel.h"
#include "CarInfoModel.h"

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
		cerr << "Error in opening file\n";
	}

	fout << id << ":" << make << ":" << model << ":" << year << ":";
}

void BuyVehicleController::addCarInfoModel(int id, string type, string driveLine, string engineType, string engineSize)
{
	ofstream fout;
	fout.open("CarInfoModel.txt", ios::app);
	if (!fout)
	{
		cerr << "Error in opening file\n";
	}
	fout << id << ":" << type << ":" << driveLine << ":" << engineType << ":" << engineSize << ":";
}
void BuyVehicleController::addCarPriceInfoModel(int id, string pricePurchased, string setAskingPrice, string dateRecieved)
{
	ofstream fout;
	fout.open("CarPriceInfo.txt", ios::app);
	if (!fout)
	{
		cerr << "Error in opening file\n";
	}
	fout << id << ":" << dateRecieved << ":" << pricePurchased << ":" << setAskingPrice << ":" << "0" << ":" << "0" << ":";
}
//This function is used to show the information from the binary file but it gives me an access violation error
void BuyVehicleController::showCarModel()
{

	
	
	

}

