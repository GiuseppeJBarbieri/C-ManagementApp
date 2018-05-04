#include "ViewAllCarsScreen.h"
#include "ViewCarLotController.h"
#include "Utilities.h"

#include <string>
#include <iostream>

using namespace std;

void ViewAllCarsScreen::showAllCars()
{
	system("CLS");
	vector<CarModel> vehicleDB = ViewCarLotController::getAllVehicles();
	gotoxy(50, 8);
	cout << "|=====================================================|\n";
	gotoxy(50, 9);
	cout << "|                   Vehicle Database                  |\n";
	gotoxy(50, 10);
	cout << "|=====================================================|\n";
	gotoxy(50, 11);
	cout << "|   ID\tMAKE\t\tMODEL\t\tYEAR    |\n";
	gotoxy(50, 12);
	cout << "|-----------------------------------------------------|\n";
	int i = 13;
	for (const auto& car1 : vehicleDB) {
		gotoxy(50, i++);
		cout <<"|   " << car1.id << "\t\t" << car1.make << "\t\t" << car1.model << "\t\t" << car1.year << "\t|" << endl;
	}
	gotoxy(50, i++);
	cout << "|=====================================================|\n";
	gotoxy(50, ++i);
}
