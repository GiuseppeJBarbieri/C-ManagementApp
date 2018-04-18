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

private:
	int id = 0;
public:
<<<<<<< HEAD
	static void createId();
	static void buyVehicle(char *make, char *model, char *year, string type, string driveline,
=======
	void createId();
	void buyVehicle(string make, string model, string year, string type, string driveline,
>>>>>>> parent of 48d3cc7... Buying vehicles Controllers updated
		string enginetype, string enginesize, double pricePurchased, string dateRecieved);
	void sellVehicle();
	void tradeVehicle();
};

#endif // !EditDatabaseController.h
