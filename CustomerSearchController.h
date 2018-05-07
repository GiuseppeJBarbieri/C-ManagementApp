#pragma once
#ifndef CustomerSearchController_h
#define CustomerSearchController_h
#include "CustomerInfoModel.h"
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class CustomerSearchController
{
private:

public:
	static vector<CustomerInfoModel> searchCustomer(int choice, string searchStr);
	static vector<CustomerInfoModel> searchByLastName(string lastName);
	static vector<CustomerInfoModel> searchById(string id);

	static 	ifstream openFile();
	static void getCustomerList(vector<CustomerInfoModel> &matchedList);

};


#endif // !CustomerSearchController_h