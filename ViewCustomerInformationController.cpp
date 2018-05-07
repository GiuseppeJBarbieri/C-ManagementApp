#include "ViewCustomerInformationController.h"
#include "CustomerInfoModel.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>

vector<CustomerInfoModel> ViewCustomerInformationController::getAllCustomers()
{
	ifstream fin;
	fin.open("CustomerInfoModel.txt");
	if (!fin) {
		cerr << "Error in opening the file" << endl;
	}
	vector<CustomerInfoModel> customerList;
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
			customerList.push_back(temp);
			i = 0;
		}
	}
	return customerList;
}

vector<CustomerInfoModel> ViewCustomerInformationController::searchCustomer(int choice, string searchStr)
{
	return vector<CustomerInfoModel>();
}
