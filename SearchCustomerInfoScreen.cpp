#include "SearchCustomerInfoScreen.h"
#include "CustomerSearchResultsScreen.h"
#include "CustomerSearchController.h"
#include "Utilities.h"

#include <string>
#include <iostream>

using namespace std;

void SearchCustomerInfoScreen::showSearchMenu()
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
	cout << "|                  [1]. Last Name               |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|                  [2]. Id                      |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|                  [3]. Cancel                  |";
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

	string lastName, id;
	switch (choice)
	{
	case 1:
		gotoxy(50, i);
		cout << "| Enter the Last Name:                          ";
		gotoxy(73, i);
		cin >> lastName;
		CustomerSearchResults::showCustomerResultScreen(CustomerSearchController::searchCustomer(1, lastName));
		break;
	case 2:
		gotoxy(50, i);
		cout << "| Enter the Id:                          ";
		gotoxy(66, i);
		cin >> id;
		CustomerSearchResults::showCustomerResultScreen(CustomerSearchController::searchCustomer(2, id));
		break;
	case 3:
		break;
	}
	gotoxy(52, i);
}
