/*
* EditDatabaseController.cpp
* ManagementApp
*
*
* Created by Giuseppe Barbieri on 4/16/18
*
*/

#include "EditDatabaseController.h"
#include "CarModel.h"
#include "BuyVehicleController.h"

#include <string>

using namespace std;
static int id = 0;

void EditDatabaseController::createId()
{
	id = rand() % 1000;
}

//If I'm buying im going to need to create an id..
//Take in make, model, year, type, driveline, enginetype, enginesize, pricePurchased, dateRecieved

void EditDatabaseController::buyVehicle(char make[], char model[], char year[], string type, string driveline, string enginetype, string enginesize, double pricePurchased, string dateRecieved)
{
	createId();
	BuyVehicleController::addCarModel(id, make, model, year);
	BuyVehicleController::showCarModel();
}

void EditDatabaseController::sellVehicle()
{
}

void EditDatabaseController::tradeVehicle()
{
}
