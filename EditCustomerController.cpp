#include "EditCustomerController.h"
#include "CustomerInfoModel.h"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<CustomerInfoModel> EditCustomerController::getCustomerDB()
{
	ifstream fin;
	fin.open("CustomerInfoModel.txt");
	if (!fin) {
		cerr << "Error in opening the file" << endl;
	}
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

void EditCustomerController::updateCustomerBought(string carIdBought, string firstName, string lastName)
{
	vector<CustomerInfoModel> CustomerList = getCustomerDB();
	int i = 0;
	for (const auto& customer : CustomerList) {

		string firstName2 = customer.firstname;
		string lastName2 = customer.lastname;

		if (firstName2.compare(firstName) == 0 && lastName2.compare(lastName) == 0)
		{
			CustomerList[i].carIdPurchased = carIdBought;
			break;
		}
		i++;
	}
	rewriteFile(CustomerList);
}

void EditCustomerController::updateCustomerSold(string carIdSold, string firstName, string lastName)
{
	vector<CustomerInfoModel> CustomerList = getCustomerDB();
	int i = 0;
	for (const auto& customer : CustomerList) {

		string firstName2 = customer.firstname;
		string lastName2 = customer.lastname;

		if (firstName2.compare(firstName) == 0 && lastName2.compare(lastName) == 0)
		{
			CustomerList[i].carIdSold = carIdSold;
			break;
		}
		i++;
	}
	rewriteFile(CustomerList);
}

void EditCustomerController::rewriteFile(vector<CustomerInfoModel> customerList)
{
	ofstream fout;
	fout.open("CarPriceInfo.txt");
	if (!fout)
	{
		cerr << "Error in opening file\n";
	}
	for (const auto& customer : customerList)
	{
		fout << customer.customerId << ":" << customer.firstname << ":" << customer.lastname << ":" << customer.carIdSold << ":" << customer.carIdPurchased << ":";
	}
}

