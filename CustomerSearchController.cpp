#include "CustomerSearchController.h"
#include "CustomerInfoModel.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 

using namespace std;

vector<CustomerInfoModel> CustomerSearchController::searchCustomer(int choice, string searchStr)
{
	switch (choice)
	{
	case 1:
		return CustomerSearchController::searchByLastName(searchStr);
		break;
	case 2:
		return CustomerSearchController::searchById(searchStr);
		break;
	}
	return CustomerSearchController::searchById(searchStr);
}

vector<CustomerInfoModel> CustomerSearchController::searchByLastName(string lastName)
{
	vector<CustomerInfoModel> customerList;
	vector<CustomerInfoModel> matchedList;
	getCustomerList(customerList);
	transform(lastName.begin(), lastName.end(), lastName.begin(), ::toupper);
	for (const auto& customer : customerList) {
		string lastName2 = customer.lastname;
		transform(lastName2.begin(), lastName2.end(), lastName2.begin(), ::toupper);
		if (lastName.compare(lastName2) == 0)
		{
			matchedList.push_back(customer);
		}
	}
	return matchedList;
}

vector<CustomerInfoModel> CustomerSearchController::searchById(string id)
{
	vector<CustomerInfoModel> customerList;
	vector<CustomerInfoModel> matchedList;
	getCustomerList(customerList);
	transform(id.begin(), id.end(), id.begin(), ::toupper);
	for (const auto& customer : customerList) {
		string id2 = customer.customerId;
		transform(id2.begin(), id2.end(), id2.begin(), ::toupper);
		if (id.compare(id2) == 0)
		{
			matchedList.push_back(customer);
		}
	}
	return matchedList;
}

ifstream CustomerSearchController::openFile()
{
	ifstream fin;
	fin.open("CustomerInfoModel.txt");
	if (!fin) {
		cerr << "Error in opening the file" << endl;
	}
	return fin;
}

void CustomerSearchController::getCustomerList(vector<CustomerInfoModel>& matchedList)
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
	matchedList = customers;
}
