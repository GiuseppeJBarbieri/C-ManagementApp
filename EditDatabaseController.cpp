/*
* EditDatabaseController.cpp
* ManagementApp
*
*
* Created by Giuseppe Barbieri on 4/16/18
*
*/

#include "EditDatabaseController.h"
#include "CarModel.h"
#include "BuyVehicleController.h"
#include "SellVehicleController.h"
#include "CustomerInformationController.h"

#include <string>
#include <iostream>
#include <fstream>
#include <limits>
#include <vector>
#include <sstream>

using namespace std;
static int vehicleId = 0;
static int custId = 0;

istream& ignoreline(ifstream& in, ifstream::pos_type& pos)
{
	pos = in.tellg();
	return in.ignore(numeric_limits<streamsize>::max(), '\n');
}

string getLastLine(ifstream& in)
{
	ifstream::pos_type pos = in.tellg();

	ifstream::pos_type lastPos;
	while (in >> ws && ignoreline(in, lastPos))
		pos = lastPos;

	in.clear();
	in.seekg(pos);

	string line;
	getline(in, line);
	return line;
}

vector<string> splitString(string line)
{
	vector<string> internal;
	stringstream ss(line);
	string tok;

	while (getline(ss, tok, ':'))
	{
		internal.push_back(tok);
	}
	return internal;
}

void EditDatabaseController::createVehicleId()
{
	ifstream fin;
	fin.open("CarModel.txt");
	string line = getLastLine(fin);
	if (line.compare("") == 0)
	{
		vehicleId = 1;
	}
	else
	{
		vector<string> idString = splitString(line);
		stringstream idS(idString[0]);
		idS >> vehicleId;
		vehicleId++;
	}
}


//If I'm buying im going to need to create an id..
//Take in make, model, year, type, driveline, enginetype, enginesize, pricePurchased, dateRecieved

void EditDatabaseController::buyVehicle(string make, string model, string year, string type, string driveline, string enginetype, string enginesize, string pricePurchased, string setAskingPrice, string dateRecieved, string firstName, string lastName, int addOrDelete)
{
	createVehicleId();
	string idS = to_string(vehicleId);
	
	BuyVehicleController::addCarModel(vehicleId, make, model, year);
	BuyVehicleController::addCarInfoModel(vehicleId, type, driveline, enginetype, enginesize);
	BuyVehicleController::addCarPriceInfoModel(vehicleId, pricePurchased, setAskingPrice, dateRecieved);
	
	addCustomer(firstName, lastName, addOrDelete);
	
}
void EditDatabaseController::addCustomer(string firstName, string lastName, int addOrDelete)
{
	if (addOrDelete == 1)
	{
		CustomerInformationController::editCustomer(firstName, lastName, vehicleId);
	}
	else
	{
		CustomerInformationController::addCustomer(firstName, lastName, vehicleId);
	}
	
}

void EditDatabaseController::sellVehicle(string id, string date, string priceSold)
{
	SellVehicleController::sellVehicle(id, date, priceSold);
}

void EditDatabaseController::tradeVehicle()
{
}

int EditDatabaseController::checkID(string id)
{
	return SellVehicleController::findID(id);
}

int EditDatabaseController::customerExistence(string firstName, string lastName)
{
	return CustomerInformationController::checkCustomerExistence(firstName, lastName);
}
