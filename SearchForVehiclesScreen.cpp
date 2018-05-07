#include "SearchForVehiclesScreen.h"
#include "ViewCarLotController.h"
#include "SearchResultsScreen.h"
#include "Utilities.h"

#include <string>
#include <iostream>

using namespace std;

void SearchForVehiclesScreen::showSearchMenu()
{
	int i = 9;
	int choice;
	system("CLS");
	gotoxy(50, i++);
	cout << "|===============================================|";
	gotoxy(50, i++);
	cout << "| What category would you prefer to search for? |";
    gotoxy(50, i++);
	cout << "|-----------------------------------------------|";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|                  [1]. Make                    |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|                  [2]. Model                   |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|                  [3]. Year                    |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|                  [4]. Cancel                  |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|-----------------------------------------------|";
	gotoxy(50, i++);
	cout << "| Enter choice here:                            |";
	gotoxy(50, i);
	cout << "|===============================================|";
	gotoxy(71, --i);
	cin >> choice;

	string make, model, year;
	switch (choice)
	{
	case 1:
		gotoxy(50, i);
		cout << "| Enter the make:                          ";
		gotoxy(68, i);
		cin >> make;
		SearchResultsScreen::showResultScreen(ViewCarLotController::searchVehicle(1, make));
		break;
	case 2:
		gotoxy(50, i);
		cout << "| Enter the model:                          ";
		gotoxy(69, i);
		cin >> model;
		SearchResultsScreen::showResultScreen(ViewCarLotController::searchVehicle(2, model));
		break;
	case 3:		
		gotoxy(50, i);
		cout << "| Enter the year:                           ";
		gotoxy(68, i);
		cin >> year;
		SearchResultsScreen::showResultScreen(ViewCarLotController::searchVehicle(3, year));
		break;
	case 4:
		break;
	}	
	gotoxy(52, i);

}
