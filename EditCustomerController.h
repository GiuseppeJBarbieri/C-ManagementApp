#pragma once
#ifndef EditCustomerController_h
#define EditCustomerController_h
#include "CustomerInfoModel.h"

#include <vector>
#include <string>

using namespace std;

class EditCustomerController
{
private:

public:
	static vector<CustomerInfoModel> getCustomerDB();
	static void updateCustomerBought(string carIdBought, string firstName, string lastName);
	static void updateCustomerSold(string carIdSold, string firstName, string lastName);
	static void rewriteFile(vector<CustomerInfoModel> customerlist);

};


#endif // !EditCustomerController_h