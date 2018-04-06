#include "Edit_Cars_Main.h"
#include "Utilities.h"
#include <string>
#include <iostream>

using namespace std;

void Edit_Cars_Main::editCarsMenu()
{
	system("CLS");
	gotoxy(50, 9);
	cout << "\tEDIT VEHICLES\n";
	gotoxy(50, 10);
	cout << "--------------------------";
	gotoxy(50, 11);
	cout << "1. Sell Vehicle\n";
	gotoxy(50, 12);
	cout << "2. Trade Vehicle\n";
	gotoxy(50, 13);
	cout << "3. Buy Vehicle\n";
	gotoxy(50, 14);
	system("pause");
}
