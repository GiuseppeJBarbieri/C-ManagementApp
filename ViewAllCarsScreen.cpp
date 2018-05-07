#include "ViewAllCarsScreen.h"
#include "ViewCarLotController.h"
#include "Utilities.h"
#include "View_Cars_Main.h"
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
		cout <<"|   " << car1.id << "\t\t" << car1.make << "\t\t" << car1.model << "\t\t" << car1.year << "\t|";
	}
	gotoxy(50, i++);
	cout << "|-----------------------------------------------------|\n";
	gotoxy(50, ++i);
	cout << "|=====================================================|\n";
	gotoxy(50, --i);
	cout << "|                                                     |\n";
	gotoxy(53, i);
	system("pause");
	View_Cars_Main::viewCarsMenu();
}

void ViewAllCarsScreen::showAllCarsAdv()
{
	system("CLS");
	vector<CarModel> vehicleDB = ViewCarLotController::getAllVehicles();
	vector<CarInfoModel> vehicleinfoDB = ViewCarLotController::getAllVehiclesInfo();
	gotoxy(30, 8);
	cout << "|=======================================================================================|\n";
	gotoxy(30, 9);
	cout << "|                            Vehicle Database(Advanced)                                 |\n";
	gotoxy(30, 10);
	cout << "|=======================================================================================|\n";
	gotoxy(30, 11);
	cout << "|   ID\tMAKE\tMODEL\tYEAR\tTYPE\tDRIVE LINE\tENGINE TYPE\tENGINE SIZE   |\n";
	gotoxy(30, 12);
	cout << "|---------------------------------------------------------------------------------------|\n";
	int i = 13;
	for (const auto& car1 : vehicleDB) {
		gotoxy(30, i++);
		cout << "|   " << car1.id << "\t" << car1.make << "\t" << car1.model << "\t" << car1.year << "\t";
	}
	i = 13;
	for (const auto& car2 : vehicleinfoDB) {
		gotoxy(64, i++);
		cout << car2.type << "\t" << car2.driveLine << "\t\t" << car2.engineType << "\t\t" << car2.engineSize << "\t      |";
	}
	gotoxy(30, i++);
	cout << "|---------------------------------------------------------------------------------------|\n";
	gotoxy(30, ++i);
	cout << "|=======================================================================================|\n";
	gotoxy(30, --i);
	cout << "|                                                                                       |\n";
	gotoxy(53, i);
	system("pause");
	View_Cars_Main::viewCarsMenu();
}
