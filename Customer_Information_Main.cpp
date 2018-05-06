#include "Customer_Information_Main.h"
#include "Utilities.h"
#include <string>
#include <iostream>

using namespace std;

void Customer_Information_Main::customerInfoMenu()
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
	cout << "|        [1]. View Customer Information         |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|        [2]. Exit          |";
	gotoxy(50, i++);
	cout << "|                                               |";	
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

		break;
	}
	
}
