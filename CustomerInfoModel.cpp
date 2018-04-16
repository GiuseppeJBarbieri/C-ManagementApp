/*
* CustomerInfoModel.cpp
* ManagementApp
*
*
* Created by Giuseppe Barbieri on 4/15/18
*
*/

#include "CustomerInfoModel.h"
#include <iostream>

using namespace std;


CustomerInfoModel::CustomerInfoModel() { }

CustomerInfoModel::CustomerInfoModel(int customerId, string firstname, string lastname, string address, int carIdSold, int carIdPurchased)
	: customerId(customerId), firstname(firstname), lastname(lastname), address(address), carIdSold(carIdSold), carIdPurchased(carIdPurchased) { }

void CustomerInfoModel::showCustomer()
{
	cout << "Customer Id: " << customerId << " First Name: " << firstname << " Last Name: " << lastname << " Address: " << address 
		<< " Car Id Sold: " << carIdSold << " Car Id Purchased: " << carIdPurchased << endl;
}
