#include "SearchResultsScreen.h"
#include "SearchForVehiclesScreen.h"
#include "Utilities.h"
#include "View_Cars_Main.h"
#include <iostream>

using namespace std;

void SearchResultsScreen::showResultScreen(vector<CarModel> resultsList)
{
	system("CLS");
	gotoxy(50, 8);
	cout << "|=====================================================|\n";
	gotoxy(50, 9);
	cout << "|                    Search Results                   |\n";
	gotoxy(50, 10);
	cout << "|=====================================================|\n";
	gotoxy(50, 11);
	cout << "|   ID\tMAKE\t\tMODEL\t\tYEAR    |\n";
	gotoxy(50, 12);
	cout << "|-----------------------------------------------------|\n";
	int i = 13;
	for (const auto& car1 : resultsList) {
		gotoxy(50, i++);
		cout << "|   " << car1.id << "\t\t" << car1.make << "\t\t" << car1.model << "\t\t" << car1.year << "\t|" << endl;
	}
	gotoxy(50, i++);
	cout << "|                                                     |\n";
	gotoxy(50, i++);
	cout << "|-----------------------------------------------------|\n";
	gotoxy(50, ++i);
	cout << "|=====================================================|\n";
	gotoxy(50, --i);
	cout << "|  Would you like to search again?(Y/N):              |\n";
	string choice;
	gotoxy(83, i);
	cin >> choice;
	if (choice.compare("y") == 0 || choice.compare("Y") == 0)
	{
		SearchForVehiclesScreen::showSearchMenu();
	}
	else
	{
		View_Cars_Main::viewCarsMenu();
	}
}
