#pragma once
/*
* EditDatabaseController.h
* ManagementApp
*
*
* Created by Giuseppe Barbieri on 4/16/18
*
*/

#ifndef EditDatabaseController_h
#define EditDatabaseController_h

#include <string>

using namespace std;

class EditDatabaseController
{
	//bit connect 
private:

public:
	static void createId();
	static void buyVehicle(char *make, char *model, char *year, string type, string driveline,
		string enginetype, string enginesize, double pricePurchased, string dateRecieved);
	void sellVehicle();
	void tradeVehicle();
};

#endif // !EditDatabaseController.h
