/*
* CustomerInfoModel.h
* ManagementApp
*
*
* Created by Giuseppe Barbieri on 4/15/18
*
*/

#pragma once
#ifndef CustomerInfoModel_h
#define CustomerInfoModel_h
#include <string>

using namespace std;

class CustomerInfoModel
{
private:
	

public :
	string customerId, carIdSold, carIdPurchased;
	string firstname, lastname;

	CustomerInfoModel();
	CustomerInfoModel(string customerId, string firstname, string lastname, string carIdSold, string carIdPurchased);
	void showCustomer();
};

#endif // !CustomerInfoModel_h