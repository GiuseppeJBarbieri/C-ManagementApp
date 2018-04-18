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
	char make[];
	char model[];
	char year[];

public :
	CarModel();
	CarModel(int id, char *make, char *model, char *year);
	void showCar();
};
#endif // !CarModel_h