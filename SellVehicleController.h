#pragma once
#ifndef SellVehicleController_h
#define SellVehicleController_h
#include "CarPriceInfoModel.h"

#include <vector>
#include <string>

using namespace std;

class SellVehicleController
{
private:

public:
	static vector<CarPriceInfoModel> getCarPriceDB();
	static void sellVehicle(string id, string date, string priceSold);
	static void rewriteFile(vector<CarPriceInfoModel> vehicleList);
	static int findID(string id);
};


#endif // !SellVehicleController_h