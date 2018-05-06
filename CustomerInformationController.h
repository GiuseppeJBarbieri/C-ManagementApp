#pragma once
#ifndef CustomerInformationController_h
#define CustomerInformationController_h
#include "CustomerInfoModel.h"
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

class CustomerInformationController
{
private:
	int id = 0;
public:
	static void addCustomer(string firstName, string lastName, int vehicleIdSold);
	static int checkCustomerExistence(string firstnName, string lastName);
	static ifstream openFile();
	static vector<CustomerInfoModel> getCustomerList();
	static void editCustomer(string firstName, string lastName, int vehicleIdSold);

};

#endif // !CustomerInformationController_h