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
<<<<<<< HEAD
	static void addCarModel(int id, char *make, char *model, char *year);
	static void addCarInfoModel(int id, string type, string driveLine, string engineType, string engineSize);
	static void addCarPriceInfoModel();

	static void showCarModel();
=======
	void addCarModel(int id, string make, string model, string year);
	void addCarInfoModel(int id, string type, string driveLine, string engineType, string engineSize);
	void addCarPriceInfoModel();
>>>>>>> parent of 48d3cc7... Buying vehicles Controllers updated
};

#endif // !BuyVehicleController_h