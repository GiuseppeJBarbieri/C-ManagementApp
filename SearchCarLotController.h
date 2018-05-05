#pragma once
#ifndef SearchCarLotController_h
#define SearchCarLotController_h
#include "CarModel.h"
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class SearchCarLotController
{
private:

public:
	static vector<CarModel> searchByMake(string make);
	static vector<CarModel> searchByModel(string model);
	static vector<CarModel> searchByYear(string year);
	static 	ifstream openFile();
	static void getVehicleList(vector<CarModel> &matchedList);

};


#endif // !SearchCarLotController_h