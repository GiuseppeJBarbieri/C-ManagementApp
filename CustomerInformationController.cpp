#include "CustomerInformationController.h"
#include "EditCustomerController.h"
#include "CustomerInfoModel.h"
#include "BuyVehicleController.h"

#include <string>
#include <iostream>
#include <fstream>
#include <limits>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

CustomerInfoModel matchedAccount;
static int customerId = 0;


istream& ignoreline2(ifstream& in, ifstream::pos_type& pos)
{
	pos = in.tellg();
	return in.ignore(numeric_limits<streamsize>::max(), '\n');
}
string getLastLine2(ifstream& in)
{
	ifstream::pos_type pos = in.tellg();

	ifstream::pos_type lastPos;
	while (in >> ws && ignoreline2(in, lastPos))
		pos = lastPos;

	in.clear();
	in.seekg(pos);

	string line;
	getline(in, line);
	return line;
}

vector<string> splitString2(string line)
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

void createCustomerId()
{
	ifstream fin;
	fin.open("CustomerInfoModel.txt");
	string line = getLastLine2(fin);
	if (line.compare("") == 0)
	{
		customerId = 1;
	}
	else
	{
		vector<string> idString = splitString2(line);
		stringstream idS(idString[0]);
		idS >> customerId;
		customerId++;
	}
}

void CustomerInformationController::addCustomer(string firstName, string lastName, int vehicleIdSold)
{
	createCustomerId();
	BuyVehicleController::addCustomerInfoModel(customerId, vehicleIdSold, firstName, lastName);
	
}
void CustomerInformationController::editCustomer(string firstName, string lastName, int vehicleIdSold, int soldOrBought)
{
	if (soldOrBought == 1)
	{
		EditCustomerController::updateCustomerBought(to_string(vehicleIdSold), firstName, lastName);
	}
	else
	{
		EditCustomerController::updateCustomerSold(to_string(vehicleIdSold), firstName, lastName);
	}
}

int CustomerInformationController::checkCustomerExistence(string firstName, string lastName)
{
	vector<CustomerInfoModel> customerList;
	
	customerList = getCustomerList();
	transform(firstName.begin(), firstName.end(), firstName.begin(), ::toupper);
	transform(lastName.begin(), lastName.end(), lastName.begin(), ::toupper);
	for (const auto& customer : customerList) {
		string firstName2 = customer.firstname;
		string lastName2 = customer.lastname;
		transform(firstName2.begin(), firstName2.end(), firstName2.begin(), ::toupper);
		transform(lastName2.begin(), lastName2.end(), lastName2.begin(), ::toupper);
		if (firstName.compare(firstName) == 0 && lastName.compare(lastName2) == 0)
		{
			matchedAccount = customer;
			return 1;
		}
	}
	return 0;
}
ifstream CustomerInformationController::openFile()
{
	ifstream fin;
	fin.open("CustomerInfoModel.txt");
	return fin;
}

vector<CustomerInfoModel> CustomerInformationController::getCustomerList()
{
	ifstream fin = openFile();
	vector<CustomerInfoModel> customers;
	CustomerInfoModel temp;
	string str;
	int i = 0;
	while (getline(fin, str, ':'))
	{
		if (i == 0)
		{
			temp.customerId = str;
			i++;
		}
		else if (i == 1)
		{
			temp.firstname = str;
			i++;
		}
		else if (i == 2)
		{
			temp.lastname = str;
			i++;
		}
		else if (i == 3)
		{
			temp.carIdSold = str;
			i++;
		}
		else if (i == 4)
		{
			temp.carIdPurchased = str;
			customers.push_back(temp);
			i = 0;
		}
	}
	return customers;
}



