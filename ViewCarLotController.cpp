#include "ViewCarLotController.h"
#include "ViewAllVehicleController.h"
#include "CarModel.h"

#include <vector>

using namespace std;

vector<CarModel> ViewCarLotController::getAllVehicles()
{
	return ViewAllVehicleController::getCarDB();
}

void ViewCarLotController::searchVehicle()
{
}
