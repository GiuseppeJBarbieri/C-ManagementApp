#pragma once

#ifndef ViewCarLotController_h
#define ViewCarLotController_h

#include "CarModel.h"
#include <vector>
using namespace std;

class ViewCarLotController
{
private:

public:
	static vector<CarModel> getAllVehicles();
	static void searchVehicle();
};

#endif // !ViewCarLotController.h
