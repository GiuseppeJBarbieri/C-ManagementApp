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

<<<<<<< HEAD
#include <fstream>;
#include <iostream>

using namespace std;

void BuyVehicleController::addCarModel(int id, char make[], char model[], char year[])
{
	CarModel car(id, make, model, year);
	ofstream ofs("carmodel.ros", ios::binary);
	ofs.write((char *)&car, sizeof(car));
	cout << "Buy vehicle Controller showing model...\n";
	ofs.close();
=======
void PersonController::addCarModel(int id, string make, string model, string year)
{
	CarModel carModel(id, make, model, year);
>>>>>>> parent of 48d3cc7... Buying vehicles Controllers updated
}

void PersonController::addCarInfoModel(int id, string type, string driveLine, string engineType, string engineSize)
{
	CarInfoModel carInfoModel(id, type, driveLine, engineType, engineSize);
}

<<<<<<< HEAD
void BuyVehicleController::showCarModel()
{
	cout << "Show Car Model method in buy vehicle controller showing model from binary file....\n";
	CarModel car;
	ifstream ifs("carmodel.ros", ios::binary);
	if (ifs.is_open())
	{
		while (ifs.good())
		{
			ifs.read((char *)&car, sizeof(car));
		}
		ifs.close();
	}	
	car.showCar();
}

=======
>>>>>>> parent of 48d3cc7... Buying vehicles Controllers updated
