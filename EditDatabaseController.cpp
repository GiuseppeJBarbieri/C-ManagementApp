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

void EditDatabaseController::createId()
{
	id = rand() % 1000;
}

//If I'm buying im going to need to create an id..
//Take in make, model, year, type, driveline, enginetype, enginesize, pricePurchased, dateRecieved

void EditDatabaseController::buyVehicle(string make, string model, string year, string type, string driveline, string enginetype, string enginesize, double pricePurchased, string dateRecieved)
{
	createId();

}

void EditDatabaseController::sellVehicle()
{
}

void EditDatabaseController::tradeVehicle()
{
}
