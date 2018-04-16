#pragma once
#ifndef BuyVehicleController_h
#define BuyVehicleController_h

#include <cstdlib>
#include <string>

using namespace std;

class PersonController
{
private:
	int id = 0;
public:
	void addCarModel(int id, string make, string model, string year);
	void addCarInfoModel(int id, string type, string driveLine, string engineType, string engineSize);
	void addCarPriceInfoModel();
};

#endif // !BuyVehicleController_h