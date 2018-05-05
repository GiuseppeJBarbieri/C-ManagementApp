#pragma once

#ifndef ViewCarLotController_h
#define ViewCarLotController_h

#include "CarModel.h"
#include "CarInfoModel.h"
#include <vector>
using namespace std;

class ViewCarLotController
{
private:

public:
	static vector<CarModel> getAllVehicles();
	static vector<CarInfoModel> getAllVehiclesInfo();
	static vector<CarModel> searchVehicle(int choice, string searchStr);

};

#endif // !ViewCarLotController.h
