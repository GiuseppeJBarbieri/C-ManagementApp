#include "Edit_Cars_Main.h"
#include "Utilities.h"
#include "BuyVehicleScreen.h"
#include "SellVehicleScreen.h"

#include <string>
#include <iostream>

using namespace std;

void Edit_Cars_Main::editCarsMenu()
{
	int i = 9;
	system("CLS");
	gotoxy(50, i++);
	cout << "|===============================================|";
	gotoxy(50, i++);
	cout << "|          What would you like to do?           |";
	gotoxy(50, i++);
	cout << "|-----------------------------------------------|";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|            [1]. Sell a Vehicle                |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|            [2]. Trade Vehicle                 |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|            [3]. Buy Vehicle                   |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|            [4]. Exit                          |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|-----------------------------------------------|";
	gotoxy(50, i++);
	cout << "| Enter choice here:                            |";
	gotoxy(50, i);
	cout << "|===============================================|";
	gotoxy(71, --i);

	int selection;
	cin >> selection;	

	switch (selection)
	{
	case 1:
		SellVehicleScreen::sellVehicleScreen();
		break;
	case 2:
		cout << "Selted";
		break;
	case 3:
		BuyVehicleScreen::buyVehicleScreen();
		break;
	case 4:
		break;
	}
	gotoxy(52, i);
}
