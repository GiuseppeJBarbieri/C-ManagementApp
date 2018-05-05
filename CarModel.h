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
//private:
	

public :
	string id;
	string make;
	string model;
	string year;

	CarModel();
	CarModel(string id, string make, string model, string year);
	string getId();
	string getMake();
	string getModel();
	string getYear();
	void showCar();
};
#endif // !CarModel_h