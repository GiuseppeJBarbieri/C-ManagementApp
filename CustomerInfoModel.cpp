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

CustomerInfoModel::CustomerInfoModel(string customerId, string firstname, string lastname, string carIdSold, string carIdPurchased)
	: customerId(customerId), firstname(firstname), lastname(lastname), carIdSold(carIdSold), carIdPurchased(carIdPurchased) { }

void CustomerInfoModel::showCustomer()
{
	cout << "Customer Id: " << customerId << " First Name: " << firstname << " Last Name: " << lastname << " Car Id Sold: " << carIdSold 
		<< " Car Id Purchased: " << carIdPurchased << endl;
}
