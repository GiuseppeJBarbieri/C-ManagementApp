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

	fout << id << ":" << make << ":" << model << ":" << year << '\n';
}


void BuyVehicleController::addCarInfoModel(int id, string type, string driveLine, string engineType, string engineSize)
{
	CarInfoModel carInfoModel(id, type, driveLine, engineType, engineSize);
}
//This function is used to show the information from the binary file but it gives me an access violation error
void BuyVehicleController::showCarModel()
{

	
	
	

}

