#include "SellVehicleScreen.h"
#include "Utilities.h"
#include "Edit_Cars_Main.h"

#include <string>
#include <iostream>
#include "EditDatabaseController.h"
using namespace std;

void SellVehicleScreen::sellVehicleScreen()
{

	int i = 9;
	system("CLS");
	gotoxy(50, i++);
	cout << "|===============================================|";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|       Please enter the ID of the vehicle      |";
	gotoxy(50, i++);
	cout << "|             you would like to sell            |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|-----------------------------------------------|";
	gotoxy(50, i++);
	cout << "| Enter ID here:                                |";
	gotoxy(50, i);
	cout << "|===============================================|";
	gotoxy(67, --i);
	string id;
	cin >> id;
	if (EditDatabaseController::checkID(id) == 0)
	{
		while (true)
		{
			i = 9;
			system("CLS");
			gotoxy(50, i++);
			cout << "|===============================================|";
			gotoxy(50, i++);
			cout << "|                                               |";
			gotoxy(50, i++);
			cout << "|               Id did not exist!               |";
			gotoxy(50, i++);
			cout << "|     Please re-enter the ID or x to cancel     |";
			gotoxy(50, i++);
			cout << "|                                               |";
			gotoxy(50, i++);
			cout << "|-----------------------------------------------|";
			gotoxy(50, i++);
			cout << "| Enter ID here:                                |";
			gotoxy(50, i);
			cout << "|===============================================|";
			gotoxy(67, --i);
			string id;
			cin >> id;
			if (id.compare("x") == 0 || id.compare("x") == 0)
			{
				Edit_Cars_Main::editCarsMenu();
				break;
			}
			if (EditDatabaseController::checkID(id) == 1)
			{
				i = 9;
				system("CLS");
				gotoxy(50, i++);
				cout << "|===============================================|";
				gotoxy(50, i++);
				cout << "|                                               |";
				gotoxy(50, i++);
				cout << "|                 Id was found!                 |";
				gotoxy(50, i++);
				cout << "|                                               |";
				gotoxy(50, i++);
				cout << "|-----------------------------------------------|";
				gotoxy(50, i++);
				cout << "|                                               |";
				gotoxy(50, i);
				cout << "|===============================================|";
				gotoxy(60, --i);
				system("pause");
				break;
			}
		}
	}
	else
	{
		i = 9;
		system("CLS");
		gotoxy(50, i++);
		cout << "|===============================================|";
		gotoxy(50, i++);
		cout << "|                                               |";
		gotoxy(50, i++);
		cout << "|   Please enter the Date Sold of the vehicle   |";
		gotoxy(50, i++);
		cout << "|            you would like to sell             |";
		gotoxy(50, i++);
		cout << "|                                               |";
		gotoxy(50, i++);
		cout << "|-----------------------------------------------|";
		gotoxy(50, i++);
		cout << "| Enter Date here:                              |";
		gotoxy(50, i);
		cout << "|===============================================|";
		gotoxy(69, --i);
		string date;
		cin >> date;

		i = 9;
		system("CLS");
		gotoxy(50, i++);
		cout << "|===============================================|";
		gotoxy(50, i++);
		cout << "|                                               |";
		gotoxy(50, i++);
		cout << "|  Please enter the Price Sold of the vehicle   |";
		gotoxy(50, i++);
		cout << "|            you would like to sell             |";
		gotoxy(50, i++);
		cout << "|                                               |";
		gotoxy(50, i++);
		cout << "|-----------------------------------------------|";
		gotoxy(50, i++);
		cout << "| Enter Price here:                             |";
		gotoxy(50, i);
		cout << "|===============================================|";
		gotoxy(70, --i);
		string price;
		cin >> price;

		i = 9;
		system("CLS");
		gotoxy(50, i++);
		cout << "|===============================================|";
		gotoxy(50, i++);
		cout << "|                                               |";
		gotoxy(50, i++);
		cout << "|  Please enter the First Name of the vehicle   |";
		gotoxy(50, i++);
		cout << "|                    sold to!                   |";
		gotoxy(50, i++);
		cout << "|                                               |";
		gotoxy(50, i++);
		cout << "|-----------------------------------------------|";
		gotoxy(50, i++);
		cout << "| Enter First Name here:                        |";
		gotoxy(50, i);
		cout << "|===============================================|";
		gotoxy(75, --i);
		string firstName;
		cin >> firstName;

		i = 9;
		system("CLS");
		gotoxy(50, i++);
		cout << "|===============================================|";
		gotoxy(50, i++);
		cout << "|                                               |";
		gotoxy(50, i++);
		cout << "|  Please enter the Last Name of the vehicle    |";
		gotoxy(50, i++);
		cout << "|                   sold to!                    |";
		gotoxy(50, i++);
		cout << "|                                               |";
		gotoxy(50, i++);
		cout << "|-----------------------------------------------|";
		gotoxy(50, i++);
		cout << "| Enter Last Name here:                         |";
		gotoxy(50, i);
		cout << "|===============================================|";
		gotoxy(74, --i);
		string lastName;
		cin >> lastName;
		if (EditDatabaseController::customerExistence(firstName, lastName) == 1)
		{
			int i = 9;
			system("CLS");
			gotoxy(50, i++);
			cout << "|===============================================|";
			gotoxy(50, i++);
			cout << "|             Customer Already Exists!          |";
			gotoxy(50, i++);
			cout << "|-----------------------------------------------|";
			gotoxy(50, i++);
			cout << "|                                               |";
			gotoxy(50, i++);
			cout << "|                                               |";
			gotoxy(50, i++);
			cout << "|  [1]. Use old customer                        |";
			gotoxy(50, i++);
			cout << "|  [2]. Add new customer                        |";
			gotoxy(50, i++);
			cout << "|                                               |";
			gotoxy(50, i++);
			cout << "|-----------------------------------------------|";
			gotoxy(50, i++);
			cout << "|                                               |";
			gotoxy(50, i);
			cout << "|===============================================|";
			gotoxy(50, --i);
			cout << "|  Please select an option:                     |";
			gotoxy(79, i);
			int selection;
			cin >> selection;

			EditDatabaseController::addCustomer(firstName, lastName, selection, 2);
			EditDatabaseController::sellVehicle(id, date, price);
			i = 9;
			system("CLS");
			gotoxy(50, i++);
			cout << "|===============================================|";
			gotoxy(50, i++);
			cout << "|                                               |";
			gotoxy(50, i++);
			cout << "|                   Vehicle Sold!               |";
			gotoxy(50, i++);
			cout << "|                                               |";
			gotoxy(50, i++);
			cout << "|-----------------------------------------------|";
			gotoxy(50, i++);
			cout << "|                                               |";
			gotoxy(50, i);
			cout << "|===============================================|";
			gotoxy(52, --i);
			cout << "|  Would you like to sell another?(Y/N):        |";
			string choice;
			cin >> choice;
			if (choice.compare("y") == 0 || choice.compare("Y") == 0)
			{
				SellVehicleScreen::sellVehicleScreen();
			}
			else
			{
				Edit_Cars_Main::editCarsMenu();
			}
		}
		else
		{

			EditDatabaseController::sellVehicle(id, date, price);

			i = 9;
			system("CLS");
			gotoxy(50, i++);
			cout << "|===============================================|";
			gotoxy(50, i++);
			cout << "|                                               |";
			gotoxy(50, i++);
			cout << "|                   Vehicle Sold!               |";
			gotoxy(50, i++);
			cout << "|                                               |";
			gotoxy(50, i++);
			cout << "|-----------------------------------------------|";
			gotoxy(50, i++);
			cout << "|                                               |";
			gotoxy(50, i);
			cout << "|===============================================|";
			gotoxy(50, --i);
			cout << "|  Would you like to sell another?(Y/N):        |";
			string choice;
			cin >> choice;
			if (choice.compare("y") == 0 || choice.compare("Y") == 0)
			{
				SellVehicleScreen::sellVehicleScreen();
			}
			else
			{
				Edit_Cars_Main::editCarsMenu();
			}
		}
	}
	Edit_Cars_Main::editCarsMenu();
}
