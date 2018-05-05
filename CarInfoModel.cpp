/*
* CarInfoModel.cpp
* ManagementApp
*
*
* Created by Giuseppe Barbieri on 4/15/18
*
*/

#include "CarInfoModel.h"
#include <iostream>;

using namespace std;

CarInfoModel::CarInfoModel() { }

CarInfoModel::CarInfoModel(string id, string type, string driveLine, string engineType, string engineSize) : id(id), type(type), driveLine(driveLine), engineType(engineType), engineSize(engineSize) { }

void CarInfoModel::showCarInfo()
{
	cout << "ID: " << id << " Type: " << type << " driveLine: " << driveLine << " engineType: " << engineType << " engineSize " << engineSize << endl;
}
