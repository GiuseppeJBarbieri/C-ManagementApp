#include "BuyVehicleScreen.h"
#include "EditDatabaseController.h"
#include "Edit_Cars_Main.h"
#include "Utilities.h"

#include <iostream>
#include <string>

using namespace std;

void BuyVehicleScreen::buyVehicleScreen()
{
	string make;
	string model;
	string year;
	string type;
	string driveline;
	string enginetype;
	string enginesize;
	string pricepurchased;
	string daterecieved;
	string setAskingPrice;

	int i = 9;
	system("CLS");
	gotoxy(50, i++);
	cout << "|===============================================|";
	gotoxy(50, i++);
	cout << "|       Please enter the information below      |";
	gotoxy(50, i++);
	cout << "|-----------------------------------------------|";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i);
	cout << "|  Make:                                        |";
	gotoxy(50, 15);
	cout << "|                                               |";
	gotoxy(50, 16);
	cout << "|-----------------------------------------------|";
	gotoxy(50, 17);
	cout << "|                                               |";
	gotoxy(50, 18);
	cout << "|===============================================|";
	gotoxy(59, i);
	cin >> make;
	gotoxy(50, i);
	cout << "|  Model:                                       |"; 
	gotoxy(60, i);
	cin >> model;
	gotoxy(50, i);
	cout << "|  Year:                                        |";
	gotoxy(59, i);
	cin >> year;
	gotoxy(50, i);
	cout << "|  Type:                                        |"; 
	gotoxy(59, i);
	cin >> type;
	gotoxy(50, i);
	cout << "|  Drive Line:                                  |";
	gotoxy(65, i);
	cin >> driveline;
	gotoxy(50, i);
	cout << "|  Engine Type:                                 |"; 
	gotoxy(66, i);
	cin >> enginetype;
	gotoxy(50, i);
	cout << "|  Engine Size:                                 |"; 
	gotoxy(66, i);
	cin >> enginesize;
	gotoxy(50, i);
	cout << "|  Price Purchased:                             |"; 
	gotoxy(70, i);
	cin >> pricepurchased;
	gotoxy(50, i);
	cout << "|  Date Recieved:                               |";
	gotoxy(68, i);
	cin >> daterecieved;	
	gotoxy(50, i);
	cout << "|  Asking Price:                                |";
	gotoxy(67, i);
	cin >> daterecieved;

	EditDatabaseController::buyVehicle(make, model, year, type, driveline, enginetype, enginesize, pricepurchased, setAskingPrice, daterecieved);

	gotoxy(50, i);
	cout << "|  Vehicle Added!                               |";
	gotoxy(50, 17);
	cout << "|  Would you like to search again?(Y/N):        |\n";
	string choice;
	gotoxy(91, 17);
	cin >> choice;
	if (choice.compare("y") == 0 || choice.compare("Y") == 0)
	{
		Edit_Cars_Main::editCarsMenu();
	}
	
}
