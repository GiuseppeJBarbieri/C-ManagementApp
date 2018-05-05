#include "ViewCarLotController.h"
#include "ViewAllVehicleController.h"
#include "SearchCarLotController.h"
#include "CarModel.h"

#include <vector>
#include <iostream>

using namespace std;

vector<CarModel> ViewCarLotController::getAllVehicles()
{
	return ViewAllVehicleController::getCarDB();
}

vector<CarModel> ViewCarLotController::searchVehicle(int choice, string searchStr)
{
	switch (choice)
	{
	case 1: //Make
		return SearchCarLotController::searchByMake(searchStr);
		break;
	case 2: //Model
		return SearchCarLotController::searchByModel(searchStr);		
		break;
	case 3: //Year
		return SearchCarLotController::searchByYear(searchStr);
		break;
	}
	return SearchCarLotController::searchByYear(searchStr);
}
