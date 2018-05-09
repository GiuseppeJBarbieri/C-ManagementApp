#include "Customer_Information_Main.h"
#include "ShowCustomerInformationScreen.h"
#include "SearchCustomerInfoScreen.h"

#include "Utilities.h"
#include <string>
#include <iostream>

using namespace std;

void Customer_Information_Main::customerInfoMenu()
{
	system("color 04");
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
	cout << "|        [2]. Search for Customer               |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|        [3]. Exit                              |";
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
		ShowCustomerInformationScreen::showAllCustomers();
		break;
	case 2:
		SearchCustomerInfoScreen::showSearchMenu();
		break;
	case 3:
		break;
	}
	
}
