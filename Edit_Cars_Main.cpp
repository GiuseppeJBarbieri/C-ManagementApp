#include "Edit_Cars_Main.h"
#include "Utilities.h"
#include "EditDatabaseController.h"

#include <string>
#include <iostream>

using namespace std;

void Edit_Cars_Main::editCarsMenu()
{
	int selection;
	system("CLS");
	gotoxy(50, 9);
	cout << "\tEDIT VEHICLES\n";
	gotoxy(50, 10);
	cout << "--------------------------";
	gotoxy(50, 11);
	cout << "1. Sell Vehicle\n";
	gotoxy(50, 12);
	cout << "2. Trade Vehicle\n";
	gotoxy(50, 13);
	cout << "3. Buy Vehicle\n";
	gotoxy(50, 14);

	cin >> selection;
	getSelection(selection);
	system("pause");
}

void Edit_Cars_Main::getSelection(int selection)
{
	/*
	string make = "Pontiac";
	string model = "GTO";
	string year = "2006";
	string type = "Sport";
	string driveline = "rwd";
	string enginetype = "V8";
	string enginesize = "6.0L";
	int pricepurchased = 15500;
	string daterecieved = "4/7/1995";
	*/
	string make;
	string model;
	string year;
	string type;
	string driveline;
	string enginetype;
	string enginesize;
	int pricepurchased;
	string daterecieved;


	switch (selection)
	{
	case 1:
	case 2:
	case 3:
		cout << "Please enter the info(make, model, year, type, drieline, enginetype enginesize, pricePurchased, dataRecieved" << endl;
		cout << "Make: ";
		cin >> make;
		cout << "Model: ";
		cin >> model;
		cout << "Year: ";
		cin >> year;
		cout << "Type: ";
		cin >> type;
		cout << "Drive Line: ";
		cin >> driveline;
		cout << "Engine Type: ";
		cin >> enginetype;
		cout << "Engine Size: ";
		cin >> enginesize;
		cout << "Price Purchased: ";
		cin >> pricepurchased;
		cout << "Date Recieved: ";
		cin >> daterecieved;		
		EditDatabaseController::buyVehicle(make, model, year, type, driveline, enginetype, enginesize, pricepurchased, daterecieved);

		break;
	default:
		break;
	}
}
