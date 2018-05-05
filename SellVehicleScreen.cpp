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
	cout << "|       Please enter the ID of the vehicle      |";
	gotoxy(50, i++);
	cout << "|             you would like to sell            |";
	gotoxy(50, i++);
	cout << "|-----------------------------------------------|";
	gotoxy(50, i++);
	cout << "| Enter ID here:                                |";
	gotoxy(50, i);
	cout << "|===============================================|";
	gotoxy(68, --i);
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
			cout << "|               Id did not exist!               |";
			gotoxy(50, i++);
			cout << "|     Please re-enter the ID or x to cancel     |";
			gotoxy(50, i++);
			cout << "|-----------------------------------------------|";
			gotoxy(50, i++);
			cout << "| Enter ID here:                                |";
			gotoxy(50, i);
			cout << "|===============================================|";
			gotoxy(68, --i);
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
		cout << "|   Please enter the Date Sold of the vehicle   |";
		gotoxy(50, i++);
		cout << "|            you would like to sell             |";
		gotoxy(50, i++);
		cout << "|-----------------------------------------------|";
		gotoxy(50, i++);
		cout << "| Enter Date here:                              |";
		gotoxy(50, i);
		cout << "|===============================================|";
		gotoxy(70, --i);
		string date;
		cin >> date;

		i = 9;
		system("CLS");
		gotoxy(50, i++);
		cout << "|===============================================|";
		gotoxy(50, i++);
		cout << "|  Please enter the Price Sold of the vehicle   |";
		gotoxy(50, i++);
		cout << "|            you would like to sell             |";
		gotoxy(50, i++);
		cout << "|-----------------------------------------------|";
		gotoxy(50, i++);
		cout << "| Enter Price here:                              |";
		gotoxy(50, i);
		cout << "|===============================================|";
		gotoxy(71, --i);
		string price;
		cin >> price;

		EditDatabaseController::sellVehicle(id, date, price);

	}
}
