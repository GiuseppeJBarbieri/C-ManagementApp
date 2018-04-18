#pragma once
#ifndef BuyVehicleController_h
#define BuyVehicleController_h

#include <cstdlib>
#include <string>

using namespace std;

class BuyVehicleController
{
private:
	int id = 0;
public:
	static void addCarModel(int id, char *make, char *model, char *year);
	static void addCarInfoModel(int id, string type, string driveLine, string engineType, string engineSize);
	static void addCarPriceInfoModel();

	static void showCarModel();
};

#endif // !BuyVehicleController_h