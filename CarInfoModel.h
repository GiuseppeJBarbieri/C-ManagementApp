/*
* CarInfoModel.h
* ManagementApp
*
*
* Created by Giuseppe Barbieri on 4/15/18
*
*/

#pragma once
#ifndef CarInfoModel_h
#define CarInfoModel_h
#include <string>

using namespace std;

class CarInfoModel
{
private :
	int id;
	string type, driveLine, engineType, engineSize;

public :
	CarInfoModel();
	CarInfoModel(int id, string type, string driveLine, string engineType, string engineSize);
	void showCarInfo();
};

#endif // !CarInfoModel_h