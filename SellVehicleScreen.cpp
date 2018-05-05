#include "SellVehicleScreen.h"
#include "Utilities.h"

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
