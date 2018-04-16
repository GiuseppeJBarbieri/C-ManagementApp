/*
* CarModel.h
* ManagementApp
*
*
* Created by Giuseppe Barbieri on 4/15/18
*
*/

#pragma once
#ifndef CarModel_h
#define CarModel_h


#include <string>

using namespace std;

class CarModel
{
private:
	int id;
	string make, model, year;

public :
	CarModel();
	CarModel(int id, string make, string model, string year);
	void showCar();
};
#endif // !CarModel_h