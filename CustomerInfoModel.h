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
	int customerId, carIdSold, carIdPurchased;
	string firstname, lastname, address;

public :
	CustomerInfoModel();
	CustomerInfoModel(int customerId, string firstname, string lastname, string address, int carIdSold, int carIdPurchased);
	void showCustomer();
};

#endif // !CustomerInfoModel_h