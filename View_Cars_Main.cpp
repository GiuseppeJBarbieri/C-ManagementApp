#include "View_Cars_Main.h"
#include "ViewAllCarsScreen.h"
#include "SearchForVehiclesScreen.h"
#include "Utilities.h"

#include <string>
#include <iostream>

using namespace std;

void View_Cars_Main::viewCarsMenu()
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
	cout << "|        [1]. View All Vehicles(simple)         |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|        [2]. View All Vehicles(extended)       |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|        [3]. Search For Vehicle                |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|        [4]. Exit                              |";
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
		ViewAllCarsScreen::showAllCars();
		break;
	case 2:
		ViewAllCarsScreen::showAllCarsAdv();
		break;
	case 3:
		SearchForVehiclesScreen::showSearchMenu();
		break;
	case 4:
		break;
	}
}

