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

void PersonController::addCarModel(int id, string make, string model, string year)
{
	CarModel carModel(id, make, model, year);
}

void PersonController::addCarInfoModel(int id, string type, string driveLine, string engineType, string engineSize)
{
	CarInfoModel carInfoModel(id, type, driveLine, engineType, engineSize);
}

